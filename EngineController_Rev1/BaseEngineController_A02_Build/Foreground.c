/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1615
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Apr 07 14:22:48 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Foreground.h"

/* Include model header file for global data */
#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

/* Named constants for Stateflow: '<S19>/Chart' */
#define BaseEngineController_A02_IN_Init (1U)
#define BaseEngineController_A02_IN_default (2U)
#define BaseEngineController_A02_IN_reset (3U)

/* Named constants for Stateflow: '<S13>/ETC Test  Manager' */
#define BaseEngineController_A02_IN_ForcedShutdown (1U)
#define BaseEngineController_A02_IN_LowAdapt (2U)
#define BaseEngineController_A02_IN_PassThrough (3U)
#define BaseEngineController_A02_IN_SpringTest (4U)
#define BaseEngineController_A02_IN_SpringTestComplete (5U)
#define BaseEngineController_A02_IN_SpringTestSetpoint (6U)

/* Named constants for Stateflow: '<S119>/Remy Control' */
#define BaseEngineController_A02_IN_cranking (1U)
#define BaseEngineController_A02_IN_generating (3U)
#define BaseEngineController_A02_IN_idle (4U)
#define BaseEngineController_A02_IN_startFail (5U)

/* Named constants for Stateflow: '<S275>/Baro Stall State Delay' */
#define BaseEngineController_A02_IN_CrankRun (1U)
#define BaseEngineController_A02_IN_Stall (2U)
#define BaseEngineController_A02_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S325>/Engine State Machine' */
#define BaseEngineController_A02_IN_Crank (1U)
#define BaseEngineController_A02_IN_Run (2U)
#define BaseEngineController_A02_IN_Stall_d (3U)

/*
 * Output and update for enable system:
 *    '<S151>/Multiply and Divide, avoiding divde by zero'
 *    '<S303>/Multiply and Divide, avoiding divde by zero1'
 */
void BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(boolean_T
  rtu_0, real_T rtu_X1, real_T rtu_X2, real_T rtu_Divide1, real_T rtu_Divide2,
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02 *localB)
{
  /* Outputs for Enabled SubSystem: '<S151>/Multiply and Divide, avoiding divde by zero' incorporates:
   *  EnablePort: '<S156>/Enable'
   */
  if (rtu_0) {
    /* Product: '<S156>/charge mass' */
    localB->s156_chargemass = rtu_X1 * rtu_X2 / rtu_Divide1 / rtu_Divide2;
  }

  /* End of Outputs for SubSystem: '<S151>/Multiply and Divide, avoiding divde by zero' */
}

/*
 * Start for enable system:
 *    '<S320>/PassThrough1'
 *    '<S320>/PassThrough2'
 */
void BaseEngineController_A02_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S334>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S320>/PassThrough1'
 *    '<S320>/PassThrough2'
 */
void BaseEngineController_A02_PassThrough1(boolean_T rtu_0, real_T rtu_1, real_T
  *rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S320>/PassThrough1' incorporates:
   *  EnablePort: '<S334>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S334>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S320>/PassThrough1' */
}

/*
 * Output and update for action system:
 *    '<S499>/If Action Subsystem'
 *    '<S499>/If Action Subsystem1'
 *    '<S499>/If Action Subsystem2'
 *    '<S521>/If Action Subsystem'
 *    '<S521>/If Action Subsystem1'
 *    '<S521>/If Action Subsystem2'
 *    '<S522>/If Action Subsystem'
 *    '<S522>/If Action Subsystem1'
 *    '<S522>/If Action Subsystem2'
 *    '<S523>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_A02_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S502>/In' */
  (*rty_Out) = rtu_0;
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Init(void)
{
  /* S-Function Block: <S577>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s577_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S513>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s513_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Initial conditions for function-call system: '<S363>/Temp Sensors' */

  /* S-Function Block: <S614>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s614_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S623>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s623_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S325>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S344>:4' */
  BaseEngineController_A02_DWork.s344_is_c2_BaseEngineController_A02 =
    BaseEngineController_A02_IN_Stall_d;

  /* Entry 'Stall': '<S344>:1' */
  BaseEngineController_A02_B.s344_State = 1U;

  /* InitializeConditions for Stateflow: '<S119>/Remy Control' */
  BaseEngineController_A02_DWork.s127_is_active_c5_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s127_count = 0.0;
  BaseEngineController_A02_B.s127_APP = 0.0;
  BaseEngineController_A02_B.s127_remyEn = 0.0;
  BaseEngineController_A02_B.s127_maxRPM = 0.0;
  BaseEngineController_A02_B.s127_motorTQ = 0.0;
  BaseEngineController_A02_B.s127_generatingTQ = 0.0;

  /* S-Function Block: <S593>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s593_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S638>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s638_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S655>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s655_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Atomic SubSystem: '<S278>/Base TPS Request' */

  /* S-Function Block: <S336>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s336_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S320>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s320_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S278>/Base TPS Request' */

  /* S-Function Block: <S603>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s603_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S349>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s349_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S275>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s275_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S275>/Baro Stall State Delay' */
  BaseEngineController_A02_DWork.s280_TOld = 0.0;
  BaseEngineController_A02_B.s280_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S280>:4' */
  BaseEngineController_A02_DWork.s280_is_c19_BaseEngineController_A02 =
    BaseEngineController_A02_IN_Stall;

  /* Entry 'Stall': '<S280>:1' */
  BaseEngineController_A02_B.s280_Enable = TRUE;

  /* S-Function Block: <S559>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s559_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S501>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s501_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S294>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s294_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S341>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s341_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S547>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s547_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S543>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s543_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S21>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s21_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S530>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s530_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S19>/Chart' */
  BaseEngineController_A02_DWork.s20_is_active_c1_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_B.s20_enout = 0.0;

  /* S-Function Block: <S773>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s773_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S351>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s351_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S22>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s22_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S347>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s347_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S551>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s551_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S567>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s567_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S385>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s385_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S585>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s585_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S307>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s307_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S363>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_6989p0004 */
  BaseEngineController_A02_DWork.s363_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S325>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_5692p0001 */
  BaseEngineController_A02_DWork.s325_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S526>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_6806p0004 */
  BaseEngineController_A02_DWork.s526_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1409p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1408p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7767p0005 */

  /* Enable for function-call system: '<S5>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S747>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S752>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_7280p0004 */
  BaseEngineController_A02_DWork.s752_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S747>/EST Enable TDC Counter' */
  BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S363>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_6989p0004 */
  BaseEngineController_A02_DWork.s363_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S325>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_5692p0001 */
  BaseEngineController_A02_DWork.s325_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S7>/Stall' */
  BaseEngineController_A02_DWork.s7_Stall_MODE = FALSE;

  /* End of Disable for SubSystem: '<S7>/Stall' */

  /* Disable for Enabled SubSystem: '<S7>/Crank' */
  BaseEngineController_A02_DWork.s7_Crank_MODE = FALSE;

  /* End of Disable for SubSystem: '<S7>/Crank' */

  /* Disable for Enabled SubSystem: '<S275>/Capture Signal At Startup' */
  /* Disable for Enabled SubSystem: '<S281>/Collect Average' */
  BaseEngineController_A02_DWork.s281_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S281>/Collect Average' */
  BaseEngineController_A02_DWork.s275_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S275>/Capture Signal At Startup' */

  /* Level2 S-Function Block: '<S526>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_6806p0004 */
  BaseEngineController_A02_DWork.s526_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S278>/Capture ECT At Startup' */
  /* Disable for Enabled SubSystem: '<S321>/Collect Average' */
  BaseEngineController_A02_DWork.s321_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S321>/Collect Average' */
  BaseEngineController_A02_DWork.s278_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S278>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S7>/Run' */

  /* Level2 S-Function Block: '<S121>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_4024p0001 */
  BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Atomic SubSystem: '<S121>/Fuel System Manager' */
  /* Disable for Atomic SubSystem: '<S132>/Injector Manager' */
  /* Disable for Enabled SubSystem: '<S145>/Delta TPS Transient Fueling' */
  /* Disable for Enabled SubSystem: '<S150>/ECT Transient Fueling' */
  /* Disable for Outport: '<S153>/Mult' */
  BaseEngineController_A02_B.s153_motohawk_interpolation_1d = 1.0;
  BaseEngineController_A02_DWork.s150_ECTTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S150>/ECT Transient Fueling' */

  /* Disable for Outport: '<S150>/DeltaTPSMult' */
  BaseEngineController_A02_B.s150_Product1 = 1.0;
  BaseEngineController_A02_DWork.s145_DeltaTPSTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S145>/Delta TPS Transient Fueling' */
  /* End of Disable for SubSystem: '<S132>/Injector Manager' */
  /* End of Disable for SubSystem: '<S121>/Fuel System Manager' */
  BaseEngineController_A02_DWork.s7_Run_MODE = FALSE;

  /* End of Disable for SubSystem: '<S7>/Run' */
  /* Level2 S-Function Block: '<S6>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1409p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1408p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S15>/PassThrough1' */
  BaseEngineController_A02_DWork.s15_PassThrough1_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S15>/PassThrough3' */
  for (i = 0; i < 32; i++) {
    /* Disable for Outport: '<S94>/Out1' */
    BaseEngineController_A02_B.s15_Merge1[i] = 0;

    /* Disable for Outport: '<S96>/Out1' */
    BaseEngineController_A02_B.s15_Merge1[i] = 0;
  }

  /* End of Disable for SubSystem: '<S15>/PassThrough1' */
  BaseEngineController_A02_DWork.s15_PassThrough3_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/PassThrough3' */

  /* Disable for Enabled SubSystem: '<S15>/SequenceCutMachine' */

  /* Level2 S-Function Block: '<S99>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC1_EVENT_1156p0004 */
  BaseEngineController_A02_DWork.s99_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_A02_DWork.s15_SequenceCutMachine_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S15>/PassThrough4' */
  for (i = 0; i < 8; i++) {
    /* Disable for Outport: '<S99>/Out1' */
    BaseEngineController_A02_B.s109_CutArray[i] = 0;

    /* Disable for Outport: '<S97>/Out1' */
    BaseEngineController_A02_B.s97_DataTypeConversion[i] = FALSE;
  }

  /* End of Disable for SubSystem: '<S15>/SequenceCutMachine' */
  BaseEngineController_A02_DWork.s15_PassThrough4_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/PassThrough4' */

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_7767p0005 */

  /* Disable for function-call system: '<S5>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S747>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S752>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_7280p0004 */
  BaseEngineController_A02_DWork.s752_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S747>/EST Enable TDC Counter' */
  BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S6>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S29>/PassThrough' */
  /* Disable for Outport: '<S51>/Out1' */
  BaseEngineController_A02_B.s51_In1 = 10.0;
  BaseEngineController_A02_DWork.s29_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S29>/PassThrough' */
  BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE = FALSE;

  /* End of Disable for SubSystem: '<S6>/Electronic Throttle Controller' */

  /* Disable for Enabled SubSystem: '<S15>/PassThrough5' */
  /* Disable for Outport: '<S98>/Out1' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s98_DataTypeConversion1[i] = FALSE;
  }

  /* End of Outport: '<S98>/Out1' */
  BaseEngineController_A02_DWork.s15_PassThrough5_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/PassThrough5' */

  /* Disable for Enabled SubSystem: '<S278>/Capture IAT At Startup' */
  /* Disable for Enabled SubSystem: '<S322>/Collect Average' */
  BaseEngineController_A02_DWork.s322_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S322>/Collect Average' */
  BaseEngineController_A02_DWork.s278_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S278>/Capture IAT At Startup' */
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S363>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_6989p0004 */
  BaseEngineController_A02_DWork.s363_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S325>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_5692p0001 */
  BaseEngineController_A02_DWork.s325_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S7>/Stall' */

  /* InitializeConditions for UnitDelay: '<S247>/Unit Delay' */
  BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S248>/Unit Delay' */
  BaseEngineController_A02_DWork.s248_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S7>/Stall' */

  /* Start for Atomic SubSystem: '<S278>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S320>/PassThrough1' */
  BaseEngineController_A02_PassThrough1_Start
    (&BaseEngineController_A02_B.s320_Merge);

  /* End of Start for SubSystem: '<S320>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S320>/PassThrough2' */
  BaseEngineController_A02_PassThrough1_Start
    (&BaseEngineController_A02_B.s320_Merge);

  /* End of Start for SubSystem: '<S320>/PassThrough2' */

  /* End of Start for SubSystem: '<S278>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S275>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S281>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S284>/Unit Delay1' */
  BaseEngineController_A02_DWork.s284_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S281>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S281>/Unit Delay' */
  BaseEngineController_A02_DWork.s281_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S275>/Capture Signal At Startup' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S526>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_6806p0004 */
  BaseEngineController_A02_DWork.s526_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S295>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S299>/Out1' */
  BaseEngineController_A02_B.s295_Merge = 0.005;

  /* End of Start for SubSystem: '<S295>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S295>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S297>/Out1' */
  BaseEngineController_A02_B.s295_Merge = 0.005;

  /* End of Start for SubSystem: '<S295>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S296>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S302>/Out1' */
  BaseEngineController_A02_B.s296_Merge = 0.005;

  /* End of Start for SubSystem: '<S296>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S296>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S300>/Out1' */
  BaseEngineController_A02_B.s296_Merge = 0.005;

  /* End of Start for SubSystem: '<S296>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S294>/Integrate Offset To ECT' */

  /* S-Function Block: <S313>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s313_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S294>/Integrate Offset To ECT' */

  /* Start for Enabled SubSystem: '<S278>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S321>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S338>/Unit Delay1' */
  BaseEngineController_A02_DWork.s338_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S321>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S321>/Unit Delay' */
  BaseEngineController_A02_DWork.s321_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S278>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S7>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S121>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_4024p0001 */
  BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 = 0;

  /* Start for Atomic SubSystem: '<S121>/O2 Control' */

  /* Start for Atomic SubSystem: '<S135>/O2 PID Controller' */

  /* Start for InitialCondition: '<S222>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_A02_B.s222_Multiplyby10ifnotyetenabled = 1.0;
  BaseEngineController_A02_DWork.s222_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S135>/O2 PID Controller' */
  /* End of Start for SubSystem: '<S121>/O2 Control' */

  /* Start for Atomic SubSystem: '<S121>/Fuel System Manager' */

  /* Start for Atomic SubSystem: '<S132>/Injector Manager' */

  /* Start for Enabled SubSystem: '<S145>/Delta TPS Transient Fueling' */

  /* Start for Enabled SubSystem: '<S150>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S153>/Mult' */
  BaseEngineController_A02_B.s153_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S150>/ECT Transient Fueling' */

  /* S-Function Block: <S154>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s154_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S155>/Unit Delay' */
  BaseEngineController_A02_DWork.s155_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S150>/DeltaTPSMult' */
  BaseEngineController_A02_B.s150_Product1 = 1.0;

  /* End of Start for SubSystem: '<S145>/Delta TPS Transient Fueling' */

  /* End of Start for SubSystem: '<S132>/Injector Manager' */

  /* End of Start for SubSystem: '<S121>/Fuel System Manager' */

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S121>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S121>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S186>/IdleStateMachine' */
    BaseEngineController_A02_IdleStateMachine_Init();

    /* S-Function Block: <S185>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s185_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S189>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s189_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* InitializeConditions for Atomic SubSystem: '<S134>/AiflowOffset' */

    /* S-Function Block: <S192>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s192_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* End of InitializeConditions for SubSystem: '<S134>/AiflowOffset' */

    /* S-Function Block: <S217>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s217_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S121>/MaxGovernor' */

    /* S-Function Block: <S167>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s167_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S179>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s179_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S121>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S242>/Initial Condition is True' */
    BaseEngineController_A02_DWork.s242_InitialConditionisTrue_DSTATE = TRUE;
  }

  /* InitializeConditions for Atomic SubSystem: '<S121>/O2 Control' */

  /* InitializeConditions for Atomic SubSystem: '<S135>/O2 PID Controller' */
  /* InitializeConditions for UnitDelay: '<S234>/Unit Delay' */
  BaseEngineController_A02_DWork.s234_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S231>/Unit Delay' */
  BaseEngineController_A02_DWork.s231_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S230>/Unit Delay' */
  BaseEngineController_A02_DWork.s230_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S231>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s231_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S227>/Unit Delay1' */
  BaseEngineController_A02_DWork.s227_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S235>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s235_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S227>/Unit Delay' */
  BaseEngineController_A02_DWork.s227_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S237>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s237_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S227>/Unit Delay2' */
  BaseEngineController_A02_DWork.s227_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S236>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s236_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S135>/O2 PID Controller' */
  /* End of InitializeConditions for SubSystem: '<S121>/O2 Control' */

  /* End of Start for SubSystem: '<S7>/Run' */
  /* Start for S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1409p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1408p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S15>/SequenceCutMachine' */

  /* Start for function-call system: '<S99>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S109>/CycleCounter' */
  BaseEngineController_A02_B.s109_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S109>/CycleNumber' */
  BaseEngineController_A02_B.s109_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_1156p0004 */
  BaseEngineController_A02_DWork.s99_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S99>/Unit Delay2' */
  BaseEngineController_A02_DWork.s99_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S99>/Unit Delay1' */
  BaseEngineController_A02_DWork.s99_UnitDelay1_DSTATE = 1U;

  /* End of Start for SubSystem: '<S15>/SequenceCutMachine' */

  /* Start for function-call system: '<S5>/Coil Control' */

  /* Start for Atomic SubSystem: '<S747>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S752>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_7280p0004 */
  BaseEngineController_A02_DWork.s752_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S747>/EST Enable TDC Counter' */

  /* S-Function Block: <S675>/Spark Sequence */
  {
    NativeError_S createErrorResult;
    int32_T i;
    extern void SparkSeqDiagCallback_19(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    if ((EST_SequenceType_DataStore()) == 0) {
      S_ESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      CreateObj.u1NumPulsesToCreate = 1;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_19;
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        CreateObj.s2PulseOffsetDegATDC1Arr[0] = (EncoderTDCAngles_DataStore())[i];
        if ((EST_InitialPin_DataStore()) + i <= 43) {
          CreateObj.ReportsObj.uDiagCbackUserData = i;
          createErrorResult = CreateResource((E_ModuleResource)
            ((EST_InitialPin_DataStore()) + i), &CreateObj, BEHAVIOUR_EST_SEQ);
        }
      }
    } else if ((EST_SequenceType_DataStore()) == 1) {
      S_BankedESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_19;
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        CreateObj.s2OffsetDegATDC1 = (EncoderTDCAngles_DataStore())[i];
        if ((EST_InitialPin_DataStore()) + i <= 43) {
          CreateObj.ReportsObj.uDiagCbackUserData = i;
          createErrorResult = CreateResource((E_ModuleResource)
            ((EST_InitialPin_DataStore()) + i), &CreateObj,
            BEHAVIOUR_BANK_EST_SEQ);
        }
      }
    } else if ((EST_SequenceType_DataStore()) == 2) {
      S_ESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      CreateObj.u1NumPulsesToCreate = 2;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_19;

      /* Batch sequences may only be used with an even number of cylinders */
      if (((EncoderNumCylinders_DataStore()) % 2) == 0) {
        int half_cylinders = (EncoderNumCylinders_DataStore()) / 2;
        for (i=0; i < half_cylinders; i++) {
          int cyl = (EncoderTDCOrder_DataStore())[i];
          int opp_cyl = (EncoderTDCOrder_DataStore())[i + half_cylinders];
          int pin = i;
          sint2 p0;
          sint2 p1;
          if (cyl < half_cylinders) {
            p0 = (EncoderTDCAngles_DataStore())[cyl];
            p1 = (EncoderTDCAngles_DataStore())[opp_cyl];
            (ESTPinMapArr_PulseNum_19_DataStore())[cyl] = 0;
            (ESTPinMapArr_PulseNum_19_DataStore())[opp_cyl] = 1;/* p1 aligns with opp_cyl */
          } else {
            p0 = (EncoderTDCAngles_DataStore())[opp_cyl];
            p1 = (EncoderTDCAngles_DataStore())[cyl];
            (ESTPinMapArr_PulseNum_19_DataStore())[cyl] = 1;
            (ESTPinMapArr_PulseNum_19_DataStore())[opp_cyl] = 0;/* p0 aligns with opp_cyl */
          }

          (ESTPinMapArr_Resource_19_DataStore())[cyl] = (E_ModuleResource)
            ((EST_InitialPin_DataStore()) + pin);
          (ESTPinMapArr_Resource_19_DataStore())[opp_cyl] = (E_ModuleResource)
            ((EST_InitialPin_DataStore()) + pin);
          memcpy((uint1 *)&CreateObj.u1NumPulsesToCreate + sizeof(uint1), (uint1
                  *)&p0, sizeof(sint2));
          memcpy((uint1 *)&CreateObj.u1NumPulsesToCreate + sizeof(uint1) +
                 sizeof(sint2), (uint1 *)&p1, sizeof(sint2));
          if ((EST_InitialPin_DataStore()) + pin <= 43) {
            CreateObj.ReportsObj.uDiagCbackUserData = pin;
            createErrorResult = CreateResource((E_ModuleResource)
              ((EST_InitialPin_DataStore()) + pin), &CreateObj,
              BEHAVIOUR_EST_SEQ);
          }
        }
      }
    } else if ((EST_SequenceType_DataStore()) == 3) {
      S_MuxESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      if ((EncoderNumCylinders_DataStore()) < MAX_MUX_PULSES_SUPPORTED) {
        CreateObj.u1NumPulsesToCreate = (EncoderNumCylinders_DataStore());
      } else {
        CreateObj.u1NumPulsesToCreate = MAX_MUX_PULSES_SUPPORTED;
      }

      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_19;
      CreateObj.ReportsObj.uDiagCbackUserData = 0;
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        if (i < MAX_MUX_PULSES_SUPPORTED) {
          CreateObj.s2PulseOffsetDegATDC1Arr[i] = (EncoderTDCAngles_DataStore())
            [i];
        }
      }

      createErrorResult = CreateResource((E_ModuleResource)
        (EST_InitialPin_DataStore()), &CreateObj, BEHAVIOUR_MUX_EST_SEQ);
    }

    {
      extern uint8_T EST_SparkCreate;
      if (SUCCESS(createErrorResult))
        EST_SparkCreate = 0;
      else
        EST_SparkCreate = (uint8_T) GetErrorCode(createErrorResult);
    }
  }

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_7767p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S6>/Electronic Throttle Controller' */

  /* Start for Enabled SubSystem: '<S29>/PassThrough' */
  /* VirtualOutportStart for Outport: '<S51>/Out1' */
  BaseEngineController_A02_B.s51_In1 = 10.0;

  /* End of Start for SubSystem: '<S29>/PassThrough' */

  /* S-Function Block: <S62>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s62_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S13>/ETC Test  Manager' */
  BaseEngineController_A02_DWork.s25_TimerOld = 0.0;

  /* Entry: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
  /* Transition: '<S25>:7' */
  BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
    BaseEngineController_A02_IN_PassThrough;

  /* Entry 'PassThrough': '<S25>:1' */
  BaseEngineController_A02_B.s25_DC_Override = 0;
  BaseEngineController_A02_B.s25_TestComplete = FALSE;
  BaseEngineController_A02_B.s25_SetpointMode = 0;
  BaseEngineController_A02_B.s25_TestTime = 0.0;

  /* S-Function Block: <S54>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s54_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_DWork.s42_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S47>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s47_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S6>/Electronic Throttle Controller' */

  /* S-Function Block: <S679>/Injector Sequence */
  {
    S_SeqOutAttributes DynamicObj;
    NativeError_S createErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult2 = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    int32_T i;
    extern void InjectorSeqDiagCallback_38(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_38[8];
    extern int32_T InjectorSeqDiagLastPin_38;
    DynamicObj.uMinPulseDurationInMicroSecs = 1500;
    for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
      InjectorSeqDiagInfo_38[i].u4TXTimeInMicroSecs = 0xFFFFFFFF;
      InjectorSeqDiagInfo_38[i].u1TXCnt = 1;
    }

    InjectorSeqDiagLastPin_38 = -1;
    DynamicObj.eDiagCond = RES_ENABLED;
    DynamicObj.eUpdateMode = SEQ_UPDATE_OS_PROTECTED;
    DynamicObj.uValidAttributesMask = USE_SEQ_UPDATE_MODE | USE_SEQ_MIN_DURATION
      | USE_SEQ_DIAG_REPORT_COND;
    if ((INJ_SequenceType_DataStore()) == 0) {
      if ((INJ_Behavior_DataStore()) == 0) {
        S_InjSeqCreateAttributes CreateObj;
        CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
          USE_SEQ_DIAG_REPORT_COND;
        CreateObj.u1NumPulsesToCreate = 1;
        CreateObj.eGranularity = FINE_GRANULARITY;
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_38;
        DynamicObj.u1AffectedPulse = 0;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            CreateObj.ReportsObj.uDiagCbackUserData = (NativePtrSizedInt_U) i;
            CreateObj.s2PulseOffsetDegATDC1Arr[0] = (EncoderTDCAngles_DataStore())
              [i];
            createErrorResult = CreateResource((E_ModuleResource)
              ((INJ_InitialPin_DataStore()) + i), &CreateObj, BEHAVIOUR_INJ_SEQ);
            dynamicErrorResult = SetResourceAttributesSequenceOut
              ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i),
               &DynamicObj, BEHAVIOUR_INJ_SEQ);
          }
        }
      } else if ((INJ_Behavior_DataStore()) == 1) {
        extern void TransientInjectorSeqReportCallback_38
          (S_SeqOutInjEndEventReportPtr report, NativePtrSizedInt_U userData);
        extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_38[8];
        S_TranInjSeqCreateAttributes CreateObj;
        CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
          USE_SEQ_ENDEVENT_REPORT_COND | USE_SEQ_DIAG_REPORT_COND;
        CreateObj.ReportsObj.pfReportCback =
          TransientInjectorSeqReportCallback_38;
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_38;
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.eReportCond = RES_ENABLED;
        DynamicObj.uValidAttributesMask |= USE_SEQ_ENDEVENT_REPORT_COND;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            TransientInjectorSeqInfo_38[i].primaryComplete = 0;
            TransientInjectorSeqInfo_38[i].primaryDuration = 0;
            TransientInjectorSeqInfo_38[i].pinResource =
              ((INJ_InitialPin_DataStore()) + i);
            CreateObj.ReportsObj.uReportCbackUserData = (NativePtrSizedInt_U) i;
            CreateObj.ReportsObj.uDiagCbackUserData = (NativePtrSizedInt_U) i;
            CreateObj.s2OffsetDegATDC1 = (EncoderTDCAngles_DataStore())[i];
            createErrorResult = CreateResource((E_ModuleResource)
              ((INJ_InitialPin_DataStore()) + i), &CreateObj,
              BEHAVIOUR_TRAN_FUEL_SEQ);
            dynamicErrorResult = SetResourceAttributesSequenceOut
              ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i),
               &DynamicObj, BEHAVIOUR_TRAN_FUEL_SEQ);
          }
        }
      }
    } else if ((INJ_SequenceType_DataStore()) == 1)/* Batch Mode */
    {
      S_InjSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
        USE_SEQ_DIAG_REPORT_COND;
      CreateObj.u1NumPulsesToCreate = 2;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_38;
      if ((EncoderNumCylinders_DataStore()) % 2 == 0) {
        int half_cylinders = (EncoderNumCylinders_DataStore()) / 2;
        for (i=0; i < half_cylinders; i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            int cyl = (EncoderTDCOrder_DataStore())[i];
            int opp_cyl = (EncoderTDCOrder_DataStore())[i + half_cylinders];
            sint2 p0;
            sint2 p1;
            if (cyl < half_cylinders) {
              p0 = (EncoderTDCAngles_DataStore())[cyl];
              p1 = (EncoderTDCAngles_DataStore())[opp_cyl];
            } else {
              p0 = (EncoderTDCAngles_DataStore())[opp_cyl];
              p1 = (EncoderTDCAngles_DataStore())[cyl];
            }

            CreateObj.ReportsObj.uDiagCbackUserData = (NativePtrSizedInt_U) i;
            CreateObj.s2PulseOffsetDegATDC1Arr[0] = p0;
            CreateObj.s2PulseOffsetDegATDC1Arr[1] = p1;
            createErrorResult = CreateResource((E_ModuleResource)
              ((INJ_InitialPin_DataStore()) + i), &CreateObj, BEHAVIOUR_INJ_SEQ);
            DynamicObj.u1AffectedPulse = 0;
            dynamicErrorResult = SetResourceAttributesSequenceOut
              ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i),
               &DynamicObj, BEHAVIOUR_INJ_SEQ);
            DynamicObj.u1AffectedPulse = 1;
            dynamicErrorResult2 = SetResourceAttributesSequenceOut
              ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i),
               &DynamicObj, BEHAVIOUR_INJ_SEQ);
          }
        }
      }
    } else if ((INJ_SequenceType_DataStore()) == 2)/* Wasted Fuel Mode */
    {
      S_InjSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
        USE_SEQ_DIAG_REPORT_COND;
      CreateObj.u1NumPulsesToCreate = 2;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_38;
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        if ((INJ_InitialPin_DataStore()) + i <= 23) {
          CreateObj.ReportsObj.uDiagCbackUserData = (NativePtrSizedInt_U) i;
          CreateObj.s2PulseOffsetDegATDC1Arr[0] = (EncoderTDCAngles_DataStore())
            [i];
          CreateObj.s2PulseOffsetDegATDC1Arr[1] = (((EncoderTDCAngles_DataStore())
            [i] + (360*16)) % (720*16));
          createErrorResult = CreateResource((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + i), &CreateObj, BEHAVIOUR_INJ_SEQ);
          DynamicObj.u1AffectedPulse = 0;
          dynamicErrorResult = SetResourceAttributesSequenceOut
            ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i), &DynamicObj,
             BEHAVIOUR_INJ_SEQ);
          DynamicObj.u1AffectedPulse = 1;
          dynamicErrorResult2 = SetResourceAttributesSequenceOut
            ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i), &DynamicObj,
             BEHAVIOUR_INJ_SEQ);
        }
      }
    } else if ((INJ_SequenceType_DataStore()) == 3) {
      /* Throttle-Body unsupported */
    }

    {
      extern uint8_T INJ_InjectorCreate;
      if (SUCCESS(createErrorResult))
        INJ_InjectorCreate = 0;
      else
        INJ_InjectorCreate = (uint8_T) GetErrorCode(createErrorResult);
    }

    BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK2 = 0;
  }

  /* Start for Enabled SubSystem: '<S278>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S322>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S339>/Unit Delay1' */
  BaseEngineController_A02_DWork.s339_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S322>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S322>/Unit Delay' */
  BaseEngineController_A02_DWork.s322_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S278>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S357>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S358>/Function-Call Generator'
   *  Start for SubSystem: '<S3>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S357>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S358>/Function-Call Generator'
   *  InitializeConditions for SubSystem: '<S3>/Diagnostics'
   */

  /* S-Function Block: <S264>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s264_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S265>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s265_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S266>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s266_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_DWork.s274_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_DWork.s273_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S257>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s257_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S261>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s261_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function (motohawk_sfun_probe): '<S682>/motohawk_probe7' */
  (Fault_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S683>/motohawk_probe1' */
  (Control_Mode_Cmd_Prb_DataStore()) = 1.0;

  /* S-Function (motohawk_sfun_probe): '<S683>/motohawk_probe2' */
  (Motoring_Tq_Curve_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S683>/motohawk_probe3' */
  (Generating_Tq_Curve_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S683>/motohawk_probe10' */
  (Aux_PWM_State_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S683>/motohawk_probe11' */
  (Aux_PWM_DutyCycle_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S683>/motohawk_probe12' */
  (Aux_PWM_Freq_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S683>/motohawk_probe9' */
  (XDRP_Supply_State_Prb_DataStore()) = 0.0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_UnitDelay1_m;
  real_T rtb_Merge_bw;
  real_T rtb_Merge_c;
  real_T rtb_Merge_cd;
  real_T rtb_Merge_i;
  real_T rtb_Merge_du;
  real_T rtb_Merge_k;
  real_T rtb_Merge_de;
  real_T rtb_Merge_g;
  real_T rtb_Merge_cg;
  real_T rtb_Merge_ig;
  real_T rtb_Merge_d3;
  real_T rtb_Merge_gg;
  real_T rtb_Merge_gc;
  real_T rtb_Merge_eb;
  real_T rtb_Merge_bi;
  real_T rtb_Merge_cq;
  real_T rtb_Merge_df;
  real_T rtb_Merge_a;
  real_T rtb_UnitDelay1_az;
  real_T rtb_Merge_cs;
  real_T rtb_Sum1_m2;
  real_T rtb_UnitDelay1_j;
  real_T rtb_Merge_h;
  real_T rtb_Sum1_dp;
  real_T rtb_UnitDelay1_d;
  real_T rtb_Merge_py;
  real_T rtb_DataTypeConversion_m;
  real_T rtb_UnitDelay_hm;
  real_T rtb_Merge_dh;
  real_T rtb_motohawk_delta_time_c0;
  real_T rtb_UnitDelay1_dq;
  real_T rtb_Merge_pk;
  real_T rtb_Saturation1;
  real_T rtb_motohawk_interpolation_1d1_d;
  real_T rtb_motohawk_interpolation_1d2_h;
  real_T rtb_UnitDelay1_n;
  real_T rtb_Merge_bn;
  real_T rtb_motohawk_interpolation_2d;
  real_T rtb_UnitDelay_az;
  real_T rtb_Merge_j;
  real_T rtb_Saturation2;
  real_T rtb_Saturation_d;
  real_T rtb_Torque;
  real_T rtb_motohawk_delta_time1;
  real_T rtb_motohawk_delta_time_f;
  real_T rtb_motohawk_delta_time_m;
  real_T rtb_Saturation_j;
  real_T rtb_UnitDelay1_p;
  real_T rtb_Merge_k1;
  real_T rtb_motohawk_delta_time_n;
  real_T rtb_UnitDelay1_g;
  real_T rtb_Merge_n;
  real_T rtb_Product_mm;
  real_T rtb_motohawk_interpolation_1d_n;
  real_T rtb_motohawk_interpolation_1d1_n;
  real_T rtb_motohawk_delta_time_l;
  real_T rtb_motohawk_delta_time_nn;
  real_T rtb_Saturation_h;
  real_T rtb_motohawk_interpolation_1d3_k;
  real_T rtb_motohawk_interpolation_1d4_ii;
  real_T rtb_motohawk_interpolation_1d1_k;
  real_T rtb_motohawk_delta_time_he;
  real_T rtb_Saturation_ms;
  real_T rtb_Saturation_ai;
  real_T rtb_motohawk_delta_time_a0;
  real_T rtb_UnitDelay1_b;
  real_T rtb_Merge_dm;
  real_T rtb_UnitDelay1_jh;
  real_T rtb_Merge_l;
  real_T rtb_motohawk_delta_time_bh;
  real_T rtb_Saturation_dt;
  real_T rtb_Saturation_o;
  real_T rtb_Saturation_ot;
  real_T rtb_motohawk_delta_time_ae;
  real_T rtb_motohawk_delta_time_jd;
  real_T rtb_Saturation_km;
  real_T rtb_motohawk_interpolation_1d_l;
  real_T rtb_motohawk_delta_time_i;
  real_T rtb_motohawk_delta_time_kq;
  real_T rtb_motohawk_delta_time_iu;
  real_T rtb_Saturation_l;
  real_T rtb_Saturation_mk;
  real_T rtb_Saturation_e;
  real_T rtb_motohawk_delta_time_p0;
  real_T rtb_motohawk_delta_time_iq;
  real_T rtb_Saturation_lo;
  real_T rtb_Saturation_n;
  real_T rtb_motohawk_delta_time_fr;
  real_T rtb_motohawk_interpolation_1d_a;
  real_T rtb_Saturation_eu;
  real_T rtb_motohawk_interpolation_1d2_d3;
  real_T rtb_motohawk_delta_time_e;
  real_T rtb_motohawk_delta_time1_h;
  real_T rtb_motohawk_delta_time_o;
  real_T rtb_motohawk_delta_time_ny;
  real_T rtb_motohawk_interpolation_1d_o;
  real_T rtb_RichEquivRatioTargetDelta_a;
  real_T rtb_motohawk_interpolation_1d_ox;
  real_T rtb_RichEquivRatioSwPtDelta;
  real_T rtb_LeanEquivRatioSwPtDelta;
  real_T rtb_motohawk_interpolation_1d_j;
  real_T rtb_motohawk_interpolation_1d1_l;
  real_T rtb_motohawk_delta_time_nl;
  real_T rtb_motohawk_delta_time_fo;
  real_T rtb_motohawk_delta_time_iv;
  real_T rtb_motohawk_delta_time_m0;
  real_T rtb_motohawk_delta_time_me;
  real_T rtb_Saturation_ad;
  real_T rtb_Saturation_bu;
  real_T rtb_Saturation_bh;
  real_T rtb_RichEquivRatioTargetDelta_nq;
  real_T rtb_LeanEquivRatioTargetDelta;
  real_T rtb_motohawk_interpolation_1d1_f;
  real_T rtb_motohawk_interpolation_2d2;
  real_T rtb_motohawk_interpolation_2d1_b;
  real_T rtb_motohawk_delta_time_g;
  real_T rtb_Saturation_c;
  real_T rtb_Divide_l;
  real_T rtb_EOI;
  real_T rtb_PrimaryPulseInjectionTiming;
  real_T rtb_motohawk_interpolation_2d2_k;
  real_T rtb_WarmUpMult;
  real_T rtb_motohawk_interpolation_2d3;
  real_T rtb_Product_f5;
  real_T rtb_motohawk_interpolation_1d2_l;
  real_T rtb_motohawk_interpolation_2d1_a;
  real_T rtb_motohawk_interpolation_1d4_k;
  real_T rtb_motohawk_interpolation_1d5;
  real_T rtb_motohawk_interpolation_1d1_o5;
  real_T rtb_motohawk_interpolation_2d_e;
  real_T rtb_motohawk_delta_time_n0;
  real_T rtb_motohawk_delta_time_jj;
  real_T rtb_motohawk_delta_time_kb;
  real_T rtb_motohawk_interpolation_1d_e;
  real_T rtb_motohawk_delta_time_ce;
  real_T rtb_motohawk_delta_time_oa;
  real_T rtb_motohawk_delta_time_oaj;
  real_T rtb_Add_k;
  real_T rtb_motohawk_interpolation_1d_m;
  real_T rtb_motohawk_interpolation_1d_c;
  real_T rtb_motohawk_delta_time_pc;
  real_T rtb_Saturation_og;
  real_T rtb_Saturation_na;
  real_T rtb_motohawk_interpolation_1d2_g;
  real_T rtb_motohawk_replicate[8];
  real_T rtb_motohawk_interpolation_1d1_kt;
  real_T rtb_Product_hl;
  real_T rtb_motohawk_replicate1;
  real_T rtb_UnitDelay_mz;
  real_T rtb_DataTypeConversion_e;
  real_T rtb_Product5_d;
  real_T rtb_motohawk_interpolation_1d3_a;
  real_T rtb_DataTypeConversion_ff;
  real_T rtb_Switch_e;
  real_T rtb_Abs_is;
  uint32_T rtb_DataTypeConversion3_n;
  uint32_T rtb_InjectorSequence_o2[8];
  uint32_T rtb_Sum_l0;
  uint32_T rtb_UnitDelay_aka;
  uint32_T rtb_DataTypeConversion6;
  int16_T rtb_DataTypeConversion4_k;
  int16_T rtb_DataTypeConversion3_p;
  int16_T rtb_DataTypeConversion7;
  int16_T rtb_DataTypeConversion2_l;
  uint16_T rtb_RPM;
  uint16_T rtb_RPMInst;
  uint16_T rtb_motohawk_ain6;
  uint16_T rtb_motohawk_ain9;
  uint16_T rtb_motohawk_ain_read_f;
  uint16_T rtb_motohawk_encoder_average_rpm;
  uint16_T rtb_motohawk_ain_read_i;
  uint16_T rtb_motohawk_ain_read_d;
  uint16_T rtb_DataTypeConversion2_n;
  uint16_T rtb_DataTypeConversion2_h;
  uint16_T rtb_DataTypeConversion2_lz;
  uint16_T rtb_DataTypeConversion2_m;
  uint16_T rtb_motohawk_data_read1_k;
  index_T rtb_motohawk_prelookup2;
  index_T rtb_motohawk_prelookup_l;
  index_T rtb_motohawk_prelookup1_n;
  index_T rtb_motohawk_prelookup2_c;
  index_T rtb_motohawk_prelookup_ld;
  index_T rtb_motohawk_prelookup_j;
  index_T rtb_motohawk_prelookup_g;
  index_T rtb_motohawk_prelookup_d;
  index_T rtb_motohawk_prelookup_em;
  index_T rtb_motohawk_prelookup_b;
  index_T rtb_motohawk_prelookup_eu;
  index_T rtb_motohawk_prelookup_i;
  index_T rtb_motohawk_prelookup1_c;
  index_T rtb_motohawk_prelookup1_n3;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_ITermIdx;
  index_T rtb_motohawk_prelookup_h;
  index_T rtb_motohawk_prelookup1_fq;
  index_T rtb_motohawk_prelookup1_p;
  index_T rtb_motohawk_prelookup_fj;
  index_T rtb_motohawk_prelookup2_k;
  index_T rtb_motohawk_prelookup_de;
  index_T rtb_motohawk_prelookup_a;
  boolean_T rtb_Merge_ln;
  boolean_T rtb_Merge_l1;
  boolean_T rtb_Merge_mn;
  boolean_T rtb_RelOp_pg;
  boolean_T rtb_RelOp_av;
  boolean_T rtb_motohawk_fault_action1_m;
  boolean_T rtb_motohawk_fault_action2;
  boolean_T rtb_motohawk_fault_action3;
  boolean_T rtb_RelationalOperator5;
  boolean_T rtb_RelationalOperator3_fn;
  boolean_T rtb_RelationalOperator_hu;
  boolean_T rtb_RelationalOperator3_o;
  boolean_T rtb_LogicalOperator2_m;
  boolean_T rtb_LogicalOperator3_h;
  boolean_T rtb_RelationalOperator_mm;
  boolean_T rtb_LogicalOperator_kt;
  boolean_T rtb_LogicalOperator1_hh;
  boolean_T rtb_LogicalOperator2_nh;
  boolean_T rtb_LogicalOperator3_ho;
  boolean_T rtb_LogicalOperator2_is;
  boolean_T rtb_LogicalOperator3_o;
  boolean_T rtb_LogicalOperator2_mq;
  boolean_T rtb_LogicalOperator3_a5;
  boolean_T rtb_LogicalOperator2_it;
  boolean_T rtb_LogicalOperator3_fk;
  boolean_T rtb_LogicalOperator2_ir;
  boolean_T rtb_LogicalOperator3_k;
  boolean_T rtb_LogicalOperator2_bq;
  boolean_T rtb_LogicalOperator3_p;
  boolean_T rtb_LogicalOperator2_a;
  boolean_T rtb_LogicalOperator3_c;
  boolean_T rtb_LogicalOperator2_p;
  boolean_T rtb_LogicalOperator3_g;
  boolean_T rtb_LogicalOperator2_n1;
  boolean_T rtb_LogicalOperator3_i;
  boolean_T rtb_LogicalOperator2_p0;
  boolean_T rtb_LogicalOperator3_pg;
  boolean_T rtb_RelationalOperator5_i;
  boolean_T rtb_RelationalOperator4_o;
  boolean_T rtb_RelationalOperator_f;
  boolean_T rtb_RelationalOperator3_f1;
  boolean_T rtb_RelationalOperator2_b;
  boolean_T rtb_RelationalOperator1_kg;
  boolean_T rtb_RelationalOperator5_c;
  boolean_T rtb_RelationalOperator4_f;
  boolean_T rtb_RelationalOperator_a1;
  boolean_T rtb_RelationalOperator3_bm;
  boolean_T rtb_RelationalOperator2_ly;
  boolean_T rtb_RelationalOperator1_i;
  boolean_T rtb_RelationalOperator1_m3;
  boolean_T rtb_RelationalOperator2_jp;
  boolean_T rtb_RelationalOperator5_g;
  boolean_T rtb_RelationalOperator6;
  boolean_T rtb_RelationalOperator9_i;
  boolean_T rtb_LogicalOperator3_au;
  boolean_T rtb_LogicalOperator5_nc;
  boolean_T rtb_RelationalOperator5_l;
  boolean_T rtb_RelationalOperator2_e;
  boolean_T rtb_LogicalOperator2_d;
  boolean_T rtb_LogicalOperator4_ez;
  boolean_T rtb_RelationalOperator7_b[8];
  boolean_T rtb_RelationalOperator5_ch;
  boolean_T rtb_RelationalOperator2_la;
  boolean_T rtb_LT3;
  boolean_T rtb_LT2;
  boolean_T rtb_LT4;
  boolean_T rtb_RelationalOperator2_c;
  boolean_T rtb_RelationalOperator1_dd;
  boolean_T rtb_RelOp_fa;
  boolean_T rtb_LogicalOperator_kg;
  boolean_T rtb_LogicalOperator_d;
  boolean_T rtb_RelationalOperator1_g;
  boolean_T rtb_motohawk_data_read1_ir;
  boolean_T rtb_AND1[8];
  boolean_T rtb_motohawk_data_read1_h3;
  boolean_T rtb_motohawk_fault_action_g;
  boolean_T rtb_AboveRich;
  boolean_T rtb_CombinatorialLogic[2];
  boolean_T rtb_BelowLoTarget;
  boolean_T rtb_CombinatorialLogic_i[2];
  boolean_T rtb_LogicalOperator_bt;
  boolean_T rtb_LogicalOperator2_n2;
  boolean_T rtb_AboveHiTarget;
  boolean_T rtb_CombinatorialLogic_h[2];
  boolean_T rtb_AboveHiTarget_b;
  boolean_T rtb_LogicalOperator3_fj;
  boolean_T rtb_RelOp_oi;
  boolean_T rtb_RelationalOperator5_p;
  real_T minV;
  boolean_T rtb_RelationalOperator6_k;
  boolean_T rtb_LogicalOperator1_a;
  int32_T rtb_DataTypeConversion_f5;
  real_T rtb_Product1_e;
  int32_T rtb_DataTypeConversion_kk;
  real_T rtb_Merge_kp;
  boolean_T rtb_RelOp_g;
  real_T rtb_UnitDelay_li;
  real_T rtb_UnitDelay1_e;
  real_T rtb_Sum2_n;
  real_T rtb_Sum1_da;
  real_T rtb_DataTypeConversion_f5a;
  boolean_T rtb_Merge_gl;
  real_T rtb_Abs_b;
  real_T rtb_Merge_hk;
  real_T rtb_Merge_mj;
  real_T rtb_Merge_n2;
  real_T rtb_Merge_fc;
  real_T rtb_Merge_p2;
  real_T rtb_Merge_b0;
  real_T rtb_Merge_f3;
  real_T rtb_Merge_iu;
  real_T rtb_Merge_pj[8];
  real_T rtb_Product2_e[8];
  boolean_T rtb_LogicalOperator3_j[8];
  boolean_T rtb_LogicalOperator1_iht[8];
  real_T rtb_UnitDelay3_a;
  real_T rtb_UnitDelay4_b;
  real_T rtb_UnitDelay1_l;
  real_T rtb_UnitDelay3_h;
  real_T rtb_UnitDelay4_g;
  real_T rtb_Merge_p;
  real_T rtb_Sum1_i;
  real_T rtb_Sum1_gj;
  real_T rtb_Sum1_kq;
  real_T rtb_Sum1_pb;
  real_T rtb_Sum1_f;
  real_T rtb_Sum1_i5;
  uint32_T rtb_Switch_a;
  real_T rtb_Sum1_j;
  real_T rtb_Sum1_h;
  real_T rtb_Sum1_ix;
  real_T rtb_Sum1_d3;
  real_T rtb_Merge_d;
  real_T rtb_Merge_o4;
  real_T rtb_Merge_c5;
  real_T rtb_Sum1_gje;
  int8_T rtb_Add_a;
  int8_T rtb_Sum_l3;
  real_T rtb_Sum2_d0;
  boolean_T rtb_Switch_dz;
  boolean_T rtb_LogicalOperator10;
  boolean_T rtb_Switch1_p0;
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  uint16_T rtb_DataTypeConversion_a_0;
  real_T y;

  /* S-Function Block: <S577>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s577_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S577>/Product' incorporates:
   *  MinMax: '<S577>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S577>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (OilPresFilterConst_DataStore())) || rtIsNaN((OilPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_ff : (OilPresFilterConst_DataStore());

  /* Logic: '<S527>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S527>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S527>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(46) || IsFaultActive(47));

  /* Logic: '<S527>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S527>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S527>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(46) || IsFaultSuspected(47));

  /* S-Function Block: <S362>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get(&BaseEngineController_A02_B.s362_motohawk_ain1,
      NULL);
  }

  /* DataTypeConversion: '<S527>/Data Type Conversion' */
  rtb_DataTypeConversion_f5 = BaseEngineController_A02_B.s362_motohawk_ain1;

  /* Product: '<S527>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S527>/motohawk_calibration4'
   */
  rtb_Product1_e = (real_T)rtb_DataTypeConversion_f5 * (OilPresGain_DataStore());

  /* Sum: '<S527>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S527>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s527_Sum1 = rtb_Product1_e + (OilPresOfst_DataStore
    ());

  /* UnitDelay: '<S527>/Unit Delay1' */
  rtb_UnitDelay1_m = BaseEngineController_A02_DWork.s527_UnitDelay1_DSTATE;

  /* If: '<S527>/If' incorporates:
   *  Logic: '<S527>/Logical Operator5'
   *  Logic: '<S527>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S527>/If Action Subsystem' incorporates:
     *  ActionPort: '<S578>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_m, &rtb_Merge_bw);

    /* End of Outputs for SubSystem: '<S527>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S527>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S579>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_bw);

    /* End of Outputs for SubSystem: '<S527>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S527>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S580>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s527_Sum1, &rtb_Merge_bw);

    /* End of Outputs for SubSystem: '<S527>/If Action Subsystem2' */
  }

  /* End of If: '<S527>/If' */

  /* Sum: '<S582>/Sum1' incorporates:
   *  Constant: '<S582>/Constant'
   *  Product: '<S582>/Product'
   *  Product: '<S582>/Product1'
   *  Sum: '<S582>/Sum'
   *  UnitDelay: '<S582>/Unit Delay'
   */
  rtb_Sum1_i = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s582_UnitDelay_DSTATE + rtb_Merge_bw *
    rtb_DataTypeConversion_ff;

  /* If: '<S581>/If' incorporates:
   *  Inport: '<S583>/In1'
   *  Inport: '<S584>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S581>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S581>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S581>/NewValue' incorporates:
     *  ActionPort: '<S583>/Action Port'
     */
    BaseEngineController_A02_B.s581_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S581>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S581>/OldValue' incorporates:
     *  ActionPort: '<S584>/Action Port'
     */
    BaseEngineController_A02_B.s581_Merge = rtb_Sum1_i;

    /* End of Outputs for SubSystem: '<S581>/OldValue' */
  }

  /* End of If: '<S581>/If' */

  /* If: '<S687>/If' incorporates:
   *  Inport: '<S694>/In1'
   *  Inport: '<S695>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S687>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S687>/override_enable'
   */
  if ((Oil_Pressure_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S687>/NewValue' incorporates:
     *  ActionPort: '<S694>/Action Port'
     */
    rtb_Merge_c = (Oil_Pressure_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S687>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S687>/OldValue' incorporates:
     *  ActionPort: '<S695>/Action Port'
     */
    rtb_Merge_c = BaseEngineController_A02_B.s581_Merge;

    /* End of Outputs for SubSystem: '<S687>/OldValue' */
  }

  /* End of If: '<S687>/If' */

  /* S-Function Block: <S361>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S520>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S361>/motohawk_encoder_average_rpm'
   */
  rtb_Product1_e = (real_T)rtb_RPM;

  /* S-Function Block: <S513>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s513_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S513>/Product' incorporates:
   *  MinMax: '<S513>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S513>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_ff : (RPMFiltConst_DataStore());

  /* Sum: '<S520>/Sum1' incorporates:
   *  Constant: '<S520>/Constant'
   *  Product: '<S520>/Product'
   *  Product: '<S520>/Product1'
   *  Sum: '<S520>/Sum'
   *  UnitDelay: '<S520>/Unit Delay'
   */
  BaseEngineController_A02_B.s520_Sum1 = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s520_UnitDelay_DSTATE + rtb_Product1_e *
    rtb_DataTypeConversion_ff;

  /* If: '<S688>/If' incorporates:
   *  Inport: '<S696>/In1'
   *  Inport: '<S697>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S688>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S688>/override_enable'
   */
  if ((RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S688>/NewValue' incorporates:
     *  ActionPort: '<S696>/Action Port'
     */
    rtb_Merge_cd = (RPM_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S688>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S688>/OldValue' incorporates:
     *  ActionPort: '<S697>/Action Port'
     */
    rtb_Merge_cd = BaseEngineController_A02_B.s520_Sum1;

    /* End of Outputs for SubSystem: '<S688>/OldValue' */
  }

  /* End of If: '<S688>/If' */

  /* S-Function (motohawk_sfun_trigger): '<S363>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_6989p0004 */
  if (BaseEngineController_A02_DWork.s363_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s363_motohawk_trigger_DWORK1 = 1;
  }

  /* If: '<S689>/If' incorporates:
   *  Inport: '<S698>/In1'
   *  Inport: '<S699>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S689>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S689>/override_enable'
   */
  if ((Temp_Guage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S689>/NewValue' incorporates:
     *  ActionPort: '<S698>/Action Port'
     */
    rtb_Merge_i = (Temp_Guage_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S689>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S689>/OldValue' incorporates:
     *  ActionPort: '<S699>/Action Port'
     */
    rtb_Merge_i = BaseEngineController_A02_B.s618_Merge;

    /* End of Outputs for SubSystem: '<S689>/OldValue' */
  }

  /* End of If: '<S689>/If' */

  /* S-Function Block: <S361>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S361>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S361>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_A02_B.s361_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S325>/Data Type Conversion' */
  if (BaseEngineController_A02_B.s361_RPMInst < 65536.0) {
    if (BaseEngineController_A02_B.s361_RPMInst >= 0.0) {
      rtb_DataTypeConversion_a_0 = (uint16_T)
        BaseEngineController_A02_B.s361_RPMInst;
    } else {
      rtb_DataTypeConversion_a_0 = 0U;
    }
  } else {
    rtb_DataTypeConversion_a_0 = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S325>/Data Type Conversion' */
  /* Sum: '<S325>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  rtb_motohawk_data_read1_k = (uint16_T)i;

  /* End of Sum: '<S325>/Sum' */

  /* RelationalOperator: '<S325>/Relational Operator1' incorporates:
   *  DataTypeConversion: '<S325>/Data Type Conversion'
   */
  BaseEngineController_A02_B.s325_Stall = ((rtb_DataTypeConversion_a_0 <
    rtb_motohawk_data_read1_k));

  /* RelationalOperator: '<S325>/Relational Operator4' incorporates:
   *  DataTypeConversion: '<S325>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration4'
   */
  BaseEngineController_A02_B.s325_Crank = ((rtb_DataTypeConversion_a_0 >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S325>/Relational Operator2' incorporates:
   *  DataTypeConversion: '<S325>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration1'
   */
  rtb_LogicalOperator1_a = (rtb_DataTypeConversion_a_0 > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S325>/Unit Delay' */
  BaseEngineController_A02_B.s325_UnitDelay =
    BaseEngineController_A02_DWork.s325_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S325>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_5692p0001 */
  if (BaseEngineController_A02_DWork.s325_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s325_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S325>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S325>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration2'
   */
  BaseEngineController_A02_B.s325_Run = ((rtb_LogicalOperator1_a &&
    (BaseEngineController_A02_B.s345_Switch >= ((uint8_T)(RunLatchTDCs_DataStore
    ())))));

  /* Stateflow: '<S325>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch (BaseEngineController_A02_DWork.s344_is_c2_BaseEngineController_A02) {
   case BaseEngineController_A02_IN_Crank:
    /* During 'Crank': '<S344>:3' */
    if (BaseEngineController_A02_B.s325_Stall) {
      /* Transition: '<S344>:8' */
      BaseEngineController_A02_DWork.s344_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall_d;

      /* Entry 'Stall': '<S344>:1' */
      BaseEngineController_A02_B.s344_State = 1U;
    } else {
      if (BaseEngineController_A02_B.s325_Run) {
        /* Transition: '<S344>:6' */
        BaseEngineController_A02_DWork.s344_is_c2_BaseEngineController_A02 =
          BaseEngineController_A02_IN_Run;

        /* Entry 'Run': '<S344>:2' */
        BaseEngineController_A02_B.s344_State = 3U;
      }
    }
    break;

   case BaseEngineController_A02_IN_Run:
    /* During 'Run': '<S344>:2' */
    if (BaseEngineController_A02_B.s325_Stall) {
      /* Transition: '<S344>:7' */
      BaseEngineController_A02_DWork.s344_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall_d;

      /* Entry 'Stall': '<S344>:1' */
      BaseEngineController_A02_B.s344_State = 1U;
    }
    break;

   case BaseEngineController_A02_IN_Stall_d:
    /* During 'Stall': '<S344>:1' */
    if (BaseEngineController_A02_B.s325_Crank) {
      /* Transition: '<S344>:5' */
      BaseEngineController_A02_DWork.s344_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Crank;

      /* Entry 'Crank': '<S344>:3' */
      BaseEngineController_A02_B.s344_State = 2U;
    }
    break;

   default:
    /* Transition: '<S344>:4' */
    BaseEngineController_A02_DWork.s344_is_c2_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Stall_d;

    /* Entry 'Stall': '<S344>:1' */
    BaseEngineController_A02_B.s344_State = 1U;
    break;
  }

  /* End of Stateflow: '<S325>/Engine State Machine' */

  /* RelationalOperator: '<S684>/Compare' incorporates:
   *  Constant: '<S684>/Constant'
   */
  BaseEngineController_A02_B.s684_Compare =
    ((BaseEngineController_A02_B.s344_State == 2));

  /* If: '<S690>/If' incorporates:
   *  Inport: '<S700>/In1'
   *  Inport: '<S701>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S690>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S690>/override_enable'
   */
  if ((Engine_Crank_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S690>/NewValue' incorporates:
     *  ActionPort: '<S700>/Action Port'
     */
    rtb_Merge_ln = (Engine_Crank_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S690>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S690>/OldValue' incorporates:
     *  ActionPort: '<S701>/Action Port'
     */
    rtb_Merge_ln = BaseEngineController_A02_B.s684_Compare;

    /* End of Outputs for SubSystem: '<S690>/OldValue' */
  }

  /* End of If: '<S690>/If' */

  /* RelationalOperator: '<S685>/Compare' incorporates:
   *  Constant: '<S685>/Constant'
   */
  BaseEngineController_A02_B.s685_Compare =
    ((BaseEngineController_A02_B.s344_State == 3));

  /* If: '<S691>/If' incorporates:
   *  Inport: '<S702>/In1'
   *  Inport: '<S703>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S691>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S691>/override_enable'
   */
  if ((Engine_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S691>/NewValue' incorporates:
     *  ActionPort: '<S702>/Action Port'
     */
    rtb_Merge_l1 = (Engine_On_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S691>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S691>/OldValue' incorporates:
     *  ActionPort: '<S703>/Action Port'
     */
    rtb_Merge_l1 = BaseEngineController_A02_B.s685_Compare;

    /* End of Outputs for SubSystem: '<S691>/OldValue' */
  }

  /* End of If: '<S691>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S365>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6151p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6151p0004,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x000000C0) >> 6) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[1])) ;
      BaseEngineController_A02_B.s365_GensetEnable = (real_T) tmp0;
      BaseEngineController_A02_B.s365_GensetEnable_g = (real_T) tmp1;
      BaseEngineController_A02_B.s365_GensetEnable_a = (real_T) tmp2;
      BaseEngineController_A02_B.s365_ReadCANMessage_o4 = (real_T) tmp3;
      BaseEngineController_A02_B.s365_ReadCANMessage_o5 = (real_T) tmp4;
    }
  }

  /* If: '<S369>/If' incorporates:
   *  Inport: '<S375>/In1'
   *  Inport: '<S376>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S369>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S369>/override_enable'
   */
  if ((Genset_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S369>/NewValue' incorporates:
     *  ActionPort: '<S375>/Action Port'
     */
    rtb_Merge_p = (Genset_Enable_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S369>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S369>/OldValue' incorporates:
     *  ActionPort: '<S376>/Action Port'
     */
    rtb_Merge_p = BaseEngineController_A02_B.s365_GensetEnable;

    /* End of Outputs for SubSystem: '<S369>/OldValue' */
  }

  /* End of If: '<S369>/If' */

  /* If: '<S370>/If' incorporates:
   *  Inport: '<S377>/In1'
   *  Inport: '<S378>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S370>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S370>/override_enable'
   */
  if ((Genset_Load_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S370>/NewValue' incorporates:
     *  ActionPort: '<S377>/Action Port'
     */
    rtb_Product1_e = (Genset_Load_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S370>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S370>/OldValue' incorporates:
     *  ActionPort: '<S378>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s365_GensetEnable_g;

    /* End of Outputs for SubSystem: '<S370>/OldValue' */
  }

  /* End of If: '<S370>/If' */

  /* If: '<S372>/If' incorporates:
   *  Inport: '<S381>/In1'
   *  Inport: '<S382>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S372>/override_enable'
   */
  if ((Load_Throttle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S372>/NewValue' incorporates:
     *  ActionPort: '<S381>/Action Port'
     */
    rtb_Merge_d = (Load_Throttle_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S372>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S372>/OldValue' incorporates:
     *  ActionPort: '<S382>/Action Port'
     */
    rtb_Merge_d = BaseEngineController_A02_B.s365_ReadCANMessage_o4;

    /* End of Outputs for SubSystem: '<S372>/OldValue' */
  }

  /* End of If: '<S372>/If' */

  /* If: '<S373>/If' incorporates:
   *  Inport: '<S383>/In1'
   *  Inport: '<S384>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S373>/override_enable'
   */
  if ((Load_RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S373>/NewValue' incorporates:
     *  ActionPort: '<S383>/Action Port'
     */
    rtb_Merge_o4 = (Load_RPM_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S373>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S373>/OldValue' incorporates:
     *  ActionPort: '<S384>/Action Port'
     */
    rtb_Merge_o4 = BaseEngineController_A02_B.s365_ReadCANMessage_o5;

    /* End of Outputs for SubSystem: '<S373>/OldValue' */
  }

  /* End of If: '<S373>/If' */

  /* Stateflow: '<S119>/Remy Control' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration6'
   */

  /* Gateway: Foreground/Control/Controller/Hybrid/Remy Control */
  /* During: Foreground/Control/Controller/Hybrid/Remy Control */
  if (BaseEngineController_A02_DWork.s127_is_active_c5_BaseEngineController_A02 ==
      0) {
    /* Entry: Foreground/Control/Controller/Hybrid/Remy Control */
    BaseEngineController_A02_DWork.s127_is_active_c5_BaseEngineController_A02 =
      1U;

    /* Transition: '<S127>:41' */
    BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
      BaseEngineController_A02_IN_default;
  } else {
    switch (BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02)
    {
     case BaseEngineController_A02_IN_cranking:
      /* During 'cranking': '<S127>:20' */
      if (BaseEngineController_A02_DWork.s127_count >= (Crank_Time_DataStore()))
      {
        /* Transition: '<S127>:24' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_startFail;

        /* Entry 'startFail': '<S127>:23' */
        BaseEngineController_A02_DWork.s127_count = 0.0;
      } else if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S127>:25' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (BaseEngineController_A02_B.s520_Sum1 >= (Caught_RPM_DataStore()))
      {
        /* Transition: '<S127>:32' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_idle;
      } else {
        BaseEngineController_A02_DWork.s127_count =
          BaseEngineController_A02_DWork.s127_count + 1.0;
        BaseEngineController_A02_B.s127_remyEn = 1.0;
        BaseEngineController_A02_B.s127_maxRPM = (Max_Cranking_RPM_DataStore());
        BaseEngineController_A02_B.s127_motorTQ = (Cranking_Torque_DataStore());
      }
      break;

     case BaseEngineController_A02_IN_default:
      /* During 'default': '<S127>:14' */
      if (rtb_Merge_p != 0.0) {
        /* Transition: '<S127>:21' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_cranking;

        /* Entry 'cranking': '<S127>:20' */
        BaseEngineController_A02_DWork.s127_count = 0.0;
      } else {
        BaseEngineController_A02_B.s127_remyEn = 0.0;
        BaseEngineController_A02_B.s127_maxRPM = 0.0;
        BaseEngineController_A02_B.s127_motorTQ = 0.0;
        BaseEngineController_A02_B.s127_generatingTQ = 0.0;
        BaseEngineController_A02_B.s127_APP = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_generating:
      /* During 'generating': '<S127>:36' */
      if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S127>:39' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (!(rtb_Product1_e != 0.0)) {
        /* Transition: '<S127>:45' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_idle;
      } else {
        BaseEngineController_A02_B.s127_APP = rtb_Merge_d;
      }
      break;

     case BaseEngineController_A02_IN_idle:
      /* During 'idle': '<S127>:31' */
      if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S127>:35' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (rtb_Product1_e != 0.0) {
        /* Transition: '<S127>:37' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_generating;
      } else {
        BaseEngineController_A02_B.s127_remyEn = 1.0;
        BaseEngineController_A02_B.s127_maxRPM = rtb_Merge_o4;
        BaseEngineController_A02_B.s127_motorTQ = 0.0;
        BaseEngineController_A02_B.s127_generatingTQ =
          (Generating_Max_Torque_DataStore());
        BaseEngineController_A02_B.s127_APP = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_startFail:
      /* During 'startFail': '<S127>:23' */
      if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S127>:26' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (BaseEngineController_A02_DWork.s127_count >=
                 (Crank_Wait_Before_Retry_DataStore())) {
        /* Transition: '<S127>:29' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_cranking;

        /* Entry 'cranking': '<S127>:20' */
        BaseEngineController_A02_DWork.s127_count = 0.0;
      } else {
        BaseEngineController_A02_DWork.s127_count =
          BaseEngineController_A02_DWork.s127_count + 1.0;
        BaseEngineController_A02_B.s127_remyEn = 0.0;
        BaseEngineController_A02_B.s127_maxRPM = 0.0;
        BaseEngineController_A02_B.s127_motorTQ = 0.0;
      }
      break;

     default:
      /* Transition: '<S127>:41' */
      BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
        BaseEngineController_A02_IN_default;
      break;
    }
  }

  /* End of Stateflow: '<S119>/Remy Control' */

  /* RelationalOperator: '<S686>/Compare' incorporates:
   *  Constant: '<S686>/Constant'
   */
  BaseEngineController_A02_B.s686_Compare =
    ((BaseEngineController_A02_B.s127_generatingTQ >= 3.0));

  /* If: '<S692>/If' incorporates:
   *  Inport: '<S704>/In1'
   *  Inport: '<S705>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S692>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S692>/override_enable'
   */
  if ((Load_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S692>/NewValue' incorporates:
     *  ActionPort: '<S704>/Action Port'
     */
    rtb_Merge_mn = (Load_On_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S692>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S692>/OldValue' incorporates:
     *  ActionPort: '<S705>/Action Port'
     */
    rtb_Merge_mn = BaseEngineController_A02_B.s686_Compare;

    /* End of Outputs for SubSystem: '<S692>/OldValue' */
  }

  /* End of If: '<S692>/If' */

  /* If: '<S693>/If' incorporates:
   *  Constant: '<S682>/Constant'
   *  Inport: '<S706>/In1'
   *  Inport: '<S707>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S693>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S693>/override_enable'
   */
  if ((Fault_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S693>/NewValue' incorporates:
     *  ActionPort: '<S706>/Action Port'
     */
    rtb_Merge_du = (Fault_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S693>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S693>/OldValue' incorporates:
     *  ActionPort: '<S707>/Action Port'
     */
    rtb_Merge_du = 0.0;

    /* End of Outputs for SubSystem: '<S693>/OldValue' */
  }

  /* End of If: '<S693>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S682>/Send CAN Messages' */
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
      /* 0x209 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        if (rtb_Merge_cd < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_cd > 10230.0000000000F) {
          tmp0 = (uint16_T)(1023U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_cd / (10.0000000000F));
        }

        if (rtb_Merge_c < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_c > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_c);
        }

        if (rtb_Merge_i < -40.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_i > 215.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_i - (-40.0000000000F));
        }

        tmp3 = (uint8_T)(rtb_Merge_ln != 0);
        tmp4 = (uint8_T)(rtb_Merge_l1 != 0);
        tmp5 = (uint8_T)(rtb_Merge_mn != 0);
        if (rtb_Merge_du < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (rtb_Merge_du > 3.0000000000F) {
          tmp6 = (uint8_T)(3U);
        } else {
          tmp6 = (uint8_T)(rtb_Merge_du);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[1] & 0x000000FC) >> 2) |
          ((((uint8_T *)(&tmp0))[0] & 0x00000003) << 6) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1] & 0x00000003) << 6) |
          ((((uint8_T *)(&tmp1))[0] & 0x000000FC) >> 2) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0] & 0x00000003) << 6) |
          ((((uint8_T *)(&tmp2))[0] & 0x000000FC) >> 2) ;
        msg_data[3] = ((((uint8_T *)(&tmp2))[0] & 0x00000003) << 6) |
          ((((uint8_T *)(&tmp3))[0] & 0x00000001) << 5) | ((((uint8_T *)(&tmp4))
          [0] & 0x00000001) << 4) | ((((uint8_T *)(&tmp5))[0] & 0x00000001) << 3)
          | ((((uint8_T *)(&tmp6))[0] & 0x00000003) << 1) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x209UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S708>/If' incorporates:
   *  Inport: '<S721>/In1'
   *  Inport: '<S722>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S708>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S708>/override_enable'
   */
  if ((Run_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S708>/NewValue' incorporates:
     *  ActionPort: '<S721>/Action Port'
     */
    rtb_Merge_k = (Run_Request_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S708>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S708>/OldValue' incorporates:
     *  ActionPort: '<S722>/Action Port'
     */
    rtb_Merge_k = BaseEngineController_A02_B.s127_remyEn;

    /* End of Outputs for SubSystem: '<S708>/OldValue' */
  }

  /* End of If: '<S708>/If' */

  /* If: '<S709>/If' incorporates:
   *  Constant: '<S683>/Constant6'
   *  Inport: '<S723>/In1'
   *  Inport: '<S724>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S709>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S709>/override_enable'
   */
  if ((Control_Mode_Cmd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S709>/NewValue' incorporates:
     *  ActionPort: '<S723>/Action Port'
     */
    rtb_Merge_de = (Control_Mode_Cmd_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S709>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S709>/OldValue' incorporates:
     *  ActionPort: '<S724>/Action Port'
     */
    rtb_Merge_de = 1.0;

    /* End of Outputs for SubSystem: '<S709>/OldValue' */
  }

  /* End of If: '<S709>/If' */

  /* If: '<S713>/If' incorporates:
   *  Constant: '<S683>/Constant4'
   *  Inport: '<S731>/In1'
   *  Inport: '<S732>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S713>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S713>/override_enable'
   */
  if ((Motoring_Tq_Curve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S713>/NewValue' incorporates:
     *  ActionPort: '<S731>/Action Port'
     */
    rtb_Merge_g = (Motoring_Tq_Curve_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S713>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S713>/OldValue' incorporates:
     *  ActionPort: '<S732>/Action Port'
     */
    rtb_Merge_g = 0.0;

    /* End of Outputs for SubSystem: '<S713>/OldValue' */
  }

  /* End of If: '<S713>/If' */

  /* If: '<S714>/If' incorporates:
   *  Constant: '<S683>/Constant5'
   *  Inport: '<S733>/In1'
   *  Inport: '<S734>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S714>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S714>/override_enable'
   */
  if ((Generating_Tq_Curve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S714>/NewValue' incorporates:
     *  ActionPort: '<S733>/Action Port'
     */
    rtb_Merge_cg = (Generating_Tq_Curve_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S714>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S714>/OldValue' incorporates:
     *  ActionPort: '<S734>/Action Port'
     */
    rtb_Merge_cg = 0.0;

    /* End of Outputs for SubSystem: '<S714>/OldValue' */
  }

  /* End of If: '<S714>/If' */

  /* If: '<S715>/If' incorporates:
   *  Inport: '<S735>/In1'
   *  Inport: '<S736>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S715>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S715>/override_enable'
   */
  if ((Speed_Voltage_Torque_CMD_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S715>/NewValue' incorporates:
     *  ActionPort: '<S735>/Action Port'
     */
    rtb_Merge_ig = (Speed_Voltage_Torque_CMD_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S715>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S715>/OldValue' incorporates:
     *  ActionPort: '<S736>/Action Port'
     */
    rtb_Merge_ig = BaseEngineController_A02_B.s127_maxRPM;

    /* End of Outputs for SubSystem: '<S715>/OldValue' */
  }

  /* End of If: '<S715>/If' */

  /* If: '<S716>/If' incorporates:
   *  Inport: '<S737>/In1'
   *  Inport: '<S738>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S716>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S716>/override_enable'
   */
  if ((Motoring_Torque_Lim_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S716>/NewValue' incorporates:
     *  ActionPort: '<S737>/Action Port'
     */
    rtb_Merge_d3 = (Motoring_Torque_Lim_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S716>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S716>/OldValue' incorporates:
     *  ActionPort: '<S738>/Action Port'
     */
    rtb_Merge_d3 = BaseEngineController_A02_B.s127_motorTQ;

    /* End of Outputs for SubSystem: '<S716>/OldValue' */
  }

  /* End of If: '<S716>/If' */

  /* If: '<S717>/If' incorporates:
   *  Inport: '<S739>/In1'
   *  Inport: '<S740>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S717>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S717>/override_enable'
   */
  if ((Generating_Torque_Lim_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S717>/NewValue' incorporates:
     *  ActionPort: '<S739>/Action Port'
     */
    rtb_Merge_gg = (Generating_Torque_Lim_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S717>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S717>/OldValue' incorporates:
     *  ActionPort: '<S740>/Action Port'
     */
    rtb_Merge_gg = BaseEngineController_A02_B.s127_generatingTQ;

    /* End of Outputs for SubSystem: '<S717>/OldValue' */
  }

  /* End of If: '<S717>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S683>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (5.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (4500U)
         )) {
      /* 0x18ef0180 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint16_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        if (rtb_Merge_k < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_k > 1.0000000000F) {
          tmp0 = (uint8_T)(1U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_k != 0);
        }

        if (rtb_Merge_de < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_de > 15.0000000000F) {
          tmp1 = (uint8_T)(15U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_de);
        }

        if (rtb_Merge_g < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_g > 3.0000000000F) {
          tmp2 = (uint8_T)(3U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_g);
        }

        if (rtb_Merge_cg < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_cg > 3.0000000000F) {
          tmp3 = (uint8_T)(3U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_cg);
        }

        if (rtb_Merge_ig < -32000.0000000000F) {
          tmp4 = (uint16_T)(0U);
        } else if (rtb_Merge_ig > 33535.0000000000F) {
          tmp4 = (uint16_T)(65535U);
        } else {
          tmp4 = (uint16_T)(rtb_Merge_ig - (-32000.0000000000F));
        }

        if (rtb_Merge_d3 < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (rtb_Merge_d3 > 127.5000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)(rtb_Merge_d3 * (2.0000000000F));
        }

        if (rtb_Merge_gg < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (rtb_Merge_gg > 127.5000000000F) {
          tmp6 = (uint8_T)(255U);
        } else {
          tmp6 = (uint8_T)(rtb_Merge_gg * (2.0000000000F));
        }

        msg_data[0] = 0xf2 ;
        msg_data[1] = 0x00 ;
        msg_data[2] = ((((uint8_T *)(&tmp0))[0] & 0x00000001)) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[0] & 0x0000000F)) | ((((uint8_T *)(
          &tmp2))[0] & 0x00000003) << 4) | ((((uint8_T *)(&tmp3))[0] &
          0x00000003) << 6) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[1])) ;
        msg_data[5] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp6))[0])) ;
        CAN_2_Transmit(1, 0x18ef0180UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S710>/If' incorporates:
   *  Constant: '<S683>/Constant1'
   *  Inport: '<S725>/In1'
   *  Inport: '<S726>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S710>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S710>/override_enable'
   */
  if ((Aux_PWM_State_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S710>/NewValue' incorporates:
     *  ActionPort: '<S725>/Action Port'
     */
    rtb_Merge_gc = (Aux_PWM_State_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S710>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S710>/OldValue' incorporates:
     *  ActionPort: '<S726>/Action Port'
     */
    rtb_Merge_gc = 0.0;

    /* End of Outputs for SubSystem: '<S710>/OldValue' */
  }

  /* End of If: '<S710>/If' */

  /* If: '<S711>/If' incorporates:
   *  Constant: '<S683>/Constant2'
   *  Inport: '<S727>/In1'
   *  Inport: '<S728>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S711>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S711>/override_enable'
   */
  if ((Aux_PWM_DutyCycle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S711>/NewValue' incorporates:
     *  ActionPort: '<S727>/Action Port'
     */
    rtb_Merge_eb = (Aux_PWM_DutyCycle_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S711>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S711>/OldValue' incorporates:
     *  ActionPort: '<S728>/Action Port'
     */
    rtb_Merge_eb = 0.0;

    /* End of Outputs for SubSystem: '<S711>/OldValue' */
  }

  /* End of If: '<S711>/If' */

  /* If: '<S712>/If' incorporates:
   *  Constant: '<S683>/Constant3'
   *  Inport: '<S729>/In1'
   *  Inport: '<S730>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S712>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S712>/override_enable'
   */
  if ((Aux_PWM_Freq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S712>/NewValue' incorporates:
     *  ActionPort: '<S729>/Action Port'
     */
    rtb_Merge_bi = (Aux_PWM_Freq_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S712>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S712>/OldValue' incorporates:
     *  ActionPort: '<S730>/Action Port'
     */
    rtb_Merge_bi = 0.0;

    /* End of Outputs for SubSystem: '<S712>/OldValue' */
  }

  /* End of If: '<S712>/If' */

  /* If: '<S720>/If' incorporates:
   *  Constant: '<S683>/Constant'
   *  Inport: '<S745>/In1'
   *  Inport: '<S746>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S720>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S720>/override_enable'
   */
  if ((XDRP_Supply_State_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S720>/NewValue' incorporates:
     *  ActionPort: '<S745>/Action Port'
     */
    rtb_Merge_cq = (XDRP_Supply_State_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S720>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S720>/OldValue' incorporates:
     *  ActionPort: '<S746>/Action Port'
     */
    rtb_Merge_cq = 0.0;

    /* End of Outputs for SubSystem: '<S720>/OldValue' */
  }

  /* End of If: '<S720>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S683>/Send CAN Messages2' */
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
      /* 0x18ef0180 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint16_T tmp3;
        if (rtb_Merge_cq < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_cq > 3.0000000000F) {
          tmp0 = (uint8_T)(3U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_cq);
        }

        if (rtb_Merge_gc < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_gc > 3.0000000000F) {
          tmp1 = (uint8_T)(3U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_gc);
        }

        if (rtb_Merge_eb < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_eb > 127.5000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_eb * (2.0000000000F));
        }

        if (rtb_Merge_bi < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (rtb_Merge_bi > 6553.5000000000F) {
          tmp3 = (uint16_T)(65535U);
        } else {
          tmp3 = (uint16_T)(rtb_Merge_bi * (10.0000000000F));
        }

        msg_data[0] = 0xf2 ;
        msg_data[1] = 0x02 ;
        msg_data[2] = ((((uint8_T *)(&tmp0))[0] & 0x00000003)) | ((((uint8_T *)(
          &tmp1))[0] & 0x00000003) << 2) ;
        msg_data[3] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp3))[1])) ;
        msg_data[5] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_2_Transmit(1, 0x18ef0180UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S718>/If' incorporates:
   *  Inport: '<S741>/In1'
   *  Inport: '<S742>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S683>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S718>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S718>/override_enable'
   */
  if ((SecondartSpeedLim_CenterPT_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S718>/NewValue' incorporates:
     *  ActionPort: '<S741>/Action Port'
     */
    rtb_Merge_df = (SecondartSpeedLim_CenterPT_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S718>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S718>/OldValue' incorporates:
     *  ActionPort: '<S742>/Action Port'
     */
    rtb_Merge_df = (SecondarySpdLim_Cal_DataStore());

    /* End of Outputs for SubSystem: '<S718>/OldValue' */
  }

  /* End of If: '<S718>/If' */

  /* If: '<S719>/If' incorporates:
   *  Inport: '<S743>/In1'
   *  Inport: '<S744>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S683>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S719>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S719>/override_enable'
   */
  if ((SecondaryVoltLim_CenterPT_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S719>/NewValue' incorporates:
     *  ActionPort: '<S743>/Action Port'
     */
    rtb_Merge_a = (SecondaryVoltLim_CenterPT_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S719>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S719>/OldValue' incorporates:
     *  ActionPort: '<S744>/Action Port'
     */
    rtb_Merge_a = (SecondaryVoltLim_Cal_DataStore());

    /* End of Outputs for SubSystem: '<S719>/OldValue' */
  }

  /* End of If: '<S719>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S683>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (500.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (499500U)
         )) {
      /* 0x18ef0180 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        if (rtb_Merge_df < -32000.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_df > 33535.0000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_df - (-32000.0000000000F));
        }

        if (rtb_Merge_a < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_Merge_a > 6553.5000000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(rtb_Merge_a * (10.0000000000F));
        }

        msg_data[0] = 0xf2 ;
        msg_data[1] = 0x01 ;
        msg_data[2] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[3] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[5] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_2_Transmit(1, 0x18ef0180UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S683>/motohawk_probe7' */
  (SecondarySpeedLim_CenterPT_Prb_DataStore()) = (SecondarySpdLim_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S683>/motohawk_probe8' */
  (SecondaryVoltLim_CenterPT_Prb_DataStore()) = (SecondaryVoltLim_Cal_DataStore());

  /* S-Function Block: <S593>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s593_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S593>/Product' incorporates:
   *  MinMax: '<S593>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S593>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (SysVoltFilterConst_DataStore())) || rtIsNaN((SysVoltFilterConst_DataStore()))
    ? rtb_DataTypeConversion_ff : (SysVoltFilterConst_DataStore());

  /* Logic: '<S529>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S529>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S529>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(51) || IsFaultActive(52));

  /* Logic: '<S529>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S529>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S529>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(51) || IsFaultSuspected(52));

  /* S-Function Block: <S362>/motohawk_ain14 Resource: SysVoltage */
  {
    extern NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    SysVoltage_AnalogInput_Get(&BaseEngineController_A02_B.s362_motohawk_ain14,
      NULL);
  }

  /* DataTypeConversion: '<S529>/Data Type Conversion' */
  rtb_DataTypeConversion_kk = BaseEngineController_A02_B.s362_motohawk_ain14;

  /* Product: '<S529>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration4'
   */
  rtb_Product1_e = (real_T)rtb_DataTypeConversion_kk * (SysVoltGain_DataStore());

  /* Sum: '<S529>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s529_Sum1 = rtb_Product1_e + (SysVoltOfst_DataStore
    ());

  /* UnitDelay: '<S529>/Unit Delay1' */
  rtb_UnitDelay1_az = BaseEngineController_A02_DWork.s529_UnitDelay1_DSTATE;

  /* If: '<S529>/If' incorporates:
   *  Logic: '<S529>/Logical Operator5'
   *  Logic: '<S529>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S529>/If Action Subsystem' incorporates:
     *  ActionPort: '<S594>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_az, &rtb_Merge_cs);

    /* End of Outputs for SubSystem: '<S529>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S529>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S595>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_cs);

    /* End of Outputs for SubSystem: '<S529>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S529>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S596>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s529_Sum1, &rtb_Merge_cs);

    /* End of Outputs for SubSystem: '<S529>/If Action Subsystem2' */
  }

  /* End of If: '<S529>/If' */

  /* Sum: '<S598>/Sum1' incorporates:
   *  Constant: '<S598>/Constant'
   *  Product: '<S598>/Product'
   *  Product: '<S598>/Product1'
   *  Sum: '<S598>/Sum'
   *  UnitDelay: '<S598>/Unit Delay'
   */
  rtb_Sum1_gj = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s598_UnitDelay_DSTATE + rtb_Merge_cs *
    rtb_DataTypeConversion_ff;

  /* If: '<S597>/If' incorporates:
   *  Inport: '<S599>/In1'
   *  Inport: '<S600>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S597>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S597>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S597>/NewValue' incorporates:
     *  ActionPort: '<S599>/Action Port'
     */
    BaseEngineController_A02_B.s597_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S597>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S597>/OldValue' incorporates:
     *  ActionPort: '<S600>/Action Port'
     */
    BaseEngineController_A02_B.s597_Merge = rtb_Sum1_gj;

    /* End of Outputs for SubSystem: '<S597>/OldValue' */
  }

  /* End of If: '<S597>/If' */

  /* S-Function Block: <S318>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_A02_B.s597_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s597_Merge, (SysVolt09IdxArr_DataStore()), 9,
       (SysVolt09Idx_DataStore()));
    BaseEngineController_A02_B.s318_motohawk_prelookup = (SysVolt09Idx_DataStore
      ());
  }

  /* Outputs for Enabled SubSystem: '<S7>/Stall' incorporates:
   *  EnablePort: '<S123>/Enable'
   */
  /* RelationalOperator: '<S124>/RelOp' incorporates:
   *  Constant: '<S124>/Constant'
   */
  if (BaseEngineController_A02_B.s344_State == 1) {
    if (!BaseEngineController_A02_DWork.s7_Stall_MODE) {
      /* InitializeConditions for UnitDelay: '<S247>/Unit Delay' */
      BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S248>/Unit Delay' */
      BaseEngineController_A02_DWork.s248_UnitDelay_DSTATE = 0.0;
      BaseEngineController_A02_DWork.s7_Stall_MODE = TRUE;
    }

    /* UnitDelay: '<S247>/Unit Delay' */
    BaseEngineController_A02_B.s247_UnitDelay =
      BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE;

    /* Switch: '<S245>/Switch' incorporates:
     *  Constant: '<S245>/Constant'
     *  RelationalOperator: '<S245>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S245>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S245>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore()) > 0.0) {
      rtb_LogicalOperator1_a = TRUE;
    } else {
      rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s247_UnitDelay <
        (FuelPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S245>/Switch' */
    /* S-Function Block: <S247>/motohawk_delta_time */
    rtb_motohawk_delta_time_o = 0.005;

    /* Sum: '<S247>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S247>/motohawk_delta_time'
     */
    rtb_Product1_e = rtb_motohawk_delta_time_o +
      BaseEngineController_A02_B.s247_UnitDelay;

    /* UnitDelay: '<S248>/Unit Delay' */
    BaseEngineController_A02_B.s248_UnitDelay =
      BaseEngineController_A02_DWork.s248_UnitDelay_DSTATE;

    /* Switch: '<S246>/Switch' incorporates:
     *  Constant: '<S246>/Constant'
     *  RelationalOperator: '<S246>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration1'
     */
    if ((Constant_Oil_Pump_DataStore()) > 0.0) {
      rtb_Switch_dz = TRUE;
    } else {
      rtb_Switch_dz = (BaseEngineController_A02_B.s248_UnitDelay <
                       (OilPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S246>/Switch' */
    /* S-Function Block: <S248>/motohawk_delta_time */
    rtb_motohawk_delta_time_ny = 0.005;

    /* Sum: '<S248>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S248>/motohawk_delta_time'
     */
    rtb_Merge_d = rtb_motohawk_delta_time_ny +
      BaseEngineController_A02_B.s248_UnitDelay;

    /* ZeroOrderHold: '<S123>/Zero-Order Hold1' incorporates:
     *  Constant: '<S123>/EGR'
     */
    BaseEngineController_A02_B.s120_EGR = 0.0;

    /* ZeroOrderHold: '<S123>/Zero-Order Hold10' incorporates:
     *  Constant: '<S123>/No Mult'
     */
    BaseEngineController_A02_B.s120_FuelMult = 0.0;

    /* ZeroOrderHold: '<S123>/Zero-Order Hold11' incorporates:
     *  Constant: '<S123>/O2 Heater'
     */
    BaseEngineController_A02_B.s120_O2Heater = TRUE;

    /* ZeroOrderHold: '<S123>/Zero-Order Hold2' */
    BaseEngineController_A02_B.s120_OILP = rtb_Switch_dz;

    /* ZeroOrderHold: '<S123>/Zero-Order Hold3' */
    BaseEngineController_A02_B.s120_SparkAdv =
      BaseEngineController_A02_ConstB.s123_motohawk_replicate2;

    /* ZeroOrderHold: '<S123>/Zero-Order Hold4' incorporates:
     *  Constant: '<S123>/No Spark'
     */
    BaseEngineController_A02_B.s120_SparkEnergy = 0.0;

    /* ZeroOrderHold: '<S123>/Zero-Order Hold5' incorporates:
     *  Constant: '<S123>/No Start EOI'
     */
    BaseEngineController_A02_B.s120_MakeUpEOI = 0.0;

    /* ZeroOrderHold: '<S123>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_A02_B.s120_FPC[0]), (void *)
           (&BaseEngineController_A02_ConstB.s123_motohawk_replicate[0]), sizeof
           (real_T) << 3U);

    /* ZeroOrderHold: '<S123>/Zero-Order Hold7' */
    BaseEngineController_A02_B.s120_FUELP = rtb_LogicalOperator1_a;

    /* ZeroOrderHold: '<S123>/Zero-Order Hold8' incorporates:
     *  Constant: '<S123>/No Start Fuel Timing'
     */
    BaseEngineController_A02_B.s120_SOI = 0.0;

    /* ZeroOrderHold: '<S123>/Zero-Order Hold9' incorporates:
     *  Constant: '<S123>/Closed Throttle'
     */
    BaseEngineController_A02_B.s120_Throttle = 0.0;

    /* Update for UnitDelay: '<S247>/Unit Delay' */
    BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE = rtb_Product1_e;

    /* Update for UnitDelay: '<S248>/Unit Delay' */
    BaseEngineController_A02_DWork.s248_UnitDelay_DSTATE = rtb_Merge_d;
  } else {
    if (BaseEngineController_A02_DWork.s7_Stall_MODE) {
      BaseEngineController_A02_DWork.s7_Stall_MODE = FALSE;
    }
  }

  /* End of RelationalOperator: '<S124>/RelOp' */
  /* End of Outputs for SubSystem: '<S7>/Stall' */
  /* Logic: '<S639>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S639>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S639>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(57) || IsFaultActive(58));

  /* Logic: '<S639>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S639>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S639>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(57) || IsFaultSuspected(58));

  /* S-Function Block: <S364>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S632>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S364>/motohawk_ain6'
   */
  rtb_Product1_e = (real_T)rtb_motohawk_ain6;

  /* Switch: '<S632>/Switch' incorporates:
   *  Fcn: '<S632>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration2'
   */
  if ((TPS1Rev_Polarity_DataStore())) {
    BaseEngineController_A02_B.s632_Switch = 1023.0 - rtb_Product1_e;
  } else {
    BaseEngineController_A02_B.s632_Switch = rtb_Product1_e;
  }

  /* End of Switch: '<S632>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S636>/motohawk_data_read' */
  rtb_motohawk_data_read1_k = TPS1Raw_Adpt_Low_DataStore();

  /* MinMax: '<S636>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration9'
   */
  rtb_Sum2_d0 = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s636_MinMax = (rtb_Sum2_d0 <=
    (TPS1Adapt_Low_Max_DataStore())) || rtIsNaN((TPS1Adapt_Low_Max_DataStore()))
    ? rtb_Sum2_d0 : (TPS1Adapt_Low_Max_DataStore());

  /* Sum: '<S632>/Sum2' */
  rtb_Product1_e = BaseEngineController_A02_B.s632_Switch -
    BaseEngineController_A02_B.s636_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S636>/motohawk_data_read1' */
  rtb_motohawk_data_read1_k = TPS1Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S636>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration11'
   */
  rtb_Sum2_d0 = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s636_MinMax1 = (rtb_Sum2_d0 >=
    (TPS1Adapt_Hi_Min_DataStore())) || rtIsNaN((TPS1Adapt_Hi_Min_DataStore())) ?
    rtb_Sum2_d0 : (TPS1Adapt_Hi_Min_DataStore());

  /* Gain: '<S632>/Gain2' incorporates:
   *  Product: '<S632>/Product1'
   *  Sum: '<S632>/Sum1'
   */
  rtb_DataTypeConversion_ff = rtb_Product1_e /
    (BaseEngineController_A02_B.s636_MinMax1 -
     BaseEngineController_A02_B.s636_MinMax) * 100.0;

  /* MinMax: '<S640>/MinMax' incorporates:
   *  Constant: '<S632>/Constant1'
   */
  rtb_DataTypeConversion_ff = rtb_DataTypeConversion_ff >= 0.0 ?
    rtb_DataTypeConversion_ff : 0.0;

  /* MinMax: '<S640>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration1'
   */
  BaseEngineController_A02_B.s640_MinMax1 = (rtb_DataTypeConversion_ff <=
    (TPS1MaxLimit_DataStore())) || rtIsNaN((TPS1MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS1MaxLimit_DataStore());

  /* S-Function Block: <S638>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s638_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S638>/Product' incorporates:
   *  MinMax: '<S638>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S638>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (TPS1FilterConst_DataStore())) || rtIsNaN((TPS1FilterConst_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS1FilterConst_DataStore());

  /* Sum: '<S646>/Sum1' incorporates:
   *  Constant: '<S646>/Constant'
   *  Product: '<S646>/Product'
   *  Product: '<S646>/Product1'
   *  Sum: '<S646>/Sum'
   *  UnitDelay: '<S646>/Unit Delay'
   */
  rtb_Sum1_m2 = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s646_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s640_MinMax1 * rtb_DataTypeConversion_ff;

  /* UnitDelay: '<S639>/Unit Delay1' */
  rtb_UnitDelay1_j = BaseEngineController_A02_DWork.s639_UnitDelay1_DSTATE;

  /* If: '<S639>/If' incorporates:
   *  Logic: '<S639>/Logical Operator5'
   *  Logic: '<S639>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S639>/If Action Subsystem' incorporates:
     *  ActionPort: '<S647>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_j, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S639>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S639>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S648>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((TPS1DfltValue_DataStore()),
      &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S639>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S639>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S649>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_Sum1_m2, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S639>/If Action Subsystem2' */
  }

  /* End of If: '<S639>/If' */

  /* If: '<S650>/If' incorporates:
   *  Inport: '<S651>/In1'
   *  Inport: '<S652>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S650>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S650>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S650>/NewValue' incorporates:
     *  ActionPort: '<S651>/Action Port'
     */
    BaseEngineController_A02_B.s650_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S650>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S650>/OldValue' incorporates:
     *  ActionPort: '<S652>/Action Port'
     */
    BaseEngineController_A02_B.s650_Merge = rtb_Merge_h;

    /* End of Outputs for SubSystem: '<S650>/OldValue' */
  }

  /* End of If: '<S650>/If' */

  /* Logic: '<S656>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S656>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S656>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(63) || IsFaultActive(64));

  /* Logic: '<S656>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S656>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S656>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(63) || IsFaultSuspected(64));

  /* S-Function Block: <S364>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get(&rtb_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S633>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S364>/motohawk_ain9'
   */
  rtb_Product1_e = (real_T)rtb_motohawk_ain9;

  /* Switch: '<S633>/Switch' incorporates:
   *  Fcn: '<S633>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration2'
   */
  if ((TPS2Rev_Polarity_DataStore())) {
    BaseEngineController_A02_B.s633_Switch = 1023.0 - rtb_Product1_e;
  } else {
    BaseEngineController_A02_B.s633_Switch = rtb_Product1_e;
  }

  /* End of Switch: '<S633>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S653>/motohawk_data_read' */
  rtb_motohawk_data_read1_k = TPS2Raw_Adpt_Low_DataStore();

  /* MinMax: '<S653>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration9'
   */
  rtb_Sum2_d0 = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s653_MinMax = (rtb_Sum2_d0 <=
    (TPS2Adapt_Low_Max_DataStore())) || rtIsNaN((TPS2Adapt_Low_Max_DataStore()))
    ? rtb_Sum2_d0 : (TPS2Adapt_Low_Max_DataStore());

  /* Sum: '<S633>/Sum2' */
  rtb_Product1_e = BaseEngineController_A02_B.s633_Switch -
    BaseEngineController_A02_B.s653_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S653>/motohawk_data_read1' */
  rtb_motohawk_data_read1_k = TPS2Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S653>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration11'
   */
  rtb_Sum2_d0 = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s653_MinMax1 = (rtb_Sum2_d0 >=
    (TPS2Adapt_Hi_Min_DataStore())) || rtIsNaN((TPS2Adapt_Hi_Min_DataStore())) ?
    rtb_Sum2_d0 : (TPS2Adapt_Hi_Min_DataStore());

  /* Gain: '<S633>/Gain2' incorporates:
   *  Product: '<S633>/Product1'
   *  Sum: '<S633>/Sum1'
   */
  rtb_DataTypeConversion_ff = rtb_Product1_e /
    (BaseEngineController_A02_B.s653_MinMax1 -
     BaseEngineController_A02_B.s653_MinMax) * 100.0;

  /* MinMax: '<S657>/MinMax' incorporates:
   *  Constant: '<S633>/Constant1'
   */
  rtb_DataTypeConversion_ff = rtb_DataTypeConversion_ff >= 0.0 ?
    rtb_DataTypeConversion_ff : 0.0;

  /* MinMax: '<S657>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration1'
   */
  BaseEngineController_A02_B.s657_MinMax1 = (rtb_DataTypeConversion_ff <=
    (TPS2MaxLimit_DataStore())) || rtIsNaN((TPS2MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS2MaxLimit_DataStore());

  /* S-Function Block: <S655>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s655_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S655>/Product' incorporates:
   *  MinMax: '<S655>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (TPS2FilterConst_DataStore())) || rtIsNaN((TPS2FilterConst_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS2FilterConst_DataStore());

  /* Sum: '<S663>/Sum1' incorporates:
   *  Constant: '<S663>/Constant'
   *  Product: '<S663>/Product'
   *  Product: '<S663>/Product1'
   *  Sum: '<S663>/Sum'
   *  UnitDelay: '<S663>/Unit Delay'
   */
  rtb_Sum1_dp = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s663_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s657_MinMax1 * rtb_DataTypeConversion_ff;

  /* UnitDelay: '<S656>/Unit Delay1' */
  rtb_UnitDelay1_d = BaseEngineController_A02_DWork.s656_UnitDelay1_DSTATE;

  /* If: '<S656>/If' incorporates:
   *  Logic: '<S656>/Logical Operator5'
   *  Logic: '<S656>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S656>/If Action Subsystem' incorporates:
     *  ActionPort: '<S664>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_d, &rtb_Merge_py);

    /* End of Outputs for SubSystem: '<S656>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S656>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S665>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((TPS2DfltValue_DataStore()),
      &rtb_Merge_py);

    /* End of Outputs for SubSystem: '<S656>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S656>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S666>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_Sum1_dp, &rtb_Merge_py);

    /* End of Outputs for SubSystem: '<S656>/If Action Subsystem2' */
  }

  /* End of If: '<S656>/If' */

  /* If: '<S667>/If' incorporates:
   *  Inport: '<S668>/In1'
   *  Inport: '<S669>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S667>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S667>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S667>/NewValue' incorporates:
     *  ActionPort: '<S668>/Action Port'
     */
    BaseEngineController_A02_B.s667_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S667>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S667>/OldValue' incorporates:
     *  ActionPort: '<S669>/Action Port'
     */
    BaseEngineController_A02_B.s667_Merge = rtb_Merge_py;

    /* End of Outputs for SubSystem: '<S667>/OldValue' */
  }

  /* End of If: '<S667>/If' */

  /* Logic: '<S329>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S329>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S329>/motohawk_fault_status1'
   */
  rtb_LogicalOperator1_a = (IsFaultActive(57) || IsFaultActive(58));

  /* Logic: '<S329>/Logical Operator6' incorporates:
   *  Logic: '<S329>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S329>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S329>/motohawk_fault_status3'
   */
  rtb_Switch_dz = (rtb_LogicalOperator1_a && (IsFaultActive(63) || IsFaultActive
                    (64)));

  /* Switch: '<S329>/Switch2' incorporates:
   *  Logic: '<S329>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S329>/motohawk_fault_status4'
   */
  if (rtb_Switch_dz || IsFaultActive(65)) {
    /* MinMax: '<S329>/MinMax' */
    BaseEngineController_A02_B.s329_Switch2 =
      (BaseEngineController_A02_B.s667_Merge >=
       BaseEngineController_A02_B.s650_Merge) || rtIsNaN
      (BaseEngineController_A02_B.s650_Merge) ?
      BaseEngineController_A02_B.s667_Merge :
      BaseEngineController_A02_B.s650_Merge;
  } else {
    /* Switch: '<S329>/Switch1' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s329_Switch2 =
        BaseEngineController_A02_B.s667_Merge;
    } else {
      BaseEngineController_A02_B.s329_Switch2 =
        BaseEngineController_A02_B.s650_Merge;
    }

    /* End of Switch: '<S329>/Switch1' */
  }

  /* End of Switch: '<S329>/Switch2' */

  /* RelationalOperator: '<S118>/RelOp' incorporates:
   *  Constant: '<S118>/Constant'
   */
  rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s344_State == 2);

  /* S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read1' */
  BaseEngineController_A02_B.s364_motohawk_data_read1 = APP_DataStore();

  /* If: '<S635>/If' incorporates:
   *  Inport: '<S672>/In1'
   *  Inport: '<S673>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S635>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S635>/override_enable'
   */
  if ((APP1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S635>/NewValue' incorporates:
     *  ActionPort: '<S672>/Action Port'
     */
    rtb_Merge_c5 = (APP1_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S635>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S635>/OldValue' incorporates:
     *  ActionPort: '<S673>/Action Port'
     */
    rtb_Merge_c5 = BaseEngineController_A02_B.s364_motohawk_data_read1;

    /* End of Outputs for SubSystem: '<S635>/OldValue' */
  }

  /* End of If: '<S635>/If' */

  /* Outputs for Enabled SubSystem: '<S7>/Crank' incorporates:
   *  EnablePort: '<S117>/Enable'
   */
  if (rtb_LogicalOperator1_a) {
    if (!BaseEngineController_A02_DWork.s7_Crank_MODE) {
      BaseEngineController_A02_DWork.s7_Crank_MODE = TRUE;
    }

    /* MultiPortSwitch: '<S126>/Multiport Switch2' incorporates:
     *  Constant: '<S126>/ClearFloodFueling3'
     *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_Product1_e = 0.0;
    } else {
      rtb_Product1_e = (OpenThrottleFPCScalar_DataStore());
    }

    /* End of MultiPortSwitch: '<S126>/Multiport Switch2' */

    /* MultiPortSwitch: '<S126>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_motohawk_replicate1 = rtb_Merge_c5;
    } else {
      rtb_motohawk_replicate1 = BaseEngineController_A02_B.s329_Switch2;
    }

    /* End of MultiPortSwitch: '<S126>/Multiport Switch1' */

    /* Sum: '<S126>/Add' incorporates:
     *  Constant: '<S126>/ClearFloodFueling1'
     *  Gain: '<S126>/Gain'
     *  Product: '<S126>/Product1'
     */
    rtb_Product1_e = 0.01 * rtb_motohawk_replicate1 * rtb_Product1_e + 1.0;

    /* RelationalOperator: '<S126>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_a = (rtb_motohawk_replicate1 >=
      (ClearFloodThreshold_DataStore()));

    /* S-Function Block: <S117>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankECT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s618_Merge, (CrankECT05IdxArr_DataStore()),
         5, (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_p = (CrankECT05Idx_DataStore());
    }

    /* S-Function Block: <S117>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_A02_B.s520_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s520_Sum1, (CrankRPM05IdxArr_DataStore()), 5,
         (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_fj = (CrankRPM05Idx_DataStore());
    }

    /* Switch: '<S126>/Switch' incorporates:
     *  Constant: '<S126>/ClearFloodFueling'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S126>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S117>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S117>/motohawk_prelookup1'
     */
    if (rtb_LogicalOperator1_a) {
      rtb_motohawk_replicate1 = 0.0;
    } else {
      /* S-Function Block: <S126>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_e = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup1_p, rtb_motohawk_prelookup_fj, (real_T *)
           ((CrankFPCMap_DataStore())), 5, 5);
        (CrankFPC_DataStore()) = rtb_motohawk_interpolation_2d_e;
      }

      rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_e;
    }

    /* End of Switch: '<S126>/Switch' */

    /* Product: '<S126>/Product' */
    rtb_Product_f5 = rtb_Product1_e * rtb_motohawk_replicate1;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold1' incorporates:
     *  Constant: '<S117>/EGR'
     */
    BaseEngineController_A02_B.s120_EGR = 0.0;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold10' incorporates:
     *  Constant: '<S117>/Mult'
     */
    BaseEngineController_A02_B.s120_FuelMult = 1.0;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold11' incorporates:
     *  Constant: '<S117>/O2 Heater'
     */
    BaseEngineController_A02_B.s120_O2Heater = TRUE;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold2' incorporates:
     *  Constant: '<S117>/OILP'
     */
    BaseEngineController_A02_B.s120_OILP = TRUE;

    /* S-Function Block: <S117>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_fj, (real_T *) ((CrankSparkTbl_DataStore())), 5);
      (CrankSpark_DataStore()) = rtb_motohawk_interpolation_1d2_l;
    }

    /* S-Function (motohawk_sfun_replicate): '<S117>/motohawk_replicate1' */

    /* S-Function Block: <S117>/motohawk_replicate1 */
    rtb_motohawk_replicate1 = rtb_motohawk_interpolation_1d2_l;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold3' */
    BaseEngineController_A02_B.s120_SparkAdv = rtb_motohawk_replicate1;

    /* S-Function Block: <S117>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_a = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_p, rtb_motohawk_prelookup_fj, (real_T *)
         ((CrankSpkEnergyMap_DataStore())), 5, 5);
      (CrankSpkEnergy_DataStore()) = rtb_motohawk_interpolation_2d1_a;
    }

    /* ZeroOrderHold: '<S117>/Zero-Order Hold4' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S117>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S117>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S117>/motohawk_prelookup1'
     */
    BaseEngineController_A02_B.s120_SparkEnergy =
      rtb_motohawk_interpolation_2d1_a;

    /* S-Function Block: <S117>/motohawk_interpolation_1d4 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d4_k = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_fj, (real_T *) ((CrankSOITbl_DataStore())), 5);
      (CrankSOI_DataStore()) = rtb_motohawk_interpolation_1d4_k;
    }

    /* ZeroOrderHold: '<S117>/Zero-Order Hold5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S117>/motohawk_interpolation_1d4'
     *  S-Function (motohawk_sfun_prelookup): '<S117>/motohawk_prelookup'
     */
    BaseEngineController_A02_B.s120_SOI = rtb_motohawk_interpolation_1d4_k;

    /* S-Function (motohawk_sfun_replicate): '<S117>/motohawk_replicate' */

    /* S-Function Block: <S117>/motohawk_replicate */
    {
      int_T i1;
      real_T *y0 = rtb_motohawk_replicate;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] = rtb_Product_f5;
      }
    }

    /* ZeroOrderHold: '<S117>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_A02_B.s120_FPC[0]), (void *)
           &rtb_motohawk_replicate[0], sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S117>/Zero-Order Hold7' incorporates:
     *  Constant: '<S117>/ON'
     */
    BaseEngineController_A02_B.s120_FUELP = TRUE;

    /* S-Function Block: <S117>/motohawk_interpolation_1d5 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_fj, (real_T *) ((CrankMakeUpEOITbl_DataStore())),
         5);
      (CrankMakeUpEOI_DataStore()) = rtb_motohawk_interpolation_1d5;
    }

    /* ZeroOrderHold: '<S117>/Zero-Order Hold8' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S117>/motohawk_interpolation_1d5'
     *  S-Function (motohawk_sfun_prelookup): '<S117>/motohawk_prelookup'
     */
    BaseEngineController_A02_B.s120_MakeUpEOI = rtb_motohawk_interpolation_1d5;

    /* S-Function Block: <S117>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_o5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_p, (real_T *) ((CrankAirflowSetPtTbl_DataStore())),
         5);
      (CrankAirflowSetPt_DataStore()) = rtb_motohawk_interpolation_1d1_o5;
    }

    /* ZeroOrderHold: '<S117>/Zero-Order Hold9' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S117>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S117>/motohawk_prelookup1'
     */
    BaseEngineController_A02_B.s120_Throttle = rtb_motohawk_interpolation_1d1_o5;
  } else {
    if (BaseEngineController_A02_DWork.s7_Crank_MODE) {
      BaseEngineController_A02_DWork.s7_Crank_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S7>/Crank' */
  /* Switch: '<S323>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S323>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* MinMax: '<S340>/MinMax' incorporates:
     *  Constant: '<S323>/Constant1'
     *  Product: '<S323>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S323>/motohawk_calibration2'
     */
    rtb_Sum2_d0 = (Overheat_ScaleAPP_DataStore()) * rtb_Merge_c5;
    y = rtb_Sum2_d0 >= 0.0 ? rtb_Sum2_d0 : 0.0;

    /* MinMax: '<S340>/MinMax1' incorporates:
     *  Constant: '<S323>/Constant1'
     *  MinMax: '<S340>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S323>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s323_Switch1 = (y <= (Overheat_MaxAPP_DataStore()))
      || rtIsNaN((Overheat_MaxAPP_DataStore())) ? y : (Overheat_MaxAPP_DataStore
      ());
  } else {
    BaseEngineController_A02_B.s323_Switch1 = rtb_Merge_c5;
  }

  /* End of Switch: '<S323>/Switch1' */
  /* S-Function Block: <S319>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_A02_B.s650_Merge;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s650_Merge, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S278>/Base TPS Request' */

  /* UnitDelay: '<S320>/Unit Delay2' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s320_UnitDelay2_DSTATE;

  /* S-Function Block: <S320>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_A02_B.s323_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s323_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_f = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S320>/motohawk_interpolation_1d2 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d2_d3 = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_f, (real_T *) ((ETCRequestTbl_DataStore())), 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_1d2_d3;
  }

  /* RelationalOperator: '<S320>/Relational Operator3' */
  BaseEngineController_A02_B.s320_RelationalOperator3 = ((rtb_UnitDelay_mz <
    rtb_motohawk_interpolation_1d2_d3));

  /* Outputs for Enabled SubSystem: '<S320>/PassThrough1' */
  BaseEngineController_A02_PassThrough1
    (BaseEngineController_A02_B.s320_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_A02_B.s320_Merge);

  /* End of Outputs for SubSystem: '<S320>/PassThrough1' */

  /* RelationalOperator: '<S320>/Relational Operator2' */
  rtb_RelationalOperator2_la = (rtb_UnitDelay_mz >
    rtb_motohawk_interpolation_1d2_d3);

  /* Outputs for Enabled SubSystem: '<S320>/PassThrough2' */
  BaseEngineController_A02_PassThrough1(rtb_RelationalOperator2_la,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_A02_B.s320_Merge);

  /* End of Outputs for SubSystem: '<S320>/PassThrough2' */

  /* S-Function Block: <S336>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s336_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S320>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s320_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_mz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S320>/Product' incorporates:
   *  MinMax: '<S320>/MinMax'
   */
  rtb_UnitDelay_mz /= (rtb_UnitDelay_mz >= BaseEngineController_A02_B.s320_Merge)
    || rtIsNaN(BaseEngineController_A02_B.s320_Merge) ? rtb_UnitDelay_mz :
    BaseEngineController_A02_B.s320_Merge;

  /* Product: '<S333>/Product' */
  rtb_Product1_e = rtb_motohawk_interpolation_1d2_d3 * rtb_UnitDelay_mz;

  /* Sum: '<S333>/Sum' incorporates:
   *  Constant: '<S333>/Constant'
   */
  rtb_Merge_d = 1.0 - rtb_UnitDelay_mz;

  /* UnitDelay: '<S333>/Unit Delay' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s333_UnitDelay_DSTATE;

  /* Sum: '<S333>/Sum1' incorporates:
   *  Product: '<S333>/Product1'
   */
  rtb_Sum1_gje = rtb_Merge_d * rtb_UnitDelay_mz + rtb_Product1_e;

  /* UnitDelay: '<S336>/Unit Delay' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s336_UnitDelay_DSTATE;

  /* Product: '<S336>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S336>/motohawk_delta_time'
   *  Sum: '<S336>/Sum3'
   */
  rtb_Product1_e = 1.0 / rtb_motohawk_delta_time_e * (rtb_Sum1_gje -
    rtb_UnitDelay_mz);

  /* S-Function Block: <S320>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_kt = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_kt;
  }

  /* MinMax: '<S337>/MinMax' */
  y = (rtb_Product1_e >= rtb_motohawk_interpolation_1d1_kt) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_kt) ? rtb_Product1_e :
    rtb_motohawk_interpolation_1d1_kt;

  /* S-Function Block: <S320>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_kt = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_kt;
  }

  /* Sum: '<S336>/Sum2' incorporates:
   *  MinMax: '<S337>/MinMax'
   *  MinMax: '<S337>/MinMax1'
   *  Product: '<S336>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S336>/motohawk_delta_time'
   */
  BaseEngineController_A02_B.s336_Sum2 = ((y <=
    rtb_motohawk_interpolation_1d1_kt) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_kt) ? y : rtb_motohawk_interpolation_1d1_kt)
    * rtb_motohawk_delta_time_e + rtb_UnitDelay_mz;

  /* UnitDelay: '<S320>/Unit Delay1' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s320_UnitDelay1_DSTATE;

  /* UnitDelay: '<S320>/Unit Delay3' */
  rtb_Merge_d = BaseEngineController_A02_DWork.s320_UnitDelay3_DSTATE;

  /* UnitDelay: '<S320>/Unit Delay4' */
  rtb_Merge_o4 = BaseEngineController_A02_DWork.s320_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S320>/Unit Delay2' */
  BaseEngineController_A02_DWork.s320_UnitDelay2_DSTATE = rtb_Product1_e;

  /* Update for UnitDelay: '<S333>/Unit Delay' */
  BaseEngineController_A02_DWork.s333_UnitDelay_DSTATE = rtb_Sum1_gje;

  /* Update for UnitDelay: '<S336>/Unit Delay' */
  BaseEngineController_A02_DWork.s336_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s336_Sum2;

  /* Update for UnitDelay: '<S320>/Unit Delay1' */
  BaseEngineController_A02_DWork.s320_UnitDelay1_DSTATE = rtb_Merge_d;

  /* Update for UnitDelay: '<S320>/Unit Delay3' */
  BaseEngineController_A02_DWork.s320_UnitDelay3_DSTATE = rtb_Merge_o4;

  /* Update for UnitDelay: '<S320>/Unit Delay4' */
  BaseEngineController_A02_DWork.s320_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_1d2_d3;

  /* End of Outputs for SubSystem: '<S278>/Base TPS Request' */

  /* UnitDelay: '<S327>/Unit Delay' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s327_UnitDelay_DSTATE;

  /* Sum: '<S327>/Sum' incorporates:
   *  Constant: '<S327>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S327>/motohawk_calibration'
   */
  rtb_Merge_d = 1.0 - (O2DelagFilterConst_DataStore());

  /* S-Function Block: <S603>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s603_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S603>/Product' incorporates:
   *  MinMax: '<S603>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S603>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (O2_PostCatFiltConst_DataStore())) || rtIsNaN((O2_PostCatFiltConst_DataStore
    ())) ? rtb_DataTypeConversion_ff : (O2_PostCatFiltConst_DataStore());

  /* Logic: '<S601>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S601>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S601>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(44) || IsFaultActive(45));

  /* Logic: '<S601>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S601>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S601>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(44) || IsFaultSuspected(45));

  /* S-Function Block: <S363>/motohawk_ain3 Resource: PostO2Pin */
  {
    extern NativeError_S PostO2Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    PostO2Pin_AnalogInput_Get(&BaseEngineController_A02_B.s363_motohawk_ain3,
      NULL);
  }

  /* DataTypeConversion: '<S601>/Data Type Conversion' */
  rtb_DataTypeConversion_m = (real_T)
    BaseEngineController_A02_B.s363_motohawk_ain3;

  /* S-Function Block: <S608>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (O2_PostCatIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_m,
      (O2_PostCatIdxArr_DataStore()), 20, (O2_PostCatIdx_DataStore()));
    rtb_motohawk_prelookup_l = (O2_PostCatIdx_DataStore());
  }

  /* S-Function Block: <S608>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_B.s608_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_l, (real_T *)
      ((O2_PostCatTbl_DataStore())), 20);
  }

  /* UnitDelay: '<S601>/Unit Delay' */
  rtb_UnitDelay_hm = BaseEngineController_A02_DWork.s601_UnitDelay_DSTATE;

  /* If: '<S601>/If' incorporates:
   *  Logic: '<S601>/Logical Operator5'
   *  Logic: '<S601>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S601>/If Action Subsystem' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_hm, &rtb_Merge_dh);

    /* End of Outputs for SubSystem: '<S601>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S601>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((O2_PostCatDefault_DataStore()),
      &rtb_Merge_dh);

    /* End of Outputs for SubSystem: '<S601>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S601>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S606>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s608_motohawk_interpolation_1d, &rtb_Merge_dh);

    /* End of Outputs for SubSystem: '<S601>/If Action Subsystem2' */
  }

  /* End of If: '<S601>/If' */

  /* Sum: '<S609>/Sum1' incorporates:
   *  Constant: '<S609>/Constant'
   *  Product: '<S609>/Product'
   *  Product: '<S609>/Product1'
   *  Sum: '<S609>/Sum'
   *  UnitDelay: '<S609>/Unit Delay'
   */
  rtb_Sum1_kq = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s609_UnitDelay_DSTATE + rtb_Merge_dh *
    rtb_DataTypeConversion_ff;

  /* If: '<S607>/If' incorporates:
   *  Inport: '<S610>/In1'
   *  Inport: '<S611>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S607>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S607>/override_enable'
   */
  if ((O2_PostCat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S607>/NewValue' incorporates:
     *  ActionPort: '<S610>/Action Port'
     */
    BaseEngineController_A02_B.s607_Merge = (O2_PostCat_new_DataStore());

    /* End of Outputs for SubSystem: '<S607>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S607>/OldValue' incorporates:
     *  ActionPort: '<S611>/Action Port'
     */
    BaseEngineController_A02_B.s607_Merge = rtb_Sum1_kq;

    /* End of Outputs for SubSystem: '<S607>/OldValue' */
  }

  /* End of If: '<S607>/If' */

  /* Sum: '<S327>/Sum1' incorporates:
   *  Product: '<S327>/Product'
   *  Product: '<S327>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S327>/motohawk_calibration'
   */
  BaseEngineController_A02_B.s327_Sum1 = rtb_Product1_e * rtb_Merge_d +
    (O2DelagFilterConst_DataStore()) * BaseEngineController_A02_B.s607_Merge;

  /* S-Function Block: <S349>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s349_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c0 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S349>/Switch' incorporates:
   *  Constant: '<S348>/Constant'
   *  Constant: '<S349>/Constant'
   *  RelationalOperator: '<S348>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S331>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S349>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S349>/motohawk_delta_time'
   *  Sum: '<S349>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_A02_B.s349_Switch = rtb_motohawk_delta_time_c0 +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_A02_B.s349_Switch = 0.0;
  }

  /* End of Switch: '<S349>/Switch' */
  /* S-Function Block: <S317>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_A02_B.s520_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s520_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_A02_B.s317_motohawk_prelookup1 = (RPM09Idx_DataStore());
  }

  /* S-Function Block: <S317>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_A02_B.s520_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s520_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_A02_B.s317_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S315>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_A02_B.s618_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s618_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_A02_B.s315_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S316>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_A02_B.s627_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s627_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_A02_B.s316_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_data_read): '<S275>/motohawk_data_read1' */
  BaseEngineController_A02_B.s275_motohawk_data_read1 = EngineState_DataStore();

  /* S-Function Block: <S275>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s275_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_A02_B.s275_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S275>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S275>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch (BaseEngineController_A02_DWork.s280_is_c19_BaseEngineController_A02) {
   case BaseEngineController_A02_IN_CrankRun:
    /* During 'CrankRun': '<S280>:2' */
    if (BaseEngineController_A02_B.s275_motohawk_data_read1 == 1) {
      /* Transition: '<S280>:6' */
      BaseEngineController_A02_DWork.s280_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_StallDelay;

      /* Entry 'StallDelay': '<S280>:3' */
      BaseEngineController_A02_B.s280_Enable = FALSE;
      BaseEngineController_A02_B.s280_Timer = 0.0;
      BaseEngineController_A02_DWork.s280_TOld = 0.0;
    }
    break;

   case BaseEngineController_A02_IN_Stall:
    /* During 'Stall': '<S280>:1' */
    if (BaseEngineController_A02_B.s275_motohawk_data_read1 > 1) {
      /* Transition: '<S280>:5' */
      BaseEngineController_A02_DWork.s280_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_CrankRun;

      /* Entry 'CrankRun': '<S280>:2' */
      BaseEngineController_A02_B.s280_Enable = FALSE;
    }
    break;

   case BaseEngineController_A02_IN_StallDelay:
    /* During 'StallDelay': '<S280>:3' */
    if (BaseEngineController_A02_B.s275_motohawk_data_read1 > 1) {
      /* Transition: '<S280>:8' */
      BaseEngineController_A02_DWork.s280_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_CrankRun;

      /* Entry 'CrankRun': '<S280>:2' */
      BaseEngineController_A02_B.s280_Enable = FALSE;
    } else if (((BaseEngineController_A02_B.s275_motohawk_data_read1 == 1) &
                (BaseEngineController_A02_B.s280_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S280>:7' */
      BaseEngineController_A02_DWork.s280_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall;

      /* Entry 'Stall': '<S280>:1' */
      BaseEngineController_A02_B.s280_Enable = TRUE;
    } else {
      BaseEngineController_A02_B.s280_Timer =
        BaseEngineController_A02_DWork.s280_TOld +
        BaseEngineController_A02_B.s275_motohawk_delta_time;
      BaseEngineController_A02_DWork.s280_TOld =
        BaseEngineController_A02_B.s280_Timer;
    }
    break;

   default:
    /* Transition: '<S280>:4' */
    BaseEngineController_A02_DWork.s280_is_c19_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Stall;

    /* Entry 'Stall': '<S280>:1' */
    BaseEngineController_A02_B.s280_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S275>/Baro Stall State Delay' */
  /* Logic: '<S525>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S525>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S525>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(34) || IsFaultActive(35));

  /* Logic: '<S525>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S525>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S525>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(34) || IsFaultSuspected(35));

  /* S-Function Block: <S362>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_A02_B.s362_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S525>/Data Type Conversion' */
  rtb_DataTypeConversion_ff = (real_T)
    BaseEngineController_A02_B.s362_motohawk_ain_read1;

  /* Product: '<S525>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S525>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_DataTypeConversion_ff * (MAPTimeGain_DataStore());

  /* Sum: '<S525>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S525>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s525_Sum1 = rtb_Product1_e + (MAPTimeOfst_DataStore
    ());

  /* UnitDelay: '<S525>/Unit Delay1' */
  rtb_UnitDelay1_dq = BaseEngineController_A02_DWork.s525_UnitDelay1_DSTATE;

  /* If: '<S525>/If' incorporates:
   *  Logic: '<S525>/Logical Operator5'
   *  Logic: '<S525>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S525>/If Action Subsystem' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_dq, &rtb_Merge_pk);

    /* End of Outputs for SubSystem: '<S525>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S525>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_pk);

    /* End of Outputs for SubSystem: '<S525>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S525>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S570>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s525_Sum1, &rtb_Merge_pk);

    /* End of Outputs for SubSystem: '<S525>/If Action Subsystem2' */
  }

  /* End of If: '<S525>/If' */

  /* Outputs for Enabled SubSystem: '<S275>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S281>/Enable'
   */
  if (BaseEngineController_A02_B.s280_Enable) {
    if (!BaseEngineController_A02_DWork.s275_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S281>/Unit Delay' */
      BaseEngineController_A02_DWork.s281_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s275_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S281>/Add' incorporates:
     *  Constant: '<S281>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration'
     */
    rtb_Add_a = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S281>/Sum' incorporates:
     *  Constant: '<S281>/Constant'
     *  UnitDelay: '<S281>/Unit Delay'
     */
    rtb_Sum_l3 = (int8_T)(BaseEngineController_A02_DWork.s281_UnitDelay_DSTATE +
                          1);

    /* RelationalOperator: '<S281>/Relational Operator' */
    rtb_LogicalOperator1_a = (rtb_Sum_l3 <= rtb_Add_a);

    /* Switch: '<S281>/Switch' */
    if (rtb_LogicalOperator1_a) {
      rtb_Add_a = rtb_Sum_l3;
    }

    /* End of Switch: '<S281>/Switch' */

    /* Outputs for Enabled SubSystem: '<S281>/Collect Average' incorporates:
     *  EnablePort: '<S284>/Enable'
     */
    /* Logic: '<S281>/Logical Operator' incorporates:
     *  Constant: '<S281>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S281>/Relational Operator1'
     */
    if (rtb_LogicalOperator1_a && (rtb_Sum_l3 > 2)) {
      if (!BaseEngineController_A02_DWork.s281_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S284>/Unit Delay1' */
        BaseEngineController_A02_DWork.s284_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s281_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S284>/Sum1' incorporates:
       *  UnitDelay: '<S284>/Unit Delay1'
       */
      rtb_Product1_e = rtb_Merge_pk +
        BaseEngineController_A02_DWork.s284_UnitDelay1_DSTATE;

      /* Product: '<S284>/Product' incorporates:
       *  DataTypeConversion: '<S284>/Data Type Conversion'
       *  Sum: '<S281>/Add1'
       */
      BaseEngineController_A02_B.s284_Product = 1.0 / (real_T)(int8_T)(rtb_Add_a
        - 2) * rtb_Product1_e;

      /* Update for UnitDelay: '<S284>/Unit Delay1' */
      BaseEngineController_A02_DWork.s284_UnitDelay1_DSTATE = rtb_Product1_e;
    } else {
      if (BaseEngineController_A02_DWork.s281_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s281_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S281>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S281>/Collect Average' */

    /* Update for UnitDelay: '<S281>/Unit Delay' */
    BaseEngineController_A02_DWork.s281_UnitDelay_DSTATE = rtb_Add_a;
  } else {
    if (BaseEngineController_A02_DWork.s275_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S281>/Collect Average' */
      BaseEngineController_A02_DWork.s281_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S281>/Collect Average' */
      BaseEngineController_A02_DWork.s275_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S275>/Capture Signal At Startup' */

  /* If: '<S283>/If' incorporates:
   *  Inport: '<S290>/In1'
   *  Inport: '<S291>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S283>/override_enable'
   *  UnitDelay: '<S283>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S283>/NewValue' incorporates:
     *  ActionPort: '<S290>/Action Port'
     */
    rtb_Merge_kp = BaseEngineController_A02_DWork.s283_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S283>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S283>/OldValue' incorporates:
     *  ActionPort: '<S291>/Action Port'
     */
    rtb_Merge_kp = BaseEngineController_A02_B.s284_Product;

    /* End of Outputs for SubSystem: '<S283>/OldValue' */
  }

  /* End of If: '<S283>/If' */

  /* Sum: '<S283>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S283>/offset'
   */
  BaseEngineController_A02_B.s283_Sum = rtb_Merge_kp + (BARO_offset_DataStore());

  /* Saturate: '<S275>/Saturation1' */
  rtb_Saturation1 = BaseEngineController_A02_B.s283_Sum >= 1.0 ?
    BaseEngineController_A02_B.s283_Sum : 1.0;

  /* S-Function Block: <S282>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_n = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S282>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_d = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_d;
  }

  /* S-Function Block: <S316>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_A02_B.s627_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s627_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_c = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S282>/motohawk_interpolation_1d2 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d2_h = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2_c, (real_T *) ((VETempCorrTbl_DataStore())), 17);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_1d2_h;
  }

  /* DataTypeConversion: '<S282>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S282>/Number of Combustion Events Per Revolution'
   */
  rtb_Merge_d = (real_T)((uint8_T)CombEventsPerRev_DataStore());

  /* Fcn: '<S285>/C to K' */
  rtb_DataTypeConversion_e = BaseEngineController_A02_B.s627_Merge + 273.2;

  /* Saturate: '<S282>/Saturation' */
  rtb_Merge_o4 = rtb_DataTypeConversion_e >= 1.0 ? rtb_DataTypeConversion_e :
    1.0;

  /* S-Function Block: <S559>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s559_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S559>/Product' incorporates:
   *  MinMax: '<S559>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (MAPFilterConst_DataStore())) || rtIsNaN((MAPFilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (MAPFilterConst_DataStore());

  /* Logic: '<S524>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S524>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S524>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(32) || IsFaultActive(33));

  /* Logic: '<S524>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S524>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S524>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(32) || IsFaultSuspected(33));

  /* S-Function (motohawk_sfun_trigger): '<S526>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_6806p0004 */
  if (BaseEngineController_A02_DWork.s526_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s526_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S524>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S524>/motohawk_calibration4'
   */
  rtb_Product1_e = BaseEngineController_A02_B.s526_Merge * (MAPGain_DataStore());

  /* Sum: '<S524>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S524>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s524_Sum1 = rtb_Product1_e + (MAPOfst_DataStore());

  /* UnitDelay: '<S524>/Unit Delay1' */
  rtb_UnitDelay1_n = BaseEngineController_A02_DWork.s524_UnitDelay1_DSTATE;

  /* If: '<S524>/If' incorporates:
   *  Logic: '<S524>/Logical Operator5'
   *  Logic: '<S524>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S524>/If Action Subsystem' incorporates:
     *  ActionPort: '<S560>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_n, &rtb_Merge_bn);

    /* End of Outputs for SubSystem: '<S524>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S524>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S561>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_bn);

    /* End of Outputs for SubSystem: '<S524>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S524>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S562>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s524_Sum1, &rtb_Merge_bn);

    /* End of Outputs for SubSystem: '<S524>/If Action Subsystem2' */
  }

  /* End of If: '<S524>/If' */

  /* Sum: '<S564>/Sum1' incorporates:
   *  Constant: '<S564>/Constant'
   *  Product: '<S564>/Product'
   *  Product: '<S564>/Product1'
   *  Sum: '<S564>/Sum'
   *  UnitDelay: '<S564>/Unit Delay'
   */
  rtb_Sum1_pb = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_A02_DWork.s564_UnitDelay_DSTATE + rtb_Merge_bn *
    rtb_DataTypeConversion_e;

  /* If: '<S563>/If' incorporates:
   *  Inport: '<S565>/In1'
   *  Inport: '<S566>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S563>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S563>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S563>/NewValue' incorporates:
     *  ActionPort: '<S565>/Action Port'
     */
    BaseEngineController_A02_B.s563_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S563>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S563>/OldValue' incorporates:
     *  ActionPort: '<S566>/Action Port'
     */
    BaseEngineController_A02_B.s563_Merge = rtb_Sum1_pb;

    /* End of Outputs for SubSystem: '<S563>/OldValue' */
  }

  /* End of If: '<S563>/If' */

  /* Product: '<S282>/Nominal Air Flow Rate2' incorporates:
   *  Constant: '<S282>/Gas Const [J//kg-K]'
   *  Constant: '<S282>/Units Equivalency Factor'
   *  S-Function (motohawk_sfun_data_read): '<S282>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S282>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S282>/motohawk_interpolation_1d2'
   *  S-Function (motohawk_sfun_prelookup): '<S282>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S316>/motohawk_prelookup2'
   */
  BaseEngineController_A02_B.s282_NominalAirFlowRate2 =
    BaseEngineController_A02_B.s520_Sum1 * BaseEngineController_A02_B.s563_Merge
    * rtb_motohawk_interpolation_1d1_d * rtb_motohawk_interpolation_1d2_h *
    CylSweptVol_DataStore() * rtb_Merge_d / rtb_Merge_o4 / 60.0 / 287.0;

  /* Product: '<S282>/Pressure Ratio' */
  BaseEngineController_A02_B.s282_PressureRatio =
    BaseEngineController_A02_B.s563_Merge / rtb_Saturation1;

  /* S-Function Block: <S282>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (PortPressRatio17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s282_PressureRatio,
       (PortPressRatio17IdxArr_DataStore()), 17, (PortPressRatio17Idx_DataStore()));
    rtb_motohawk_prelookup_ld = (PortPressRatio17Idx_DataStore());
  }

  /* S-Function Block: <S282>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup_ld, BaseEngineController_A02_B.s317_Indexes,
       (real_T *) ((VEMap_DataStore())), 17, 17);
    (VE_DataStore()) = rtb_motohawk_interpolation_2d;
  }

  /* If: '<S287>/If' incorporates:
   *  Inport: '<S288>/In1'
   *  Inport: '<S289>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S287>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S287>/override_enable'
   */
  if ((VETable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S287>/NewValue' incorporates:
     *  ActionPort: '<S288>/Action Port'
     */
    BaseEngineController_A02_B.s287_Merge = (VETable_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S287>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S287>/OldValue' incorporates:
     *  ActionPort: '<S289>/Action Port'
     */
    BaseEngineController_A02_B.s287_Merge = rtb_motohawk_interpolation_2d;

    /* End of Outputs for SubSystem: '<S287>/OldValue' */
  }

  /* End of If: '<S287>/If' */

  /* S-Function Block: <S501>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s501_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S501>/Product' incorporates:
   *  MinMax: '<S501>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S501>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (MAFFiltConst_DataStore())) || rtIsNaN((MAFFiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (MAFFiltConst_DataStore());

  /* Logic: '<S499>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(30) || IsFaultActive(31));

  /* Logic: '<S499>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(30) || IsFaultSuspected(31));

  /* S-Function Block: <S360>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_l);
  }

  /* DataTypeConversion: '<S360>/Data Type Conversion' */
  rtb_Switch_e = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S360>/Gain' */
  BaseEngineController_A02_B.s360_Gain = 0.01 * rtb_Switch_e;

  /* S-Function Block: <S506>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s360_Gain, (MAFIdxArr_DataStore()), 40,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_j = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S506>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_B.s506_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_j, (real_T *)
      ((MAFTbl_DataStore())), 40);
  }

  /* UnitDelay: '<S499>/Unit Delay' */
  rtb_UnitDelay_az = BaseEngineController_A02_DWork.s499_UnitDelay_DSTATE;

  /* If: '<S499>/If' incorporates:
   *  Logic: '<S499>/Logical Operator5'
   *  Logic: '<S499>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem' incorporates:
     *  ActionPort: '<S502>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_az, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S503>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S504>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s506_motohawk_interpolation_1d, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem2' */
  }

  /* End of If: '<S499>/If' */

  /* Sum: '<S507>/Sum1' incorporates:
   *  Constant: '<S507>/Constant'
   *  Product: '<S507>/Product'
   *  Product: '<S507>/Product1'
   *  Sum: '<S507>/Sum'
   *  UnitDelay: '<S507>/Unit Delay'
   */
  rtb_Sum1_f = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_A02_DWork.s507_UnitDelay_DSTATE + rtb_Merge_j *
    rtb_DataTypeConversion_e;

  /* If: '<S505>/If' incorporates:
   *  Inport: '<S508>/In1'
   *  Inport: '<S509>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S505>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S505>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S505>/NewValue' incorporates:
     *  ActionPort: '<S508>/Action Port'
     */
    BaseEngineController_A02_B.s505_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S505>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S505>/OldValue' incorporates:
     *  ActionPort: '<S509>/Action Port'
     */
    BaseEngineController_A02_B.s505_Merge = rtb_Sum1_f;

    /* End of Outputs for SubSystem: '<S505>/OldValue' */
  }

  /* End of If: '<S505>/If' */

  /* MultiPortSwitch: '<S282>/Multiport Switch' incorporates:
   *  Product: '<S282>/Model Air Mass Flow Rate'
   *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    rtb_Switch_e = BaseEngineController_A02_B.s287_Merge *
      BaseEngineController_A02_B.s282_NominalAirFlowRate2;
  } else {
    rtb_Switch_e = BaseEngineController_A02_B.s505_Merge;
  }

  /* End of MultiPortSwitch: '<S282>/Multiport Switch' */

  /* Saturate: '<S282>/Saturation1' */
  BaseEngineController_A02_B.s282_Saturation1 = rtb_Switch_e >= 1.0 ?
    rtb_Switch_e : 1.0;

  /* S-Function Block: <S295>/motohawk_delta_time */
  rtb_Switch_e = 0.005;

  /* UnitDelay: '<S295>/Unit Delay2' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s295_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S295>/Relational Operator4' incorporates:
   *  UnitDelay: '<S295>/Unit Delay2'
   */
  BaseEngineController_A02_B.s295_RelationalOperator4 =
    ((BaseEngineController_A02_DWork.s295_UnitDelay2_DSTATE <
      BaseEngineController_A02_B.s520_Sum1));

  /* Outputs for Enabled SubSystem: '<S295>/IncreasingFilter' incorporates:
   *  EnablePort: '<S299>/Enable'
   */
  if (BaseEngineController_A02_B.s295_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S299>/motohawk_calibration1' */
    BaseEngineController_A02_B.s295_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S295>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S295>/DecreasingFilter' incorporates:
   *  EnablePort: '<S297>/Enable'
   */
  /* RelationalOperator: '<S295>/Relational Operator3' */
  if (rtb_Product1_e > BaseEngineController_A02_B.s520_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S297>/motohawk_calibration2' */
    BaseEngineController_A02_B.s295_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S295>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S295>/DecreasingFilter' */

  /* Product: '<S295>/Product' incorporates:
   *  MinMax: '<S295>/MinMax'
   */
  rtb_Switch_e /= (rtb_Switch_e >= BaseEngineController_A02_B.s295_Merge) ||
    rtIsNaN(BaseEngineController_A02_B.s295_Merge) ? rtb_Switch_e :
    BaseEngineController_A02_B.s295_Merge;

  /* Sum: '<S298>/Sum1' incorporates:
   *  Constant: '<S298>/Constant'
   *  Product: '<S298>/Product'
   *  Product: '<S298>/Product1'
   *  Sum: '<S298>/Sum'
   *  UnitDelay: '<S298>/Unit Delay'
   */
  BaseEngineController_A02_B.s298_Sum1 = (1.0 - rtb_Switch_e) *
    BaseEngineController_A02_DWork.s298_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s520_Sum1 * rtb_Switch_e;

  /* Sum: '<S292>/Sum1' */
  rtb_Switch_e = BaseEngineController_A02_B.s520_Sum1 -
    BaseEngineController_A02_B.s298_Sum1;

  /* Abs: '<S292>/Abs1' */
  rtb_Switch_e = fabs(rtb_Switch_e);

  /* RelationalOperator: '<S292>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S292>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_LogicalOperator1_a = (rtb_Switch_e <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S292>/Relational Operator2' incorporates:
   *  Constant: '<S292>/Constant'
   */
  rtb_Switch_dz = (BaseEngineController_A02_B.s520_Sum1 > 0.0);

  /* Saturate: '<S303>/Saturation2' */
  rtb_Saturation2 = BaseEngineController_A02_B.s520_Sum1 >= 1.0 ?
    BaseEngineController_A02_B.s520_Sum1 : 1.0;

  /* DataTypeConversion: '<S293>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S293>/Number of Combustion Events Per Revolution'
   */
  rtb_Switch_e = (real_T)((uint8_T)CombEventsPerRev_DataStore());

  /* Saturate: '<S303>/Saturation' */
  rtb_Saturation_d = rtb_Switch_e >= 1.0 ? rtb_Switch_e : 1.0;

  /* RelationalOperator: '<S306>/RelOp' incorporates:
   *  Constant: '<S306>/Constant'
   */
  rtb_RelOp_pg = (BaseEngineController_A02_B.s520_Sum1 != 0.0);

  /* Outputs for Enabled SubSystem: '<S303>/Multiply and Divide, avoiding divde by zero1' */
  BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(rtb_RelOp_pg,
    BaseEngineController_A02_B.s282_Saturation1, 60000.0, rtb_Saturation2,
    rtb_Saturation_d,
    &BaseEngineController_A02_B.s303_MultiplyandDivideavoidingdivdebyzero1);

  /* End of Outputs for SubSystem: '<S303>/Multiply and Divide, avoiding divde by zero1' */

  /* S-Function Block: <S293>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APC_TPS10Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s303_MultiplyandDivideavoidingdivdebyzero1.s156_chargemass,
       (APC_TPS10IdxArr_DataStore()), 10, (APC_TPS10Idx_DataStore()));
    rtb_motohawk_prelookup_g = (APC_TPS10Idx_DataStore());
  }

  /* S-Function Block: <S293>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_Torque = TableInterpolation1D_real_T(rtb_motohawk_prelookup_g, (real_T *)
      ((IndLoadTbl_DataStore())), 10);
    (IndLoad_DataStore()) = rtb_Torque;
  }

  /* S-Function Block: <S296>/motohawk_delta_time */
  rtb_Switch_e = 0.005;

  /* UnitDelay: '<S296>/Unit Delay2' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s296_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S296>/Relational Operator4' incorporates:
   *  UnitDelay: '<S296>/Unit Delay2'
   */
  BaseEngineController_A02_B.s296_RelationalOperator4 =
    ((BaseEngineController_A02_DWork.s296_UnitDelay2_DSTATE < rtb_Torque));

  /* Outputs for Enabled SubSystem: '<S296>/IncreasingFilter' incorporates:
   *  EnablePort: '<S302>/Enable'
   */
  if (BaseEngineController_A02_B.s296_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration1' */
    BaseEngineController_A02_B.s296_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S296>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S296>/DecreasingFilter' incorporates:
   *  EnablePort: '<S300>/Enable'
   */
  /* RelationalOperator: '<S296>/Relational Operator3' */
  if (rtb_Product1_e > rtb_Torque) {
    /* S-Function (motohawk_sfun_calibration): '<S300>/motohawk_calibration2' */
    BaseEngineController_A02_B.s296_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S296>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S296>/DecreasingFilter' */

  /* Product: '<S296>/Product' incorporates:
   *  MinMax: '<S296>/MinMax'
   */
  rtb_Switch_e /= (rtb_Switch_e >= BaseEngineController_A02_B.s296_Merge) ||
    rtIsNaN(BaseEngineController_A02_B.s296_Merge) ? rtb_Switch_e :
    BaseEngineController_A02_B.s296_Merge;

  /* Sum: '<S301>/Sum1' incorporates:
   *  Constant: '<S301>/Constant'
   *  Product: '<S301>/Product'
   *  Product: '<S301>/Product1'
   *  Sum: '<S301>/Sum'
   *  UnitDelay: '<S301>/Unit Delay'
   */
  BaseEngineController_A02_B.s301_Sum1 = (1.0 - rtb_Switch_e) *
    BaseEngineController_A02_DWork.s301_UnitDelay_DSTATE + rtb_Torque *
    rtb_Switch_e;

  /* Sum: '<S292>/Sum' */
  rtb_Switch_e = rtb_Torque - BaseEngineController_A02_B.s301_Sum1;

  /* Abs: '<S292>/Abs' */
  rtb_Switch_e = fabs(rtb_Switch_e);

  /* Logic: '<S292>/Logical Operator' incorporates:
   *  RelationalOperator: '<S292>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S292>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_A02_B.s292_LogicalOperator = ((rtb_LogicalOperator1_a &&
    rtb_Switch_dz && (rtb_Switch_e <= (SSLoadTol_DataStore()))));

  /* S-Function Block: <S356>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom09In_DataStore()) = rtb_Torque;
    (IndLoadNom09Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom09IdxArr_DataStore()), 9, (IndLoadNom09Idx_DataStore()));
    BaseEngineController_A02_B.s356_motohawk_prelookup1 =
      (IndLoadNom09Idx_DataStore());
  }

  /* S-Function Block: <S356>/motohawk_prelookup4 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom17In_DataStore()) = rtb_Torque;
    (IndLoadNom17Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom17IdxArr_DataStore()), 17, (IndLoadNom17Idx_DataStore()));
    BaseEngineController_A02_B.s356_motohawk_prelookup4 =
      (IndLoadNom17Idx_DataStore());
  }

  /* Fcn: '<S304>/Torque to Power' */
  BaseEngineController_A02_B.s304_TorquetoPower = rtb_Torque *
    BaseEngineController_A02_B.s520_Sum1 * 3.1415926535897931 / 30000.0;

  /* S-Function Block: <S355>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndPower05In_DataStore()) = BaseEngineController_A02_B.s304_TorquetoPower;
    (IndPower05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s304_TorquetoPower,
       (IndPower05IdxArr_DataStore()), 5, (IndPower05Idx_DataStore()));
    rtb_motohawk_prelookup_d = (IndPower05Idx_DataStore());
  }

  /* Sum: '<S294>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration3'
   */
  rtb_Switch_e = (SteadyStateECT_DataStore()) -
    BaseEngineController_A02_B.s618_Merge;

  /* Saturate: '<S294>/Saturation1' */
  rtb_Product1_e = rtb_Switch_e >= 0.0 ? rtb_Switch_e : 0.0;

  /* Product: '<S294>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration4'
   */
  rtb_Merge_d = BaseEngineController_A02_B.s304_TorquetoPower /
    (MaxIndEngPwr_DataStore());

  /* S-Function Block: <S294>/motohawk_delta_time1 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s294_motohawk_delta_time1_DWORK1, NULL);
    rtb_motohawk_delta_time1 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S294>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_delta_time): '<S294>/motohawk_delta_time1'
   */
  rtb_Product1_e = rtb_Product1_e * rtb_Merge_d * rtb_motohawk_delta_time1 /
    (WarmUpTimeConst_DataStore());

  /* RelationalOperator: '<S310>/RelOp' incorporates:
   *  Constant: '<S310>/Constant'
   */
  rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s304_TorquetoPower == 0.0);

  /* Outputs for Enabled SubSystem: '<S294>/Integrate Offset To ECT' incorporates:
   *  EnablePort: '<S311>/Enable'
   */
  /* RelationalOperator: '<S294>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration3'
   *  UnitDelay: '<S294>/Unit Delay'
   */
  if (BaseEngineController_A02_DWork.s294_UnitDelay_DSTATE <
      (SteadyStateECT_DataStore())) {
    /* S-Function Block: <S313>/motohawk_delta_time1 */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s313_motohawk_delta_time1_DWORK1, NULL);
      rtb_motohawk_delta_time1_h = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S313>/Switch1' incorporates:
     *  Constant: '<S311>/Constant1'
     *  DataTypeConversion: '<S313>/Data Type Conversion'
     *  UnitDelay: '<S313>/Unit Delay'
     */
    if (rtb_LogicalOperator1_a >= 1) {
      BaseEngineController_A02_B.s313_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_B.s313_Switch1 =
        BaseEngineController_A02_DWork.s313_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S313>/Switch1' */

    /* MinMax: '<S314>/MinMax' incorporates:
     *  Constant: '<S311>/Constant'
     *  Product: '<S313>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S313>/motohawk_delta_time1'
     *  Sum: '<S313>/Sum'
     */
    rtb_Sum2_d0 = rtb_Product1_e * rtb_motohawk_delta_time1_h +
      BaseEngineController_A02_B.s313_Switch1;
    y = rtb_Sum2_d0 >= 0.0 ? rtb_Sum2_d0 : 0.0;

    /* MinMax: '<S314>/MinMax1' incorporates:
     *  Constant: '<S311>/Constant'
     *  Constant: '<S311>/Constant2'
     *  MinMax: '<S314>/MinMax'
     */
    minV = (y <= rtInf) || rtIsNaN(rtInf) ? y : rtInf;

    /* Update for UnitDelay: '<S313>/Unit Delay' incorporates:
     *  MinMax: '<S314>/MinMax1'
     */
    BaseEngineController_A02_DWork.s313_UnitDelay_DSTATE = minV;
  }

  /* End of RelationalOperator: '<S294>/Relational Operator' */
  /* End of Outputs for SubSystem: '<S294>/Integrate Offset To ECT' */

  /* Sum: '<S294>/Sum1' */
  rtb_Switch_e = BaseEngineController_A02_B.s618_Merge +
    BaseEngineController_A02_B.s313_Switch1;

  /* MinMax: '<S312>/MinMax' */
  rtb_Switch_e = (rtb_Switch_e >= BaseEngineController_A02_B.s618_Merge) ||
    rtIsNaN(BaseEngineController_A02_B.s618_Merge) ? rtb_Switch_e :
    BaseEngineController_A02_B.s618_Merge;

  /* MinMax: '<S312>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration3'
   */
  BaseEngineController_A02_B.s312_MinMax1 = (rtb_Switch_e <=
    (SteadyStateECT_DataStore())) || rtIsNaN((SteadyStateECT_DataStore())) ?
    rtb_Switch_e : (SteadyStateECT_DataStore());

  /* S-Function Block: <S354>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (NECCT09In_DataStore()) = BaseEngineController_A02_B.s312_MinMax1;
    (NECCT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s312_MinMax1, (NECCT09IdxArr_DataStore()), 9,
       (NECCT09Idx_DataStore()));
    rtb_motohawk_prelookup_em = (NECCT09Idx_DataStore());
  }

  /* S-Function Block: <S353>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) = BaseEngineController_A02_B.s282_Saturation1;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s282_Saturation1, (MAFPort05IdxArr_DataStore()),
       5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_b = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S328>/RelOp' incorporates:
   *  Constant: '<S328>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S278>/motohawk_data_read'
   */
  rtb_RelOp_g = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S278>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S321>/Enable'
   */
  if (rtb_RelOp_g) {
    if (!BaseEngineController_A02_DWork.s278_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S321>/Unit Delay' */
      BaseEngineController_A02_DWork.s321_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s278_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S321>/Sum' incorporates:
     *  Constant: '<S321>/Constant'
     *  UnitDelay: '<S321>/Unit Delay'
     */
    rtb_Add_a = (int8_T)(BaseEngineController_A02_DWork.s321_UnitDelay_DSTATE +
                         1);

    /* Sum: '<S321>/Add' incorporates:
     *  Constant: '<S321>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S321>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S321>/Relational Operator' */
    rtb_LogicalOperator1_a = (rtb_Add_a <= rtb_Sum_l3);

    /* Switch: '<S321>/Switch' */
    if (rtb_LogicalOperator1_a) {
      rtb_Sum_l3 = rtb_Add_a;
    }

    /* End of Switch: '<S321>/Switch' */

    /* Outputs for Enabled SubSystem: '<S321>/Collect Average' incorporates:
     *  EnablePort: '<S338>/Enable'
     */
    /* Logic: '<S321>/Logical Operator' incorporates:
     *  Constant: '<S321>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S321>/Relational Operator1'
     */
    if (rtb_LogicalOperator1_a && (rtb_Add_a > 2)) {
      if (!BaseEngineController_A02_DWork.s321_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S338>/Unit Delay1' */
        BaseEngineController_A02_DWork.s338_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s321_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S338>/Sum1' incorporates:
       *  UnitDelay: '<S338>/Unit Delay1'
       */
      rtb_Product1_e = BaseEngineController_A02_B.s612_Merge +
        BaseEngineController_A02_DWork.s338_UnitDelay1_DSTATE;

      /* Product: '<S338>/Product' incorporates:
       *  DataTypeConversion: '<S338>/Data Type Conversion'
       *  Sum: '<S321>/Add1'
       */
      BaseEngineController_A02_B.s338_Product = 1.0 / (real_T)(int8_T)
        (rtb_Sum_l3 - 2) * rtb_Product1_e;

      /* Update for UnitDelay: '<S338>/Unit Delay1' */
      BaseEngineController_A02_DWork.s338_UnitDelay1_DSTATE = rtb_Product1_e;
    } else {
      if (BaseEngineController_A02_DWork.s321_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s321_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S321>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S321>/Collect Average' */

    /* Update for UnitDelay: '<S321>/Unit Delay' */
    BaseEngineController_A02_DWork.s321_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_A02_DWork.s278_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S321>/Collect Average' */
      BaseEngineController_A02_DWork.s321_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S321>/Collect Average' */
      BaseEngineController_A02_DWork.s278_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S278>/Capture ECT At Startup' */
  /* S-Function Block: <S352>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) = BaseEngineController_A02_B.s338_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s338_Product, (ECT_KeyUp09IdxArr_DataStore()),
       9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_eu = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S341>/Sum2' incorporates:
   *  UnitDelay: '<S341>/Unit Delay'
   */
  rtb_Product1_e = BaseEngineController_A02_B.s520_Sum1 -
    BaseEngineController_A02_DWork.s341_UnitDelay_DSTATE;

  /* S-Function Block: <S341>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s341_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S341>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S341>/motohawk_delta_time'
   */
  rtb_Product1_e /= rtb_motohawk_delta_time_f;

  /* S-Function Block: <S342>/motohawk_delta_time */
  rtb_Switch_e = 0.005;

  /* Product: '<S342>/Product' incorporates:
   *  MinMax: '<S342>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S342>/motohawk_calibration'
   */
  rtb_Switch_e /= (rtb_Switch_e >= (EngineAccelFiltConst_DataStore())) ||
    rtIsNaN((EngineAccelFiltConst_DataStore())) ? rtb_Switch_e :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S343>/Sum1' incorporates:
   *  Constant: '<S343>/Constant'
   *  Product: '<S343>/Product'
   *  Product: '<S343>/Product1'
   *  Sum: '<S343>/Sum'
   *  UnitDelay: '<S343>/Unit Delay'
   */
  BaseEngineController_A02_B.s343_Sum1 = (1.0 - rtb_Switch_e) *
    BaseEngineController_A02_DWork.s343_UnitDelay_DSTATE + rtb_Product1_e *
    rtb_Switch_e;

  /* S-Function Block: <S279>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_A02_B.s343_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s343_Sum1, (RPMAccel17IdxArr_DataStore()), 17,
       (RPMAccel17Idx_DataStore()));
    BaseEngineController_A02_B.s279_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* RelationalOperator: '<S122>/RelOp' incorporates:
   *  Constant: '<S122>/Constant'
   */
  rtb_RelOp_av = (BaseEngineController_A02_B.s344_State == 3);

  /* S-Function Block: <S547>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s547_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_m = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S547>/Unit Delay' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s547_UnitDelay_DSTATE;

  /* Logic: '<S522>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(23) || IsFaultActive(24));

  /* Logic: '<S522>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(23) || IsFaultSuspected(24));

  /* S-Function Block: <S362>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get(&rtb_DataTypeConversion6, NULL);
  }

  /* Gain: '<S362>/Gain' */
  BaseEngineController_A02_B.s362_Gain = 0.00999999999839929 * (real_T)
    rtb_DataTypeConversion6;

  /* Product: '<S522>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S522>/motohawk_calibration4'
   */
  rtb_Merge_d = BaseEngineController_A02_B.s362_Gain * (FuelSensGain_DataStore());

  /* Sum: '<S522>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S522>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s522_Sum1 = rtb_Merge_d + (FuelSensOfst_DataStore());

  /* Saturate: '<S522>/Saturation' */
  rtb_Saturation_j = BaseEngineController_A02_B.s522_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_A02_B.s522_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s522_Sum1;

  /* UnitDelay: '<S522>/Unit Delay1' */
  rtb_UnitDelay1_p = BaseEngineController_A02_DWork.s522_UnitDelay1_DSTATE;

  /* If: '<S522>/If' incorporates:
   *  Logic: '<S522>/Logical Operator5'
   *  Logic: '<S522>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S522>/If Action Subsystem' incorporates:
     *  ActionPort: '<S539>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_p, &rtb_Merge_k1);

    /* End of Outputs for SubSystem: '<S522>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S522>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S540>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_k1);

    /* End of Outputs for SubSystem: '<S522>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S522>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S541>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_Saturation_j, &rtb_Merge_k1);

    /* End of Outputs for SubSystem: '<S522>/If Action Subsystem2' */
  }

  /* End of If: '<S522>/If' */

  /* Product: '<S547>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S547>/motohawk_delta_time'
   *  Sum: '<S547>/Sum3'
   */
  rtb_Switch_e = 1.0 / rtb_motohawk_delta_time_m * (rtb_Merge_k1 -
    rtb_Product1_e);

  /* MinMax: '<S548>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration1'
   */
  rtb_Switch_e = (rtb_Switch_e >= (Fall_Rate_DataStore())) || rtIsNaN
    ((Fall_Rate_DataStore())) ? rtb_Switch_e : (Fall_Rate_DataStore());

  /* Sum: '<S547>/Sum2' incorporates:
   *  MinMax: '<S548>/MinMax1'
   *  Product: '<S547>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S547>/motohawk_delta_time'
   */
  rtb_Sum2_n = ((rtb_Switch_e <= (Rise_Rate_DataStore())) || rtIsNaN
                ((Rise_Rate_DataStore())) ? rtb_Switch_e : (Rise_Rate_DataStore()))
    * rtb_motohawk_delta_time_m + rtb_Product1_e;

  /* S-Function Block: <S543>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s543_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S543>/Product' incorporates:
   *  MinMax: '<S543>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration'
   */
  rtb_Switch_e /= (rtb_Switch_e >= (FuelSensFilterConst_DataStore())) || rtIsNaN
    ((FuelSensFilterConst_DataStore())) ? rtb_Switch_e :
    (FuelSensFilterConst_DataStore());

  /* Sum: '<S546>/Sum1' incorporates:
   *  Constant: '<S546>/Constant'
   *  Product: '<S546>/Product'
   *  Product: '<S546>/Product1'
   *  Sum: '<S546>/Sum'
   *  UnitDelay: '<S546>/Unit Delay'
   */
  rtb_Sum1_da = (1.0 - rtb_Switch_e) *
    BaseEngineController_A02_DWork.s546_UnitDelay_DSTATE + rtb_Merge_k1 *
    rtb_Switch_e;

  /* UnitDelay: '<S544>/Unit Delay' */
  rtb_UnitDelay_li = BaseEngineController_A02_DWork.s544_UnitDelay_DSTATE;

  /* UnitDelay: '<S544>/Unit Delay1' */
  rtb_UnitDelay1_e = BaseEngineController_A02_DWork.s544_UnitDelay1_DSTATE;

  /* UnitDelay: '<S544>/Unit Delay2' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s544_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S538>/Multiport Switch' incorporates:
   *  Product: '<S544>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S538>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 1:
    rtb_Product1_e = rtb_Sum2_n;
    break;

   case 2:
    rtb_Product1_e = rtb_Sum1_da;
    break;

   default:
    /* Product: '<S544>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration3'
     */
    rtb_Product1_e *= (Gain3_DataStore());

    /* Sum: '<S544>/Sum2' incorporates:
     *  Product: '<S544>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration2'
     */
    rtb_Product1_e += (Gain2_DataStore()) * rtb_UnitDelay1_e;

    /* Sum: '<S544>/Sum' incorporates:
     *  Product: '<S544>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration1'
     *  Sum: '<S544>/Sum1'
     */
    rtb_Product1_e = ((Gain1_DataStore()) * rtb_UnitDelay_li + rtb_Product1_e) +
      rtb_Merge_k1;
    rtb_Product1_e *= (Gain4_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S538>/Multiport Switch' */
  /* If: '<S542>/If' incorporates:
   *  Inport: '<S549>/In1'
   *  Inport: '<S550>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S542>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S542>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S542>/NewValue' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    BaseEngineController_A02_B.s542_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S542>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S542>/OldValue' incorporates:
     *  ActionPort: '<S550>/Action Port'
     */
    BaseEngineController_A02_B.s542_Merge = rtb_Product1_e;

    /* End of Outputs for SubSystem: '<S542>/OldValue' */
  }

  /* End of If: '<S542>/If' */

  /* Outputs for Enabled SubSystem: '<S7>/Run' incorporates:
   *  EnablePort: '<S121>/Enable'
   */
  if (rtb_RelOp_av) {
    if (!BaseEngineController_A02_DWork.s7_Run_MODE) {
      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S121>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S121>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S186>/IdleStateMachine' */
        BaseEngineController_A02_IdleStateMachine_Init();

        /* S-Function Block: <S185>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s185_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S189>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s189_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for Atomic SubSystem: '<S134>/AiflowOffset' */

        /* S-Function Block: <S192>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s192_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* End of InitializeConditions for SubSystem: '<S134>/AiflowOffset' */

        /* S-Function Block: <S217>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s217_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S121>/MaxGovernor' */

        /* S-Function Block: <S167>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s167_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S179>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s179_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S121>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S242>/Initial Condition is True' */
        BaseEngineController_A02_DWork.s242_InitialConditionisTrue_DSTATE = TRUE;
      }

      /* InitializeConditions for Atomic SubSystem: '<S121>/O2 Control' */

      /* InitializeConditions for Atomic SubSystem: '<S135>/O2 PID Controller' */
      /* InitializeConditions for UnitDelay: '<S234>/Unit Delay' */
      BaseEngineController_A02_DWork.s234_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S231>/Unit Delay' */
      BaseEngineController_A02_DWork.s231_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S230>/Unit Delay' */
      BaseEngineController_A02_DWork.s230_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S231>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s231_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S227>/Unit Delay1' */
      BaseEngineController_A02_DWork.s227_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S235>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s235_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S227>/Unit Delay' */
      BaseEngineController_A02_DWork.s227_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S237>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s237_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S227>/Unit Delay2' */
      BaseEngineController_A02_DWork.s227_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S236>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s236_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S135>/O2 PID Controller' */
      /* End of InitializeConditions for SubSystem: '<S121>/O2 Control' */

      /* Level2 S-Function Block: '<S121>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_4024p0001 */
      BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_A02_DWork.s7_Run_MODE = TRUE;
    }

    /* Outputs for Enabled SubSystem: '<S129>/ShutDownTasksComplete Reset' incorporates:
     *  EnablePort: '<S138>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration2' */
    if ((AirControlSource_DataStore())) {
      /* S-Function (motohawk_sfun_data_write): '<S138>/motohawk_data_write' incorporates:
       *  Constant: '<S138>/Constant'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration2' */
    /* End of Outputs for SubSystem: '<S129>/ShutDownTasksComplete Reset' */
    /* Product: '<S139>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S139>/motohawk_data_read'
     */
    BaseEngineController_A02_B.s139_Product =
      BaseEngineController_A02_B.s505_Merge / MAFPortModel_DataStore();

    /* Sum: '<S139>/Sum' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S139>/motohawk_data_read1'
     */
    BaseEngineController_A02_B.s139_Sum =
      BaseEngineController_A02_B.s139_Product - VETable_DataStore();

    /* Outputs for Enabled SubSystem: '<S139>/Adapt Table' incorporates:
     *  EnablePort: '<S140>/Enable'
     */
    /* Logic: '<S139>/Logical Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S139>/motohawk_calibration'
     */
    if (((VE_Adapt_Enable_DataStore()) != 0.0) &&
        BaseEngineController_A02_B.s292_LogicalOperator) {
      /* S-Function Block: <S140>/motohawk_adapt_table */
      /* Adapt 2-D Table */
      {
        uint32_T _row = ((PortPressRatio17Idx_DataStore())) >> 9;
        uint32_T _row_frac = (((PortPressRatio17Idx_DataStore())) & 0x01FF) >> 7;
        uint32_T _col = ((RPM17Idx_DataStore())) >> 9;
        uint32_T _col_frac = (((RPM17Idx_DataStore())) & 0x01FF) >> 7;
        real_T _new;
        if (_row >= 16) {
          _row = 16;
          _row_frac = 0;
        }

        if (_col >= 16) {
          _col = 16;
          _col_frac = 0;
        }

        if (_row_frac == 3) {
          _row++;
          _row_frac = 0;
        }

        if (_row_frac == 0) {
          if (_col_frac == 0) {
            _new = (VEMap_DataStore())[_row][_col] +
              BaseEngineController_A02_B.s139_Sum;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (VEMap_DataStore())[_row][_col+1] +
              BaseEngineController_A02_B.s139_Sum;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row][_col+1] = _new;
          } else {
            real_T _half = (BaseEngineController_A02_B.s139_Sum) / 2;
            _new = (VEMap_DataStore())[_row][_col] + _half;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row][_col] = _new;
            _new = (VEMap_DataStore())[_row][_col+1] + _half;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row][_col+1] = _new;
          }
        } else {
          if (_col_frac == 3) {
            _col++;
            _col_frac = 0;
          }

          if (_col_frac == 0) {
            real_T _half = (BaseEngineController_A02_B.s139_Sum) / 2;
            _new = (VEMap_DataStore())[_row][_col] + _half;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row][_col] = _new;
            _new = (VEMap_DataStore())[_row+1][_col] + _half;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row+1][_col] = _new;
          } else {
            real_T _quarter = (BaseEngineController_A02_B.s139_Sum) / 4;
            _new = (VEMap_DataStore())[_row][_col] + _quarter;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row][_col] = _new;
            _new = (VEMap_DataStore())[_row+1][_col] + _quarter;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row+1][_col] = _new;
            _new = (VEMap_DataStore())[_row][_col+1] + _quarter;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row][_col+1] = _new;
            _new = (VEMap_DataStore())[_row+1][_col+1] + _quarter;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row+1][_col+1] = _new;
          }
        }
      }
    }

    /* End of Logic: '<S139>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S139>/Adapt Table' */

    /* Outputs for Atomic SubSystem: '<S121>/Base Equiv Ratio' */

    /* S-Function Block: <S130>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_WarmUpMult = TableInterpolation2D_real_T(rtb_motohawk_prelookup_d,
        rtb_motohawk_prelookup_em, (real_T *) ((WarmUpEqRatioMultMap_DataStore())),
        5, 9);
      (WarmUpEqRatioMult_DataStore()) = rtb_WarmUpMult;
    }

    /* S-Function Block: <S130>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s356_motohawk_prelookup4,
         BaseEngineController_A02_B.s317_Indexes, (real_T *)
         ((DesEquivRatioMap_DataStore())), 17, 17);
      (DesEquivRatio_DataStore()) = rtb_motohawk_interpolation_2d3;
    }

    /* If: '<S141>/If' incorporates:
     *  Inport: '<S142>/In1'
     *  Inport: '<S143>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S141>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S141>/override_enable'
     */
    if ((EquivRatio_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S141>/NewValue' incorporates:
       *  ActionPort: '<S142>/Action Port'
       */
      rtb_Product1_e = (EquivRatio_new_DataStore());

      /* End of Outputs for SubSystem: '<S141>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S141>/OldValue' incorporates:
       *  ActionPort: '<S143>/Action Port'
       */
      rtb_Product1_e = rtb_motohawk_interpolation_2d3;

      /* End of Outputs for SubSystem: '<S141>/OldValue' */
    }

    /* End of If: '<S141>/If' */

    /* Product: '<S130>/Product1' */
    BaseEngineController_A02_B.s130_DesEquivRatio = rtb_Product1_e *
      rtb_WarmUpMult;

    /* End of Outputs for SubSystem: '<S121>/Base Equiv Ratio' */

    /* S-Function (motohawk_sfun_trigger): '<S121>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_4024p0001 */
    if (BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 = 1;
    }

    /* Sum: '<S129>/Sum2' */
    rtb_Product1_e =
      BaseEngineController_A02_B.s192_DontallowsetpointtoeverdropbelowtheTargetRPM
      + BaseEngineController_A02_B.s134_MinGovAirPID;

    /* MultiPortSwitch: '<S129>/Multiport Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration2'
     */
    if ((AirControlSource_DataStore()) == FALSE) {
      /* Switch: '<S129>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration1'
       */
      if ((ThrottleSource_DataStore())) {
        /* S-Function Block: <S129>/motohawk_interpolation_1d2 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d2_g = TableInterpolation1D_real_T
            (BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_g;
        }

        /* Switch: '<S129>/Switch2' */
        if (BaseEngineController_A02_B.s166_MultiportSwitch) {
          rtb_Product1_e = BaseEngineController_A02_B.s169_Switch;
        } else {
          /* Switch: '<S129>/Switch4' incorporates:
           *  Logic: '<S129>/Logical Operator'
           *  Sum: '<S129>/Sum1'
           */
          if (!BaseEngineController_A02_B.s202_RelOp) {
            rtb_Product1_e = BaseEngineController_A02_B.s336_Sum2 +
              BaseEngineController_A02_B.s192_DontallowsetpointtoeverdropbelowtheTargetRPM;
          }

          /* End of Switch: '<S129>/Switch4' */
        }

        /* End of Switch: '<S129>/Switch2' */

        /* MinMax: '<S137>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration3'
         */
        y = (rtb_Product1_e >= (MinETCSetpoint_DataStore())) || rtIsNaN
          ((MinETCSetpoint_DataStore())) ? rtb_Product1_e :
          (MinETCSetpoint_DataStore());

        /* MinMax: '<S137>/MinMax1' incorporates:
         *  MinMax: '<S137>/MinMax'
         */
        rtb_Merge_c5 = (y <= rtb_motohawk_interpolation_1d2_g) || rtIsNaN
          (rtb_motohawk_interpolation_1d2_g) ? y :
          rtb_motohawk_interpolation_1d2_g;
      }

      /* End of Switch: '<S129>/Switch1' */
      BaseEngineController_A02_B.s129_MultiportSwitch = rtb_Merge_c5;
    } else {
      BaseEngineController_A02_B.s129_MultiportSwitch = rtb_Product1_e;
    }

    /* End of MultiPortSwitch: '<S129>/Multiport Switch' */

    /* S-Function Block: <S131>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_o = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s315_motohawk_prelookup, (real_T *)
         ((ECTEGRInterpolationTbl_DataStore())), 5);
      (ECTEGRInterpolation_DataStore()) = rtb_motohawk_interpolation_1d_o;
    }

    /* S-Function Block: <S131>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioTargetDelta_a = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s356_motohawk_prelookup1,
         BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
         ((EGR_MultMap_DataStore())), 9, 9);
      (EGR_Mult_DataStore()) = rtb_RichEquivRatioTargetDelta_a;
    }

    /* Product: '<S131>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S131>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S131>/motohawk_interpolation_2d3'
     */
    BaseEngineController_A02_B.s131_Product = rtb_motohawk_interpolation_1d_o *
      rtb_RichEquivRatioTargetDelta_a;

    /* Outputs for Atomic SubSystem: '<S121>/O2 Control' */

    /* S-Function (motohawk_sfun_fault_action): '<S135>/motohawk_fault_action'
     *
     * Regarding '<S135>/motohawk_fault_action':
       Get Fault Action Status: DisableO2Ctrl
     */
    {
      extern boolean_T GetFaultActionStatus(uint32_T action);
      rtb_motohawk_fault_action_g = GetFaultActionStatus(2);
    }

    /* S-Function (motohawk_sfun_data_write): '<S135>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DisableO2FaultAction */
    {
      DisableO2FaultAction_DataStore() = rtb_motohawk_fault_action_g;
    }

    /* Inport: '<S135>/Desired_Equiv' */
    rtb_DesiredLambda_idx = BaseEngineController_A02_B.s130_DesEquivRatio;
    rtb_DesiredLambda_idx_0 = rtb_WarmUpMult;

    /* Logic: '<S220>/Logical Operator' incorporates:
     *  Constant: '<S220>/Constant'
     *  RelationalOperator: '<S220>/Relational Operator'
     *  RelationalOperator: '<S220>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration1'
     *  Sum: '<S220>/Sum'
     *  Sum: '<S220>/Sum1'
     */
    BaseEngineController_A02_B.s220_LogicalOperator = (((rtb_DesiredLambda_idx <=
      (EquivRatioDelta_DataStore()) + 1.0) && (rtb_DesiredLambda_idx >= 1.0 -
      (EquivRatioDelta_DataStore()))));

    /* Logic: '<S220>/Logical Operator3' */
    BaseEngineController_A02_B.s220_LogicalOperator3 =
      !rtb_motohawk_fault_action_g;

    /* S-Function Block: <S220>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_ox = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_eu, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_ox;
    }

    /* RelationalOperator: '<S220>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S220>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S352>/motohawk_prelookup'
     */
    BaseEngineController_A02_B.s220_RelationalOperator5 =
      ((BaseEngineController_A02_B.s349_Switch >=
        rtb_motohawk_interpolation_1d_ox));

    /* Logic: '<S220>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration2'
     */
    BaseEngineController_A02_B.s220_LogicalOperator2 =
      ((BaseEngineController_A02_B.s292_LogicalOperator &&
        BaseEngineController_A02_B.s220_LogicalOperator &&
        BaseEngineController_A02_B.s220_LogicalOperator3 &&
        (O2ControlEnable_DataStore()) &&
        BaseEngineController_A02_B.s220_RelationalOperator5));

    /* Logic: '<S135>/Logical Operator' */
    rtb_LogicalOperator1_a = !BaseEngineController_A02_B.s220_LogicalOperator2;

    /* S-Function Block: <S225>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s356_motohawk_prelookup1,
         BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S225>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s356_motohawk_prelookup1,
         BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S224>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_j = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_em, (real_T *) ((O2NECCTErrGainMultTbl_DataStore
           ())), 9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_j;
    }

    /* S-Function Block: <S224>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_b, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_l;
    }

    /* Product: '<S224>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S224>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S224>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S353>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S354>/motohawk_prelookup'
     */
    rtb_Product1_e = rtb_motohawk_interpolation_1d_j *
      rtb_motohawk_interpolation_1d1_l;

    /* Logic: '<S135>/Logical Operator1' */
    rtb_Switch_dz = !rtb_RelOp_av;

    /* Outputs for Atomic SubSystem: '<S135>/O2 PID Controller' */
    /* RelationalOperator: '<S227>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S225>/motohawk_interpolation_2d2'
     *  Sum: '<S227>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_A02_B.s327_Sum1 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S227>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S225>/motohawk_interpolation_2d3'
     *  Sum: '<S227>/Sum4'
     */
    rtb_LogicalOperator2_n2 = (BaseEngineController_A02_B.s327_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S234>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_n2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic[0] =
        BaseEngineController_A02_ConstP.pooled645[rowidx];
      rtb_CombinatorialLogic[1] =
        BaseEngineController_A02_ConstP.pooled645[rowidx + 4];
    }

    /* Switch: '<S234>/Switch1' incorporates:
     *  UnitDelay: '<S234>/Unit Delay'
     */
    if (rtb_CombinatorialLogic[1]) {
      rtb_Switch1_p0 = rtb_CombinatorialLogic[0];
    } else {
      rtb_Switch1_p0 = BaseEngineController_A02_DWork.s234_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S234>/Switch1' */

    /* Switch: '<S222>/Switch' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s222_Switch =
        BaseEngineController_A02_B.s327_Sum1;
    } else {
      /* Switch: '<S227>/Switch2' incorporates:
       *  Logic: '<S227>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S225>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S225>/motohawk_interpolation_2d1'
       *  Sum: '<S227>/Sum1'
       *  Sum: '<S227>/Sum2'
       */
      if (!rtb_Switch1_p0) {
        /* S-Function Block: <S225>/motohawk_interpolation_2d */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_RichEquivRatioTargetDelta_nq = TableInterpolation2D_real_T
            (BaseEngineController_A02_B.s356_motohawk_prelookup1,
             BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
             ((RichTargetDeltaMap_DataStore())), 9, 9);
          (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_nq;
        }

        BaseEngineController_A02_B.s222_Switch =
          rtb_RichEquivRatioTargetDelta_nq + rtb_DesiredLambda_idx;
      } else {
        /* S-Function Block: <S225>/motohawk_interpolation_2d1 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
            (BaseEngineController_A02_B.s356_motohawk_prelookup1,
             BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
             ((LeanTargetDeltaMap_DataStore())), 9, 9);
          (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
        }

        BaseEngineController_A02_B.s222_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S227>/Switch2' */
    }

    /* End of Switch: '<S222>/Switch' */

    /* Sum: '<S229>/Sum2' */
    BaseEngineController_A02_B.s229_Sum2 =
      BaseEngineController_A02_B.s222_Switch -
      BaseEngineController_A02_B.s327_Sum1;

    /* Product: '<S229>/Product5' */
    rtb_Sum1_gje = BaseEngineController_A02_B.s229_Sum2 * rtb_Product1_e;

    /* Product: '<S229>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration5'
     */
    BaseEngineController_A02_B.s229_Product2 = rtb_Sum1_gje *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S231>/Switch1' incorporates:
     *  Constant: '<S226>/Constant'
     *  UnitDelay: '<S231>/Unit Delay'
     */
    if (rtb_Switch_dz) {
      BaseEngineController_A02_B.s231_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_B.s231_Switch1 =
        BaseEngineController_A02_DWork.s231_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S231>/Switch1' */

    /* Product: '<S229>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration7'
     */
    rtb_Merge_c5 = rtb_Sum1_gje * (O2CtrlDGain_DataStore());

    /* Sum: '<S230>/Sum2' incorporates:
     *  UnitDelay: '<S230>/Unit Delay'
     */
    rtb_Product1_e = rtb_Merge_c5 -
      BaseEngineController_A02_DWork.s230_UnitDelay_DSTATE;

    /* S-Function Block: <S230>/motohawk_delta_time */
    rtb_motohawk_delta_time_nl = 0.005;

    /* Product: '<S230>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S230>/motohawk_delta_time'
     */
    BaseEngineController_A02_B.s230_Product = rtb_Product1_e /
      rtb_motohawk_delta_time_nl;

    /* MinMax: '<S228>/MinMax' incorporates:
     *  Constant: '<S226>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration11'
     *  Sum: '<S226>/Sum'
     *  Sum: '<S229>/Sum1'
     */
    rtb_Sum2_d0 = ((BaseEngineController_A02_B.s229_Product2 +
                    BaseEngineController_A02_B.s230_Product) +
                   BaseEngineController_A02_B.s231_Switch1) + 1.0;
    y = (rtb_Sum2_d0 >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? rtb_Sum2_d0 :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S228>/MinMax1' incorporates:
     *  MinMax: '<S228>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration10'
     */
    minV = (y <= (O2CtrlPIDOutUpperLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutUpperLimit_DataStore())) ? y :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S229>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration6'
     */
    rtb_Product1_e = rtb_Sum1_gje * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S231>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s231_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fo = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S233>/MinMax' incorporates:
     *  Product: '<S231>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S231>/motohawk_delta_time'
     *  Sum: '<S231>/Sum'
     */
    rtb_Sum2_d0 = rtb_Product1_e * rtb_motohawk_delta_time_fo +
      BaseEngineController_A02_B.s231_Switch1;
    y = (rtb_Sum2_d0 >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? rtb_Sum2_d0 :
      (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S233>/MinMax1' incorporates:
     *  MinMax: '<S233>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration9'
     */
    y = (y <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? y : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S227>/Unit Delay1' */
    rtb_Sum1_gje = BaseEngineController_A02_DWork.s227_UnitDelay1_DSTATE;

    /* Logic: '<S227>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S227>/motohawk_data_read'
     */
    rtb_LogicalOperator10 = (rtb_LogicalOperator2_n2 &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S235>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s235_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_iv = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S227>/Logical Operator4' */
    rtb_RelationalOperator6_k = !rtb_LogicalOperator1_a;

    /* Logic: '<S227>/Logical Operator6' */
    rtb_Switch_dz = !rtb_Switch_dz;

    /* Switch: '<S235>/Switch' incorporates:
     *  Constant: '<S235>/Constant'
     *  Logic: '<S227>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S235>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S235>/motohawk_delta_time'
     *  Sum: '<S235>/Sum'
     */
    if (rtb_LogicalOperator2_n2 && rtb_RelationalOperator6_k && rtb_Switch_dz) {
      rtb_Product1_e = rtb_motohawk_delta_time_iv + O2LeanTimer_DataStore();
    } else {
      rtb_Product1_e = 0.0;
    }

    /* End of Switch: '<S235>/Switch' */

    /* Switch: '<S227>/Switch3' */
    if (rtb_LogicalOperator10) {
      BaseEngineController_A02_B.s227_Switch3 = rtb_Sum1_gje;
    } else {
      BaseEngineController_A02_B.s227_Switch3 = rtb_Product1_e;
    }

    /* End of Switch: '<S227>/Switch3' */
    /* RelationalOperator: '<S227>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration2'
     */
    rtb_LT3 = ((BaseEngineController_A02_B.s227_Switch3 >=
                (O2LeanTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S227>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(41, rtb_LT3);
      UpdateFault(41);
    }

    /* UnitDelay: '<S227>/Unit Delay' */
    rtb_Sum1_gje = BaseEngineController_A02_DWork.s227_UnitDelay_DSTATE;

    /* Logic: '<S227>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S227>/motohawk_data_read'
     */
    rtb_LogicalOperator1_a = (rtb_AboveRich && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S237>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s237_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_m0 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S237>/Switch' incorporates:
     *  Constant: '<S237>/Constant'
     *  Logic: '<S227>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S237>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S237>/motohawk_delta_time'
     *  Sum: '<S237>/Sum'
     */
    if (rtb_AboveRich && rtb_RelationalOperator6_k && rtb_Switch_dz) {
      rtb_Merge_d = rtb_motohawk_delta_time_m0 + O2RichTimer_DataStore();
    } else {
      rtb_Merge_d = 0.0;
    }

    /* End of Switch: '<S237>/Switch' */

    /* Switch: '<S227>/Switch1' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s227_Switch1 = rtb_Sum1_gje;
    } else {
      BaseEngineController_A02_B.s227_Switch1 = rtb_Merge_d;
    }

    /* End of Switch: '<S227>/Switch1' */
    /* RelationalOperator: '<S227>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration1'
     */
    rtb_LT2 = ((BaseEngineController_A02_B.s227_Switch1 >=
                (O2RichTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S227>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(42, rtb_LT2);
      UpdateFault(42);
    }

    /* UnitDelay: '<S227>/Unit Delay2' */
    rtb_Sum1_gje = BaseEngineController_A02_DWork.s227_UnitDelay2_DSTATE;

    /* Logic: '<S227>/Logical Operator2' incorporates:
     *  Logic: '<S227>/Logical Operator1'
     *  Logic: '<S227>/Logical Operator3'
     */
    rtb_LogicalOperator2_n2 = ((!rtb_LogicalOperator2_n2) && (!rtb_AboveRich));

    /* Logic: '<S227>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S227>/motohawk_data_read'
     */
    rtb_LogicalOperator1_a = (rtb_LogicalOperator2_n2 &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S236>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s236_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_me = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S236>/Switch' incorporates:
     *  Constant: '<S236>/Constant'
     *  Logic: '<S227>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S236>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S236>/motohawk_delta_time'
     *  Sum: '<S236>/Sum'
     */
    if (rtb_LogicalOperator2_n2 && rtb_RelationalOperator6_k && rtb_Switch_dz) {
      rtb_Merge_o4 = rtb_motohawk_delta_time_me + O2ActiveTimer_DataStore();
    } else {
      rtb_Merge_o4 = 0.0;
    }

    /* End of Switch: '<S236>/Switch' */

    /* Switch: '<S227>/Switch4' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s227_Switch4 = rtb_Sum1_gje;
    } else {
      BaseEngineController_A02_B.s227_Switch4 = rtb_Merge_o4;
    }

    /* End of Switch: '<S227>/Switch4' */
    /* RelationalOperator: '<S227>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration3'
     */
    rtb_LT4 = ((BaseEngineController_A02_B.s227_Switch4 >=
                (O2ActiveTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S227>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(43, rtb_LT4);
      UpdateFault(43);
    }

    /* Saturate: '<S235>/Saturation' */
    rtb_Saturation_ad = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
      0.0 ? 0.0 : rtb_Product1_e;

    /* S-Function (motohawk_sfun_data_write): '<S235>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer */
    {
      O2LeanTimer_DataStore() = rtb_Saturation_ad;
    }

    /* Saturate: '<S236>/Saturation' */
    rtb_Saturation_bu = rtb_Merge_o4 >= 16000.0 ? 16000.0 : rtb_Merge_o4 <= 0.0 ?
      0.0 : rtb_Merge_o4;

    /* S-Function (motohawk_sfun_data_write): '<S236>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer */
    {
      O2ActiveTimer_DataStore() = rtb_Saturation_bu;
    }

    /* Saturate: '<S237>/Saturation' */
    rtb_Saturation_bh = rtb_Merge_d >= 16000.0 ? 16000.0 : rtb_Merge_d <= 0.0 ?
      0.0 : rtb_Merge_d;

    /* S-Function (motohawk_sfun_data_write): '<S237>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer */
    {
      O2RichTimer_DataStore() = rtb_Saturation_bh;
    }

    /* InitialCondition: '<S222>/Multiply by 1.0 if not yet enabled' incorporates:
     *  MinMax: '<S228>/MinMax1'
     */
    if (BaseEngineController_A02_DWork.s222_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_A02_DWork.s222_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      BaseEngineController_A02_B.s222_Multiplyby10ifnotyetenabled = 1.0;
    } else {
      BaseEngineController_A02_B.s222_Multiplyby10ifnotyetenabled = minV;
    }

    /* End of InitialCondition: '<S222>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S234>/Unit Delay' */
    BaseEngineController_A02_DWork.s234_UnitDelay_DSTATE = rtb_Switch1_p0;

    /* Update for UnitDelay: '<S231>/Unit Delay' incorporates:
     *  MinMax: '<S233>/MinMax1'
     */
    BaseEngineController_A02_DWork.s231_UnitDelay_DSTATE = y;

    /* Update for UnitDelay: '<S230>/Unit Delay' */
    BaseEngineController_A02_DWork.s230_UnitDelay_DSTATE = rtb_Merge_c5;

    /* Update for UnitDelay: '<S227>/Unit Delay1' */
    BaseEngineController_A02_DWork.s227_UnitDelay1_DSTATE =
      BaseEngineController_A02_B.s227_Switch3;

    /* Update for UnitDelay: '<S227>/Unit Delay' */
    BaseEngineController_A02_DWork.s227_UnitDelay_DSTATE =
      BaseEngineController_A02_B.s227_Switch1;

    /* Update for UnitDelay: '<S227>/Unit Delay2' */
    BaseEngineController_A02_DWork.s227_UnitDelay2_DSTATE =
      BaseEngineController_A02_B.s227_Switch4;

    /* End of Outputs for SubSystem: '<S135>/O2 PID Controller' */

    /* S-Function (motohawk_sfun_probe): '<S220>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* S-Function Block: <S135>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITermIn_DataStore()) = BaseEngineController_A02_B.s231_Switch1;
      (O2ITermIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s231_Switch1, (O2ITermIdxArr_DataStore()), 9,
         (O2ITermIdx_DataStore()));
      rtb_ITermIdx = (O2ITermIdx_DataStore());
    }

    /* End of Outputs for SubSystem: '<S121>/O2 Control' */

    /* Outputs for Atomic SubSystem: '<S121>/Fuel System Manager' */

    /* Gain: '<S149>/Gain' */
    rtb_Product1_e = 0.01 * BaseEngineController_A02_B.s542_Merge;

    /* Product: '<S149>/Product1' incorporates:
     *  Constant: '<S149>/ '
     *  S-Function (motohawk_sfun_calibration): '<S149>/motohawk_calibration2'
     *  Sum: '<S149>/Add1'
     */
    rtb_Merge_d = (1.0 - rtb_Product1_e) * (AF_Gasoline_DataStore());

    /* Sum: '<S149>/Add' incorporates:
     *  Product: '<S149>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S149>/motohawk_calibration3'
     */
    BaseEngineController_A02_B.s149_Add = (AF_Ethanol_DataStore()) *
      rtb_Product1_e + rtb_Merge_d;

    /* Product: '<S147>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_A02_B.s147_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_A02_B.s282_Saturation1 * rtb_DesiredLambda_idx /
      BaseEngineController_A02_B.s149_Add;

    /* Product: '<S144>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S144>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S144>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_A02_B.s144_PerCylinderMassFlowRate =
      BaseEngineController_A02_B.s147_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S144>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    BaseEngineController_A02_B.s144_ApplyMultipliersforO2KnockControlandEnrichment1
      = BaseEngineController_A02_B.s144_PerCylinderMassFlowRate *
      BaseEngineController_A02_B.s222_Multiplyby10ifnotyetenabled;

    /* Outputs for Atomic SubSystem: '<S132>/Injector Manager' */

    /* Outputs for Enabled SubSystem: '<S145>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S150>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration1' incorporates:
     *  Constant: '<S152>/Constant'
     *  RelationalOperator: '<S152>/RelOp'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S150>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S150>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S150>/motohawk_prelookup1'
     */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!BaseEngineController_A02_DWork.s145_DeltaTPSTransientFueling_MODE) {
        /* S-Function Block: <S154>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s154_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S155>/Unit Delay' */
        BaseEngineController_A02_DWork.s155_UnitDelay_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s145_DeltaTPSTransientFueling_MODE = TRUE;
      }

      /* S-Function Block: <S154>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s154_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_hl = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S154>/Product' incorporates:
       *  MinMax: '<S154>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration'
       */
      rtb_Product_hl /= (rtb_Product_hl >= (DeltaTPS_FiltConst_DataStore())) ||
        rtIsNaN((DeltaTPS_FiltConst_DataStore())) ? rtb_Product_hl :
        (DeltaTPS_FiltConst_DataStore());

      /* Sum: '<S155>/Sum1' incorporates:
       *  Constant: '<S155>/Constant'
       *  Product: '<S155>/Product'
       *  Product: '<S155>/Product1'
       *  Sum: '<S155>/Sum'
       *  UnitDelay: '<S155>/Unit Delay'
       */
      BaseEngineController_A02_B.s155_Sum1 = (1.0 - rtb_Product_hl) *
        BaseEngineController_A02_DWork.s155_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s329_Switch2 * rtb_Product_hl;

      /* Sum: '<S150>/Sum' */
      BaseEngineController_A02_B.s150_Sum =
        BaseEngineController_A02_B.s329_Switch2 -
        BaseEngineController_A02_B.s155_Sum1;

      /* S-Function Block: <S150>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) = BaseEngineController_A02_B.s282_Saturation1;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s282_Saturation1, (MAF09IdxArr_DataStore()),
           9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_h = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S150>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_A02_B.s150_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s150_Sum, (DeltaTPS17IdxArr_DataStore()),
           17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_fq = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S150>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_k = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_h, rtb_motohawk_prelookup1_fq, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_k;
      }

      /* Outputs for Enabled SubSystem: '<S150>/ECT Transient Fueling' incorporates:
       *  EnablePort: '<S153>/Enable'
       */
      if (rtb_motohawk_interpolation_2d2_k != 1.0) {
        if (!BaseEngineController_A02_DWork.s150_ECTTransientFueling_MODE) {
          BaseEngineController_A02_DWork.s150_ECTTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S153>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_A02_B.s153_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_A02_B.s315_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_A02_B.s153_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_A02_DWork.s150_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S153>/Mult' */
          BaseEngineController_A02_B.s153_motohawk_interpolation_1d = 1.0;
          BaseEngineController_A02_DWork.s150_ECTTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S150>/ECT Transient Fueling' */

      /* Product: '<S150>/Product1' incorporates:
       *  Constant: '<S152>/Constant'
       *  RelationalOperator: '<S152>/RelOp'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S150>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S150>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S150>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s150_Product1 =
        rtb_motohawk_interpolation_2d2_k *
        BaseEngineController_A02_B.s153_motohawk_interpolation_1d;

      /* Update for UnitDelay: '<S155>/Unit Delay' */
      BaseEngineController_A02_DWork.s155_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s155_Sum1;
    } else {
      if (BaseEngineController_A02_DWork.s145_DeltaTPSTransientFueling_MODE) {
        /* Disable for Enabled SubSystem: '<S150>/ECT Transient Fueling' */
        /* Disable for Outport: '<S153>/Mult' */
        BaseEngineController_A02_B.s153_motohawk_interpolation_1d = 1.0;
        BaseEngineController_A02_DWork.s150_ECTTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S150>/ECT Transient Fueling' */

        /* Disable for Outport: '<S150>/DeltaTPSMult' */
        BaseEngineController_A02_B.s150_Product1 = 1.0;
        BaseEngineController_A02_DWork.s145_DeltaTPSTransientFueling_MODE =
          FALSE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration1' */
    /* End of Outputs for SubSystem: '<S145>/Delta TPS Transient Fueling' */

    /* Product: '<S145>/Divide' */
    rtb_Divide_l = BaseEngineController_A02_B.s150_Product1 *
      BaseEngineController_A02_B.s144_ApplyMultipliersforO2KnockControlandEnrichment1;

    /* S-Function Block: <S145>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s356_motohawk_prelookup1,
         BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* RelationalOperator: '<S157>/RelOp' incorporates:
     *  Constant: '<S157>/Constant'
     */
    rtb_RelOp_fa = (BaseEngineController_A02_B.s520_Sum1 != 0.0);

    /* Outputs for Enabled SubSystem: '<S151>/Multiply and Divide, avoiding divde by zero' */
    BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(rtb_RelOp_fa,
      rtb_Divide_l, 60000.0, BaseEngineController_A02_B.s520_Sum1, 1.0,
      &BaseEngineController_A02_B.s151_MultiplyandDivideavoidingdivdebyzero);

    /* End of Outputs for SubSystem: '<S151>/Multiply and Divide, avoiding divde by zero' */

    /* S-Function Block: <S145>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s356_motohawk_prelookup1,
         BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* End of Outputs for SubSystem: '<S132>/Injector Manager' */

    /* Outputs for Atomic SubSystem: '<S132>/O2 Fuel Adapt' */

    /* S-Function Block: <S146>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_f = TableInterpolation1D_real_T
        (rtb_ITermIdx, (real_T *) ((FuelAdaptGainTbl_DataStore())), 9);
      (FuelAdaptGain_DataStore()) = rtb_motohawk_interpolation_1d1_f;
    }

    /* Product: '<S146>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S146>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S135>/motohawk_prelookup13'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s231_Switch1 *
      rtb_motohawk_interpolation_1d1_f;

    /* MinMax: '<S164>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration'
     */
    y = (rtb_Product1_e >= (FuelAdaptErrorLwrLim_DataStore())) || rtIsNaN
      ((FuelAdaptErrorLwrLim_DataStore())) ? rtb_Product1_e :
      (FuelAdaptErrorLwrLim_DataStore());

    /* MinMax: '<S164>/MinMax1' incorporates:
     *  MinMax: '<S164>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s164_MinMax1 = (y <=
      (FuelAdaptErrorUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptErrorUprLim_DataStore())) ? y : (FuelAdaptErrorUprLim_DataStore
      ());

    /* S-Function Block: <S146>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2 = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s356_motohawk_prelookup1,
         BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdaptMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_DataStore()) = rtb_motohawk_interpolation_2d2;
    }

    /* Outputs for Atomic SubSystem: '<S146>/WarmUp Disable' */
    /* Logic: '<S162>/Logical Operator' incorporates:
     *  Constant: '<S162>/Constant'
     *  RelationalOperator: '<S162>/Relational Operator'
     */
    BaseEngineController_A02_B.s162_LogicalOperator = !(rtb_DesiredLambda_idx_0 >
      1.01);

    /* End of Outputs for SubSystem: '<S146>/WarmUp Disable' */

    /* Outputs for Atomic SubSystem: '<S146>/O2 Control Enable Delay' */

    /* S-Function Block: <S163>/motohawk_delta_time */
    rtb_motohawk_delta_time_g = 0.005;

    /* Switch: '<S163>/Switch' incorporates:
     *  Constant: '<S163>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S163>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S163>/motohawk_delta_time'
     *  Sum: '<S163>/Sum'
     */
    if (BaseEngineController_A02_B.s220_LogicalOperator2) {
      rtb_Product1_e = rtb_motohawk_delta_time_g + LiqDelayTime_DataStore();
    } else {
      rtb_Product1_e = 0.0;
    }

    /* End of Switch: '<S163>/Switch' */
    /* RelationalOperator: '<S160>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_a = (rtb_Product1_e > (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S163>/Saturation' */
    rtb_Saturation_c = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
      0.0 ? 0.0 : rtb_Product1_e;

    /* S-Function (motohawk_sfun_data_write): '<S163>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_c;
    }

    /* End of Outputs for SubSystem: '<S146>/O2 Control Enable Delay' */

    /* Abs: '<S146>/Abs' */
    rtb_Product1_e = fabs(BaseEngineController_A02_B.s231_Switch1);

    /* Logic: '<S146>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S146>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S146>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S146>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S146>/motohawk_calibration2'
     */
    BaseEngineController_A02_B.s146_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_A02_B.s162_LogicalOperator &&
        rtb_LogicalOperator1_a && (rtb_Product1_e <= (FuelAdaptDelta_DataStore()))));

    /* Outputs for Enabled SubSystem: '<S146>/Adapt FuelFlowComp Map' incorporates:
     *  EnablePort: '<S158>/Enable'
     */
    if (BaseEngineController_A02_B.s146_LogicalOperator2) {
      /* S-Function Block: <S158>/motohawk_adapt_table */
      /* Adapt 2-D Table */
      {
        uint32_T _row = ((IndLoadNom09Idx_DataStore())) >> 9;
        uint32_T _row_frac = (((IndLoadNom09Idx_DataStore())) & 0x01FF) >> 7;
        uint32_T _col = ((RPM09Idx_DataStore())) >> 9;
        uint32_T _col_frac = (((RPM09Idx_DataStore())) & 0x01FF) >> 7;
        real_T _new;
        if (_row >= 8) {
          _row = 8;
          _row_frac = 0;
        }

        if (_col >= 8) {
          _col = 8;
          _col_frac = 0;
        }

        if (_row_frac == 3) {
          _row++;
          _row_frac = 0;
        }

        if (_row_frac == 0) {
          if (_col_frac == 0) {
            _new = (FuelFlowCompAdaptMap_DataStore())[_row][_col] +
              BaseEngineController_A02_B.s164_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdaptMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdaptMap_DataStore())[_row][_col+1] +
              BaseEngineController_A02_B.s164_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdaptMap_DataStore())[_row][_col+1] = _new;
          }
        } else {
          if (_col_frac == 3) {
            _col++;
            _col_frac = 0;
          }
        }
      }

      /* RelationalOperator: '<S158>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S158>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator2_c = ((rtb_motohawk_interpolation_2d2 >=
        (FuelFlowCompMaxValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S158>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(17, rtb_RelationalOperator2_c);
        UpdateFault(17);
      }

      /* RelationalOperator: '<S158>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S158>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator1_dd = ((rtb_motohawk_interpolation_2d2 <=
        (FuelFlowCompMinValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S158>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(18, rtb_RelationalOperator1_dd);
        UpdateFault(18);
      }
    }

    /* End of Outputs for SubSystem: '<S146>/Adapt FuelFlowComp Map' */

    /* S-Function Block: <S146>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_b = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s356_motohawk_prelookup1,
         BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_b;
    }

    /* Product: '<S146>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d2'
     */
    rtb_Product1_e = rtb_motohawk_interpolation_2d1_b *
      rtb_motohawk_interpolation_2d2;

    /* End of Outputs for SubSystem: '<S132>/O2 Fuel Adapt' */

    /* End of Outputs for SubSystem: '<S121>/Fuel System Manager' */

    /* ZeroOrderHold: '<S121>/Zero-Order Hold1' */
    BaseEngineController_A02_B.s120_SparkEnergy =
      BaseEngineController_A02_B.s136_motohawk_interpolation_2d1;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold12' */
    BaseEngineController_A02_B.s120_SparkAdv =
      BaseEngineController_A02_B.s239_Switch;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold16' incorporates:
     *  Constant: '<S121>/ON1'
     */
    BaseEngineController_A02_B.s120_FUELP = TRUE;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S145>/Primary Pulse Injection Timing'
     */
    BaseEngineController_A02_B.s120_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold18' */
    BaseEngineController_A02_B.s120_Throttle =
      BaseEngineController_A02_B.s129_MultiportSwitch;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold2' */
    BaseEngineController_A02_B.s120_EGR =
      BaseEngineController_A02_B.s131_Product;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S145>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_A02_B.s120_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold4' */
    BaseEngineController_A02_B.s120_FuelMult = rtb_Product1_e;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold5' incorporates:
     *  Constant: '<S121>/OILP'
     */
    BaseEngineController_A02_B.s120_OILP = TRUE;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold6' incorporates:
     *  Constant: '<S121>/OILP1'
     */
    BaseEngineController_A02_B.s120_O2Heater = TRUE;

    /* S-Function (motohawk_sfun_replicate): '<S121>/motohawk_replicate1' */

    /* S-Function Block: <S121>/motohawk_replicate1 */
    {
      int_T i1;
      real_T *y0 = BaseEngineController_A02_B.s120_FPC;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] =
          BaseEngineController_A02_B.s151_MultiplyandDivideavoidingdivdebyzero.s156_chargemass;
      }
    }
  } else {
    if (BaseEngineController_A02_DWork.s7_Run_MODE) {
      /* Level2 S-Function Block: '<S121>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_4024p0001 */
      BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 = 0;

      /* Disable for Atomic SubSystem: '<S121>/Fuel System Manager' */
      /* Disable for Atomic SubSystem: '<S132>/Injector Manager' */
      /* Disable for Enabled SubSystem: '<S145>/Delta TPS Transient Fueling' */
      /* Disable for Enabled SubSystem: '<S150>/ECT Transient Fueling' */
      /* Disable for Outport: '<S153>/Mult' */
      BaseEngineController_A02_B.s153_motohawk_interpolation_1d = 1.0;
      BaseEngineController_A02_DWork.s150_ECTTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S150>/ECT Transient Fueling' */

      /* Disable for Outport: '<S150>/DeltaTPSMult' */
      BaseEngineController_A02_B.s150_Product1 = 1.0;
      BaseEngineController_A02_DWork.s145_DeltaTPSTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S145>/Delta TPS Transient Fueling' */
      /* End of Disable for SubSystem: '<S132>/Injector Manager' */
      /* End of Disable for SubSystem: '<S121>/Fuel System Manager' */
      BaseEngineController_A02_DWork.s7_Run_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S7>/Run' */

  /* S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1409p0004 */
  if (BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1408p0004 */
  if (BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_fault_action): '<S15>/motohawk_fault_action1'
   *
   * Regarding '<S15>/motohawk_fault_action1':
     Get Fault Action Status: SoftRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_m = GetFaultActionStatus(6);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S15>/motohawk_fault_action2'
   *
   * Regarding '<S15>/motohawk_fault_action2':
     Get Fault Action Status: MediumRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action2 = GetFaultActionStatus(5);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S15>/motohawk_fault_action3'
   *
   * Regarding '<S15>/motohawk_fault_action3':
     Get Fault Action Status: HardRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action3 = GetFaultActionStatus(4);
  }

  /* Logic: '<S15>/Logical Operator4' */
  rtb_LogicalOperator1_a = (rtb_motohawk_fault_action1_m ||
    rtb_motohawk_fault_action2 || rtb_motohawk_fault_action3);

  /* Outputs for Enabled SubSystem: '<S15>/PassThrough1' incorporates:
   *  EnablePort: '<S94>/Enable'
   */
  if (rtb_motohawk_fault_action1_m) {
    if (!BaseEngineController_A02_DWork.s15_PassThrough1_MODE) {
      BaseEngineController_A02_DWork.s15_PassThrough1_MODE = TRUE;
    }

    /* Inport: '<S94>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration9'
     */
    BaseEngineController_A02_B.s15_Merge1[0] = ((int8_T)
      (SoftCycle1Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[1] = ((int8_T)
      (SoftCycle1Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[2] = ((int8_T)
      (SoftCycle1Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[3] = ((int8_T)
      (SoftCycle1Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[4] = ((int8_T)
      (SoftCycle1Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[5] = ((int8_T)
      (SoftCycle1Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[6] = ((int8_T)
      (SoftCycle1Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[7] = ((int8_T)
      (SoftCycle1Cyl8_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[8] = ((int8_T)
      (SoftCycle2Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[9] = ((int8_T)
      (SoftCycle2Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[10] = ((int8_T)
      (SoftCycle2Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[11] = ((int8_T)
      (SoftCycle2Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[12] = ((int8_T)
      (SoftCycle2Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[13] = ((int8_T)
      (SoftCycle2Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[14] = ((int8_T)
      (SoftCycle2Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[15] = ((int8_T)
      (SoftCycle2Cyl8_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[16] = ((int8_T)
      (SoftCycle3Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[17] = ((int8_T)
      (SoftCycle3Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[18] = ((int8_T)
      (SoftCycle3Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[19] = ((int8_T)
      (SoftCycle3Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[20] = ((int8_T)
      (SoftCycle3Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[21] = ((int8_T)
      (SoftCycle3Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[22] = ((int8_T)
      (SoftCycle3Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[23] = ((int8_T)
      (SoftCycle3Cyl8_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[24] = ((int8_T)
      (SoftCycle4Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[25] = ((int8_T)
      (SoftCycle4Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[26] = ((int8_T)
      (SoftCycle4Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[27] = ((int8_T)
      (SoftCycle4Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[28] = ((int8_T)
      (SoftCycle4Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[29] = ((int8_T)
      (SoftCycle4Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[30] = ((int8_T)
      (SoftCycle4Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[31] = ((int8_T)
      (SoftCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_A02_DWork.s15_PassThrough1_MODE) {
      /* Disable for Outport: '<S94>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_A02_B.s15_Merge1[i] = 0;
      }

      /* End of Outport: '<S94>/Out1' */
      BaseEngineController_A02_DWork.s15_PassThrough1_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/PassThrough1' */
  /* Outputs for Enabled SubSystem: '<S15>/PassThrough2' incorporates:
   *  EnablePort: '<S95>/Enable'
   */
  if (rtb_motohawk_fault_action2) {
    /* Inport: '<S95>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration9'
     */
    BaseEngineController_A02_B.s15_Merge1[0] = ((int8_T)
      (MediumCycle1Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[1] = ((int8_T)
      (MediumCycle1Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[2] = ((int8_T)
      (MediumCycle1Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[3] = ((int8_T)
      (MediumCycle1Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[4] = ((int8_T)
      (MediumCycle1Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[5] = ((int8_T)
      (MediumCycle1Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[6] = ((int8_T)
      (MediumCycle1Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[7] = ((int8_T)
      (MediumCycle1Cyl8_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[8] = ((int8_T)
      (MediumCycle2Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[9] = ((int8_T)
      (MediumCycle2Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[10] = ((int8_T)
      (MediumCycle2Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[11] = ((int8_T)
      (MediumCycle2Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[12] = ((int8_T)
      (MediumCycle2Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[13] = ((int8_T)
      (MediumCycle2Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[14] = ((int8_T)
      (MediumCycle2Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[15] = ((int8_T)
      (MediumCycle2Cyl8_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[16] = ((int8_T)
      (MediumCycle3Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[17] = ((int8_T)
      (MediumCycle3Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[18] = ((int8_T)
      (MediumCycle3Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[19] = ((int8_T)
      (MediumCycle3Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[20] = ((int8_T)
      (MediumCycle3Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[21] = ((int8_T)
      (MediumCycle3Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[22] = ((int8_T)
      (MediumCycle3Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[23] = ((int8_T)
      (MediumCycle3Cyl8_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[24] = ((int8_T)
      (MediumCycle4Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[25] = ((int8_T)
      (MediumCycle4Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[26] = ((int8_T)
      (MediumCycle4Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[27] = ((int8_T)
      (MediumCycle4Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[28] = ((int8_T)
      (MediumCycle4Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[29] = ((int8_T)
      (MediumCycle4Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[30] = ((int8_T)
      (MediumCycle4Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[31] = ((int8_T)
      (MediumCycle4Cyl8_DataStore()));
  }

  /* End of Outputs for SubSystem: '<S15>/PassThrough2' */
  /* Outputs for Enabled SubSystem: '<S15>/PassThrough3' incorporates:
   *  EnablePort: '<S96>/Enable'
   */
  if (rtb_motohawk_fault_action3) {
    if (!BaseEngineController_A02_DWork.s15_PassThrough3_MODE) {
      BaseEngineController_A02_DWork.s15_PassThrough3_MODE = TRUE;
    }

    /* Inport: '<S96>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration9'
     */
    BaseEngineController_A02_B.s15_Merge1[0] = ((int8_T)
      (HardCycle1Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[1] = ((int8_T)
      (HardCycle1Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[2] = ((int8_T)
      (HardCycle1Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[3] = ((int8_T)
      (HardCycle1Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[4] = ((int8_T)
      (HardCycle1Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[5] = ((int8_T)
      (HardCycle1Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[6] = ((int8_T)
      (HardCycle1Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[7] = ((int8_T)
      (HardCycle1Cyl8_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[8] = ((int8_T)
      (HardCycle2Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[9] = ((int8_T)
      (HardCycle2Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[10] = ((int8_T)
      (HardCycle2Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[11] = ((int8_T)
      (HardCycle2Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[12] = ((int8_T)
      (HardCycle2Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[13] = ((int8_T)
      (HardCycle2Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[14] = ((int8_T)
      (HardCycle2Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[15] = ((int8_T)
      (HardCycle2Cyl8_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[16] = ((int8_T)
      (HardCycle3Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[17] = ((int8_T)
      (HardCycle3Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[18] = ((int8_T)
      (HardCycle3Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[19] = ((int8_T)
      (HardCycle3Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[20] = ((int8_T)
      (HardCycle3Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[21] = ((int8_T)
      (HardCycle3Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[22] = ((int8_T)
      (HardCycle3Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[23] = ((int8_T)
      (HardCycle3Cyl8_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[24] = ((int8_T)
      (HardCycle4Cyl1_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[25] = ((int8_T)
      (HardCycle4Cyl2_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[26] = ((int8_T)
      (HardCycle4Cyl3_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[27] = ((int8_T)
      (HardCycle4Cyl4_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[28] = ((int8_T)
      (HardCycle4Cyl5_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[29] = ((int8_T)
      (HardCycle4Cyl6_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[30] = ((int8_T)
      (HardCycle4Cyl7_DataStore()));
    BaseEngineController_A02_B.s15_Merge1[31] = ((int8_T)
      (HardCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_A02_DWork.s15_PassThrough3_MODE) {
      /* Disable for Outport: '<S96>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_A02_B.s15_Merge1[i] = 0;
      }

      /* End of Outport: '<S96>/Out1' */
      BaseEngineController_A02_DWork.s15_PassThrough3_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/PassThrough3' */

  /* Outputs for Enabled SubSystem: '<S15>/SequenceCutMachine' incorporates:
   *  EnablePort: '<S99>/Enable'
   */
  if (rtb_LogicalOperator1_a) {
    if (!BaseEngineController_A02_DWork.s15_SequenceCutMachine_MODE) {
      /* InitializeConditions for UnitDelay: '<S99>/Unit Delay2' */
      BaseEngineController_A02_DWork.s99_UnitDelay2_DSTATE = 1.0;

      /* InitializeConditions for UnitDelay: '<S99>/Unit Delay1' */
      BaseEngineController_A02_DWork.s99_UnitDelay1_DSTATE = 1U;

      /* Level2 S-Function Block: '<S99>/motohawk_trigger' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_TDC1_EVENT_1156p0004 */
      BaseEngineController_A02_DWork.s99_motohawk_trigger_DWORK1 = 1;
      BaseEngineController_A02_DWork.s15_SequenceCutMachine_MODE = TRUE;
    }

    /* UnitDelay: '<S99>/Unit Delay2' */
    BaseEngineController_A02_B.s99_UnitDelay2 =
      BaseEngineController_A02_DWork.s99_UnitDelay2_DSTATE;

    /* MultiPortSwitch: '<S99>/Multiport Switch' */
    switch ((int32_T)BaseEngineController_A02_B.s99_UnitDelay2) {
     case 1:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s99_MultiportSwitch[i] =
          BaseEngineController_A02_B.s15_Merge1[i];
      }
      break;

     case 2:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s99_MultiportSwitch[i] =
          BaseEngineController_A02_B.s15_Merge1[i + 8];
      }
      break;

     case 3:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s99_MultiportSwitch[i] =
          BaseEngineController_A02_B.s15_Merge1[i + 16];
      }
      break;

     default:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s99_MultiportSwitch[i] =
          BaseEngineController_A02_B.s15_Merge1[i + 24];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S99>/Multiport Switch' */

    /* UnitDelay: '<S99>/Unit Delay1' */
    BaseEngineController_A02_B.s99_UnitDelay1 =
      BaseEngineController_A02_DWork.s99_UnitDelay1_DSTATE;

    /* S-Function (motohawk_sfun_trigger): '<S99>/motohawk_trigger' */
    /* Enable for Trigger_FGND_TDC1_EVENT_1156p0004 */
    if (BaseEngineController_A02_DWork.s99_motohawk_trigger_DWORK1 == 0) {
      BaseEngineController_A02_DWork.s99_motohawk_trigger_DWORK1 = 1;
    }

    /* Update for UnitDelay: '<S99>/Unit Delay2' */
    BaseEngineController_A02_DWork.s99_UnitDelay2_DSTATE =
      BaseEngineController_A02_B.s109_Switch1;

    /* Update for UnitDelay: '<S99>/Unit Delay1' */
    BaseEngineController_A02_DWork.s99_UnitDelay1_DSTATE =
      BaseEngineController_A02_B.s109_Switch;
  } else {
    if (BaseEngineController_A02_DWork.s15_SequenceCutMachine_MODE) {
      /* Level2 S-Function Block: '<S99>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_TDC1_EVENT_1156p0004 */
      BaseEngineController_A02_DWork.s99_motohawk_trigger_DWORK1 = 0;

      /* Disable for Outport: '<S99>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s109_CutArray[i] = 0;
      }

      /* End of Outport: '<S99>/Out1' */
      BaseEngineController_A02_DWork.s15_SequenceCutMachine_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/SequenceCutMachine' */
  /* Outputs for Enabled SubSystem: '<S15>/PassThrough4' incorporates:
   *  EnablePort: '<S97>/Enable'
   */
  /* Logic: '<S15>/Logical Operator' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  RelationalOperator: '<S15>/Relational Operator'
   *  RelationalOperator: '<S15>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S15>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 0) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!BaseEngineController_A02_DWork.s15_PassThrough4_MODE) {
      BaseEngineController_A02_DWork.s15_PassThrough4_MODE = TRUE;
    }

    /* DataTypeConversion: '<S97>/Data Type Conversion' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s97_DataTypeConversion[i] =
        ((BaseEngineController_A02_B.s109_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S97>/Data Type Conversion' */
  } else {
    if (BaseEngineController_A02_DWork.s15_PassThrough4_MODE) {
      /* Disable for Outport: '<S97>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s97_DataTypeConversion[i] = FALSE;
      }

      /* End of Outport: '<S97>/Out1' */
      BaseEngineController_A02_DWork.s15_PassThrough4_MODE = FALSE;
    }
  }

  /* End of Logic: '<S15>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S15>/PassThrough4' */

  /* Logic: '<S15>/Logical Operator2' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s15_LogicalOperator2[i] =
      !BaseEngineController_A02_B.s97_DataTypeConversion[i];
  }

  /* End of Logic: '<S15>/Logical Operator2' */

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7767p0005 */
  if (BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S5>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S747>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S752>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_7280p0004 */
    BaseEngineController_A02_DWork.s752_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S747>/EST Enable TDC Counter' */
    BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function Block: <S21>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s21_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_n = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S530>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s530_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S530>/Product' incorporates:
   *  MinMax: '<S530>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S530>/motohawk_calibration'
   */
  rtb_Switch_e /= (rtb_Switch_e >= (EGRSenseFilterConst_DataStore())) || rtIsNaN
    ((EGRSenseFilterConst_DataStore())) ? rtb_Switch_e :
    (EGRSenseFilterConst_DataStore());

  /* Logic: '<S521>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S521>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S521>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(8) || IsFaultActive(9));

  /* Logic: '<S521>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S521>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S521>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(8) || IsFaultSuspected(9));

  /* S-Function Block: <S362>/motohawk_ain4 Resource: EGRPin */
  {
    extern NativeError_S EGRPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    EGRPin_AnalogInput_Get(&BaseEngineController_A02_B.s362_motohawk_ain4, NULL);
  }

  /* DataTypeConversion: '<S521>/Data Type Conversion' */
  rtb_DataTypeConversion_e = (real_T)
    BaseEngineController_A02_B.s362_motohawk_ain4;

  /* Product: '<S521>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S521>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_DataTypeConversion_e * (EGRSenseGain_DataStore());

  /* Sum: '<S521>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S521>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s521_Sum1 = rtb_Product1_e +
    (EGRSenseOfst_DataStore());

  /* UnitDelay: '<S521>/Unit Delay1' */
  rtb_UnitDelay1_g = BaseEngineController_A02_DWork.s521_UnitDelay1_DSTATE;

  /* If: '<S521>/If' incorporates:
   *  Logic: '<S521>/Logical Operator5'
   *  Logic: '<S521>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S521>/If Action Subsystem' incorporates:
     *  ActionPort: '<S531>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_g, &rtb_Merge_n);

    /* End of Outputs for SubSystem: '<S521>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S521>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S532>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((EGRSenseDfltValue_DataStore()),
      &rtb_Merge_n);

    /* End of Outputs for SubSystem: '<S521>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S521>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S533>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s521_Sum1, &rtb_Merge_n);

    /* End of Outputs for SubSystem: '<S521>/If Action Subsystem2' */
  }

  /* End of If: '<S521>/If' */

  /* Sum: '<S535>/Sum1' incorporates:
   *  Constant: '<S535>/Constant'
   *  Product: '<S535>/Product'
   *  Product: '<S535>/Product1'
   *  Sum: '<S535>/Sum'
   *  UnitDelay: '<S535>/Unit Delay'
   */
  rtb_Sum1_i5 = (1.0 - rtb_Switch_e) *
    BaseEngineController_A02_DWork.s535_UnitDelay_DSTATE + rtb_Merge_n *
    rtb_Switch_e;

  /* If: '<S534>/If' incorporates:
   *  Inport: '<S536>/In1'
   *  Inport: '<S537>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S534>/override_enable'
   */
  if ((EGRSense_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S534>/NewValue' incorporates:
     *  ActionPort: '<S536>/Action Port'
     */
    BaseEngineController_A02_B.s534_Merge = (EGRSense_new_DataStore());

    /* End of Outputs for SubSystem: '<S534>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S534>/OldValue' incorporates:
     *  ActionPort: '<S537>/Action Port'
     */
    BaseEngineController_A02_B.s534_Merge = rtb_Sum1_i5;

    /* End of Outputs for SubSystem: '<S534>/OldValue' */
  }

  /* End of If: '<S534>/If' */

  /* Sum: '<S12>/Difference' */
  rtb_Switch_e = BaseEngineController_A02_B.s120_EGR -
    BaseEngineController_A02_B.s534_Merge;

  /* Product: '<S18>/Product' incorporates:
   *  Gain: '<S18>/Gain'
   *  Logic: '<S18>/Logical Operator'
   *  RelationalOperator: '<S18>/Relational Operator'
   *  RelationalOperator: '<S18>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration'
   */
  rtb_Product_mm = (real_T)!((rtb_Switch_e >= (EGR_Hyst_DataStore())) ||
    (rtb_Switch_e <= -(EGR_Hyst_DataStore()))) * rtb_Switch_e;

  /* S-Function Block: <S12>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (EGR_Prelookup_PWIn_DataStore()) = rtb_Product_mm;
    (EGR_Prelookup_PWIdx_DataStore()) = TablePrelookup_real_T(rtb_Product_mm,
      (EGR_Prelookup_PWIdxArr_DataStore()), 11, (EGR_Prelookup_PWIdx_DataStore()));
    rtb_motohawk_prelookup_i = (EGR_Prelookup_PWIdx_DataStore());
  }

  /* S-Function Block: <S12>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_i, (real_T *) ((EGR_Interpolation_PWTbl_DataStore())),
       11);
    (EGR_Interpolation_PW_DataStore()) = rtb_motohawk_interpolation_1d_n;
  }

  /* RelationalOperator: '<S19>/Relational Operator' incorporates:
   *  Constant: '<S19>/Constant'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S12>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S12>/motohawk_prelookup'
   */
  rtb_LogicalOperator1_a = (rtb_motohawk_interpolation_1d_n > 0.0);

  /* S-Function Block: <S12>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (EGR_Prelookup_DCIn_DataStore()) = rtb_Product_mm;
    (EGR_Prelookup_DCIdx_DataStore()) = TablePrelookup_real_T(rtb_Product_mm,
      (EGR_Prelookup_DCIdxArr_DataStore()), 11, (EGR_Prelookup_DCIdx_DataStore()));
    rtb_motohawk_prelookup1_c = (EGR_Prelookup_DCIdx_DataStore());
  }

  /* S-Function Block: <S12>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_n = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_c, (real_T *) ((EGR_Interpolation_DCTbl_DataStore
         ())), 11);
    (EGR_Interpolation_DC_DataStore()) = rtb_motohawk_interpolation_1d1_n;
  }

  /* RelationalOperator: '<S19>/Relational Operator1' incorporates:
   *  Constant: '<S19>/Constant2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S12>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_prelookup): '<S12>/motohawk_prelookup1'
   */
  rtb_Switch_dz = (rtb_motohawk_interpolation_1d1_n > 0.0);

  /* Stateflow: '<S19>/Chart' incorporates:
   *  Logic: '<S19>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read'
   */

  /* Gateway: Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Chart */
  /* During: Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Chart */
  if (BaseEngineController_A02_DWork.s20_is_active_c1_BaseEngineController_A02 ==
      0) {
    /* Entry: Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Chart */
    BaseEngineController_A02_DWork.s20_is_active_c1_BaseEngineController_A02 =
      1U;

    /* Transition: '<S20>:13' */
    BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Init;
  } else {
    switch (BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02) {
     case BaseEngineController_A02_IN_Init:
      /* During 'Init': '<S20>:9' */
      if ((rtb_LogicalOperator1_a || rtb_Switch_dz) == 1) {
        /* Transition: '<S20>:14' */
        BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else {
        BaseEngineController_A02_B.s20_enout = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_default:
      /* During 'default': '<S20>:4' */
      if (RESET_DataStore() == TRUE) {
        /* Transition: '<S20>:7' */
        BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02 =
          BaseEngineController_A02_IN_reset;
      } else {
        BaseEngineController_A02_B.s20_enout = 1.0;
      }
      break;

     case BaseEngineController_A02_IN_reset:
      /* During 'reset': '<S20>:5' */
      if (BaseEngineController_A02_B.s20_enout == 0.0) {
        /* Transition: '<S20>:8' */
        BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else {
        BaseEngineController_A02_B.s20_enout = 0.0;
      }
      break;

     default:
      /* Transition: '<S20>:13' */
      BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Init;
      break;
    }
  }

  /* End of Stateflow: '<S19>/Chart' */

  /* Switch: '<S21>/Switch' incorporates:
   *  Constant: '<S21>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S21>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S21>/motohawk_delta_time'
   *  Sum: '<S21>/Sum'
   */
  if (BaseEngineController_A02_B.s20_enout >= 1.0) {
    rtb_Switch_e = rtb_motohawk_delta_time_n + EGR_Enable_DataStore();
  } else {
    rtb_Switch_e = 0.0;
  }

  /* End of Switch: '<S21>/Switch' */

  /* Gain: '<S19>/Gain' */
  rtb_Product1_e = 1.0E+6 * rtb_Switch_e;

  /* MultiPortSwitch: '<S19>/PW Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S12>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S12>/motohawk_prelookup'
   */
  switch (((uint8_T)(Mode_DataStore()))) {
   case 1:
    rtb_DesiredLambda_idx = rtb_motohawk_interpolation_1d_n;
    break;

   case 2:
    rtb_DesiredLambda_idx = (Default_PW_DataStore());
    break;

   default:
    rtb_DesiredLambda_idx = rtb_motohawk_interpolation_1d_n;
    break;
  }

  /* End of MultiPortSwitch: '<S19>/PW Switch' */

  /* MultiPortSwitch: '<S19>/DC Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S12>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_prelookup): '<S12>/motohawk_prelookup1'
   */
  switch (((uint8_T)(Mode_DataStore()))) {
   case 1:
    rtb_DataTypeConversion_f5a = (Default_DC_DataStore());
    break;

   case 2:
    rtb_DataTypeConversion_f5a = rtb_motohawk_interpolation_1d1_n;
    break;

   default:
    rtb_DataTypeConversion_f5a = rtb_motohawk_interpolation_1d1_n;
    break;
  }

  /* End of MultiPortSwitch: '<S19>/DC Switch' */

  /* RelationalOperator: '<S19>/Relational Operator2' incorporates:
   *  Gain: '<S19>/Gain2'
   *  Product: '<S19>/Product2'
   */
  rtb_RelationalOperator6_k = (0.01 * rtb_DataTypeConversion_f5a *
    rtb_DesiredLambda_idx >= rtb_Product1_e);

  /* Logic: '<S19>/Logical Operator2' incorporates:
   *  Logic: '<S19>/Logical Operator1'
   */
  BaseEngineController_A02_B.s19_Enable = (((rtb_Product1_e != 0.0) &&
    (!rtb_RelationalOperator6_k)));

  /* If: '<S763>/If' incorporates:
   *  Inport: '<S765>/In1'
   *  Inport: '<S766>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S763>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S763>/override_enable'
   */
  if ((Trigger_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S763>/NewValue' incorporates:
     *  ActionPort: '<S765>/Action Port'
     */
    BaseEngineController_A02_B.s763_Merge = (Trigger_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S763>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S763>/OldValue' incorporates:
     *  ActionPort: '<S766>/Action Port'
     */
    BaseEngineController_A02_B.s763_Merge =
      BaseEngineController_A02_B.s19_Enable;

    /* End of Outputs for SubSystem: '<S763>/OldValue' */
  }

  /* End of If: '<S763>/If' */

  /* DataTypeConversion: '<S676>/Data Type Conversion' */
  if (rtIsNaN(rtb_DesiredLambda_idx) || rtIsInf(rtb_DesiredLambda_idx)) {
    rtb_Sum2_d0 = 0.0;
  } else {
    rtb_Sum2_d0 = fmod(floor(rtb_DesiredLambda_idx), 4.294967296E+9);
  }

  BaseEngineController_A02_B.s676_DataTypeConversion = rtb_Sum2_d0 < 0.0 ?
    -(int32_T)(uint32_T)-rtb_Sum2_d0 : (int32_T)(uint32_T)rtb_Sum2_d0;

  /* End of DataTypeConversion: '<S676>/Data Type Conversion' */
  /* If: '<S764>/If' incorporates:
   *  Inport: '<S767>/In1'
   *  Inport: '<S768>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S764>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S764>/override_enable'
   */
  if ((Duration_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S764>/NewValue' incorporates:
     *  ActionPort: '<S767>/Action Port'
     */
    BaseEngineController_A02_B.s764_Merge = (Duration_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S764>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S764>/OldValue' incorporates:
     *  ActionPort: '<S768>/Action Port'
     */
    BaseEngineController_A02_B.s764_Merge =
      BaseEngineController_A02_B.s676_DataTypeConversion;

    /* End of Outputs for SubSystem: '<S764>/OldValue' */
  }

  /* End of If: '<S764>/If' */

  /* S-Function (motohawk_sfun_oneshot): '<S676>/motohawk_oneshot' */

  /* S-Function Block: ONESHOT */
  {
    if (BaseEngineController_A02_B.s763_Merge) {
      extern NativeError_S ONESHOT_OneShotOutput_Set(int32_T duration_us,
        boolean_T cancel);
      ONESHOT_OneShotOutput_Set(BaseEngineController_A02_B.s764_Merge, FALSE);
    }
  }

  /* Switch: '<S128>/Switch' incorporates:
   *  Constant: '<S128>/OFF'
   *  Logic: '<S128>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S128>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S128>/motohawk_data_read1'
   */
  if (DelayedEngineShutdownAction_DataStore() || EngineShutdownAction_DataStore())
  {
    rtb_RelationalOperator5_p = FALSE;
  } else {
    rtb_RelationalOperator5_p = BaseEngineController_A02_B.s120_FUELP;
  }

  /* End of Switch: '<S128>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S360>/motohawk_data_read' */
  BaseEngineController_A02_B.s360_EStop = ESTOP_DataStore();

  /* If: '<S500>/If' incorporates:
   *  Inport: '<S510>/In1'
   *  Inport: '<S511>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S500>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S500>/override_enable'
   */
  if ((ESTOP_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S500>/NewValue' incorporates:
     *  ActionPort: '<S510>/Action Port'
     */
    rtb_Merge_gl = (ESTOP_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S500>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S500>/OldValue' incorporates:
     *  ActionPort: '<S511>/Action Port'
     */
    rtb_Merge_gl = BaseEngineController_A02_B.s360_EStop;

    /* End of Outputs for SubSystem: '<S500>/OldValue' */
  }

  /* End of If: '<S500>/If' */

  /* Logic: '<S5>/Logical Operator5' incorporates:
   *  Logic: '<S5>/Logical Operator4'
   */
  rtb_LogicalOperator1_a = (rtb_RelationalOperator5_p && (!rtb_Merge_gl));

  /* If: '<S770>/If' incorporates:
   *  Inport: '<S771>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S770>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S770>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S770>/NewValue' incorporates:
     *  ActionPort: '<S771>/Action Port'
     */
    rtb_LogicalOperator1_a = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S770>/NewValue' */
  } else {
  }

  /* End of If: '<S770>/If' */

  /* Logic: '<S769>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S769>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s769_LogicalOperator = rtb_LogicalOperator1_a ^
    (FUELP_Polarity_DataStore());

  /* S-Function Block: <S773>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s773_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S351>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s351_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_nn = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S350>/RelOp' incorporates:
   *  Constant: '<S350>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S332>/motohawk_data_read'
   */
  rtb_LogicalOperator1_a = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S332>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_f, NULL);
  }

  /* Switch: '<S351>/Switch' incorporates:
   *  Constant: '<S332>/Constant1'
   *  Constant: '<S351>/Constant'
   *  Logic: '<S332>/Logical Operator'
   *  RelationalOperator: '<S332>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S332>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S351>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S351>/motohawk_delta_time'
   *  Sum: '<S351>/Sum'
   */
  if (rtb_LogicalOperator1_a && (rtb_motohawk_ain_read_f > 150)) {
    BaseEngineController_A02_B.s351_Switch = rtb_motohawk_delta_time_nn +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_A02_B.s351_Switch = 0.0;
  }

  /* End of Switch: '<S351>/Switch' */
  /* Logic: '<S678>/Logical Operator1' incorporates:
   *  Logic: '<S5>/Logical Operator9'
   *  RelationalOperator: '<S5>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S5>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S678>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_p = ((ETC_CutPower_Permitted_DataStore()) &&
    (rtb_Merge_gl || (BaseEngineController_A02_B.s351_Switch >
                      (ETC_CutPower_StallTime_DataStore()))));

  /* Logic: '<S678>/Logical Operator' */
  rtb_LogicalOperator10 = !rtb_RelationalOperator5_p;

  /* Outputs for Enabled SubSystem: '<S6>/Electronic Throttle Controller' incorporates:
   *  EnablePort: '<S13>/Enable'
   */
  /* RelationalOperator: '<S11>/RelOp' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S29>/Constant2'
   *  Constant: '<S52>/Constant'
   *  Inport: '<S51>/In1'
   *  RelationalOperator: '<S52>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S29>/motohawk_data_read3'
   *  S-Function (motohawk_sfun_data_read): '<S6>/motohawk_data_read'
   *  Sum: '<S29>/Add2'
   */
  if (!AirControlSource_DataStore()) {
    if (!BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE) {
      BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE = TRUE;
    }

    /* RelationalOperator: '<S61>/RelOp' incorporates:
     *  Constant: '<S61>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S30>/motohawk_data_read3'
     */
    rtb_LogicalOperator1_a = (((uint8_T)EngineState_DataStore()) == 1);

    /* Logic: '<S30>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S30>/motohawk_data_read2'
     */
    rtb_Switch_dz = !ShutDownTasksComplete_DataStore();

    /* S-Function Block: <S30>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_i, NULL);
    }

    /* RelationalOperator: '<S30>/Relational Operator' incorporates:
     *  Constant: '<S30>/Constant1'
     *  S-Function (motohawk_sfun_ain_read): '<S30>/motohawk_ain_read'
     */
    rtb_AboveHiTarget = (rtb_motohawk_ain_read_i < 150);

    /* Logic: '<S30>/Logical Operator3' */
    BaseEngineController_A02_B.s30_LogicalOperator3 = ((rtb_LogicalOperator1_a &&
      rtb_Switch_dz && rtb_AboveHiTarget));

    /* S-Function Block: <S62>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s62_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_n0 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S62>/Switch' incorporates:
     *  Constant: '<S62>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S62>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S62>/motohawk_delta_time'
     *  Sum: '<S62>/Sum'
     */
    if (rtb_AboveHiTarget) {
      BaseEngineController_A02_B.s62_Switch = rtb_motohawk_delta_time_n0 +
        ETCShutDownTimer_DataStore();
    } else {
      BaseEngineController_A02_B.s62_Switch = 0.0;
    }

    /* End of Switch: '<S62>/Switch' */

    /* UnitDelay: '<S13>/Unit Delay' */
    rtb_Product1_e = BaseEngineController_A02_DWork.s13_UnitDelay_DSTATE;

    /* RelationalOperator: '<S13>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration4'
     */
    BaseEngineController_A02_B.s13_RelationalOperator5 = ((rtb_Product1_e <
      (ETC_ShutdownLoAdaptError_DataStore())));

    /* RelationalOperator: '<S13>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration5'
     */
    BaseEngineController_A02_B.s13_RelationalOperator2 =
      ((BaseEngineController_A02_B.s329_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S13>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration6'
     */
    BaseEngineController_A02_B.s13_RelationalOperator3 =
      ((BaseEngineController_A02_B.s329_Switch2 <
        (ETC_SpringTestLoThresh_DataStore())));

    /* Stateflow: '<S13>/ETC Test  Manager' */

    /* Gateway: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    /* During: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    switch (BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02) {
     case BaseEngineController_A02_IN_ForcedShutdown:
      /* During 'ForcedShutdown': '<S25>:6' */
      if (!BaseEngineController_A02_B.s30_LogicalOperator3) {
        /* Transition: '<S25>:19' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S25>:5' */
        BaseEngineController_A02_B.s25_DC_Override = 1;
        BaseEngineController_A02_B.s25_TestComplete = TRUE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime =
          BaseEngineController_A02_B.s62_Switch -
          BaseEngineController_A02_DWork.s25_TimerOld;
      }
      break;

     case BaseEngineController_A02_IN_LowAdapt:
      /* During 'LowAdapt': '<S25>:2' */
      if (BaseEngineController_A02_B.s62_Switch > 5.0) {
        /* Transition: '<S25>:17' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S25>:6' */
        BaseEngineController_A02_B.s25_DC_Override = 1;
        BaseEngineController_A02_B.s25_TestComplete = TRUE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s30_LogicalOperator3 &&
                 BaseEngineController_A02_B.s13_RelationalOperator5) {
        /* Transition: '<S25>:9' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestSetpoint;

        /* Entry 'SpringTestSetpoint': '<S25>:3' */
        BaseEngineController_A02_B.s25_DC_Override = 0;
        BaseEngineController_A02_B.s25_TestComplete = FALSE;
        BaseEngineController_A02_B.s25_SetpointMode = 2;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
      } else {
        if (!BaseEngineController_A02_B.s30_LogicalOperator3) {
          /* Transition: '<S25>:12' */
          BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PassThrough;

          /* Entry 'PassThrough': '<S25>:1' */
          BaseEngineController_A02_B.s25_DC_Override = 0;
          BaseEngineController_A02_B.s25_TestComplete = FALSE;
          BaseEngineController_A02_B.s25_SetpointMode = 0;
          BaseEngineController_A02_B.s25_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_A02_IN_PassThrough:
      /* During 'PassThrough': '<S25>:1' */
      if (BaseEngineController_A02_B.s30_LogicalOperator3) {
        /* Transition: '<S25>:8' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_LowAdapt;

        /* Entry 'LowAdapt': '<S25>:2' */
        BaseEngineController_A02_B.s25_DC_Override = 0;
        BaseEngineController_A02_B.s25_TestComplete = FALSE;
        BaseEngineController_A02_B.s25_SetpointMode = 1;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_SpringTest:
      /* During 'SpringTest': '<S25>:4' */
      if (BaseEngineController_A02_B.s62_Switch > 5.0) {
        /* Transition: '<S25>:16' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S25>:6' */
        BaseEngineController_A02_B.s25_DC_Override = 1;
        BaseEngineController_A02_B.s25_TestComplete = TRUE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s30_LogicalOperator3 &&
                 BaseEngineController_A02_B.s13_RelationalOperator3) {
        /* Transition: '<S25>:11' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S25>:5' */
        BaseEngineController_A02_B.s25_DC_Override = 1;
        BaseEngineController_A02_B.s25_TestComplete = TRUE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime =
          BaseEngineController_A02_B.s62_Switch -
          BaseEngineController_A02_DWork.s25_TimerOld;
      } else {
        if (!BaseEngineController_A02_B.s30_LogicalOperator3) {
          /* Transition: '<S25>:15' */
          BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PassThrough;

          /* Entry 'PassThrough': '<S25>:1' */
          BaseEngineController_A02_B.s25_DC_Override = 0;
          BaseEngineController_A02_B.s25_TestComplete = FALSE;
          BaseEngineController_A02_B.s25_SetpointMode = 0;
          BaseEngineController_A02_B.s25_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_A02_IN_SpringTestComplete:
      /* During 'SpringTestComplete': '<S25>:5' */
      if (!BaseEngineController_A02_B.s30_LogicalOperator3) {
        /* Transition: '<S25>:14' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PassThrough;

        /* Entry 'PassThrough': '<S25>:1' */
        BaseEngineController_A02_B.s25_DC_Override = 0;
        BaseEngineController_A02_B.s25_TestComplete = FALSE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_SpringTestSetpoint:
      /* During 'SpringTestSetpoint': '<S25>:3' */
      if (!BaseEngineController_A02_B.s30_LogicalOperator3) {
        /* Transition: '<S25>:13' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PassThrough;

        /* Entry 'PassThrough': '<S25>:1' */
        BaseEngineController_A02_B.s25_DC_Override = 0;
        BaseEngineController_A02_B.s25_TestComplete = FALSE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s30_LogicalOperator3 &&
                 BaseEngineController_A02_B.s13_RelationalOperator2) {
        /* Transition: '<S25>:10' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTest;

        /* Entry 'SpringTest': '<S25>:4' */
        BaseEngineController_A02_B.s25_DC_Override = 1;
        BaseEngineController_A02_B.s25_TestComplete = FALSE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
        BaseEngineController_A02_DWork.s25_TimerOld =
          BaseEngineController_A02_B.s62_Switch;
      } else {
        if (BaseEngineController_A02_B.s62_Switch > 5.0) {
          /* Transition: '<S25>:18' */
          BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_ForcedShutdown;

          /* Entry 'ForcedShutdown': '<S25>:6' */
          BaseEngineController_A02_B.s25_DC_Override = 1;
          BaseEngineController_A02_B.s25_TestComplete = TRUE;
          BaseEngineController_A02_B.s25_SetpointMode = 0;
          BaseEngineController_A02_B.s25_TestTime = 0.0;
        }
      }
      break;

     default:
      /* Transition: '<S25>:7' */
      BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
        BaseEngineController_A02_IN_PassThrough;

      /* Entry 'PassThrough': '<S25>:1' */
      BaseEngineController_A02_B.s25_DC_Override = 0;
      BaseEngineController_A02_B.s25_TestComplete = FALSE;
      BaseEngineController_A02_B.s25_SetpointMode = 0;
      BaseEngineController_A02_B.s25_TestTime = 0.0;
      break;
    }

    /* End of Stateflow: '<S13>/ETC Test  Manager' */

    /* RelationalOperator: '<S31>/RelOp' incorporates:
     *  Constant: '<S31>/Constant'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s25_SetpointMode == 1);

    /* S-Function Block: <S55>/motohawk_delta_time */
    rtb_motohawk_delta_time_jj = 0.005;

    /* Switch: '<S55>/Switch' incorporates:
     *  Constant: '<S55>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S53>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S55>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S55>/motohawk_delta_time'
     *  Sum: '<S55>/Sum'
     */
    if ((ETCTuneEnable_DataStore())) {
      rtb_DesiredLambda_idx_0 = rtb_motohawk_delta_time_jj +
        ETC_Tune_Timer_DataStore();
    } else {
      rtb_DesiredLambda_idx_0 = 0.0;
    }

    /* End of Switch: '<S55>/Switch' */
    /* If: '<S56>/If' incorporates:
     *  Inport: '<S57>/In1'
     *  Inport: '<S58>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S56>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S56>/override_enable'
     */
    if ((ETCReq_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S56>/NewValue' incorporates:
       *  ActionPort: '<S57>/Action Port'
       */
      rtb_Merge_d = (ETCReq_new_DataStore());

      /* End of Outputs for SubSystem: '<S56>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S56>/OldValue' incorporates:
       *  ActionPort: '<S58>/Action Port'
       */
      rtb_Merge_d = BaseEngineController_A02_B.s120_Throttle;

      /* End of Outputs for SubSystem: '<S56>/OldValue' */
    }

    /* End of If: '<S56>/If' */

    /* S-Function Block: <S54>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s54_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_kb = ((real_T) delta) * 0.000001;
    }

    /* Outputs for Enabled SubSystem: '<S29>/PassThrough' incorporates:
     *  EnablePort: '<S51>/Enable'
     */
    if (BaseEngineController_A02_B.s25_SetpointMode == 1) {
      if (!BaseEngineController_A02_DWork.s29_PassThrough_MODE) {
        BaseEngineController_A02_DWork.s29_PassThrough_MODE = TRUE;
      }

      BaseEngineController_A02_B.s51_In1 = -5.0 +
        ETC_ShutdownLoAdaptError_DataStore();
    } else {
      if (BaseEngineController_A02_DWork.s29_PassThrough_MODE) {
        /* Disable for Outport: '<S51>/Out1' */
        BaseEngineController_A02_B.s51_In1 = 10.0;
        BaseEngineController_A02_DWork.s29_PassThrough_MODE = FALSE;
      }
    }

    /* End of Outputs for SubSystem: '<S29>/PassThrough' */

    /* UnitDelay: '<S54>/Unit Delay' incorporates:
     *  Constant: '<S29>/Constant2'
     *  Constant: '<S52>/Constant'
     *  Inport: '<S51>/In1'
     *  RelationalOperator: '<S52>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S29>/motohawk_data_read3'
     *  Sum: '<S29>/Add2'
     */
    rtb_Product1_e = BaseEngineController_A02_DWork.s54_UnitDelay_DSTATE;

    /* Product: '<S54>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S54>/motohawk_delta_time'
     *  Sum: '<S54>/Sum3'
     *  UnitDelay: '<S54>/Unit Delay'
     */
    rtb_Product5_d = 1.0 / rtb_motohawk_delta_time_kb *
      (BaseEngineController_A02_B.s51_In1 -
       BaseEngineController_A02_DWork.s54_UnitDelay_DSTATE);

    /* MinMax: '<S59>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration2'
     */
    rtb_Product5_d = (rtb_Product5_d >= (ETC_LoAdaptRateLimit_DataStore())) ||
      rtIsNaN((ETC_LoAdaptRateLimit_DataStore())) ? rtb_Product5_d :
      (ETC_LoAdaptRateLimit_DataStore());

    /* Sum: '<S54>/Sum2' incorporates:
     *  Constant: '<S29>/Constant7'
     *  MinMax: '<S59>/MinMax1'
     *  Product: '<S54>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S54>/motohawk_delta_time'
     */
    rtb_Sum2_d0 = (rtb_Product5_d <= 100.0 ? rtb_Product5_d : 100.0) *
      rtb_motohawk_delta_time_kb + rtb_Product1_e;

    /* MultiPortSwitch: '<S29>/Multiport Switch' incorporates:
     *  Constant: '<S29>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S29>/motohawk_data_read1'
     *  Sum: '<S29>/Add1'
     */
    switch (BaseEngineController_A02_B.s25_SetpointMode) {
     case 0:
      /* Switch: '<S53>/Switch' incorporates:
       *  Fcn: '<S53>/Sine Wave'
       *  S-Function (motohawk_sfun_calibration): '<S53>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S53>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S53>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S53>/motohawk_calibration4'
       *  Sum: '<S53>/Sum'
       */
      if ((ETCTuneEnable_DataStore())) {
        BaseEngineController_A02_B.s29_MultiportSwitch = (sin(6.2831853071795862
          * (ETCTuneFreq_DataStore()) * rtb_DesiredLambda_idx_0) *
          (ETCTuneAmp_DataStore()) + (ETCTuneAmp_DataStore())) +
          (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_A02_B.s29_MultiportSwitch = rtb_Merge_d;
      }

      /* End of Switch: '<S53>/Switch' */
      break;

     case 1:
      BaseEngineController_A02_B.s29_MultiportSwitch = rtb_Sum2_d0;
      break;

     default:
      BaseEngineController_A02_B.s29_MultiportSwitch = 10.0 +
        ETC_SpringTestHiThresh_DataStore();
      break;
    }

    /* End of MultiPortSwitch: '<S29>/Multiport Switch' */

    /* Sum: '<S29>/Add' */
    rtb_Sum1_gje = BaseEngineController_A02_B.s29_MultiportSwitch -
      BaseEngineController_A02_B.s329_Switch2;

    /* Logic: '<S23>/Logical Operator' incorporates:
     *  Constant: '<S23>/Constant1'
     *  RelationalOperator: '<S23>/Relational Operator4'
     *  S-Function (motohawk_sfun_data_read): '<S23>/motohawk_data_read1'
     *  Sum: '<S23>/Add1'
     */
    rtb_LogicalOperator_kg = ((rtb_LogicalOperator1_a && (rtb_Sum1_gje <= 5.0 +
      ETC_ShutdownLoAdaptError_DataStore())));

    /* S-Function (motohawk_sfun_data_write): '<S23>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: TPSAdaptLoRequest */
    {
      TPSAdaptLoRequest_DataStore() = rtb_LogicalOperator_kg;
    }

    /* Abs: '<S24>/Abs' */
    rtb_Product5_d = fabs(rtb_Sum1_gje);

    /* Logic: '<S24>/Logical Operator' incorporates:
     *  Constant: '<S32>/Constant'
     *  RelationalOperator: '<S24>/Relational Operator4'
     *  RelationalOperator: '<S32>/RelOp'
     *  S-Function (motohawk_sfun_calibration): '<S24>/motohawk_calibration1'
     */
    rtb_LogicalOperator_d = (((rtb_Product5_d > (ETC_StickingThresh_DataStore()))
      && (BaseEngineController_A02_B.s25_SetpointMode == 0)));

    /* S-Function (motohawk_sfun_fault_def): '<S24>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ETC_Sticking */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(16, rtb_LogicalOperator_d);
      UpdateFault(16);
    }

    /* Outputs for Triggered SubSystem: '<S13>/Reset TasksComplete To True' incorporates:
     *  TriggerPort: '<S28>/Trigger'
     */
    if (BaseEngineController_A02_B.s25_TestComplete &&
        (BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S28>/motohawk_data_write' incorporates:
       *  Constant: '<S28>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE =
      (uint8_T)(BaseEngineController_A02_B.s25_TestComplete ? (int32_T)POS_ZCSIG
                : (int32_T)ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S13>/Reset TasksComplete To True' */

    /* S-Function (motohawk_sfun_data_write): '<S13>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SpringTestTime */
    {
      SpringTestTime_DataStore() = BaseEngineController_A02_B.s25_TestTime;
    }

    /* RelationalOperator: '<S13>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration3'
     */
    rtb_RelationalOperator1_g = (((ETC_SpringTestTimerThresh_DataStore()) <
      BaseEngineController_A02_B.s25_TestTime));

    /* S-Function (motohawk_sfun_fault_def): '<S13>/motohawk_fault_def' */

    /* Set Fault Suspected Status: ETCSpringTest */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(14, rtb_RelationalOperator1_g);
      UpdateFault(14);
    }

    /* RelationalOperator: '<S26>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S26>/motohawk_data_read'
     */
    rtb_LogicalOperator1_a = (TimeSinceStall_DataStore() >
      (ETCShutdownTimerThresh_DataStore()));

    /* S-Function Block: <S26>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_d, NULL);
    }

    /* Logic: '<S26>/Logical Operator' incorporates:
     *  Constant: '<S26>/Constant1'
     *  RelationalOperator: '<S26>/Relational Operator'
     *  S-Function (motohawk_sfun_ain_read): '<S26>/motohawk_ain_read'
     */
    BaseEngineController_A02_B.s26_LogicalOperator = ((rtb_LogicalOperator1_a &&
      (rtb_motohawk_ain_read_d > 150)));

    /* Logic: '<S13>/Logical Operator' */
    rtb_LogicalOperator1_a = ((BaseEngineController_A02_B.s25_DC_Override != 0) ||
      BaseEngineController_A02_B.s26_LogicalOperator);

    /* S-Function Block: <S27>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_SetpointIn_DataStore()) =
        BaseEngineController_A02_B.s29_MultiportSwitch;
      (ETC_SetpointIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s29_MultiportSwitch,
         (ETC_SetpointIdxArr_DataStore()), 20, (ETC_SetpointIdx_DataStore()));
      rtb_motohawk_prelookup2_k = (ETC_SetpointIdx_DataStore());
    }

    /* S-Function Block: <S27>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_e = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_k, (real_T *) ((ETCDCOffsetTbl_DataStore())),
         20);
      (ETCDCOffset_DataStore()) = rtb_motohawk_interpolation_1d_e;
    }

    /* UnitDelay: '<S45>/Unit Delay' */
    rtb_Merge_d = BaseEngineController_A02_DWork.s45_UnitDelay_DSTATE;

    /* UnitDelay: '<S41>/Unit Delay' */
    rtb_Product1_e = BaseEngineController_A02_DWork.s41_UnitDelay_DSTATE;

    /* S-Function Block: <S42>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s42_motohawk_delta_time_DWORK1, NULL);
      rtb_Product5_d = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S42>/Product' incorporates:
     *  MinMax: '<S42>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S42>/motohawk_calibration'
     */
    rtb_Product5_d /= (rtb_Product5_d >= (ETCDamperTPSFilt_DataStore())) ||
      rtIsNaN((ETCDamperTPSFilt_DataStore())) ? rtb_Product5_d :
      (ETCDamperTPSFilt_DataStore());

    /* Sum: '<S43>/Sum1' incorporates:
     *  Constant: '<S43>/Constant'
     *  Product: '<S43>/Product'
     *  Product: '<S43>/Product1'
     *  Sum: '<S43>/Sum'
     *  UnitDelay: '<S43>/Unit Delay'
     */
    rtb_Merge_c5 = (1.0 - rtb_Product5_d) *
      BaseEngineController_A02_DWork.s43_UnitDelay_DSTATE +
      BaseEngineController_A02_B.s329_Switch2 * rtb_Product5_d;

    /* S-Function Block: <S41>/motohawk_delta_time */
    rtb_motohawk_delta_time_ce = 0.005;

    /* Product: '<S41>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S41>/motohawk_delta_time'
     *  Sum: '<S41>/Sum2'
     */
    BaseEngineController_A02_B.s41_Product = (rtb_Merge_c5 - rtb_Product1_e) /
      rtb_motohawk_delta_time_ce;

    /* Sum: '<S34>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration5'
     */
    rtb_Product5_d = (ETCDamperSwitchThresh_DataStore()) -
      (ETCDamperSwitchHyst_DataStore());

    /* RelationalOperator: '<S40>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration5'
     */
    rtb_AboveHiTarget = (rtb_Product5_d >= (ETCDamperSwitchThresh_DataStore()));

    /* RelationalOperator: '<S40>/LT1' */
    rtb_BelowLoTarget = (rtb_Product5_d <=
                         BaseEngineController_A02_B.s41_Product);

    /* CombinatorialLogic: '<S44>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_i[0] =
        BaseEngineController_A02_ConstP.pooled645[rowidx];
      rtb_CombinatorialLogic_i[1] =
        BaseEngineController_A02_ConstP.pooled645[rowidx + 4];
    }

    /* Switch: '<S44>/Switch1' incorporates:
     *  UnitDelay: '<S44>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_i[1]) {
      rtb_Switch_dz = rtb_CombinatorialLogic_i[0];
    } else {
      rtb_Switch_dz = BaseEngineController_A02_DWork.s44_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S44>/Switch1' */

    /* Switch: '<S40>/Switch2' incorporates:
     *  Logic: '<S40>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration5'
     */
    if (!rtb_Switch_dz) {
      BaseEngineController_A02_B.s40_Switch2 = (ETCDamperSwitchThresh_DataStore());
    } else {
      BaseEngineController_A02_B.s40_Switch2 =
        BaseEngineController_A02_B.s41_Product;
    }

    /* End of Switch: '<S40>/Switch2' */

    /* RelationalOperator: '<S34>/Relational Operator' */
    BaseEngineController_A02_B.s34_RelationalOperator =
      ((BaseEngineController_A02_B.s41_Product >
        BaseEngineController_A02_B.s40_Switch2));

    /* Switch: '<S37>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration8'
     */
    if (BaseEngineController_A02_B.s34_RelationalOperator) {
      rtb_Product5_d = (ETCDampGainUp_DataStore());
    } else {
      rtb_Product5_d = (ETCDampGainDown_DataStore());
    }

    /* End of Switch: '<S37>/Switch' */

    /* Product: '<S37>/Product3' */
    rtb_Merge_o4 = rtb_Product5_d * BaseEngineController_A02_B.s329_Switch2;

    /* S-Function Block: <S45>/motohawk_delta_time */
    rtb_motohawk_delta_time_oa = 0.005;

    /* Product: '<S45>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S45>/motohawk_delta_time'
     *  Sum: '<S45>/Sum2'
     */
    BaseEngineController_A02_B.s45_Product = (rtb_Merge_o4 - rtb_Merge_d) /
      rtb_motohawk_delta_time_oa;

    /* UnitDelay: '<S46>/Unit Delay' */
    rtb_Product1_e = BaseEngineController_A02_DWork.s46_UnitDelay_DSTATE;

    /* Sum: '<S37>/Sum2' */
    BaseEngineController_A02_B.s37_Sum2 =
      BaseEngineController_A02_B.s29_MultiportSwitch -
      BaseEngineController_A02_B.s329_Switch2;

    /* Product: '<S37>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration6'
     */
    rtb_Product5_d = BaseEngineController_A02_B.s37_Sum2 *
      (ETCErrorGain_DataStore());

    /* Product: '<S37>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration1'
     */
    rtb_Merge_d = (ETCDGain_DataStore()) * rtb_Product5_d;

    /* S-Function Block: <S46>/motohawk_delta_time */
    rtb_motohawk_delta_time_oaj = 0.005;

    /* Product: '<S46>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     *  Sum: '<S46>/Sum2'
     */
    BaseEngineController_A02_B.s46_Product = (rtb_Merge_d - rtb_Product1_e) /
      rtb_motohawk_delta_time_oaj;

    /* Sum: '<S27>/Add' */
    rtb_Add_k = BaseEngineController_A02_B.s29_MultiportSwitch -
      BaseEngineController_A02_B.s329_Switch2;

    /* S-Function Block: <S27>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_ErrorIn_DataStore()) = rtb_Add_k;
      (ETC_ErrorIdx_DataStore()) = TablePrelookup_real_T(rtb_Add_k,
        (ETC_ErrorIdxArr_DataStore()), 10, (ETC_ErrorIdx_DataStore()));
      rtb_motohawk_prelookup_de = (ETC_ErrorIdx_DataStore());
    }

    /* S-Function Block: <S36>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_m = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_de, (real_T *) ((ETC_PGainMultTbl_DataStore())),
         10);
      (ETC_PGainMult_DataStore()) = rtb_motohawk_interpolation_1d_m;
    }

    /* Product: '<S37>/Product2' incorporates:
     *  Product: '<S36>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S36>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S27>/motohawk_prelookup'
     *  Sum: '<S27>/Add'
     */
    BaseEngineController_A02_B.s37_Product2 = rtb_motohawk_interpolation_1d_m *
      (ETCPGain_DataStore()) * rtb_Product5_d;

    /* Switch: '<S47>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S13>/motohawk_data_read'
     *  UnitDelay: '<S47>/Unit Delay'
     */
    if (ETCStallStateShutdown_DataStore()) {
      BaseEngineController_A02_B.s47_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_B.s47_Switch1 =
        BaseEngineController_A02_DWork.s47_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S47>/Switch1' */

    /* Sum: '<S27>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S27>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S27>/motohawk_prelookup2'
     *  Sum: '<S37>/Sum'
     */
    rtb_Product1_e = (((BaseEngineController_A02_B.s46_Product -
                        BaseEngineController_A02_B.s45_Product) +
                       BaseEngineController_A02_B.s37_Product2) +
                      BaseEngineController_A02_B.s47_Switch1) +
      rtb_motohawk_interpolation_1d_e;

    /* MinMax: '<S50>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration'
     */
    y = (rtb_Product1_e >= (ETCLwrLim_DataStore())) || rtIsNaN
      ((ETCLwrLim_DataStore())) ? rtb_Product1_e : (ETCLwrLim_DataStore());

    /* MinMax: '<S50>/MinMax1' incorporates:
     *  MinMax: '<S50>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s50_MinMax1 = (y <= (ETCUprLim_DataStore())) ||
      rtIsNaN((ETCUprLim_DataStore())) ? y : (ETCUprLim_DataStore());

    /* S-Function Block: <S35>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_de, (real_T *) ((ETC_IGainMultTbl_DataStore())),
         10);
      (ETC_IGainMult_DataStore()) = rtb_motohawk_interpolation_1d_c;
    }

    /* Product: '<S35>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S35>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S27>/motohawk_prelookup'
     *  Sum: '<S27>/Add'
     */
    rtb_Product1_e = rtb_motohawk_interpolation_1d_c * (ETCIGain_DataStore());

    /* Product: '<S37>/Product1' */
    rtb_Product1_e *= rtb_Product5_d;

    /* S-Function Block: <S47>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s47_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_pc = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S47>/Sum' incorporates:
     *  Product: '<S47>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S47>/motohawk_delta_time'
     */
    rtb_Product1_e = rtb_Product1_e * rtb_motohawk_delta_time_pc +
      BaseEngineController_A02_B.s47_Switch1;

    /* MinMax: '<S49>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration3'
     */
    y = (rtb_Product1_e >= (ETCIMin_DataStore())) || rtIsNaN((ETCIMin_DataStore()))
      ? rtb_Product1_e : (ETCIMin_DataStore());

    /* MinMax: '<S49>/MinMax1' incorporates:
     *  MinMax: '<S49>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration4'
     */
    minV = (y <= (ETCIMax_DataStore())) || rtIsNaN((ETCIMax_DataStore())) ? y :
      (ETCIMax_DataStore());

    /* Saturate: '<S55>/Saturation' */
    rtb_Saturation_og = rtb_DesiredLambda_idx_0 >= 16000.0 ? 16000.0 :
      rtb_DesiredLambda_idx_0 <= 0.0 ? 0.0 : rtb_DesiredLambda_idx_0;

    /* S-Function (motohawk_sfun_data_write): '<S55>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETC_Tune_Timer */
    {
      ETC_Tune_Timer_DataStore() = rtb_Saturation_og;
    }

    /* Saturate: '<S62>/Saturation' */
    rtb_Saturation_na = BaseEngineController_A02_B.s62_Switch >= 16000.0 ?
      16000.0 : BaseEngineController_A02_B.s62_Switch <= 0.0 ? 0.0 :
      BaseEngineController_A02_B.s62_Switch;

    /* S-Function (motohawk_sfun_data_write): '<S62>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETCShutDownTimer */
    {
      ETCShutDownTimer_DataStore() = rtb_Saturation_na;
    }

    /* S-Function (motohawk_sfun_data_read): '<S30>/motohawk_data_read1' */
    rtb_motohawk_data_read1_ir = MPRD_DataStore();

    /* Outputs for Triggered SubSystem: '<S30>/Reset TasksComplete To False' incorporates:
     *  TriggerPort: '<S60>/Trigger'
     */
    if (rtb_motohawk_data_read1_ir &&
        (BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S60>/motohawk_data_write' incorporates:
       *  Constant: '<S60>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = FALSE;
      }
    }

    BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE =
      (uint8_T)(rtb_motohawk_data_read1_ir ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S30>/Reset TasksComplete To False' */

    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/Constant2'
     */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s13_Switch = 0.0;
    } else {
      BaseEngineController_A02_B.s13_Switch =
        BaseEngineController_A02_B.s50_MinMax1;
    }

    /* End of Switch: '<S13>/Switch' */

    /* Update for UnitDelay: '<S13>/Unit Delay' */
    BaseEngineController_A02_DWork.s13_UnitDelay_DSTATE = rtb_Sum1_gje;

    /* Update for UnitDelay: '<S54>/Unit Delay' */
    BaseEngineController_A02_DWork.s54_UnitDelay_DSTATE = rtb_Sum2_d0;

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    BaseEngineController_A02_DWork.s45_UnitDelay_DSTATE = rtb_Merge_o4;

    /* Update for UnitDelay: '<S41>/Unit Delay' */
    BaseEngineController_A02_DWork.s41_UnitDelay_DSTATE = rtb_Merge_c5;

    /* Update for UnitDelay: '<S43>/Unit Delay' */
    BaseEngineController_A02_DWork.s43_UnitDelay_DSTATE = rtb_Merge_c5;

    /* Update for UnitDelay: '<S44>/Unit Delay' */
    BaseEngineController_A02_DWork.s44_UnitDelay_DSTATE = rtb_Switch_dz;

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    BaseEngineController_A02_DWork.s46_UnitDelay_DSTATE = rtb_Merge_d;

    /* Update for UnitDelay: '<S47>/Unit Delay' incorporates:
     *  MinMax: '<S49>/MinMax1'
     */
    BaseEngineController_A02_DWork.s47_UnitDelay_DSTATE = minV;
  } else {
    if (BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE) {
      /* Disable for Enabled SubSystem: '<S29>/PassThrough' */
      /* Disable for Outport: '<S51>/Out1' */
      BaseEngineController_A02_B.s51_In1 = 10.0;
      BaseEngineController_A02_DWork.s29_PassThrough_MODE = FALSE;

      /* End of Disable for SubSystem: '<S29>/PassThrough' */
      BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE =
        FALSE;
    }
  }

  /* End of RelationalOperator: '<S11>/RelOp' */
  /* End of Outputs for SubSystem: '<S6>/Electronic Throttle Controller' */
  /* If: '<S774>/If' incorporates:
   *  Inport: '<S775>/In1'
   *  Inport: '<S776>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S774>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S774>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S774>/NewValue' incorporates:
     *  ActionPort: '<S775>/Action Port'
     */
    rtb_Product1_e = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S774>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S774>/OldValue' incorporates:
     *  ActionPort: '<S776>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s13_Switch;

    /* End of Outputs for SubSystem: '<S774>/OldValue' */
  }

  /* End of If: '<S774>/If' */

  /* Switch: '<S678>/Switch' incorporates:
   *  Constant: '<S678>/Constant2'
   *  Product: '<S678>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S678>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S678>/motohawk_interpolation_1d'
   *  Sum: '<S678>/Sum'
   */
  if (rtb_RelationalOperator5_p) {
    rtb_Product1_e = 0.0;
  } else {
    /* S-Function Block: <S678>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_l = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s318_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_l;
    }

    rtb_Product1_e = rtb_Product1_e * rtb_motohawk_interpolation_1d_l +
      (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S678>/Switch' */

  /* Saturate: '<S678>/Saturation' */
  BaseEngineController_A02_B.s678_ETC = rtb_Product1_e >= 100.0 ? 100.0 :
    rtb_Product1_e <= -100.0 ? -100.0 : rtb_Product1_e;

  /* Abs: '<S678>/Abs' */
  rtb_Product1_e = fabs(BaseEngineController_A02_B.s678_ETC);

  /* RelationalOperator: '<S678>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S678>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_a = (rtb_Product1_e > (ETC_OC_MIN_DataStore()));

  /* S-Function (motohawk_sfun_pwm): '<S678>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs(NULL,
    &BaseEngineController_A02_B.s678_motohawk_pwm1);

  /* Abs: '<S678>/Abs1' */
  rtb_DataTypeConversion2_l = (int16_T)
    (BaseEngineController_A02_B.s678_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_A02_B.s678_motohawk_pwm1 :
     BaseEngineController_A02_B.s678_motohawk_pwm1);

  /* RelationalOperator: '<S678>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S678>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_p = ((real_T)rtb_DataTypeConversion2_l <
    (ETC_I_MIN_DataStore()));

  /* Switch: '<S773>/Switch' incorporates:
   *  Constant: '<S773>/Constant'
   *  Logic: '<S678>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S773>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S773>/motohawk_delta_time'
   *  Sum: '<S773>/Sum'
   */
  if (rtb_LogicalOperator10 && rtb_LogicalOperator1_a &&
      rtb_RelationalOperator5_p) {
    rtb_Product1_e = rtb_motohawk_delta_time_l + ETCOpenFaultTimer_DataStore();
  } else {
    rtb_Product1_e = 0.0;
  }

  /* End of Switch: '<S773>/Switch' */

  /* RelationalOperator: '<S678>/Relational Operator5' incorporates:
   *  Constant: '<S678>/Constant'
   */
  rtb_RelationalOperator5 = ((rtb_Product1_e > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S678>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator5);
    UpdateFault(15);
  }

  /* Gain: '<S678>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_is = 40.95 * BaseEngineController_A02_B.s678_ETC;

  /* DataTypeConversion: '<S678>/Data Type Conversion3' incorporates:
   *  Gain: '<S678>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S678>/motohawk_calibration4'
   */
  rtb_Sum2_d0 = 100.0 * (ETC_Frequency_DataStore());
  if (rtb_Sum2_d0 < 4.294967296E+9) {
    if (rtb_Sum2_d0 >= 0.0) {
      rtb_DataTypeConversion3_n = (uint32_T)rtb_Sum2_d0;
    } else {
      rtb_DataTypeConversion3_n = 0U;
    }
  } else {
    rtb_DataTypeConversion3_n = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S678>/Data Type Conversion3' */

  /* DataTypeConversion: '<S678>/Data Type Conversion4' */
  if (rtb_Abs_is < 32768.0) {
    if (rtb_Abs_is >= -32768.0) {
      rtb_DataTypeConversion4_k = (int16_T)rtb_Abs_is;
    } else {
      rtb_DataTypeConversion4_k = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_k = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S678>/Data Type Conversion4' */

  /* Saturate: '<S773>/Saturation' */
  rtb_Saturation_h = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <= 0.0
    ? 0.0 : rtb_Product1_e;

  /* S-Function (motohawk_sfun_data_write): '<S773>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_h;
  }

  /* If: '<S781>/If' incorporates:
   *  Inport: '<S791>/In1'
   *  Inport: '<S792>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S781>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S781>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S781>/NewValue' incorporates:
     *  ActionPort: '<S791>/Action Port'
     */
    rtb_Product1_e = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S781>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S781>/OldValue' incorporates:
     *  ActionPort: '<S792>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s120_SOI;

    /* End of Outputs for SubSystem: '<S781>/OldValue' */
  }

  /* End of If: '<S781>/If' */

  /* Gain: '<S679>/Gain2' */
  rtb_Abs_is = 16.0 * rtb_Product1_e;

  /* DataTypeConversion: '<S679>/Data Type Conversion2' */
  if (rtb_Abs_is < 32768.0) {
    if (rtb_Abs_is >= -32768.0) {
      rtb_DataTypeConversion2_l = (int16_T)rtb_Abs_is;
    } else {
      rtb_DataTypeConversion2_l = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_l = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S679>/Data Type Conversion2' */
  /* If: '<S73>/If' incorporates:
   *  Inport: '<S90>/In1'
   *  Inport: '<S91>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S73>/override_enable'
   *  UnitDelay: '<S73>/Unit Delay'
   */
  if ((Fuel_Cyl8_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S73>/NewValue' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    rtb_Merge_hk = BaseEngineController_A02_DWork.s73_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S73>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S73>/OldValue' incorporates:
     *  ActionPort: '<S91>/Action Port'
     */
    rtb_Merge_hk = BaseEngineController_A02_B.s120_FPC[7];

    /* End of Outputs for SubSystem: '<S73>/OldValue' */
  }

  /* End of If: '<S73>/If' */

  /* Sum: '<S73>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S73>/offset'
   */
  rtb_Product1_e = rtb_Merge_hk + (Fuel_Cyl8_offset_DataStore());

  /* If: '<S72>/If' incorporates:
   *  Inport: '<S88>/In1'
   *  Inport: '<S89>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S72>/override_enable'
   *  UnitDelay: '<S72>/Unit Delay'
   */
  if ((Fuel_Cyl7_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S72>/NewValue' incorporates:
     *  ActionPort: '<S88>/Action Port'
     */
    rtb_Merge_mj = BaseEngineController_A02_DWork.s72_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S72>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S72>/OldValue' incorporates:
     *  ActionPort: '<S89>/Action Port'
     */
    rtb_Merge_mj = BaseEngineController_A02_B.s120_FPC[6];

    /* End of Outputs for SubSystem: '<S72>/OldValue' */
  }

  /* End of If: '<S72>/If' */

  /* Sum: '<S72>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S72>/offset'
   */
  rtb_Merge_d = rtb_Merge_mj + (Fuel_Cyl7_offset_DataStore());

  /* If: '<S70>/If' incorporates:
   *  Inport: '<S84>/In1'
   *  Inport: '<S85>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S70>/override_enable'
   *  UnitDelay: '<S70>/Unit Delay'
   */
  if ((Fuel_Cyl6_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S70>/NewValue' incorporates:
     *  ActionPort: '<S84>/Action Port'
     */
    rtb_Merge_n2 = BaseEngineController_A02_DWork.s70_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S70>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S70>/OldValue' incorporates:
     *  ActionPort: '<S85>/Action Port'
     */
    rtb_Merge_n2 = BaseEngineController_A02_B.s120_FPC[5];

    /* End of Outputs for SubSystem: '<S70>/OldValue' */
  }

  /* End of If: '<S70>/If' */

  /* Sum: '<S70>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S70>/offset'
   */
  rtb_Merge_o4 = rtb_Merge_n2 + (Fuel_Cyl6_offset_DataStore());

  /* If: '<S69>/If' incorporates:
   *  Inport: '<S82>/In1'
   *  Inport: '<S83>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S69>/override_enable'
   *  UnitDelay: '<S69>/Unit Delay'
   */
  if ((Fuel_Cyl5_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S69>/NewValue' incorporates:
     *  ActionPort: '<S82>/Action Port'
     */
    rtb_Merge_fc = BaseEngineController_A02_DWork.s69_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S69>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S69>/OldValue' incorporates:
     *  ActionPort: '<S83>/Action Port'
     */
    rtb_Merge_fc = BaseEngineController_A02_B.s120_FPC[4];

    /* End of Outputs for SubSystem: '<S69>/OldValue' */
  }

  /* End of If: '<S69>/If' */

  /* Sum: '<S69>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S69>/offset'
   */
  rtb_Sum1_gje = rtb_Merge_fc + (Fuel_Cyl5_offset_DataStore());

  /* If: '<S68>/If' incorporates:
   *  Inport: '<S80>/In1'
   *  Inport: '<S81>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S68>/override_enable'
   *  UnitDelay: '<S68>/Unit Delay'
   */
  if ((Fuel_Cyl4_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S68>/NewValue' incorporates:
     *  ActionPort: '<S80>/Action Port'
     */
    rtb_Merge_p2 = BaseEngineController_A02_DWork.s68_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S68>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S68>/OldValue' incorporates:
     *  ActionPort: '<S81>/Action Port'
     */
    rtb_Merge_p2 = BaseEngineController_A02_B.s120_FPC[3];

    /* End of Outputs for SubSystem: '<S68>/OldValue' */
  }

  /* End of If: '<S68>/If' */

  /* Sum: '<S68>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S68>/offset'
   */
  rtb_Merge_c5 = rtb_Merge_p2 + (Fuel_Cyl4_offset_DataStore());

  /* If: '<S67>/If' incorporates:
   *  Inport: '<S78>/In1'
   *  Inport: '<S79>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S67>/override_enable'
   *  UnitDelay: '<S67>/Unit Delay'
   */
  if ((Fuel_Cyl3_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S67>/NewValue' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    rtb_Merge_b0 = BaseEngineController_A02_DWork.s67_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S67>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S67>/OldValue' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    rtb_Merge_b0 = BaseEngineController_A02_B.s120_FPC[2];

    /* End of Outputs for SubSystem: '<S67>/OldValue' */
  }

  /* End of If: '<S67>/If' */

  /* Sum: '<S67>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S67>/offset'
   */
  rtb_Sum2_d0 = rtb_Merge_b0 + (Fuel_Cyl3_offset_DataStore());

  /* If: '<S66>/If' incorporates:
   *  Inport: '<S76>/In1'
   *  Inport: '<S77>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S66>/override_enable'
   *  UnitDelay: '<S66>/Unit Delay'
   */
  if ((Fuel_Cyl2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S66>/NewValue' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    rtb_Merge_f3 = BaseEngineController_A02_DWork.s66_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S66>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S66>/OldValue' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    rtb_Merge_f3 = BaseEngineController_A02_B.s120_FPC[1];

    /* End of Outputs for SubSystem: '<S66>/OldValue' */
  }

  /* End of If: '<S66>/If' */

  /* Sum: '<S66>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S66>/offset'
   */
  rtb_DesiredLambda_idx_0 = rtb_Merge_f3 + (Fuel_Cyl2_offset_DataStore());

  /* If: '<S65>/If' incorporates:
   *  Inport: '<S74>/In1'
   *  Inport: '<S75>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S65>/override_enable'
   *  UnitDelay: '<S65>/Unit Delay'
   */
  if ((Fuel_Cyl1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S65>/NewValue' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    rtb_Merge_iu = BaseEngineController_A02_DWork.s65_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S65>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S65>/OldValue' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    rtb_Merge_iu = BaseEngineController_A02_B.s120_FPC[0];

    /* End of Outputs for SubSystem: '<S65>/OldValue' */
  }

  /* End of If: '<S65>/If' */

  /* If: '<S71>/If' incorporates:
   *  Inport: '<S86>/In1'
   *  Inport: '<S87>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S65>/offset'
   *  S-Function (motohawk_sfun_calibration): '<S71>/override_enable'
   *  Sum: '<S65>/Sum'
   *  UnitDelay: '<S71>/Unit Delay'
   */
  if ((Fuel_Global_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S71>/NewValue' incorporates:
     *  ActionPort: '<S86>/Action Port'
     */
    memcpy((void *)&rtb_Merge_pj[0], (void *)
           BaseEngineController_A02_DWork.s71_UnitDelay_DSTATE, sizeof(real_T) <<
           3U);

    /* End of Outputs for SubSystem: '<S71>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S71>/OldValue' incorporates:
     *  ActionPort: '<S87>/Action Port'
     */
    rtb_Merge_pj[0] = rtb_Merge_iu + (Fuel_Cyl1_offset_DataStore());
    rtb_Merge_pj[1] = rtb_DesiredLambda_idx_0;
    rtb_Merge_pj[2] = rtb_Sum2_d0;
    rtb_Merge_pj[3] = rtb_Merge_c5;
    rtb_Merge_pj[4] = rtb_Sum1_gje;
    rtb_Merge_pj[5] = rtb_Merge_o4;
    rtb_Merge_pj[6] = rtb_Merge_d;
    rtb_Merge_pj[7] = rtb_Product1_e;

    /* End of Outputs for SubSystem: '<S71>/OldValue' */
  }

  /* End of If: '<S71>/If' */

  /* Sum: '<S71>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S71>/offset'
   */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s71_Sum[i] = rtb_Merge_pj[i] +
      (Fuel_Global_offset_DataStore());
  }

  /* End of Sum: '<S71>/Sum' */
  /* Product: '<S14>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/Injector Gain [ms//mg]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_e[i] = BaseEngineController_A02_B.s71_Sum[i] *
      (InjGain_DataStore());
  }

  /* End of Product: '<S14>/Product2' */
  /* Sum: '<S14>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/Injector Offset [ms]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_e[i] += (InjOffset_DataStore());
  }

  /* End of Sum: '<S14>/Sum' */
  /* Fcn: '<S63>/const ref to atm' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/Regulated Gauge Fuel Pressure [kPa]'
   */
  BaseEngineController_A02_B.s63_constreftoatm = ((GaugeFuelPress_DataStore()) +
    BaseEngineController_A02_B.s283_Sum) - BaseEngineController_A02_B.s563_Merge;

  /* S-Function Block: <S63>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (InjDeltaPress09In_DataStore()) =
      BaseEngineController_A02_B.s63_constreftoatm;
    (InjDeltaPress09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s63_constreftoatm,
       (InjDeltaPress09IdxArr_DataStore()), 9, (InjDeltaPress09Idx_DataStore()));
    rtb_motohawk_prelookup1_n3 = (InjDeltaPress09Idx_DataStore());
  }

  /* S-Function Block: <S14>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d3_k = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n3, (real_T *) ((InjdPCompTbl_DataStore())), 9);
    (InjdPComp_DataStore()) = rtb_motohawk_interpolation_1d3_k;
  }

  /* Product: '<S14>/Product3' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S14>/motohawk_interpolation_1d3'
   *  S-Function (motohawk_sfun_prelookup): '<S63>/motohawk_prelookup1'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_e[i] = BaseEngineController_A02_B.s120_FuelMult *
      rtb_Product2_e[i] * rtb_motohawk_interpolation_1d3_k;
  }

  /* End of Product: '<S14>/Product3' */

  /* Saturate: '<S14>/Saturation' */
  y = BaseEngineController_A02_B.s520_Sum1 >= 0.01 ?
    BaseEngineController_A02_B.s520_Sum1 : 0.01;

  /* S-Function Block: <S14>/motohawk_interpolation_1d4 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d4_ii = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n3, (real_T *) ((InjTurnOffTbl_DataStore())), 9);
    (InjTurnOff_DataStore()) = rtb_motohawk_interpolation_1d4_ii;
  }

  /* S-Function Block: <S14>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_k = TableInterpolation1D_real_T
      (BaseEngineController_A02_B.s318_motohawk_prelookup, (real_T *)
       ((InjTurnOnTbl_DataStore())), 9);
    (InjTurnOn_DataStore()) = rtb_motohawk_interpolation_1d1_k;
  }

  /* Sum: '<S14>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S14>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S14>/motohawk_interpolation_1d4'
   *  S-Function (motohawk_sfun_prelookup): '<S63>/motohawk_prelookup1'
   */
  BaseEngineController_A02_B.s14_Sum2 = rtb_motohawk_interpolation_1d1_k -
    rtb_motohawk_interpolation_1d4_ii;

  /* Sum: '<S14>/Sum1' incorporates:
   *  Constant: '<S14>/Constant'
   *  Product: '<S14>/Divide'
   *  Saturate: '<S14>/Saturation'
   */
  BaseEngineController_A02_B.s14_Sum1 = 120000.0 / y -
    BaseEngineController_A02_B.s14_Sum2;

  /* MinMax: '<S14>/MinMax' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s14_MinMax[i] = (rtb_Product2_e[i] <=
      BaseEngineController_A02_B.s14_Sum1) || rtIsNaN
      (BaseEngineController_A02_B.s14_Sum1) ? rtb_Product2_e[i] :
      BaseEngineController_A02_B.s14_Sum1;
  }

  /* End of MinMax: '<S14>/MinMax' */
  /* If: '<S782>/If' incorporates:
   *  Inport: '<S793>/In1'
   *  Inport: '<S794>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S782>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S782>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S782>/NewValue' incorporates:
     *  ActionPort: '<S793>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product2_e[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S782>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S782>/OldValue' incorporates:
     *  ActionPort: '<S794>/Action Port'
     */
    memcpy((void *)&rtb_Product2_e[0], (void *)
           (&BaseEngineController_A02_B.s14_MinMax[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S782>/OldValue' */
  }

  /* End of If: '<S782>/If' */

  /* DataTypeConversion: '<S679>/Data Type Conversion3' incorporates:
   *  Gain: '<S679>/Gain3'
   */
  for (i = 0; i < 8; i++) {
    rtb_Sum2_d0 = 1000.0 * rtb_Product2_e[i];
    if (rtb_Sum2_d0 < 4.294967296E+9) {
      if (rtb_Sum2_d0 >= 0.0) {
        rtb_Switch_a = (uint32_T)rtb_Sum2_d0;
      } else {
        rtb_Switch_a = 0U;
      }
    } else {
      rtb_Switch_a = MAX_uint32_T;
    }

    rtb_InjectorSequence_o2[i] = rtb_Switch_a;
  }

  /* End of DataTypeConversion: '<S679>/Data Type Conversion3' */
  /* Gain: '<S679>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S679>/motohawk_calibration9'
   */
  rtb_Abs_is = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S679>/Data Type Conversion6' */
  if (rtb_Abs_is < 4.294967296E+9) {
    if (rtb_Abs_is >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_is;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S679>/Data Type Conversion6' */
  /* If: '<S779>/If' incorporates:
   *  Inport: '<S787>/In1'
   *  Inport: '<S788>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S779>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S779>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S779>/NewValue' incorporates:
     *  ActionPort: '<S787>/Action Port'
     */
    rtb_Product1_e = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S779>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S779>/OldValue' incorporates:
     *  ActionPort: '<S788>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s14_Sum2;

    /* End of Outputs for SubSystem: '<S779>/OldValue' */
  }

  /* End of If: '<S779>/If' */

  /* Gain: '<S679>/Gain1' */
  rtb_Abs_is = 1000.0 * rtb_Product1_e;

  /* DataTypeConversion: '<S679>/Data Type Conversion1' */
  if (rtb_Abs_is < 4.294967296E+9) {
    if (rtb_Abs_is >= 0.0) {
      rtb_Sum_l0 = (uint32_T)rtb_Abs_is;
    } else {
      rtb_Sum_l0 = 0U;
    }
  } else {
    rtb_Sum_l0 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S679>/Data Type Conversion1' */
  /* If: '<S780>/If' incorporates:
   *  Inport: '<S789>/In1'
   *  Inport: '<S790>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S780>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S780>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S780>/NewValue' incorporates:
     *  ActionPort: '<S789>/Action Port'
     */
    rtb_Product1_e = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S780>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S780>/OldValue' incorporates:
     *  ActionPort: '<S790>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s120_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S780>/OldValue' */
  }

  /* End of If: '<S780>/If' */

  /* Gain: '<S679>/Gain6' */
  rtb_Abs_is = 16.0 * rtb_Product1_e;

  /* DataTypeConversion: '<S679>/Data Type Conversion7' */
  if (rtb_Abs_is < 32768.0) {
    if (rtb_Abs_is >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_is;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S679>/Data Type Conversion7' */
  /* Gain: '<S679>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S679>/motohawk_calibration6'
   */
  rtb_Abs_is = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S679>/Data Type Conversion8' */
  if (rtb_Abs_is < 4.294967296E+9) {
    if (rtb_Abs_is >= 0.0) {
      rtb_UnitDelay_aka = (uint32_T)rtb_Abs_is;
    } else {
      rtb_UnitDelay_aka = 0U;
    }
  } else {
    rtb_UnitDelay_aka = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S679>/Data Type Conversion8' */
  /* Outputs for Enabled SubSystem: '<S15>/PassThrough5' incorporates:
   *  EnablePort: '<S98>/Enable'
   */
  /* Logic: '<S15>/Logical Operator1' incorporates:
   *  Constant: '<S15>/Constant2'
   *  Constant: '<S15>/Constant3'
   *  RelationalOperator: '<S15>/Relational Operator2'
   *  RelationalOperator: '<S15>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S15>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 1) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!BaseEngineController_A02_DWork.s15_PassThrough5_MODE) {
      BaseEngineController_A02_DWork.s15_PassThrough5_MODE = TRUE;
    }

    /* DataTypeConversion: '<S98>/Data Type Conversion1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s98_DataTypeConversion1[i] =
        ((BaseEngineController_A02_B.s109_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S98>/Data Type Conversion1' */
  } else {
    if (BaseEngineController_A02_DWork.s15_PassThrough5_MODE) {
      /* Disable for Outport: '<S98>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s98_DataTypeConversion1[i] = FALSE;
      }

      /* End of Outport: '<S98>/Out1' */
      BaseEngineController_A02_DWork.s15_PassThrough5_MODE = FALSE;
    }
  }

  /* End of Logic: '<S15>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S15>/PassThrough5' */

  /* Logic: '<S15>/Logical Operator3' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_j[i] =
      !BaseEngineController_A02_B.s98_DataTypeConversion1[i];
  }

  /* End of Logic: '<S15>/Logical Operator3' */

  /* Outputs for Atomic SubSystem: '<S679>/Injector Enable Manager' */

  /* S-Function Block: <S786>/motohawk_delta_time */
  rtb_motohawk_delta_time_jd = 0.005;

  /* Switch: '<S786>/Switch' incorporates:
   *  Constant: '<S786>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S786>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S786>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S778>/motohawk_fault_action'
   *  Sum: '<S786>/Sum'
   */
  if (GetFaultActionStatus(1)) {
    rtb_Product1_e = rtb_motohawk_delta_time_jd +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_Product1_e = 0.0;
  }

  /* End of Switch: '<S786>/Switch' */
  /* RelationalOperator: '<S778>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration1'
   */
  rtb_LogicalOperator_bt = (rtb_Product1_e > (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S778>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_bt;
  }

  /* RelationalOperator: '<S778>/Relational Operator1' incorporates:
   *  Gain: '<S778>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_m3 = ((rtb_Product1_e > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S778>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_m3;
  }

  /* RelationalOperator: '<S778>/Relational Operator2' incorporates:
   *  Constant: '<S778>/Constant'
   */
  rtb_RelationalOperator2_jp = ((rtb_Product1_e > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S778>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_jp;
  }

  /* Logic: '<S778>/Logical Operator' */
  rtb_LogicalOperator_bt = !rtb_LogicalOperator_bt;

  /* Logic: '<S778>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S778>/motohawk_data_read'
   */
  rtb_LogicalOperator1_a = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S778>/motohawk_data_read1' */
  rtb_motohawk_data_read1_h3 = ECUP_Enabled_DataStore();

  /* Logic: '<S778>/Logical Operator4' incorporates:
   *  Constant: '<S785>/Constant'
   *  RelationalOperator: '<S785>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S778>/motohawk_data_read2'
   */
  rtb_Switch_dz = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S778>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_iht[0] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Switch_dz &&
    (Injector1Enable_DataStore()));
  rtb_LogicalOperator1_iht[1] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Switch_dz &&
    (Injector2Enable_DataStore()));
  rtb_LogicalOperator1_iht[2] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Switch_dz &&
    (Injector3Enable_DataStore()));
  rtb_LogicalOperator1_iht[3] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Switch_dz &&
    (Injector4Enable_DataStore()));
  rtb_LogicalOperator1_iht[4] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Switch_dz &&
    (Injector5Enable_DataStore()));
  rtb_LogicalOperator1_iht[5] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Switch_dz &&
    (Injector6Enable_DataStore()));
  rtb_LogicalOperator1_iht[6] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Switch_dz &&
    (Injector7Enable_DataStore()));
  rtb_LogicalOperator1_iht[7] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Switch_dz &&
    (Injector8Enable_DataStore()));

  /* Saturate: '<S786>/Saturation' */
  rtb_Saturation_km = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
    0.0 ? 0.0 : rtb_Product1_e;

  /* S-Function (motohawk_sfun_data_write): '<S786>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_km;
  }

  /* End of Outputs for SubSystem: '<S679>/Injector Enable Manager' */

  /* If: '<S783>/If' incorporates:
   *  Inport: '<S795>/In1'
   *  Inport: '<S796>/In1'
   *  Logic: '<S679>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S783>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S783>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S783>/NewValue' incorporates:
     *  ActionPort: '<S795>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s783_Merge[i] = (InjEnable_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S783>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S783>/OldValue' incorporates:
     *  ActionPort: '<S796>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s783_Merge[i] = ((rtb_LogicalOperator3_j[i] &&
        rtb_LogicalOperator1_iht[i]));
    }

    /* End of Outputs for SubSystem: '<S783>/OldValue' */
  }

  /* End of If: '<S783>/If' */

  /* S-Function Block: <S679>/Injector Sequence */
  {
    extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_38[8];
    uint32_T makeup_duration;
    int16_T makeup_angle;
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_38[8];
    extern int32_T InjectorSeqDiagLastPin_38;
    extern uint8_T motohawk_encoder_status;
    uint32_T elec_duration;
    S_SeqOutPulseTiming TimingObj;
    E_SeqOutCond seq_enable;
    NativeError_S sErrorResult;
    int32_T i;
    int32_T index;
    int32_T j;
    boolean_T enable, pulse_scheduling_allowed;
    S_SeqOutAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_SEQ_TIMING ;
    DynamicObj.TimingObj.eCtrlMode = DURATION_CTRL;
    index = 0;
    if ((INJ_SequenceType_DataStore()) == 1) {
      for (j=0; j < (EncoderNumCylinders_DataStore()); j++) {
        int32_T next_index = 0;
        int16_T min_angle_diff = 32767;
        int16_T angle_diff;
        int16_T current_angle;
        current_angle = 720*16 - GetEncoderEngAngle();
        for (index=0; index < (EncoderNumCylinders_DataStore()); index++) {
          int16_T cylinder_angle;
          int32_T cyl = (EncoderTDCOrder_DataStore())[index];
          cylinder_angle = (EncoderTDCAngles_DataStore())[cyl] -
            rtb_DataTypeConversion2_l;
          angle_diff = current_angle - cylinder_angle;
          while (angle_diff < 0) {
            angle_diff += 720*16;
          }

          while (angle_diff >= 720*16) {
            angle_diff -= 720*16;
          }

          if (angle_diff < min_angle_diff) {
            min_angle_diff = angle_diff;
            next_index = index;
          }
        }

        index = next_index;

        {
          extern real_T NextInjectorAngle;
          NextInjectorAngle = (real_T) (EncoderTDCAngles_DataStore())
            [(EncoderTDCOrder_DataStore())[index]]/16.0;
        }

        {
          extern uint8_T NextCylinderToInject;
          NextCylinderToInject = (uint8_T) (EncoderTDCOrder_DataStore())[index]+
            1;
        }
      }
    }

    pulse_scheduling_allowed = (motohawk_encoder_status >= (uint8_T)
      ENC_SYNC_CAM_UNKNOWN) && (GetEncoderResourceInstantRPM() > 10);
    for (j=0; j < (EncoderNumCylinders_DataStore()); j++) {
      enable = ((BaseEngineController_A02_B.s783_Merge)[index] &&
                pulse_scheduling_allowed);
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_A02_ConstB.s679_DataTypeConversion5) !=
            (BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_A02_ConstB.s679_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index]) + (rtb_Sum_l0);

        /* Primary Pulse */
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_l;
        DynamicObj.TimingObj.u4Duration = elec_duration;
        if ((INJ_Behavior_DataStore()) == 0) {
          SetResourceAttributesSequenceOut((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + index), &DynamicObj,
            BEHAVIOUR_INJ_SEQ);
        } else if ((INJ_Behavior_DataStore()) == 1) {
          SetResourceAttributesSequenceOut((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + index), &DynamicObj,
            BEHAVIOUR_TRAN_FUEL_SEQ);
          DynamicObj.u1AffectedPulse = 1;
          DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_l + 6400;
          DynamicObj.TimingObj.u4Duration = 0;
          while (DynamicObj.TimingObj.s2StartAngle >= 720*16)
            DynamicObj.TimingObj.s2StartAngle -= 720*16;
          if (TransientInjectorSeqInfo_38[index].primaryComplete) {
            if (elec_duration > TransientInjectorSeqInfo_38[index].
                primaryDuration) {
              makeup_duration = elec_duration -
                TransientInjectorSeqInfo_38[index].primaryDuration;
              if (makeup_duration >= (rtb_UnitDelay_aka)) {
                makeup_duration += (rtb_Sum_l0);
                if (rtb_DataTypeConversion6 > 0) {
                  if (makeup_duration > (rtb_DataTypeConversion6))
                    makeup_duration = rtb_DataTypeConversion6;
                }

                makeup_angle = (rtb_DataTypeConversion2_l + 6400) + (int16_T)
                  ((makeup_duration * ((uint32_T) GetEncoderResourceInstantRPM())
                    * 96UL) / 1000000UL);
                while (makeup_angle >= 720*16)
                  makeup_angle -= 720*16;
                DynamicObj.TimingObj.s2StartAngle = makeup_angle;
                DynamicObj.TimingObj.u4Duration = makeup_duration;
              }
            }
          }

          SetResourceAttributesSequenceOut((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + index), &DynamicObj,
            BEHAVIOUR_TRAN_FUEL_SEQ);
        }
      } else if ((INJ_SequenceType_DataStore()) == 1) {
        int half_cylinders = (EncoderNumCylinders_DataStore()) / 2;
        if (index < half_cylinders) {
          S_SeqOutPulseTiming TimingObj;
          if ((enable) !=
              ((&BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[0])
               [index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_A02_ConstB.s679_DataTypeConversion5) !=
              (BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK2)) {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_A02_ConstB.s679_DataTypeConversion5);
          }

          elec_duration = ((rtb_InjectorSequence_o2)[index]) / 2 + (rtb_Sum_l0);
          DynamicObj.u1AffectedPulse = 0;
          DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_l;
          DynamicObj.TimingObj.u4Duration = elec_duration;
          SetResourceAttributesSequenceOut((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + index), &DynamicObj,
            BEHAVIOUR_INJ_SEQ);
          DynamicObj.u1AffectedPulse = 1;
          SetResourceAttributesSequenceOut((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + index), &DynamicObj,
            BEHAVIOUR_INJ_SEQ);
        }
      } else if ((INJ_SequenceType_DataStore()) == 2) {
        S_SeqOutPulseTiming TimingObj_pulse1;
        if ((enable) !=
            ((&BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_A02_ConstB.s679_DataTypeConversion5) !=
            (BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_A02_ConstB.s679_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index])/2 + (rtb_Sum_l0);
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_l;
        DynamicObj.TimingObj.u4Duration = elec_duration;
        SetResourceAttributesSequenceOut((E_ModuleResource)
          ((INJ_InitialPin_DataStore()) + index), &DynamicObj, BEHAVIOUR_INJ_SEQ);
        DynamicObj.u1AffectedPulse = 1;
        SetResourceAttributesSequenceOut((E_ModuleResource)
          ((INJ_InitialPin_DataStore()) + index), &DynamicObj, BEHAVIOUR_INJ_SEQ);
      } else {
        /* Only standard & batch sequence types are supported */
      }

      index++;
      if (index >= (EncoderNumCylinders_DataStore())) {
        index = 0;
      }
    }

    BaseEngineController_A02_DWork.s679_InjectorSequence_DWORK2 =
      BaseEngineController_A02_ConstB.s679_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_A02_B.s679_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_38[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_38[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S777>/==' incorporates:
   *  Constant: '<S777>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_j[i] =
      (BaseEngineController_A02_B.s679_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S777>/==' */
  /* S-Function Block: <S777>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S777>/<1' incorporates:
   *  Constant: '<S777>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S777>/motohawk_encoder_average_rpm'
   */
  rtb_LogicalOperator1_a = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S777>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator3_j[i] && rtb_LogicalOperator1_a &&
                   BaseEngineController_A02_B.s783_Merge[i]);
  }

  /* End of Logic: '<S777>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S777>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_AND1[0]);
    UpdateFault(28);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S777>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_AND1[1]);
    UpdateFault(29);
  }

  /* If: '<S798>/If' incorporates:
   *  Inport: '<S799>/In1'
   *  Inport: '<S800>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S798>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S798>/override_enable'
   */
  if ((OILP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S798>/NewValue' incorporates:
     *  ActionPort: '<S799>/Action Port'
     */
    rtb_LogicalOperator1_a = (OILP_new_DataStore());

    /* End of Outputs for SubSystem: '<S798>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S798>/OldValue' incorporates:
     *  ActionPort: '<S800>/Action Port'
     */
    rtb_LogicalOperator1_a = BaseEngineController_A02_B.s120_OILP;

    /* End of Outputs for SubSystem: '<S798>/OldValue' */
  }

  /* End of If: '<S798>/If' */

  /* Logic: '<S797>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S797>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s797_LogicalOperator = rtb_LogicalOperator1_a ^
    (OILP_Polarity_DataStore());

  /* If: '<S802>/If' incorporates:
   *  Inport: '<S803>/In1'
   *  Inport: '<S804>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S802>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S802>/override_enable'
   */
  if ((Oxygen_Heater_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S802>/NewValue' incorporates:
     *  ActionPort: '<S803>/Action Port'
     */
    rtb_LogicalOperator1_a = (Oxygen_Heater_new_DataStore());

    /* End of Outputs for SubSystem: '<S802>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S802>/OldValue' incorporates:
     *  ActionPort: '<S804>/Action Port'
     */
    rtb_LogicalOperator1_a = BaseEngineController_A02_B.s120_O2Heater;

    /* End of Outputs for SubSystem: '<S802>/OldValue' */
  }

  /* End of If: '<S802>/If' */

  /* Logic: '<S801>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S801>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s801_LogicalOperator = rtb_LogicalOperator1_a ^
    (Oxygen_Heater_Polarity_DataStore());

  /* S-Function Block: <S22>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s22_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_he = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S22>/Switch' incorporates:
   *  Constant: '<S22>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S22>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S22>/motohawk_delta_time'
   *  Sum: '<S22>/Sum'
   */
  if (rtb_RelationalOperator6_k) {
    rtb_Abs_is = rtb_motohawk_delta_time_he + EGR_Disable_DataStore();
  } else {
    rtb_Abs_is = 0.0;
  }

  /* End of Switch: '<S22>/Switch' */

  /* RelationalOperator: '<S19>/Relational Operator3' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Gain: '<S19>/Gain1'
   *  Gain: '<S19>/Gain3'
   *  Product: '<S19>/Product1'
   *  Sum: '<S19>/Add'
   */
  rtb_RelationalOperator3_fn = ((1.0E+6 * rtb_Abs_is >= (100.0 -
    rtb_DataTypeConversion_f5a) * 0.01 * rtb_DesiredLambda_idx));

  /* S-Function (motohawk_sfun_data_write): '<S19>/motohawk_data_write' */
  /* Write to Data Storage as scalar: RESET */
  {
    RESET_DataStore() = rtb_RelationalOperator3_fn;
  }

  /* Saturate: '<S21>/Saturation' */
  rtb_Saturation_ms = rtb_Switch_e >= 16000.0 ? 16000.0 : rtb_Switch_e <= 0.0 ?
    0.0 : rtb_Switch_e;

  /* S-Function (motohawk_sfun_data_write): '<S21>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EGR_Enable */
  {
    EGR_Enable_DataStore() = rtb_Saturation_ms;
  }

  /* Saturate: '<S22>/Saturation' */
  rtb_Saturation_ai = rtb_Abs_is >= 16000.0 ? 16000.0 : rtb_Abs_is <= 0.0 ? 0.0 :
    rtb_Abs_is;

  /* S-Function (motohawk_sfun_data_write): '<S22>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EGR_Disable */
  {
    EGR_Disable_DataStore() = rtb_Saturation_ai;
  }

  /* Sum: '<S15>/Sum1' incorporates:
   *  DataTypeConversion: '<S15>/Data Type Conversion2'
   *  DataTypeConversion: '<S15>/Data Type Conversion3'
   *  DataTypeConversion: '<S15>/Data Type Conversion4'
   *  Fcn: '<S15>/Fcn1'
   *  Fcn: '<S15>/Fcn2'
   */
  rtb_Abs_is = ((real_T)rtb_motohawk_fault_action3 * 3.0 + (real_T)
                rtb_motohawk_fault_action2 * 2.0) + (real_T)
    rtb_motohawk_fault_action1_m;

  /* DataTypeConversion: '<S15>/Data Type Conversion5' */
  if (rtb_Abs_is < 256.0) {
    if (rtb_Abs_is >= 0.0) {
      BaseEngineController_A02_B.s15_DataTypeConversion5 = (uint8_T)rtb_Abs_is;
    } else {
      BaseEngineController_A02_B.s15_DataTypeConversion5 = 0U;
    }
  } else {
    BaseEngineController_A02_B.s15_DataTypeConversion5 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S15>/Data Type Conversion5' */

  /* S-Function (motohawk_sfun_data_write): '<S119>/motohawk_data_write' */
  /* Write to Data Storage as scalar: APP */
  {
    APP_DataStore() = BaseEngineController_A02_B.s127_APP;
  }

  /* UnitDelay: '<S357>/Unit Delay' */
  rtb_UnitDelay_aka = BaseEngineController_A02_DWork.s357_UnitDelay_DSTATE;

  /* Sum: '<S357>/Sum' incorporates:
   *  Constant: '<S357>/Constant1'
   */
  rtb_Switch_a = 1U + rtb_UnitDelay_aka;
  if (rtb_Switch_a < 1U) {
    rtb_Switch_a = MAX_uint32_T;
  }

  rtb_Sum_l0 = rtb_Switch_a;

  /* End of Sum: '<S357>/Sum' */

  /* RelationalOperator: '<S357>/Relational Operator' incorporates:
   *  Constant: '<S10>/Count'
   */
  rtb_RelationalOperator_hu = (rtb_Sum_l0 >= 5U);

  /* S-Function Block: <S279>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = BaseEngineController_A02_B.s323_Switch1;
    (App05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s323_Switch1, (App05IdxArr_DataStore()), 5,
       (App05Idx_DataStore()));
    rtb_motohawk_prelookup_a = (App05Idx_DataStore());
  }

  /* S-Function Block: <S356>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom05In_DataStore()) = rtb_Torque;
    (IndLoadNom05Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom05IdxArr_DataStore()), 5, (IndLoadNom05Idx_DataStore()));
    rtb_motohawk_prelookup_a = (IndLoadNom05Idx_DataStore());
  }

  /* Switch: '<S307>/Switch1' incorporates:
   *  Constant: '<S304>/Constant'
   *  Constant: '<S308>/Constant'
   *  RelationalOperator: '<S308>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S304>/motohawk_data_read'
   *  UnitDelay: '<S307>/Unit Delay'
   */
  if (((uint8_T)EngineState_DataStore()) == 1) {
    BaseEngineController_A02_B.s307_Switch1 = 0.0;
  } else {
    BaseEngineController_A02_B.s307_Switch1 =
      BaseEngineController_A02_DWork.s307_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S307>/Switch1' */
  /* S-Function Block: <S317>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_A02_B.s520_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s520_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_a = (RPM05Idx_DataStore());
  }

  /* Outputs for Enabled SubSystem: '<S278>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S322>/Enable'
   */
  if (rtb_RelOp_g) {
    if (!BaseEngineController_A02_DWork.s278_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S322>/Unit Delay' */
      BaseEngineController_A02_DWork.s322_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s278_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S322>/Sum' incorporates:
     *  Constant: '<S322>/Constant'
     *  UnitDelay: '<S322>/Unit Delay'
     */
    rtb_Add_a = (int8_T)(BaseEngineController_A02_DWork.s322_UnitDelay_DSTATE +
                         1);

    /* Sum: '<S322>/Add' incorporates:
     *  Constant: '<S322>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S322>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S322>/Relational Operator' */
    rtb_LogicalOperator1_a = (rtb_Add_a <= rtb_Sum_l3);

    /* Switch: '<S322>/Switch' */
    if (rtb_LogicalOperator1_a) {
      rtb_Sum_l3 = rtb_Add_a;
    }

    /* End of Switch: '<S322>/Switch' */

    /* Outputs for Enabled SubSystem: '<S322>/Collect Average' incorporates:
     *  EnablePort: '<S339>/Enable'
     */
    /* Logic: '<S322>/Logical Operator' incorporates:
     *  Constant: '<S322>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S322>/Relational Operator1'
     */
    if (rtb_LogicalOperator1_a && (rtb_Add_a > 2)) {
      if (!BaseEngineController_A02_DWork.s322_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S339>/Unit Delay1' */
        BaseEngineController_A02_DWork.s339_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s322_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S339>/Sum1' incorporates:
       *  UnitDelay: '<S339>/Unit Delay1'
       */
      rtb_Product1_e = BaseEngineController_A02_B.s613_Merge +
        BaseEngineController_A02_DWork.s339_UnitDelay1_DSTATE;

      /* Product: '<S339>/Product' incorporates:
       *  DataTypeConversion: '<S339>/Data Type Conversion'
       *  Sum: '<S322>/Add1'
       */
      BaseEngineController_A02_B.s339_Product = 1.0 / (real_T)(int8_T)
        (rtb_Sum_l3 - 2) * rtb_Product1_e;

      /* Update for UnitDelay: '<S339>/Unit Delay1' */
      BaseEngineController_A02_DWork.s339_UnitDelay1_DSTATE = rtb_Product1_e;
    } else {
      if (BaseEngineController_A02_DWork.s322_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s322_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S322>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S322>/Collect Average' */

    /* Update for UnitDelay: '<S322>/Unit Delay' */
    BaseEngineController_A02_DWork.s322_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_A02_DWork.s278_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S322>/Collect Average' */
      BaseEngineController_A02_DWork.s322_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S322>/Collect Average' */
      BaseEngineController_A02_DWork.s278_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S278>/Capture IAT At Startup' */
  /* S-Function Block: <S347>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s347_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_a0 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S347>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S347>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S347>/motohawk_delta_time'
   */
  BaseEngineController_A02_B.s347_Sum = rtb_motohawk_delta_time_a0 +
    TimeSinceKeyOnTimer_DataStore();

  /* UnitDelay: '<S327>/Unit Delay1' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s327_UnitDelay1_DSTATE;

  /* Sum: '<S327>/Sum3' incorporates:
   *  Constant: '<S327>/Constant1'
   *  Product: '<S327>/Product2'
   *  Product: '<S327>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S327>/motohawk_calibration1'
   *  Sum: '<S327>/Sum2'
   */
  BaseEngineController_A02_B.s327_Sum3 = (1.0 - (PostO2DelagFiltConst_DataStore()))
    * rtb_Product1_e + (PostO2DelagFiltConst_DataStore()) *
    BaseEngineController_A02_B.s607_Merge;

  /* S-Function Block: <S551>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s551_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_is = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S551>/Product' incorporates:
   *  MinMax: '<S551>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S551>/motohawk_calibration'
   */
  rtb_Abs_is /= (rtb_Abs_is >= (FuelPresFilterConst_DataStore())) || rtIsNaN
    ((FuelPresFilterConst_DataStore())) ? rtb_Abs_is :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S523>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S523>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S523>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_p = (IsFaultActive(21) || IsFaultActive(22));

  /* Logic: '<S523>/Logical Operator6' */
  rtb_LogicalOperator1_a = !rtb_RelationalOperator5_p;

  /* Logic: '<S523>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S523>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S523>/motohawk_fault_status3'
   */
  rtb_Switch_dz = (IsFaultSuspected(21) || IsFaultSuspected(22));

  /* S-Function Block: <S362>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get(&BaseEngineController_A02_B.s362_motohawk_ain2,
      NULL);
  }

  /* DataTypeConversion: '<S523>/Data Type Conversion' */
  rtb_Abs_b = (real_T)BaseEngineController_A02_B.s362_motohawk_ain2;

  /* Product: '<S523>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_Abs_b * (FuelPresGain_DataStore());

  /* Sum: '<S523>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s523_Sum1 = rtb_Product1_e +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S523>/Unit Delay1' */
  rtb_UnitDelay1_b = BaseEngineController_A02_DWork.s523_UnitDelay1_DSTATE;

  /* If: '<S523>/If' incorporates:
   *  Logic: '<S523>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_a && rtb_Switch_dz) {
    /* Outputs for IfAction SubSystem: '<S523>/If Action Subsystem' incorporates:
     *  ActionPort: '<S552>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_b, &rtb_Merge_dm);

    /* End of Outputs for SubSystem: '<S523>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_p) {
    /* Outputs for IfAction SubSystem: '<S523>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S553>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_dm);

    /* End of Outputs for SubSystem: '<S523>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S523>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S554>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s523_Sum1, &rtb_Merge_dm);

    /* End of Outputs for SubSystem: '<S523>/If Action Subsystem2' */
  }

  /* End of If: '<S523>/If' */

  /* Sum: '<S556>/Sum1' incorporates:
   *  Constant: '<S556>/Constant'
   *  Product: '<S556>/Product'
   *  Product: '<S556>/Product1'
   *  Sum: '<S556>/Sum'
   *  UnitDelay: '<S556>/Unit Delay'
   */
  rtb_Sum1_j = (1.0 - rtb_Abs_is) *
    BaseEngineController_A02_DWork.s556_UnitDelay_DSTATE + rtb_Merge_dm *
    rtb_Abs_is;

  /* If: '<S555>/If' incorporates:
   *  Inport: '<S557>/In1'
   *  Inport: '<S558>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S555>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S555>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S555>/NewValue' incorporates:
     *  ActionPort: '<S557>/Action Port'
     */
    BaseEngineController_A02_B.s555_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S555>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S555>/OldValue' incorporates:
     *  ActionPort: '<S558>/Action Port'
     */
    BaseEngineController_A02_B.s555_Merge = rtb_Sum1_j;

    /* End of Outputs for SubSystem: '<S555>/OldValue' */
  }

  /* End of If: '<S555>/If' */

  /* S-Function Block: <S567>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s567_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_is = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S567>/Product' incorporates:
   *  MinMax: '<S567>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration'
   */
  rtb_Abs_is /= (rtb_Abs_is >= (MAPTimeFilterConst_DataStore())) || rtIsNaN
    ((MAPTimeFilterConst_DataStore())) ? rtb_Abs_is :
    (MAPTimeFilterConst_DataStore());

  /* Sum: '<S572>/Sum1' incorporates:
   *  Constant: '<S572>/Constant'
   *  Product: '<S572>/Product'
   *  Product: '<S572>/Product1'
   *  Sum: '<S572>/Sum'
   *  UnitDelay: '<S572>/Unit Delay'
   */
  rtb_Sum1_h = (1.0 - rtb_Abs_is) *
    BaseEngineController_A02_DWork.s572_UnitDelay_DSTATE + rtb_Merge_pk *
    rtb_Abs_is;

  /* If: '<S571>/If' incorporates:
   *  Inport: '<S573>/In1'
   *  Inport: '<S574>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S571>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S571>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S571>/NewValue' incorporates:
     *  ActionPort: '<S573>/Action Port'
     */
    BaseEngineController_A02_B.s571_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S571>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S571>/OldValue' incorporates:
     *  ActionPort: '<S574>/Action Port'
     */
    BaseEngineController_A02_B.s571_Merge = rtb_Sum1_h;

    /* End of Outputs for SubSystem: '<S571>/OldValue' */
  }

  /* End of If: '<S571>/If' */

  /* Sum: '<S326>/Sum3' incorporates:
   *  Constant: '<S326>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_A02_B.s326_Sum3 = (BaseEngineController_A02_B.s555_Merge
    + 100.0) - BaseEngineController_A02_B.s571_Merge;

  /* S-Function Block: <S385>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s385_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_is = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S385>/Product' incorporates:
   *  MinMax: '<S385>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S385>/motohawk_calibration'
   */
  rtb_Abs_is /= (rtb_Abs_is >= (Torque_Filter_DataStore())) || rtIsNaN
    ((Torque_Filter_DataStore())) ? rtb_Abs_is : (Torque_Filter_DataStore());

  /* S-Function (motohawk_sfun_read_canmsg): '<S366>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6221p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6221p0004,
      &messageObj);
    if ((BaseEngineController_A02_B.s366_ReadCANMessage_o1 + 1) >
        BaseEngineController_A02_B.s366_ReadCANMessage_o1)
      BaseEngineController_A02_B.s366_ReadCANMessage_o1++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint16_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[7])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[6])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[4])) ;
      BaseEngineController_A02_B.s366_ReadCANMessage_o2 = (((real_T) tmp0) /
        ((real_T) 10)) + ((real_T) -3200);
      BaseEngineController_A02_B.s366_ReadCANMessage_o3 = ((real_T) tmp1) +
        ((real_T) -32000);
      BaseEngineController_A02_B.s366_ReadCANMessage_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_A02_B.s366_ReadCANMessage_o1 = 0;
    }
  }

  /* If: '<S388>/If' incorporates:
   *  Inport: '<S427>/In1'
   *  Inport: '<S428>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S388>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S388>/override_enable'
   */
  if ((Est_Absolute_Torque_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S388>/NewValue' incorporates:
     *  ActionPort: '<S427>/Action Port'
     */
    rtb_Product1_e = (Est_Absolute_Torque_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S388>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S388>/OldValue' incorporates:
     *  ActionPort: '<S428>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s366_ReadCANMessage_o2;

    /* End of Outputs for SubSystem: '<S388>/OldValue' */
  }

  /* End of If: '<S388>/If' */

  /* Sum: '<S424>/Sum1' incorporates:
   *  Constant: '<S424>/Constant'
   *  Product: '<S424>/Product'
   *  Product: '<S424>/Product1'
   *  Sum: '<S424>/Sum'
   *  UnitDelay: '<S424>/Unit Delay'
   */
  rtb_Sum1_ix = (1.0 - rtb_Abs_is) *
    BaseEngineController_A02_DWork.s424_UnitDelay_DSTATE + rtb_Product1_e *
    rtb_Abs_is;

  /* If: '<S371>/If' incorporates:
   *  Inport: '<S379>/In1'
   *  Inport: '<S380>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S371>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S371>/override_enable'
   */
  if ((Vehicle_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S371>/NewValue' incorporates:
     *  ActionPort: '<S379>/Action Port'
     */
    rtb_Sum1_gje = (Vehicle_Speed_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S371>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S371>/OldValue' incorporates:
     *  ActionPort: '<S380>/Action Port'
     */
    rtb_Sum1_gje = BaseEngineController_A02_B.s365_GensetEnable_a;

    /* End of Outputs for SubSystem: '<S371>/OldValue' */
  }

  /* End of If: '<S371>/If' */

  /* If: '<S387>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S387>/override_enable'
   */
  if ((Status1_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S387>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S366>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6222p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6222p0001,
      &messageObj);
    if ((BaseEngineController_A02_B.s366_ReadCANMessage1_o1 + 1) >
        BaseEngineController_A02_B.s366_ReadCANMessage1_o1)
      BaseEngineController_A02_B.s366_ReadCANMessage1_o1++;
    if (msg_valid) {
      boolean_T tmp0 = 0;
      boolean_T tmp1 = 0;
      boolean_T tmp2 = 0;
      boolean_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      uint8_T tmp7 = 0;
      uint8_T tmp8 = 0;
      uint8_T tmp9 = 0;
      uint8_T tmp10 = 0;
      uint8_T tmp11 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[2] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[2] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[2] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[2] & 0x000000F0) >> 4) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[3] & 0x0000000F)) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[3] & 0x00000030) >> 4) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[3] & 0x000000C0) >> 6) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp10))[0] = ((messageObj.u1DataArr[6])) ;
      ((uint8_T *)(&tmp11))[0] = ((messageObj.u1DataArr[7])) ;
      BaseEngineController_A02_B.s366_ReadCANMessage1_o2 = (real_T) tmp0;
      BaseEngineController_A02_B.s366_ReadCANMessage1_o3 = (real_T) tmp1;
      BaseEngineController_A02_B.s366_ReadCANMessage1_o4 = (real_T) tmp2;
      BaseEngineController_A02_B.s366_ReadCANMessage1_o5 = (real_T) tmp3;
      BaseEngineController_A02_B.s366_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_A02_B.s366_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_A02_B.s366_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_A02_B.s366_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_A02_B.s366_ReadCANMessage1_o10 = ((real_T) tmp8) /
        ((real_T) 2);
      BaseEngineController_A02_B.s366_ReadCANMessage1_o11 = ((real_T) tmp9) /
        ((real_T) 2);
      BaseEngineController_A02_B.s366_ReadCANMessage1_o12 = ((real_T) tmp10) +
        ((real_T) -40);
      BaseEngineController_A02_B.s366_ReadCANMessage1_o13 = ((real_T) tmp11) +
        ((real_T) -40);
      BaseEngineController_A02_B.s366_ReadCANMessage1_o1 = 0;
    }
  }

  /* If: '<S389>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S389>/override_enable'
   */
  if ((Control_Mode_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S389>/If' */

  /* If: '<S390>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S390>/override_enable'
   */
  if ((MotoringTq_Curve_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S390>/If' */

  /* If: '<S391>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S391>/override_enable'
   */
  if ((GeneratingTq_Curve_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S391>/If' */

  /* If: '<S392>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S392>/override_enable'
   */
  if ((Est_Relative_Torque_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S392>/If' */

  /* If: '<S393>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S393>/override_enable'
   */
  if ((Estimating_VBATT_Lv_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S393>/If' */

  /* If: '<S394>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S394>/override_enable'
   */
  if ((Motor_Temp_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S394>/If' */

  /* If: '<S395>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S395>/override_enable'
   */
  if ((Drive_Temp_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S395>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S366>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6223p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6223p0001,
      &messageObj);
    if ((BaseEngineController_A02_B.s366_ReadCANMessage2_o1 + 1) >
        BaseEngineController_A02_B.s366_ReadCANMessage2_o1)
      BaseEngineController_A02_B.s366_ReadCANMessage2_o1++;
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
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[2] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[2] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[2] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[2] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[2] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[3] & 0x00000001)) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[3] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[3] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[3] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp10))[0] = ((messageObj.u1DataArr[3] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp11))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp12))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp13))[0] = ((messageObj.u1DataArr[6])) ;
      ((uint8_T *)(&tmp14))[0] = ((messageObj.u1DataArr[7])) ;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o2 = (real_T) tmp0;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o3 = (real_T) tmp1;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o4 = (real_T) tmp2;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o5 = (real_T) tmp3;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o6 = (real_T) tmp4;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o7 = (real_T) tmp5;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o8 = (real_T) tmp6;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o9 = (real_T) tmp7;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o10 = (real_T) tmp8;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o11 = (real_T) tmp9;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o12 = (real_T) tmp10;
      BaseEngineController_A02_B.s366_ReadCANMessage2_o13 = ((real_T) tmp11) +
        ((real_T) -40);
      BaseEngineController_A02_B.s366_ReadCANMessage2_o14 = ((real_T) tmp12) /
        ((real_T) 2);
      BaseEngineController_A02_B.s366_ReadCANMessage2_o15 = ((real_T) tmp13) /
        ((real_T) 10);
      BaseEngineController_A02_B.s366_ReadCANMessage2_o16 = ((real_T) tmp14) /
        ((real_T) 10);
      BaseEngineController_A02_B.s366_ReadCANMessage2_o1 = 0;
    }
  }

  /* If: '<S396>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S396>/override_enable'
   */
  if ((Status3_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S396>/If' */

  /* If: '<S397>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S397>/override_enable'
   */
  if ((AD_Input1_En_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S397>/If' */

  /* If: '<S398>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S398>/override_enable'
   */
  if ((XDRP_State_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S398>/If' */

  /* If: '<S399>/If' incorporates:
   *  Inport: '<S449>/In1'
   *  Inport: '<S450>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S399>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S399>/override_enable'
   */
  if ((Motor_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S399>/NewValue' incorporates:
     *  ActionPort: '<S449>/Action Port'
     */
    rtb_Merge_c5 = (Motor_Speed_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S399>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S399>/OldValue' incorporates:
     *  ActionPort: '<S450>/Action Port'
     */
    rtb_Merge_c5 = BaseEngineController_A02_B.s366_ReadCANMessage_o3;

    /* End of Outputs for SubSystem: '<S399>/OldValue' */
  }

  /* End of If: '<S399>/If' */

  /* If: '<S400>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S400>/override_enable'
   */
  if ((PWMOutput_State_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S400>/If' */

  /* If: '<S401>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S401>/override_enable'
   */
  if ((AD_Input2_En_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S401>/If' */

  /* If: '<S402>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S402>/override_enable'
   */
  if ((Bus_HVIL_Status_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S402>/If' */

  /* If: '<S403>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S403>/override_enable'
   */
  if ((ThreePhase_HVIL_Status_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S403>/If' */

  /* If: '<S404>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S404>/override_enable'
   */
  if ((DPos_Sens1_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S404>/If' */

  /* If: '<S405>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S405>/override_enable'
   */
  if ((DigPos_Sens2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S405>/If' */

  /* If: '<S406>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S406>/override_enable'
   */
  if ((DigPos_Sens3_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S406>/If' */

  /* If: '<S407>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S407>/override_enable'
   */
  if ((DigPos_Sens4_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S407>/If' */

  /* If: '<S408>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S408>/override_enable'
   */
  if ((DigPos_Sens5_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S408>/If' */

  /* If: '<S409>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S409>/override_enable'
   */
  if ((CtrlBoard_Temp_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S409>/If' */

  /* If: '<S410>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S410>/override_enable'
   */
  if ((HVBus_Voltage_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S410>/If' */

  /* If: '<S411>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S411>/override_enable'
   */
  if ((Keyed_Voltage_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S411>/If' */

  /* If: '<S412>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S412>/override_enable'
   */
  if ((AD_Input1_Vin_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S412>/If' */

  /* If: '<S413>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S413>/override_enable'
   */
  if ((AD_Input2_Vin_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S413>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S366>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6224p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6224p0001,
      &messageObj);
    if ((BaseEngineController_A02_B.s366_ReadCANMessage3_o1 + 1) >
        BaseEngineController_A02_B.s366_ReadCANMessage3_o1)
      BaseEngineController_A02_B.s366_ReadCANMessage3_o1++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      BaseEngineController_A02_B.s366_ReadCANMessage3_o2 = ((real_T) tmp0) /
        ((real_T) 10);
      BaseEngineController_A02_B.s366_ReadCANMessage3_o3 = ((real_T) tmp1) /
        ((real_T) 10);
      BaseEngineController_A02_B.s366_ReadCANMessage3_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_A02_B.s366_ReadCANMessage3_o1 = 0;
    }
  }

  /* If: '<S414>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S414>/override_enable'
   */
  if ((Status4_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S414>/If' */

  /* If: '<S415>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S415>/override_enable'
   */
  if ((An_PosSense1_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S415>/If' */

  /* If: '<S416>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S416>/override_enable'
   */
  if ((An_PosSense2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S416>/If' */

  /* If: '<S417>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S417>/override_enable'
   */
  if ((XDRP_Internal_Meas_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S417>/If' */

  /* If: '<S418>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S418>/override_enable'
   */
  if ((Status2_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S418>/If' */

  /* If: '<S419>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S419>/override_enable'
   */
  if ((Run_Enable_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S419>/If' */

  /* If: '<S420>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S420>/override_enable'
   */
  if ((NegativeTq_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S420>/If' */

  /* If: '<S421>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S421>/override_enable'
   */
  if ((Generating_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S421>/If' */

  /* If: '<S422>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S422>/override_enable'
   */
  if ((Phoenix_Fault_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S422>/If' */

  /* If: '<S423>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S423>/override_enable'
   */
  if ((TqLimiting_Reason_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S423>/If' */

  /* S-Function Block: <S585>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s585_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_is = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S585>/Product' incorporates:
   *  MinMax: '<S585>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S585>/motohawk_calibration'
   */
  rtb_Abs_is /= (rtb_Abs_is >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_is :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S528>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S528>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S528>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_p = (IsFaultActive(48) || IsFaultActive(49));

  /* Logic: '<S528>/Logical Operator6' */
  rtb_LogicalOperator1_a = !rtb_RelationalOperator5_p;

  /* Logic: '<S528>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S528>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S528>/motohawk_fault_status3'
   */
  rtb_Switch_dz = (IsFaultSuspected(48) || IsFaultSuspected(49));

  /* S-Function Block: <S362>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_A02_B.s362_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S528>/Data Type Conversion' */
  rtb_DataTypeConversion_f5a = (real_T)
    BaseEngineController_A02_B.s362_motohawk_ain3;

  /* Product: '<S528>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S528>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_DataTypeConversion_f5a * (SensVoltGain_DataStore());

  /* Sum: '<S528>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S528>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s528_Sum1 = rtb_Product1_e +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S528>/Unit Delay1' */
  rtb_UnitDelay1_jh = BaseEngineController_A02_DWork.s528_UnitDelay1_DSTATE;

  /* If: '<S528>/If' incorporates:
   *  Logic: '<S528>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_a && rtb_Switch_dz) {
    /* Outputs for IfAction SubSystem: '<S528>/If Action Subsystem' incorporates:
     *  ActionPort: '<S586>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_jh, &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S528>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_p) {
    /* Outputs for IfAction SubSystem: '<S528>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S587>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S528>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S528>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S588>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s528_Sum1, &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S528>/If Action Subsystem2' */
  }

  /* End of If: '<S528>/If' */

  /* Sum: '<S590>/Sum1' incorporates:
   *  Constant: '<S590>/Constant'
   *  Product: '<S590>/Product'
   *  Product: '<S590>/Product1'
   *  Sum: '<S590>/Sum'
   *  UnitDelay: '<S590>/Unit Delay'
   */
  rtb_Sum1_d3 = (1.0 - rtb_Abs_is) *
    BaseEngineController_A02_DWork.s590_UnitDelay_DSTATE + rtb_Merge_l *
    rtb_Abs_is;

  /* If: '<S589>/If' incorporates:
   *  Inport: '<S591>/In1'
   *  Inport: '<S592>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S589>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S589>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S589>/NewValue' incorporates:
     *  ActionPort: '<S591>/Action Port'
     */
    BaseEngineController_A02_B.s589_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S589>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S589>/OldValue' incorporates:
     *  ActionPort: '<S592>/Action Port'
     */
    BaseEngineController_A02_B.s589_Merge = rtb_Sum1_d3;

    /* End of Outputs for SubSystem: '<S589>/OldValue' */
  }

  /* End of If: '<S589>/If' */

  /* If: '<S634>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S634>/override_enable'
   */
  if ((APP2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S634>/If' */

  /* Outputs for Enabled SubSystem: '<S357>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S358>/Enable'
   */
  if (rtb_RelationalOperator_hu) {
    /* Outputs for Function Call SubSystem: '<S3>/Diagnostics' */

    /* S-Function Block: <S264>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s264_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_i = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S252>/Logical Operator3' incorporates:
     *  Logic: '<S252>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status10'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status11'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status12'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status13'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status14'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status5'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status6'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status7'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status8'
     *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status9'
     */
    rtb_AboveHiTarget_b = !(IsFaultActive(57) || IsFaultActive(63) ||
      IsFaultActive(58) || IsFaultActive(64) || IsFaultActive(32) ||
      IsFaultActive(33) || IsFaultActive(57) || IsFaultActive(53) ||
      IsFaultActive(54) || IsFaultActive(55) || IsFaultActive(56) ||
      IsFaultActive(59) || IsFaultActive(60) || IsFaultActive(61) ||
      IsFaultActive(62));

    /* RelationalOperator: '<S263>/RelOp' incorporates:
     *  Constant: '<S263>/Constant'
     */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s344_State == 3);

    /* RelationalOperator: '<S252>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s329_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Switch: '<S264>/Switch' incorporates:
     *  Constant: '<S264>/Constant'
     *  Logic: '<S252>/Logical Operator4'
     *  RelationalOperator: '<S252>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S264>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S264>/motohawk_delta_time'
     *  Sum: '<S264>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator1_a &&
        (BaseEngineController_A02_B.s563_Merge > (MAP_IR_HI_DataStore()))) {
      rtb_Product1_e = rtb_motohawk_delta_time_i + MapHiFaultTimer_DataStore();
    } else {
      rtb_Product1_e = 0.0;
    }

    /* End of Switch: '<S264>/Switch' */

    /* RelationalOperator: '<S252>/Relational Operator5' incorporates:
     *  Constant: '<S252>/Constant'
     */
    rtb_RelationalOperator5_g = ((rtb_Product1_e > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S252>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(36, rtb_RelationalOperator5_g);
      UpdateFault(36);
    }

    /* S-Function Block: <S265>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s265_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_kq = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S252>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration6'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s329_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Switch: '<S265>/Switch' incorporates:
     *  Constant: '<S265>/Constant'
     *  Logic: '<S252>/Logical Operator2'
     *  RelationalOperator: '<S252>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_data_read): '<S265>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S265>/motohawk_delta_time'
     *  Sum: '<S265>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator1_a &&
        (BaseEngineController_A02_B.s563_Merge < (MAP_IR_LO_DataStore()))) {
      rtb_Merge_d = rtb_motohawk_delta_time_kq + MapLoFaultTimer_DataStore();
    } else {
      rtb_Merge_d = 0.0;
    }

    /* End of Switch: '<S265>/Switch' */

    /* RelationalOperator: '<S252>/Relational Operator6' incorporates:
     *  Constant: '<S252>/Constant1'
     */
    rtb_RelationalOperator6 = ((rtb_Merge_d > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S252>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(37, rtb_RelationalOperator6);
      UpdateFault(37);
    }

    /* S-Function Block: <S266>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s266_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_iu = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S252>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration8'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s329_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S252>/Add' */
    rtb_Merge_o4 = BaseEngineController_A02_B.s283_Sum -
      BaseEngineController_A02_B.s563_Merge;

    /* Switch: '<S266>/Switch' incorporates:
     *  Constant: '<S266>/Constant'
     *  Logic: '<S252>/Logical Operator5'
     *  RelationalOperator: '<S252>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_data_read): '<S266>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S266>/motohawk_delta_time'
     *  Sum: '<S266>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator1_a &&
        (rtb_Merge_o4 < (MAP_STUCK_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_iu +
        MapStickFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S266>/Switch' */

    /* RelationalOperator: '<S252>/Relational Operator9' incorporates:
     *  Constant: '<S252>/Constant2'
     */
    rtb_RelationalOperator9_i = ((rtb_motohawk_interpolation_1d3_a > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S252>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(38, rtb_RelationalOperator9_i);
      UpdateFault(38);
    }

    /* Saturate: '<S264>/Saturation' */
    rtb_Saturation_l = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
      0.0 ? 0.0 : rtb_Product1_e;

    /* S-Function (motohawk_sfun_data_write): '<S264>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapHiFaultTimer */
    {
      MapHiFaultTimer_DataStore() = rtb_Saturation_l;
    }

    /* Saturate: '<S265>/Saturation' */
    rtb_Saturation_mk = rtb_Merge_d >= 16000.0 ? 16000.0 : rtb_Merge_d <= 0.0 ?
      0.0 : rtb_Merge_d;

    /* S-Function (motohawk_sfun_data_write): '<S265>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapLoFaultTimer */
    {
      MapLoFaultTimer_DataStore() = rtb_Saturation_mk;
    }

    /* Saturate: '<S266>/Saturation' */
    rtb_Saturation_e = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S266>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapStickFaultTimer */
    {
      MapStickFaultTimer_DataStore() = rtb_Saturation_e;
    }

    /* RelationalOperator: '<S267>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration'
     */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s361_RPMInst >=
                    (BaseRevLimit_DataStore()));

    /* Sum: '<S253>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration1'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) -
      (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S267>/LT1' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s361_RPMInst <=
      rtb_motohawk_interpolation_1d3_a);

    /* CombinatorialLogic: '<S270>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_oi != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled645[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled645[rowidx + 4];
    }

    /* Switch: '<S270>/Switch1' incorporates:
     *  UnitDelay: '<S270>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_RelationalOperator6_k = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_RelationalOperator6_k =
        BaseEngineController_A02_DWork.s270_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S270>/Switch1' */

    /* Switch: '<S267>/Switch2' incorporates:
     *  Logic: '<S267>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration'
     */
    if (!rtb_RelationalOperator6_k) {
      rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore());
    }

    /* End of Switch: '<S267>/Switch2' */

    /* RelationalOperator: '<S253>/Overspeed' */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s361_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S253>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (MediumRevOffset_DataStore());

    /* RelationalOperator: '<S268>/LT' */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s361_RPMInst >=
                    rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S253>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration1'
     */
    rtb_Merge_d = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S268>/LT1' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s361_RPMInst <=
      rtb_Merge_d);

    /* CombinatorialLogic: '<S271>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_oi != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled645[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled645[rowidx + 4];
    }

    /* Switch: '<S271>/Switch1' incorporates:
     *  UnitDelay: '<S271>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_Switch1_p0 = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_Switch1_p0 = BaseEngineController_A02_DWork.s271_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S271>/Switch1' */

    /* Switch: '<S268>/Switch2' incorporates:
     *  Logic: '<S268>/Logical Operator'
     */
    if (rtb_Switch1_p0) {
      rtb_motohawk_interpolation_1d3_a = rtb_Merge_d;
    }

    /* End of Switch: '<S268>/Switch2' */

    /* RelationalOperator: '<S253>/Overspeed1' */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s361_RPMInst >
                    rtb_motohawk_interpolation_1d3_a);

    /* Logic: '<S253>/Logical Operator3' incorporates:
     *  Logic: '<S253>/Logical Operator4'
     */
    rtb_LogicalOperator3_au = ((rtb_LogicalOperator1_a && (!rtb_RelOp_oi)));

    /* S-Function (motohawk_sfun_fault_def): '<S253>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(50, rtb_LogicalOperator3_au);
      UpdateFault(50);
    }

    /* Sum: '<S253>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (HardRevOffset_DataStore());

    /* RelationalOperator: '<S269>/LT' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s361_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S253>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration1'
     */
    rtb_Merge_d = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S269>/LT1' */
    rtb_LogicalOperator3_fj = (BaseEngineController_A02_B.s361_RPMInst <=
      rtb_Merge_d);

    /* CombinatorialLogic: '<S272>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_fj != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled645[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled645[rowidx + 4];
    }

    /* Switch: '<S272>/Switch1' incorporates:
     *  UnitDelay: '<S272>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_LogicalOperator10 = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_LogicalOperator10 =
        BaseEngineController_A02_DWork.s272_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S272>/Switch1' */

    /* Switch: '<S269>/Switch2' incorporates:
     *  Logic: '<S269>/Logical Operator'
     */
    if (rtb_LogicalOperator10) {
      rtb_motohawk_interpolation_1d3_a = rtb_Merge_d;
    }

    /* End of Switch: '<S269>/Switch2' */

    /* RelationalOperator: '<S253>/Overspeed2' */
    rtb_LogicalOperator3_fj = (BaseEngineController_A02_B.s361_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Logic: '<S253>/Logical Operator5' incorporates:
     *  Logic: '<S253>/Logical Operator6'
     */
    rtb_LogicalOperator5_nc = ((rtb_RelOp_oi && (!rtb_LogicalOperator3_fj)));

    /* S-Function (motohawk_sfun_fault_def): '<S253>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(39, rtb_LogicalOperator5_nc);
      UpdateFault(39);
    }

    /* S-Function (motohawk_sfun_fault_def): '<S253>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(25, rtb_LogicalOperator3_fj);
      UpdateFault(25);
    }

    /* S-Function Block: <S274>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s274_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_p0 = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S254>/Logical Operator3' incorporates:
     *  Logic: '<S254>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S254>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S254>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_fj = !(IsFaultActive(21) || IsFaultActive(22) ||
      rtb_Merge_gl);

    /* Sum: '<S254>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = BaseEngineController_A02_B.s326_Sum3 -
      (FuelPres_DeltaTarget_DataStore());

    /* Switch: '<S274>/Switch' incorporates:
     *  Constant: '<S274>/Constant'
     *  Gain: '<S254>/invert'
     *  Logic: '<S254>/Logical Operator4'
     *  RelationalOperator: '<S254>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S274>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S274>/motohawk_delta_time'
     *  Sum: '<S274>/Sum'
     */
    if (rtb_LogicalOperator3_fj && (rtb_motohawk_interpolation_1d3_a <
         -(FuelPres_DeltaTolerance_DataStore()))) {
      rtb_Merge_d = rtb_motohawk_delta_time_p0 +
        FuelPresLow_FaultTimer_DataStore();
    } else {
      rtb_Merge_d = 0.0;
    }

    /* End of Switch: '<S274>/Switch' */
    /* RelationalOperator: '<S254>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_l = ((rtb_Merge_d > (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S254>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(20, rtb_RelationalOperator5_l);
      UpdateFault(20);
    }

    /* S-Function Block: <S273>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s273_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_iq = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S273>/Switch' incorporates:
     *  Constant: '<S273>/Constant'
     *  Logic: '<S254>/Logical Operator2'
     *  RelationalOperator: '<S254>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S273>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S273>/motohawk_delta_time'
     *  Sum: '<S273>/Sum'
     */
    if (rtb_LogicalOperator3_fj && (rtb_motohawk_interpolation_1d3_a >
         (FuelPres_DeltaTolerance_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_iq +
        FuelPresHigh_FaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S273>/Switch' */

    /* RelationalOperator: '<S254>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_e = ((rtb_motohawk_interpolation_1d3_a >
      (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S254>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(19, rtb_RelationalOperator2_e);
      UpdateFault(19);
    }

    /* Saturate: '<S273>/Saturation' */
    rtb_Saturation_lo = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S273>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresHigh_FaultTimer */
    {
      FuelPresHigh_FaultTimer_DataStore() = rtb_Saturation_lo;
    }

    /* Saturate: '<S274>/Saturation' */
    rtb_Saturation_n = rtb_Merge_d >= 16000.0 ? 16000.0 : rtb_Merge_d <= 0.0 ?
      0.0 : rtb_Merge_d;

    /* S-Function (motohawk_sfun_data_write): '<S274>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresLow_FaultTimer */
    {
      FuelPresLow_FaultTimer_DataStore() = rtb_Saturation_n;
    }

    /* Logic: '<S249>/Logical Operator3' incorporates:
     *  Logic: '<S249>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S249>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S249>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_fj = !(IsFaultActive(5) || IsFaultActive(6));

    /* RelationalOperator: '<S255>/RelOp' incorporates:
     *  Constant: '<S255>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S249>/motohawk_data_read'
     */
    rtb_RelOp_oi = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S249>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S249>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_d = ((rtb_LogicalOperator3_fj && rtb_RelOp_oi &&
      (BaseEngineController_A02_B.s618_Merge >= (TempOverheat_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S249>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(4, rtb_LogicalOperator2_d);
      UpdateFault(4);
    }

    /* Logic: '<S249>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S249>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_ez = ((rtb_LogicalOperator3_fj && rtb_RelOp_oi &&
      (BaseEngineController_A02_B.s618_Merge >=
       (TempOverheatSevere_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S249>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(7, rtb_LogicalOperator4_ez);
      UpdateFault(7);
    }

    /* S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_a = (TempOverheat_Warn_DataStore());

    /* Gain: '<S250>/inj//min to inj//hr' incorporates:
     *  DataTypeConversion: '<S250>/Data Type Conversion'
     *  Product: '<S250>/RPM to inj//min'
     *  S-Function (motohawk_sfun_data_read): '<S250>/Number of Combustion Events Per Revolution'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s520_Sum1 * (real_T)((uint8_T)
      CombEventsPerRev_DataStore()) * 60.0;

    /* Gain: '<S256>/Gain' */
    rtb_motohawk_interpolation_1d3_a = 0.01 *
      BaseEngineController_A02_B.s542_Merge;

    /* Gain: '<S250>/g to mg' incorporates:
     *  Constant: '<S256>/ '
     *  Constant: '<S256>/ Ethanol density (g//ml)'
     *  Constant: '<S256>/ Gasoline density (g//ml)'
     *  Product: '<S256>/Product1'
     *  Product: '<S256>/Product2'
     *  Sum: '<S256>/Add'
     *  Sum: '<S256>/Add1'
     */
    rtb_Merge_d = ((1.0 - rtb_motohawk_interpolation_1d3_a) * 0.737 + 0.789 *
                   rtb_motohawk_interpolation_1d3_a) * 1000.0;
    for (i = 0; i < 8; i++) {
      /* Gain: '<S250>/ml//hr to gal//hr' incorporates:
       *  Product: '<S250>/Mass flow to Volume flow mg//hr to ml//hr'
       *  Product: '<S250>/inj//hr to mg//hr'
       */
      rtb_Sum2_d0 = rtb_Product1_e * BaseEngineController_A02_B.s120_FPC[i] /
        rtb_Merge_d * 0.00026417205263729591;

      /* RelationalOperator: '<S250>/Relational Operator7' incorporates:
       *  Constant: '<S250>/Min fuel flow  for calc'
       */
      rtb_RelationalOperator7_b[i] = (rtb_Sum2_d0 > 0.1);

      /* Gain: '<S250>/ml//hr to gal//hr' */
      rtb_Product2_e[i] = rtb_Sum2_d0;
    }

    /* Outputs for Enabled SubSystem: '<S250>/Multiply and Divide, avoiding divde by zero1' incorporates:
     *  EnablePort: '<S258>/Enable'
     */
    if (rtb_RelationalOperator7_b[0] || rtb_RelationalOperator7_b[1] ||
        rtb_RelationalOperator7_b[2] || rtb_RelationalOperator7_b[3] ||
        rtb_RelationalOperator7_b[4] || rtb_RelationalOperator7_b[5] ||
        rtb_RelationalOperator7_b[6] || rtb_RelationalOperator7_b[7]) {
      /* Product: '<S258>/charge mass' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s258_chargemass[i] = rtb_Sum1_gje /
          rtb_Product2_e[i];
      }

      /* End of Product: '<S258>/charge mass' */
    }

    /* End of Outputs for SubSystem: '<S250>/Multiply and Divide, avoiding divde by zero1' */

    /* Switch: '<S250>/Default (if no flow)' incorporates:
     *  Constant: '<S250>/Default value'
     */
    for (i = 0; i < 8; i++) {
      if (rtb_RelationalOperator7_b[i]) {
        BaseEngineController_A02_B.s250_Defaultifnoflow[i] =
          BaseEngineController_A02_B.s258_chargemass[i];
      } else {
        BaseEngineController_A02_B.s250_Defaultifnoflow[i] = 0.0;
      }
    }

    /* End of Switch: '<S250>/Default (if no flow)' */

    /* S-Function Block: <S257>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s257_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_interpolation_1d3_a = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S257>/Product' incorporates:
     *  MinMax: '<S257>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S257>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a /= (rtb_motohawk_interpolation_1d3_a >=
      (FuelEconomy_FilterC_DataStore())) || rtIsNaN
      ((FuelEconomy_FilterC_DataStore())) ? rtb_motohawk_interpolation_1d3_a :
      (FuelEconomy_FilterC_DataStore());

    /* Sum: '<S259>/Sum' incorporates:
     *  Constant: '<S259>/Constant'
     */
    rtb_Product1_e = 1.0 - rtb_motohawk_interpolation_1d3_a;

    /* Sum: '<S259>/Sum1' incorporates:
     *  Product: '<S259>/Product'
     *  Product: '<S259>/Product1'
     *  UnitDelay: '<S259>/Unit Delay'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s259_Sum1[i] =
        BaseEngineController_A02_B.s250_Defaultifnoflow[i] *
        rtb_motohawk_interpolation_1d3_a + rtb_Product1_e *
        BaseEngineController_A02_DWork.s259_UnitDelay_DSTATE[i];
    }

    /* End of Sum: '<S259>/Sum1' */

    /* S-Function Block: <S261>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s261_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fr = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S251>/Logical Operator3' incorporates:
     *  Logic: '<S251>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S251>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S251>/motohawk_fault_status1'
     */
    rtb_LogicalOperator1_a = !(IsFaultActive(46) || IsFaultActive(47));

    /* RelationalOperator: '<S260>/RelOp' incorporates:
     *  Constant: '<S260>/Constant'
     */
    rtb_Switch_dz = (BaseEngineController_A02_B.s344_State == 3);

    /* S-Function Block: <S251>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_a = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_a;
    }

    /* Switch: '<S261>/Switch' incorporates:
     *  Constant: '<S261>/Constant'
     *  Logic: '<S251>/Logical Operator4'
     *  RelationalOperator: '<S251>/Relational Operator2'
     *  S-Function (motohawk_sfun_data_read): '<S261>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S261>/motohawk_delta_time'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S251>/motohawk_interpolation_1d'
     *  Sum: '<S261>/Sum'
     */
    if (rtb_LogicalOperator1_a && rtb_Switch_dz &&
        (BaseEngineController_A02_B.s581_Merge < rtb_motohawk_interpolation_1d_a))
    {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_fr +
        OilPresFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S261>/Switch' */
    /* RelationalOperator: '<S251>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S251>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_ch = ((rtb_motohawk_interpolation_1d3_a >
      (NoOilPres_FaultTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S251>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(40, rtb_RelationalOperator5_ch);
      UpdateFault(40);
    }

    /* Saturate: '<S261>/Saturation' */
    rtb_Saturation_eu = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S261>/motohawk_data_write' */
    /* Write to Data Storage as scalar: OilPresFaultTimer */
    {
      OilPresFaultTimer_DataStore() = rtb_Saturation_eu;
    }

    /* S-Function Block: <S251>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_a = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s317_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_a;
    }

    /* Update for UnitDelay: '<S270>/Unit Delay' */
    BaseEngineController_A02_DWork.s270_UnitDelay_DSTATE =
      rtb_RelationalOperator6_k;

    /* Update for UnitDelay: '<S271>/Unit Delay' */
    BaseEngineController_A02_DWork.s271_UnitDelay_DSTATE = rtb_Switch1_p0;

    /* Update for UnitDelay: '<S272>/Unit Delay' */
    BaseEngineController_A02_DWork.s272_UnitDelay_DSTATE = rtb_LogicalOperator10;

    /* Update for UnitDelay: '<S259>/Unit Delay' */
    memcpy((void *)BaseEngineController_A02_DWork.s259_UnitDelay_DSTATE, (void *)
           (&BaseEngineController_A02_B.s259_Sum1[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S3>/Diagnostics' */
  }

  /* UnitDelay: '<S295>/Unit Delay1' */
  rtb_DesiredLambda_idx = BaseEngineController_A02_DWork.s295_UnitDelay1_DSTATE;

  /* UnitDelay: '<S295>/Unit Delay3' */
  rtb_UnitDelay3_a = BaseEngineController_A02_DWork.s295_UnitDelay3_DSTATE;

  /* UnitDelay: '<S295>/Unit Delay4' */
  rtb_UnitDelay4_b = BaseEngineController_A02_DWork.s295_UnitDelay4_DSTATE;

  /* UnitDelay: '<S296>/Unit Delay1' */
  rtb_UnitDelay1_l = BaseEngineController_A02_DWork.s296_UnitDelay1_DSTATE;

  /* UnitDelay: '<S296>/Unit Delay3' */
  rtb_UnitDelay3_h = BaseEngineController_A02_DWork.s296_UnitDelay3_DSTATE;

  /* UnitDelay: '<S296>/Unit Delay4' */
  rtb_UnitDelay4_g = BaseEngineController_A02_DWork.s296_UnitDelay4_DSTATE;

  /* S-Function Block: <S307>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s307_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_bh = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S307>/Sum' incorporates:
   *  Product: '<S307>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S307>/motohawk_delta_time'
   */
  rtb_Abs_is = BaseEngineController_A02_B.s304_TorquetoPower *
    rtb_motohawk_delta_time_bh + BaseEngineController_A02_B.s307_Switch1;

  /* MinMax: '<S309>/MinMax' incorporates:
   *  Constant: '<S304>/Constant'
   */
  rtb_Abs_is = rtb_Abs_is >= 0.0 ? rtb_Abs_is : 0.0;

  /* MinMax: '<S309>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S304>/motohawk_calibration'
   */
  minV = (rtb_Abs_is <= (IndWorkMax_DataStore())) || rtIsNaN
    ((IndWorkMax_DataStore())) ? rtb_Abs_is : (IndWorkMax_DataStore());

  /* S-Function (motohawk_sfun_data_write): '<S325>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_A02_B.s344_State;
  }

  /* Sum: '<S329>/Sum' */
  rtb_Abs_is = BaseEngineController_A02_B.s650_Merge -
    BaseEngineController_A02_B.s667_Merge;

  /* Abs: '<S329>/Abs' */
  rtb_Abs_is = fabs(rtb_Abs_is);

  /* RelationalOperator: '<S329>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S329>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_o = ((rtb_Abs_is > (TPS1_TPS2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S329>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(65, rtb_RelationalOperator3_o);
    UpdateFault(65);
  }

  /* Saturate: '<S347>/Saturation' */
  rtb_Saturation_dt = BaseEngineController_A02_B.s347_Sum >= 16000.0 ? 16000.0 :
    BaseEngineController_A02_B.s347_Sum <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s347_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_dt;
  }

  /* Saturate: '<S349>/Saturation' */
  rtb_Saturation_o = BaseEngineController_A02_B.s349_Switch >= 16000.0 ? 16000.0
    : BaseEngineController_A02_B.s349_Switch <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s349_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S349>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_o;
  }

  /* Saturate: '<S351>/Saturation' */
  rtb_Saturation_ot = BaseEngineController_A02_B.s351_Switch >= 16000.0 ?
    16000.0 : BaseEngineController_A02_B.s351_Switch <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s351_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S351>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_ot;
  }

  /* Switch: '<S357>/Switch' incorporates:
   *  Constant: '<S357>/Constant2'
   */
  if (rtb_RelationalOperator_hu) {
    rtb_Switch_a = 0U;
  } else {
    rtb_Switch_a = rtb_Sum_l0;
  }

  /* End of Switch: '<S357>/Switch' */

  /* UnitDelay: '<S374>/Unit Delay' */
  BaseEngineController_A02_B.s374_UnitDelay =
    BaseEngineController_A02_DWork.s374_UnitDelay_DSTATE;

  /* RelationalOperator: '<S367>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S367>/motohawk_calibration'
   */
  rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s374_UnitDelay <
    (ONTime_DataStore()));

  /* Switch: '<S365>/Switch' incorporates:
   *  Constant: '<S365>/Constant'
   *  Logic: '<S365>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S365>/motohawk_calibration'
   */
  if ((Disable_ESTOP_DataStore()) > 0.0) {
    rtb_Switch_dz = TRUE;
  } else {
    rtb_Switch_dz = !(rtb_Merge_p != 0.0);
  }

  /* End of Switch: '<S365>/Switch' */

  /* MATLAB Function Block: '<S365>/MATLAB Function' */

  /* MATLAB Function 'Foreground/Inputs/CAN Inputs/112/MATLAB Function': '<S368>:1' */
  if (rtb_LogicalOperator1_a == TRUE) {
    /* '<S368>:1:3' */
    /* '<S368>:1:4' */
    rtb_Product1_e = 0.0;
  } else if (rtb_Switch_dz == FALSE) {
    /* '<S368>:1:5' */
    /* '<S368>:1:6' */
    rtb_Product1_e = 0.0;
  } else {
    /* '<S368>:1:8' */
    rtb_Product1_e = 1.0;
  }

  /* End of MATLAB Function Block: '<S365>/MATLAB Function' */

  /* DataTypeConversion: '<S365>/Data Type Conversion2' */
  rtb_RelationalOperator5_p = (rtb_Product1_e != 0.0);

  /* S-Function (motohawk_sfun_data_write): '<S365>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ESTOP */
  {
    ESTOP_DataStore() = rtb_RelationalOperator5_p;
  }

  /* S-Function Block: <S374>/motohawk_delta_time */
  rtb_motohawk_delta_time_ae = 0.005;

  /* Sum: '<S374>/Sum' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S374>/motohawk_delta_time'
   */
  rtb_DesiredLambda_idx_0 = rtb_motohawk_delta_time_ae +
    BaseEngineController_A02_B.s374_UnitDelay;

  /* MATLAB Function Block: '<S366>/Power Estimator' */

  /* MATLAB Function 'Foreground/Inputs/CAN Inputs/Phoenix/Power Estimator': '<S386>:1' */
  /* '<S386>:1:3' */
  rtb_Product1_e = rtb_Sum1_ix * 0.737562149 * rtb_Merge_c5 / 5252.0;

  /* '<S386>:1:4' */
  BaseEngineController_A02_B.s386_kw = rtb_Product1_e * 0.7457;
  BaseEngineController_A02_B.s386_hp = rtb_Product1_e;

  /* Logic: '<S499>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S499>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S499>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_m = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s360_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator2_m);
    UpdateFault(30);
  }

  /* Logic: '<S499>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S499>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S499>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_h = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s360_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(31, rtb_LogicalOperator3_h);
    UpdateFault(31);
  }

  /* RelationalOperator: '<S361>/Relational Operator' incorporates:
   *  Constant: '<S361>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S361>/motohawk_calibration'
   */
  rtb_RelationalOperator_mm = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S361>/motohawk_encoder_pseudo */
  {
    S_EncoderResourceAttributes EncoderAttribsObj;
    EncoderAttribsObj.uValidAttributesMask = USE_ENC_CONDITION;
    if (rtb_RelationalOperator_mm) {
      EncoderAttribsObj.u2PseudoRPM = (PseudoRPM_DataStore());
      EncoderAttribsObj.eResourceCond = ENCODER_ENABLED_INTERNAL;
      EncoderAttribsObj.uValidAttributesMask |= USE_ENC_PSEUDO_RPM;
    } else {
      EncoderAttribsObj.eResourceCond = ENCODER_ENABLE_EXTERNAL;
    }

    SetResourceAttributes(RES_ENCODER, &EncoderAttribsObj, BEHAVIOUR_ENCODER);
  }

  /* DataTypeConversion: '<S361>/Data Type Conversion3' incorporates:
   *  Gain: '<S361>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S361>/motohawk_calibration1'
   */
  rtb_Sum2_d0 = 16.0 * (EngineToEncoderOffset_DataStore());
  if (rtIsNaN(rtb_Sum2_d0) || rtIsInf(rtb_Sum2_d0)) {
    rtb_Sum2_d0 = 0.0;
  } else {
    y = rtb_Sum2_d0 < 0.0 ? ceil(rtb_Sum2_d0) : floor(rtb_Sum2_d0);
    rtb_Sum2_d0 = fmod(y, 65536.0);
  }

  rtb_DataTypeConversion3_p = (int16_T)(rtb_Sum2_d0 < 0.0 ? (int16_T)-(int16_T)
    (uint16_T)-rtb_Sum2_d0 : (int16_T)(uint16_T)rtb_Sum2_d0);

  /* End of DataTypeConversion: '<S361>/Data Type Conversion3' */
  /* S-Function Block: <S361>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_p;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S516>/RelOp' incorporates:
   *  Constant: '<S516>/Constant'
   */
  rtb_RelationalOperator5_p = (BaseEngineController_A02_B.s519_Sum > 100U);

  /* S-Function Block: <S361>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_A02_B.s361_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S512>/Logical Operator' incorporates:
   *  Constant: '<S518>/Constant'
   *  RelationalOperator: '<S518>/RelOp'
   */
  rtb_LogicalOperator_kt = ((rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s361_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S512>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator_kt);
    UpdateFault(3);
  }

  /* Logic: '<S512>/Logical Operator1' incorporates:
   *  Constant: '<S517>/Constant'
   *  RelationalOperator: '<S517>/RelOp'
   */
  rtb_LogicalOperator1_hh = ((rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s361_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S512>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator1_hh);
    UpdateFault(2);
  }

  /* Logic: '<S512>/Logical Operator2' incorporates:
   *  Constant: '<S514>/Constant'
   *  RelationalOperator: '<S514>/RelOp'
   */
  rtb_LogicalOperator2_nh = ((rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s361_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S512>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(0, rtb_LogicalOperator2_nh);
    UpdateFault(0);
  }

  /* Logic: '<S512>/Logical Operator3' incorporates:
   *  Constant: '<S515>/Constant'
   *  RelationalOperator: '<S515>/RelOp'
   */
  rtb_LogicalOperator3_ho = ((rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s361_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S512>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(1, rtb_LogicalOperator3_ho);
    UpdateFault(1);
  }

  /* S-Function Block: <S361>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_A02_B.s361_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S521>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S521>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S521>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S521>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_is = ((MPRD_DataStore() && (rtb_DataTypeConversion_e >
    (EGRSenseInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S521>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: EGRSenseRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_LogicalOperator2_is);
    UpdateFault(8);
  }

  /* Logic: '<S521>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S521>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S521>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S521>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_o = ((MPRD_DataStore() && (rtb_DataTypeConversion_e <
    (EGRSenseInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S521>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: EGRSenseRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_LogicalOperator3_o);
    UpdateFault(9);
  }

  /* Logic: '<S522>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S522>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S522>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S522>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_mq = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s362_Gain > (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S522>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_LogicalOperator2_mq);
    UpdateFault(23);
  }

  /* Logic: '<S522>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S522>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S522>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S522>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_a5 = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s362_Gain < (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S522>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_LogicalOperator3_a5);
    UpdateFault(24);
  }

  /* Logic: '<S523>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S523>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S523>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_it = ((MPRD_DataStore() && (rtb_Abs_b >
    (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S523>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_LogicalOperator2_it);
    UpdateFault(21);
  }

  /* Logic: '<S523>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S523>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S523>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_fk = ((MPRD_DataStore() && (rtb_Abs_b <
    (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S523>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_LogicalOperator3_fk);
    UpdateFault(22);
  }

  /* Logic: '<S524>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S524>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S524>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S524>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ir = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s526_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S524>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_LogicalOperator2_ir);
    UpdateFault(32);
  }

  /* Logic: '<S524>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S524>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S524>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S524>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_k = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s526_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S524>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(33, rtb_LogicalOperator3_k);
    UpdateFault(33);
  }

  /* Logic: '<S525>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S525>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S525>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S525>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_bq = ((MPRD_DataStore() && (rtb_DataTypeConversion_ff >
    (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S525>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(34, rtb_LogicalOperator2_bq);
    UpdateFault(34);
  }

  /* Logic: '<S525>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S525>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S525>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S525>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_ff <
    (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S525>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(35, rtb_LogicalOperator3_p);
    UpdateFault(35);
  }

  /* Logic: '<S527>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S527>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S527>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S527>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_a = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_f5 > (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S527>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(46, rtb_LogicalOperator2_a);
    UpdateFault(46);
  }

  /* Logic: '<S527>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S527>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S527>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S527>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_c = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_f5 < (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S527>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(47, rtb_LogicalOperator3_c);
    UpdateFault(47);
  }

  /* Logic: '<S528>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S528>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S528>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S528>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_f5a >
    (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S528>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(48, rtb_LogicalOperator2_p);
    UpdateFault(48);
  }

  /* Logic: '<S528>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S528>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S528>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S528>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_g = ((MPRD_DataStore() && (rtb_DataTypeConversion_f5a <
    (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S528>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(49, rtb_LogicalOperator3_g);
    UpdateFault(49);
  }

  /* Logic: '<S529>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S529>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S529>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_n1 = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_kk > (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S529>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(51, rtb_LogicalOperator2_n1);
    UpdateFault(51);
  }

  /* Logic: '<S529>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S529>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S529>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_i = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_kk < (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S529>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(52, rtb_LogicalOperator3_i);
    UpdateFault(52);
  }

  /* Logic: '<S601>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S601>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S601>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S601>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p0 = ((MPRD_DataStore() && (rtb_DataTypeConversion_m >
    (O2_PostCatMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S601>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: O2_PostCatRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(44, rtb_LogicalOperator2_p0);
    UpdateFault(44);
  }

  /* Logic: '<S601>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S601>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S601>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S601>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_pg = ((MPRD_DataStore() && (rtb_DataTypeConversion_m <
    (O2_PostCatMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S601>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: O2_PostCatRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(45, rtb_LogicalOperator3_pg);
    UpdateFault(45);
  }

  /* RelationalOperator: '<S637>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S637>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_i = ((BaseEngineController_A02_B.s632_Switch >
    (TPS1InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S637>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(57, rtb_RelationalOperator5_i);
    UpdateFault(57);
  }

  /* RelationalOperator: '<S637>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S637>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_o = ((BaseEngineController_A02_B.s632_Switch <
    (TPS1InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S637>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(58, rtb_RelationalOperator4_o);
    UpdateFault(58);
  }

  /* RelationalOperator: '<S637>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration9'
   */
  rtb_RelationalOperator_f = ((BaseEngineController_A02_B.s636_MinMax >
    (TPS1Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S637>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS1AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(55, rtb_RelationalOperator_f);
    UpdateFault(55);
  }

  /* RelationalOperator: '<S637>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_f1 = ((BaseEngineController_A02_B.s636_MinMax1 >
    (TPS1Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S637>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(53, rtb_RelationalOperator3_f1);
    UpdateFault(53);
  }

  /* RelationalOperator: '<S637>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_b = ((BaseEngineController_A02_B.s636_MinMax1 <
    (TPS1Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S637>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(54, rtb_RelationalOperator2_b);
    UpdateFault(54);
  }

  /* RelationalOperator: '<S637>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_kg = ((BaseEngineController_A02_B.s636_MinMax <
    (TPS1Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S637>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS1AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(56, rtb_RelationalOperator1_kg);
    UpdateFault(56);
  }

  /* UnitDelay: '<S643>/Unit Delay1' */
  rtb_Abs_is = BaseEngineController_A02_DWork.s643_UnitDelay1_DSTATE;

  /* UnitDelay: '<S643>/Unit Delay' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE;

  /* UnitDelay: '<S643>/Unit Delay3' */
  rtb_Merge_d = BaseEngineController_A02_DWork.s643_UnitDelay3_DSTATE;

  /* UnitDelay: '<S643>/Unit Delay4' */
  rtb_Merge_o4 = BaseEngineController_A02_DWork.s643_UnitDelay4_DSTATE;

  /* MinMax: '<S643>/MinMax1' incorporates:
   *  UnitDelay: '<S643>/Unit Delay'
   *  UnitDelay: '<S643>/Unit Delay3'
   *  UnitDelay: '<S643>/Unit Delay4'
   */
  y = (rtb_Abs_is <= BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE) ? rtb_Abs_is :
    BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_A02_DWork.s643_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_A02_DWork.s643_UnitDelay3_DSTATE) ? y :
    BaseEngineController_A02_DWork.s643_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_A02_DWork.s643_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_A02_DWork.s643_UnitDelay4_DSTATE) ? y :
    BaseEngineController_A02_DWork.s643_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_A02_B.s632_Switch) || rtIsNaN
    (BaseEngineController_A02_B.s632_Switch) ? y :
    BaseEngineController_A02_B.s632_Switch;

  /* RelationalOperator: '<S641>/Relational Operator9' incorporates:
   *  MinMax: '<S643>/MinMax1'
   */
  rtb_LogicalOperator1_a = (y > BaseEngineController_A02_B.s636_MinMax1);

  /* RelationalOperator: '<S641>/Relational Operator5' incorporates:
   *  MinMax: '<S643>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_p = (y <= (TPS1Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S641>/Relational Operator6' incorporates:
   *  MinMax: '<S643>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_k = (y >= (TPS1Adapt_Hi_Min_DataStore()));

  /* Sum: '<S641>/Sum2' incorporates:
   *  MinMax: '<S643>/MinMax1'
   */
  rtb_Abs_b = y - BaseEngineController_A02_B.s636_MinMax1;

  /* Abs: '<S641>/Abs' */
  rtb_Abs_b = fabs(rtb_Abs_b);

  /* Outputs for Enabled SubSystem: '<S641>/Store Current Position' incorporates:
   *  EnablePort: '<S644>/Enable'
   */
  /* Logic: '<S641>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S641>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
      rtb_RelationalOperator6_k && (TPS1AdaptHiEnable_DataStore()) && (rtb_Abs_b
       > (TPS1Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S644>/Data Type Conversion2' incorporates:
     *  MinMax: '<S643>/MinMax1'
     */
    if (y < 65536.0) {
      if (y >= 0.0) {
        rtb_DataTypeConversion2_m = (uint16_T)y;
      } else {
        rtb_DataTypeConversion2_m = 0U;
      }
    } else {
      rtb_DataTypeConversion2_m = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S644>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S644>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Hi */
    {
      TPS1Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_m;
    }
  }

  /* End of Logic: '<S641>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S641>/Store Current Position' */

  /* MinMax: '<S643>/MinMax' */
  y = (BaseEngineController_A02_B.s632_Switch >= rtb_Merge_o4) || rtIsNaN
    (rtb_Merge_o4) ? BaseEngineController_A02_B.s632_Switch : rtb_Merge_o4;
  y = (y >= rtb_Merge_d) || rtIsNaN(rtb_Merge_d) ? y : rtb_Merge_d;
  y = (y >= rtb_Product1_e) || rtIsNaN(rtb_Product1_e) ? y : rtb_Product1_e;
  y = (y >= rtb_Abs_is) || rtIsNaN(rtb_Abs_is) ? y : rtb_Abs_is;

  /* RelationalOperator: '<S642>/Relational Operator9' incorporates:
   *  MinMax: '<S643>/MinMax'
   */
  rtb_LogicalOperator1_a = (y < BaseEngineController_A02_B.s636_MinMax);

  /* RelationalOperator: '<S642>/Relational Operator5' incorporates:
   *  MinMax: '<S643>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_p = (y <= (TPS1Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S642>/Relational Operator6' incorporates:
   *  MinMax: '<S643>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_k = (y >= (TPS1Adapt_Low_Min_DataStore()));

  /* Sum: '<S642>/Sum2' incorporates:
   *  MinMax: '<S643>/MinMax'
   */
  rtb_Abs_is = y - BaseEngineController_A02_B.s636_MinMax;

  /* Abs: '<S642>/Abs' */
  rtb_Abs_is = fabs(rtb_Abs_is);

  /* Logic: '<S642>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S642>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration14'
   */
  rtb_LogicalOperator1_a = (rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
    rtb_RelationalOperator6_k && (TPS1AdaptLoEnable_DataStore()) && (rtb_Abs_is >
                             (TPS1Adapt_Delta_DataStore())));

  /* Outputs for Enabled SubSystem: '<S642>/Store Current Position' incorporates:
   *  EnablePort: '<S645>/Enable'
   */
  /* Logic: '<S642>/Logical Operator2' incorporates:
   *  Logic: '<S642>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read'
   */
  if (rtb_LogicalOperator1_a || (rtb_RelationalOperator5_p &&
       rtb_RelationalOperator6_k && (TPS1AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S645>/Data Type Conversion2' incorporates:
     *  MinMax: '<S643>/MinMax'
     */
    if (y < 65536.0) {
      if (y >= 0.0) {
        rtb_DataTypeConversion2_lz = (uint16_T)y;
      } else {
        rtb_DataTypeConversion2_lz = 0U;
      }
    } else {
      rtb_DataTypeConversion2_lz = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S645>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S645>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Low */
    {
      TPS1Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_lz;
    }
  }

  /* End of Logic: '<S642>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S642>/Store Current Position' */

  /* RelationalOperator: '<S654>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S654>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_c = ((BaseEngineController_A02_B.s633_Switch >
    (TPS2InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S654>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_RelationalOperator5_c);
    UpdateFault(63);
  }

  /* RelationalOperator: '<S654>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S654>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_f = ((BaseEngineController_A02_B.s633_Switch <
    (TPS2InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S654>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(64, rtb_RelationalOperator4_f);
    UpdateFault(64);
  }

  /* RelationalOperator: '<S654>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration9'
   */
  rtb_RelationalOperator_a1 = ((BaseEngineController_A02_B.s653_MinMax >
    (TPS2Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S654>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS2AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_RelationalOperator_a1);
    UpdateFault(61);
  }

  /* RelationalOperator: '<S654>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_bm = ((BaseEngineController_A02_B.s653_MinMax1 >
    (TPS2Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S654>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(59, rtb_RelationalOperator3_bm);
    UpdateFault(59);
  }

  /* RelationalOperator: '<S654>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_ly = ((BaseEngineController_A02_B.s653_MinMax1 <
    (TPS2Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S654>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_RelationalOperator2_ly);
    UpdateFault(60);
  }

  /* RelationalOperator: '<S654>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_i = ((BaseEngineController_A02_B.s653_MinMax <
    (TPS2Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S654>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS2AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_RelationalOperator1_i);
    UpdateFault(62);
  }

  /* UnitDelay: '<S660>/Unit Delay1' */
  rtb_Abs_is = BaseEngineController_A02_DWork.s660_UnitDelay1_DSTATE;

  /* UnitDelay: '<S660>/Unit Delay' */
  rtb_Sum1_gje = BaseEngineController_A02_DWork.s660_UnitDelay_DSTATE;

  /* UnitDelay: '<S660>/Unit Delay3' */
  rtb_Merge_c5 = BaseEngineController_A02_DWork.s660_UnitDelay3_DSTATE;

  /* UnitDelay: '<S660>/Unit Delay4' */
  rtb_Sum2_d0 = BaseEngineController_A02_DWork.s660_UnitDelay4_DSTATE;

  /* MinMax: '<S660>/MinMax1' incorporates:
   *  UnitDelay: '<S660>/Unit Delay'
   *  UnitDelay: '<S660>/Unit Delay3'
   *  UnitDelay: '<S660>/Unit Delay4'
   */
  y = (rtb_Abs_is <= BaseEngineController_A02_DWork.s660_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_A02_DWork.s660_UnitDelay_DSTATE) ? rtb_Abs_is :
    BaseEngineController_A02_DWork.s660_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_A02_DWork.s660_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_A02_DWork.s660_UnitDelay3_DSTATE) ? y :
    BaseEngineController_A02_DWork.s660_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_A02_DWork.s660_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_A02_DWork.s660_UnitDelay4_DSTATE) ? y :
    BaseEngineController_A02_DWork.s660_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_A02_B.s633_Switch) || rtIsNaN
    (BaseEngineController_A02_B.s633_Switch) ? y :
    BaseEngineController_A02_B.s633_Switch;

  /* RelationalOperator: '<S658>/Relational Operator9' incorporates:
   *  MinMax: '<S660>/MinMax1'
   */
  rtb_LogicalOperator1_a = (y > BaseEngineController_A02_B.s653_MinMax1);

  /* RelationalOperator: '<S658>/Relational Operator5' incorporates:
   *  MinMax: '<S660>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_p = (y <= (TPS2Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S658>/Relational Operator6' incorporates:
   *  MinMax: '<S660>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_k = (y >= (TPS2Adapt_Hi_Min_DataStore()));

  /* Sum: '<S658>/Sum2' incorporates:
   *  MinMax: '<S660>/MinMax1'
   */
  rtb_Abs_b = y - BaseEngineController_A02_B.s653_MinMax1;

  /* Abs: '<S658>/Abs' */
  rtb_Abs_b = fabs(rtb_Abs_b);

  /* Outputs for Enabled SubSystem: '<S658>/Store Current Position' incorporates:
   *  EnablePort: '<S661>/Enable'
   */
  /* Logic: '<S658>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S658>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S653>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S653>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
      rtb_RelationalOperator6_k && (TPS2AdaptHiEnable_DataStore()) && (rtb_Abs_b
       > (TPS2Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S661>/Data Type Conversion2' incorporates:
     *  MinMax: '<S660>/MinMax1'
     */
    if (y < 65536.0) {
      if (y >= 0.0) {
        rtb_DataTypeConversion2_h = (uint16_T)y;
      } else {
        rtb_DataTypeConversion2_h = 0U;
      }
    } else {
      rtb_DataTypeConversion2_h = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S661>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S661>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Hi */
    {
      TPS2Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_h;
    }
  }

  /* End of Logic: '<S658>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S658>/Store Current Position' */

  /* MinMax: '<S660>/MinMax' */
  y = (BaseEngineController_A02_B.s633_Switch >= rtb_Sum2_d0) || rtIsNaN
    (rtb_Sum2_d0) ? BaseEngineController_A02_B.s633_Switch : rtb_Sum2_d0;
  y = (y >= rtb_Merge_c5) || rtIsNaN(rtb_Merge_c5) ? y : rtb_Merge_c5;
  y = (y >= rtb_Sum1_gje) || rtIsNaN(rtb_Sum1_gje) ? y : rtb_Sum1_gje;
  y = (y >= rtb_Abs_is) || rtIsNaN(rtb_Abs_is) ? y : rtb_Abs_is;

  /* RelationalOperator: '<S659>/Relational Operator9' incorporates:
   *  MinMax: '<S660>/MinMax'
   */
  rtb_LogicalOperator1_a = (y < BaseEngineController_A02_B.s653_MinMax);

  /* RelationalOperator: '<S659>/Relational Operator5' incorporates:
   *  MinMax: '<S660>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_p = (y <= (TPS2Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S659>/Relational Operator6' incorporates:
   *  MinMax: '<S660>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_k = (y >= (TPS2Adapt_Low_Min_DataStore()));

  /* Sum: '<S659>/Sum2' incorporates:
   *  MinMax: '<S660>/MinMax'
   */
  rtb_Abs_is = y - BaseEngineController_A02_B.s653_MinMax;

  /* Abs: '<S659>/Abs' */
  rtb_Abs_is = fabs(rtb_Abs_is);

  /* Outputs for Enabled SubSystem: '<S659>/Store Current Position' incorporates:
   *  EnablePort: '<S662>/Enable'
   */
  /* Logic: '<S659>/Logical Operator2' incorporates:
   *  Logic: '<S659>/Logical Operator1'
   *  Logic: '<S659>/Logical Operator4'
   *  RelationalOperator: '<S659>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S653>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S653>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read'
   */
  if ((rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
       rtb_RelationalOperator6_k && (TPS2AdaptLoEnable_DataStore()) &&
       (rtb_Abs_is > (TPS2Adapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_p && rtb_RelationalOperator6_k &&
       (TPS2AdaptLoEnable_DataStore()) && TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S662>/Data Type Conversion2' incorporates:
     *  MinMax: '<S660>/MinMax'
     */
    if (y < 65536.0) {
      if (y >= 0.0) {
        rtb_DataTypeConversion2_n = (uint16_T)y;
      } else {
        rtb_DataTypeConversion2_n = 0U;
      }
    } else {
      rtb_DataTypeConversion2_n = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S662>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S662>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Low */
    {
      TPS2Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_n;
    }
  }

  /* End of Logic: '<S659>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S659>/Store Current Position' */

  /* Update for UnitDelay: '<S527>/Unit Delay1' */
  BaseEngineController_A02_DWork.s527_UnitDelay1_DSTATE = rtb_Merge_bw;

  /* Update for UnitDelay: '<S582>/Unit Delay' */
  BaseEngineController_A02_DWork.s582_UnitDelay_DSTATE = rtb_Sum1_i;

  /* Update for UnitDelay: '<S520>/Unit Delay' */
  BaseEngineController_A02_DWork.s520_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s520_Sum1;

  /* Update for UnitDelay: '<S325>/Unit Delay' */
  BaseEngineController_A02_DWork.s325_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s344_State;

  /* Update for UnitDelay: '<S529>/Unit Delay1' */
  BaseEngineController_A02_DWork.s529_UnitDelay1_DSTATE = rtb_Merge_cs;

  /* Update for UnitDelay: '<S598>/Unit Delay' */
  BaseEngineController_A02_DWork.s598_UnitDelay_DSTATE = rtb_Sum1_gj;

  /* Update for UnitDelay: '<S646>/Unit Delay' */
  BaseEngineController_A02_DWork.s646_UnitDelay_DSTATE = rtb_Sum1_m2;

  /* Update for UnitDelay: '<S639>/Unit Delay1' */
  BaseEngineController_A02_DWork.s639_UnitDelay1_DSTATE = rtb_Merge_h;

  /* Update for UnitDelay: '<S663>/Unit Delay' */
  BaseEngineController_A02_DWork.s663_UnitDelay_DSTATE = rtb_Sum1_dp;

  /* Update for UnitDelay: '<S656>/Unit Delay1' */
  BaseEngineController_A02_DWork.s656_UnitDelay1_DSTATE = rtb_Merge_py;

  /* Update for UnitDelay: '<S327>/Unit Delay' */
  BaseEngineController_A02_DWork.s327_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s607_Merge;

  /* Update for UnitDelay: '<S601>/Unit Delay' */
  BaseEngineController_A02_DWork.s601_UnitDelay_DSTATE = rtb_Merge_dh;

  /* Update for UnitDelay: '<S609>/Unit Delay' */
  BaseEngineController_A02_DWork.s609_UnitDelay_DSTATE = rtb_Sum1_kq;

  /* Update for UnitDelay: '<S525>/Unit Delay1' */
  BaseEngineController_A02_DWork.s525_UnitDelay1_DSTATE = rtb_Merge_pk;

  /* Update for UnitDelay: '<S283>/Unit Delay' */
  BaseEngineController_A02_DWork.s283_UnitDelay_DSTATE = rtb_Merge_kp;

  /* Update for UnitDelay: '<S524>/Unit Delay1' */
  BaseEngineController_A02_DWork.s524_UnitDelay1_DSTATE = rtb_Merge_bn;

  /* Update for UnitDelay: '<S564>/Unit Delay' */
  BaseEngineController_A02_DWork.s564_UnitDelay_DSTATE = rtb_Sum1_pb;

  /* Update for UnitDelay: '<S499>/Unit Delay' */
  BaseEngineController_A02_DWork.s499_UnitDelay_DSTATE = rtb_Merge_j;

  /* Update for UnitDelay: '<S507>/Unit Delay' */
  BaseEngineController_A02_DWork.s507_UnitDelay_DSTATE = rtb_Sum1_f;

  /* Update for UnitDelay: '<S295>/Unit Delay2' */
  BaseEngineController_A02_DWork.s295_UnitDelay2_DSTATE = rtb_DesiredLambda_idx;

  /* Update for UnitDelay: '<S298>/Unit Delay' */
  BaseEngineController_A02_DWork.s298_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s298_Sum1;

  /* Update for UnitDelay: '<S296>/Unit Delay2' */
  BaseEngineController_A02_DWork.s296_UnitDelay2_DSTATE = rtb_UnitDelay1_l;

  /* Update for UnitDelay: '<S301>/Unit Delay' */
  BaseEngineController_A02_DWork.s301_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s301_Sum1;

  /* Update for UnitDelay: '<S294>/Unit Delay' */
  BaseEngineController_A02_DWork.s294_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s312_MinMax1;

  /* Update for UnitDelay: '<S341>/Unit Delay' */
  BaseEngineController_A02_DWork.s341_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s520_Sum1;

  /* Update for UnitDelay: '<S343>/Unit Delay' */
  BaseEngineController_A02_DWork.s343_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s343_Sum1;

  /* Update for UnitDelay: '<S547>/Unit Delay' */
  BaseEngineController_A02_DWork.s547_UnitDelay_DSTATE = rtb_Sum2_n;

  /* Update for UnitDelay: '<S522>/Unit Delay1' */
  BaseEngineController_A02_DWork.s522_UnitDelay1_DSTATE = rtb_Merge_k1;

  /* Update for UnitDelay: '<S546>/Unit Delay' */
  BaseEngineController_A02_DWork.s546_UnitDelay_DSTATE = rtb_Sum1_da;

  /* Update for UnitDelay: '<S544>/Unit Delay' */
  BaseEngineController_A02_DWork.s544_UnitDelay_DSTATE = rtb_Merge_k1;

  /* Update for UnitDelay: '<S544>/Unit Delay1' */
  BaseEngineController_A02_DWork.s544_UnitDelay1_DSTATE = rtb_UnitDelay_li;

  /* Update for UnitDelay: '<S544>/Unit Delay2' */
  BaseEngineController_A02_DWork.s544_UnitDelay2_DSTATE = rtb_UnitDelay1_e;

  /* Update for Enabled SubSystem: '<S7>/Run' incorporates:
   *  Update for EnablePort: '<S121>/Enable'
   */
  if (BaseEngineController_A02_DWork.s7_Run_MODE) {
  }

  /* End of Update for SubSystem: '<S7>/Run' */

  /* Update for UnitDelay: '<S521>/Unit Delay1' */
  BaseEngineController_A02_DWork.s521_UnitDelay1_DSTATE = rtb_Merge_n;

  /* Update for UnitDelay: '<S535>/Unit Delay' */
  BaseEngineController_A02_DWork.s535_UnitDelay_DSTATE = rtb_Sum1_i5;

  /* Update for S-Function (motohawk_sfun_dout): '<S677>/motohawk_dout' */

  /* S-Function Block: DOut7474p0004 */
  {
    DOut7474p0004_DiscreteOutput_Set
      (BaseEngineController_A02_B.s769_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S678>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_n,
    rtb_DataTypeConversion4_k, 0, 1);

  /* Update for UnitDelay: '<S73>/Unit Delay' */
  BaseEngineController_A02_DWork.s73_UnitDelay_DSTATE = rtb_Merge_hk;

  /* Update for UnitDelay: '<S72>/Unit Delay' */
  BaseEngineController_A02_DWork.s72_UnitDelay_DSTATE = rtb_Merge_mj;

  /* Update for UnitDelay: '<S70>/Unit Delay' */
  BaseEngineController_A02_DWork.s70_UnitDelay_DSTATE = rtb_Merge_n2;

  /* Update for UnitDelay: '<S69>/Unit Delay' */
  BaseEngineController_A02_DWork.s69_UnitDelay_DSTATE = rtb_Merge_fc;

  /* Update for UnitDelay: '<S68>/Unit Delay' */
  BaseEngineController_A02_DWork.s68_UnitDelay_DSTATE = rtb_Merge_p2;

  /* Update for UnitDelay: '<S67>/Unit Delay' */
  BaseEngineController_A02_DWork.s67_UnitDelay_DSTATE = rtb_Merge_b0;

  /* Update for UnitDelay: '<S66>/Unit Delay' */
  BaseEngineController_A02_DWork.s66_UnitDelay_DSTATE = rtb_Merge_f3;

  /* Update for UnitDelay: '<S65>/Unit Delay' */
  BaseEngineController_A02_DWork.s65_UnitDelay_DSTATE = rtb_Merge_iu;

  /* Update for UnitDelay: '<S71>/Unit Delay' */
  memcpy((void *)BaseEngineController_A02_DWork.s71_UnitDelay_DSTATE, (void *)
         &rtb_Merge_pj[0], sizeof(real_T) << 3U);

  /* Update for S-Function (motohawk_sfun_dout): '<S680>/motohawk_dout' */

  /* S-Function Block: DOut7752p0005 */
  {
    DOut7752p0005_DiscreteOutput_Set
      (BaseEngineController_A02_B.s797_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S681>/motohawk_dout' */

  /* S-Function Block: DOut7762p0005 */
  {
    DOut7762p0005_DiscreteOutput_Set
      (BaseEngineController_A02_B.s801_LogicalOperator);
  }

  /* Update for UnitDelay: '<S357>/Unit Delay' */
  BaseEngineController_A02_DWork.s357_UnitDelay_DSTATE = rtb_Switch_a;

  /* Update for UnitDelay: '<S307>/Unit Delay' incorporates:
   *  MinMax: '<S309>/MinMax1'
   */
  BaseEngineController_A02_DWork.s307_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S327>/Unit Delay1' */
  BaseEngineController_A02_DWork.s327_UnitDelay1_DSTATE =
    BaseEngineController_A02_B.s607_Merge;

  /* Update for UnitDelay: '<S523>/Unit Delay1' */
  BaseEngineController_A02_DWork.s523_UnitDelay1_DSTATE = rtb_Merge_dm;

  /* Update for UnitDelay: '<S556>/Unit Delay' */
  BaseEngineController_A02_DWork.s556_UnitDelay_DSTATE = rtb_Sum1_j;

  /* Update for UnitDelay: '<S572>/Unit Delay' */
  BaseEngineController_A02_DWork.s572_UnitDelay_DSTATE = rtb_Sum1_h;

  /* Update for UnitDelay: '<S424>/Unit Delay' */
  BaseEngineController_A02_DWork.s424_UnitDelay_DSTATE = rtb_Sum1_ix;

  /* Update for UnitDelay: '<S528>/Unit Delay1' */
  BaseEngineController_A02_DWork.s528_UnitDelay1_DSTATE = rtb_Merge_l;

  /* Update for UnitDelay: '<S590>/Unit Delay' */
  BaseEngineController_A02_DWork.s590_UnitDelay_DSTATE = rtb_Sum1_d3;

  /* Update for UnitDelay: '<S295>/Unit Delay1' */
  BaseEngineController_A02_DWork.s295_UnitDelay1_DSTATE = rtb_UnitDelay3_a;

  /* Update for UnitDelay: '<S295>/Unit Delay3' */
  BaseEngineController_A02_DWork.s295_UnitDelay3_DSTATE = rtb_UnitDelay4_b;

  /* Update for UnitDelay: '<S295>/Unit Delay4' */
  BaseEngineController_A02_DWork.s295_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s520_Sum1;

  /* Update for UnitDelay: '<S296>/Unit Delay1' */
  BaseEngineController_A02_DWork.s296_UnitDelay1_DSTATE = rtb_UnitDelay3_h;

  /* Update for UnitDelay: '<S296>/Unit Delay3' */
  BaseEngineController_A02_DWork.s296_UnitDelay3_DSTATE = rtb_UnitDelay4_g;

  /* Update for UnitDelay: '<S296>/Unit Delay4' */
  BaseEngineController_A02_DWork.s296_UnitDelay4_DSTATE = rtb_Torque;

  /* Update for UnitDelay: '<S374>/Unit Delay' */
  BaseEngineController_A02_DWork.s374_UnitDelay_DSTATE = rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S643>/Unit Delay1' */
  BaseEngineController_A02_DWork.s643_UnitDelay1_DSTATE = rtb_Product1_e;

  /* Update for UnitDelay: '<S643>/Unit Delay' */
  BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE = rtb_Merge_d;

  /* Update for UnitDelay: '<S643>/Unit Delay3' */
  BaseEngineController_A02_DWork.s643_UnitDelay3_DSTATE = rtb_Merge_o4;

  /* Update for UnitDelay: '<S643>/Unit Delay4' */
  BaseEngineController_A02_DWork.s643_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s632_Switch;

  /* Update for UnitDelay: '<S660>/Unit Delay1' */
  BaseEngineController_A02_DWork.s660_UnitDelay1_DSTATE = rtb_Sum1_gje;

  /* Update for UnitDelay: '<S660>/Unit Delay' */
  BaseEngineController_A02_DWork.s660_UnitDelay_DSTATE = rtb_Merge_c5;

  /* Update for UnitDelay: '<S660>/Unit Delay3' */
  BaseEngineController_A02_DWork.s660_UnitDelay3_DSTATE = rtb_Sum2_d0;

  /* Update for UnitDelay: '<S660>/Unit Delay4' */
  BaseEngineController_A02_DWork.s660_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s633_Switch;
}

/* Termination for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Term(void)
{
  /* Terminate for Enabled SubSystem: '<S357>/Triggered Subsystem' incorporates:
   *  Terminate for S-Function (fcncallgen): '<S358>/Function-Call Generator'
   *  Terminate for SubSystem: '<S3>/Diagnostics'
   */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
