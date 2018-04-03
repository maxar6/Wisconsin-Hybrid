/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1579
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Fri Feb 16 15:06:38 2018
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

/* Named constants for Stateflow: '<S12>/ETC Test  Manager' */
#define BaseEngineController_A02_IN_ForcedShutdown (1U)
#define BaseEngineController_A02_IN_LowAdapt (2U)
#define BaseEngineController_A02_IN_PassThrough (3U)
#define BaseEngineController_A02_IN_SpringTest (4U)
#define BaseEngineController_A02_IN_SpringTestComplete (5U)
#define BaseEngineController_A02_IN_SpringTestSetpoint (6U)

/* Named constants for Stateflow: '<S113>/Remy Control' */
#define BaseEngineController_A02_IN_cranking (1U)
#define BaseEngineController_A02_IN_default (2U)
#define BaseEngineController_A02_IN_generating (3U)
#define BaseEngineController_A02_IN_idle (4U)
#define BaseEngineController_A02_IN_startFail (5U)

/* Named constants for Stateflow: '<S269>/Baro Stall State Delay' */
#define BaseEngineController_A02_IN_CrankRun (1U)
#define BaseEngineController_A02_IN_Stall (2U)
#define BaseEngineController_A02_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S319>/Engine State Machine' */
#define BaseEngineController_A02_IN_Crank (1U)
#define BaseEngineController_A02_IN_Run (2U)
#define BaseEngineController_A02_IN_Stall_e (3U)

/*
 * Output and update for enable system:
 *    '<S145>/Multiply and Divide, avoiding divde by zero'
 *    '<S297>/Multiply and Divide, avoiding divde by zero1'
 */
void BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(boolean_T
  rtu_0, real_T rtu_X1, real_T rtu_X2, real_T rtu_Divide1, real_T rtu_Divide2,
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02 *localB)
{
  /* Outputs for Enabled SubSystem: '<S145>/Multiply and Divide, avoiding divde by zero' incorporates:
   *  EnablePort: '<S150>/Enable'
   */
  if (rtu_0) {
    /* Product: '<S150>/charge mass' */
    localB->s150_chargemass = rtu_X1 * rtu_X2 / rtu_Divide1 / rtu_Divide2;
  }

  /* End of Outputs for SubSystem: '<S145>/Multiply and Divide, avoiding divde by zero' */
}

/*
 * Start for enable system:
 *    '<S314>/PassThrough1'
 *    '<S314>/PassThrough2'
 */
void BaseEngineController_A02_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S328>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S314>/PassThrough1'
 *    '<S314>/PassThrough2'
 */
void BaseEngineController_A02_PassThrough1(boolean_T rtu_0, real_T rtu_1, real_T
  *rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S314>/PassThrough1' incorporates:
   *  EnablePort: '<S328>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S328>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S314>/PassThrough1' */
}

/*
 * Output and update for action system:
 *    '<S486>/If Action Subsystem'
 *    '<S486>/If Action Subsystem1'
 *    '<S486>/If Action Subsystem2'
 *    '<S508>/If Action Subsystem'
 *    '<S508>/If Action Subsystem1'
 *    '<S508>/If Action Subsystem2'
 *    '<S509>/If Action Subsystem'
 *    '<S509>/If Action Subsystem1'
 *    '<S509>/If Action Subsystem2'
 *    '<S510>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_A02_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S489>/In' */
  (*rty_Out) = rtu_0;
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Init(void)
{
  /* S-Function Block: <S564>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s564_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S500>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s500_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Initial conditions for function-call system: '<S357>/Temp Sensors' */

  /* S-Function Block: <S601>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s601_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S610>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s610_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S319>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S338>:4' */
  BaseEngineController_A02_DWork.s338_is_c2_BaseEngineController_A02 =
    BaseEngineController_A02_IN_Stall_e;

  /* Entry 'Stall': '<S338>:1' */
  BaseEngineController_A02_B.s338_State = 1U;

  /* S-Function Block: <S123>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s123_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S113>/Remy Control' */
  BaseEngineController_A02_DWork.s121_is_active_c5_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s121_count = 0.0;
  BaseEngineController_A02_B.s121_cranking = 0.0;
  BaseEngineController_A02_B.s121_idle = 0.0;
  BaseEngineController_A02_B.s121_APPRamp = 0.0;
  BaseEngineController_A02_B.s121_torqueRamp = 0.0;
  BaseEngineController_A02_B.s121_remyEn = 0.0;
  BaseEngineController_A02_B.s121_maxRPM = 0.0;
  BaseEngineController_A02_B.s121_motorTQ = 0.0;
  BaseEngineController_A02_B.s121_generatingTQ = 0.0;

  /* S-Function Block: <S580>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s580_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S625>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s625_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S642>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s642_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Atomic SubSystem: '<S272>/Base TPS Request' */

  /* S-Function Block: <S330>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s330_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S314>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s314_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S272>/Base TPS Request' */

  /* S-Function Block: <S590>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s590_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S343>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s343_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S269>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s269_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S269>/Baro Stall State Delay' */
  BaseEngineController_A02_DWork.s274_TOld = 0.0;
  BaseEngineController_A02_B.s274_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S274>:4' */
  BaseEngineController_A02_DWork.s274_is_c19_BaseEngineController_A02 =
    BaseEngineController_A02_IN_Stall;

  /* Entry 'Stall': '<S274>:1' */
  BaseEngineController_A02_B.s274_Enable = TRUE;

  /* S-Function Block: <S546>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s546_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S488>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s488_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S288>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s288_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S335>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s335_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S534>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s534_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S753>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s753_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S345>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s345_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S122>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s122_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S538>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s538_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S554>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s554_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S517>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s517_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S572>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s572_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S301>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s301_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S373>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s373_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S357>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_6806p0004 */
  BaseEngineController_A02_DWork.s357_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S319>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_5543p0001 */
  BaseEngineController_A02_DWork.s319_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S513>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_6623p0005 */
  BaseEngineController_A02_DWork.s513_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1269p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1268p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7562p0001 */

  /* Enable for function-call system: '<S5>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S733>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S738>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_7097p0004 */
  BaseEngineController_A02_DWork.s738_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S733>/EST Enable TDC Counter' */
  BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S357>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_6806p0004 */
  BaseEngineController_A02_DWork.s357_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S319>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_5543p0001 */
  BaseEngineController_A02_DWork.s319_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S7>/Stall' */
  BaseEngineController_A02_DWork.s7_Stall_MODE = FALSE;

  /* End of Disable for SubSystem: '<S7>/Stall' */

  /* Disable for Enabled SubSystem: '<S7>/Crank' */
  BaseEngineController_A02_DWork.s7_Crank_MODE = FALSE;

  /* End of Disable for SubSystem: '<S7>/Crank' */

  /* Disable for Enabled SubSystem: '<S269>/Capture Signal At Startup' */
  /* Disable for Enabled SubSystem: '<S275>/Collect Average' */
  BaseEngineController_A02_DWork.s275_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S275>/Collect Average' */
  BaseEngineController_A02_DWork.s269_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S269>/Capture Signal At Startup' */

  /* Level2 S-Function Block: '<S513>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_6623p0005 */
  BaseEngineController_A02_DWork.s513_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S272>/Capture ECT At Startup' */
  /* Disable for Enabled SubSystem: '<S315>/Collect Average' */
  BaseEngineController_A02_DWork.s315_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S315>/Collect Average' */
  BaseEngineController_A02_DWork.s272_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S272>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S7>/Run' */

  /* Level2 S-Function Block: '<S115>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_3881p0004 */
  BaseEngineController_A02_DWork.s115_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Atomic SubSystem: '<S115>/Fuel System Manager' */
  /* Disable for Atomic SubSystem: '<S128>/Injector Manager' */
  /* Disable for Enabled SubSystem: '<S139>/Delta TPS Transient Fueling' */
  /* Disable for Enabled SubSystem: '<S144>/ECT Transient Fueling' */
  /* Disable for Outport: '<S147>/Mult' */
  BaseEngineController_A02_B.s147_motohawk_interpolation_1d = 1.0;
  BaseEngineController_A02_DWork.s144_ECTTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S144>/ECT Transient Fueling' */

  /* Disable for Outport: '<S144>/DeltaTPSMult' */
  BaseEngineController_A02_B.s144_Product1 = 1.0;
  BaseEngineController_A02_DWork.s139_DeltaTPSTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S139>/Delta TPS Transient Fueling' */
  /* End of Disable for SubSystem: '<S128>/Injector Manager' */
  /* End of Disable for SubSystem: '<S115>/Fuel System Manager' */
  BaseEngineController_A02_DWork.s7_Run_MODE = FALSE;

  /* End of Disable for SubSystem: '<S7>/Run' */
  /* Level2 S-Function Block: '<S6>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1269p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1268p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S14>/PassThrough1' */
  BaseEngineController_A02_DWork.s14_PassThrough1_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S14>/PassThrough3' */
  for (i = 0; i < 32; i++) {
    /* Disable for Outport: '<S88>/Out1' */
    BaseEngineController_A02_B.s14_Merge1[i] = 0;

    /* Disable for Outport: '<S90>/Out1' */
    BaseEngineController_A02_B.s14_Merge1[i] = 0;
  }

  /* End of Disable for SubSystem: '<S14>/PassThrough1' */
  BaseEngineController_A02_DWork.s14_PassThrough3_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/PassThrough3' */

  /* Disable for Enabled SubSystem: '<S14>/SequenceCutMachine' */

  /* Level2 S-Function Block: '<S93>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC1_EVENT_1016p0001 */
  BaseEngineController_A02_DWork.s93_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_A02_DWork.s14_SequenceCutMachine_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S14>/PassThrough4' */
  for (i = 0; i < 8; i++) {
    /* Disable for Outport: '<S93>/Out1' */
    BaseEngineController_A02_B.s103_CutArray[i] = 0;

    /* Disable for Outport: '<S91>/Out1' */
    BaseEngineController_A02_B.s91_DataTypeConversion[i] = FALSE;
  }

  /* End of Disable for SubSystem: '<S14>/SequenceCutMachine' */
  BaseEngineController_A02_DWork.s14_PassThrough4_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/PassThrough4' */

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_7562p0001 */

  /* Disable for function-call system: '<S5>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S733>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S738>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_7097p0004 */
  BaseEngineController_A02_DWork.s738_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S733>/EST Enable TDC Counter' */
  BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S6>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S23>/PassThrough' */
  /* Disable for Outport: '<S45>/Out1' */
  BaseEngineController_A02_B.s45_In1 = 10.0;
  BaseEngineController_A02_DWork.s23_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S23>/PassThrough' */
  BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE = FALSE;

  /* End of Disable for SubSystem: '<S6>/Electronic Throttle Controller' */

  /* Disable for Enabled SubSystem: '<S14>/PassThrough5' */
  /* Disable for Outport: '<S92>/Out1' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s92_DataTypeConversion1[i] = FALSE;
  }

  /* End of Outport: '<S92>/Out1' */
  BaseEngineController_A02_DWork.s14_PassThrough5_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/PassThrough5' */

  /* Disable for Enabled SubSystem: '<S272>/Capture IAT At Startup' */
  /* Disable for Enabled SubSystem: '<S316>/Collect Average' */
  BaseEngineController_A02_DWork.s316_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S316>/Collect Average' */
  BaseEngineController_A02_DWork.s272_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S272>/Capture IAT At Startup' */
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S357>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_6806p0004 */
  BaseEngineController_A02_DWork.s357_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S319>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_5543p0001 */
  BaseEngineController_A02_DWork.s319_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S7>/Stall' */

  /* InitializeConditions for UnitDelay: '<S241>/Unit Delay' */
  BaseEngineController_A02_DWork.s241_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S242>/Unit Delay' */
  BaseEngineController_A02_DWork.s242_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S7>/Stall' */

  /* Start for Atomic SubSystem: '<S272>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S314>/PassThrough1' */
  BaseEngineController_A02_PassThrough1_Start
    (&BaseEngineController_A02_B.s314_Merge);

  /* End of Start for SubSystem: '<S314>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S314>/PassThrough2' */
  BaseEngineController_A02_PassThrough1_Start
    (&BaseEngineController_A02_B.s314_Merge);

  /* End of Start for SubSystem: '<S314>/PassThrough2' */

  /* End of Start for SubSystem: '<S272>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S269>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S275>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S278>/Unit Delay1' */
  BaseEngineController_A02_DWork.s278_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S275>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S275>/Unit Delay' */
  BaseEngineController_A02_DWork.s275_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S269>/Capture Signal At Startup' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S513>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_6623p0005 */
  BaseEngineController_A02_DWork.s513_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S289>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S293>/Out1' */
  BaseEngineController_A02_B.s289_Merge = 0.005;

  /* End of Start for SubSystem: '<S289>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S289>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S291>/Out1' */
  BaseEngineController_A02_B.s289_Merge = 0.005;

  /* End of Start for SubSystem: '<S289>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S290>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S296>/Out1' */
  BaseEngineController_A02_B.s290_Merge = 0.005;

  /* End of Start for SubSystem: '<S290>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S290>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S294>/Out1' */
  BaseEngineController_A02_B.s290_Merge = 0.005;

  /* End of Start for SubSystem: '<S290>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S288>/Integrate Offset To ECT' */

  /* S-Function Block: <S307>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s307_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S288>/Integrate Offset To ECT' */

  /* Start for Enabled SubSystem: '<S272>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S315>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S332>/Unit Delay1' */
  BaseEngineController_A02_DWork.s332_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S315>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S315>/Unit Delay' */
  BaseEngineController_A02_DWork.s315_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S272>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S7>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S115>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_3881p0004 */
  BaseEngineController_A02_DWork.s115_motohawk_trigger1_DWORK1 = 0;

  /* Start for Atomic SubSystem: '<S115>/O2 Control' */

  /* Start for Atomic SubSystem: '<S131>/O2 PID Controller' */

  /* Start for InitialCondition: '<S216>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_A02_B.s216_Multiplyby10ifnotyetenabled = 1.0;
  BaseEngineController_A02_DWork.s216_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S131>/O2 PID Controller' */
  /* End of Start for SubSystem: '<S115>/O2 Control' */

  /* Start for Atomic SubSystem: '<S115>/Fuel System Manager' */

  /* Start for Atomic SubSystem: '<S128>/Injector Manager' */

  /* Start for Enabled SubSystem: '<S139>/Delta TPS Transient Fueling' */

  /* Start for Enabled SubSystem: '<S144>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S147>/Mult' */
  BaseEngineController_A02_B.s147_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S144>/ECT Transient Fueling' */

  /* S-Function Block: <S148>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s148_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S149>/Unit Delay' */
  BaseEngineController_A02_DWork.s149_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S144>/DeltaTPSMult' */
  BaseEngineController_A02_B.s144_Product1 = 1.0;

  /* End of Start for SubSystem: '<S139>/Delta TPS Transient Fueling' */

  /* End of Start for SubSystem: '<S128>/Injector Manager' */

  /* End of Start for SubSystem: '<S115>/Fuel System Manager' */

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S115>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S115>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S180>/IdleStateMachine' */
    BaseEngineController_A02_IdleStateMachine_Init();

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

    /* S-Function Block: <S183>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s183_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* InitializeConditions for Atomic SubSystem: '<S130>/AiflowOffset' */

    /* S-Function Block: <S186>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s186_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* End of InitializeConditions for SubSystem: '<S130>/AiflowOffset' */

    /* S-Function Block: <S211>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s211_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S115>/MaxGovernor' */

    /* S-Function Block: <S161>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s161_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S173>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s173_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S115>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S236>/Initial Condition is True' */
    BaseEngineController_A02_DWork.s236_InitialConditionisTrue_DSTATE = TRUE;
  }

  /* InitializeConditions for Atomic SubSystem: '<S115>/O2 Control' */

  /* InitializeConditions for Atomic SubSystem: '<S131>/O2 PID Controller' */
  /* InitializeConditions for UnitDelay: '<S228>/Unit Delay' */
  BaseEngineController_A02_DWork.s228_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S225>/Unit Delay' */
  BaseEngineController_A02_DWork.s225_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S224>/Unit Delay' */
  BaseEngineController_A02_DWork.s224_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S225>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s225_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S221>/Unit Delay1' */
  BaseEngineController_A02_DWork.s221_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S229>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s229_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S221>/Unit Delay' */
  BaseEngineController_A02_DWork.s221_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S231>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s231_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S221>/Unit Delay2' */
  BaseEngineController_A02_DWork.s221_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S230>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s230_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S131>/O2 PID Controller' */
  /* End of InitializeConditions for SubSystem: '<S115>/O2 Control' */

  /* End of Start for SubSystem: '<S7>/Run' */
  /* Start for S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1269p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1268p0004 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S14>/SequenceCutMachine' */

  /* Start for function-call system: '<S93>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S103>/CycleCounter' */
  BaseEngineController_A02_B.s103_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S103>/CycleNumber' */
  BaseEngineController_A02_B.s103_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_1016p0001 */
  BaseEngineController_A02_DWork.s93_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S93>/Unit Delay2' */
  BaseEngineController_A02_DWork.s93_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S93>/Unit Delay1' */
  BaseEngineController_A02_DWork.s93_UnitDelay1_DSTATE = 1U;

  /* End of Start for SubSystem: '<S14>/SequenceCutMachine' */

  /* Start for function-call system: '<S5>/Coil Control' */

  /* Start for Atomic SubSystem: '<S733>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S738>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_7097p0004 */
  BaseEngineController_A02_DWork.s738_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S733>/EST Enable TDC Counter' */

  /* S-Function Block: <S662>/Spark Sequence */
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

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_7562p0001 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S6>/Electronic Throttle Controller' */

  /* Start for Enabled SubSystem: '<S23>/PassThrough' */
  /* VirtualOutportStart for Outport: '<S45>/Out1' */
  BaseEngineController_A02_B.s45_In1 = 10.0;

  /* End of Start for SubSystem: '<S23>/PassThrough' */

  /* S-Function Block: <S56>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s56_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S12>/ETC Test  Manager' */
  BaseEngineController_A02_DWork.s19_TimerOld = 0.0;

  /* Entry: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
  /* Transition: '<S19>:7' */
  BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
    BaseEngineController_A02_IN_PassThrough;

  /* Entry 'PassThrough': '<S19>:1' */
  BaseEngineController_A02_B.s19_DC_Override = 0;
  BaseEngineController_A02_B.s19_TestComplete = FALSE;
  BaseEngineController_A02_B.s19_SetpointMode = 0;
  BaseEngineController_A02_B.s19_TestTime = 0.0;

  /* S-Function Block: <S48>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s48_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S36>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s36_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S41>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s41_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S6>/Electronic Throttle Controller' */

  /* S-Function Block: <S665>/Injector Sequence */
  {
    S_SeqOutAttributes DynamicObj;
    NativeError_S createErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult2 = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    int32_T i;
    extern void InjectorSeqDiagCallback_37(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_37[8];
    extern int32_T InjectorSeqDiagLastPin_37;
    DynamicObj.uMinPulseDurationInMicroSecs = 1500;
    for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
      InjectorSeqDiagInfo_37[i].u4TXTimeInMicroSecs = 0xFFFFFFFF;
      InjectorSeqDiagInfo_37[i].u1TXCnt = 1;
    }

    InjectorSeqDiagLastPin_37 = -1;
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
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_37;
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
        extern void TransientInjectorSeqReportCallback_37
          (S_SeqOutInjEndEventReportPtr report, NativePtrSizedInt_U userData);
        extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_37[8];
        S_TranInjSeqCreateAttributes CreateObj;
        CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
          USE_SEQ_ENDEVENT_REPORT_COND | USE_SEQ_DIAG_REPORT_COND;
        CreateObj.ReportsObj.pfReportCback =
          TransientInjectorSeqReportCallback_37;
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_37;
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.eReportCond = RES_ENABLED;
        DynamicObj.uValidAttributesMask |= USE_SEQ_ENDEVENT_REPORT_COND;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            TransientInjectorSeqInfo_37[i].primaryComplete = 0;
            TransientInjectorSeqInfo_37[i].primaryDuration = 0;
            TransientInjectorSeqInfo_37[i].pinResource =
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_37;
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_37;
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

    BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK2 = 0;
  }

  /* Start for Enabled SubSystem: '<S272>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S316>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S333>/Unit Delay1' */
  BaseEngineController_A02_DWork.s333_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S316>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S316>/Unit Delay' */
  BaseEngineController_A02_DWork.s316_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S272>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S351>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S352>/Function-Call Generator'
   *  Start for SubSystem: '<S3>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S351>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S352>/Function-Call Generator'
   *  InitializeConditions for SubSystem: '<S3>/Diagnostics'
   */

  /* S-Function Block: <S258>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s258_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S259>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s259_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S260>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s260_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S268>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s268_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S267>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s267_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S251>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s251_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S255>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s255_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function (motohawk_sfun_probe): '<S668>/motohawk_probe7' */
  (Fault_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S669>/motohawk_probe1' */
  (Control_Mode_Cmd_Prb_DataStore()) = 1.0;

  /* S-Function (motohawk_sfun_probe): '<S669>/motohawk_probe2' */
  (Motoring_Tq_Curve_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S669>/motohawk_probe3' */
  (Generating_Tq_Curve_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S669>/motohawk_probe10' */
  (Aux_PWM_State_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S669>/motohawk_probe11' */
  (Aux_PWM_DutyCycle_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S669>/motohawk_probe12' */
  (Aux_PWM_Freq_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S669>/motohawk_probe9' */
  (XDRP_Supply_State_Prb_DataStore()) = 0.0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_UnitDelay1_m;
  real_T rtb_Merge_bw;
  real_T rtb_motohawk_delta_time_cz;
  real_T rtb_Switch_j5;
  real_T rtb_Merge_c;
  real_T rtb_Merge_cd;
  real_T rtb_Merge_i;
  real_T rtb_Merge_d;
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
  real_T rtb_motohawk_delta_time_l;
  real_T rtb_motohawk_delta_time_n;
  real_T rtb_Saturation_h;
  real_T rtb_motohawk_interpolation_1d3_k;
  real_T rtb_motohawk_interpolation_1d4_ii;
  real_T rtb_motohawk_interpolation_1d1_k;
  real_T rtb_motohawk_delta_time_i;
  real_T rtb_Switch_k;
  real_T rtb_motohawk_interpolation_1d_k;
  real_T rtb_Product_cf;
  real_T rtb_Saturation_p;
  real_T rtb_Saturation_a5;
  real_T rtb_motohawk_delta_time_a0;
  real_T rtb_UnitDelay1_b;
  real_T rtb_Merge_dm;
  real_T rtb_UnitDelay1_g;
  real_T rtb_Merge_nz;
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
  real_T rtb_motohawk_delta_time_id;
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
  real_T rtb_motohawk_interpolation_1d1_c;
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
  real_T rtb_DataTypeConversion_om;
  real_T rtb_Abs_b;
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
  index_T rtb_motohawk_prelookup1_n3;
  index_T rtb_motohawk_prelookup_e0;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_ITermIdx;
  index_T rtb_motohawk_prelookup_h;
  index_T rtb_motohawk_prelookup1_fq;
  index_T rtb_motohawk_prelookup1_kg;
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
  boolean_T rtb_RelationalOperator5_ch;
  boolean_T rtb_RelationalOperator2_la;
  boolean_T rtb_LT3;
  boolean_T rtb_LT2;
  boolean_T rtb_LT4;
  boolean_T rtb_RelationalOperator2_c;
  boolean_T rtb_RelationalOperator1_d;
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
  boolean_T rtb_RelationalOperator6_k;
  real_T minV;
  boolean_T rtb_LogicalOperator6_i;
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
  boolean_T rtb_Merge_gl;
  real_T rtb_Merge_mj;
  real_T rtb_Merge_n;
  real_T rtb_Merge_fc;
  real_T rtb_Merge_p2;
  real_T rtb_Merge_b0;
  real_T rtb_Merge_f3;
  real_T rtb_Merge_iu;
  real_T rtb_Merge_pj[8];
  real_T rtb_Product2_e[8];
  boolean_T rtb_LogicalOperator3_j[8];
  boolean_T rtb_LogicalOperator1_iht[8];
  real_T rtb_Abs_is;
  real_T rtb_UnitDelay1_c;
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
  uint32_T rtb_Switch_a;
  real_T rtb_Sum1_j;
  real_T rtb_Sum1_h;
  real_T rtb_Sum1_i5;
  real_T rtb_Sum1_d3;
  real_T rtb_Sum_iy;
  real_T rtb_Merge_c5;
  real_T rtb_Sum1_gje;
  real_T rtb_UnitDelay4_bi;
  int8_T rtb_Add_a;
  int8_T rtb_Sum_l3;
  real_T rtb_Sum2_d0;
  boolean_T rtb_LogicalOperator4_b2;
  boolean_T rtb_LogicalOperator10;
  boolean_T rtb_Switch1_p0;
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  uint16_T rtb_DataTypeConversion_a_0;
  real_T y;

  /* S-Function Block: <S564>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s564_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S564>/Product' incorporates:
   *  MinMax: '<S564>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (OilPresFilterConst_DataStore())) || rtIsNaN((OilPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_ff : (OilPresFilterConst_DataStore());

  /* Logic: '<S514>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S514>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S514>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(46) || IsFaultActive(47));

  /* Logic: '<S514>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S514>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S514>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S514>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(46) || IsFaultSuspected(47));

  /* S-Function Block: <S356>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get(&BaseEngineController_A02_B.s356_motohawk_ain1,
      NULL);
  }

  /* DataTypeConversion: '<S514>/Data Type Conversion' */
  rtb_DataTypeConversion_f5 = BaseEngineController_A02_B.s356_motohawk_ain1;

  /* Product: '<S514>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S514>/motohawk_calibration4'
   */
  rtb_Product1_e = (real_T)rtb_DataTypeConversion_f5 * (OilPresGain_DataStore());

  /* Sum: '<S514>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S514>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s514_Sum1 = rtb_Product1_e + (OilPresOfst_DataStore
    ());

  /* UnitDelay: '<S514>/Unit Delay1' */
  rtb_UnitDelay1_m = BaseEngineController_A02_DWork.s514_UnitDelay1_DSTATE;

  /* If: '<S514>/If' incorporates:
   *  Logic: '<S514>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S514>/If Action Subsystem' incorporates:
     *  ActionPort: '<S565>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_m, &rtb_Merge_bw);

    /* End of Outputs for SubSystem: '<S514>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S514>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S566>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_bw);

    /* End of Outputs for SubSystem: '<S514>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S514>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S567>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s514_Sum1, &rtb_Merge_bw);

    /* End of Outputs for SubSystem: '<S514>/If Action Subsystem2' */
  }

  /* End of If: '<S514>/If' */

  /* Sum: '<S569>/Sum1' incorporates:
   *  Constant: '<S569>/Constant'
   *  Product: '<S569>/Product'
   *  Product: '<S569>/Product1'
   *  Sum: '<S569>/Sum'
   *  UnitDelay: '<S569>/Unit Delay'
   */
  rtb_Sum1_i = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s569_UnitDelay_DSTATE + rtb_Merge_bw *
    rtb_DataTypeConversion_ff;

  /* If: '<S568>/If' incorporates:
   *  Inport: '<S570>/In1'
   *  Inport: '<S571>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S568>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S568>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S568>/NewValue' incorporates:
     *  ActionPort: '<S570>/Action Port'
     */
    BaseEngineController_A02_B.s568_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S568>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S568>/OldValue' incorporates:
     *  ActionPort: '<S571>/Action Port'
     */
    BaseEngineController_A02_B.s568_Merge = rtb_Sum1_i;

    /* End of Outputs for SubSystem: '<S568>/OldValue' */
  }

  /* End of If: '<S568>/If' */

  /* If: '<S673>/If' incorporates:
   *  Inport: '<S680>/In1'
   *  Inport: '<S681>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S673>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S673>/override_enable'
   */
  if ((Oil_Pressure_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S673>/NewValue' incorporates:
     *  ActionPort: '<S680>/Action Port'
     */
    rtb_Merge_c = (Oil_Pressure_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S673>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S673>/OldValue' incorporates:
     *  ActionPort: '<S681>/Action Port'
     */
    rtb_Merge_c = BaseEngineController_A02_B.s568_Merge;

    /* End of Outputs for SubSystem: '<S673>/OldValue' */
  }

  /* End of If: '<S673>/If' */

  /* S-Function Block: <S355>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S507>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S355>/motohawk_encoder_average_rpm'
   */
  rtb_Product1_e = (real_T)rtb_RPM;

  /* S-Function Block: <S500>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s500_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S500>/Product' incorporates:
   *  MinMax: '<S500>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S500>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_ff : (RPMFiltConst_DataStore());

  /* Sum: '<S507>/Sum1' incorporates:
   *  Constant: '<S507>/Constant'
   *  Product: '<S507>/Product'
   *  Product: '<S507>/Product1'
   *  Sum: '<S507>/Sum'
   *  UnitDelay: '<S507>/Unit Delay'
   */
  BaseEngineController_A02_B.s507_Sum1 = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s507_UnitDelay_DSTATE + rtb_Product1_e *
    rtb_DataTypeConversion_ff;

  /* If: '<S674>/If' incorporates:
   *  Inport: '<S682>/In1'
   *  Inport: '<S683>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S674>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S674>/override_enable'
   */
  if ((RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S674>/NewValue' incorporates:
     *  ActionPort: '<S682>/Action Port'
     */
    rtb_Merge_cd = (RPM_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S674>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S674>/OldValue' incorporates:
     *  ActionPort: '<S683>/Action Port'
     */
    rtb_Merge_cd = BaseEngineController_A02_B.s507_Sum1;

    /* End of Outputs for SubSystem: '<S674>/OldValue' */
  }

  /* End of If: '<S674>/If' */

  /* S-Function (motohawk_sfun_trigger): '<S357>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_6806p0004 */
  if (BaseEngineController_A02_DWork.s357_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s357_motohawk_trigger_DWORK1 = 1;
  }

  /* If: '<S675>/If' incorporates:
   *  Inport: '<S684>/In1'
   *  Inport: '<S685>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S675>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S675>/override_enable'
   */
  if ((Temp_Guage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S675>/NewValue' incorporates:
     *  ActionPort: '<S684>/Action Port'
     */
    rtb_Merge_i = (Temp_Guage_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S675>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S675>/OldValue' incorporates:
     *  ActionPort: '<S685>/Action Port'
     */
    rtb_Merge_i = BaseEngineController_A02_B.s605_Merge;

    /* End of Outputs for SubSystem: '<S675>/OldValue' */
  }

  /* End of If: '<S675>/If' */

  /* S-Function Block: <S355>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S355>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S355>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_A02_B.s355_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S319>/Data Type Conversion' */
  if (BaseEngineController_A02_B.s355_RPMInst < 65536.0) {
    if (BaseEngineController_A02_B.s355_RPMInst >= 0.0) {
      rtb_DataTypeConversion_a_0 = (uint16_T)
        BaseEngineController_A02_B.s355_RPMInst;
    } else {
      rtb_DataTypeConversion_a_0 = 0U;
    }
  } else {
    rtb_DataTypeConversion_a_0 = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S319>/Data Type Conversion' */
  /* Sum: '<S319>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S319>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S319>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  rtb_motohawk_data_read1_k = (uint16_T)i;

  /* End of Sum: '<S319>/Sum' */

  /* RelationalOperator: '<S319>/Relational Operator1' incorporates:
   *  DataTypeConversion: '<S319>/Data Type Conversion'
   */
  BaseEngineController_A02_B.s319_Stall = ((rtb_DataTypeConversion_a_0 <
    rtb_motohawk_data_read1_k));

  /* RelationalOperator: '<S319>/Relational Operator4' incorporates:
   *  DataTypeConversion: '<S319>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S319>/motohawk_calibration4'
   */
  BaseEngineController_A02_B.s319_Crank = ((rtb_DataTypeConversion_a_0 >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S319>/Relational Operator2' incorporates:
   *  DataTypeConversion: '<S319>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S319>/motohawk_calibration1'
   */
  rtb_LogicalOperator6_i = (rtb_DataTypeConversion_a_0 > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S319>/Unit Delay' */
  BaseEngineController_A02_B.s319_UnitDelay =
    BaseEngineController_A02_DWork.s319_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S319>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_5543p0001 */
  if (BaseEngineController_A02_DWork.s319_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s319_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S319>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S319>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S319>/motohawk_calibration2'
   */
  BaseEngineController_A02_B.s319_Run = ((rtb_LogicalOperator6_i &&
    (BaseEngineController_A02_B.s339_Switch >= ((uint8_T)(RunLatchTDCs_DataStore
    ())))));

  /* Stateflow: '<S319>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch (BaseEngineController_A02_DWork.s338_is_c2_BaseEngineController_A02) {
   case BaseEngineController_A02_IN_Crank:
    /* During 'Crank': '<S338>:3' */
    if (BaseEngineController_A02_B.s319_Stall) {
      /* Transition: '<S338>:8' */
      BaseEngineController_A02_DWork.s338_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall_e;

      /* Entry 'Stall': '<S338>:1' */
      BaseEngineController_A02_B.s338_State = 1U;
    } else {
      if (BaseEngineController_A02_B.s319_Run) {
        /* Transition: '<S338>:6' */
        BaseEngineController_A02_DWork.s338_is_c2_BaseEngineController_A02 =
          BaseEngineController_A02_IN_Run;

        /* Entry 'Run': '<S338>:2' */
        BaseEngineController_A02_B.s338_State = 3U;
      }
    }
    break;

   case BaseEngineController_A02_IN_Run:
    /* During 'Run': '<S338>:2' */
    if (BaseEngineController_A02_B.s319_Stall) {
      /* Transition: '<S338>:7' */
      BaseEngineController_A02_DWork.s338_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall_e;

      /* Entry 'Stall': '<S338>:1' */
      BaseEngineController_A02_B.s338_State = 1U;
    }
    break;

   case BaseEngineController_A02_IN_Stall_e:
    /* During 'Stall': '<S338>:1' */
    if (BaseEngineController_A02_B.s319_Crank) {
      /* Transition: '<S338>:5' */
      BaseEngineController_A02_DWork.s338_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Crank;

      /* Entry 'Crank': '<S338>:3' */
      BaseEngineController_A02_B.s338_State = 2U;
    }
    break;

   default:
    /* Transition: '<S338>:4' */
    BaseEngineController_A02_DWork.s338_is_c2_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Stall_e;

    /* Entry 'Stall': '<S338>:1' */
    BaseEngineController_A02_B.s338_State = 1U;
    break;
  }

  /* End of Stateflow: '<S319>/Engine State Machine' */

  /* RelationalOperator: '<S670>/Compare' incorporates:
   *  Constant: '<S670>/Constant'
   */
  BaseEngineController_A02_B.s670_Compare =
    ((BaseEngineController_A02_B.s338_State == 2));

  /* If: '<S676>/If' incorporates:
   *  Inport: '<S686>/In1'
   *  Inport: '<S687>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S676>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S676>/override_enable'
   */
  if ((Engine_Crank_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S676>/NewValue' incorporates:
     *  ActionPort: '<S686>/Action Port'
     */
    rtb_Merge_ln = (Engine_Crank_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S676>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S676>/OldValue' incorporates:
     *  ActionPort: '<S687>/Action Port'
     */
    rtb_Merge_ln = BaseEngineController_A02_B.s670_Compare;

    /* End of Outputs for SubSystem: '<S676>/OldValue' */
  }

  /* End of If: '<S676>/If' */

  /* RelationalOperator: '<S671>/Compare' incorporates:
   *  Constant: '<S671>/Constant'
   */
  BaseEngineController_A02_B.s671_Compare =
    ((BaseEngineController_A02_B.s338_State == 3));

  /* If: '<S677>/If' incorporates:
   *  Inport: '<S688>/In1'
   *  Inport: '<S689>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S677>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S677>/override_enable'
   */
  if ((Engine_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S677>/NewValue' incorporates:
     *  ActionPort: '<S688>/Action Port'
     */
    rtb_Merge_l1 = (Engine_On_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S677>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S677>/OldValue' incorporates:
     *  ActionPort: '<S689>/Action Port'
     */
    rtb_Merge_l1 = BaseEngineController_A02_B.s671_Compare;

    /* End of Outputs for SubSystem: '<S677>/OldValue' */
  }

  /* End of If: '<S677>/If' */

  /* S-Function Block: <S123>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s123_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_cz = ((real_T) delta) * 0.000001;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S359>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6002p0007;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6002p0007,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x000000C0) >> 6) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[1] & 0x000000C0) >> 6) |
        ((messageObj.u1DataArr[0] & 0x0000003F) << 2) ;
      BaseEngineController_A02_B.s359_GensetEnable = (real_T) tmp0;
      BaseEngineController_A02_B.s359_GensetEnable_g = (real_T) tmp1;
      BaseEngineController_A02_B.s359_GensetEnable_a = (real_T) tmp2;
    }
  }

  /* If: '<S363>/If' incorporates:
   *  Inport: '<S367>/In1'
   *  Inport: '<S368>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S363>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S363>/override_enable'
   */
  if ((Genset_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S363>/NewValue' incorporates:
     *  ActionPort: '<S367>/Action Port'
     */
    rtb_Merge_p = (Genset_Enable_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S363>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S363>/OldValue' incorporates:
     *  ActionPort: '<S368>/Action Port'
     */
    rtb_Merge_p = BaseEngineController_A02_B.s359_GensetEnable;

    /* End of Outputs for SubSystem: '<S363>/OldValue' */
  }

  /* End of If: '<S363>/If' */

  /* If: '<S364>/If' incorporates:
   *  Inport: '<S369>/In1'
   *  Inport: '<S370>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S364>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S364>/override_enable'
   */
  if ((Genset_Load_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S364>/NewValue' incorporates:
     *  ActionPort: '<S369>/Action Port'
     */
    rtb_Product1_e = (Genset_Load_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S364>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S364>/OldValue' incorporates:
     *  ActionPort: '<S370>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s359_GensetEnable_g;

    /* End of Outputs for SubSystem: '<S364>/OldValue' */
  }

  /* End of If: '<S364>/If' */

  /* Stateflow: '<S113>/Remy Control' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration6'
   */

  /* Gateway: Foreground/Control/Controller/Hybrid/Remy Control */
  /* During: Foreground/Control/Controller/Hybrid/Remy Control */
  if (BaseEngineController_A02_DWork.s121_is_active_c5_BaseEngineController_A02 ==
      0) {
    /* Entry: Foreground/Control/Controller/Hybrid/Remy Control */
    BaseEngineController_A02_DWork.s121_is_active_c5_BaseEngineController_A02 =
      1U;

    /* Transition: '<S121>:41' */
    BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
      BaseEngineController_A02_IN_default;
  } else {
    switch (BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02)
    {
     case BaseEngineController_A02_IN_cranking:
      /* During 'cranking': '<S121>:20' */
      if (BaseEngineController_A02_DWork.s121_count >= (Crank_Time_DataStore()))
      {
        /* Transition: '<S121>:24' */
        BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_startFail;

        /* Entry 'startFail': '<S121>:23' */
        BaseEngineController_A02_DWork.s121_count = 0.0;
      } else if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S121>:25' */
        BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (BaseEngineController_A02_B.s507_Sum1 >= (Caught_RPM_DataStore()))
      {
        /* Transition: '<S121>:32' */
        BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_idle;
      } else {
        BaseEngineController_A02_DWork.s121_count =
          BaseEngineController_A02_DWork.s121_count + 1.0;
        BaseEngineController_A02_B.s121_cranking = 1.0;
        BaseEngineController_A02_B.s121_idle = 0.0;
        BaseEngineController_A02_B.s121_APPRamp = 0.0;
        BaseEngineController_A02_B.s121_torqueRamp = 0.0;
        BaseEngineController_A02_B.s121_remyEn = 1.0;
        BaseEngineController_A02_B.s121_maxRPM = (Max_Cranking_RPM_DataStore());
        BaseEngineController_A02_B.s121_motorTQ = (Cranking_Torque_DataStore());
        BaseEngineController_A02_B.s121_generatingTQ = 1.0;
      }
      break;

     case BaseEngineController_A02_IN_default:
      /* During 'default': '<S121>:14' */
      if (rtb_Merge_p != 0.0) {
        /* Transition: '<S121>:21' */
        BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_cranking;

        /* Entry 'cranking': '<S121>:20' */
        BaseEngineController_A02_DWork.s121_count = 0.0;
      } else {
        BaseEngineController_A02_B.s121_cranking = 0.0;
        BaseEngineController_A02_B.s121_idle = 0.0;
        BaseEngineController_A02_B.s121_APPRamp = 0.0;
        BaseEngineController_A02_B.s121_torqueRamp = 0.0;
        BaseEngineController_A02_B.s121_remyEn = 0.0;
        BaseEngineController_A02_B.s121_maxRPM = 0.0;
        BaseEngineController_A02_B.s121_motorTQ = 0.0;
        BaseEngineController_A02_B.s121_generatingTQ = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_generating:
      /* During 'generating': '<S121>:36' */
      if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S121>:39' */
        BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (!(rtb_Product1_e != 0.0)) {
        /* Transition: '<S121>:40' */
        BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_idle;
      } else {
        BaseEngineController_A02_B.s121_cranking = 0.0;
        BaseEngineController_A02_B.s121_idle = 0.0;
        BaseEngineController_A02_B.s121_APPRamp = 1.0;
        BaseEngineController_A02_B.s121_torqueRamp = 1.0;
        BaseEngineController_A02_B.s121_remyEn = 1.0;
        BaseEngineController_A02_B.s121_maxRPM = (Max_Generating_RPM_DataStore());
        BaseEngineController_A02_B.s121_motorTQ = 0.0;
        BaseEngineController_A02_B.s121_generatingTQ = 1.0;
      }
      break;

     case BaseEngineController_A02_IN_idle:
      /* During 'idle': '<S121>:31' */
      if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S121>:35' */
        BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (rtb_Product1_e != 0.0) {
        /* Transition: '<S121>:37' */
        BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_generating;
      } else {
        BaseEngineController_A02_B.s121_cranking = 0.0;
        BaseEngineController_A02_B.s121_idle = 1.0;
        BaseEngineController_A02_B.s121_APPRamp = 0.0;
        BaseEngineController_A02_B.s121_torqueRamp = 0.0;
        BaseEngineController_A02_B.s121_remyEn = 1.0;
        BaseEngineController_A02_B.s121_maxRPM = (Max_Generating_RPM_DataStore());
        BaseEngineController_A02_B.s121_motorTQ = 0.0;
        BaseEngineController_A02_B.s121_generatingTQ = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_startFail:
      /* During 'startFail': '<S121>:23' */
      if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S121>:26' */
        BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (BaseEngineController_A02_DWork.s121_count >=
                 (Crank_Wait_Before_Retry_DataStore())) {
        /* Transition: '<S121>:29' */
        BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_cranking;

        /* Entry 'cranking': '<S121>:20' */
        BaseEngineController_A02_DWork.s121_count = 0.0;
      } else {
        BaseEngineController_A02_DWork.s121_count =
          BaseEngineController_A02_DWork.s121_count + 1.0;
        BaseEngineController_A02_B.s121_cranking = 0.0;
        BaseEngineController_A02_B.s121_idle = 0.0;
        BaseEngineController_A02_B.s121_APPRamp = 0.0;
        BaseEngineController_A02_B.s121_torqueRamp = 0.0;
        BaseEngineController_A02_B.s121_remyEn = 0.0;
        BaseEngineController_A02_B.s121_maxRPM = 0.0;
        BaseEngineController_A02_B.s121_motorTQ = 0.0;
        BaseEngineController_A02_B.s121_generatingTQ = 0.0;
      }
      break;

     default:
      /* Transition: '<S121>:41' */
      BaseEngineController_A02_DWork.s121_is_c5_BaseEngineController_A02 =
        BaseEngineController_A02_IN_default;
      break;
    }
  }

  /* End of Stateflow: '<S113>/Remy Control' */

  /* Switch: '<S123>/Switch' incorporates:
   *  Constant: '<S123>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S123>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S123>/motohawk_delta_time'
   *  Sum: '<S123>/Sum'
   */
  if (BaseEngineController_A02_B.s121_torqueRamp >= 1.0) {
    rtb_Switch_j5 = rtb_motohawk_delta_time_cz + TorqueRampTime_DataStore();
  } else {
    rtb_Switch_j5 = 0.0;
  }

  /* End of Switch: '<S123>/Switch' */

  /* Switch: '<S113>/Switch' incorporates:
   *  Product: '<S113>/Product1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S113>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_prelookup): '<S113>/motohawk_prelookup1'
   */
  if (BaseEngineController_A02_B.s121_APPRamp > 0.0) {
    /* S-Function Block: <S113>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (TQ_PrelookupIn_DataStore()) = rtb_Switch_j5;
      (TQ_PrelookupIdx_DataStore()) = TablePrelookup_real_T(rtb_Switch_j5,
        (TQ_PrelookupIdxArr_DataStore()), 7, (TQ_PrelookupIdx_DataStore()));
      rtb_motohawk_prelookup1_kg = (TQ_PrelookupIdx_DataStore());
    }

    /* S-Function Block: <S113>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_kg, (real_T *) ((TQ_InterpolationTbl_DataStore())),
         7);
      (TQ_Interpolation_DataStore()) = rtb_motohawk_interpolation_1d1_c;
    }

    BaseEngineController_A02_B.s113_generatingTQ =
      rtb_motohawk_interpolation_1d1_c *
      BaseEngineController_A02_B.s121_torqueRamp;
  } else {
    BaseEngineController_A02_B.s113_generatingTQ =
      BaseEngineController_A02_B.s121_generatingTQ;
  }

  /* End of Switch: '<S113>/Switch' */

  /* RelationalOperator: '<S672>/Compare' incorporates:
   *  Constant: '<S672>/Constant'
   */
  BaseEngineController_A02_B.s672_Compare =
    ((BaseEngineController_A02_B.s113_generatingTQ >= 3.0));

  /* If: '<S678>/If' incorporates:
   *  Inport: '<S690>/In1'
   *  Inport: '<S691>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S678>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S678>/override_enable'
   */
  if ((Load_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S678>/NewValue' incorporates:
     *  ActionPort: '<S690>/Action Port'
     */
    rtb_Merge_mn = (Load_On_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S678>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S678>/OldValue' incorporates:
     *  ActionPort: '<S691>/Action Port'
     */
    rtb_Merge_mn = BaseEngineController_A02_B.s672_Compare;

    /* End of Outputs for SubSystem: '<S678>/OldValue' */
  }

  /* End of If: '<S678>/If' */

  /* If: '<S679>/If' incorporates:
   *  Constant: '<S668>/Constant'
   *  Inport: '<S692>/In1'
   *  Inport: '<S693>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S679>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S679>/override_enable'
   */
  if ((Fault_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S679>/NewValue' incorporates:
     *  ActionPort: '<S692>/Action Port'
     */
    rtb_Merge_d = (Fault_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S679>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S679>/OldValue' incorporates:
     *  ActionPort: '<S693>/Action Port'
     */
    rtb_Merge_d = 0.0;

    /* End of Outputs for SubSystem: '<S679>/OldValue' */
  }

  /* End of If: '<S679>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S668>/Send CAN Messages' */
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
        if (rtb_Merge_d < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (rtb_Merge_d > 3.0000000000F) {
          tmp6 = (uint8_T)(3U);
        } else {
          tmp6 = (uint8_T)(rtb_Merge_d);
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

  /* If: '<S694>/If' incorporates:
   *  Inport: '<S707>/In1'
   *  Inport: '<S708>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S694>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S694>/override_enable'
   */
  if ((Run_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S694>/NewValue' incorporates:
     *  ActionPort: '<S707>/Action Port'
     */
    rtb_Merge_k = (Run_Request_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S694>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S694>/OldValue' incorporates:
     *  ActionPort: '<S708>/Action Port'
     */
    rtb_Merge_k = BaseEngineController_A02_B.s121_remyEn;

    /* End of Outputs for SubSystem: '<S694>/OldValue' */
  }

  /* End of If: '<S694>/If' */

  /* If: '<S695>/If' incorporates:
   *  Constant: '<S669>/Constant6'
   *  Inport: '<S709>/In1'
   *  Inport: '<S710>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S695>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S695>/override_enable'
   */
  if ((Control_Mode_Cmd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S695>/NewValue' incorporates:
     *  ActionPort: '<S709>/Action Port'
     */
    rtb_Merge_de = (Control_Mode_Cmd_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S695>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S695>/OldValue' incorporates:
     *  ActionPort: '<S710>/Action Port'
     */
    rtb_Merge_de = 1.0;

    /* End of Outputs for SubSystem: '<S695>/OldValue' */
  }

  /* End of If: '<S695>/If' */

  /* If: '<S699>/If' incorporates:
   *  Constant: '<S669>/Constant4'
   *  Inport: '<S717>/In1'
   *  Inport: '<S718>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S699>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S699>/override_enable'
   */
  if ((Motoring_Tq_Curve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S699>/NewValue' incorporates:
     *  ActionPort: '<S717>/Action Port'
     */
    rtb_Merge_g = (Motoring_Tq_Curve_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S699>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S699>/OldValue' incorporates:
     *  ActionPort: '<S718>/Action Port'
     */
    rtb_Merge_g = 0.0;

    /* End of Outputs for SubSystem: '<S699>/OldValue' */
  }

  /* End of If: '<S699>/If' */

  /* If: '<S700>/If' incorporates:
   *  Constant: '<S669>/Constant5'
   *  Inport: '<S719>/In1'
   *  Inport: '<S720>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S700>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S700>/override_enable'
   */
  if ((Generating_Tq_Curve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S700>/NewValue' incorporates:
     *  ActionPort: '<S719>/Action Port'
     */
    rtb_Merge_cg = (Generating_Tq_Curve_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S700>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S700>/OldValue' incorporates:
     *  ActionPort: '<S720>/Action Port'
     */
    rtb_Merge_cg = 0.0;

    /* End of Outputs for SubSystem: '<S700>/OldValue' */
  }

  /* End of If: '<S700>/If' */

  /* If: '<S701>/If' incorporates:
   *  Inport: '<S721>/In1'
   *  Inport: '<S722>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S701>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S701>/override_enable'
   */
  if ((Speed_Voltage_Torque_CMD_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S701>/NewValue' incorporates:
     *  ActionPort: '<S721>/Action Port'
     */
    rtb_Merge_ig = (Speed_Voltage_Torque_CMD_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S701>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S701>/OldValue' incorporates:
     *  ActionPort: '<S722>/Action Port'
     */
    rtb_Merge_ig = BaseEngineController_A02_B.s121_maxRPM;

    /* End of Outputs for SubSystem: '<S701>/OldValue' */
  }

  /* End of If: '<S701>/If' */

  /* If: '<S702>/If' incorporates:
   *  Inport: '<S723>/In1'
   *  Inport: '<S724>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S702>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S702>/override_enable'
   */
  if ((Motoring_Torque_Lim_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S702>/NewValue' incorporates:
     *  ActionPort: '<S723>/Action Port'
     */
    rtb_Merge_d3 = (Motoring_Torque_Lim_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S702>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S702>/OldValue' incorporates:
     *  ActionPort: '<S724>/Action Port'
     */
    rtb_Merge_d3 = BaseEngineController_A02_B.s121_motorTQ;

    /* End of Outputs for SubSystem: '<S702>/OldValue' */
  }

  /* End of If: '<S702>/If' */

  /* If: '<S703>/If' incorporates:
   *  Inport: '<S725>/In1'
   *  Inport: '<S726>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S703>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S703>/override_enable'
   */
  if ((Generating_Torque_Lim_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S703>/NewValue' incorporates:
     *  ActionPort: '<S725>/Action Port'
     */
    rtb_Merge_gg = (Generating_Torque_Lim_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S703>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S703>/OldValue' incorporates:
     *  ActionPort: '<S726>/Action Port'
     */
    rtb_Merge_gg = BaseEngineController_A02_B.s113_generatingTQ;

    /* End of Outputs for SubSystem: '<S703>/OldValue' */
  }

  /* End of If: '<S703>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S669>/Send CAN Messages' */
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

  /* If: '<S696>/If' incorporates:
   *  Constant: '<S669>/Constant1'
   *  Inport: '<S711>/In1'
   *  Inport: '<S712>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S696>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S696>/override_enable'
   */
  if ((Aux_PWM_State_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S696>/NewValue' incorporates:
     *  ActionPort: '<S711>/Action Port'
     */
    rtb_Merge_gc = (Aux_PWM_State_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S696>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S696>/OldValue' incorporates:
     *  ActionPort: '<S712>/Action Port'
     */
    rtb_Merge_gc = 0.0;

    /* End of Outputs for SubSystem: '<S696>/OldValue' */
  }

  /* End of If: '<S696>/If' */

  /* If: '<S697>/If' incorporates:
   *  Constant: '<S669>/Constant2'
   *  Inport: '<S713>/In1'
   *  Inport: '<S714>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S697>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S697>/override_enable'
   */
  if ((Aux_PWM_DutyCycle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S697>/NewValue' incorporates:
     *  ActionPort: '<S713>/Action Port'
     */
    rtb_Merge_eb = (Aux_PWM_DutyCycle_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S697>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S697>/OldValue' incorporates:
     *  ActionPort: '<S714>/Action Port'
     */
    rtb_Merge_eb = 0.0;

    /* End of Outputs for SubSystem: '<S697>/OldValue' */
  }

  /* End of If: '<S697>/If' */

  /* If: '<S698>/If' incorporates:
   *  Constant: '<S669>/Constant3'
   *  Inport: '<S715>/In1'
   *  Inport: '<S716>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S698>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S698>/override_enable'
   */
  if ((Aux_PWM_Freq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S698>/NewValue' incorporates:
     *  ActionPort: '<S715>/Action Port'
     */
    rtb_Merge_bi = (Aux_PWM_Freq_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S698>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S698>/OldValue' incorporates:
     *  ActionPort: '<S716>/Action Port'
     */
    rtb_Merge_bi = 0.0;

    /* End of Outputs for SubSystem: '<S698>/OldValue' */
  }

  /* End of If: '<S698>/If' */

  /* If: '<S706>/If' incorporates:
   *  Constant: '<S669>/Constant'
   *  Inport: '<S731>/In1'
   *  Inport: '<S732>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S706>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S706>/override_enable'
   */
  if ((XDRP_Supply_State_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S706>/NewValue' incorporates:
     *  ActionPort: '<S731>/Action Port'
     */
    rtb_Merge_cq = (XDRP_Supply_State_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S706>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S706>/OldValue' incorporates:
     *  ActionPort: '<S732>/Action Port'
     */
    rtb_Merge_cq = 0.0;

    /* End of Outputs for SubSystem: '<S706>/OldValue' */
  }

  /* End of If: '<S706>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S669>/Send CAN Messages2' */
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

  /* If: '<S704>/If' incorporates:
   *  Inport: '<S727>/In1'
   *  Inport: '<S728>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S669>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S704>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S704>/override_enable'
   */
  if ((SecondartSpeedLim_CenterPT_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S704>/NewValue' incorporates:
     *  ActionPort: '<S727>/Action Port'
     */
    rtb_Merge_df = (SecondartSpeedLim_CenterPT_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S704>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S704>/OldValue' incorporates:
     *  ActionPort: '<S728>/Action Port'
     */
    rtb_Merge_df = (SecondarySpdLim_Cal_DataStore());

    /* End of Outputs for SubSystem: '<S704>/OldValue' */
  }

  /* End of If: '<S704>/If' */

  /* If: '<S705>/If' incorporates:
   *  Inport: '<S729>/In1'
   *  Inport: '<S730>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S669>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S705>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S705>/override_enable'
   */
  if ((SecondaryVoltLim_CenterPT_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S705>/NewValue' incorporates:
     *  ActionPort: '<S729>/Action Port'
     */
    rtb_Merge_a = (SecondaryVoltLim_CenterPT_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S705>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S705>/OldValue' incorporates:
     *  ActionPort: '<S730>/Action Port'
     */
    rtb_Merge_a = (SecondaryVoltLim_Cal_DataStore());

    /* End of Outputs for SubSystem: '<S705>/OldValue' */
  }

  /* End of If: '<S705>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S669>/Send CAN Messages1' */
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

  /* S-Function (motohawk_sfun_probe): '<S669>/motohawk_probe7' */
  (SecondarySpeedLim_CenterPT_Prb_DataStore()) = (SecondarySpdLim_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S669>/motohawk_probe8' */
  (SecondaryVoltLim_CenterPT_Prb_DataStore()) = (SecondaryVoltLim_Cal_DataStore());

  /* S-Function Block: <S580>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s580_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S580>/Product' incorporates:
   *  MinMax: '<S580>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S580>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (SysVoltFilterConst_DataStore())) || rtIsNaN((SysVoltFilterConst_DataStore()))
    ? rtb_DataTypeConversion_ff : (SysVoltFilterConst_DataStore());

  /* Logic: '<S516>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S516>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S516>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(51) || IsFaultActive(52));

  /* Logic: '<S516>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S516>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S516>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S516>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(51) || IsFaultSuspected(52));

  /* S-Function Block: <S356>/motohawk_ain14 Resource: SysVoltage */
  {
    extern NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    SysVoltage_AnalogInput_Get(&BaseEngineController_A02_B.s356_motohawk_ain14,
      NULL);
  }

  /* DataTypeConversion: '<S516>/Data Type Conversion' */
  rtb_DataTypeConversion_kk = BaseEngineController_A02_B.s356_motohawk_ain14;

  /* Product: '<S516>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S516>/motohawk_calibration4'
   */
  rtb_Product1_e = (real_T)rtb_DataTypeConversion_kk * (SysVoltGain_DataStore());

  /* Sum: '<S516>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S516>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s516_Sum1 = rtb_Product1_e + (SysVoltOfst_DataStore
    ());

  /* UnitDelay: '<S516>/Unit Delay1' */
  rtb_UnitDelay1_az = BaseEngineController_A02_DWork.s516_UnitDelay1_DSTATE;

  /* If: '<S516>/If' incorporates:
   *  Logic: '<S516>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S516>/If Action Subsystem' incorporates:
     *  ActionPort: '<S581>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_az, &rtb_Merge_cs);

    /* End of Outputs for SubSystem: '<S516>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S516>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S582>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_cs);

    /* End of Outputs for SubSystem: '<S516>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S516>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S583>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s516_Sum1, &rtb_Merge_cs);

    /* End of Outputs for SubSystem: '<S516>/If Action Subsystem2' */
  }

  /* End of If: '<S516>/If' */

  /* Sum: '<S585>/Sum1' incorporates:
   *  Constant: '<S585>/Constant'
   *  Product: '<S585>/Product'
   *  Product: '<S585>/Product1'
   *  Sum: '<S585>/Sum'
   *  UnitDelay: '<S585>/Unit Delay'
   */
  rtb_Sum1_gj = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s585_UnitDelay_DSTATE + rtb_Merge_cs *
    rtb_DataTypeConversion_ff;

  /* If: '<S584>/If' incorporates:
   *  Inport: '<S586>/In1'
   *  Inport: '<S587>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S584>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S584>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S584>/NewValue' incorporates:
     *  ActionPort: '<S586>/Action Port'
     */
    BaseEngineController_A02_B.s584_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S584>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S584>/OldValue' incorporates:
     *  ActionPort: '<S587>/Action Port'
     */
    BaseEngineController_A02_B.s584_Merge = rtb_Sum1_gj;

    /* End of Outputs for SubSystem: '<S584>/OldValue' */
  }

  /* End of If: '<S584>/If' */

  /* S-Function Block: <S312>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_A02_B.s584_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s584_Merge, (SysVolt09IdxArr_DataStore()), 9,
       (SysVolt09Idx_DataStore()));
    BaseEngineController_A02_B.s312_motohawk_prelookup = (SysVolt09Idx_DataStore
      ());
  }

  /* Outputs for Enabled SubSystem: '<S7>/Stall' incorporates:
   *  EnablePort: '<S117>/Enable'
   */
  /* RelationalOperator: '<S118>/RelOp' incorporates:
   *  Constant: '<S118>/Constant'
   */
  if (BaseEngineController_A02_B.s338_State == 1) {
    if (!BaseEngineController_A02_DWork.s7_Stall_MODE) {
      /* InitializeConditions for UnitDelay: '<S241>/Unit Delay' */
      BaseEngineController_A02_DWork.s241_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S242>/Unit Delay' */
      BaseEngineController_A02_DWork.s242_UnitDelay_DSTATE = 0.0;
      BaseEngineController_A02_DWork.s7_Stall_MODE = TRUE;
    }

    /* UnitDelay: '<S241>/Unit Delay' */
    BaseEngineController_A02_B.s241_UnitDelay =
      BaseEngineController_A02_DWork.s241_UnitDelay_DSTATE;

    /* Switch: '<S239>/Switch' incorporates:
     *  Constant: '<S239>/Constant'
     *  RelationalOperator: '<S239>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S239>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S239>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore()) > 0.0) {
      rtb_LogicalOperator6_i = TRUE;
    } else {
      rtb_LogicalOperator6_i = (BaseEngineController_A02_B.s241_UnitDelay <
        (FuelPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S239>/Switch' */
    /* S-Function Block: <S241>/motohawk_delta_time */
    rtb_motohawk_delta_time_o = 0.005;

    /* Sum: '<S241>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S241>/motohawk_delta_time'
     */
    rtb_Product1_e = rtb_motohawk_delta_time_o +
      BaseEngineController_A02_B.s241_UnitDelay;

    /* UnitDelay: '<S242>/Unit Delay' */
    BaseEngineController_A02_B.s242_UnitDelay =
      BaseEngineController_A02_DWork.s242_UnitDelay_DSTATE;

    /* Switch: '<S240>/Switch' incorporates:
     *  Constant: '<S240>/Constant'
     *  RelationalOperator: '<S240>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration1'
     */
    if ((Constant_Oil_Pump_DataStore()) > 0.0) {
      rtb_LogicalOperator1_a = TRUE;
    } else {
      rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s242_UnitDelay <
        (OilPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S240>/Switch' */
    /* S-Function Block: <S242>/motohawk_delta_time */
    rtb_motohawk_delta_time_ny = 0.005;

    /* Sum: '<S242>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S242>/motohawk_delta_time'
     */
    rtb_Sum_iy = rtb_motohawk_delta_time_ny +
      BaseEngineController_A02_B.s242_UnitDelay;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold10' incorporates:
     *  Constant: '<S117>/No Mult'
     */
    BaseEngineController_A02_B.s114_FuelMult = 0.0;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold11' incorporates:
     *  Constant: '<S117>/O2 Heater'
     */
    BaseEngineController_A02_B.s114_O2Heater = TRUE;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold2' */
    BaseEngineController_A02_B.s114_OILP = rtb_LogicalOperator1_a;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold3' */
    BaseEngineController_A02_B.s114_SparkAdv =
      BaseEngineController_A02_ConstB.s117_motohawk_replicate2;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold4' incorporates:
     *  Constant: '<S117>/No Spark'
     */
    BaseEngineController_A02_B.s114_SparkEnergy = 0.0;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold5' incorporates:
     *  Constant: '<S117>/No Start EOI'
     */
    BaseEngineController_A02_B.s114_MakeUpEOI = 0.0;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_A02_B.s114_FPC[0]), (void *)
           (&BaseEngineController_A02_ConstB.s117_motohawk_replicate[0]), sizeof
           (real_T) << 3U);

    /* ZeroOrderHold: '<S117>/Zero-Order Hold7' */
    BaseEngineController_A02_B.s114_FUELP = rtb_LogicalOperator6_i;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold8' incorporates:
     *  Constant: '<S117>/No Start Fuel Timing'
     */
    BaseEngineController_A02_B.s114_SOI = 0.0;

    /* ZeroOrderHold: '<S117>/Zero-Order Hold9' incorporates:
     *  Constant: '<S117>/Closed Throttle'
     */
    BaseEngineController_A02_B.s114_Throttle = 0.0;

    /* Update for UnitDelay: '<S241>/Unit Delay' */
    BaseEngineController_A02_DWork.s241_UnitDelay_DSTATE = rtb_Product1_e;

    /* Update for UnitDelay: '<S242>/Unit Delay' */
    BaseEngineController_A02_DWork.s242_UnitDelay_DSTATE = rtb_Sum_iy;
  } else {
    if (BaseEngineController_A02_DWork.s7_Stall_MODE) {
      BaseEngineController_A02_DWork.s7_Stall_MODE = FALSE;
    }
  }

  /* End of RelationalOperator: '<S118>/RelOp' */
  /* End of Outputs for SubSystem: '<S7>/Stall' */
  /* Logic: '<S626>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S626>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S626>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(57) || IsFaultActive(58));

  /* Logic: '<S626>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S626>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S626>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S626>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(57) || IsFaultSuspected(58));

  /* S-Function Block: <S358>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S619>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S358>/motohawk_ain6'
   */
  rtb_Product1_e = (real_T)rtb_motohawk_ain6;

  /* Switch: '<S619>/Switch' incorporates:
   *  Fcn: '<S619>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration2'
   */
  if ((TPS1Rev_Polarity_DataStore())) {
    BaseEngineController_A02_B.s619_Switch = 1023.0 - rtb_Product1_e;
  } else {
    BaseEngineController_A02_B.s619_Switch = rtb_Product1_e;
  }

  /* End of Switch: '<S619>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S623>/motohawk_data_read' */
  rtb_motohawk_data_read1_k = TPS1Raw_Adpt_Low_DataStore();

  /* MinMax: '<S623>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration9'
   */
  rtb_Sum2_d0 = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s623_MinMax = (rtb_Sum2_d0 <=
    (TPS1Adapt_Low_Max_DataStore())) || rtIsNaN((TPS1Adapt_Low_Max_DataStore()))
    ? rtb_Sum2_d0 : (TPS1Adapt_Low_Max_DataStore());

  /* Sum: '<S619>/Sum2' */
  rtb_Product1_e = BaseEngineController_A02_B.s619_Switch -
    BaseEngineController_A02_B.s623_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S623>/motohawk_data_read1' */
  rtb_motohawk_data_read1_k = TPS1Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S623>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration11'
   */
  rtb_Sum2_d0 = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s623_MinMax1 = (rtb_Sum2_d0 >=
    (TPS1Adapt_Hi_Min_DataStore())) || rtIsNaN((TPS1Adapt_Hi_Min_DataStore())) ?
    rtb_Sum2_d0 : (TPS1Adapt_Hi_Min_DataStore());

  /* Gain: '<S619>/Gain2' incorporates:
   *  Product: '<S619>/Product1'
   *  Sum: '<S619>/Sum1'
   */
  rtb_DataTypeConversion_ff = rtb_Product1_e /
    (BaseEngineController_A02_B.s623_MinMax1 -
     BaseEngineController_A02_B.s623_MinMax) * 100.0;

  /* MinMax: '<S627>/MinMax' incorporates:
   *  Constant: '<S619>/Constant1'
   */
  rtb_DataTypeConversion_ff = rtb_DataTypeConversion_ff >= 0.0 ?
    rtb_DataTypeConversion_ff : 0.0;

  /* MinMax: '<S627>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration1'
   */
  BaseEngineController_A02_B.s627_MinMax1 = (rtb_DataTypeConversion_ff <=
    (TPS1MaxLimit_DataStore())) || rtIsNaN((TPS1MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS1MaxLimit_DataStore());

  /* S-Function Block: <S625>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s625_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S625>/Product' incorporates:
   *  MinMax: '<S625>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S625>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (TPS1FilterConst_DataStore())) || rtIsNaN((TPS1FilterConst_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS1FilterConst_DataStore());

  /* Sum: '<S633>/Sum1' incorporates:
   *  Constant: '<S633>/Constant'
   *  Product: '<S633>/Product'
   *  Product: '<S633>/Product1'
   *  Sum: '<S633>/Sum'
   *  UnitDelay: '<S633>/Unit Delay'
   */
  rtb_Sum1_m2 = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s633_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s627_MinMax1 * rtb_DataTypeConversion_ff;

  /* UnitDelay: '<S626>/Unit Delay1' */
  rtb_UnitDelay1_j = BaseEngineController_A02_DWork.s626_UnitDelay1_DSTATE;

  /* If: '<S626>/If' incorporates:
   *  Logic: '<S626>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S626>/If Action Subsystem' incorporates:
     *  ActionPort: '<S634>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_j, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S626>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S626>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S635>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((TPS1DfltValue_DataStore()),
      &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S626>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S626>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S636>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_Sum1_m2, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S626>/If Action Subsystem2' */
  }

  /* End of If: '<S626>/If' */

  /* If: '<S637>/If' incorporates:
   *  Inport: '<S638>/In1'
   *  Inport: '<S639>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S637>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S637>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S637>/NewValue' incorporates:
     *  ActionPort: '<S638>/Action Port'
     */
    BaseEngineController_A02_B.s637_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S637>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S637>/OldValue' incorporates:
     *  ActionPort: '<S639>/Action Port'
     */
    BaseEngineController_A02_B.s637_Merge = rtb_Merge_h;

    /* End of Outputs for SubSystem: '<S637>/OldValue' */
  }

  /* End of If: '<S637>/If' */

  /* Logic: '<S643>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S643>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S643>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(63) || IsFaultActive(64));

  /* Logic: '<S643>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S643>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S643>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S643>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(63) || IsFaultSuspected(64));

  /* S-Function Block: <S358>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get(&rtb_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S620>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S358>/motohawk_ain9'
   */
  rtb_Product1_e = (real_T)rtb_motohawk_ain9;

  /* Switch: '<S620>/Switch' incorporates:
   *  Fcn: '<S620>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration2'
   */
  if ((TPS2Rev_Polarity_DataStore())) {
    BaseEngineController_A02_B.s620_Switch = 1023.0 - rtb_Product1_e;
  } else {
    BaseEngineController_A02_B.s620_Switch = rtb_Product1_e;
  }

  /* End of Switch: '<S620>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S640>/motohawk_data_read' */
  rtb_motohawk_data_read1_k = TPS2Raw_Adpt_Low_DataStore();

  /* MinMax: '<S640>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration9'
   */
  rtb_Sum2_d0 = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s640_MinMax = (rtb_Sum2_d0 <=
    (TPS2Adapt_Low_Max_DataStore())) || rtIsNaN((TPS2Adapt_Low_Max_DataStore()))
    ? rtb_Sum2_d0 : (TPS2Adapt_Low_Max_DataStore());

  /* Sum: '<S620>/Sum2' */
  rtb_Product1_e = BaseEngineController_A02_B.s620_Switch -
    BaseEngineController_A02_B.s640_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S640>/motohawk_data_read1' */
  rtb_motohawk_data_read1_k = TPS2Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S640>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration11'
   */
  rtb_Sum2_d0 = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s640_MinMax1 = (rtb_Sum2_d0 >=
    (TPS2Adapt_Hi_Min_DataStore())) || rtIsNaN((TPS2Adapt_Hi_Min_DataStore())) ?
    rtb_Sum2_d0 : (TPS2Adapt_Hi_Min_DataStore());

  /* Gain: '<S620>/Gain2' incorporates:
   *  Product: '<S620>/Product1'
   *  Sum: '<S620>/Sum1'
   */
  rtb_DataTypeConversion_ff = rtb_Product1_e /
    (BaseEngineController_A02_B.s640_MinMax1 -
     BaseEngineController_A02_B.s640_MinMax) * 100.0;

  /* MinMax: '<S644>/MinMax' incorporates:
   *  Constant: '<S620>/Constant1'
   */
  rtb_DataTypeConversion_ff = rtb_DataTypeConversion_ff >= 0.0 ?
    rtb_DataTypeConversion_ff : 0.0;

  /* MinMax: '<S644>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration1'
   */
  BaseEngineController_A02_B.s644_MinMax1 = (rtb_DataTypeConversion_ff <=
    (TPS2MaxLimit_DataStore())) || rtIsNaN((TPS2MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS2MaxLimit_DataStore());

  /* S-Function Block: <S642>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s642_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S642>/Product' incorporates:
   *  MinMax: '<S642>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S642>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (TPS2FilterConst_DataStore())) || rtIsNaN((TPS2FilterConst_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS2FilterConst_DataStore());

  /* Sum: '<S650>/Sum1' incorporates:
   *  Constant: '<S650>/Constant'
   *  Product: '<S650>/Product'
   *  Product: '<S650>/Product1'
   *  Sum: '<S650>/Sum'
   *  UnitDelay: '<S650>/Unit Delay'
   */
  rtb_Sum1_dp = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s650_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s644_MinMax1 * rtb_DataTypeConversion_ff;

  /* UnitDelay: '<S643>/Unit Delay1' */
  rtb_UnitDelay1_d = BaseEngineController_A02_DWork.s643_UnitDelay1_DSTATE;

  /* If: '<S643>/If' incorporates:
   *  Logic: '<S643>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S643>/If Action Subsystem' incorporates:
     *  ActionPort: '<S651>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_d, &rtb_Merge_py);

    /* End of Outputs for SubSystem: '<S643>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S643>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S652>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((TPS2DfltValue_DataStore()),
      &rtb_Merge_py);

    /* End of Outputs for SubSystem: '<S643>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S643>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S653>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_Sum1_dp, &rtb_Merge_py);

    /* End of Outputs for SubSystem: '<S643>/If Action Subsystem2' */
  }

  /* End of If: '<S643>/If' */

  /* If: '<S654>/If' incorporates:
   *  Inport: '<S655>/In1'
   *  Inport: '<S656>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S654>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S654>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S654>/NewValue' incorporates:
     *  ActionPort: '<S655>/Action Port'
     */
    BaseEngineController_A02_B.s654_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S654>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S654>/OldValue' incorporates:
     *  ActionPort: '<S656>/Action Port'
     */
    BaseEngineController_A02_B.s654_Merge = rtb_Merge_py;

    /* End of Outputs for SubSystem: '<S654>/OldValue' */
  }

  /* End of If: '<S654>/If' */

  /* Logic: '<S323>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S323>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S323>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_i = (IsFaultActive(57) || IsFaultActive(58));

  /* Logic: '<S323>/Logical Operator6' incorporates:
   *  Logic: '<S323>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S323>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S323>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (rtb_LogicalOperator6_i && (IsFaultActive(63) ||
    IsFaultActive(64)));

  /* Switch: '<S323>/Switch2' incorporates:
   *  Logic: '<S323>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S323>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_a || IsFaultActive(65)) {
    /* MinMax: '<S323>/MinMax' */
    BaseEngineController_A02_B.s323_Switch2 =
      (BaseEngineController_A02_B.s654_Merge >=
       BaseEngineController_A02_B.s637_Merge) || rtIsNaN
      (BaseEngineController_A02_B.s637_Merge) ?
      BaseEngineController_A02_B.s654_Merge :
      BaseEngineController_A02_B.s637_Merge;
  } else {
    /* Switch: '<S323>/Switch1' */
    if (rtb_LogicalOperator6_i) {
      BaseEngineController_A02_B.s323_Switch2 =
        BaseEngineController_A02_B.s654_Merge;
    } else {
      BaseEngineController_A02_B.s323_Switch2 =
        BaseEngineController_A02_B.s637_Merge;
    }

    /* End of Switch: '<S323>/Switch1' */
  }

  /* End of Switch: '<S323>/Switch2' */

  /* RelationalOperator: '<S112>/RelOp' incorporates:
   *  Constant: '<S112>/Constant'
   */
  rtb_LogicalOperator6_i = (BaseEngineController_A02_B.s338_State == 2);

  /* S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read1' */
  BaseEngineController_A02_B.s358_motohawk_data_read1 = APP_DataStore();

  /* If: '<S622>/If' incorporates:
   *  Inport: '<S659>/In1'
   *  Inport: '<S660>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S622>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S622>/override_enable'
   */
  if ((APP1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S622>/NewValue' incorporates:
     *  ActionPort: '<S659>/Action Port'
     */
    rtb_Merge_c5 = (APP1_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S622>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S622>/OldValue' incorporates:
     *  ActionPort: '<S660>/Action Port'
     */
    rtb_Merge_c5 = BaseEngineController_A02_B.s358_motohawk_data_read1;

    /* End of Outputs for SubSystem: '<S622>/OldValue' */
  }

  /* End of If: '<S622>/If' */

  /* Outputs for Enabled SubSystem: '<S7>/Crank' incorporates:
   *  EnablePort: '<S111>/Enable'
   */
  if (rtb_LogicalOperator6_i) {
    if (!BaseEngineController_A02_DWork.s7_Crank_MODE) {
      BaseEngineController_A02_DWork.s7_Crank_MODE = TRUE;
    }

    /* MultiPortSwitch: '<S120>/Multiport Switch2' incorporates:
     *  Constant: '<S120>/ClearFloodFueling3'
     *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S120>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_Product1_e = 0.0;
    } else {
      rtb_Product1_e = (OpenThrottleFPCScalar_DataStore());
    }

    /* End of MultiPortSwitch: '<S120>/Multiport Switch2' */

    /* MultiPortSwitch: '<S120>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S120>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_motohawk_replicate1 = rtb_Merge_c5;
    } else {
      rtb_motohawk_replicate1 = BaseEngineController_A02_B.s323_Switch2;
    }

    /* End of MultiPortSwitch: '<S120>/Multiport Switch1' */

    /* Sum: '<S120>/Add' incorporates:
     *  Constant: '<S120>/ClearFloodFueling1'
     *  Gain: '<S120>/Gain'
     *  Product: '<S120>/Product1'
     */
    rtb_Product1_e = 0.01 * rtb_motohawk_replicate1 * rtb_Product1_e + 1.0;

    /* RelationalOperator: '<S120>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_i = (rtb_motohawk_replicate1 >=
      (ClearFloodThreshold_DataStore()));

    /* S-Function Block: <S111>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankECT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s605_Merge, (CrankECT05IdxArr_DataStore()),
         5, (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_p = (CrankECT05Idx_DataStore());
    }

    /* S-Function Block: <S111>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_A02_B.s507_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s507_Sum1, (CrankRPM05IdxArr_DataStore()), 5,
         (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_fj = (CrankRPM05Idx_DataStore());
    }

    /* Switch: '<S120>/Switch' incorporates:
     *  Constant: '<S120>/ClearFloodFueling'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S120>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S111>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S111>/motohawk_prelookup1'
     */
    if (rtb_LogicalOperator6_i) {
      rtb_motohawk_replicate1 = 0.0;
    } else {
      /* S-Function Block: <S120>/motohawk_interpolation_2d */
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

    /* End of Switch: '<S120>/Switch' */

    /* Product: '<S120>/Product' */
    rtb_Product_f5 = rtb_Product1_e * rtb_motohawk_replicate1;

    /* ZeroOrderHold: '<S111>/Zero-Order Hold10' incorporates:
     *  Constant: '<S111>/Mult'
     */
    BaseEngineController_A02_B.s114_FuelMult = 1.0;

    /* ZeroOrderHold: '<S111>/Zero-Order Hold11' incorporates:
     *  Constant: '<S111>/O2 Heater'
     */
    BaseEngineController_A02_B.s114_O2Heater = TRUE;

    /* ZeroOrderHold: '<S111>/Zero-Order Hold2' incorporates:
     *  Constant: '<S111>/OILP'
     */
    BaseEngineController_A02_B.s114_OILP = TRUE;

    /* S-Function Block: <S111>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_fj, (real_T *) ((CrankSparkTbl_DataStore())), 5);
      (CrankSpark_DataStore()) = rtb_motohawk_interpolation_1d2_l;
    }

    /* S-Function (motohawk_sfun_replicate): '<S111>/motohawk_replicate1' */

    /* S-Function Block: <S111>/motohawk_replicate1 */
    rtb_motohawk_replicate1 = rtb_motohawk_interpolation_1d2_l;

    /* ZeroOrderHold: '<S111>/Zero-Order Hold3' */
    BaseEngineController_A02_B.s114_SparkAdv = rtb_motohawk_replicate1;

    /* S-Function Block: <S111>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_a = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_p, rtb_motohawk_prelookup_fj, (real_T *)
         ((CrankSpkEnergyMap_DataStore())), 5, 5);
      (CrankSpkEnergy_DataStore()) = rtb_motohawk_interpolation_2d1_a;
    }

    /* ZeroOrderHold: '<S111>/Zero-Order Hold4' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S111>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S111>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S111>/motohawk_prelookup1'
     */
    BaseEngineController_A02_B.s114_SparkEnergy =
      rtb_motohawk_interpolation_2d1_a;

    /* S-Function Block: <S111>/motohawk_interpolation_1d4 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d4_k = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_fj, (real_T *) ((CrankSOITbl_DataStore())), 5);
      (CrankSOI_DataStore()) = rtb_motohawk_interpolation_1d4_k;
    }

    /* ZeroOrderHold: '<S111>/Zero-Order Hold5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S111>/motohawk_interpolation_1d4'
     *  S-Function (motohawk_sfun_prelookup): '<S111>/motohawk_prelookup'
     */
    BaseEngineController_A02_B.s114_SOI = rtb_motohawk_interpolation_1d4_k;

    /* S-Function (motohawk_sfun_replicate): '<S111>/motohawk_replicate' */

    /* S-Function Block: <S111>/motohawk_replicate */
    {
      int_T i1;
      real_T *y0 = rtb_motohawk_replicate;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] = rtb_Product_f5;
      }
    }

    /* ZeroOrderHold: '<S111>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_A02_B.s114_FPC[0]), (void *)
           &rtb_motohawk_replicate[0], sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S111>/Zero-Order Hold7' incorporates:
     *  Constant: '<S111>/ON'
     */
    BaseEngineController_A02_B.s114_FUELP = TRUE;

    /* S-Function Block: <S111>/motohawk_interpolation_1d5 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_fj, (real_T *) ((CrankMakeUpEOITbl_DataStore())),
         5);
      (CrankMakeUpEOI_DataStore()) = rtb_motohawk_interpolation_1d5;
    }

    /* ZeroOrderHold: '<S111>/Zero-Order Hold8' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S111>/motohawk_interpolation_1d5'
     *  S-Function (motohawk_sfun_prelookup): '<S111>/motohawk_prelookup'
     */
    BaseEngineController_A02_B.s114_MakeUpEOI = rtb_motohawk_interpolation_1d5;

    /* S-Function Block: <S111>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_o5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_p, (real_T *) ((CrankAirflowSetPtTbl_DataStore())),
         5);
      (CrankAirflowSetPt_DataStore()) = rtb_motohawk_interpolation_1d1_o5;
    }

    /* ZeroOrderHold: '<S111>/Zero-Order Hold9' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S111>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S111>/motohawk_prelookup1'
     */
    BaseEngineController_A02_B.s114_Throttle = rtb_motohawk_interpolation_1d1_o5;
  } else {
    if (BaseEngineController_A02_DWork.s7_Crank_MODE) {
      BaseEngineController_A02_DWork.s7_Crank_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S7>/Crank' */
  /* Switch: '<S317>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S317>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* MinMax: '<S334>/MinMax' incorporates:
     *  Constant: '<S317>/Constant1'
     *  Product: '<S317>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S317>/motohawk_calibration2'
     */
    rtb_Sum2_d0 = (Overheat_ScaleAPP_DataStore()) * rtb_Merge_c5;
    y = rtb_Sum2_d0 >= 0.0 ? rtb_Sum2_d0 : 0.0;

    /* MinMax: '<S334>/MinMax1' incorporates:
     *  Constant: '<S317>/Constant1'
     *  MinMax: '<S334>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S317>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s317_Switch1 = (y <= (Overheat_MaxAPP_DataStore()))
      || rtIsNaN((Overheat_MaxAPP_DataStore())) ? y : (Overheat_MaxAPP_DataStore
      ());
  } else {
    BaseEngineController_A02_B.s317_Switch1 = rtb_Merge_c5;
  }

  /* End of Switch: '<S317>/Switch1' */
  /* S-Function Block: <S313>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_A02_B.s637_Merge;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s637_Merge, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S272>/Base TPS Request' */

  /* UnitDelay: '<S314>/Unit Delay2' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s314_UnitDelay2_DSTATE;

  /* S-Function Block: <S314>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_A02_B.s317_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s317_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_f = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S314>/motohawk_interpolation_1d2 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d2_d3 = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_f, (real_T *) ((ETCRequestTbl_DataStore())), 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_1d2_d3;
  }

  /* RelationalOperator: '<S314>/Relational Operator3' */
  BaseEngineController_A02_B.s314_RelationalOperator3 = ((rtb_UnitDelay_mz <
    rtb_motohawk_interpolation_1d2_d3));

  /* Outputs for Enabled SubSystem: '<S314>/PassThrough1' */
  BaseEngineController_A02_PassThrough1
    (BaseEngineController_A02_B.s314_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_A02_B.s314_Merge);

  /* End of Outputs for SubSystem: '<S314>/PassThrough1' */

  /* RelationalOperator: '<S314>/Relational Operator2' */
  rtb_RelationalOperator2_la = (rtb_UnitDelay_mz >
    rtb_motohawk_interpolation_1d2_d3);

  /* Outputs for Enabled SubSystem: '<S314>/PassThrough2' */
  BaseEngineController_A02_PassThrough1(rtb_RelationalOperator2_la,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_A02_B.s314_Merge);

  /* End of Outputs for SubSystem: '<S314>/PassThrough2' */

  /* S-Function Block: <S330>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s330_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S314>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s314_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_mz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S314>/Product' incorporates:
   *  MinMax: '<S314>/MinMax'
   */
  rtb_UnitDelay_mz /= (rtb_UnitDelay_mz >= BaseEngineController_A02_B.s314_Merge)
    || rtIsNaN(BaseEngineController_A02_B.s314_Merge) ? rtb_UnitDelay_mz :
    BaseEngineController_A02_B.s314_Merge;

  /* Product: '<S327>/Product' */
  rtb_Product1_e = rtb_motohawk_interpolation_1d2_d3 * rtb_UnitDelay_mz;

  /* Sum: '<S327>/Sum' incorporates:
   *  Constant: '<S327>/Constant'
   */
  rtb_Sum_iy = 1.0 - rtb_UnitDelay_mz;

  /* UnitDelay: '<S327>/Unit Delay' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s327_UnitDelay_DSTATE;

  /* Sum: '<S327>/Sum1' incorporates:
   *  Product: '<S327>/Product1'
   */
  rtb_Sum1_gje = rtb_Sum_iy * rtb_UnitDelay_mz + rtb_Product1_e;

  /* UnitDelay: '<S330>/Unit Delay' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s330_UnitDelay_DSTATE;

  /* Product: '<S330>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S330>/motohawk_delta_time'
   *  Sum: '<S330>/Sum3'
   */
  rtb_Product1_e = 1.0 / rtb_motohawk_delta_time_e * (rtb_Sum1_gje -
    rtb_UnitDelay_mz);

  /* S-Function Block: <S314>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_kt = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_kt;
  }

  /* MinMax: '<S331>/MinMax' */
  y = (rtb_Product1_e >= rtb_motohawk_interpolation_1d1_kt) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_kt) ? rtb_Product1_e :
    rtb_motohawk_interpolation_1d1_kt;

  /* S-Function Block: <S314>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_kt = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_kt;
  }

  /* Sum: '<S330>/Sum2' incorporates:
   *  MinMax: '<S331>/MinMax'
   *  MinMax: '<S331>/MinMax1'
   *  Product: '<S330>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S330>/motohawk_delta_time'
   */
  BaseEngineController_A02_B.s330_Sum2 = ((y <=
    rtb_motohawk_interpolation_1d1_kt) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_kt) ? y : rtb_motohawk_interpolation_1d1_kt)
    * rtb_motohawk_delta_time_e + rtb_UnitDelay_mz;

  /* UnitDelay: '<S314>/Unit Delay1' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s314_UnitDelay1_DSTATE;

  /* UnitDelay: '<S314>/Unit Delay3' */
  rtb_Sum_iy = BaseEngineController_A02_DWork.s314_UnitDelay3_DSTATE;

  /* UnitDelay: '<S314>/Unit Delay4' */
  rtb_UnitDelay4_bi = BaseEngineController_A02_DWork.s314_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S314>/Unit Delay2' */
  BaseEngineController_A02_DWork.s314_UnitDelay2_DSTATE = rtb_Product1_e;

  /* Update for UnitDelay: '<S327>/Unit Delay' */
  BaseEngineController_A02_DWork.s327_UnitDelay_DSTATE = rtb_Sum1_gje;

  /* Update for UnitDelay: '<S330>/Unit Delay' */
  BaseEngineController_A02_DWork.s330_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s330_Sum2;

  /* Update for UnitDelay: '<S314>/Unit Delay1' */
  BaseEngineController_A02_DWork.s314_UnitDelay1_DSTATE = rtb_Sum_iy;

  /* Update for UnitDelay: '<S314>/Unit Delay3' */
  BaseEngineController_A02_DWork.s314_UnitDelay3_DSTATE = rtb_UnitDelay4_bi;

  /* Update for UnitDelay: '<S314>/Unit Delay4' */
  BaseEngineController_A02_DWork.s314_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_1d2_d3;

  /* End of Outputs for SubSystem: '<S272>/Base TPS Request' */

  /* UnitDelay: '<S321>/Unit Delay' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s321_UnitDelay_DSTATE;

  /* Sum: '<S321>/Sum' incorporates:
   *  Constant: '<S321>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S321>/motohawk_calibration'
   */
  rtb_Sum_iy = 1.0 - (O2DelagFilterConst_DataStore());

  /* S-Function Block: <S590>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s590_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S590>/Product' incorporates:
   *  MinMax: '<S590>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S590>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (O2_PostCatFiltConst_DataStore())) || rtIsNaN((O2_PostCatFiltConst_DataStore
    ())) ? rtb_DataTypeConversion_ff : (O2_PostCatFiltConst_DataStore());

  /* Logic: '<S588>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S588>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S588>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(44) || IsFaultActive(45));

  /* Logic: '<S588>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S588>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S588>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S588>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(44) || IsFaultSuspected(45));

  /* S-Function Block: <S357>/motohawk_ain3 Resource: PostO2Pin */
  {
    extern NativeError_S PostO2Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    PostO2Pin_AnalogInput_Get(&BaseEngineController_A02_B.s357_motohawk_ain3,
      NULL);
  }

  /* DataTypeConversion: '<S588>/Data Type Conversion' */
  rtb_DataTypeConversion_m = (real_T)
    BaseEngineController_A02_B.s357_motohawk_ain3;

  /* S-Function Block: <S595>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (O2_PostCatIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_m,
      (O2_PostCatIdxArr_DataStore()), 20, (O2_PostCatIdx_DataStore()));
    rtb_motohawk_prelookup_l = (O2_PostCatIdx_DataStore());
  }

  /* S-Function Block: <S595>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_B.s595_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_l, (real_T *)
      ((O2_PostCatTbl_DataStore())), 20);
  }

  /* UnitDelay: '<S588>/Unit Delay' */
  rtb_UnitDelay_hm = BaseEngineController_A02_DWork.s588_UnitDelay_DSTATE;

  /* If: '<S588>/If' incorporates:
   *  Logic: '<S588>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S588>/If Action Subsystem' incorporates:
     *  ActionPort: '<S591>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_hm, &rtb_Merge_dh);

    /* End of Outputs for SubSystem: '<S588>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S588>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S592>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((O2_PostCatDefault_DataStore()),
      &rtb_Merge_dh);

    /* End of Outputs for SubSystem: '<S588>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S588>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S593>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s595_motohawk_interpolation_1d, &rtb_Merge_dh);

    /* End of Outputs for SubSystem: '<S588>/If Action Subsystem2' */
  }

  /* End of If: '<S588>/If' */

  /* Sum: '<S596>/Sum1' incorporates:
   *  Constant: '<S596>/Constant'
   *  Product: '<S596>/Product'
   *  Product: '<S596>/Product1'
   *  Sum: '<S596>/Sum'
   *  UnitDelay: '<S596>/Unit Delay'
   */
  rtb_Sum1_kq = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s596_UnitDelay_DSTATE + rtb_Merge_dh *
    rtb_DataTypeConversion_ff;

  /* If: '<S594>/If' incorporates:
   *  Inport: '<S597>/In1'
   *  Inport: '<S598>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S594>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S594>/override_enable'
   */
  if ((O2_PostCat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S594>/NewValue' incorporates:
     *  ActionPort: '<S597>/Action Port'
     */
    BaseEngineController_A02_B.s594_Merge = (O2_PostCat_new_DataStore());

    /* End of Outputs for SubSystem: '<S594>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S594>/OldValue' incorporates:
     *  ActionPort: '<S598>/Action Port'
     */
    BaseEngineController_A02_B.s594_Merge = rtb_Sum1_kq;

    /* End of Outputs for SubSystem: '<S594>/OldValue' */
  }

  /* End of If: '<S594>/If' */

  /* Sum: '<S321>/Sum1' incorporates:
   *  Product: '<S321>/Product'
   *  Product: '<S321>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S321>/motohawk_calibration'
   */
  BaseEngineController_A02_B.s321_Sum1 = rtb_Product1_e * rtb_Sum_iy +
    (O2DelagFilterConst_DataStore()) * BaseEngineController_A02_B.s594_Merge;

  /* S-Function Block: <S343>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s343_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c0 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S343>/Switch' incorporates:
   *  Constant: '<S342>/Constant'
   *  Constant: '<S343>/Constant'
   *  RelationalOperator: '<S342>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S325>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S343>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S343>/motohawk_delta_time'
   *  Sum: '<S343>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_A02_B.s343_Switch = rtb_motohawk_delta_time_c0 +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_A02_B.s343_Switch = 0.0;
  }

  /* End of Switch: '<S343>/Switch' */
  /* S-Function Block: <S311>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_A02_B.s507_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s507_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_A02_B.s311_motohawk_prelookup1 = (RPM09Idx_DataStore());
  }

  /* S-Function Block: <S311>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_A02_B.s507_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s507_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_A02_B.s311_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S309>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_A02_B.s605_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s605_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_A02_B.s309_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S310>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_A02_B.s614_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s614_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_A02_B.s310_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_data_read): '<S269>/motohawk_data_read1' */
  BaseEngineController_A02_B.s269_motohawk_data_read1 = EngineState_DataStore();

  /* S-Function Block: <S269>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s269_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_A02_B.s269_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S269>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S269>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch (BaseEngineController_A02_DWork.s274_is_c19_BaseEngineController_A02) {
   case BaseEngineController_A02_IN_CrankRun:
    /* During 'CrankRun': '<S274>:2' */
    if (BaseEngineController_A02_B.s269_motohawk_data_read1 == 1) {
      /* Transition: '<S274>:6' */
      BaseEngineController_A02_DWork.s274_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_StallDelay;

      /* Entry 'StallDelay': '<S274>:3' */
      BaseEngineController_A02_B.s274_Enable = FALSE;
      BaseEngineController_A02_B.s274_Timer = 0.0;
      BaseEngineController_A02_DWork.s274_TOld = 0.0;
    }
    break;

   case BaseEngineController_A02_IN_Stall:
    /* During 'Stall': '<S274>:1' */
    if (BaseEngineController_A02_B.s269_motohawk_data_read1 > 1) {
      /* Transition: '<S274>:5' */
      BaseEngineController_A02_DWork.s274_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_CrankRun;

      /* Entry 'CrankRun': '<S274>:2' */
      BaseEngineController_A02_B.s274_Enable = FALSE;
    }
    break;

   case BaseEngineController_A02_IN_StallDelay:
    /* During 'StallDelay': '<S274>:3' */
    if (BaseEngineController_A02_B.s269_motohawk_data_read1 > 1) {
      /* Transition: '<S274>:8' */
      BaseEngineController_A02_DWork.s274_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_CrankRun;

      /* Entry 'CrankRun': '<S274>:2' */
      BaseEngineController_A02_B.s274_Enable = FALSE;
    } else if (((BaseEngineController_A02_B.s269_motohawk_data_read1 == 1) &
                (BaseEngineController_A02_B.s274_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S274>:7' */
      BaseEngineController_A02_DWork.s274_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall;

      /* Entry 'Stall': '<S274>:1' */
      BaseEngineController_A02_B.s274_Enable = TRUE;
    } else {
      BaseEngineController_A02_B.s274_Timer =
        BaseEngineController_A02_DWork.s274_TOld +
        BaseEngineController_A02_B.s269_motohawk_delta_time;
      BaseEngineController_A02_DWork.s274_TOld =
        BaseEngineController_A02_B.s274_Timer;
    }
    break;

   default:
    /* Transition: '<S274>:4' */
    BaseEngineController_A02_DWork.s274_is_c19_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Stall;

    /* Entry 'Stall': '<S274>:1' */
    BaseEngineController_A02_B.s274_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S269>/Baro Stall State Delay' */
  /* Logic: '<S512>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S512>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S512>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(34) || IsFaultActive(35));

  /* Logic: '<S512>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S512>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S512>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S512>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(34) || IsFaultSuspected(35));

  /* S-Function Block: <S356>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_A02_B.s356_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S512>/Data Type Conversion' */
  rtb_DataTypeConversion_ff = (real_T)
    BaseEngineController_A02_B.s356_motohawk_ain_read1;

  /* Product: '<S512>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S512>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_DataTypeConversion_ff * (MAPTimeGain_DataStore());

  /* Sum: '<S512>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S512>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s512_Sum1 = rtb_Product1_e + (MAPTimeOfst_DataStore
    ());

  /* UnitDelay: '<S512>/Unit Delay1' */
  rtb_UnitDelay1_dq = BaseEngineController_A02_DWork.s512_UnitDelay1_DSTATE;

  /* If: '<S512>/If' incorporates:
   *  Logic: '<S512>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S512>/If Action Subsystem' incorporates:
     *  ActionPort: '<S555>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_dq, &rtb_Merge_pk);

    /* End of Outputs for SubSystem: '<S512>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S512>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S556>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_pk);

    /* End of Outputs for SubSystem: '<S512>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S512>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S557>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s512_Sum1, &rtb_Merge_pk);

    /* End of Outputs for SubSystem: '<S512>/If Action Subsystem2' */
  }

  /* End of If: '<S512>/If' */

  /* Outputs for Enabled SubSystem: '<S269>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S275>/Enable'
   */
  if (BaseEngineController_A02_B.s274_Enable) {
    if (!BaseEngineController_A02_DWork.s269_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S275>/Unit Delay' */
      BaseEngineController_A02_DWork.s275_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s269_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S275>/Add' incorporates:
     *  Constant: '<S275>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S275>/motohawk_calibration'
     */
    rtb_Add_a = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S275>/Sum' incorporates:
     *  Constant: '<S275>/Constant'
     *  UnitDelay: '<S275>/Unit Delay'
     */
    rtb_Sum_l3 = (int8_T)(BaseEngineController_A02_DWork.s275_UnitDelay_DSTATE +
                          1);

    /* RelationalOperator: '<S275>/Relational Operator' */
    rtb_LogicalOperator6_i = (rtb_Sum_l3 <= rtb_Add_a);

    /* Switch: '<S275>/Switch' */
    if (rtb_LogicalOperator6_i) {
      rtb_Add_a = rtb_Sum_l3;
    }

    /* End of Switch: '<S275>/Switch' */

    /* Outputs for Enabled SubSystem: '<S275>/Collect Average' incorporates:
     *  EnablePort: '<S278>/Enable'
     */
    /* Logic: '<S275>/Logical Operator' incorporates:
     *  Constant: '<S275>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S275>/Relational Operator1'
     */
    if (rtb_LogicalOperator6_i && (rtb_Sum_l3 > 2)) {
      if (!BaseEngineController_A02_DWork.s275_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S278>/Unit Delay1' */
        BaseEngineController_A02_DWork.s278_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s275_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S278>/Sum1' incorporates:
       *  UnitDelay: '<S278>/Unit Delay1'
       */
      rtb_Product1_e = rtb_Merge_pk +
        BaseEngineController_A02_DWork.s278_UnitDelay1_DSTATE;

      /* Product: '<S278>/Product' incorporates:
       *  DataTypeConversion: '<S278>/Data Type Conversion'
       *  Sum: '<S275>/Add1'
       */
      BaseEngineController_A02_B.s278_Product = 1.0 / (real_T)(int8_T)(rtb_Add_a
        - 2) * rtb_Product1_e;

      /* Update for UnitDelay: '<S278>/Unit Delay1' */
      BaseEngineController_A02_DWork.s278_UnitDelay1_DSTATE = rtb_Product1_e;
    } else {
      if (BaseEngineController_A02_DWork.s275_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s275_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S275>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S275>/Collect Average' */

    /* Update for UnitDelay: '<S275>/Unit Delay' */
    BaseEngineController_A02_DWork.s275_UnitDelay_DSTATE = rtb_Add_a;
  } else {
    if (BaseEngineController_A02_DWork.s269_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S275>/Collect Average' */
      BaseEngineController_A02_DWork.s275_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S275>/Collect Average' */
      BaseEngineController_A02_DWork.s269_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S269>/Capture Signal At Startup' */

  /* If: '<S277>/If' incorporates:
   *  Inport: '<S284>/In1'
   *  Inport: '<S285>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S277>/override_enable'
   *  UnitDelay: '<S277>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S277>/NewValue' incorporates:
     *  ActionPort: '<S284>/Action Port'
     */
    rtb_Merge_kp = BaseEngineController_A02_DWork.s277_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S277>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S277>/OldValue' incorporates:
     *  ActionPort: '<S285>/Action Port'
     */
    rtb_Merge_kp = BaseEngineController_A02_B.s278_Product;

    /* End of Outputs for SubSystem: '<S277>/OldValue' */
  }

  /* End of If: '<S277>/If' */

  /* Sum: '<S277>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S277>/offset'
   */
  BaseEngineController_A02_B.s277_Sum = rtb_Merge_kp + (BARO_offset_DataStore());

  /* Saturate: '<S269>/Saturation1' */
  rtb_Saturation1 = BaseEngineController_A02_B.s277_Sum >= 1.0 ?
    BaseEngineController_A02_B.s277_Sum : 1.0;

  /* S-Function Block: <S276>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_n = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S276>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_d = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_d;
  }

  /* S-Function Block: <S310>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_A02_B.s614_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s614_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_c = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S276>/motohawk_interpolation_1d2 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d2_h = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2_c, (real_T *) ((VETempCorrTbl_DataStore())), 17);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_1d2_h;
  }

  /* DataTypeConversion: '<S276>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S276>/Number of Combustion Events Per Revolution'
   */
  rtb_Sum_iy = (real_T)((uint8_T)CombEventsPerRev_DataStore());

  /* Fcn: '<S279>/C to K' */
  rtb_DataTypeConversion_e = BaseEngineController_A02_B.s614_Merge + 273.2;

  /* Saturate: '<S276>/Saturation' */
  rtb_UnitDelay4_bi = rtb_DataTypeConversion_e >= 1.0 ? rtb_DataTypeConversion_e
    : 1.0;

  /* S-Function Block: <S546>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s546_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S546>/Product' incorporates:
   *  MinMax: '<S546>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S546>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (MAPFilterConst_DataStore())) || rtIsNaN((MAPFilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (MAPFilterConst_DataStore());

  /* Logic: '<S511>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S511>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S511>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(32) || IsFaultActive(33));

  /* Logic: '<S511>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S511>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S511>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S511>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(32) || IsFaultSuspected(33));

  /* S-Function (motohawk_sfun_trigger): '<S513>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_6623p0005 */
  if (BaseEngineController_A02_DWork.s513_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s513_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S511>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration4'
   */
  rtb_Product1_e = BaseEngineController_A02_B.s513_Merge * (MAPGain_DataStore());

  /* Sum: '<S511>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s511_Sum1 = rtb_Product1_e + (MAPOfst_DataStore());

  /* UnitDelay: '<S511>/Unit Delay1' */
  rtb_UnitDelay1_n = BaseEngineController_A02_DWork.s511_UnitDelay1_DSTATE;

  /* If: '<S511>/If' incorporates:
   *  Logic: '<S511>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S511>/If Action Subsystem' incorporates:
     *  ActionPort: '<S547>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_n, &rtb_Merge_bn);

    /* End of Outputs for SubSystem: '<S511>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S511>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S548>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_bn);

    /* End of Outputs for SubSystem: '<S511>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S511>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s511_Sum1, &rtb_Merge_bn);

    /* End of Outputs for SubSystem: '<S511>/If Action Subsystem2' */
  }

  /* End of If: '<S511>/If' */

  /* Sum: '<S551>/Sum1' incorporates:
   *  Constant: '<S551>/Constant'
   *  Product: '<S551>/Product'
   *  Product: '<S551>/Product1'
   *  Sum: '<S551>/Sum'
   *  UnitDelay: '<S551>/Unit Delay'
   */
  rtb_Sum1_pb = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_A02_DWork.s551_UnitDelay_DSTATE + rtb_Merge_bn *
    rtb_DataTypeConversion_e;

  /* If: '<S550>/If' incorporates:
   *  Inport: '<S552>/In1'
   *  Inport: '<S553>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S550>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S550>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S550>/NewValue' incorporates:
     *  ActionPort: '<S552>/Action Port'
     */
    BaseEngineController_A02_B.s550_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S550>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S550>/OldValue' incorporates:
     *  ActionPort: '<S553>/Action Port'
     */
    BaseEngineController_A02_B.s550_Merge = rtb_Sum1_pb;

    /* End of Outputs for SubSystem: '<S550>/OldValue' */
  }

  /* End of If: '<S550>/If' */

  /* Product: '<S276>/Nominal Air Flow Rate2' incorporates:
   *  Constant: '<S276>/Gas Const [J//kg-K]'
   *  Constant: '<S276>/Units Equivalency Factor'
   *  S-Function (motohawk_sfun_data_read): '<S276>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S276>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S276>/motohawk_interpolation_1d2'
   *  S-Function (motohawk_sfun_prelookup): '<S276>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S310>/motohawk_prelookup2'
   */
  BaseEngineController_A02_B.s276_NominalAirFlowRate2 =
    BaseEngineController_A02_B.s507_Sum1 * BaseEngineController_A02_B.s550_Merge
    * rtb_motohawk_interpolation_1d1_d * rtb_motohawk_interpolation_1d2_h *
    CylSweptVol_DataStore() * rtb_Sum_iy / rtb_UnitDelay4_bi / 60.0 / 287.0;

  /* Product: '<S276>/Pressure Ratio' */
  BaseEngineController_A02_B.s276_PressureRatio =
    BaseEngineController_A02_B.s550_Merge / rtb_Saturation1;

  /* S-Function Block: <S276>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (PortPressRatio17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s276_PressureRatio,
       (PortPressRatio17IdxArr_DataStore()), 17, (PortPressRatio17Idx_DataStore()));
    rtb_motohawk_prelookup_ld = (PortPressRatio17Idx_DataStore());
  }

  /* S-Function Block: <S276>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup_ld, BaseEngineController_A02_B.s311_Indexes,
       (real_T *) ((VEMap_DataStore())), 17, 17);
    (VE_DataStore()) = rtb_motohawk_interpolation_2d;
  }

  /* If: '<S281>/If' incorporates:
   *  Inport: '<S282>/In1'
   *  Inport: '<S283>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S281>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S281>/override_enable'
   */
  if ((VETable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S281>/NewValue' incorporates:
     *  ActionPort: '<S282>/Action Port'
     */
    rtb_Product1_e = (VETable_new_DataStore());

    /* End of Outputs for SubSystem: '<S281>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S281>/OldValue' incorporates:
     *  ActionPort: '<S283>/Action Port'
     */
    rtb_Product1_e = rtb_motohawk_interpolation_2d;

    /* End of Outputs for SubSystem: '<S281>/OldValue' */
  }

  /* End of If: '<S281>/If' */

  /* S-Function Block: <S488>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s488_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S488>/Product' incorporates:
   *  MinMax: '<S488>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (MAFFiltConst_DataStore())) || rtIsNaN((MAFFiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (MAFFiltConst_DataStore());

  /* Logic: '<S486>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S486>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S486>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(30) || IsFaultActive(31));

  /* Logic: '<S486>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S486>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S486>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S486>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(30) || IsFaultSuspected(31));

  /* S-Function Block: <S354>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_l);
  }

  /* DataTypeConversion: '<S354>/Data Type Conversion' */
  rtb_DataTypeConversion_om = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S354>/Gain' */
  BaseEngineController_A02_B.s354_Gain = 0.01 * rtb_DataTypeConversion_om;

  /* S-Function Block: <S493>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s354_Gain, (MAFIdxArr_DataStore()), 40,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_j = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S493>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_B.s493_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_j, (real_T *)
      ((MAFTbl_DataStore())), 40);
  }

  /* UnitDelay: '<S486>/Unit Delay' */
  rtb_UnitDelay_az = BaseEngineController_A02_DWork.s486_UnitDelay_DSTATE;

  /* If: '<S486>/If' incorporates:
   *  Logic: '<S486>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S486>/If Action Subsystem' incorporates:
     *  ActionPort: '<S489>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_az, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S486>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S486>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S490>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S486>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S486>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S491>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s493_motohawk_interpolation_1d, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S486>/If Action Subsystem2' */
  }

  /* End of If: '<S486>/If' */

  /* Sum: '<S494>/Sum1' incorporates:
   *  Constant: '<S494>/Constant'
   *  Product: '<S494>/Product'
   *  Product: '<S494>/Product1'
   *  Sum: '<S494>/Sum'
   *  UnitDelay: '<S494>/Unit Delay'
   */
  rtb_Sum1_f = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_A02_DWork.s494_UnitDelay_DSTATE + rtb_Merge_j *
    rtb_DataTypeConversion_e;

  /* If: '<S492>/If' incorporates:
   *  Inport: '<S495>/In1'
   *  Inport: '<S496>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S492>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S492>/NewValue' incorporates:
     *  ActionPort: '<S495>/Action Port'
     */
    BaseEngineController_A02_B.s492_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S492>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S492>/OldValue' incorporates:
     *  ActionPort: '<S496>/Action Port'
     */
    BaseEngineController_A02_B.s492_Merge = rtb_Sum1_f;

    /* End of Outputs for SubSystem: '<S492>/OldValue' */
  }

  /* End of If: '<S492>/If' */

  /* MultiPortSwitch: '<S276>/Multiport Switch' incorporates:
   *  Product: '<S276>/Model Air Mass Flow Rate'
   *  S-Function (motohawk_sfun_calibration): '<S276>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    rtb_DataTypeConversion_om = rtb_Product1_e *
      BaseEngineController_A02_B.s276_NominalAirFlowRate2;
  } else {
    rtb_DataTypeConversion_om = BaseEngineController_A02_B.s492_Merge;
  }

  /* End of MultiPortSwitch: '<S276>/Multiport Switch' */

  /* Saturate: '<S276>/Saturation1' */
  BaseEngineController_A02_B.s276_Saturation1 = rtb_DataTypeConversion_om >= 1.0
    ? rtb_DataTypeConversion_om : 1.0;

  /* S-Function Block: <S289>/motohawk_delta_time */
  rtb_DataTypeConversion_om = 0.005;

  /* UnitDelay: '<S289>/Unit Delay2' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s289_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S289>/Relational Operator4' incorporates:
   *  UnitDelay: '<S289>/Unit Delay2'
   */
  BaseEngineController_A02_B.s289_RelationalOperator4 =
    ((BaseEngineController_A02_DWork.s289_UnitDelay2_DSTATE <
      BaseEngineController_A02_B.s507_Sum1));

  /* Outputs for Enabled SubSystem: '<S289>/IncreasingFilter' incorporates:
   *  EnablePort: '<S293>/Enable'
   */
  if (BaseEngineController_A02_B.s289_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration1' */
    BaseEngineController_A02_B.s289_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S289>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S289>/DecreasingFilter' incorporates:
   *  EnablePort: '<S291>/Enable'
   */
  /* RelationalOperator: '<S289>/Relational Operator3' */
  if (rtb_Product1_e > BaseEngineController_A02_B.s507_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S291>/motohawk_calibration2' */
    BaseEngineController_A02_B.s289_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S289>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S289>/DecreasingFilter' */

  /* Product: '<S289>/Product' incorporates:
   *  MinMax: '<S289>/MinMax'
   */
  rtb_DataTypeConversion_om /= (rtb_DataTypeConversion_om >=
    BaseEngineController_A02_B.s289_Merge) || rtIsNaN
    (BaseEngineController_A02_B.s289_Merge) ? rtb_DataTypeConversion_om :
    BaseEngineController_A02_B.s289_Merge;

  /* Sum: '<S292>/Sum1' incorporates:
   *  Constant: '<S292>/Constant'
   *  Product: '<S292>/Product'
   *  Product: '<S292>/Product1'
   *  Sum: '<S292>/Sum'
   *  UnitDelay: '<S292>/Unit Delay'
   */
  BaseEngineController_A02_B.s292_Sum1 = (1.0 - rtb_DataTypeConversion_om) *
    BaseEngineController_A02_DWork.s292_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s507_Sum1 * rtb_DataTypeConversion_om;

  /* Sum: '<S286>/Sum1' */
  rtb_DataTypeConversion_om = BaseEngineController_A02_B.s507_Sum1 -
    BaseEngineController_A02_B.s292_Sum1;

  /* Abs: '<S286>/Abs1' */
  rtb_DataTypeConversion_om = fabs(rtb_DataTypeConversion_om);

  /* RelationalOperator: '<S286>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S286>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_LogicalOperator6_i = (rtb_DataTypeConversion_om <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S286>/Relational Operator2' incorporates:
   *  Constant: '<S286>/Constant'
   */
  rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s507_Sum1 > 0.0);

  /* Saturate: '<S297>/Saturation2' */
  rtb_Saturation2 = BaseEngineController_A02_B.s507_Sum1 >= 1.0 ?
    BaseEngineController_A02_B.s507_Sum1 : 1.0;

  /* DataTypeConversion: '<S287>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S287>/Number of Combustion Events Per Revolution'
   */
  rtb_DataTypeConversion_om = (real_T)((uint8_T)CombEventsPerRev_DataStore());

  /* Saturate: '<S297>/Saturation' */
  rtb_Saturation_d = rtb_DataTypeConversion_om >= 1.0 ?
    rtb_DataTypeConversion_om : 1.0;

  /* RelationalOperator: '<S300>/RelOp' incorporates:
   *  Constant: '<S300>/Constant'
   */
  rtb_RelOp_pg = (BaseEngineController_A02_B.s507_Sum1 != 0.0);

  /* Outputs for Enabled SubSystem: '<S297>/Multiply and Divide, avoiding divde by zero1' */
  BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(rtb_RelOp_pg,
    BaseEngineController_A02_B.s276_Saturation1, 60000.0, rtb_Saturation2,
    rtb_Saturation_d,
    &BaseEngineController_A02_B.s297_MultiplyandDivideavoidingdivdebyzero1);

  /* End of Outputs for SubSystem: '<S297>/Multiply and Divide, avoiding divde by zero1' */

  /* S-Function Block: <S287>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APC_TPS10Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s297_MultiplyandDivideavoidingdivdebyzero1.s150_chargemass,
       (APC_TPS10IdxArr_DataStore()), 10, (APC_TPS10Idx_DataStore()));
    rtb_motohawk_prelookup_g = (APC_TPS10Idx_DataStore());
  }

  /* S-Function Block: <S287>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_Torque = TableInterpolation1D_real_T(rtb_motohawk_prelookup_g, (real_T *)
      ((IndLoadTbl_DataStore())), 10);
    (IndLoad_DataStore()) = rtb_Torque;
  }

  /* S-Function Block: <S290>/motohawk_delta_time */
  rtb_DataTypeConversion_om = 0.005;

  /* UnitDelay: '<S290>/Unit Delay2' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s290_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S290>/Relational Operator4' incorporates:
   *  UnitDelay: '<S290>/Unit Delay2'
   */
  BaseEngineController_A02_B.s290_RelationalOperator4 =
    ((BaseEngineController_A02_DWork.s290_UnitDelay2_DSTATE < rtb_Torque));

  /* Outputs for Enabled SubSystem: '<S290>/IncreasingFilter' incorporates:
   *  EnablePort: '<S296>/Enable'
   */
  if (BaseEngineController_A02_B.s290_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S296>/motohawk_calibration1' */
    BaseEngineController_A02_B.s290_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S290>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S290>/DecreasingFilter' incorporates:
   *  EnablePort: '<S294>/Enable'
   */
  /* RelationalOperator: '<S290>/Relational Operator3' */
  if (rtb_Product1_e > rtb_Torque) {
    /* S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration2' */
    BaseEngineController_A02_B.s290_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S290>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S290>/DecreasingFilter' */

  /* Product: '<S290>/Product' incorporates:
   *  MinMax: '<S290>/MinMax'
   */
  rtb_DataTypeConversion_om /= (rtb_DataTypeConversion_om >=
    BaseEngineController_A02_B.s290_Merge) || rtIsNaN
    (BaseEngineController_A02_B.s290_Merge) ? rtb_DataTypeConversion_om :
    BaseEngineController_A02_B.s290_Merge;

  /* Sum: '<S295>/Sum1' incorporates:
   *  Constant: '<S295>/Constant'
   *  Product: '<S295>/Product'
   *  Product: '<S295>/Product1'
   *  Sum: '<S295>/Sum'
   *  UnitDelay: '<S295>/Unit Delay'
   */
  BaseEngineController_A02_B.s295_Sum1 = (1.0 - rtb_DataTypeConversion_om) *
    BaseEngineController_A02_DWork.s295_UnitDelay_DSTATE + rtb_Torque *
    rtb_DataTypeConversion_om;

  /* Sum: '<S286>/Sum' */
  rtb_DataTypeConversion_om = rtb_Torque - BaseEngineController_A02_B.s295_Sum1;

  /* Abs: '<S286>/Abs' */
  rtb_DataTypeConversion_om = fabs(rtb_DataTypeConversion_om);

  /* Logic: '<S286>/Logical Operator' incorporates:
   *  RelationalOperator: '<S286>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S286>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_A02_B.s286_LogicalOperator = ((rtb_LogicalOperator6_i &&
    rtb_LogicalOperator1_a && (rtb_DataTypeConversion_om <= (SSLoadTol_DataStore
    ()))));

  /* S-Function Block: <S350>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom09In_DataStore()) = rtb_Torque;
    (IndLoadNom09Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom09IdxArr_DataStore()), 9, (IndLoadNom09Idx_DataStore()));
    BaseEngineController_A02_B.s350_motohawk_prelookup1 =
      (IndLoadNom09Idx_DataStore());
  }

  /* S-Function Block: <S350>/motohawk_prelookup4 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom17In_DataStore()) = rtb_Torque;
    (IndLoadNom17Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom17IdxArr_DataStore()), 17, (IndLoadNom17Idx_DataStore()));
    BaseEngineController_A02_B.s350_motohawk_prelookup4 =
      (IndLoadNom17Idx_DataStore());
  }

  /* Fcn: '<S298>/Torque to Power' */
  BaseEngineController_A02_B.s298_TorquetoPower = rtb_Torque *
    BaseEngineController_A02_B.s507_Sum1 * 3.1415926535897931 / 30000.0;

  /* S-Function Block: <S349>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndPower05In_DataStore()) = BaseEngineController_A02_B.s298_TorquetoPower;
    (IndPower05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s298_TorquetoPower,
       (IndPower05IdxArr_DataStore()), 5, (IndPower05Idx_DataStore()));
    rtb_motohawk_prelookup_d = (IndPower05Idx_DataStore());
  }

  /* Sum: '<S288>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration3'
   */
  rtb_DataTypeConversion_om = (SteadyStateECT_DataStore()) -
    BaseEngineController_A02_B.s605_Merge;

  /* Saturate: '<S288>/Saturation1' */
  rtb_Product1_e = rtb_DataTypeConversion_om >= 0.0 ? rtb_DataTypeConversion_om :
    0.0;

  /* Product: '<S288>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration4'
   */
  rtb_Sum_iy = BaseEngineController_A02_B.s298_TorquetoPower /
    (MaxIndEngPwr_DataStore());

  /* S-Function Block: <S288>/motohawk_delta_time1 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s288_motohawk_delta_time1_DWORK1, NULL);
    rtb_motohawk_delta_time1 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S288>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_delta_time): '<S288>/motohawk_delta_time1'
   */
  rtb_Product1_e = rtb_Product1_e * rtb_Sum_iy * rtb_motohawk_delta_time1 /
    (WarmUpTimeConst_DataStore());

  /* RelationalOperator: '<S304>/RelOp' incorporates:
   *  Constant: '<S304>/Constant'
   */
  rtb_LogicalOperator6_i = (BaseEngineController_A02_B.s298_TorquetoPower == 0.0);

  /* Outputs for Enabled SubSystem: '<S288>/Integrate Offset To ECT' incorporates:
   *  EnablePort: '<S305>/Enable'
   */
  /* RelationalOperator: '<S288>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration3'
   *  UnitDelay: '<S288>/Unit Delay'
   */
  if (BaseEngineController_A02_DWork.s288_UnitDelay_DSTATE <
      (SteadyStateECT_DataStore())) {
    /* S-Function Block: <S307>/motohawk_delta_time1 */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s307_motohawk_delta_time1_DWORK1, NULL);
      rtb_motohawk_delta_time1_h = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S307>/Switch1' incorporates:
     *  Constant: '<S305>/Constant1'
     *  DataTypeConversion: '<S307>/Data Type Conversion'
     *  UnitDelay: '<S307>/Unit Delay'
     */
    if (rtb_LogicalOperator6_i >= 1) {
      BaseEngineController_A02_B.s307_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_B.s307_Switch1 =
        BaseEngineController_A02_DWork.s307_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S307>/Switch1' */

    /* MinMax: '<S308>/MinMax' incorporates:
     *  Constant: '<S305>/Constant'
     *  Product: '<S307>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S307>/motohawk_delta_time1'
     *  Sum: '<S307>/Sum'
     */
    rtb_Sum2_d0 = rtb_Product1_e * rtb_motohawk_delta_time1_h +
      BaseEngineController_A02_B.s307_Switch1;
    y = rtb_Sum2_d0 >= 0.0 ? rtb_Sum2_d0 : 0.0;

    /* MinMax: '<S308>/MinMax1' incorporates:
     *  Constant: '<S305>/Constant'
     *  Constant: '<S305>/Constant2'
     *  MinMax: '<S308>/MinMax'
     */
    minV = (y <= rtInf) || rtIsNaN(rtInf) ? y : rtInf;

    /* Update for UnitDelay: '<S307>/Unit Delay' incorporates:
     *  MinMax: '<S308>/MinMax1'
     */
    BaseEngineController_A02_DWork.s307_UnitDelay_DSTATE = minV;
  }

  /* End of RelationalOperator: '<S288>/Relational Operator' */
  /* End of Outputs for SubSystem: '<S288>/Integrate Offset To ECT' */

  /* Sum: '<S288>/Sum1' */
  rtb_DataTypeConversion_om = BaseEngineController_A02_B.s605_Merge +
    BaseEngineController_A02_B.s307_Switch1;

  /* MinMax: '<S306>/MinMax' */
  rtb_DataTypeConversion_om = (rtb_DataTypeConversion_om >=
    BaseEngineController_A02_B.s605_Merge) || rtIsNaN
    (BaseEngineController_A02_B.s605_Merge) ? rtb_DataTypeConversion_om :
    BaseEngineController_A02_B.s605_Merge;

  /* MinMax: '<S306>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration3'
   */
  BaseEngineController_A02_B.s306_MinMax1 = (rtb_DataTypeConversion_om <=
    (SteadyStateECT_DataStore())) || rtIsNaN((SteadyStateECT_DataStore())) ?
    rtb_DataTypeConversion_om : (SteadyStateECT_DataStore());

  /* S-Function Block: <S348>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (NECCT09In_DataStore()) = BaseEngineController_A02_B.s306_MinMax1;
    (NECCT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s306_MinMax1, (NECCT09IdxArr_DataStore()), 9,
       (NECCT09Idx_DataStore()));
    rtb_motohawk_prelookup_em = (NECCT09Idx_DataStore());
  }

  /* S-Function Block: <S347>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) = BaseEngineController_A02_B.s276_Saturation1;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s276_Saturation1, (MAFPort05IdxArr_DataStore()),
       5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_b = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S322>/RelOp' incorporates:
   *  Constant: '<S322>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S272>/motohawk_data_read'
   */
  rtb_RelOp_g = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S272>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S315>/Enable'
   */
  if (rtb_RelOp_g) {
    if (!BaseEngineController_A02_DWork.s272_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S315>/Unit Delay' */
      BaseEngineController_A02_DWork.s315_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s272_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S315>/Sum' incorporates:
     *  Constant: '<S315>/Constant'
     *  UnitDelay: '<S315>/Unit Delay'
     */
    rtb_Add_a = (int8_T)(BaseEngineController_A02_DWork.s315_UnitDelay_DSTATE +
                         1);

    /* Sum: '<S315>/Add' incorporates:
     *  Constant: '<S315>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S315>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S315>/Relational Operator' */
    rtb_LogicalOperator6_i = (rtb_Add_a <= rtb_Sum_l3);

    /* Switch: '<S315>/Switch' */
    if (rtb_LogicalOperator6_i) {
      rtb_Sum_l3 = rtb_Add_a;
    }

    /* End of Switch: '<S315>/Switch' */

    /* Outputs for Enabled SubSystem: '<S315>/Collect Average' incorporates:
     *  EnablePort: '<S332>/Enable'
     */
    /* Logic: '<S315>/Logical Operator' incorporates:
     *  Constant: '<S315>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S315>/Relational Operator1'
     */
    if (rtb_LogicalOperator6_i && (rtb_Add_a > 2)) {
      if (!BaseEngineController_A02_DWork.s315_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S332>/Unit Delay1' */
        BaseEngineController_A02_DWork.s332_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s315_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S332>/Sum1' incorporates:
       *  UnitDelay: '<S332>/Unit Delay1'
       */
      rtb_Product1_e = BaseEngineController_A02_B.s599_Merge +
        BaseEngineController_A02_DWork.s332_UnitDelay1_DSTATE;

      /* Product: '<S332>/Product' incorporates:
       *  DataTypeConversion: '<S332>/Data Type Conversion'
       *  Sum: '<S315>/Add1'
       */
      BaseEngineController_A02_B.s332_Product = 1.0 / (real_T)(int8_T)
        (rtb_Sum_l3 - 2) * rtb_Product1_e;

      /* Update for UnitDelay: '<S332>/Unit Delay1' */
      BaseEngineController_A02_DWork.s332_UnitDelay1_DSTATE = rtb_Product1_e;
    } else {
      if (BaseEngineController_A02_DWork.s315_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s315_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S315>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S315>/Collect Average' */

    /* Update for UnitDelay: '<S315>/Unit Delay' */
    BaseEngineController_A02_DWork.s315_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_A02_DWork.s272_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S315>/Collect Average' */
      BaseEngineController_A02_DWork.s315_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S315>/Collect Average' */
      BaseEngineController_A02_DWork.s272_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S272>/Capture ECT At Startup' */
  /* S-Function Block: <S346>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) = BaseEngineController_A02_B.s332_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s332_Product, (ECT_KeyUp09IdxArr_DataStore()),
       9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_eu = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S335>/Sum2' incorporates:
   *  UnitDelay: '<S335>/Unit Delay'
   */
  rtb_Product1_e = BaseEngineController_A02_B.s507_Sum1 -
    BaseEngineController_A02_DWork.s335_UnitDelay_DSTATE;

  /* S-Function Block: <S335>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s335_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S335>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S335>/motohawk_delta_time'
   */
  rtb_Product1_e /= rtb_motohawk_delta_time_f;

  /* S-Function Block: <S336>/motohawk_delta_time */
  rtb_DataTypeConversion_om = 0.005;

  /* Product: '<S336>/Product' incorporates:
   *  MinMax: '<S336>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S336>/motohawk_calibration'
   */
  rtb_DataTypeConversion_om /= (rtb_DataTypeConversion_om >=
    (EngineAccelFiltConst_DataStore())) || rtIsNaN
    ((EngineAccelFiltConst_DataStore())) ? rtb_DataTypeConversion_om :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S337>/Sum1' incorporates:
   *  Constant: '<S337>/Constant'
   *  Product: '<S337>/Product'
   *  Product: '<S337>/Product1'
   *  Sum: '<S337>/Sum'
   *  UnitDelay: '<S337>/Unit Delay'
   */
  BaseEngineController_A02_B.s337_Sum1 = (1.0 - rtb_DataTypeConversion_om) *
    BaseEngineController_A02_DWork.s337_UnitDelay_DSTATE + rtb_Product1_e *
    rtb_DataTypeConversion_om;

  /* S-Function Block: <S273>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_A02_B.s337_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s337_Sum1, (RPMAccel17IdxArr_DataStore()), 17,
       (RPMAccel17Idx_DataStore()));
    BaseEngineController_A02_B.s273_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* RelationalOperator: '<S116>/RelOp' incorporates:
   *  Constant: '<S116>/Constant'
   */
  rtb_RelOp_av = (BaseEngineController_A02_B.s338_State == 3);

  /* S-Function Block: <S534>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s534_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_m = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S534>/Unit Delay' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s534_UnitDelay_DSTATE;

  /* Logic: '<S509>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S509>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S509>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(23) || IsFaultActive(24));

  /* Logic: '<S509>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S509>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S509>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S509>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(23) || IsFaultSuspected(24));

  /* S-Function Block: <S356>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get(&rtb_DataTypeConversion6, NULL);
  }

  /* Gain: '<S356>/Gain' */
  BaseEngineController_A02_B.s356_Gain = 100.0 * (real_T)rtb_DataTypeConversion6;

  /* Product: '<S509>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S509>/motohawk_calibration4'
   */
  rtb_Sum_iy = BaseEngineController_A02_B.s356_Gain * (FuelSensGain_DataStore());

  /* Sum: '<S509>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S509>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s509_Sum1 = rtb_Sum_iy + (FuelSensOfst_DataStore());

  /* Saturate: '<S509>/Saturation' */
  rtb_Saturation_j = BaseEngineController_A02_B.s509_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_A02_B.s509_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s509_Sum1;

  /* UnitDelay: '<S509>/Unit Delay1' */
  rtb_UnitDelay1_p = BaseEngineController_A02_DWork.s509_UnitDelay1_DSTATE;

  /* If: '<S509>/If' incorporates:
   *  Logic: '<S509>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S509>/If Action Subsystem' incorporates:
     *  ActionPort: '<S526>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_p, &rtb_Merge_k1);

    /* End of Outputs for SubSystem: '<S509>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S509>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S527>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_k1);

    /* End of Outputs for SubSystem: '<S509>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S509>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S528>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_Saturation_j, &rtb_Merge_k1);

    /* End of Outputs for SubSystem: '<S509>/If Action Subsystem2' */
  }

  /* End of If: '<S509>/If' */

  /* Product: '<S534>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S534>/motohawk_delta_time'
   *  Sum: '<S534>/Sum3'
   */
  rtb_DataTypeConversion_om = 1.0 / rtb_motohawk_delta_time_m * (rtb_Merge_k1 -
    rtb_Product1_e);

  /* MinMax: '<S535>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S532>/motohawk_calibration1'
   */
  rtb_DataTypeConversion_om = (rtb_DataTypeConversion_om >= (Fall_Rate_DataStore
                                ())) || rtIsNaN((Fall_Rate_DataStore())) ?
    rtb_DataTypeConversion_om : (Fall_Rate_DataStore());

  /* Sum: '<S534>/Sum2' incorporates:
   *  MinMax: '<S535>/MinMax1'
   *  Product: '<S534>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S532>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S534>/motohawk_delta_time'
   */
  rtb_Sum2_n = ((rtb_DataTypeConversion_om <= (Rise_Rate_DataStore())) ||
                rtIsNaN((Rise_Rate_DataStore())) ? rtb_DataTypeConversion_om :
                (Rise_Rate_DataStore())) * rtb_motohawk_delta_time_m +
    rtb_Product1_e;

  /* S-Function Block: <S530>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s530_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_om = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S530>/Product' incorporates:
   *  MinMax: '<S530>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S530>/motohawk_calibration'
   */
  rtb_DataTypeConversion_om /= (rtb_DataTypeConversion_om >=
    (FuelSensFilterConst_DataStore())) || rtIsNaN((FuelSensFilterConst_DataStore
    ())) ? rtb_DataTypeConversion_om : (FuelSensFilterConst_DataStore());

  /* Sum: '<S533>/Sum1' incorporates:
   *  Constant: '<S533>/Constant'
   *  Product: '<S533>/Product'
   *  Product: '<S533>/Product1'
   *  Sum: '<S533>/Sum'
   *  UnitDelay: '<S533>/Unit Delay'
   */
  rtb_Sum1_da = (1.0 - rtb_DataTypeConversion_om) *
    BaseEngineController_A02_DWork.s533_UnitDelay_DSTATE + rtb_Merge_k1 *
    rtb_DataTypeConversion_om;

  /* UnitDelay: '<S531>/Unit Delay' */
  rtb_UnitDelay_li = BaseEngineController_A02_DWork.s531_UnitDelay_DSTATE;

  /* UnitDelay: '<S531>/Unit Delay1' */
  rtb_UnitDelay1_e = BaseEngineController_A02_DWork.s531_UnitDelay1_DSTATE;

  /* UnitDelay: '<S531>/Unit Delay2' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s531_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S525>/Multiport Switch' incorporates:
   *  Product: '<S531>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S525>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 1:
    rtb_Product1_e = rtb_Sum2_n;
    break;

   case 2:
    rtb_Product1_e = rtb_Sum1_da;
    break;

   default:
    /* Product: '<S531>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration3'
     */
    rtb_Product1_e *= (Gain3_DataStore());

    /* Sum: '<S531>/Sum2' incorporates:
     *  Product: '<S531>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration2'
     */
    rtb_Product1_e += (Gain2_DataStore()) * rtb_UnitDelay1_e;

    /* Sum: '<S531>/Sum' incorporates:
     *  Product: '<S531>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration1'
     *  Sum: '<S531>/Sum1'
     */
    rtb_Product1_e = ((Gain1_DataStore()) * rtb_UnitDelay_li + rtb_Product1_e) +
      rtb_Merge_k1;
    rtb_Product1_e *= (Gain4_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S525>/Multiport Switch' */
  /* If: '<S529>/If' incorporates:
   *  Inport: '<S536>/In1'
   *  Inport: '<S537>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S529>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S529>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S529>/NewValue' incorporates:
     *  ActionPort: '<S536>/Action Port'
     */
    BaseEngineController_A02_B.s529_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S529>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S529>/OldValue' incorporates:
     *  ActionPort: '<S537>/Action Port'
     */
    BaseEngineController_A02_B.s529_Merge = rtb_Product1_e;

    /* End of Outputs for SubSystem: '<S529>/OldValue' */
  }

  /* End of If: '<S529>/If' */

  /* Outputs for Enabled SubSystem: '<S7>/Run' incorporates:
   *  EnablePort: '<S115>/Enable'
   */
  if (rtb_RelOp_av) {
    if (!BaseEngineController_A02_DWork.s7_Run_MODE) {
      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S115>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S115>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S180>/IdleStateMachine' */
        BaseEngineController_A02_IdleStateMachine_Init();

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

        /* S-Function Block: <S183>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s183_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for Atomic SubSystem: '<S130>/AiflowOffset' */

        /* S-Function Block: <S186>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s186_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* End of InitializeConditions for SubSystem: '<S130>/AiflowOffset' */

        /* S-Function Block: <S211>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s211_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S115>/MaxGovernor' */

        /* S-Function Block: <S161>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s161_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S173>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s173_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S115>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S236>/Initial Condition is True' */
        BaseEngineController_A02_DWork.s236_InitialConditionisTrue_DSTATE = TRUE;
      }

      /* InitializeConditions for Atomic SubSystem: '<S115>/O2 Control' */

      /* InitializeConditions for Atomic SubSystem: '<S131>/O2 PID Controller' */
      /* InitializeConditions for UnitDelay: '<S228>/Unit Delay' */
      BaseEngineController_A02_DWork.s228_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S225>/Unit Delay' */
      BaseEngineController_A02_DWork.s225_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S224>/Unit Delay' */
      BaseEngineController_A02_DWork.s224_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S225>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s225_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S221>/Unit Delay1' */
      BaseEngineController_A02_DWork.s221_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S229>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s229_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S221>/Unit Delay' */
      BaseEngineController_A02_DWork.s221_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S231>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s231_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S221>/Unit Delay2' */
      BaseEngineController_A02_DWork.s221_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S230>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s230_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S131>/O2 PID Controller' */
      /* End of InitializeConditions for SubSystem: '<S115>/O2 Control' */

      /* Level2 S-Function Block: '<S115>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_3881p0004 */
      BaseEngineController_A02_DWork.s115_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_A02_DWork.s7_Run_MODE = TRUE;
    }

    /* Outputs for Enabled SubSystem: '<S125>/ShutDownTasksComplete Reset' incorporates:
     *  EnablePort: '<S134>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration2' */
    if ((AirControlSource_DataStore())) {
      /* S-Function (motohawk_sfun_data_write): '<S134>/motohawk_data_write' incorporates:
       *  Constant: '<S134>/Constant'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration2' */
    /* End of Outputs for SubSystem: '<S125>/ShutDownTasksComplete Reset' */

    /* Outputs for Atomic SubSystem: '<S115>/Base Equiv Ratio' */

    /* S-Function Block: <S126>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_WarmUpMult = TableInterpolation2D_real_T(rtb_motohawk_prelookup_d,
        rtb_motohawk_prelookup_em, (real_T *) ((WarmUpEqRatioMultMap_DataStore())),
        5, 9);
      (WarmUpEqRatioMult_DataStore()) = rtb_WarmUpMult;
    }

    /* S-Function Block: <S126>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s350_motohawk_prelookup4,
         BaseEngineController_A02_B.s311_Indexes, (real_T *)
         ((DesEquivRatioMap_DataStore())), 17, 17);
      (DesEquivRatio_DataStore()) = rtb_motohawk_interpolation_2d3;
    }

    /* If: '<S135>/If' incorporates:
     *  Inport: '<S136>/In1'
     *  Inport: '<S137>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S135>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S135>/override_enable'
     */
    if ((EquivRatio_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S135>/NewValue' incorporates:
       *  ActionPort: '<S136>/Action Port'
       */
      rtb_Product1_e = (EquivRatio_new_DataStore());

      /* End of Outputs for SubSystem: '<S135>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S135>/OldValue' incorporates:
       *  ActionPort: '<S137>/Action Port'
       */
      rtb_Product1_e = rtb_motohawk_interpolation_2d3;

      /* End of Outputs for SubSystem: '<S135>/OldValue' */
    }

    /* End of If: '<S135>/If' */

    /* Product: '<S126>/Product1' */
    BaseEngineController_A02_B.s126_DesEquivRatio = rtb_Product1_e *
      rtb_WarmUpMult;

    /* End of Outputs for SubSystem: '<S115>/Base Equiv Ratio' */

    /* S-Function (motohawk_sfun_trigger): '<S115>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_3881p0004 */
    if (BaseEngineController_A02_DWork.s115_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_A02_DWork.s115_motohawk_trigger1_DWORK1 = 1;
    }

    /* Sum: '<S125>/Sum2' */
    rtb_Product1_e =
      BaseEngineController_A02_B.s186_DontallowsetpointtoeverdropbelowtheTargetRPM
      + BaseEngineController_A02_B.s130_MinGovAirPID;

    /* MultiPortSwitch: '<S125>/Multiport Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration2'
     */
    if ((AirControlSource_DataStore()) == FALSE) {
      /* Switch: '<S125>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration1'
       */
      if ((ThrottleSource_DataStore())) {
        /* S-Function Block: <S125>/motohawk_interpolation_1d2 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d2_g = TableInterpolation1D_real_T
            (BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_g;
        }

        /* Switch: '<S125>/Switch2' */
        if (BaseEngineController_A02_B.s160_MultiportSwitch) {
          rtb_Product1_e = BaseEngineController_A02_B.s163_Switch;
        } else {
          /* Switch: '<S125>/Switch4' incorporates:
           *  Logic: '<S125>/Logical Operator'
           *  Sum: '<S125>/Sum1'
           */
          if (!BaseEngineController_A02_B.s196_RelOp) {
            rtb_Product1_e = BaseEngineController_A02_B.s330_Sum2 +
              BaseEngineController_A02_B.s186_DontallowsetpointtoeverdropbelowtheTargetRPM;
          }

          /* End of Switch: '<S125>/Switch4' */
        }

        /* End of Switch: '<S125>/Switch2' */

        /* MinMax: '<S133>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration3'
         */
        y = (rtb_Product1_e >= (MinETCSetpoint_DataStore())) || rtIsNaN
          ((MinETCSetpoint_DataStore())) ? rtb_Product1_e :
          (MinETCSetpoint_DataStore());

        /* MinMax: '<S133>/MinMax1' incorporates:
         *  MinMax: '<S133>/MinMax'
         */
        rtb_Merge_c5 = (y <= rtb_motohawk_interpolation_1d2_g) || rtIsNaN
          (rtb_motohawk_interpolation_1d2_g) ? y :
          rtb_motohawk_interpolation_1d2_g;
      }

      /* End of Switch: '<S125>/Switch1' */
      BaseEngineController_A02_B.s125_MultiportSwitch = rtb_Merge_c5;
    } else {
      BaseEngineController_A02_B.s125_MultiportSwitch = rtb_Product1_e;
    }

    /* End of MultiPortSwitch: '<S125>/Multiport Switch' */

    /* S-Function Block: <S127>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_o = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s309_motohawk_prelookup, (real_T *)
         ((ECTEGRInterpolationTbl_DataStore())), 5);
      (ECTEGRInterpolation_DataStore()) = rtb_motohawk_interpolation_1d_o;
    }

    /* S-Function Block: <S127>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioTargetDelta_a = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s350_motohawk_prelookup1,
         BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
         ((EGR_MultMap_DataStore())), 9, 9);
      (EGR_Mult_DataStore()) = rtb_RichEquivRatioTargetDelta_a;
    }

    /* Product: '<S127>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S127>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S127>/motohawk_interpolation_2d3'
     */
    BaseEngineController_A02_B.s127_Product = rtb_motohawk_interpolation_1d_o *
      rtb_RichEquivRatioTargetDelta_a;

    /* Outputs for Atomic SubSystem: '<S115>/O2 Control' */

    /* S-Function (motohawk_sfun_fault_action): '<S131>/motohawk_fault_action'
     *
     * Regarding '<S131>/motohawk_fault_action':
       Get Fault Action Status: DisableO2Ctrl
     */
    {
      extern boolean_T GetFaultActionStatus(uint32_T action);
      rtb_motohawk_fault_action_g = GetFaultActionStatus(2);
    }

    /* S-Function (motohawk_sfun_data_write): '<S131>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DisableO2FaultAction */
    {
      DisableO2FaultAction_DataStore() = rtb_motohawk_fault_action_g;
    }

    /* Inport: '<S131>/Desired_Equiv' */
    rtb_DesiredLambda_idx = BaseEngineController_A02_B.s126_DesEquivRatio;
    rtb_DesiredLambda_idx_0 = rtb_WarmUpMult;

    /* Logic: '<S214>/Logical Operator' incorporates:
     *  Constant: '<S214>/Constant'
     *  RelationalOperator: '<S214>/Relational Operator'
     *  RelationalOperator: '<S214>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S214>/motohawk_calibration1'
     *  Sum: '<S214>/Sum'
     *  Sum: '<S214>/Sum1'
     */
    BaseEngineController_A02_B.s214_LogicalOperator = (((rtb_DesiredLambda_idx <=
      (EquivRatioDelta_DataStore()) + 1.0) && (rtb_DesiredLambda_idx >= 1.0 -
      (EquivRatioDelta_DataStore()))));

    /* Logic: '<S214>/Logical Operator3' */
    BaseEngineController_A02_B.s214_LogicalOperator3 =
      !rtb_motohawk_fault_action_g;

    /* S-Function Block: <S214>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_ox = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_eu, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_ox;
    }

    /* RelationalOperator: '<S214>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S214>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S346>/motohawk_prelookup'
     */
    BaseEngineController_A02_B.s214_RelationalOperator5 =
      ((BaseEngineController_A02_B.s343_Switch >=
        rtb_motohawk_interpolation_1d_ox));

    /* Logic: '<S214>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S214>/motohawk_calibration2'
     */
    BaseEngineController_A02_B.s214_LogicalOperator2 =
      ((BaseEngineController_A02_B.s286_LogicalOperator &&
        BaseEngineController_A02_B.s214_LogicalOperator &&
        BaseEngineController_A02_B.s214_LogicalOperator3 &&
        (O2ControlEnable_DataStore()) &&
        BaseEngineController_A02_B.s214_RelationalOperator5));

    /* Logic: '<S131>/Logical Operator' */
    rtb_LogicalOperator6_i = !BaseEngineController_A02_B.s214_LogicalOperator2;

    /* S-Function Block: <S219>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s350_motohawk_prelookup1,
         BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S219>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s350_motohawk_prelookup1,
         BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S218>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_j = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_em, (real_T *) ((O2NECCTErrGainMultTbl_DataStore
           ())), 9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_j;
    }

    /* S-Function Block: <S218>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_b, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_l;
    }

    /* Product: '<S218>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S218>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S218>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S347>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S348>/motohawk_prelookup'
     */
    rtb_Product1_e = rtb_motohawk_interpolation_1d_j *
      rtb_motohawk_interpolation_1d1_l;

    /* Logic: '<S131>/Logical Operator1' */
    rtb_LogicalOperator1_a = !rtb_RelOp_av;

    /* Outputs for Atomic SubSystem: '<S131>/O2 PID Controller' */
    /* RelationalOperator: '<S221>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S219>/motohawk_interpolation_2d2'
     *  Sum: '<S221>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_A02_B.s321_Sum1 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S221>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S219>/motohawk_interpolation_2d3'
     *  Sum: '<S221>/Sum4'
     */
    rtb_LogicalOperator2_n2 = (BaseEngineController_A02_B.s321_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S228>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_n2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic[0] =
        BaseEngineController_A02_ConstP.pooled627[rowidx];
      rtb_CombinatorialLogic[1] =
        BaseEngineController_A02_ConstP.pooled627[rowidx + 4];
    }

    /* Switch: '<S228>/Switch1' incorporates:
     *  UnitDelay: '<S228>/Unit Delay'
     */
    if (rtb_CombinatorialLogic[1]) {
      rtb_Switch1_p0 = rtb_CombinatorialLogic[0];
    } else {
      rtb_Switch1_p0 = BaseEngineController_A02_DWork.s228_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S228>/Switch1' */

    /* Switch: '<S216>/Switch' */
    if (rtb_LogicalOperator6_i) {
      BaseEngineController_A02_B.s216_Switch =
        BaseEngineController_A02_B.s321_Sum1;
    } else {
      /* Switch: '<S221>/Switch2' incorporates:
       *  Logic: '<S221>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S219>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S219>/motohawk_interpolation_2d1'
       *  Sum: '<S221>/Sum1'
       *  Sum: '<S221>/Sum2'
       */
      if (!rtb_Switch1_p0) {
        /* S-Function Block: <S219>/motohawk_interpolation_2d */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_RichEquivRatioTargetDelta_nq = TableInterpolation2D_real_T
            (BaseEngineController_A02_B.s350_motohawk_prelookup1,
             BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
             ((RichTargetDeltaMap_DataStore())), 9, 9);
          (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_nq;
        }

        BaseEngineController_A02_B.s216_Switch =
          rtb_RichEquivRatioTargetDelta_nq + rtb_DesiredLambda_idx;
      } else {
        /* S-Function Block: <S219>/motohawk_interpolation_2d1 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
            (BaseEngineController_A02_B.s350_motohawk_prelookup1,
             BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
             ((LeanTargetDeltaMap_DataStore())), 9, 9);
          (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
        }

        BaseEngineController_A02_B.s216_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S221>/Switch2' */
    }

    /* End of Switch: '<S216>/Switch' */

    /* Sum: '<S223>/Sum2' */
    BaseEngineController_A02_B.s223_Sum2 =
      BaseEngineController_A02_B.s216_Switch -
      BaseEngineController_A02_B.s321_Sum1;

    /* Product: '<S223>/Product5' */
    rtb_Sum1_gje = BaseEngineController_A02_B.s223_Sum2 * rtb_Product1_e;

    /* Product: '<S223>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration5'
     */
    BaseEngineController_A02_B.s223_Product2 = rtb_Sum1_gje *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S225>/Switch1' incorporates:
     *  Constant: '<S220>/Constant'
     *  UnitDelay: '<S225>/Unit Delay'
     */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s225_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_B.s225_Switch1 =
        BaseEngineController_A02_DWork.s225_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S225>/Switch1' */

    /* Product: '<S223>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration7'
     */
    rtb_Merge_c5 = rtb_Sum1_gje * (O2CtrlDGain_DataStore());

    /* Sum: '<S224>/Sum2' incorporates:
     *  UnitDelay: '<S224>/Unit Delay'
     */
    rtb_Product1_e = rtb_Merge_c5 -
      BaseEngineController_A02_DWork.s224_UnitDelay_DSTATE;

    /* S-Function Block: <S224>/motohawk_delta_time */
    rtb_motohawk_delta_time_nl = 0.005;

    /* Product: '<S224>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S224>/motohawk_delta_time'
     */
    BaseEngineController_A02_B.s224_Product = rtb_Product1_e /
      rtb_motohawk_delta_time_nl;

    /* MinMax: '<S222>/MinMax' incorporates:
     *  Constant: '<S220>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration11'
     *  Sum: '<S220>/Sum'
     *  Sum: '<S223>/Sum1'
     */
    rtb_Sum2_d0 = ((BaseEngineController_A02_B.s223_Product2 +
                    BaseEngineController_A02_B.s224_Product) +
                   BaseEngineController_A02_B.s225_Switch1) + 1.0;
    y = (rtb_Sum2_d0 >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? rtb_Sum2_d0 :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S222>/MinMax1' incorporates:
     *  MinMax: '<S222>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration10'
     */
    minV = (y <= (O2CtrlPIDOutUpperLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutUpperLimit_DataStore())) ? y :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S223>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration6'
     */
    rtb_Product1_e = rtb_Sum1_gje * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S225>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s225_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fo = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S227>/MinMax' incorporates:
     *  Product: '<S225>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S225>/motohawk_delta_time'
     *  Sum: '<S225>/Sum'
     */
    rtb_Sum2_d0 = rtb_Product1_e * rtb_motohawk_delta_time_fo +
      BaseEngineController_A02_B.s225_Switch1;
    y = (rtb_Sum2_d0 >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? rtb_Sum2_d0 :
      (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S227>/MinMax1' incorporates:
     *  MinMax: '<S227>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration9'
     */
    y = (y <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? y : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S221>/Unit Delay1' */
    rtb_Sum1_gje = BaseEngineController_A02_DWork.s221_UnitDelay1_DSTATE;

    /* Logic: '<S221>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S221>/motohawk_data_read'
     */
    rtb_LogicalOperator10 = (rtb_LogicalOperator2_n2 &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S229>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s229_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_iv = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S221>/Logical Operator4' */
    rtb_LogicalOperator4_b2 = !rtb_LogicalOperator6_i;

    /* Logic: '<S221>/Logical Operator6' */
    rtb_LogicalOperator1_a = !rtb_LogicalOperator1_a;

    /* Switch: '<S229>/Switch' incorporates:
     *  Constant: '<S229>/Constant'
     *  Logic: '<S221>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S229>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S229>/motohawk_delta_time'
     *  Sum: '<S229>/Sum'
     */
    if (rtb_LogicalOperator2_n2 && rtb_LogicalOperator4_b2 &&
        rtb_LogicalOperator1_a) {
      rtb_Product1_e = rtb_motohawk_delta_time_iv + O2LeanTimer_DataStore();
    } else {
      rtb_Product1_e = 0.0;
    }

    /* End of Switch: '<S229>/Switch' */

    /* Switch: '<S221>/Switch3' */
    if (rtb_LogicalOperator10) {
      BaseEngineController_A02_B.s221_Switch3 = rtb_Sum1_gje;
    } else {
      BaseEngineController_A02_B.s221_Switch3 = rtb_Product1_e;
    }

    /* End of Switch: '<S221>/Switch3' */
    /* RelationalOperator: '<S221>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration2'
     */
    rtb_LT3 = ((BaseEngineController_A02_B.s221_Switch3 >=
                (O2LeanTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S221>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(41, rtb_LT3);
      UpdateFault(41);
    }

    /* UnitDelay: '<S221>/Unit Delay' */
    rtb_Sum1_gje = BaseEngineController_A02_DWork.s221_UnitDelay_DSTATE;

    /* Logic: '<S221>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S221>/motohawk_data_read'
     */
    rtb_LogicalOperator6_i = (rtb_AboveRich && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S231>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s231_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_m0 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S231>/Switch' incorporates:
     *  Constant: '<S231>/Constant'
     *  Logic: '<S221>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S231>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S231>/motohawk_delta_time'
     *  Sum: '<S231>/Sum'
     */
    if (rtb_AboveRich && rtb_LogicalOperator4_b2 && rtb_LogicalOperator1_a) {
      rtb_Sum_iy = rtb_motohawk_delta_time_m0 + O2RichTimer_DataStore();
    } else {
      rtb_Sum_iy = 0.0;
    }

    /* End of Switch: '<S231>/Switch' */

    /* Switch: '<S221>/Switch1' */
    if (rtb_LogicalOperator6_i) {
      BaseEngineController_A02_B.s221_Switch1 = rtb_Sum1_gje;
    } else {
      BaseEngineController_A02_B.s221_Switch1 = rtb_Sum_iy;
    }

    /* End of Switch: '<S221>/Switch1' */
    /* RelationalOperator: '<S221>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration1'
     */
    rtb_LT2 = ((BaseEngineController_A02_B.s221_Switch1 >=
                (O2RichTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S221>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(42, rtb_LT2);
      UpdateFault(42);
    }

    /* UnitDelay: '<S221>/Unit Delay2' */
    rtb_Sum1_gje = BaseEngineController_A02_DWork.s221_UnitDelay2_DSTATE;

    /* Logic: '<S221>/Logical Operator2' incorporates:
     *  Logic: '<S221>/Logical Operator1'
     *  Logic: '<S221>/Logical Operator3'
     */
    rtb_LogicalOperator2_n2 = ((!rtb_LogicalOperator2_n2) && (!rtb_AboveRich));

    /* Logic: '<S221>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S221>/motohawk_data_read'
     */
    rtb_LogicalOperator6_i = (rtb_LogicalOperator2_n2 &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S230>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s230_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_me = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S230>/Switch' incorporates:
     *  Constant: '<S230>/Constant'
     *  Logic: '<S221>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S230>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S230>/motohawk_delta_time'
     *  Sum: '<S230>/Sum'
     */
    if (rtb_LogicalOperator2_n2 && rtb_LogicalOperator4_b2 &&
        rtb_LogicalOperator1_a) {
      rtb_UnitDelay4_bi = rtb_motohawk_delta_time_me + O2ActiveTimer_DataStore();
    } else {
      rtb_UnitDelay4_bi = 0.0;
    }

    /* End of Switch: '<S230>/Switch' */

    /* Switch: '<S221>/Switch4' */
    if (rtb_LogicalOperator6_i) {
      BaseEngineController_A02_B.s221_Switch4 = rtb_Sum1_gje;
    } else {
      BaseEngineController_A02_B.s221_Switch4 = rtb_UnitDelay4_bi;
    }

    /* End of Switch: '<S221>/Switch4' */
    /* RelationalOperator: '<S221>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration3'
     */
    rtb_LT4 = ((BaseEngineController_A02_B.s221_Switch4 >=
                (O2ActiveTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S221>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(43, rtb_LT4);
      UpdateFault(43);
    }

    /* Saturate: '<S229>/Saturation' */
    rtb_Saturation_ad = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
      0.0 ? 0.0 : rtb_Product1_e;

    /* S-Function (motohawk_sfun_data_write): '<S229>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer */
    {
      O2LeanTimer_DataStore() = rtb_Saturation_ad;
    }

    /* Saturate: '<S230>/Saturation' */
    rtb_Saturation_bu = rtb_UnitDelay4_bi >= 16000.0 ? 16000.0 :
      rtb_UnitDelay4_bi <= 0.0 ? 0.0 : rtb_UnitDelay4_bi;

    /* S-Function (motohawk_sfun_data_write): '<S230>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer */
    {
      O2ActiveTimer_DataStore() = rtb_Saturation_bu;
    }

    /* Saturate: '<S231>/Saturation' */
    rtb_Saturation_bh = rtb_Sum_iy >= 16000.0 ? 16000.0 : rtb_Sum_iy <= 0.0 ?
      0.0 : rtb_Sum_iy;

    /* S-Function (motohawk_sfun_data_write): '<S231>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer */
    {
      O2RichTimer_DataStore() = rtb_Saturation_bh;
    }

    /* InitialCondition: '<S216>/Multiply by 1.0 if not yet enabled' incorporates:
     *  MinMax: '<S222>/MinMax1'
     */
    if (BaseEngineController_A02_DWork.s216_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_A02_DWork.s216_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      BaseEngineController_A02_B.s216_Multiplyby10ifnotyetenabled = 1.0;
    } else {
      BaseEngineController_A02_B.s216_Multiplyby10ifnotyetenabled = minV;
    }

    /* End of InitialCondition: '<S216>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S228>/Unit Delay' */
    BaseEngineController_A02_DWork.s228_UnitDelay_DSTATE = rtb_Switch1_p0;

    /* Update for UnitDelay: '<S225>/Unit Delay' incorporates:
     *  MinMax: '<S227>/MinMax1'
     */
    BaseEngineController_A02_DWork.s225_UnitDelay_DSTATE = y;

    /* Update for UnitDelay: '<S224>/Unit Delay' */
    BaseEngineController_A02_DWork.s224_UnitDelay_DSTATE = rtb_Merge_c5;

    /* Update for UnitDelay: '<S221>/Unit Delay1' */
    BaseEngineController_A02_DWork.s221_UnitDelay1_DSTATE =
      BaseEngineController_A02_B.s221_Switch3;

    /* Update for UnitDelay: '<S221>/Unit Delay' */
    BaseEngineController_A02_DWork.s221_UnitDelay_DSTATE =
      BaseEngineController_A02_B.s221_Switch1;

    /* Update for UnitDelay: '<S221>/Unit Delay2' */
    BaseEngineController_A02_DWork.s221_UnitDelay2_DSTATE =
      BaseEngineController_A02_B.s221_Switch4;

    /* End of Outputs for SubSystem: '<S131>/O2 PID Controller' */

    /* S-Function (motohawk_sfun_probe): '<S214>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* S-Function Block: <S131>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITermIn_DataStore()) = BaseEngineController_A02_B.s225_Switch1;
      (O2ITermIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s225_Switch1, (O2ITermIdxArr_DataStore()), 9,
         (O2ITermIdx_DataStore()));
      rtb_ITermIdx = (O2ITermIdx_DataStore());
    }

    /* End of Outputs for SubSystem: '<S115>/O2 Control' */

    /* Outputs for Atomic SubSystem: '<S115>/Fuel System Manager' */

    /* Gain: '<S143>/Gain' */
    rtb_Product1_e = 0.01 * BaseEngineController_A02_B.s529_Merge;

    /* Product: '<S143>/Product1' incorporates:
     *  Constant: '<S143>/ '
     *  S-Function (motohawk_sfun_calibration): '<S143>/motohawk_calibration2'
     *  Sum: '<S143>/Add1'
     */
    rtb_Sum_iy = (1.0 - rtb_Product1_e) * (AF_Gasoline_DataStore());

    /* Sum: '<S143>/Add' incorporates:
     *  Product: '<S143>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S143>/motohawk_calibration3'
     */
    BaseEngineController_A02_B.s143_Add = (AF_Ethanol_DataStore()) *
      rtb_Product1_e + rtb_Sum_iy;

    /* Product: '<S141>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_A02_B.s141_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_A02_B.s276_Saturation1 * rtb_DesiredLambda_idx /
      BaseEngineController_A02_B.s143_Add;

    /* Product: '<S138>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S138>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S138>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_A02_B.s138_PerCylinderMassFlowRate =
      BaseEngineController_A02_B.s141_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S138>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    BaseEngineController_A02_B.s138_ApplyMultipliersforO2KnockControlandEnrichment1
      = BaseEngineController_A02_B.s138_PerCylinderMassFlowRate *
      BaseEngineController_A02_B.s216_Multiplyby10ifnotyetenabled;

    /* Outputs for Atomic SubSystem: '<S128>/Injector Manager' */

    /* Outputs for Enabled SubSystem: '<S139>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S144>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S139>/motohawk_calibration1' incorporates:
     *  Constant: '<S146>/Constant'
     *  RelationalOperator: '<S146>/RelOp'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S144>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S144>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S144>/motohawk_prelookup1'
     */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!BaseEngineController_A02_DWork.s139_DeltaTPSTransientFueling_MODE) {
        /* S-Function Block: <S148>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s148_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S149>/Unit Delay' */
        BaseEngineController_A02_DWork.s149_UnitDelay_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s139_DeltaTPSTransientFueling_MODE = TRUE;
      }

      /* S-Function Block: <S148>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s148_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_hl = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S148>/Product' incorporates:
       *  MinMax: '<S148>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S148>/motohawk_calibration'
       */
      rtb_Product_hl /= (rtb_Product_hl >= (DeltaTPS_FiltConst_DataStore())) ||
        rtIsNaN((DeltaTPS_FiltConst_DataStore())) ? rtb_Product_hl :
        (DeltaTPS_FiltConst_DataStore());

      /* Sum: '<S149>/Sum1' incorporates:
       *  Constant: '<S149>/Constant'
       *  Product: '<S149>/Product'
       *  Product: '<S149>/Product1'
       *  Sum: '<S149>/Sum'
       *  UnitDelay: '<S149>/Unit Delay'
       */
      BaseEngineController_A02_B.s149_Sum1 = (1.0 - rtb_Product_hl) *
        BaseEngineController_A02_DWork.s149_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s323_Switch2 * rtb_Product_hl;

      /* Sum: '<S144>/Sum' */
      BaseEngineController_A02_B.s144_Sum =
        BaseEngineController_A02_B.s323_Switch2 -
        BaseEngineController_A02_B.s149_Sum1;

      /* S-Function Block: <S144>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) = BaseEngineController_A02_B.s276_Saturation1;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s276_Saturation1, (MAF09IdxArr_DataStore()),
           9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_h = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S144>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_A02_B.s144_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s144_Sum, (DeltaTPS17IdxArr_DataStore()),
           17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_fq = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S144>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_k = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_h, rtb_motohawk_prelookup1_fq, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_k;
      }

      /* Outputs for Enabled SubSystem: '<S144>/ECT Transient Fueling' incorporates:
       *  EnablePort: '<S147>/Enable'
       */
      if (rtb_motohawk_interpolation_2d2_k != 1.0) {
        if (!BaseEngineController_A02_DWork.s144_ECTTransientFueling_MODE) {
          BaseEngineController_A02_DWork.s144_ECTTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S147>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_A02_B.s147_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_A02_B.s309_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_A02_B.s147_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_A02_DWork.s144_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S147>/Mult' */
          BaseEngineController_A02_B.s147_motohawk_interpolation_1d = 1.0;
          BaseEngineController_A02_DWork.s144_ECTTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S144>/ECT Transient Fueling' */

      /* Product: '<S144>/Product1' incorporates:
       *  Constant: '<S146>/Constant'
       *  RelationalOperator: '<S146>/RelOp'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S144>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S144>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S144>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s144_Product1 =
        rtb_motohawk_interpolation_2d2_k *
        BaseEngineController_A02_B.s147_motohawk_interpolation_1d;

      /* Update for UnitDelay: '<S149>/Unit Delay' */
      BaseEngineController_A02_DWork.s149_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s149_Sum1;
    } else {
      if (BaseEngineController_A02_DWork.s139_DeltaTPSTransientFueling_MODE) {
        /* Disable for Enabled SubSystem: '<S144>/ECT Transient Fueling' */
        /* Disable for Outport: '<S147>/Mult' */
        BaseEngineController_A02_B.s147_motohawk_interpolation_1d = 1.0;
        BaseEngineController_A02_DWork.s144_ECTTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S144>/ECT Transient Fueling' */

        /* Disable for Outport: '<S144>/DeltaTPSMult' */
        BaseEngineController_A02_B.s144_Product1 = 1.0;
        BaseEngineController_A02_DWork.s139_DeltaTPSTransientFueling_MODE =
          FALSE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S139>/motohawk_calibration1' */
    /* End of Outputs for SubSystem: '<S139>/Delta TPS Transient Fueling' */

    /* Product: '<S139>/Divide' */
    rtb_Divide_l = BaseEngineController_A02_B.s144_Product1 *
      BaseEngineController_A02_B.s138_ApplyMultipliersforO2KnockControlandEnrichment1;

    /* S-Function Block: <S139>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s350_motohawk_prelookup1,
         BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* RelationalOperator: '<S151>/RelOp' incorporates:
     *  Constant: '<S151>/Constant'
     */
    rtb_RelOp_fa = (BaseEngineController_A02_B.s507_Sum1 != 0.0);

    /* Outputs for Enabled SubSystem: '<S145>/Multiply and Divide, avoiding divde by zero' */
    BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(rtb_RelOp_fa,
      rtb_Divide_l, 60000.0, BaseEngineController_A02_B.s507_Sum1, 1.0,
      &BaseEngineController_A02_B.s145_MultiplyandDivideavoidingdivdebyzero);

    /* End of Outputs for SubSystem: '<S145>/Multiply and Divide, avoiding divde by zero' */

    /* S-Function Block: <S139>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s350_motohawk_prelookup1,
         BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* End of Outputs for SubSystem: '<S128>/Injector Manager' */

    /* Outputs for Atomic SubSystem: '<S128>/O2 Fuel Adapt' */

    /* S-Function Block: <S140>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_f = TableInterpolation1D_real_T
        (rtb_ITermIdx, (real_T *) ((FuelAdaptGainTbl_DataStore())), 9);
      (FuelAdaptGain_DataStore()) = rtb_motohawk_interpolation_1d1_f;
    }

    /* Product: '<S140>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S140>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S131>/motohawk_prelookup13'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s225_Switch1 *
      rtb_motohawk_interpolation_1d1_f;

    /* MinMax: '<S158>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S155>/motohawk_calibration'
     */
    y = (rtb_Product1_e >= (FuelAdaptErrorLwrLim_DataStore())) || rtIsNaN
      ((FuelAdaptErrorLwrLim_DataStore())) ? rtb_Product1_e :
      (FuelAdaptErrorLwrLim_DataStore());

    /* MinMax: '<S158>/MinMax1' incorporates:
     *  MinMax: '<S158>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S155>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s158_MinMax1 = (y <=
      (FuelAdaptErrorUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptErrorUprLim_DataStore())) ? y : (FuelAdaptErrorUprLim_DataStore
      ());

    /* S-Function Block: <S140>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2 = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s350_motohawk_prelookup1,
         BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdaptMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_DataStore()) = rtb_motohawk_interpolation_2d2;
    }

    /* Outputs for Atomic SubSystem: '<S140>/WarmUp Disable' */
    /* Logic: '<S156>/Logical Operator' incorporates:
     *  Constant: '<S156>/Constant'
     *  RelationalOperator: '<S156>/Relational Operator'
     */
    BaseEngineController_A02_B.s156_LogicalOperator = !(rtb_DesiredLambda_idx_0 >
      1.01);

    /* End of Outputs for SubSystem: '<S140>/WarmUp Disable' */

    /* Outputs for Atomic SubSystem: '<S140>/O2 Control Enable Delay' */

    /* S-Function Block: <S157>/motohawk_delta_time */
    rtb_motohawk_delta_time_g = 0.005;

    /* Switch: '<S157>/Switch' incorporates:
     *  Constant: '<S157>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S157>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S157>/motohawk_delta_time'
     *  Sum: '<S157>/Sum'
     */
    if (BaseEngineController_A02_B.s214_LogicalOperator2) {
      rtb_Product1_e = rtb_motohawk_delta_time_g + LiqDelayTime_DataStore();
    } else {
      rtb_Product1_e = 0.0;
    }

    /* End of Switch: '<S157>/Switch' */
    /* RelationalOperator: '<S154>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_i = (rtb_Product1_e > (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S157>/Saturation' */
    rtb_Saturation_c = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
      0.0 ? 0.0 : rtb_Product1_e;

    /* S-Function (motohawk_sfun_data_write): '<S157>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_c;
    }

    /* End of Outputs for SubSystem: '<S140>/O2 Control Enable Delay' */

    /* Abs: '<S140>/Abs' */
    rtb_Product1_e = fabs(BaseEngineController_A02_B.s225_Switch1);

    /* Logic: '<S140>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S140>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration2'
     */
    BaseEngineController_A02_B.s140_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_A02_B.s156_LogicalOperator &&
        rtb_LogicalOperator6_i && (rtb_Product1_e <= (FuelAdaptDelta_DataStore()))));

    /* Outputs for Enabled SubSystem: '<S140>/Adapt FuelFlowComp Map' incorporates:
     *  EnablePort: '<S152>/Enable'
     */
    if (BaseEngineController_A02_B.s140_LogicalOperator2) {
      /* S-Function Block: <S152>/motohawk_adapt_table */
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
              BaseEngineController_A02_B.s158_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdaptMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdaptMap_DataStore())[_row][_col+1] +
              BaseEngineController_A02_B.s158_MinMax1;
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

      /* RelationalOperator: '<S152>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S152>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S140>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator2_c = ((rtb_motohawk_interpolation_2d2 >=
        (FuelFlowCompMaxValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S152>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(17, rtb_RelationalOperator2_c);
        UpdateFault(17);
      }

      /* RelationalOperator: '<S152>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S152>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S140>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator1_d = ((rtb_motohawk_interpolation_2d2 <=
        (FuelFlowCompMinValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S152>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(18, rtb_RelationalOperator1_d);
        UpdateFault(18);
      }
    }

    /* End of Outputs for SubSystem: '<S140>/Adapt FuelFlowComp Map' */

    /* S-Function Block: <S140>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_b = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s350_motohawk_prelookup1,
         BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_b;
    }

    /* Product: '<S140>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S140>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S140>/motohawk_interpolation_2d2'
     */
    rtb_Product1_e = rtb_motohawk_interpolation_2d1_b *
      rtb_motohawk_interpolation_2d2;

    /* End of Outputs for SubSystem: '<S128>/O2 Fuel Adapt' */

    /* End of Outputs for SubSystem: '<S115>/Fuel System Manager' */

    /* ZeroOrderHold: '<S115>/Zero-Order Hold1' */
    BaseEngineController_A02_B.s114_SparkEnergy =
      BaseEngineController_A02_B.s132_motohawk_interpolation_2d1;

    /* ZeroOrderHold: '<S115>/Zero-Order Hold12' */
    BaseEngineController_A02_B.s114_SparkAdv =
      BaseEngineController_A02_B.s233_Switch;

    /* ZeroOrderHold: '<S115>/Zero-Order Hold16' incorporates:
     *  Constant: '<S115>/ON1'
     */
    BaseEngineController_A02_B.s114_FUELP = TRUE;

    /* ZeroOrderHold: '<S115>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S139>/Primary Pulse Injection Timing'
     */
    BaseEngineController_A02_B.s114_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S115>/Zero-Order Hold18' */
    BaseEngineController_A02_B.s114_Throttle =
      BaseEngineController_A02_B.s125_MultiportSwitch;

    /* ZeroOrderHold: '<S115>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S139>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_A02_B.s114_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S115>/Zero-Order Hold4' */
    BaseEngineController_A02_B.s114_FuelMult = rtb_Product1_e;

    /* ZeroOrderHold: '<S115>/Zero-Order Hold5' incorporates:
     *  Constant: '<S115>/OILP'
     */
    BaseEngineController_A02_B.s114_OILP = TRUE;

    /* ZeroOrderHold: '<S115>/Zero-Order Hold6' incorporates:
     *  Constant: '<S115>/OILP1'
     */
    BaseEngineController_A02_B.s114_O2Heater = TRUE;

    /* S-Function (motohawk_sfun_replicate): '<S115>/motohawk_replicate1' */

    /* S-Function Block: <S115>/motohawk_replicate1 */
    {
      int_T i1;
      real_T *y0 = BaseEngineController_A02_B.s114_FPC;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] =
          BaseEngineController_A02_B.s145_MultiplyandDivideavoidingdivdebyzero.s150_chargemass;
      }
    }
  } else {
    if (BaseEngineController_A02_DWork.s7_Run_MODE) {
      /* Level2 S-Function Block: '<S115>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_3881p0004 */
      BaseEngineController_A02_DWork.s115_motohawk_trigger1_DWORK1 = 0;

      /* Disable for Atomic SubSystem: '<S115>/Fuel System Manager' */
      /* Disable for Atomic SubSystem: '<S128>/Injector Manager' */
      /* Disable for Enabled SubSystem: '<S139>/Delta TPS Transient Fueling' */
      /* Disable for Enabled SubSystem: '<S144>/ECT Transient Fueling' */
      /* Disable for Outport: '<S147>/Mult' */
      BaseEngineController_A02_B.s147_motohawk_interpolation_1d = 1.0;
      BaseEngineController_A02_DWork.s144_ECTTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S144>/ECT Transient Fueling' */

      /* Disable for Outport: '<S144>/DeltaTPSMult' */
      BaseEngineController_A02_B.s144_Product1 = 1.0;
      BaseEngineController_A02_DWork.s139_DeltaTPSTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S139>/Delta TPS Transient Fueling' */
      /* End of Disable for SubSystem: '<S128>/Injector Manager' */
      /* End of Disable for SubSystem: '<S115>/Fuel System Manager' */
      BaseEngineController_A02_DWork.s7_Run_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S7>/Run' */

  /* S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1269p0004 */
  if (BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1268p0004 */
  if (BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_fault_action): '<S14>/motohawk_fault_action1'
   *
   * Regarding '<S14>/motohawk_fault_action1':
     Get Fault Action Status: SoftRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_m = GetFaultActionStatus(6);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S14>/motohawk_fault_action2'
   *
   * Regarding '<S14>/motohawk_fault_action2':
     Get Fault Action Status: MediumRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action2 = GetFaultActionStatus(5);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S14>/motohawk_fault_action3'
   *
   * Regarding '<S14>/motohawk_fault_action3':
     Get Fault Action Status: HardRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action3 = GetFaultActionStatus(4);
  }

  /* Logic: '<S14>/Logical Operator4' */
  rtb_LogicalOperator6_i = (rtb_motohawk_fault_action1_m ||
    rtb_motohawk_fault_action2 || rtb_motohawk_fault_action3);

  /* Outputs for Enabled SubSystem: '<S14>/PassThrough1' incorporates:
   *  EnablePort: '<S88>/Enable'
   */
  if (rtb_motohawk_fault_action1_m) {
    if (!BaseEngineController_A02_DWork.s14_PassThrough1_MODE) {
      BaseEngineController_A02_DWork.s14_PassThrough1_MODE = TRUE;
    }

    /* Inport: '<S88>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration9'
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
     */
    BaseEngineController_A02_B.s14_Merge1[0] = ((int8_T)
      (SoftCycle1Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[1] = ((int8_T)
      (SoftCycle1Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[2] = ((int8_T)
      (SoftCycle1Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[3] = ((int8_T)
      (SoftCycle1Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[4] = ((int8_T)
      (SoftCycle1Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[5] = ((int8_T)
      (SoftCycle1Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[6] = ((int8_T)
      (SoftCycle1Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[7] = ((int8_T)
      (SoftCycle1Cyl8_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[8] = ((int8_T)
      (SoftCycle2Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[9] = ((int8_T)
      (SoftCycle2Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[10] = ((int8_T)
      (SoftCycle2Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[11] = ((int8_T)
      (SoftCycle2Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[12] = ((int8_T)
      (SoftCycle2Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[13] = ((int8_T)
      (SoftCycle2Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[14] = ((int8_T)
      (SoftCycle2Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[15] = ((int8_T)
      (SoftCycle2Cyl8_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[16] = ((int8_T)
      (SoftCycle3Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[17] = ((int8_T)
      (SoftCycle3Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[18] = ((int8_T)
      (SoftCycle3Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[19] = ((int8_T)
      (SoftCycle3Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[20] = ((int8_T)
      (SoftCycle3Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[21] = ((int8_T)
      (SoftCycle3Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[22] = ((int8_T)
      (SoftCycle3Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[23] = ((int8_T)
      (SoftCycle3Cyl8_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[24] = ((int8_T)
      (SoftCycle4Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[25] = ((int8_T)
      (SoftCycle4Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[26] = ((int8_T)
      (SoftCycle4Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[27] = ((int8_T)
      (SoftCycle4Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[28] = ((int8_T)
      (SoftCycle4Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[29] = ((int8_T)
      (SoftCycle4Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[30] = ((int8_T)
      (SoftCycle4Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[31] = ((int8_T)
      (SoftCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_A02_DWork.s14_PassThrough1_MODE) {
      /* Disable for Outport: '<S88>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_A02_B.s14_Merge1[i] = 0;
      }

      /* End of Outport: '<S88>/Out1' */
      BaseEngineController_A02_DWork.s14_PassThrough1_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S14>/PassThrough1' */
  /* Outputs for Enabled SubSystem: '<S14>/PassThrough2' incorporates:
   *  EnablePort: '<S89>/Enable'
   */
  if (rtb_motohawk_fault_action2) {
    /* Inport: '<S89>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration9'
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
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration9'
     */
    BaseEngineController_A02_B.s14_Merge1[0] = ((int8_T)
      (MediumCycle1Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[1] = ((int8_T)
      (MediumCycle1Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[2] = ((int8_T)
      (MediumCycle1Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[3] = ((int8_T)
      (MediumCycle1Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[4] = ((int8_T)
      (MediumCycle1Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[5] = ((int8_T)
      (MediumCycle1Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[6] = ((int8_T)
      (MediumCycle1Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[7] = ((int8_T)
      (MediumCycle1Cyl8_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[8] = ((int8_T)
      (MediumCycle2Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[9] = ((int8_T)
      (MediumCycle2Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[10] = ((int8_T)
      (MediumCycle2Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[11] = ((int8_T)
      (MediumCycle2Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[12] = ((int8_T)
      (MediumCycle2Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[13] = ((int8_T)
      (MediumCycle2Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[14] = ((int8_T)
      (MediumCycle2Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[15] = ((int8_T)
      (MediumCycle2Cyl8_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[16] = ((int8_T)
      (MediumCycle3Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[17] = ((int8_T)
      (MediumCycle3Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[18] = ((int8_T)
      (MediumCycle3Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[19] = ((int8_T)
      (MediumCycle3Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[20] = ((int8_T)
      (MediumCycle3Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[21] = ((int8_T)
      (MediumCycle3Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[22] = ((int8_T)
      (MediumCycle3Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[23] = ((int8_T)
      (MediumCycle3Cyl8_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[24] = ((int8_T)
      (MediumCycle4Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[25] = ((int8_T)
      (MediumCycle4Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[26] = ((int8_T)
      (MediumCycle4Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[27] = ((int8_T)
      (MediumCycle4Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[28] = ((int8_T)
      (MediumCycle4Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[29] = ((int8_T)
      (MediumCycle4Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[30] = ((int8_T)
      (MediumCycle4Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[31] = ((int8_T)
      (MediumCycle4Cyl8_DataStore()));
  }

  /* End of Outputs for SubSystem: '<S14>/PassThrough2' */
  /* Outputs for Enabled SubSystem: '<S14>/PassThrough3' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  if (rtb_motohawk_fault_action3) {
    if (!BaseEngineController_A02_DWork.s14_PassThrough3_MODE) {
      BaseEngineController_A02_DWork.s14_PassThrough3_MODE = TRUE;
    }

    /* Inport: '<S90>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration9'
     */
    BaseEngineController_A02_B.s14_Merge1[0] = ((int8_T)
      (HardCycle1Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[1] = ((int8_T)
      (HardCycle1Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[2] = ((int8_T)
      (HardCycle1Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[3] = ((int8_T)
      (HardCycle1Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[4] = ((int8_T)
      (HardCycle1Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[5] = ((int8_T)
      (HardCycle1Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[6] = ((int8_T)
      (HardCycle1Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[7] = ((int8_T)
      (HardCycle1Cyl8_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[8] = ((int8_T)
      (HardCycle2Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[9] = ((int8_T)
      (HardCycle2Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[10] = ((int8_T)
      (HardCycle2Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[11] = ((int8_T)
      (HardCycle2Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[12] = ((int8_T)
      (HardCycle2Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[13] = ((int8_T)
      (HardCycle2Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[14] = ((int8_T)
      (HardCycle2Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[15] = ((int8_T)
      (HardCycle2Cyl8_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[16] = ((int8_T)
      (HardCycle3Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[17] = ((int8_T)
      (HardCycle3Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[18] = ((int8_T)
      (HardCycle3Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[19] = ((int8_T)
      (HardCycle3Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[20] = ((int8_T)
      (HardCycle3Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[21] = ((int8_T)
      (HardCycle3Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[22] = ((int8_T)
      (HardCycle3Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[23] = ((int8_T)
      (HardCycle3Cyl8_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[24] = ((int8_T)
      (HardCycle4Cyl1_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[25] = ((int8_T)
      (HardCycle4Cyl2_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[26] = ((int8_T)
      (HardCycle4Cyl3_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[27] = ((int8_T)
      (HardCycle4Cyl4_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[28] = ((int8_T)
      (HardCycle4Cyl5_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[29] = ((int8_T)
      (HardCycle4Cyl6_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[30] = ((int8_T)
      (HardCycle4Cyl7_DataStore()));
    BaseEngineController_A02_B.s14_Merge1[31] = ((int8_T)
      (HardCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_A02_DWork.s14_PassThrough3_MODE) {
      /* Disable for Outport: '<S90>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_A02_B.s14_Merge1[i] = 0;
      }

      /* End of Outport: '<S90>/Out1' */
      BaseEngineController_A02_DWork.s14_PassThrough3_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S14>/PassThrough3' */

  /* Outputs for Enabled SubSystem: '<S14>/SequenceCutMachine' incorporates:
   *  EnablePort: '<S93>/Enable'
   */
  if (rtb_LogicalOperator6_i) {
    if (!BaseEngineController_A02_DWork.s14_SequenceCutMachine_MODE) {
      /* InitializeConditions for UnitDelay: '<S93>/Unit Delay2' */
      BaseEngineController_A02_DWork.s93_UnitDelay2_DSTATE = 1.0;

      /* InitializeConditions for UnitDelay: '<S93>/Unit Delay1' */
      BaseEngineController_A02_DWork.s93_UnitDelay1_DSTATE = 1U;

      /* Level2 S-Function Block: '<S93>/motohawk_trigger' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_TDC1_EVENT_1016p0001 */
      BaseEngineController_A02_DWork.s93_motohawk_trigger_DWORK1 = 1;
      BaseEngineController_A02_DWork.s14_SequenceCutMachine_MODE = TRUE;
    }

    /* UnitDelay: '<S93>/Unit Delay2' */
    BaseEngineController_A02_B.s93_UnitDelay2 =
      BaseEngineController_A02_DWork.s93_UnitDelay2_DSTATE;

    /* MultiPortSwitch: '<S93>/Multiport Switch' */
    switch ((int32_T)BaseEngineController_A02_B.s93_UnitDelay2) {
     case 1:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s93_MultiportSwitch[i] =
          BaseEngineController_A02_B.s14_Merge1[i];
      }
      break;

     case 2:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s93_MultiportSwitch[i] =
          BaseEngineController_A02_B.s14_Merge1[i + 8];
      }
      break;

     case 3:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s93_MultiportSwitch[i] =
          BaseEngineController_A02_B.s14_Merge1[i + 16];
      }
      break;

     default:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s93_MultiportSwitch[i] =
          BaseEngineController_A02_B.s14_Merge1[i + 24];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S93>/Multiport Switch' */

    /* UnitDelay: '<S93>/Unit Delay1' */
    BaseEngineController_A02_B.s93_UnitDelay1 =
      BaseEngineController_A02_DWork.s93_UnitDelay1_DSTATE;

    /* S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger' */
    /* Enable for Trigger_FGND_TDC1_EVENT_1016p0001 */
    if (BaseEngineController_A02_DWork.s93_motohawk_trigger_DWORK1 == 0) {
      BaseEngineController_A02_DWork.s93_motohawk_trigger_DWORK1 = 1;
    }

    /* Update for UnitDelay: '<S93>/Unit Delay2' */
    BaseEngineController_A02_DWork.s93_UnitDelay2_DSTATE =
      BaseEngineController_A02_B.s103_Switch1;

    /* Update for UnitDelay: '<S93>/Unit Delay1' */
    BaseEngineController_A02_DWork.s93_UnitDelay1_DSTATE =
      BaseEngineController_A02_B.s103_Switch;
  } else {
    if (BaseEngineController_A02_DWork.s14_SequenceCutMachine_MODE) {
      /* Level2 S-Function Block: '<S93>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_TDC1_EVENT_1016p0001 */
      BaseEngineController_A02_DWork.s93_motohawk_trigger_DWORK1 = 0;

      /* Disable for Outport: '<S93>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s103_CutArray[i] = 0;
      }

      /* End of Outport: '<S93>/Out1' */
      BaseEngineController_A02_DWork.s14_SequenceCutMachine_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S14>/SequenceCutMachine' */
  /* Outputs for Enabled SubSystem: '<S14>/PassThrough4' incorporates:
   *  EnablePort: '<S91>/Enable'
   */
  /* Logic: '<S14>/Logical Operator' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  RelationalOperator: '<S14>/Relational Operator'
   *  RelationalOperator: '<S14>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 0) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!BaseEngineController_A02_DWork.s14_PassThrough4_MODE) {
      BaseEngineController_A02_DWork.s14_PassThrough4_MODE = TRUE;
    }

    /* DataTypeConversion: '<S91>/Data Type Conversion' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s91_DataTypeConversion[i] =
        ((BaseEngineController_A02_B.s103_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S91>/Data Type Conversion' */
  } else {
    if (BaseEngineController_A02_DWork.s14_PassThrough4_MODE) {
      /* Disable for Outport: '<S91>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s91_DataTypeConversion[i] = FALSE;
      }

      /* End of Outport: '<S91>/Out1' */
      BaseEngineController_A02_DWork.s14_PassThrough4_MODE = FALSE;
    }
  }

  /* End of Logic: '<S14>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S14>/PassThrough4' */

  /* Logic: '<S14>/Logical Operator2' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s14_LogicalOperator2[i] =
      !BaseEngineController_A02_B.s91_DataTypeConversion[i];
  }

  /* End of Logic: '<S14>/Logical Operator2' */

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7562p0001 */
  if (BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S5>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S733>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S738>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_7097p0004 */
    BaseEngineController_A02_DWork.s738_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S733>/EST Enable TDC Counter' */
    BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* Switch: '<S124>/Switch' incorporates:
   *  Constant: '<S124>/OFF'
   *  Logic: '<S124>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S124>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S124>/motohawk_data_read1'
   */
  if (DelayedEngineShutdownAction_DataStore() || EngineShutdownAction_DataStore())
  {
    rtb_RelationalOperator6_k = FALSE;
  } else {
    rtb_RelationalOperator6_k = BaseEngineController_A02_B.s114_FUELP;
  }

  /* End of Switch: '<S124>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S354>/motohawk_data_read' */
  BaseEngineController_A02_B.s354_EStop = ESTOP_DataStore();

  /* If: '<S487>/If' incorporates:
   *  Inport: '<S497>/In1'
   *  Inport: '<S498>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S487>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S487>/override_enable'
   */
  if ((ESTOP_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S487>/NewValue' incorporates:
     *  ActionPort: '<S497>/Action Port'
     */
    rtb_Merge_gl = (ESTOP_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S487>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S487>/OldValue' incorporates:
     *  ActionPort: '<S498>/Action Port'
     */
    rtb_Merge_gl = BaseEngineController_A02_B.s354_EStop;

    /* End of Outputs for SubSystem: '<S487>/OldValue' */
  }

  /* End of If: '<S487>/If' */

  /* Logic: '<S5>/Logical Operator5' incorporates:
   *  Logic: '<S5>/Logical Operator4'
   */
  rtb_LogicalOperator6_i = (rtb_RelationalOperator6_k && (!rtb_Merge_gl));

  /* If: '<S750>/If' incorporates:
   *  Inport: '<S751>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S750>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S750>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S750>/NewValue' incorporates:
     *  ActionPort: '<S751>/Action Port'
     */
    rtb_LogicalOperator6_i = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S750>/NewValue' */
  } else {
  }

  /* End of If: '<S750>/If' */

  /* Logic: '<S749>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S749>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s749_LogicalOperator = rtb_LogicalOperator6_i ^
    (FUELP_Polarity_DataStore());

  /* S-Function Block: <S753>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s753_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S345>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s345_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_n = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S344>/RelOp' incorporates:
   *  Constant: '<S344>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S326>/motohawk_data_read'
   */
  rtb_LogicalOperator6_i = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S326>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_f, NULL);
  }

  /* Switch: '<S345>/Switch' incorporates:
   *  Constant: '<S326>/Constant1'
   *  Constant: '<S345>/Constant'
   *  Logic: '<S326>/Logical Operator'
   *  RelationalOperator: '<S326>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S326>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S345>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S345>/motohawk_delta_time'
   *  Sum: '<S345>/Sum'
   */
  if (rtb_LogicalOperator6_i && (rtb_motohawk_ain_read_f > 150)) {
    BaseEngineController_A02_B.s345_Switch = rtb_motohawk_delta_time_n +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_A02_B.s345_Switch = 0.0;
  }

  /* End of Switch: '<S345>/Switch' */
  /* Logic: '<S664>/Logical Operator1' incorporates:
   *  Logic: '<S5>/Logical Operator9'
   *  RelationalOperator: '<S5>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S5>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration5'
   */
  rtb_RelationalOperator6_k = ((ETC_CutPower_Permitted_DataStore()) &&
    (rtb_Merge_gl || (BaseEngineController_A02_B.s345_Switch >
                      (ETC_CutPower_StallTime_DataStore()))));

  /* Logic: '<S664>/Logical Operator' */
  rtb_LogicalOperator10 = !rtb_RelationalOperator6_k;

  /* Outputs for Enabled SubSystem: '<S6>/Electronic Throttle Controller' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  /* RelationalOperator: '<S11>/RelOp' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S23>/Constant2'
   *  Constant: '<S46>/Constant'
   *  Inport: '<S45>/In1'
   *  RelationalOperator: '<S46>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S23>/motohawk_data_read3'
   *  S-Function (motohawk_sfun_data_read): '<S6>/motohawk_data_read'
   *  Sum: '<S23>/Add2'
   */
  if (!AirControlSource_DataStore()) {
    if (!BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE) {
      BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE = TRUE;
    }

    /* RelationalOperator: '<S55>/RelOp' incorporates:
     *  Constant: '<S55>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S24>/motohawk_data_read3'
     */
    rtb_LogicalOperator6_i = (((uint8_T)EngineState_DataStore()) == 1);

    /* Logic: '<S24>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S24>/motohawk_data_read2'
     */
    rtb_LogicalOperator1_a = !ShutDownTasksComplete_DataStore();

    /* S-Function Block: <S24>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_i, NULL);
    }

    /* RelationalOperator: '<S24>/Relational Operator' incorporates:
     *  Constant: '<S24>/Constant1'
     *  S-Function (motohawk_sfun_ain_read): '<S24>/motohawk_ain_read'
     */
    rtb_AboveHiTarget = (rtb_motohawk_ain_read_i < 150);

    /* Logic: '<S24>/Logical Operator3' */
    BaseEngineController_A02_B.s24_LogicalOperator3 = ((rtb_LogicalOperator6_i &&
      rtb_LogicalOperator1_a && rtb_AboveHiTarget));

    /* S-Function Block: <S56>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s56_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_n0 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S56>/Switch' incorporates:
     *  Constant: '<S56>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S56>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S56>/motohawk_delta_time'
     *  Sum: '<S56>/Sum'
     */
    if (rtb_AboveHiTarget) {
      BaseEngineController_A02_B.s56_Switch = rtb_motohawk_delta_time_n0 +
        ETCShutDownTimer_DataStore();
    } else {
      BaseEngineController_A02_B.s56_Switch = 0.0;
    }

    /* End of Switch: '<S56>/Switch' */

    /* UnitDelay: '<S12>/Unit Delay' */
    rtb_Product1_e = BaseEngineController_A02_DWork.s12_UnitDelay_DSTATE;

    /* RelationalOperator: '<S12>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration4'
     */
    BaseEngineController_A02_B.s12_RelationalOperator5 = ((rtb_Product1_e <
      (ETC_ShutdownLoAdaptError_DataStore())));

    /* RelationalOperator: '<S12>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration5'
     */
    BaseEngineController_A02_B.s12_RelationalOperator2 =
      ((BaseEngineController_A02_B.s323_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S12>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration6'
     */
    BaseEngineController_A02_B.s12_RelationalOperator3 =
      ((BaseEngineController_A02_B.s323_Switch2 <
        (ETC_SpringTestLoThresh_DataStore())));

    /* Stateflow: '<S12>/ETC Test  Manager' */

    /* Gateway: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    /* During: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    switch (BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02) {
     case BaseEngineController_A02_IN_ForcedShutdown:
      /* During 'ForcedShutdown': '<S19>:6' */
      if (!BaseEngineController_A02_B.s24_LogicalOperator3) {
        /* Transition: '<S19>:19' */
        BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S19>:5' */
        BaseEngineController_A02_B.s19_DC_Override = 1;
        BaseEngineController_A02_B.s19_TestComplete = TRUE;
        BaseEngineController_A02_B.s19_SetpointMode = 0;
        BaseEngineController_A02_B.s19_TestTime =
          BaseEngineController_A02_B.s56_Switch -
          BaseEngineController_A02_DWork.s19_TimerOld;
      }
      break;

     case BaseEngineController_A02_IN_LowAdapt:
      /* During 'LowAdapt': '<S19>:2' */
      if (BaseEngineController_A02_B.s56_Switch > 5.0) {
        /* Transition: '<S19>:17' */
        BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S19>:6' */
        BaseEngineController_A02_B.s19_DC_Override = 1;
        BaseEngineController_A02_B.s19_TestComplete = TRUE;
        BaseEngineController_A02_B.s19_SetpointMode = 0;
        BaseEngineController_A02_B.s19_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s24_LogicalOperator3 &&
                 BaseEngineController_A02_B.s12_RelationalOperator5) {
        /* Transition: '<S19>:9' */
        BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestSetpoint;

        /* Entry 'SpringTestSetpoint': '<S19>:3' */
        BaseEngineController_A02_B.s19_DC_Override = 0;
        BaseEngineController_A02_B.s19_TestComplete = FALSE;
        BaseEngineController_A02_B.s19_SetpointMode = 2;
        BaseEngineController_A02_B.s19_TestTime = 0.0;
      } else {
        if (!BaseEngineController_A02_B.s24_LogicalOperator3) {
          /* Transition: '<S19>:12' */
          BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PassThrough;

          /* Entry 'PassThrough': '<S19>:1' */
          BaseEngineController_A02_B.s19_DC_Override = 0;
          BaseEngineController_A02_B.s19_TestComplete = FALSE;
          BaseEngineController_A02_B.s19_SetpointMode = 0;
          BaseEngineController_A02_B.s19_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_A02_IN_PassThrough:
      /* During 'PassThrough': '<S19>:1' */
      if (BaseEngineController_A02_B.s24_LogicalOperator3) {
        /* Transition: '<S19>:8' */
        BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_LowAdapt;

        /* Entry 'LowAdapt': '<S19>:2' */
        BaseEngineController_A02_B.s19_DC_Override = 0;
        BaseEngineController_A02_B.s19_TestComplete = FALSE;
        BaseEngineController_A02_B.s19_SetpointMode = 1;
        BaseEngineController_A02_B.s19_TestTime = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_SpringTest:
      /* During 'SpringTest': '<S19>:4' */
      if (BaseEngineController_A02_B.s56_Switch > 5.0) {
        /* Transition: '<S19>:16' */
        BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S19>:6' */
        BaseEngineController_A02_B.s19_DC_Override = 1;
        BaseEngineController_A02_B.s19_TestComplete = TRUE;
        BaseEngineController_A02_B.s19_SetpointMode = 0;
        BaseEngineController_A02_B.s19_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s24_LogicalOperator3 &&
                 BaseEngineController_A02_B.s12_RelationalOperator3) {
        /* Transition: '<S19>:11' */
        BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S19>:5' */
        BaseEngineController_A02_B.s19_DC_Override = 1;
        BaseEngineController_A02_B.s19_TestComplete = TRUE;
        BaseEngineController_A02_B.s19_SetpointMode = 0;
        BaseEngineController_A02_B.s19_TestTime =
          BaseEngineController_A02_B.s56_Switch -
          BaseEngineController_A02_DWork.s19_TimerOld;
      } else {
        if (!BaseEngineController_A02_B.s24_LogicalOperator3) {
          /* Transition: '<S19>:15' */
          BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PassThrough;

          /* Entry 'PassThrough': '<S19>:1' */
          BaseEngineController_A02_B.s19_DC_Override = 0;
          BaseEngineController_A02_B.s19_TestComplete = FALSE;
          BaseEngineController_A02_B.s19_SetpointMode = 0;
          BaseEngineController_A02_B.s19_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_A02_IN_SpringTestComplete:
      /* During 'SpringTestComplete': '<S19>:5' */
      if (!BaseEngineController_A02_B.s24_LogicalOperator3) {
        /* Transition: '<S19>:14' */
        BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PassThrough;

        /* Entry 'PassThrough': '<S19>:1' */
        BaseEngineController_A02_B.s19_DC_Override = 0;
        BaseEngineController_A02_B.s19_TestComplete = FALSE;
        BaseEngineController_A02_B.s19_SetpointMode = 0;
        BaseEngineController_A02_B.s19_TestTime = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_SpringTestSetpoint:
      /* During 'SpringTestSetpoint': '<S19>:3' */
      if (!BaseEngineController_A02_B.s24_LogicalOperator3) {
        /* Transition: '<S19>:13' */
        BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PassThrough;

        /* Entry 'PassThrough': '<S19>:1' */
        BaseEngineController_A02_B.s19_DC_Override = 0;
        BaseEngineController_A02_B.s19_TestComplete = FALSE;
        BaseEngineController_A02_B.s19_SetpointMode = 0;
        BaseEngineController_A02_B.s19_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s24_LogicalOperator3 &&
                 BaseEngineController_A02_B.s12_RelationalOperator2) {
        /* Transition: '<S19>:10' */
        BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTest;

        /* Entry 'SpringTest': '<S19>:4' */
        BaseEngineController_A02_B.s19_DC_Override = 1;
        BaseEngineController_A02_B.s19_TestComplete = FALSE;
        BaseEngineController_A02_B.s19_SetpointMode = 0;
        BaseEngineController_A02_B.s19_TestTime = 0.0;
        BaseEngineController_A02_DWork.s19_TimerOld =
          BaseEngineController_A02_B.s56_Switch;
      } else {
        if (BaseEngineController_A02_B.s56_Switch > 5.0) {
          /* Transition: '<S19>:18' */
          BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_ForcedShutdown;

          /* Entry 'ForcedShutdown': '<S19>:6' */
          BaseEngineController_A02_B.s19_DC_Override = 1;
          BaseEngineController_A02_B.s19_TestComplete = TRUE;
          BaseEngineController_A02_B.s19_SetpointMode = 0;
          BaseEngineController_A02_B.s19_TestTime = 0.0;
        }
      }
      break;

     default:
      /* Transition: '<S19>:7' */
      BaseEngineController_A02_DWork.s19_is_c9_BaseEngineController_A02 =
        BaseEngineController_A02_IN_PassThrough;

      /* Entry 'PassThrough': '<S19>:1' */
      BaseEngineController_A02_B.s19_DC_Override = 0;
      BaseEngineController_A02_B.s19_TestComplete = FALSE;
      BaseEngineController_A02_B.s19_SetpointMode = 0;
      BaseEngineController_A02_B.s19_TestTime = 0.0;
      break;
    }

    /* End of Stateflow: '<S12>/ETC Test  Manager' */

    /* RelationalOperator: '<S25>/RelOp' incorporates:
     *  Constant: '<S25>/Constant'
     */
    rtb_LogicalOperator6_i = (BaseEngineController_A02_B.s19_SetpointMode == 1);

    /* S-Function Block: <S49>/motohawk_delta_time */
    rtb_motohawk_delta_time_jj = 0.005;

    /* Switch: '<S49>/Switch' incorporates:
     *  Constant: '<S49>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S49>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S49>/motohawk_delta_time'
     *  Sum: '<S49>/Sum'
     */
    if ((ETCTuneEnable_DataStore())) {
      rtb_DesiredLambda_idx = rtb_motohawk_delta_time_jj +
        ETC_Tune_Timer_DataStore();
    } else {
      rtb_DesiredLambda_idx = 0.0;
    }

    /* End of Switch: '<S49>/Switch' */
    /* If: '<S50>/If' incorporates:
     *  Inport: '<S51>/In1'
     *  Inport: '<S52>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S50>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S50>/override_enable'
     */
    if ((ETCReq_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S50>/NewValue' incorporates:
       *  ActionPort: '<S51>/Action Port'
       */
      rtb_Sum_iy = (ETCReq_new_DataStore());

      /* End of Outputs for SubSystem: '<S50>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S50>/OldValue' incorporates:
       *  ActionPort: '<S52>/Action Port'
       */
      rtb_Sum_iy = BaseEngineController_A02_B.s114_Throttle;

      /* End of Outputs for SubSystem: '<S50>/OldValue' */
    }

    /* End of If: '<S50>/If' */

    /* S-Function Block: <S48>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s48_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_kb = ((real_T) delta) * 0.000001;
    }

    /* Outputs for Enabled SubSystem: '<S23>/PassThrough' incorporates:
     *  EnablePort: '<S45>/Enable'
     */
    if (BaseEngineController_A02_B.s19_SetpointMode == 1) {
      if (!BaseEngineController_A02_DWork.s23_PassThrough_MODE) {
        BaseEngineController_A02_DWork.s23_PassThrough_MODE = TRUE;
      }

      BaseEngineController_A02_B.s45_In1 = -5.0 +
        ETC_ShutdownLoAdaptError_DataStore();
    } else {
      if (BaseEngineController_A02_DWork.s23_PassThrough_MODE) {
        /* Disable for Outport: '<S45>/Out1' */
        BaseEngineController_A02_B.s45_In1 = 10.0;
        BaseEngineController_A02_DWork.s23_PassThrough_MODE = FALSE;
      }
    }

    /* End of Outputs for SubSystem: '<S23>/PassThrough' */

    /* UnitDelay: '<S48>/Unit Delay' incorporates:
     *  Constant: '<S23>/Constant2'
     *  Constant: '<S46>/Constant'
     *  Inport: '<S45>/In1'
     *  RelationalOperator: '<S46>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S23>/motohawk_data_read3'
     *  Sum: '<S23>/Add2'
     */
    rtb_Product1_e = BaseEngineController_A02_DWork.s48_UnitDelay_DSTATE;

    /* Product: '<S48>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S48>/motohawk_delta_time'
     *  Sum: '<S48>/Sum3'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    rtb_Product5_d = 1.0 / rtb_motohawk_delta_time_kb *
      (BaseEngineController_A02_B.s45_In1 -
       BaseEngineController_A02_DWork.s48_UnitDelay_DSTATE);

    /* MinMax: '<S53>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S23>/motohawk_calibration2'
     */
    rtb_Product5_d = (rtb_Product5_d >= (ETC_LoAdaptRateLimit_DataStore())) ||
      rtIsNaN((ETC_LoAdaptRateLimit_DataStore())) ? rtb_Product5_d :
      (ETC_LoAdaptRateLimit_DataStore());

    /* Sum: '<S48>/Sum2' incorporates:
     *  Constant: '<S23>/Constant7'
     *  MinMax: '<S53>/MinMax1'
     *  Product: '<S48>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S48>/motohawk_delta_time'
     */
    rtb_Sum2_d0 = (rtb_Product5_d <= 100.0 ? rtb_Product5_d : 100.0) *
      rtb_motohawk_delta_time_kb + rtb_Product1_e;

    /* MultiPortSwitch: '<S23>/Multiport Switch' incorporates:
     *  Constant: '<S23>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S23>/motohawk_data_read1'
     *  Sum: '<S23>/Add1'
     */
    switch (BaseEngineController_A02_B.s19_SetpointMode) {
     case 0:
      /* Switch: '<S47>/Switch' incorporates:
       *  Fcn: '<S47>/Sine Wave'
       *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration4'
       *  Sum: '<S47>/Sum'
       */
      if ((ETCTuneEnable_DataStore())) {
        BaseEngineController_A02_B.s23_MultiportSwitch = (sin(6.2831853071795862
          * (ETCTuneFreq_DataStore()) * rtb_DesiredLambda_idx) *
          (ETCTuneAmp_DataStore()) + (ETCTuneAmp_DataStore())) +
          (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_A02_B.s23_MultiportSwitch = rtb_Sum_iy;
      }

      /* End of Switch: '<S47>/Switch' */
      break;

     case 1:
      BaseEngineController_A02_B.s23_MultiportSwitch = rtb_Sum2_d0;
      break;

     default:
      BaseEngineController_A02_B.s23_MultiportSwitch = 10.0 +
        ETC_SpringTestHiThresh_DataStore();
      break;
    }

    /* End of MultiPortSwitch: '<S23>/Multiport Switch' */

    /* Sum: '<S23>/Add' */
    rtb_Sum1_gje = BaseEngineController_A02_B.s23_MultiportSwitch -
      BaseEngineController_A02_B.s323_Switch2;

    /* Logic: '<S17>/Logical Operator' incorporates:
     *  Constant: '<S17>/Constant1'
     *  RelationalOperator: '<S17>/Relational Operator4'
     *  S-Function (motohawk_sfun_data_read): '<S17>/motohawk_data_read1'
     *  Sum: '<S17>/Add1'
     */
    rtb_LogicalOperator_kg = ((rtb_LogicalOperator6_i && (rtb_Sum1_gje <= 5.0 +
      ETC_ShutdownLoAdaptError_DataStore())));

    /* S-Function (motohawk_sfun_data_write): '<S17>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: TPSAdaptLoRequest */
    {
      TPSAdaptLoRequest_DataStore() = rtb_LogicalOperator_kg;
    }

    /* Abs: '<S18>/Abs' */
    rtb_Product5_d = fabs(rtb_Sum1_gje);

    /* Logic: '<S18>/Logical Operator' incorporates:
     *  Constant: '<S26>/Constant'
     *  RelationalOperator: '<S18>/Relational Operator4'
     *  RelationalOperator: '<S26>/RelOp'
     *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration1'
     */
    rtb_LogicalOperator_d = (((rtb_Product5_d > (ETC_StickingThresh_DataStore()))
      && (BaseEngineController_A02_B.s19_SetpointMode == 0)));

    /* S-Function (motohawk_sfun_fault_def): '<S18>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ETC_Sticking */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(16, rtb_LogicalOperator_d);
      UpdateFault(16);
    }

    /* Outputs for Triggered SubSystem: '<S12>/Reset TasksComplete To True' incorporates:
     *  TriggerPort: '<S22>/Trigger'
     */
    if (BaseEngineController_A02_B.s19_TestComplete &&
        (BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S22>/motohawk_data_write' incorporates:
       *  Constant: '<S22>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE =
      (uint8_T)(BaseEngineController_A02_B.s19_TestComplete ? (int32_T)POS_ZCSIG
                : (int32_T)ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S12>/Reset TasksComplete To True' */

    /* S-Function (motohawk_sfun_data_write): '<S12>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SpringTestTime */
    {
      SpringTestTime_DataStore() = BaseEngineController_A02_B.s19_TestTime;
    }

    /* RelationalOperator: '<S12>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration3'
     */
    rtb_RelationalOperator1_g = (((ETC_SpringTestTimerThresh_DataStore()) <
      BaseEngineController_A02_B.s19_TestTime));

    /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def' */

    /* Set Fault Suspected Status: ETCSpringTest */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(14, rtb_RelationalOperator1_g);
      UpdateFault(14);
    }

    /* RelationalOperator: '<S20>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S20>/motohawk_data_read'
     */
    rtb_LogicalOperator6_i = (TimeSinceStall_DataStore() >
      (ETCShutdownTimerThresh_DataStore()));

    /* S-Function Block: <S20>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_d, NULL);
    }

    /* Logic: '<S20>/Logical Operator' incorporates:
     *  Constant: '<S20>/Constant1'
     *  RelationalOperator: '<S20>/Relational Operator'
     *  S-Function (motohawk_sfun_ain_read): '<S20>/motohawk_ain_read'
     */
    BaseEngineController_A02_B.s20_LogicalOperator = ((rtb_LogicalOperator6_i &&
      (rtb_motohawk_ain_read_d > 150)));

    /* Logic: '<S12>/Logical Operator' */
    rtb_LogicalOperator6_i = ((BaseEngineController_A02_B.s19_DC_Override != 0) ||
      BaseEngineController_A02_B.s20_LogicalOperator);

    /* S-Function Block: <S21>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_SetpointIn_DataStore()) =
        BaseEngineController_A02_B.s23_MultiportSwitch;
      (ETC_SetpointIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s23_MultiportSwitch,
         (ETC_SetpointIdxArr_DataStore()), 20, (ETC_SetpointIdx_DataStore()));
      rtb_motohawk_prelookup2_k = (ETC_SetpointIdx_DataStore());
    }

    /* S-Function Block: <S21>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_e = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_k, (real_T *) ((ETCDCOffsetTbl_DataStore())),
         20);
      (ETCDCOffset_DataStore()) = rtb_motohawk_interpolation_1d_e;
    }

    /* UnitDelay: '<S39>/Unit Delay' */
    rtb_Sum_iy = BaseEngineController_A02_DWork.s39_UnitDelay_DSTATE;

    /* UnitDelay: '<S35>/Unit Delay' */
    rtb_Product1_e = BaseEngineController_A02_DWork.s35_UnitDelay_DSTATE;

    /* S-Function Block: <S36>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s36_motohawk_delta_time_DWORK1, NULL);
      rtb_Product5_d = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S36>/Product' incorporates:
     *  MinMax: '<S36>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration'
     */
    rtb_Product5_d /= (rtb_Product5_d >= (ETCDamperTPSFilt_DataStore())) ||
      rtIsNaN((ETCDamperTPSFilt_DataStore())) ? rtb_Product5_d :
      (ETCDamperTPSFilt_DataStore());

    /* Sum: '<S37>/Sum1' incorporates:
     *  Constant: '<S37>/Constant'
     *  Product: '<S37>/Product'
     *  Product: '<S37>/Product1'
     *  Sum: '<S37>/Sum'
     *  UnitDelay: '<S37>/Unit Delay'
     */
    rtb_Merge_c5 = (1.0 - rtb_Product5_d) *
      BaseEngineController_A02_DWork.s37_UnitDelay_DSTATE +
      BaseEngineController_A02_B.s323_Switch2 * rtb_Product5_d;

    /* S-Function Block: <S35>/motohawk_delta_time */
    rtb_motohawk_delta_time_ce = 0.005;

    /* Product: '<S35>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S35>/motohawk_delta_time'
     *  Sum: '<S35>/Sum2'
     */
    BaseEngineController_A02_B.s35_Product = (rtb_Merge_c5 - rtb_Product1_e) /
      rtb_motohawk_delta_time_ce;

    /* Sum: '<S28>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration5'
     */
    rtb_Product5_d = (ETCDamperSwitchThresh_DataStore()) -
      (ETCDamperSwitchHyst_DataStore());

    /* RelationalOperator: '<S34>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration5'
     */
    rtb_AboveHiTarget = (rtb_Product5_d >= (ETCDamperSwitchThresh_DataStore()));

    /* RelationalOperator: '<S34>/LT1' */
    rtb_BelowLoTarget = (rtb_Product5_d <=
                         BaseEngineController_A02_B.s35_Product);

    /* CombinatorialLogic: '<S38>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_i[0] =
        BaseEngineController_A02_ConstP.pooled627[rowidx];
      rtb_CombinatorialLogic_i[1] =
        BaseEngineController_A02_ConstP.pooled627[rowidx + 4];
    }

    /* Switch: '<S38>/Switch1' incorporates:
     *  UnitDelay: '<S38>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_i[1]) {
      rtb_LogicalOperator1_a = rtb_CombinatorialLogic_i[0];
    } else {
      rtb_LogicalOperator1_a =
        BaseEngineController_A02_DWork.s38_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S38>/Switch1' */

    /* Switch: '<S34>/Switch2' incorporates:
     *  Logic: '<S34>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration5'
     */
    if (!rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s34_Switch2 = (ETCDamperSwitchThresh_DataStore());
    } else {
      BaseEngineController_A02_B.s34_Switch2 =
        BaseEngineController_A02_B.s35_Product;
    }

    /* End of Switch: '<S34>/Switch2' */

    /* RelationalOperator: '<S28>/Relational Operator' */
    BaseEngineController_A02_B.s28_RelationalOperator =
      ((BaseEngineController_A02_B.s35_Product >
        BaseEngineController_A02_B.s34_Switch2));

    /* Switch: '<S31>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration8'
     */
    if (BaseEngineController_A02_B.s28_RelationalOperator) {
      rtb_Product5_d = (ETCDampGainUp_DataStore());
    } else {
      rtb_Product5_d = (ETCDampGainDown_DataStore());
    }

    /* End of Switch: '<S31>/Switch' */

    /* Product: '<S31>/Product3' */
    rtb_UnitDelay4_bi = rtb_Product5_d * BaseEngineController_A02_B.s323_Switch2;

    /* S-Function Block: <S39>/motohawk_delta_time */
    rtb_motohawk_delta_time_oa = 0.005;

    /* Product: '<S39>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S39>/motohawk_delta_time'
     *  Sum: '<S39>/Sum2'
     */
    BaseEngineController_A02_B.s39_Product = (rtb_UnitDelay4_bi - rtb_Sum_iy) /
      rtb_motohawk_delta_time_oa;

    /* UnitDelay: '<S40>/Unit Delay' */
    rtb_Product1_e = BaseEngineController_A02_DWork.s40_UnitDelay_DSTATE;

    /* Sum: '<S31>/Sum2' */
    BaseEngineController_A02_B.s31_Sum2 =
      BaseEngineController_A02_B.s23_MultiportSwitch -
      BaseEngineController_A02_B.s323_Switch2;

    /* Product: '<S31>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration6'
     */
    rtb_Product5_d = BaseEngineController_A02_B.s31_Sum2 *
      (ETCErrorGain_DataStore());

    /* Product: '<S31>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration1'
     */
    rtb_Sum_iy = (ETCDGain_DataStore()) * rtb_Product5_d;

    /* S-Function Block: <S40>/motohawk_delta_time */
    rtb_motohawk_delta_time_oaj = 0.005;

    /* Product: '<S40>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S40>/motohawk_delta_time'
     *  Sum: '<S40>/Sum2'
     */
    BaseEngineController_A02_B.s40_Product = (rtb_Sum_iy - rtb_Product1_e) /
      rtb_motohawk_delta_time_oaj;

    /* Sum: '<S21>/Add' */
    rtb_Add_k = BaseEngineController_A02_B.s23_MultiportSwitch -
      BaseEngineController_A02_B.s323_Switch2;

    /* S-Function Block: <S21>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_ErrorIn_DataStore()) = rtb_Add_k;
      (ETC_ErrorIdx_DataStore()) = TablePrelookup_real_T(rtb_Add_k,
        (ETC_ErrorIdxArr_DataStore()), 10, (ETC_ErrorIdx_DataStore()));
      rtb_motohawk_prelookup_de = (ETC_ErrorIdx_DataStore());
    }

    /* S-Function Block: <S30>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_m = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_de, (real_T *) ((ETC_PGainMultTbl_DataStore())),
         10);
      (ETC_PGainMult_DataStore()) = rtb_motohawk_interpolation_1d_m;
    }

    /* Product: '<S31>/Product2' incorporates:
     *  Product: '<S30>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S30>/motohawk_calibration'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S30>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S21>/motohawk_prelookup'
     *  Sum: '<S21>/Add'
     */
    BaseEngineController_A02_B.s31_Product2 = rtb_motohawk_interpolation_1d_m *
      (ETCPGain_DataStore()) * rtb_Product5_d;

    /* Switch: '<S41>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S12>/motohawk_data_read'
     *  UnitDelay: '<S41>/Unit Delay'
     */
    if (ETCStallStateShutdown_DataStore()) {
      BaseEngineController_A02_B.s41_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_B.s41_Switch1 =
        BaseEngineController_A02_DWork.s41_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S41>/Switch1' */

    /* Sum: '<S21>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S21>/motohawk_prelookup2'
     *  Sum: '<S31>/Sum'
     */
    rtb_Product1_e = (((BaseEngineController_A02_B.s40_Product -
                        BaseEngineController_A02_B.s39_Product) +
                       BaseEngineController_A02_B.s31_Product2) +
                      BaseEngineController_A02_B.s41_Switch1) +
      rtb_motohawk_interpolation_1d_e;

    /* MinMax: '<S44>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S32>/motohawk_calibration'
     */
    y = (rtb_Product1_e >= (ETCLwrLim_DataStore())) || rtIsNaN
      ((ETCLwrLim_DataStore())) ? rtb_Product1_e : (ETCLwrLim_DataStore());

    /* MinMax: '<S44>/MinMax1' incorporates:
     *  MinMax: '<S44>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S32>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s44_MinMax1 = (y <= (ETCUprLim_DataStore())) ||
      rtIsNaN((ETCUprLim_DataStore())) ? y : (ETCUprLim_DataStore());

    /* S-Function Block: <S29>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_de, (real_T *) ((ETC_IGainMultTbl_DataStore())),
         10);
      (ETC_IGainMult_DataStore()) = rtb_motohawk_interpolation_1d_c;
    }

    /* Product: '<S29>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S29>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S21>/motohawk_prelookup'
     *  Sum: '<S21>/Add'
     */
    rtb_Product1_e = rtb_motohawk_interpolation_1d_c * (ETCIGain_DataStore());

    /* Product: '<S31>/Product1' */
    rtb_Product1_e *= rtb_Product5_d;

    /* S-Function Block: <S41>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s41_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_pc = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S41>/Sum' incorporates:
     *  Product: '<S41>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S41>/motohawk_delta_time'
     */
    rtb_Product1_e = rtb_Product1_e * rtb_motohawk_delta_time_pc +
      BaseEngineController_A02_B.s41_Switch1;

    /* MinMax: '<S43>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration3'
     */
    y = (rtb_Product1_e >= (ETCIMin_DataStore())) || rtIsNaN((ETCIMin_DataStore()))
      ? rtb_Product1_e : (ETCIMin_DataStore());

    /* MinMax: '<S43>/MinMax1' incorporates:
     *  MinMax: '<S43>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration4'
     */
    minV = (y <= (ETCIMax_DataStore())) || rtIsNaN((ETCIMax_DataStore())) ? y :
      (ETCIMax_DataStore());

    /* Saturate: '<S49>/Saturation' */
    rtb_Saturation_og = rtb_DesiredLambda_idx >= 16000.0 ? 16000.0 :
      rtb_DesiredLambda_idx <= 0.0 ? 0.0 : rtb_DesiredLambda_idx;

    /* S-Function (motohawk_sfun_data_write): '<S49>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETC_Tune_Timer */
    {
      ETC_Tune_Timer_DataStore() = rtb_Saturation_og;
    }

    /* Saturate: '<S56>/Saturation' */
    rtb_Saturation_na = BaseEngineController_A02_B.s56_Switch >= 16000.0 ?
      16000.0 : BaseEngineController_A02_B.s56_Switch <= 0.0 ? 0.0 :
      BaseEngineController_A02_B.s56_Switch;

    /* S-Function (motohawk_sfun_data_write): '<S56>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETCShutDownTimer */
    {
      ETCShutDownTimer_DataStore() = rtb_Saturation_na;
    }

    /* S-Function (motohawk_sfun_data_read): '<S24>/motohawk_data_read1' */
    rtb_motohawk_data_read1_ir = MPRD_DataStore();

    /* Outputs for Triggered SubSystem: '<S24>/Reset TasksComplete To False' incorporates:
     *  TriggerPort: '<S54>/Trigger'
     */
    if (rtb_motohawk_data_read1_ir &&
        (BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S54>/motohawk_data_write' incorporates:
       *  Constant: '<S54>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = FALSE;
      }
    }

    BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE =
      (uint8_T)(rtb_motohawk_data_read1_ir ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S24>/Reset TasksComplete To False' */

    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S12>/Constant2'
     */
    if (rtb_LogicalOperator6_i) {
      BaseEngineController_A02_B.s12_Switch = 0.0;
    } else {
      BaseEngineController_A02_B.s12_Switch =
        BaseEngineController_A02_B.s44_MinMax1;
    }

    /* End of Switch: '<S12>/Switch' */

    /* Update for UnitDelay: '<S12>/Unit Delay' */
    BaseEngineController_A02_DWork.s12_UnitDelay_DSTATE = rtb_Sum1_gje;

    /* Update for UnitDelay: '<S48>/Unit Delay' */
    BaseEngineController_A02_DWork.s48_UnitDelay_DSTATE = rtb_Sum2_d0;

    /* Update for UnitDelay: '<S39>/Unit Delay' */
    BaseEngineController_A02_DWork.s39_UnitDelay_DSTATE = rtb_UnitDelay4_bi;

    /* Update for UnitDelay: '<S35>/Unit Delay' */
    BaseEngineController_A02_DWork.s35_UnitDelay_DSTATE = rtb_Merge_c5;

    /* Update for UnitDelay: '<S37>/Unit Delay' */
    BaseEngineController_A02_DWork.s37_UnitDelay_DSTATE = rtb_Merge_c5;

    /* Update for UnitDelay: '<S38>/Unit Delay' */
    BaseEngineController_A02_DWork.s38_UnitDelay_DSTATE = rtb_LogicalOperator1_a;

    /* Update for UnitDelay: '<S40>/Unit Delay' */
    BaseEngineController_A02_DWork.s40_UnitDelay_DSTATE = rtb_Sum_iy;

    /* Update for UnitDelay: '<S41>/Unit Delay' incorporates:
     *  MinMax: '<S43>/MinMax1'
     */
    BaseEngineController_A02_DWork.s41_UnitDelay_DSTATE = minV;
  } else {
    if (BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE) {
      /* Disable for Enabled SubSystem: '<S23>/PassThrough' */
      /* Disable for Outport: '<S45>/Out1' */
      BaseEngineController_A02_B.s45_In1 = 10.0;
      BaseEngineController_A02_DWork.s23_PassThrough_MODE = FALSE;

      /* End of Disable for SubSystem: '<S23>/PassThrough' */
      BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE =
        FALSE;
    }
  }

  /* End of RelationalOperator: '<S11>/RelOp' */
  /* End of Outputs for SubSystem: '<S6>/Electronic Throttle Controller' */
  /* If: '<S754>/If' incorporates:
   *  Inport: '<S755>/In1'
   *  Inport: '<S756>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S754>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S754>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S754>/NewValue' incorporates:
     *  ActionPort: '<S755>/Action Port'
     */
    rtb_Product1_e = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S754>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S754>/OldValue' incorporates:
     *  ActionPort: '<S756>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s12_Switch;

    /* End of Outputs for SubSystem: '<S754>/OldValue' */
  }

  /* End of If: '<S754>/If' */

  /* Switch: '<S664>/Switch' incorporates:
   *  Constant: '<S664>/Constant2'
   *  Product: '<S664>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S664>/motohawk_interpolation_1d'
   *  Sum: '<S664>/Sum'
   */
  if (rtb_RelationalOperator6_k) {
    rtb_DataTypeConversion_om = 0.0;
  } else {
    /* S-Function Block: <S664>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_l = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s312_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_l;
    }

    rtb_DataTypeConversion_om = rtb_Product1_e * rtb_motohawk_interpolation_1d_l
      + (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S664>/Switch' */

  /* Saturate: '<S664>/Saturation' */
  BaseEngineController_A02_B.s664_ETC = rtb_DataTypeConversion_om >= 100.0 ?
    100.0 : rtb_DataTypeConversion_om <= -100.0 ? -100.0 :
    rtb_DataTypeConversion_om;

  /* Abs: '<S664>/Abs' */
  rtb_DataTypeConversion_om = fabs(BaseEngineController_A02_B.s664_ETC);

  /* RelationalOperator: '<S664>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration3'
   */
  rtb_LogicalOperator6_i = (rtb_DataTypeConversion_om > (ETC_OC_MIN_DataStore()));

  /* S-Function (motohawk_sfun_pwm): '<S664>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs(NULL,
    &BaseEngineController_A02_B.s664_motohawk_pwm1);

  /* Abs: '<S664>/Abs1' */
  rtb_DataTypeConversion2_l = (int16_T)
    (BaseEngineController_A02_B.s664_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_A02_B.s664_motohawk_pwm1 :
     BaseEngineController_A02_B.s664_motohawk_pwm1);

  /* RelationalOperator: '<S664>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration1'
   */
  rtb_RelationalOperator6_k = ((real_T)rtb_DataTypeConversion2_l <
    (ETC_I_MIN_DataStore()));

  /* Switch: '<S753>/Switch' incorporates:
   *  Constant: '<S753>/Constant'
   *  Logic: '<S664>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S753>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S753>/motohawk_delta_time'
   *  Sum: '<S753>/Sum'
   */
  if (rtb_LogicalOperator10 && rtb_LogicalOperator6_i &&
      rtb_RelationalOperator6_k) {
    rtb_DataTypeConversion_om = rtb_motohawk_delta_time_l +
      ETCOpenFaultTimer_DataStore();
  } else {
    rtb_DataTypeConversion_om = 0.0;
  }

  /* End of Switch: '<S753>/Switch' */

  /* RelationalOperator: '<S664>/Relational Operator5' incorporates:
   *  Constant: '<S664>/Constant'
   */
  rtb_RelationalOperator5 = ((rtb_DataTypeConversion_om > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S664>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator5);
    UpdateFault(15);
  }

  /* Gain: '<S664>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_e = 100.0 * (ETC_Frequency_DataStore());

  /* Gain: '<S664>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_b = 40.95 * BaseEngineController_A02_B.s664_ETC;

  /* DataTypeConversion: '<S664>/Data Type Conversion3' */
  if (rtb_DataTypeConversion_e < 4.294967296E+9) {
    if (rtb_DataTypeConversion_e >= 0.0) {
      rtb_DataTypeConversion3_n = (uint32_T)rtb_DataTypeConversion_e;
    } else {
      rtb_DataTypeConversion3_n = 0U;
    }
  } else {
    rtb_DataTypeConversion3_n = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S664>/Data Type Conversion3' */

  /* DataTypeConversion: '<S664>/Data Type Conversion4' */
  if (rtb_Abs_b < 32768.0) {
    if (rtb_Abs_b >= -32768.0) {
      rtb_DataTypeConversion4_k = (int16_T)rtb_Abs_b;
    } else {
      rtb_DataTypeConversion4_k = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_k = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S664>/Data Type Conversion4' */

  /* Saturate: '<S753>/Saturation' */
  rtb_Saturation_h = rtb_DataTypeConversion_om >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion_om <= 0.0 ? 0.0 : rtb_DataTypeConversion_om;

  /* S-Function (motohawk_sfun_data_write): '<S753>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_h;
  }

  /* If: '<S761>/If' incorporates:
   *  Inport: '<S771>/In1'
   *  Inport: '<S772>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S761>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S761>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S761>/NewValue' incorporates:
     *  ActionPort: '<S771>/Action Port'
     */
    rtb_Product1_e = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S761>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S761>/OldValue' incorporates:
     *  ActionPort: '<S772>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s114_SOI;

    /* End of Outputs for SubSystem: '<S761>/OldValue' */
  }

  /* End of If: '<S761>/If' */

  /* Gain: '<S665>/Gain2' */
  rtb_Abs_b = 16.0 * rtb_Product1_e;

  /* DataTypeConversion: '<S665>/Data Type Conversion2' */
  if (rtb_Abs_b < 32768.0) {
    if (rtb_Abs_b >= -32768.0) {
      rtb_DataTypeConversion2_l = (int16_T)rtb_Abs_b;
    } else {
      rtb_DataTypeConversion2_l = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_l = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S665>/Data Type Conversion2' */
  /* If: '<S67>/If' incorporates:
   *  Inport: '<S84>/In1'
   *  Inport: '<S85>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S67>/override_enable'
   *  UnitDelay: '<S67>/Unit Delay'
   */
  if ((Fuel_Cyl8_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S67>/NewValue' incorporates:
     *  ActionPort: '<S84>/Action Port'
     */
    rtb_DesiredLambda_idx_0 =
      BaseEngineController_A02_DWork.s67_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S67>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S67>/OldValue' incorporates:
     *  ActionPort: '<S85>/Action Port'
     */
    rtb_DesiredLambda_idx_0 = BaseEngineController_A02_B.s114_FPC[7];

    /* End of Outputs for SubSystem: '<S67>/OldValue' */
  }

  /* End of If: '<S67>/If' */

  /* Sum: '<S67>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S67>/offset'
   */
  rtb_Product1_e = rtb_DesiredLambda_idx_0 + (Fuel_Cyl8_offset_DataStore());

  /* If: '<S66>/If' incorporates:
   *  Inport: '<S82>/In1'
   *  Inport: '<S83>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S66>/override_enable'
   *  UnitDelay: '<S66>/Unit Delay'
   */
  if ((Fuel_Cyl7_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S66>/NewValue' incorporates:
     *  ActionPort: '<S82>/Action Port'
     */
    rtb_Merge_mj = BaseEngineController_A02_DWork.s66_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S66>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S66>/OldValue' incorporates:
     *  ActionPort: '<S83>/Action Port'
     */
    rtb_Merge_mj = BaseEngineController_A02_B.s114_FPC[6];

    /* End of Outputs for SubSystem: '<S66>/OldValue' */
  }

  /* End of If: '<S66>/If' */

  /* Sum: '<S66>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S66>/offset'
   */
  rtb_Sum_iy = rtb_Merge_mj + (Fuel_Cyl7_offset_DataStore());

  /* If: '<S64>/If' incorporates:
   *  Inport: '<S78>/In1'
   *  Inport: '<S79>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S64>/override_enable'
   *  UnitDelay: '<S64>/Unit Delay'
   */
  if ((Fuel_Cyl6_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S64>/NewValue' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    rtb_Merge_n = BaseEngineController_A02_DWork.s64_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S64>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S64>/OldValue' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    rtb_Merge_n = BaseEngineController_A02_B.s114_FPC[5];

    /* End of Outputs for SubSystem: '<S64>/OldValue' */
  }

  /* End of If: '<S64>/If' */

  /* Sum: '<S64>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S64>/offset'
   */
  rtb_UnitDelay4_bi = rtb_Merge_n + (Fuel_Cyl6_offset_DataStore());

  /* If: '<S63>/If' incorporates:
   *  Inport: '<S76>/In1'
   *  Inport: '<S77>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S63>/override_enable'
   *  UnitDelay: '<S63>/Unit Delay'
   */
  if ((Fuel_Cyl5_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S63>/NewValue' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    rtb_Merge_fc = BaseEngineController_A02_DWork.s63_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S63>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S63>/OldValue' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    rtb_Merge_fc = BaseEngineController_A02_B.s114_FPC[4];

    /* End of Outputs for SubSystem: '<S63>/OldValue' */
  }

  /* End of If: '<S63>/If' */

  /* Sum: '<S63>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S63>/offset'
   */
  rtb_Sum1_gje = rtb_Merge_fc + (Fuel_Cyl5_offset_DataStore());

  /* If: '<S62>/If' incorporates:
   *  Inport: '<S74>/In1'
   *  Inport: '<S75>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S62>/override_enable'
   *  UnitDelay: '<S62>/Unit Delay'
   */
  if ((Fuel_Cyl4_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S62>/NewValue' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    rtb_Merge_p2 = BaseEngineController_A02_DWork.s62_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S62>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S62>/OldValue' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    rtb_Merge_p2 = BaseEngineController_A02_B.s114_FPC[3];

    /* End of Outputs for SubSystem: '<S62>/OldValue' */
  }

  /* End of If: '<S62>/If' */

  /* Sum: '<S62>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S62>/offset'
   */
  rtb_Merge_c5 = rtb_Merge_p2 + (Fuel_Cyl4_offset_DataStore());

  /* If: '<S61>/If' incorporates:
   *  Inport: '<S72>/In1'
   *  Inport: '<S73>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S61>/override_enable'
   *  UnitDelay: '<S61>/Unit Delay'
   */
  if ((Fuel_Cyl3_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S61>/NewValue' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */
    rtb_Merge_b0 = BaseEngineController_A02_DWork.s61_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S61>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S61>/OldValue' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    rtb_Merge_b0 = BaseEngineController_A02_B.s114_FPC[2];

    /* End of Outputs for SubSystem: '<S61>/OldValue' */
  }

  /* End of If: '<S61>/If' */

  /* Sum: '<S61>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S61>/offset'
   */
  rtb_Sum2_d0 = rtb_Merge_b0 + (Fuel_Cyl3_offset_DataStore());

  /* If: '<S60>/If' incorporates:
   *  Inport: '<S70>/In1'
   *  Inport: '<S71>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S60>/override_enable'
   *  UnitDelay: '<S60>/Unit Delay'
   */
  if ((Fuel_Cyl2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S60>/NewValue' incorporates:
     *  ActionPort: '<S70>/Action Port'
     */
    rtb_Merge_f3 = BaseEngineController_A02_DWork.s60_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S60>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S60>/OldValue' incorporates:
     *  ActionPort: '<S71>/Action Port'
     */
    rtb_Merge_f3 = BaseEngineController_A02_B.s114_FPC[1];

    /* End of Outputs for SubSystem: '<S60>/OldValue' */
  }

  /* End of If: '<S60>/If' */

  /* Sum: '<S60>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/offset'
   */
  rtb_DesiredLambda_idx = rtb_Merge_f3 + (Fuel_Cyl2_offset_DataStore());

  /* If: '<S59>/If' incorporates:
   *  Inport: '<S68>/In1'
   *  Inport: '<S69>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S59>/override_enable'
   *  UnitDelay: '<S59>/Unit Delay'
   */
  if ((Fuel_Cyl1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S59>/NewValue' incorporates:
     *  ActionPort: '<S68>/Action Port'
     */
    rtb_Merge_iu = BaseEngineController_A02_DWork.s59_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S59>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S59>/OldValue' incorporates:
     *  ActionPort: '<S69>/Action Port'
     */
    rtb_Merge_iu = BaseEngineController_A02_B.s114_FPC[0];

    /* End of Outputs for SubSystem: '<S59>/OldValue' */
  }

  /* End of If: '<S59>/If' */

  /* If: '<S65>/If' incorporates:
   *  Inport: '<S80>/In1'
   *  Inport: '<S81>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S59>/offset'
   *  S-Function (motohawk_sfun_calibration): '<S65>/override_enable'
   *  Sum: '<S59>/Sum'
   *  UnitDelay: '<S65>/Unit Delay'
   */
  if ((Fuel_Global_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S65>/NewValue' incorporates:
     *  ActionPort: '<S80>/Action Port'
     */
    memcpy((void *)&rtb_Merge_pj[0], (void *)
           BaseEngineController_A02_DWork.s65_UnitDelay_DSTATE, sizeof(real_T) <<
           3U);

    /* End of Outputs for SubSystem: '<S65>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S65>/OldValue' incorporates:
     *  ActionPort: '<S81>/Action Port'
     */
    rtb_Merge_pj[0] = rtb_Merge_iu + (Fuel_Cyl1_offset_DataStore());
    rtb_Merge_pj[1] = rtb_DesiredLambda_idx;
    rtb_Merge_pj[2] = rtb_Sum2_d0;
    rtb_Merge_pj[3] = rtb_Merge_c5;
    rtb_Merge_pj[4] = rtb_Sum1_gje;
    rtb_Merge_pj[5] = rtb_UnitDelay4_bi;
    rtb_Merge_pj[6] = rtb_Sum_iy;
    rtb_Merge_pj[7] = rtb_Product1_e;

    /* End of Outputs for SubSystem: '<S65>/OldValue' */
  }

  /* End of If: '<S65>/If' */

  /* Sum: '<S65>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S65>/offset'
   */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s65_Sum[i] = rtb_Merge_pj[i] +
      (Fuel_Global_offset_DataStore());
  }

  /* End of Sum: '<S65>/Sum' */
  /* Product: '<S13>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S13>/Injector Gain [ms//mg]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_e[i] = BaseEngineController_A02_B.s65_Sum[i] *
      (InjGain_DataStore());
  }

  /* End of Product: '<S13>/Product2' */
  /* Sum: '<S13>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S13>/Injector Offset [ms]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_e[i] += (InjOffset_DataStore());
  }

  /* End of Sum: '<S13>/Sum' */
  /* Fcn: '<S57>/const ref to atm' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S13>/Regulated Gauge Fuel Pressure [kPa]'
   */
  BaseEngineController_A02_B.s57_constreftoatm = ((GaugeFuelPress_DataStore()) +
    BaseEngineController_A02_B.s277_Sum) - BaseEngineController_A02_B.s550_Merge;

  /* S-Function Block: <S57>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (InjDeltaPress09In_DataStore()) =
      BaseEngineController_A02_B.s57_constreftoatm;
    (InjDeltaPress09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s57_constreftoatm,
       (InjDeltaPress09IdxArr_DataStore()), 9, (InjDeltaPress09Idx_DataStore()));
    rtb_motohawk_prelookup1_n3 = (InjDeltaPress09Idx_DataStore());
  }

  /* S-Function Block: <S13>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d3_k = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n3, (real_T *) ((InjdPCompTbl_DataStore())), 9);
    (InjdPComp_DataStore()) = rtb_motohawk_interpolation_1d3_k;
  }

  /* Product: '<S13>/Product3' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S13>/motohawk_interpolation_1d3'
   *  S-Function (motohawk_sfun_prelookup): '<S57>/motohawk_prelookup1'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_e[i] = BaseEngineController_A02_B.s114_FuelMult *
      rtb_Product2_e[i] * rtb_motohawk_interpolation_1d3_k;
  }

  /* End of Product: '<S13>/Product3' */

  /* Saturate: '<S13>/Saturation' */
  y = BaseEngineController_A02_B.s507_Sum1 >= 0.01 ?
    BaseEngineController_A02_B.s507_Sum1 : 0.01;

  /* S-Function Block: <S13>/motohawk_interpolation_1d4 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d4_ii = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n3, (real_T *) ((InjTurnOffTbl_DataStore())), 9);
    (InjTurnOff_DataStore()) = rtb_motohawk_interpolation_1d4_ii;
  }

  /* S-Function Block: <S13>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_k = TableInterpolation1D_real_T
      (BaseEngineController_A02_B.s312_motohawk_prelookup, (real_T *)
       ((InjTurnOnTbl_DataStore())), 9);
    (InjTurnOn_DataStore()) = rtb_motohawk_interpolation_1d1_k;
  }

  /* Sum: '<S13>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S13>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S13>/motohawk_interpolation_1d4'
   *  S-Function (motohawk_sfun_prelookup): '<S57>/motohawk_prelookup1'
   */
  BaseEngineController_A02_B.s13_Sum2 = rtb_motohawk_interpolation_1d1_k -
    rtb_motohawk_interpolation_1d4_ii;

  /* Sum: '<S13>/Sum1' incorporates:
   *  Constant: '<S13>/Constant'
   *  Product: '<S13>/Divide'
   *  Saturate: '<S13>/Saturation'
   */
  BaseEngineController_A02_B.s13_Sum1 = 120000.0 / y -
    BaseEngineController_A02_B.s13_Sum2;

  /* MinMax: '<S13>/MinMax' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s13_MinMax[i] = (rtb_Product2_e[i] <=
      BaseEngineController_A02_B.s13_Sum1) || rtIsNaN
      (BaseEngineController_A02_B.s13_Sum1) ? rtb_Product2_e[i] :
      BaseEngineController_A02_B.s13_Sum1;
  }

  /* End of MinMax: '<S13>/MinMax' */
  /* If: '<S762>/If' incorporates:
   *  Inport: '<S773>/In1'
   *  Inport: '<S774>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S762>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S762>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S762>/NewValue' incorporates:
     *  ActionPort: '<S773>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product2_e[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S762>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S762>/OldValue' incorporates:
     *  ActionPort: '<S774>/Action Port'
     */
    memcpy((void *)&rtb_Product2_e[0], (void *)
           (&BaseEngineController_A02_B.s13_MinMax[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S762>/OldValue' */
  }

  /* End of If: '<S762>/If' */

  /* DataTypeConversion: '<S665>/Data Type Conversion3' incorporates:
   *  Gain: '<S665>/Gain3'
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

  /* End of DataTypeConversion: '<S665>/Data Type Conversion3' */
  /* Gain: '<S665>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S665>/motohawk_calibration9'
   */
  rtb_Abs_b = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S665>/Data Type Conversion6' */
  if (rtb_Abs_b < 4.294967296E+9) {
    if (rtb_Abs_b >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_b;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S665>/Data Type Conversion6' */
  /* If: '<S759>/If' incorporates:
   *  Inport: '<S767>/In1'
   *  Inport: '<S768>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S759>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S759>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S759>/NewValue' incorporates:
     *  ActionPort: '<S767>/Action Port'
     */
    rtb_Product1_e = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S759>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S759>/OldValue' incorporates:
     *  ActionPort: '<S768>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s13_Sum2;

    /* End of Outputs for SubSystem: '<S759>/OldValue' */
  }

  /* End of If: '<S759>/If' */

  /* Gain: '<S665>/Gain1' */
  rtb_Abs_b = 1000.0 * rtb_Product1_e;

  /* DataTypeConversion: '<S665>/Data Type Conversion1' */
  if (rtb_Abs_b < 4.294967296E+9) {
    if (rtb_Abs_b >= 0.0) {
      rtb_Sum_l0 = (uint32_T)rtb_Abs_b;
    } else {
      rtb_Sum_l0 = 0U;
    }
  } else {
    rtb_Sum_l0 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S665>/Data Type Conversion1' */
  /* If: '<S760>/If' incorporates:
   *  Inport: '<S769>/In1'
   *  Inport: '<S770>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S760>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S760>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S760>/NewValue' incorporates:
     *  ActionPort: '<S769>/Action Port'
     */
    rtb_Product1_e = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S760>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S760>/OldValue' incorporates:
     *  ActionPort: '<S770>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s114_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S760>/OldValue' */
  }

  /* End of If: '<S760>/If' */

  /* Gain: '<S665>/Gain6' */
  rtb_Abs_b = 16.0 * rtb_Product1_e;

  /* DataTypeConversion: '<S665>/Data Type Conversion7' */
  if (rtb_Abs_b < 32768.0) {
    if (rtb_Abs_b >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_b;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S665>/Data Type Conversion7' */
  /* Gain: '<S665>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S665>/motohawk_calibration6'
   */
  rtb_Abs_b = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S665>/Data Type Conversion8' */
  if (rtb_Abs_b < 4.294967296E+9) {
    if (rtb_Abs_b >= 0.0) {
      rtb_UnitDelay_aka = (uint32_T)rtb_Abs_b;
    } else {
      rtb_UnitDelay_aka = 0U;
    }
  } else {
    rtb_UnitDelay_aka = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S665>/Data Type Conversion8' */
  /* Outputs for Enabled SubSystem: '<S14>/PassThrough5' incorporates:
   *  EnablePort: '<S92>/Enable'
   */
  /* Logic: '<S14>/Logical Operator1' incorporates:
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant3'
   *  RelationalOperator: '<S14>/Relational Operator2'
   *  RelationalOperator: '<S14>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 1) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!BaseEngineController_A02_DWork.s14_PassThrough5_MODE) {
      BaseEngineController_A02_DWork.s14_PassThrough5_MODE = TRUE;
    }

    /* DataTypeConversion: '<S92>/Data Type Conversion1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s92_DataTypeConversion1[i] =
        ((BaseEngineController_A02_B.s103_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S92>/Data Type Conversion1' */
  } else {
    if (BaseEngineController_A02_DWork.s14_PassThrough5_MODE) {
      /* Disable for Outport: '<S92>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s92_DataTypeConversion1[i] = FALSE;
      }

      /* End of Outport: '<S92>/Out1' */
      BaseEngineController_A02_DWork.s14_PassThrough5_MODE = FALSE;
    }
  }

  /* End of Logic: '<S14>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S14>/PassThrough5' */

  /* Logic: '<S14>/Logical Operator3' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_j[i] =
      !BaseEngineController_A02_B.s92_DataTypeConversion1[i];
  }

  /* End of Logic: '<S14>/Logical Operator3' */

  /* Outputs for Atomic SubSystem: '<S665>/Injector Enable Manager' */

  /* S-Function Block: <S766>/motohawk_delta_time */
  rtb_motohawk_delta_time_jd = 0.005;

  /* Switch: '<S766>/Switch' incorporates:
   *  Constant: '<S766>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S766>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S766>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S758>/motohawk_fault_action'
   *  Sum: '<S766>/Sum'
   */
  if (GetFaultActionStatus(1)) {
    rtb_Product1_e = rtb_motohawk_delta_time_jd +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_Product1_e = 0.0;
  }

  /* End of Switch: '<S766>/Switch' */
  /* RelationalOperator: '<S758>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S758>/motohawk_calibration1'
   */
  rtb_LogicalOperator_bt = (rtb_Product1_e > (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S758>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_bt;
  }

  /* RelationalOperator: '<S758>/Relational Operator1' incorporates:
   *  Gain: '<S758>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S758>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_m3 = ((rtb_Product1_e > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S758>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_m3;
  }

  /* RelationalOperator: '<S758>/Relational Operator2' incorporates:
   *  Constant: '<S758>/Constant'
   */
  rtb_RelationalOperator2_jp = ((rtb_Product1_e > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S758>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_jp;
  }

  /* Logic: '<S758>/Logical Operator' */
  rtb_LogicalOperator_bt = !rtb_LogicalOperator_bt;

  /* Logic: '<S758>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S758>/motohawk_data_read'
   */
  rtb_LogicalOperator6_i = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S758>/motohawk_data_read1' */
  rtb_motohawk_data_read1_h3 = ECUP_Enabled_DataStore();

  /* Logic: '<S758>/Logical Operator4' incorporates:
   *  Constant: '<S765>/Constant'
   *  RelationalOperator: '<S765>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S758>/motohawk_data_read2'
   */
  rtb_LogicalOperator1_a = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S758>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S758>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S758>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S758>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S758>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S758>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S758>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S758>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S758>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_iht[0] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator6_i && rtb_motohawk_data_read1_h3 &&
    rtb_LogicalOperator1_a && (Injector1Enable_DataStore()));
  rtb_LogicalOperator1_iht[1] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator6_i && rtb_motohawk_data_read1_h3 &&
    rtb_LogicalOperator1_a && (Injector2Enable_DataStore()));
  rtb_LogicalOperator1_iht[2] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator6_i && rtb_motohawk_data_read1_h3 &&
    rtb_LogicalOperator1_a && (Injector3Enable_DataStore()));
  rtb_LogicalOperator1_iht[3] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator6_i && rtb_motohawk_data_read1_h3 &&
    rtb_LogicalOperator1_a && (Injector4Enable_DataStore()));
  rtb_LogicalOperator1_iht[4] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator6_i && rtb_motohawk_data_read1_h3 &&
    rtb_LogicalOperator1_a && (Injector5Enable_DataStore()));
  rtb_LogicalOperator1_iht[5] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator6_i && rtb_motohawk_data_read1_h3 &&
    rtb_LogicalOperator1_a && (Injector6Enable_DataStore()));
  rtb_LogicalOperator1_iht[6] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator6_i && rtb_motohawk_data_read1_h3 &&
    rtb_LogicalOperator1_a && (Injector7Enable_DataStore()));
  rtb_LogicalOperator1_iht[7] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator6_i && rtb_motohawk_data_read1_h3 &&
    rtb_LogicalOperator1_a && (Injector8Enable_DataStore()));

  /* Saturate: '<S766>/Saturation' */
  rtb_Saturation_km = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
    0.0 ? 0.0 : rtb_Product1_e;

  /* S-Function (motohawk_sfun_data_write): '<S766>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_km;
  }

  /* End of Outputs for SubSystem: '<S665>/Injector Enable Manager' */

  /* If: '<S763>/If' incorporates:
   *  Inport: '<S775>/In1'
   *  Inport: '<S776>/In1'
   *  Logic: '<S665>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S763>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S763>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S763>/NewValue' incorporates:
     *  ActionPort: '<S775>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s763_Merge[i] = (InjEnable_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S763>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S763>/OldValue' incorporates:
     *  ActionPort: '<S776>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s763_Merge[i] = ((rtb_LogicalOperator3_j[i] &&
        rtb_LogicalOperator1_iht[i]));
    }

    /* End of Outputs for SubSystem: '<S763>/OldValue' */
  }

  /* End of If: '<S763>/If' */

  /* S-Function Block: <S665>/Injector Sequence */
  {
    extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_37[8];
    uint32_T makeup_duration;
    int16_T makeup_angle;
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_37[8];
    extern int32_T InjectorSeqDiagLastPin_37;
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
      enable = ((BaseEngineController_A02_B.s763_Merge)[index] &&
                pulse_scheduling_allowed);
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_A02_ConstB.s665_DataTypeConversion5) !=
            (BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_A02_ConstB.s665_DataTypeConversion5);
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
          if (TransientInjectorSeqInfo_37[index].primaryComplete) {
            if (elec_duration > TransientInjectorSeqInfo_37[index].
                primaryDuration) {
              makeup_duration = elec_duration -
                TransientInjectorSeqInfo_37[index].primaryDuration;
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
              ((&BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[0])
               [index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_A02_ConstB.s665_DataTypeConversion5) !=
              (BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK2)) {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_A02_ConstB.s665_DataTypeConversion5);
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
            ((&BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_A02_ConstB.s665_DataTypeConversion5) !=
            (BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_A02_ConstB.s665_DataTypeConversion5);
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

    BaseEngineController_A02_DWork.s665_InjectorSequence_DWORK2 =
      BaseEngineController_A02_ConstB.s665_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_A02_B.s665_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_37[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_37[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S757>/==' incorporates:
   *  Constant: '<S757>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_j[i] =
      (BaseEngineController_A02_B.s665_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S757>/==' */
  /* S-Function Block: <S757>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S757>/<1' incorporates:
   *  Constant: '<S757>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S757>/motohawk_encoder_average_rpm'
   */
  rtb_LogicalOperator6_i = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S757>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator3_j[i] && rtb_LogicalOperator6_i &&
                   BaseEngineController_A02_B.s763_Merge[i]);
  }

  /* End of Logic: '<S757>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S757>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_AND1[0]);
    UpdateFault(28);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S757>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_AND1[1]);
    UpdateFault(29);
  }

  /* If: '<S778>/If' incorporates:
   *  Inport: '<S779>/In1'
   *  Inport: '<S780>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S778>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S778>/override_enable'
   */
  if ((OILP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S778>/NewValue' incorporates:
     *  ActionPort: '<S779>/Action Port'
     */
    rtb_LogicalOperator6_i = (OILP_new_DataStore());

    /* End of Outputs for SubSystem: '<S778>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S778>/OldValue' incorporates:
     *  ActionPort: '<S780>/Action Port'
     */
    rtb_LogicalOperator6_i = BaseEngineController_A02_B.s114_OILP;

    /* End of Outputs for SubSystem: '<S778>/OldValue' */
  }

  /* End of If: '<S778>/If' */

  /* Logic: '<S777>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S777>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s777_LogicalOperator = rtb_LogicalOperator6_i ^
    (OILP_Polarity_DataStore());

  /* If: '<S782>/If' incorporates:
   *  Inport: '<S783>/In1'
   *  Inport: '<S784>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S782>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S782>/override_enable'
   */
  if ((Oxygen_Heater_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S782>/NewValue' incorporates:
     *  ActionPort: '<S783>/Action Port'
     */
    rtb_LogicalOperator6_i = (Oxygen_Heater_new_DataStore());

    /* End of Outputs for SubSystem: '<S782>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S782>/OldValue' incorporates:
     *  ActionPort: '<S784>/Action Port'
     */
    rtb_LogicalOperator6_i = BaseEngineController_A02_B.s114_O2Heater;

    /* End of Outputs for SubSystem: '<S782>/OldValue' */
  }

  /* End of If: '<S782>/If' */

  /* Logic: '<S781>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S781>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s781_LogicalOperator = rtb_LogicalOperator6_i ^
    (Oxygen_Heater_Polarity_DataStore());

  /* Sum: '<S14>/Sum1' incorporates:
   *  DataTypeConversion: '<S14>/Data Type Conversion2'
   *  DataTypeConversion: '<S14>/Data Type Conversion3'
   *  DataTypeConversion: '<S14>/Data Type Conversion4'
   *  Fcn: '<S14>/Fcn1'
   *  Fcn: '<S14>/Fcn2'
   */
  rtb_Abs_b = ((real_T)rtb_motohawk_fault_action3 * 3.0 + (real_T)
               rtb_motohawk_fault_action2 * 2.0) + (real_T)
    rtb_motohawk_fault_action1_m;

  /* DataTypeConversion: '<S14>/Data Type Conversion5' */
  if (rtb_Abs_b < 256.0) {
    if (rtb_Abs_b >= 0.0) {
      BaseEngineController_A02_B.s14_DataTypeConversion5 = (uint8_T)rtb_Abs_b;
    } else {
      BaseEngineController_A02_B.s14_DataTypeConversion5 = 0U;
    }
  } else {
    BaseEngineController_A02_B.s14_DataTypeConversion5 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S14>/Data Type Conversion5' */

  /* S-Function Block: <S122>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s122_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_i = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S122>/Switch' incorporates:
   *  Constant: '<S122>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S122>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S122>/motohawk_delta_time'
   *  Sum: '<S122>/Sum'
   */
  if (BaseEngineController_A02_B.s121_APPRamp >= 1.0) {
    rtb_Switch_k = rtb_motohawk_delta_time_i + ThrottleRampTime_DataStore();
  } else {
    rtb_Switch_k = 0.0;
  }

  /* End of Switch: '<S122>/Switch' */
  /* S-Function Block: <S113>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP_PrelookupIn_DataStore()) = rtb_Switch_k;
    (APP_PrelookupIdx_DataStore()) = TablePrelookup_real_T(rtb_Switch_k,
      (APP_PrelookupIdxArr_DataStore()), 7, (APP_PrelookupIdx_DataStore()));
    rtb_motohawk_prelookup_e0 = (APP_PrelookupIdx_DataStore());
  }

  /* S-Function Block: <S113>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d_k = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_e0, (real_T *) ((APP_InterpolationTbl_DataStore())),
       7);
    (APP_Interpolation_DataStore()) = rtb_motohawk_interpolation_1d_k;
  }

  /* Product: '<S113>/Product' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S113>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S113>/motohawk_prelookup'
   */
  rtb_Product_cf = rtb_motohawk_interpolation_1d_k *
    BaseEngineController_A02_B.s121_APPRamp;

  /* S-Function (motohawk_sfun_data_write): '<S113>/motohawk_data_write' */
  /* Write to Data Storage as scalar: APP */
  {
    APP_DataStore() = rtb_Product_cf;
  }

  /* Saturate: '<S122>/Saturation' */
  rtb_Saturation_p = rtb_Switch_k >= 16000.0 ? 16000.0 : rtb_Switch_k <= 0.0 ?
    0.0 : rtb_Switch_k;

  /* S-Function (motohawk_sfun_data_write): '<S122>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ThrottleRampTime */
  {
    ThrottleRampTime_DataStore() = rtb_Saturation_p;
  }

  /* Saturate: '<S123>/Saturation' */
  rtb_Saturation_a5 = rtb_Switch_j5 >= 16000.0 ? 16000.0 : rtb_Switch_j5 <= 0.0 ?
    0.0 : rtb_Switch_j5;

  /* S-Function (motohawk_sfun_data_write): '<S123>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TorqueRampTime */
  {
    TorqueRampTime_DataStore() = rtb_Saturation_a5;
  }

  /* UnitDelay: '<S351>/Unit Delay' */
  rtb_UnitDelay_aka = BaseEngineController_A02_DWork.s351_UnitDelay_DSTATE;

  /* Sum: '<S351>/Sum' incorporates:
   *  Constant: '<S351>/Constant1'
   */
  rtb_Switch_a = 1U + rtb_UnitDelay_aka;
  if (rtb_Switch_a < 1U) {
    rtb_Switch_a = MAX_uint32_T;
  }

  rtb_Sum_l0 = rtb_Switch_a;

  /* End of Sum: '<S351>/Sum' */

  /* RelationalOperator: '<S351>/Relational Operator' incorporates:
   *  Constant: '<S10>/Count'
   */
  rtb_RelationalOperator_hu = (rtb_Sum_l0 >= 5U);

  /* S-Function Block: <S273>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = BaseEngineController_A02_B.s317_Switch1;
    (App05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s317_Switch1, (App05IdxArr_DataStore()), 5,
       (App05Idx_DataStore()));
    rtb_motohawk_prelookup_a = (App05Idx_DataStore());
  }

  /* S-Function Block: <S350>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom05In_DataStore()) = rtb_Torque;
    (IndLoadNom05Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom05IdxArr_DataStore()), 5, (IndLoadNom05Idx_DataStore()));
    rtb_motohawk_prelookup_a = (IndLoadNom05Idx_DataStore());
  }

  /* Switch: '<S301>/Switch1' incorporates:
   *  Constant: '<S298>/Constant'
   *  Constant: '<S302>/Constant'
   *  RelationalOperator: '<S302>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S298>/motohawk_data_read'
   *  UnitDelay: '<S301>/Unit Delay'
   */
  if (((uint8_T)EngineState_DataStore()) == 1) {
    BaseEngineController_A02_B.s301_Switch1 = 0.0;
  } else {
    BaseEngineController_A02_B.s301_Switch1 =
      BaseEngineController_A02_DWork.s301_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S301>/Switch1' */
  /* S-Function Block: <S311>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_A02_B.s507_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s507_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_a = (RPM05Idx_DataStore());
  }

  /* Outputs for Enabled SubSystem: '<S272>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S316>/Enable'
   */
  if (rtb_RelOp_g) {
    if (!BaseEngineController_A02_DWork.s272_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S316>/Unit Delay' */
      BaseEngineController_A02_DWork.s316_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s272_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S316>/Sum' incorporates:
     *  Constant: '<S316>/Constant'
     *  UnitDelay: '<S316>/Unit Delay'
     */
    rtb_Add_a = (int8_T)(BaseEngineController_A02_DWork.s316_UnitDelay_DSTATE +
                         1);

    /* Sum: '<S316>/Add' incorporates:
     *  Constant: '<S316>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S316>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S316>/Relational Operator' */
    rtb_LogicalOperator6_i = (rtb_Add_a <= rtb_Sum_l3);

    /* Switch: '<S316>/Switch' */
    if (rtb_LogicalOperator6_i) {
      rtb_Sum_l3 = rtb_Add_a;
    }

    /* End of Switch: '<S316>/Switch' */

    /* Outputs for Enabled SubSystem: '<S316>/Collect Average' incorporates:
     *  EnablePort: '<S333>/Enable'
     */
    /* Logic: '<S316>/Logical Operator' incorporates:
     *  Constant: '<S316>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S316>/Relational Operator1'
     */
    if (rtb_LogicalOperator6_i && (rtb_Add_a > 2)) {
      if (!BaseEngineController_A02_DWork.s316_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S333>/Unit Delay1' */
        BaseEngineController_A02_DWork.s333_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s316_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S333>/Sum1' incorporates:
       *  UnitDelay: '<S333>/Unit Delay1'
       */
      rtb_Product1_e = BaseEngineController_A02_B.s600_Merge +
        BaseEngineController_A02_DWork.s333_UnitDelay1_DSTATE;

      /* Product: '<S333>/Product' incorporates:
       *  DataTypeConversion: '<S333>/Data Type Conversion'
       *  Sum: '<S316>/Add1'
       */
      BaseEngineController_A02_B.s333_Product = 1.0 / (real_T)(int8_T)
        (rtb_Sum_l3 - 2) * rtb_Product1_e;

      /* Update for UnitDelay: '<S333>/Unit Delay1' */
      BaseEngineController_A02_DWork.s333_UnitDelay1_DSTATE = rtb_Product1_e;
    } else {
      if (BaseEngineController_A02_DWork.s316_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s316_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S316>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S316>/Collect Average' */

    /* Update for UnitDelay: '<S316>/Unit Delay' */
    BaseEngineController_A02_DWork.s316_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_A02_DWork.s272_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S316>/Collect Average' */
      BaseEngineController_A02_DWork.s316_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S316>/Collect Average' */
      BaseEngineController_A02_DWork.s272_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S272>/Capture IAT At Startup' */
  /* S-Function Block: <S341>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s341_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_a0 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S341>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S341>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S341>/motohawk_delta_time'
   */
  BaseEngineController_A02_B.s341_Sum = rtb_motohawk_delta_time_a0 +
    TimeSinceKeyOnTimer_DataStore();

  /* UnitDelay: '<S321>/Unit Delay1' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s321_UnitDelay1_DSTATE;

  /* Sum: '<S321>/Sum3' incorporates:
   *  Constant: '<S321>/Constant1'
   *  Product: '<S321>/Product2'
   *  Product: '<S321>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S321>/motohawk_calibration1'
   *  Sum: '<S321>/Sum2'
   */
  BaseEngineController_A02_B.s321_Sum3 = (1.0 - (PostO2DelagFiltConst_DataStore()))
    * rtb_Product1_e + (PostO2DelagFiltConst_DataStore()) *
    BaseEngineController_A02_B.s594_Merge;

  /* S-Function Block: <S538>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s538_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_b = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S538>/Product' incorporates:
   *  MinMax: '<S538>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S538>/motohawk_calibration'
   */
  rtb_Abs_b /= (rtb_Abs_b >= (FuelPresFilterConst_DataStore())) || rtIsNaN
    ((FuelPresFilterConst_DataStore())) ? rtb_Abs_b :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S510>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(21) || IsFaultActive(22));

  /* Logic: '<S510>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S510>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(21) || IsFaultSuspected(22));

  /* S-Function Block: <S356>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get(&BaseEngineController_A02_B.s356_motohawk_ain2,
      NULL);
  }

  /* DataTypeConversion: '<S510>/Data Type Conversion' */
  rtb_DataTypeConversion_om = (real_T)
    BaseEngineController_A02_B.s356_motohawk_ain2;

  /* Product: '<S510>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S510>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_DataTypeConversion_om * (FuelPresGain_DataStore());

  /* Sum: '<S510>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S510>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s510_Sum1 = rtb_Product1_e +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S510>/Unit Delay1' */
  rtb_UnitDelay1_b = BaseEngineController_A02_DWork.s510_UnitDelay1_DSTATE;

  /* If: '<S510>/If' incorporates:
   *  Logic: '<S510>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S510>/If Action Subsystem' incorporates:
     *  ActionPort: '<S539>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_b, &rtb_Merge_dm);

    /* End of Outputs for SubSystem: '<S510>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S510>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S540>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_dm);

    /* End of Outputs for SubSystem: '<S510>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S510>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S541>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s510_Sum1, &rtb_Merge_dm);

    /* End of Outputs for SubSystem: '<S510>/If Action Subsystem2' */
  }

  /* End of If: '<S510>/If' */

  /* Sum: '<S543>/Sum1' incorporates:
   *  Constant: '<S543>/Constant'
   *  Product: '<S543>/Product'
   *  Product: '<S543>/Product1'
   *  Sum: '<S543>/Sum'
   *  UnitDelay: '<S543>/Unit Delay'
   */
  rtb_Sum1_j = (1.0 - rtb_Abs_b) *
    BaseEngineController_A02_DWork.s543_UnitDelay_DSTATE + rtb_Merge_dm *
    rtb_Abs_b;

  /* If: '<S542>/If' incorporates:
   *  Inport: '<S544>/In1'
   *  Inport: '<S545>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S542>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S542>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S542>/NewValue' incorporates:
     *  ActionPort: '<S544>/Action Port'
     */
    BaseEngineController_A02_B.s542_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S542>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S542>/OldValue' incorporates:
     *  ActionPort: '<S545>/Action Port'
     */
    BaseEngineController_A02_B.s542_Merge = rtb_Sum1_j;

    /* End of Outputs for SubSystem: '<S542>/OldValue' */
  }

  /* End of If: '<S542>/If' */

  /* S-Function Block: <S554>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s554_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_b = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S554>/Product' incorporates:
   *  MinMax: '<S554>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S554>/motohawk_calibration'
   */
  rtb_Abs_b /= (rtb_Abs_b >= (MAPTimeFilterConst_DataStore())) || rtIsNaN
    ((MAPTimeFilterConst_DataStore())) ? rtb_Abs_b :
    (MAPTimeFilterConst_DataStore());

  /* Sum: '<S559>/Sum1' incorporates:
   *  Constant: '<S559>/Constant'
   *  Product: '<S559>/Product'
   *  Product: '<S559>/Product1'
   *  Sum: '<S559>/Sum'
   *  UnitDelay: '<S559>/Unit Delay'
   */
  rtb_Sum1_h = (1.0 - rtb_Abs_b) *
    BaseEngineController_A02_DWork.s559_UnitDelay_DSTATE + rtb_Merge_pk *
    rtb_Abs_b;

  /* If: '<S558>/If' incorporates:
   *  Inport: '<S560>/In1'
   *  Inport: '<S561>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S558>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S558>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S558>/NewValue' incorporates:
     *  ActionPort: '<S560>/Action Port'
     */
    BaseEngineController_A02_B.s558_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S558>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S558>/OldValue' incorporates:
     *  ActionPort: '<S561>/Action Port'
     */
    BaseEngineController_A02_B.s558_Merge = rtb_Sum1_h;

    /* End of Outputs for SubSystem: '<S558>/OldValue' */
  }

  /* End of If: '<S558>/If' */

  /* Sum: '<S320>/Sum3' incorporates:
   *  Constant: '<S320>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_A02_B.s320_Sum3 = (BaseEngineController_A02_B.s542_Merge
    + 100.0) - BaseEngineController_A02_B.s558_Merge;

  /* If: '<S365>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S365>/override_enable'
   */
  if ((Vehicle_Speed_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S365>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S360>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6046p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6046p0005,
      &messageObj);
    if ((BaseEngineController_A02_B.s360_ReadCANMessage_o1 + 1) >
        BaseEngineController_A02_B.s360_ReadCANMessage_o1)
      BaseEngineController_A02_B.s360_ReadCANMessage_o1++;
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
      BaseEngineController_A02_B.s360_ReadCANMessage_o2 = (((real_T) tmp0) /
        ((real_T) 10)) + ((real_T) -3200);
      BaseEngineController_A02_B.s360_ReadCANMessage_o3 = ((real_T) tmp1) +
        ((real_T) -32000);
      BaseEngineController_A02_B.s360_ReadCANMessage_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_A02_B.s360_ReadCANMessage_o1 = 0;
    }
  }

  /* If: '<S374>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S374>/override_enable'
   */
  if ((Status1_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S374>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S360>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6047p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6047p0005,
      &messageObj);
    if ((BaseEngineController_A02_B.s360_ReadCANMessage1_o1 + 1) >
        BaseEngineController_A02_B.s360_ReadCANMessage1_o1)
      BaseEngineController_A02_B.s360_ReadCANMessage1_o1++;
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
      BaseEngineController_A02_B.s360_ReadCANMessage1_o2 = (real_T) tmp0;
      BaseEngineController_A02_B.s360_ReadCANMessage1_o3 = (real_T) tmp1;
      BaseEngineController_A02_B.s360_ReadCANMessage1_o4 = (real_T) tmp2;
      BaseEngineController_A02_B.s360_ReadCANMessage1_o5 = (real_T) tmp3;
      BaseEngineController_A02_B.s360_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_A02_B.s360_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_A02_B.s360_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_A02_B.s360_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_A02_B.s360_ReadCANMessage1_o10 = ((real_T) tmp8) /
        ((real_T) 2);
      BaseEngineController_A02_B.s360_ReadCANMessage1_o11 = ((real_T) tmp9) /
        ((real_T) 2);
      BaseEngineController_A02_B.s360_ReadCANMessage1_o12 = ((real_T) tmp10) +
        ((real_T) -40);
      BaseEngineController_A02_B.s360_ReadCANMessage1_o13 = ((real_T) tmp11) +
        ((real_T) -40);
      BaseEngineController_A02_B.s360_ReadCANMessage1_o1 = 0;
    }
  }

  /* If: '<S376>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S376>/override_enable'
   */
  if ((Control_Mode_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S376>/If' */

  /* If: '<S377>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/override_enable'
   */
  if ((MotoringTq_Curve_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S377>/If' */

  /* If: '<S378>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S378>/override_enable'
   */
  if ((GeneratingTq_Curve_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S378>/If' */

  /* If: '<S379>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S379>/override_enable'
   */
  if ((Est_Relative_Torque_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S379>/If' */

  /* If: '<S380>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S380>/override_enable'
   */
  if ((Estimating_VBATT_Lv_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S380>/If' */

  /* If: '<S381>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S381>/override_enable'
   */
  if ((Motor_Temp_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S381>/If' */

  /* If: '<S382>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S382>/override_enable'
   */
  if ((Drive_Temp_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S382>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S360>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6048p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6048p0005,
      &messageObj);
    if ((BaseEngineController_A02_B.s360_ReadCANMessage2_o1 + 1) >
        BaseEngineController_A02_B.s360_ReadCANMessage2_o1)
      BaseEngineController_A02_B.s360_ReadCANMessage2_o1++;
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
      BaseEngineController_A02_B.s360_ReadCANMessage2_o2 = (real_T) tmp0;
      BaseEngineController_A02_B.s360_ReadCANMessage2_o3 = (real_T) tmp1;
      BaseEngineController_A02_B.s360_ReadCANMessage2_o4 = (real_T) tmp2;
      BaseEngineController_A02_B.s360_ReadCANMessage2_o5 = (real_T) tmp3;
      BaseEngineController_A02_B.s360_ReadCANMessage2_o6 = (real_T) tmp4;
      BaseEngineController_A02_B.s360_ReadCANMessage2_o7 = (real_T) tmp5;
      BaseEngineController_A02_B.s360_ReadCANMessage2_o8 = (real_T) tmp6;
      BaseEngineController_A02_B.s360_ReadCANMessage2_o9 = (real_T) tmp7;
      BaseEngineController_A02_B.s360_ReadCANMessage2_o10 = (real_T) tmp8;
      BaseEngineController_A02_B.s360_ReadCANMessage2_o11 = (real_T) tmp9;
      BaseEngineController_A02_B.s360_ReadCANMessage2_o12 = (real_T) tmp10;
      BaseEngineController_A02_B.s360_ReadCANMessage2_o13 = ((real_T) tmp11) +
        ((real_T) -40);
      BaseEngineController_A02_B.s360_ReadCANMessage2_o14 = ((real_T) tmp12) /
        ((real_T) 2);
      BaseEngineController_A02_B.s360_ReadCANMessage2_o15 = ((real_T) tmp13) /
        ((real_T) 10);
      BaseEngineController_A02_B.s360_ReadCANMessage2_o16 = ((real_T) tmp14) /
        ((real_T) 10);
      BaseEngineController_A02_B.s360_ReadCANMessage2_o1 = 0;
    }
  }

  /* If: '<S383>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S383>/override_enable'
   */
  if ((Status3_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S383>/If' */

  /* If: '<S384>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S384>/override_enable'
   */
  if ((AD_Input1_En_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S384>/If' */

  /* If: '<S385>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S385>/override_enable'
   */
  if ((XDRP_State_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S385>/If' */

  /* If: '<S386>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S386>/override_enable'
   */
  if ((Motor_Speed_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S386>/If' */

  /* If: '<S387>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S387>/override_enable'
   */
  if ((PWMOutput_State_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S387>/If' */

  /* If: '<S388>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S388>/override_enable'
   */
  if ((AD_Input2_En_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S388>/If' */

  /* If: '<S389>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S389>/override_enable'
   */
  if ((Bus_HVIL_Status_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S389>/If' */

  /* If: '<S390>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S390>/override_enable'
   */
  if ((ThreePhase_HVIL_Status_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S390>/If' */

  /* If: '<S391>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S391>/override_enable'
   */
  if ((DPos_Sens1_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S391>/If' */

  /* If: '<S392>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S392>/override_enable'
   */
  if ((DigPos_Sens2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S392>/If' */

  /* If: '<S393>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S393>/override_enable'
   */
  if ((DigPos_Sens3_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S393>/If' */

  /* If: '<S394>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S394>/override_enable'
   */
  if ((DigPos_Sens4_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S394>/If' */

  /* If: '<S395>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S395>/override_enable'
   */
  if ((DigPos_Sens5_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S395>/If' */

  /* If: '<S396>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S396>/override_enable'
   */
  if ((CtrlBoard_Temp_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S396>/If' */

  /* If: '<S397>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S397>/override_enable'
   */
  if ((HVBus_Voltage_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S397>/If' */

  /* If: '<S398>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S398>/override_enable'
   */
  if ((Keyed_Voltage_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S398>/If' */

  /* If: '<S399>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S399>/override_enable'
   */
  if ((AD_Input1_Vin_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S399>/If' */

  /* If: '<S400>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S400>/override_enable'
   */
  if ((AD_Input2_Vin_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S400>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S360>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6049p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6049p0005,
      &messageObj);
    if ((BaseEngineController_A02_B.s360_ReadCANMessage3_o1 + 1) >
        BaseEngineController_A02_B.s360_ReadCANMessage3_o1)
      BaseEngineController_A02_B.s360_ReadCANMessage3_o1++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      BaseEngineController_A02_B.s360_ReadCANMessage3_o2 = ((real_T) tmp0) /
        ((real_T) 10);
      BaseEngineController_A02_B.s360_ReadCANMessage3_o3 = ((real_T) tmp1) /
        ((real_T) 10);
      BaseEngineController_A02_B.s360_ReadCANMessage3_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_A02_B.s360_ReadCANMessage3_o1 = 0;
    }
  }

  /* If: '<S401>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S401>/override_enable'
   */
  if ((Status4_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S401>/If' */

  /* If: '<S402>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S402>/override_enable'
   */
  if ((An_PosSense1_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S402>/If' */

  /* If: '<S403>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S403>/override_enable'
   */
  if ((An_PosSense2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S403>/If' */

  /* If: '<S404>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S404>/override_enable'
   */
  if ((XDRP_Internal_Meas_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S404>/If' */

  /* If: '<S405>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S405>/override_enable'
   */
  if ((Status2_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S405>/If' */

  /* If: '<S406>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S406>/override_enable'
   */
  if ((Run_Enable_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S406>/If' */

  /* If: '<S407>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S407>/override_enable'
   */
  if ((NegativeTq_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S407>/If' */

  /* If: '<S408>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S408>/override_enable'
   */
  if ((Generating_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S408>/If' */

  /* If: '<S409>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S409>/override_enable'
   */
  if ((Phoenix_Fault_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S409>/If' */

  /* If: '<S410>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S410>/override_enable'
   */
  if ((TqLimiting_Reason_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S410>/If' */

  /* S-Function Block: <S517>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s517_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_b = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S517>/Product' incorporates:
   *  MinMax: '<S517>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S517>/motohawk_calibration'
   */
  rtb_Abs_b /= (rtb_Abs_b >= (EGRSenseFilterConst_DataStore())) || rtIsNaN
    ((EGRSenseFilterConst_DataStore())) ? rtb_Abs_b :
    (EGRSenseFilterConst_DataStore());

  /* Logic: '<S508>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(8) || IsFaultActive(9));

  /* Logic: '<S508>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S508>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(8) || IsFaultSuspected(9));

  /* S-Function Block: <S356>/motohawk_ain4 Resource: EGRPin */
  {
    extern NativeError_S EGRPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    EGRPin_AnalogInput_Get(&BaseEngineController_A02_B.s356_motohawk_ain4, NULL);
  }

  /* DataTypeConversion: '<S508>/Data Type Conversion' */
  rtb_DataTypeConversion_e = (real_T)
    BaseEngineController_A02_B.s356_motohawk_ain4;

  /* Product: '<S508>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S508>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_DataTypeConversion_e * (EGRSenseGain_DataStore());

  /* Sum: '<S508>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S508>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s508_Sum1 = rtb_Product1_e +
    (EGRSenseOfst_DataStore());

  /* UnitDelay: '<S508>/Unit Delay1' */
  rtb_UnitDelay1_g = BaseEngineController_A02_DWork.s508_UnitDelay1_DSTATE;

  /* If: '<S508>/If' incorporates:
   *  Logic: '<S508>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S508>/If Action Subsystem' incorporates:
     *  ActionPort: '<S518>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_g, &rtb_Merge_nz);

    /* End of Outputs for SubSystem: '<S508>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S508>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S519>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((EGRSenseDfltValue_DataStore()),
      &rtb_Merge_nz);

    /* End of Outputs for SubSystem: '<S508>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S508>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S520>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s508_Sum1, &rtb_Merge_nz);

    /* End of Outputs for SubSystem: '<S508>/If Action Subsystem2' */
  }

  /* End of If: '<S508>/If' */

  /* Sum: '<S522>/Sum1' incorporates:
   *  Constant: '<S522>/Constant'
   *  Product: '<S522>/Product'
   *  Product: '<S522>/Product1'
   *  Sum: '<S522>/Sum'
   *  UnitDelay: '<S522>/Unit Delay'
   */
  rtb_Sum1_i5 = (1.0 - rtb_Abs_b) *
    BaseEngineController_A02_DWork.s522_UnitDelay_DSTATE + rtb_Merge_nz *
    rtb_Abs_b;

  /* If: '<S521>/If' incorporates:
   *  Inport: '<S523>/In1'
   *  Inport: '<S524>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S521>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S521>/override_enable'
   */
  if ((EGRSense_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S521>/NewValue' incorporates:
     *  ActionPort: '<S523>/Action Port'
     */
    BaseEngineController_A02_B.s521_Merge = (EGRSense_new_DataStore());

    /* End of Outputs for SubSystem: '<S521>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S521>/OldValue' incorporates:
     *  ActionPort: '<S524>/Action Port'
     */
    BaseEngineController_A02_B.s521_Merge = rtb_Sum1_i5;

    /* End of Outputs for SubSystem: '<S521>/OldValue' */
  }

  /* End of If: '<S521>/If' */

  /* S-Function Block: <S572>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s572_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_b = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S572>/Product' incorporates:
   *  MinMax: '<S572>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S572>/motohawk_calibration'
   */
  rtb_Abs_b /= (rtb_Abs_b >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_b :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S515>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S515>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S515>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(48) || IsFaultActive(49));

  /* Logic: '<S515>/Logical Operator6' */
  rtb_LogicalOperator6_i = !rtb_RelationalOperator6_k;

  /* Logic: '<S515>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S515>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S515>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(48) || IsFaultSuspected(49));

  /* S-Function Block: <S356>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_A02_B.s356_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S515>/Data Type Conversion' */
  rtb_Abs_is = (real_T)BaseEngineController_A02_B.s356_motohawk_ain3;

  /* Product: '<S515>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S515>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_Abs_is * (SensVoltGain_DataStore());

  /* Sum: '<S515>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S515>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s515_Sum1 = rtb_Product1_e +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S515>/Unit Delay1' */
  rtb_UnitDelay1_jh = BaseEngineController_A02_DWork.s515_UnitDelay1_DSTATE;

  /* If: '<S515>/If' incorporates:
   *  Logic: '<S515>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S515>/If Action Subsystem' incorporates:
     *  ActionPort: '<S573>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_jh, &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S515>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S515>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S574>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S515>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S515>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S575>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s515_Sum1, &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S515>/If Action Subsystem2' */
  }

  /* End of If: '<S515>/If' */

  /* Sum: '<S577>/Sum1' incorporates:
   *  Constant: '<S577>/Constant'
   *  Product: '<S577>/Product'
   *  Product: '<S577>/Product1'
   *  Sum: '<S577>/Sum'
   *  UnitDelay: '<S577>/Unit Delay'
   */
  rtb_Sum1_d3 = (1.0 - rtb_Abs_b) *
    BaseEngineController_A02_DWork.s577_UnitDelay_DSTATE + rtb_Merge_l *
    rtb_Abs_b;

  /* If: '<S576>/If' incorporates:
   *  Inport: '<S578>/In1'
   *  Inport: '<S579>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S576>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S576>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S576>/NewValue' incorporates:
     *  ActionPort: '<S578>/Action Port'
     */
    BaseEngineController_A02_B.s576_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S576>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S576>/OldValue' incorporates:
     *  ActionPort: '<S579>/Action Port'
     */
    BaseEngineController_A02_B.s576_Merge = rtb_Sum1_d3;

    /* End of Outputs for SubSystem: '<S576>/OldValue' */
  }

  /* End of If: '<S576>/If' */

  /* If: '<S621>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S621>/override_enable'
   */
  if ((APP2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S621>/If' */

  /* Outputs for Enabled SubSystem: '<S351>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S352>/Enable'
   */
  if (rtb_RelationalOperator_hu) {
    /* Outputs for Function Call SubSystem: '<S3>/Diagnostics' */

    /* S-Function Block: <S258>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s258_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_id = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S246>/Logical Operator3' incorporates:
     *  Logic: '<S246>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status10'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status11'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status12'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status13'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status14'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status5'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status6'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status7'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status8'
     *  S-Function (motohawk_sfun_fault_status): '<S246>/motohawk_fault_status9'
     */
    rtb_AboveHiTarget_b = !(IsFaultActive(57) || IsFaultActive(63) ||
      IsFaultActive(58) || IsFaultActive(64) || IsFaultActive(32) ||
      IsFaultActive(33) || IsFaultActive(57) || IsFaultActive(53) ||
      IsFaultActive(54) || IsFaultActive(55) || IsFaultActive(56) ||
      IsFaultActive(59) || IsFaultActive(60) || IsFaultActive(61) ||
      IsFaultActive(62));

    /* RelationalOperator: '<S257>/RelOp' incorporates:
     *  Constant: '<S257>/Constant'
     */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s338_State == 3);

    /* RelationalOperator: '<S246>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_i = (BaseEngineController_A02_B.s323_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Switch: '<S258>/Switch' incorporates:
     *  Constant: '<S258>/Constant'
     *  Logic: '<S246>/Logical Operator4'
     *  RelationalOperator: '<S246>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S258>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S258>/motohawk_delta_time'
     *  Sum: '<S258>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator6_i &&
        (BaseEngineController_A02_B.s550_Merge > (MAP_IR_HI_DataStore()))) {
      rtb_Product1_e = rtb_motohawk_delta_time_id + MapHiFaultTimer_DataStore();
    } else {
      rtb_Product1_e = 0.0;
    }

    /* End of Switch: '<S258>/Switch' */

    /* RelationalOperator: '<S246>/Relational Operator5' incorporates:
     *  Constant: '<S246>/Constant'
     */
    rtb_RelationalOperator5_g = ((rtb_Product1_e > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S246>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(36, rtb_RelationalOperator5_g);
      UpdateFault(36);
    }

    /* S-Function Block: <S259>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s259_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_kq = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S246>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration6'
     */
    rtb_LogicalOperator6_i = (BaseEngineController_A02_B.s323_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Switch: '<S259>/Switch' incorporates:
     *  Constant: '<S259>/Constant'
     *  Logic: '<S246>/Logical Operator2'
     *  RelationalOperator: '<S246>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_data_read): '<S259>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S259>/motohawk_delta_time'
     *  Sum: '<S259>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator6_i &&
        (BaseEngineController_A02_B.s550_Merge < (MAP_IR_LO_DataStore()))) {
      rtb_Sum_iy = rtb_motohawk_delta_time_kq + MapLoFaultTimer_DataStore();
    } else {
      rtb_Sum_iy = 0.0;
    }

    /* End of Switch: '<S259>/Switch' */

    /* RelationalOperator: '<S246>/Relational Operator6' incorporates:
     *  Constant: '<S246>/Constant1'
     */
    rtb_RelationalOperator6 = ((rtb_Sum_iy > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S246>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(37, rtb_RelationalOperator6);
      UpdateFault(37);
    }

    /* S-Function Block: <S260>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s260_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_iu = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S246>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration8'
     */
    rtb_LogicalOperator6_i = (BaseEngineController_A02_B.s323_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S246>/Add' */
    rtb_UnitDelay4_bi = BaseEngineController_A02_B.s277_Sum -
      BaseEngineController_A02_B.s550_Merge;

    /* Switch: '<S260>/Switch' incorporates:
     *  Constant: '<S260>/Constant'
     *  Logic: '<S246>/Logical Operator5'
     *  RelationalOperator: '<S246>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_data_read): '<S260>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S260>/motohawk_delta_time'
     *  Sum: '<S260>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator6_i &&
        (rtb_UnitDelay4_bi < (MAP_STUCK_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_iu +
        MapStickFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S260>/Switch' */

    /* RelationalOperator: '<S246>/Relational Operator9' incorporates:
     *  Constant: '<S246>/Constant2'
     */
    rtb_RelationalOperator9_i = ((rtb_motohawk_interpolation_1d3_a > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S246>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(38, rtb_RelationalOperator9_i);
      UpdateFault(38);
    }

    /* Saturate: '<S258>/Saturation' */
    rtb_Saturation_l = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
      0.0 ? 0.0 : rtb_Product1_e;

    /* S-Function (motohawk_sfun_data_write): '<S258>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapHiFaultTimer */
    {
      MapHiFaultTimer_DataStore() = rtb_Saturation_l;
    }

    /* Saturate: '<S259>/Saturation' */
    rtb_Saturation_mk = rtb_Sum_iy >= 16000.0 ? 16000.0 : rtb_Sum_iy <= 0.0 ?
      0.0 : rtb_Sum_iy;

    /* S-Function (motohawk_sfun_data_write): '<S259>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapLoFaultTimer */
    {
      MapLoFaultTimer_DataStore() = rtb_Saturation_mk;
    }

    /* Saturate: '<S260>/Saturation' */
    rtb_Saturation_e = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S260>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapStickFaultTimer */
    {
      MapStickFaultTimer_DataStore() = rtb_Saturation_e;
    }

    /* RelationalOperator: '<S261>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration'
     */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s355_RPMInst >=
                    (BaseRevLimit_DataStore()));

    /* Sum: '<S247>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration1'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) -
      (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S261>/LT1' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s355_RPMInst <=
      rtb_motohawk_interpolation_1d3_a);

    /* CombinatorialLogic: '<S264>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_oi != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled627[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled627[rowidx + 4];
    }

    /* Switch: '<S264>/Switch1' incorporates:
     *  UnitDelay: '<S264>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_LogicalOperator4_b2 = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_LogicalOperator4_b2 =
        BaseEngineController_A02_DWork.s264_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S264>/Switch1' */

    /* Switch: '<S261>/Switch2' incorporates:
     *  Logic: '<S261>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration'
     */
    if (!rtb_LogicalOperator4_b2) {
      rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore());
    }

    /* End of Switch: '<S261>/Switch2' */

    /* RelationalOperator: '<S247>/Overspeed' */
    rtb_LogicalOperator6_i = (BaseEngineController_A02_B.s355_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S247>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (MediumRevOffset_DataStore());

    /* RelationalOperator: '<S262>/LT' */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s355_RPMInst >=
                    rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S247>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration1'
     */
    rtb_Sum_iy = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S262>/LT1' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s355_RPMInst <= rtb_Sum_iy);

    /* CombinatorialLogic: '<S265>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_oi != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled627[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled627[rowidx + 4];
    }

    /* Switch: '<S265>/Switch1' incorporates:
     *  UnitDelay: '<S265>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_Switch1_p0 = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_Switch1_p0 = BaseEngineController_A02_DWork.s265_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S265>/Switch1' */

    /* Switch: '<S262>/Switch2' incorporates:
     *  Logic: '<S262>/Logical Operator'
     */
    if (rtb_Switch1_p0) {
      rtb_motohawk_interpolation_1d3_a = rtb_Sum_iy;
    }

    /* End of Switch: '<S262>/Switch2' */

    /* RelationalOperator: '<S247>/Overspeed1' */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s355_RPMInst >
                    rtb_motohawk_interpolation_1d3_a);

    /* Logic: '<S247>/Logical Operator3' incorporates:
     *  Logic: '<S247>/Logical Operator4'
     */
    rtb_LogicalOperator3_au = ((rtb_LogicalOperator6_i && (!rtb_RelOp_oi)));

    /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(50, rtb_LogicalOperator3_au);
      UpdateFault(50);
    }

    /* Sum: '<S247>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (HardRevOffset_DataStore());

    /* RelationalOperator: '<S263>/LT' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s355_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S247>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration1'
     */
    rtb_Sum_iy = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S263>/LT1' */
    rtb_LogicalOperator3_fj = (BaseEngineController_A02_B.s355_RPMInst <=
      rtb_Sum_iy);

    /* CombinatorialLogic: '<S266>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_fj != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled627[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled627[rowidx + 4];
    }

    /* Switch: '<S266>/Switch1' incorporates:
     *  UnitDelay: '<S266>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_LogicalOperator10 = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_LogicalOperator10 =
        BaseEngineController_A02_DWork.s266_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S266>/Switch1' */

    /* Switch: '<S263>/Switch2' incorporates:
     *  Logic: '<S263>/Logical Operator'
     */
    if (rtb_LogicalOperator10) {
      rtb_motohawk_interpolation_1d3_a = rtb_Sum_iy;
    }

    /* End of Switch: '<S263>/Switch2' */

    /* RelationalOperator: '<S247>/Overspeed2' */
    rtb_LogicalOperator3_fj = (BaseEngineController_A02_B.s355_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Logic: '<S247>/Logical Operator5' incorporates:
     *  Logic: '<S247>/Logical Operator6'
     */
    rtb_LogicalOperator5_nc = ((rtb_RelOp_oi && (!rtb_LogicalOperator3_fj)));

    /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(39, rtb_LogicalOperator5_nc);
      UpdateFault(39);
    }

    /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(25, rtb_LogicalOperator3_fj);
      UpdateFault(25);
    }

    /* S-Function Block: <S268>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s268_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_p0 = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S248>/Logical Operator3' incorporates:
     *  Logic: '<S248>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S248>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S248>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_fj = !(IsFaultActive(21) || IsFaultActive(22) ||
      rtb_Merge_gl);

    /* Sum: '<S248>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = BaseEngineController_A02_B.s320_Sum3 -
      (FuelPres_DeltaTarget_DataStore());

    /* Switch: '<S268>/Switch' incorporates:
     *  Constant: '<S268>/Constant'
     *  Gain: '<S248>/invert'
     *  Logic: '<S248>/Logical Operator4'
     *  RelationalOperator: '<S248>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S268>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S268>/motohawk_delta_time'
     *  Sum: '<S268>/Sum'
     */
    if (rtb_LogicalOperator3_fj && (rtb_motohawk_interpolation_1d3_a <
         -(FuelPres_DeltaTolerance_DataStore()))) {
      rtb_Sum_iy = rtb_motohawk_delta_time_p0 + FuelPresLow_FaultTimer_DataStore
        ();
    } else {
      rtb_Sum_iy = 0.0;
    }

    /* End of Switch: '<S268>/Switch' */
    /* RelationalOperator: '<S248>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_l = ((rtb_Sum_iy > (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S248>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(20, rtb_RelationalOperator5_l);
      UpdateFault(20);
    }

    /* S-Function Block: <S267>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s267_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_iq = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S267>/Switch' incorporates:
     *  Constant: '<S267>/Constant'
     *  Logic: '<S248>/Logical Operator2'
     *  RelationalOperator: '<S248>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S267>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S267>/motohawk_delta_time'
     *  Sum: '<S267>/Sum'
     */
    if (rtb_LogicalOperator3_fj && (rtb_motohawk_interpolation_1d3_a >
         (FuelPres_DeltaTolerance_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_iq +
        FuelPresHigh_FaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S267>/Switch' */

    /* RelationalOperator: '<S248>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_e = ((rtb_motohawk_interpolation_1d3_a >
      (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S248>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(19, rtb_RelationalOperator2_e);
      UpdateFault(19);
    }

    /* Saturate: '<S267>/Saturation' */
    rtb_Saturation_lo = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S267>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresHigh_FaultTimer */
    {
      FuelPresHigh_FaultTimer_DataStore() = rtb_Saturation_lo;
    }

    /* Saturate: '<S268>/Saturation' */
    rtb_Saturation_n = rtb_Sum_iy >= 16000.0 ? 16000.0 : rtb_Sum_iy <= 0.0 ? 0.0
      : rtb_Sum_iy;

    /* S-Function (motohawk_sfun_data_write): '<S268>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresLow_FaultTimer */
    {
      FuelPresLow_FaultTimer_DataStore() = rtb_Saturation_n;
    }

    /* Logic: '<S243>/Logical Operator3' incorporates:
     *  Logic: '<S243>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S243>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S243>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_fj = !(IsFaultActive(5) || IsFaultActive(6));

    /* RelationalOperator: '<S249>/RelOp' incorporates:
     *  Constant: '<S249>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S243>/motohawk_data_read'
     */
    rtb_RelOp_oi = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S243>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S243>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S243>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_d = ((rtb_LogicalOperator3_fj && rtb_RelOp_oi &&
      (BaseEngineController_A02_B.s605_Merge >= (TempOverheat_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S243>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(4, rtb_LogicalOperator2_d);
      UpdateFault(4);
    }

    /* Logic: '<S243>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S243>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S243>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_ez = ((rtb_LogicalOperator3_fj && rtb_RelOp_oi &&
      (BaseEngineController_A02_B.s605_Merge >=
       (TempOverheatSevere_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S243>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(7, rtb_LogicalOperator4_ez);
      UpdateFault(7);
    }

    /* S-Function (motohawk_sfun_calibration): '<S243>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_a = (TempOverheat_Warn_DataStore());

    /* S-Function (motohawk_sfun_calibration): '<S251>/motohawk_calibration2' */
    rtb_motohawk_interpolation_1d3_a = (FuelEconomy_FilterC_DataStore());

    /* S-Function Block: <S251>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s251_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_interpolation_1d3_a = ((real_T) delta) * 0.000001;
    }

    /* Gain: '<S250>/Gain' */
    rtb_motohawk_interpolation_1d3_a = 0.01 *
      BaseEngineController_A02_B.s529_Merge;

    /* S-Function Block: <S255>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s255_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fr = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S245>/Logical Operator3' incorporates:
     *  Logic: '<S245>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S245>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S245>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_i = !(IsFaultActive(46) || IsFaultActive(47));

    /* RelationalOperator: '<S254>/RelOp' incorporates:
     *  Constant: '<S254>/Constant'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s338_State == 3);

    /* S-Function Block: <S245>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_a = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_a;
    }

    /* Switch: '<S255>/Switch' incorporates:
     *  Constant: '<S255>/Constant'
     *  Logic: '<S245>/Logical Operator4'
     *  RelationalOperator: '<S245>/Relational Operator2'
     *  S-Function (motohawk_sfun_data_read): '<S255>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S255>/motohawk_delta_time'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S245>/motohawk_interpolation_1d'
     *  Sum: '<S255>/Sum'
     */
    if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a &&
        (BaseEngineController_A02_B.s568_Merge < rtb_motohawk_interpolation_1d_a))
    {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_fr +
        OilPresFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S255>/Switch' */
    /* RelationalOperator: '<S245>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S245>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_ch = ((rtb_motohawk_interpolation_1d3_a >
      (NoOilPres_FaultTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S245>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(40, rtb_RelationalOperator5_ch);
      UpdateFault(40);
    }

    /* Saturate: '<S255>/Saturation' */
    rtb_Saturation_eu = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S255>/motohawk_data_write' */
    /* Write to Data Storage as scalar: OilPresFaultTimer */
    {
      OilPresFaultTimer_DataStore() = rtb_Saturation_eu;
    }

    /* S-Function Block: <S245>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_a = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s311_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_a;
    }

    /* Update for UnitDelay: '<S264>/Unit Delay' */
    BaseEngineController_A02_DWork.s264_UnitDelay_DSTATE =
      rtb_LogicalOperator4_b2;

    /* Update for UnitDelay: '<S265>/Unit Delay' */
    BaseEngineController_A02_DWork.s265_UnitDelay_DSTATE = rtb_Switch1_p0;

    /* Update for UnitDelay: '<S266>/Unit Delay' */
    BaseEngineController_A02_DWork.s266_UnitDelay_DSTATE = rtb_LogicalOperator10;

    /* End of Outputs for SubSystem: '<S3>/Diagnostics' */
  }

  /* UnitDelay: '<S289>/Unit Delay1' */
  rtb_UnitDelay1_c = BaseEngineController_A02_DWork.s289_UnitDelay1_DSTATE;

  /* UnitDelay: '<S289>/Unit Delay3' */
  rtb_UnitDelay3_a = BaseEngineController_A02_DWork.s289_UnitDelay3_DSTATE;

  /* UnitDelay: '<S289>/Unit Delay4' */
  rtb_UnitDelay4_b = BaseEngineController_A02_DWork.s289_UnitDelay4_DSTATE;

  /* UnitDelay: '<S290>/Unit Delay1' */
  rtb_UnitDelay1_l = BaseEngineController_A02_DWork.s290_UnitDelay1_DSTATE;

  /* UnitDelay: '<S290>/Unit Delay3' */
  rtb_UnitDelay3_h = BaseEngineController_A02_DWork.s290_UnitDelay3_DSTATE;

  /* UnitDelay: '<S290>/Unit Delay4' */
  rtb_UnitDelay4_g = BaseEngineController_A02_DWork.s290_UnitDelay4_DSTATE;

  /* S-Function Block: <S301>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s301_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_bh = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S301>/Sum' incorporates:
   *  Product: '<S301>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S301>/motohawk_delta_time'
   */
  rtb_Abs_b = BaseEngineController_A02_B.s298_TorquetoPower *
    rtb_motohawk_delta_time_bh + BaseEngineController_A02_B.s301_Switch1;

  /* MinMax: '<S303>/MinMax' incorporates:
   *  Constant: '<S298>/Constant'
   */
  rtb_Abs_b = rtb_Abs_b >= 0.0 ? rtb_Abs_b : 0.0;

  /* MinMax: '<S303>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S298>/motohawk_calibration'
   */
  minV = (rtb_Abs_b <= (IndWorkMax_DataStore())) || rtIsNaN
    ((IndWorkMax_DataStore())) ? rtb_Abs_b : (IndWorkMax_DataStore());

  /* S-Function (motohawk_sfun_data_write): '<S319>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_A02_B.s338_State;
  }

  /* Sum: '<S323>/Sum' */
  rtb_Abs_b = BaseEngineController_A02_B.s637_Merge -
    BaseEngineController_A02_B.s654_Merge;

  /* Abs: '<S323>/Abs' */
  rtb_Abs_b = fabs(rtb_Abs_b);

  /* RelationalOperator: '<S323>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S323>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_o = ((rtb_Abs_b > (TPS1_TPS2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S323>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(65, rtb_RelationalOperator3_o);
    UpdateFault(65);
  }

  /* Saturate: '<S341>/Saturation' */
  rtb_Saturation_dt = BaseEngineController_A02_B.s341_Sum >= 16000.0 ? 16000.0 :
    BaseEngineController_A02_B.s341_Sum <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s341_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S341>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_dt;
  }

  /* Saturate: '<S343>/Saturation' */
  rtb_Saturation_o = BaseEngineController_A02_B.s343_Switch >= 16000.0 ? 16000.0
    : BaseEngineController_A02_B.s343_Switch <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s343_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S343>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_o;
  }

  /* Saturate: '<S345>/Saturation' */
  rtb_Saturation_ot = BaseEngineController_A02_B.s345_Switch >= 16000.0 ?
    16000.0 : BaseEngineController_A02_B.s345_Switch <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s345_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S345>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_ot;
  }

  /* Switch: '<S351>/Switch' incorporates:
   *  Constant: '<S351>/Constant2'
   */
  if (rtb_RelationalOperator_hu) {
    rtb_Switch_a = 0U;
  } else {
    rtb_Switch_a = rtb_Sum_l0;
  }

  /* End of Switch: '<S351>/Switch' */

  /* UnitDelay: '<S366>/Unit Delay' */
  BaseEngineController_A02_B.s366_UnitDelay =
    BaseEngineController_A02_DWork.s366_UnitDelay_DSTATE;

  /* RelationalOperator: '<S361>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S361>/motohawk_calibration'
   */
  rtb_LogicalOperator6_i = (BaseEngineController_A02_B.s366_UnitDelay <
    (ONTime_DataStore()));

  /* Switch: '<S359>/Switch' incorporates:
   *  Constant: '<S359>/Constant'
   *  Logic: '<S359>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S359>/motohawk_calibration'
   */
  if ((Disable_ESTOP_DataStore()) > 0.0) {
    rtb_LogicalOperator1_a = TRUE;
  } else {
    rtb_LogicalOperator1_a = !(rtb_Merge_p != 0.0);
  }

  /* End of Switch: '<S359>/Switch' */

  /* MATLAB Function Block: '<S359>/MATLAB Function' */

  /* MATLAB Function 'Foreground/Inputs/CAN Inputs/112/MATLAB Function': '<S362>:1' */
  if (rtb_LogicalOperator6_i == TRUE) {
    /* '<S362>:1:3' */
    /* '<S362>:1:4' */
    rtb_Product1_e = 0.0;
  } else if (rtb_LogicalOperator1_a == TRUE) {
    /* '<S362>:1:5' */
    /* '<S362>:1:6' */
    rtb_Product1_e = 0.0;
  } else {
    /* '<S362>:1:8' */
    rtb_Product1_e = 1.0;
  }

  /* End of MATLAB Function Block: '<S359>/MATLAB Function' */

  /* DataTypeConversion: '<S359>/Data Type Conversion2' */
  rtb_RelationalOperator6_k = (rtb_Product1_e != 0.0);

  /* S-Function (motohawk_sfun_data_write): '<S359>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ESTOP */
  {
    ESTOP_DataStore() = rtb_RelationalOperator6_k;
  }

  /* S-Function Block: <S366>/motohawk_delta_time */
  rtb_motohawk_delta_time_ae = 0.005;

  /* Sum: '<S366>/Sum' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S366>/motohawk_delta_time'
   */
  rtb_DesiredLambda_idx = rtb_motohawk_delta_time_ae +
    BaseEngineController_A02_B.s366_UnitDelay;

  /* S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration' */
  rtb_Abs_b = (Torque_Filter_DataStore());

  /* S-Function Block: <S373>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s373_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_b = ((real_T) delta) * 0.000001;
  }

  /* If: '<S375>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S375>/override_enable'
   */
  if ((Est_Absolute_Torque_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S375>/If' */

  /* Logic: '<S486>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S486>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S486>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S486>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_m = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s354_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S486>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator2_m);
    UpdateFault(30);
  }

  /* Logic: '<S486>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S486>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S486>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S486>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_h = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s354_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S486>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(31, rtb_LogicalOperator3_h);
    UpdateFault(31);
  }

  /* RelationalOperator: '<S355>/Relational Operator' incorporates:
   *  Constant: '<S355>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S355>/motohawk_calibration'
   */
  rtb_RelationalOperator_mm = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S355>/motohawk_encoder_pseudo */
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

  /* DataTypeConversion: '<S355>/Data Type Conversion3' incorporates:
   *  Gain: '<S355>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S355>/motohawk_calibration1'
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

  /* End of DataTypeConversion: '<S355>/Data Type Conversion3' */
  /* S-Function Block: <S355>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_p;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S503>/RelOp' incorporates:
   *  Constant: '<S503>/Constant'
   */
  rtb_RelationalOperator6_k = (BaseEngineController_A02_B.s506_Sum > 100U);

  /* S-Function Block: <S355>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_A02_B.s355_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S499>/Logical Operator' incorporates:
   *  Constant: '<S505>/Constant'
   *  RelationalOperator: '<S505>/RelOp'
   */
  rtb_LogicalOperator_kt = ((rtb_RelationalOperator6_k &&
    (BaseEngineController_A02_B.s355_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator_kt);
    UpdateFault(3);
  }

  /* Logic: '<S499>/Logical Operator1' incorporates:
   *  Constant: '<S504>/Constant'
   *  RelationalOperator: '<S504>/RelOp'
   */
  rtb_LogicalOperator1_hh = ((rtb_RelationalOperator6_k &&
    (BaseEngineController_A02_B.s355_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator1_hh);
    UpdateFault(2);
  }

  /* Logic: '<S499>/Logical Operator2' incorporates:
   *  Constant: '<S501>/Constant'
   *  RelationalOperator: '<S501>/RelOp'
   */
  rtb_LogicalOperator2_nh = ((rtb_RelationalOperator6_k &&
    (BaseEngineController_A02_B.s355_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(0, rtb_LogicalOperator2_nh);
    UpdateFault(0);
  }

  /* Logic: '<S499>/Logical Operator3' incorporates:
   *  Constant: '<S502>/Constant'
   *  RelationalOperator: '<S502>/RelOp'
   */
  rtb_LogicalOperator3_ho = ((rtb_RelationalOperator6_k &&
    (BaseEngineController_A02_B.s355_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(1, rtb_LogicalOperator3_ho);
    UpdateFault(1);
  }

  /* S-Function Block: <S355>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_A02_B.s355_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S508>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S508>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S508>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S508>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_is = ((MPRD_DataStore() && (rtb_DataTypeConversion_e >
    (EGRSenseInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S508>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: EGRSenseRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_LogicalOperator2_is);
    UpdateFault(8);
  }

  /* Logic: '<S508>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S508>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S508>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S508>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_o = ((MPRD_DataStore() && (rtb_DataTypeConversion_e <
    (EGRSenseInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S508>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: EGRSenseRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_LogicalOperator3_o);
    UpdateFault(9);
  }

  /* Logic: '<S509>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S509>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S509>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S509>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_mq = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s356_Gain > (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S509>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_LogicalOperator2_mq);
    UpdateFault(23);
  }

  /* Logic: '<S509>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S509>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S509>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S509>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_a5 = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s356_Gain < (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S509>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_LogicalOperator3_a5);
    UpdateFault(24);
  }

  /* Logic: '<S510>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S510>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S510>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S510>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_it = ((MPRD_DataStore() && (rtb_DataTypeConversion_om >
    (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S510>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_LogicalOperator2_it);
    UpdateFault(21);
  }

  /* Logic: '<S510>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S510>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S510>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S510>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_fk = ((MPRD_DataStore() && (rtb_DataTypeConversion_om <
    (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S510>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_LogicalOperator3_fk);
    UpdateFault(22);
  }

  /* Logic: '<S511>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S511>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S511>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ir = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s513_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S511>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_LogicalOperator2_ir);
    UpdateFault(32);
  }

  /* Logic: '<S511>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S511>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S511>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_k = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s513_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S511>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(33, rtb_LogicalOperator3_k);
    UpdateFault(33);
  }

  /* Logic: '<S512>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S512>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S512>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S512>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_bq = ((MPRD_DataStore() && (rtb_DataTypeConversion_ff >
    (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S512>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(34, rtb_LogicalOperator2_bq);
    UpdateFault(34);
  }

  /* Logic: '<S512>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S512>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S512>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S512>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_ff <
    (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S512>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(35, rtb_LogicalOperator3_p);
    UpdateFault(35);
  }

  /* Logic: '<S514>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S514>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S514>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S514>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_a = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_f5 > (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S514>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(46, rtb_LogicalOperator2_a);
    UpdateFault(46);
  }

  /* Logic: '<S514>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S514>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S514>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S514>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_c = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_f5 < (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S514>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(47, rtb_LogicalOperator3_c);
    UpdateFault(47);
  }

  /* Logic: '<S515>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S515>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S515>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S515>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_Abs_is >
    (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S515>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(48, rtb_LogicalOperator2_p);
    UpdateFault(48);
  }

  /* Logic: '<S515>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S515>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S515>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S515>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_g = ((MPRD_DataStore() && (rtb_Abs_is <
    (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S515>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(49, rtb_LogicalOperator3_g);
    UpdateFault(49);
  }

  /* Logic: '<S516>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S516>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S516>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S516>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_n1 = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_kk > (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S516>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(51, rtb_LogicalOperator2_n1);
    UpdateFault(51);
  }

  /* Logic: '<S516>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S516>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S516>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S516>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_i = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_kk < (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S516>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(52, rtb_LogicalOperator3_i);
    UpdateFault(52);
  }

  /* Logic: '<S588>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S588>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S588>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S588>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p0 = ((MPRD_DataStore() && (rtb_DataTypeConversion_m >
    (O2_PostCatMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S588>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: O2_PostCatRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(44, rtb_LogicalOperator2_p0);
    UpdateFault(44);
  }

  /* Logic: '<S588>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S588>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S588>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S588>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_pg = ((MPRD_DataStore() && (rtb_DataTypeConversion_m <
    (O2_PostCatMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S588>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: O2_PostCatRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(45, rtb_LogicalOperator3_pg);
    UpdateFault(45);
  }

  /* RelationalOperator: '<S624>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S624>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_i = ((BaseEngineController_A02_B.s619_Switch >
    (TPS1InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S624>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(57, rtb_RelationalOperator5_i);
    UpdateFault(57);
  }

  /* RelationalOperator: '<S624>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S624>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_o = ((BaseEngineController_A02_B.s619_Switch <
    (TPS1InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S624>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(58, rtb_RelationalOperator4_o);
    UpdateFault(58);
  }

  /* RelationalOperator: '<S624>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration9'
   */
  rtb_RelationalOperator_f = ((BaseEngineController_A02_B.s623_MinMax >
    (TPS1Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S624>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS1AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(55, rtb_RelationalOperator_f);
    UpdateFault(55);
  }

  /* RelationalOperator: '<S624>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_f1 = ((BaseEngineController_A02_B.s623_MinMax1 >
    (TPS1Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S624>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(53, rtb_RelationalOperator3_f1);
    UpdateFault(53);
  }

  /* RelationalOperator: '<S624>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_b = ((BaseEngineController_A02_B.s623_MinMax1 <
    (TPS1Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S624>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(54, rtb_RelationalOperator2_b);
    UpdateFault(54);
  }

  /* RelationalOperator: '<S624>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_kg = ((BaseEngineController_A02_B.s623_MinMax <
    (TPS1Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S624>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS1AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(56, rtb_RelationalOperator1_kg);
    UpdateFault(56);
  }

  /* UnitDelay: '<S630>/Unit Delay1' */
  rtb_Abs_is = BaseEngineController_A02_DWork.s630_UnitDelay1_DSTATE;

  /* UnitDelay: '<S630>/Unit Delay' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s630_UnitDelay_DSTATE;

  /* UnitDelay: '<S630>/Unit Delay3' */
  rtb_Sum_iy = BaseEngineController_A02_DWork.s630_UnitDelay3_DSTATE;

  /* UnitDelay: '<S630>/Unit Delay4' */
  rtb_UnitDelay4_bi = BaseEngineController_A02_DWork.s630_UnitDelay4_DSTATE;

  /* MinMax: '<S630>/MinMax1' incorporates:
   *  UnitDelay: '<S630>/Unit Delay'
   *  UnitDelay: '<S630>/Unit Delay1'
   *  UnitDelay: '<S630>/Unit Delay3'
   *  UnitDelay: '<S630>/Unit Delay4'
   */
  y = (BaseEngineController_A02_DWork.s630_UnitDelay1_DSTATE <=
       BaseEngineController_A02_DWork.s630_UnitDelay_DSTATE) || rtIsNaN
    (BaseEngineController_A02_DWork.s630_UnitDelay_DSTATE) ?
    BaseEngineController_A02_DWork.s630_UnitDelay1_DSTATE :
    BaseEngineController_A02_DWork.s630_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_A02_DWork.s630_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_A02_DWork.s630_UnitDelay3_DSTATE) ? y :
    BaseEngineController_A02_DWork.s630_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_A02_DWork.s630_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_A02_DWork.s630_UnitDelay4_DSTATE) ? y :
    BaseEngineController_A02_DWork.s630_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_A02_B.s619_Switch) || rtIsNaN
    (BaseEngineController_A02_B.s619_Switch) ? y :
    BaseEngineController_A02_B.s619_Switch;

  /* RelationalOperator: '<S628>/Relational Operator9' incorporates:
   *  MinMax: '<S630>/MinMax1'
   */
  rtb_LogicalOperator6_i = (y > BaseEngineController_A02_B.s623_MinMax1);

  /* RelationalOperator: '<S628>/Relational Operator5' incorporates:
   *  MinMax: '<S630>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration12'
   */
  rtb_RelationalOperator6_k = (y <= (TPS1Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S628>/Relational Operator6' incorporates:
   *  MinMax: '<S630>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration11'
   */
  rtb_LogicalOperator1_a = (y >= (TPS1Adapt_Hi_Min_DataStore()));

  /* Sum: '<S628>/Sum2' incorporates:
   *  MinMax: '<S630>/MinMax1'
   */
  rtb_Abs_b = y - BaseEngineController_A02_B.s623_MinMax1;

  /* Abs: '<S628>/Abs' */
  rtb_Abs_b = fabs(rtb_Abs_b);

  /* Outputs for Enabled SubSystem: '<S628>/Store Current Position' incorporates:
   *  EnablePort: '<S631>/Enable'
   */
  /* Logic: '<S628>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S628>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S623>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S623>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_i && rtb_RelationalOperator6_k &&
      rtb_LogicalOperator1_a && (TPS1AdaptHiEnable_DataStore()) && (rtb_Abs_b >
       (TPS1Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S631>/Data Type Conversion2' incorporates:
     *  MinMax: '<S630>/MinMax1'
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

    /* End of DataTypeConversion: '<S631>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S631>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Hi */
    {
      TPS1Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_m;
    }
  }

  /* End of Logic: '<S628>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S628>/Store Current Position' */

  /* MinMax: '<S630>/MinMax' */
  y = (BaseEngineController_A02_B.s619_Switch >= rtb_UnitDelay4_bi) || rtIsNaN
    (rtb_UnitDelay4_bi) ? BaseEngineController_A02_B.s619_Switch :
    rtb_UnitDelay4_bi;
  y = (y >= rtb_Sum_iy) || rtIsNaN(rtb_Sum_iy) ? y : rtb_Sum_iy;
  y = (y >= rtb_Product1_e) || rtIsNaN(rtb_Product1_e) ? y : rtb_Product1_e;
  y = (y >= rtb_Abs_is) || rtIsNaN(rtb_Abs_is) ? y : rtb_Abs_is;

  /* RelationalOperator: '<S629>/Relational Operator9' incorporates:
   *  MinMax: '<S630>/MinMax'
   */
  rtb_LogicalOperator6_i = (y < BaseEngineController_A02_B.s623_MinMax);

  /* RelationalOperator: '<S629>/Relational Operator5' incorporates:
   *  MinMax: '<S630>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration9'
   */
  rtb_LogicalOperator1_a = (y <= (TPS1Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S629>/Relational Operator6' incorporates:
   *  MinMax: '<S630>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_k = (y >= (TPS1Adapt_Low_Min_DataStore()));

  /* Sum: '<S629>/Sum2' incorporates:
   *  MinMax: '<S630>/MinMax'
   */
  rtb_Abs_is = y - BaseEngineController_A02_B.s623_MinMax;

  /* Abs: '<S629>/Abs' */
  rtb_Abs_is = fabs(rtb_Abs_is);

  /* Logic: '<S629>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S629>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S623>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S623>/motohawk_calibration14'
   */
  rtb_LogicalOperator6_i = (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a &&
    rtb_RelationalOperator6_k && (TPS1AdaptLoEnable_DataStore()) && (rtb_Abs_is >
                             (TPS1Adapt_Delta_DataStore())));

  /* Outputs for Enabled SubSystem: '<S629>/Store Current Position' incorporates:
   *  EnablePort: '<S632>/Enable'
   */
  /* Logic: '<S629>/Logical Operator2' incorporates:
   *  Logic: '<S629>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S623>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read'
   */
  if (rtb_LogicalOperator6_i || (rtb_LogicalOperator1_a &&
       rtb_RelationalOperator6_k && (TPS1AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S632>/Data Type Conversion2' incorporates:
     *  MinMax: '<S630>/MinMax'
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

    /* End of DataTypeConversion: '<S632>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S632>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Low */
    {
      TPS1Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_lz;
    }
  }

  /* End of Logic: '<S629>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S629>/Store Current Position' */

  /* RelationalOperator: '<S641>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S641>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_c = ((BaseEngineController_A02_B.s620_Switch >
    (TPS2InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S641>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_RelationalOperator5_c);
    UpdateFault(63);
  }

  /* RelationalOperator: '<S641>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S641>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_f = ((BaseEngineController_A02_B.s620_Switch <
    (TPS2InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S641>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(64, rtb_RelationalOperator4_f);
    UpdateFault(64);
  }

  /* RelationalOperator: '<S641>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration9'
   */
  rtb_RelationalOperator_a1 = ((BaseEngineController_A02_B.s640_MinMax >
    (TPS2Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S641>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS2AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_RelationalOperator_a1);
    UpdateFault(61);
  }

  /* RelationalOperator: '<S641>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_bm = ((BaseEngineController_A02_B.s640_MinMax1 >
    (TPS2Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S641>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(59, rtb_RelationalOperator3_bm);
    UpdateFault(59);
  }

  /* RelationalOperator: '<S641>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_ly = ((BaseEngineController_A02_B.s640_MinMax1 <
    (TPS2Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S641>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_RelationalOperator2_ly);
    UpdateFault(60);
  }

  /* RelationalOperator: '<S641>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_i = ((BaseEngineController_A02_B.s640_MinMax <
    (TPS2Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S641>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS2AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_RelationalOperator1_i);
    UpdateFault(62);
  }

  /* UnitDelay: '<S647>/Unit Delay1' */
  rtb_Abs_is = BaseEngineController_A02_DWork.s647_UnitDelay1_DSTATE;

  /* UnitDelay: '<S647>/Unit Delay' */
  rtb_Sum1_gje = BaseEngineController_A02_DWork.s647_UnitDelay_DSTATE;

  /* UnitDelay: '<S647>/Unit Delay3' */
  rtb_Merge_c5 = BaseEngineController_A02_DWork.s647_UnitDelay3_DSTATE;

  /* UnitDelay: '<S647>/Unit Delay4' */
  rtb_Sum2_d0 = BaseEngineController_A02_DWork.s647_UnitDelay4_DSTATE;

  /* MinMax: '<S647>/MinMax1' incorporates:
   *  UnitDelay: '<S647>/Unit Delay'
   *  UnitDelay: '<S647>/Unit Delay1'
   *  UnitDelay: '<S647>/Unit Delay3'
   *  UnitDelay: '<S647>/Unit Delay4'
   */
  y = (BaseEngineController_A02_DWork.s647_UnitDelay1_DSTATE <=
       BaseEngineController_A02_DWork.s647_UnitDelay_DSTATE) || rtIsNaN
    (BaseEngineController_A02_DWork.s647_UnitDelay_DSTATE) ?
    BaseEngineController_A02_DWork.s647_UnitDelay1_DSTATE :
    BaseEngineController_A02_DWork.s647_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_A02_DWork.s647_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_A02_DWork.s647_UnitDelay3_DSTATE) ? y :
    BaseEngineController_A02_DWork.s647_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_A02_DWork.s647_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_A02_DWork.s647_UnitDelay4_DSTATE) ? y :
    BaseEngineController_A02_DWork.s647_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_A02_B.s620_Switch) || rtIsNaN
    (BaseEngineController_A02_B.s620_Switch) ? y :
    BaseEngineController_A02_B.s620_Switch;

  /* RelationalOperator: '<S645>/Relational Operator9' incorporates:
   *  MinMax: '<S647>/MinMax1'
   */
  rtb_LogicalOperator6_i = (y > BaseEngineController_A02_B.s640_MinMax1);

  /* RelationalOperator: '<S645>/Relational Operator5' incorporates:
   *  MinMax: '<S647>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration12'
   */
  rtb_LogicalOperator1_a = (y <= (TPS2Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S645>/Relational Operator6' incorporates:
   *  MinMax: '<S647>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_k = (y >= (TPS2Adapt_Hi_Min_DataStore()));

  /* Sum: '<S645>/Sum2' incorporates:
   *  MinMax: '<S647>/MinMax1'
   */
  rtb_Abs_b = y - BaseEngineController_A02_B.s640_MinMax1;

  /* Abs: '<S645>/Abs' */
  rtb_Abs_b = fabs(rtb_Abs_b);

  /* Outputs for Enabled SubSystem: '<S645>/Store Current Position' incorporates:
   *  EnablePort: '<S648>/Enable'
   */
  /* Logic: '<S645>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S645>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_i && rtb_LogicalOperator1_a &&
      rtb_RelationalOperator6_k && (TPS2AdaptHiEnable_DataStore()) && (rtb_Abs_b
       > (TPS2Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S648>/Data Type Conversion2' incorporates:
     *  MinMax: '<S647>/MinMax1'
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

    /* End of DataTypeConversion: '<S648>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S648>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Hi */
    {
      TPS2Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_h;
    }
  }

  /* End of Logic: '<S645>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S645>/Store Current Position' */

  /* MinMax: '<S647>/MinMax' */
  y = (BaseEngineController_A02_B.s620_Switch >= rtb_Sum2_d0) || rtIsNaN
    (rtb_Sum2_d0) ? BaseEngineController_A02_B.s620_Switch : rtb_Sum2_d0;
  y = (y >= rtb_Merge_c5) || rtIsNaN(rtb_Merge_c5) ? y : rtb_Merge_c5;
  y = (y >= rtb_Sum1_gje) || rtIsNaN(rtb_Sum1_gje) ? y : rtb_Sum1_gje;
  y = (y >= rtb_Abs_is) || rtIsNaN(rtb_Abs_is) ? y : rtb_Abs_is;

  /* RelationalOperator: '<S646>/Relational Operator9' incorporates:
   *  MinMax: '<S647>/MinMax'
   */
  rtb_LogicalOperator6_i = (y < BaseEngineController_A02_B.s640_MinMax);

  /* RelationalOperator: '<S646>/Relational Operator5' incorporates:
   *  MinMax: '<S647>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration9'
   */
  rtb_LogicalOperator1_a = (y <= (TPS2Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S646>/Relational Operator6' incorporates:
   *  MinMax: '<S647>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_k = (y >= (TPS2Adapt_Low_Min_DataStore()));

  /* Sum: '<S646>/Sum2' incorporates:
   *  MinMax: '<S647>/MinMax'
   */
  rtb_Abs_is = y - BaseEngineController_A02_B.s640_MinMax;

  /* Abs: '<S646>/Abs' */
  rtb_Abs_is = fabs(rtb_Abs_is);

  /* Outputs for Enabled SubSystem: '<S646>/Store Current Position' incorporates:
   *  EnablePort: '<S649>/Enable'
   */
  /* Logic: '<S646>/Logical Operator2' incorporates:
   *  Logic: '<S646>/Logical Operator1'
   *  Logic: '<S646>/Logical Operator4'
   *  RelationalOperator: '<S646>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read'
   */
  if ((rtb_LogicalOperator6_i && rtb_LogicalOperator1_a &&
       rtb_RelationalOperator6_k && (TPS2AdaptLoEnable_DataStore()) &&
       (rtb_Abs_is > (TPS2Adapt_Delta_DataStore()))) || (rtb_LogicalOperator1_a &&
       rtb_RelationalOperator6_k && (TPS2AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S649>/Data Type Conversion2' incorporates:
     *  MinMax: '<S647>/MinMax'
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

    /* End of DataTypeConversion: '<S649>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S649>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Low */
    {
      TPS2Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_n;
    }
  }

  /* End of Logic: '<S646>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S646>/Store Current Position' */

  /* Update for UnitDelay: '<S514>/Unit Delay1' */
  BaseEngineController_A02_DWork.s514_UnitDelay1_DSTATE = rtb_Merge_bw;

  /* Update for UnitDelay: '<S569>/Unit Delay' */
  BaseEngineController_A02_DWork.s569_UnitDelay_DSTATE = rtb_Sum1_i;

  /* Update for UnitDelay: '<S507>/Unit Delay' */
  BaseEngineController_A02_DWork.s507_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s507_Sum1;

  /* Update for UnitDelay: '<S319>/Unit Delay' */
  BaseEngineController_A02_DWork.s319_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s338_State;

  /* Update for UnitDelay: '<S516>/Unit Delay1' */
  BaseEngineController_A02_DWork.s516_UnitDelay1_DSTATE = rtb_Merge_cs;

  /* Update for UnitDelay: '<S585>/Unit Delay' */
  BaseEngineController_A02_DWork.s585_UnitDelay_DSTATE = rtb_Sum1_gj;

  /* Update for UnitDelay: '<S633>/Unit Delay' */
  BaseEngineController_A02_DWork.s633_UnitDelay_DSTATE = rtb_Sum1_m2;

  /* Update for UnitDelay: '<S626>/Unit Delay1' */
  BaseEngineController_A02_DWork.s626_UnitDelay1_DSTATE = rtb_Merge_h;

  /* Update for UnitDelay: '<S650>/Unit Delay' */
  BaseEngineController_A02_DWork.s650_UnitDelay_DSTATE = rtb_Sum1_dp;

  /* Update for UnitDelay: '<S643>/Unit Delay1' */
  BaseEngineController_A02_DWork.s643_UnitDelay1_DSTATE = rtb_Merge_py;

  /* Update for UnitDelay: '<S321>/Unit Delay' */
  BaseEngineController_A02_DWork.s321_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s594_Merge;

  /* Update for UnitDelay: '<S588>/Unit Delay' */
  BaseEngineController_A02_DWork.s588_UnitDelay_DSTATE = rtb_Merge_dh;

  /* Update for UnitDelay: '<S596>/Unit Delay' */
  BaseEngineController_A02_DWork.s596_UnitDelay_DSTATE = rtb_Sum1_kq;

  /* Update for UnitDelay: '<S512>/Unit Delay1' */
  BaseEngineController_A02_DWork.s512_UnitDelay1_DSTATE = rtb_Merge_pk;

  /* Update for UnitDelay: '<S277>/Unit Delay' */
  BaseEngineController_A02_DWork.s277_UnitDelay_DSTATE = rtb_Merge_kp;

  /* Update for UnitDelay: '<S511>/Unit Delay1' */
  BaseEngineController_A02_DWork.s511_UnitDelay1_DSTATE = rtb_Merge_bn;

  /* Update for UnitDelay: '<S551>/Unit Delay' */
  BaseEngineController_A02_DWork.s551_UnitDelay_DSTATE = rtb_Sum1_pb;

  /* Update for UnitDelay: '<S486>/Unit Delay' */
  BaseEngineController_A02_DWork.s486_UnitDelay_DSTATE = rtb_Merge_j;

  /* Update for UnitDelay: '<S494>/Unit Delay' */
  BaseEngineController_A02_DWork.s494_UnitDelay_DSTATE = rtb_Sum1_f;

  /* Update for UnitDelay: '<S289>/Unit Delay2' */
  BaseEngineController_A02_DWork.s289_UnitDelay2_DSTATE = rtb_UnitDelay1_c;

  /* Update for UnitDelay: '<S292>/Unit Delay' */
  BaseEngineController_A02_DWork.s292_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s292_Sum1;

  /* Update for UnitDelay: '<S290>/Unit Delay2' */
  BaseEngineController_A02_DWork.s290_UnitDelay2_DSTATE = rtb_UnitDelay1_l;

  /* Update for UnitDelay: '<S295>/Unit Delay' */
  BaseEngineController_A02_DWork.s295_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s295_Sum1;

  /* Update for UnitDelay: '<S288>/Unit Delay' */
  BaseEngineController_A02_DWork.s288_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s306_MinMax1;

  /* Update for UnitDelay: '<S335>/Unit Delay' */
  BaseEngineController_A02_DWork.s335_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s507_Sum1;

  /* Update for UnitDelay: '<S337>/Unit Delay' */
  BaseEngineController_A02_DWork.s337_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s337_Sum1;

  /* Update for UnitDelay: '<S534>/Unit Delay' */
  BaseEngineController_A02_DWork.s534_UnitDelay_DSTATE = rtb_Sum2_n;

  /* Update for UnitDelay: '<S509>/Unit Delay1' */
  BaseEngineController_A02_DWork.s509_UnitDelay1_DSTATE = rtb_Merge_k1;

  /* Update for UnitDelay: '<S533>/Unit Delay' */
  BaseEngineController_A02_DWork.s533_UnitDelay_DSTATE = rtb_Sum1_da;

  /* Update for UnitDelay: '<S531>/Unit Delay' */
  BaseEngineController_A02_DWork.s531_UnitDelay_DSTATE = rtb_Merge_k1;

  /* Update for UnitDelay: '<S531>/Unit Delay1' */
  BaseEngineController_A02_DWork.s531_UnitDelay1_DSTATE = rtb_UnitDelay_li;

  /* Update for UnitDelay: '<S531>/Unit Delay2' */
  BaseEngineController_A02_DWork.s531_UnitDelay2_DSTATE = rtb_UnitDelay1_e;

  /* Update for Enabled SubSystem: '<S7>/Run' incorporates:
   *  Update for EnablePort: '<S115>/Enable'
   */
  if (BaseEngineController_A02_DWork.s7_Run_MODE) {
  }

  /* End of Update for SubSystem: '<S7>/Run' */

  /* Update for S-Function (motohawk_sfun_dout): '<S663>/motohawk_dout' */

  /* S-Function Block: DOut7269p0001 */
  {
    DOut7269p0001_DiscreteOutput_Set
      (BaseEngineController_A02_B.s749_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S664>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_n,
    rtb_DataTypeConversion4_k, 0, 1);

  /* Update for UnitDelay: '<S67>/Unit Delay' */
  BaseEngineController_A02_DWork.s67_UnitDelay_DSTATE = rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S66>/Unit Delay' */
  BaseEngineController_A02_DWork.s66_UnitDelay_DSTATE = rtb_Merge_mj;

  /* Update for UnitDelay: '<S64>/Unit Delay' */
  BaseEngineController_A02_DWork.s64_UnitDelay_DSTATE = rtb_Merge_n;

  /* Update for UnitDelay: '<S63>/Unit Delay' */
  BaseEngineController_A02_DWork.s63_UnitDelay_DSTATE = rtb_Merge_fc;

  /* Update for UnitDelay: '<S62>/Unit Delay' */
  BaseEngineController_A02_DWork.s62_UnitDelay_DSTATE = rtb_Merge_p2;

  /* Update for UnitDelay: '<S61>/Unit Delay' */
  BaseEngineController_A02_DWork.s61_UnitDelay_DSTATE = rtb_Merge_b0;

  /* Update for UnitDelay: '<S60>/Unit Delay' */
  BaseEngineController_A02_DWork.s60_UnitDelay_DSTATE = rtb_Merge_f3;

  /* Update for UnitDelay: '<S59>/Unit Delay' */
  BaseEngineController_A02_DWork.s59_UnitDelay_DSTATE = rtb_Merge_iu;

  /* Update for UnitDelay: '<S65>/Unit Delay' */
  memcpy((void *)BaseEngineController_A02_DWork.s65_UnitDelay_DSTATE, (void *)
         &rtb_Merge_pj[0], sizeof(real_T) << 3U);

  /* Update for S-Function (motohawk_sfun_dout): '<S666>/motohawk_dout' */

  /* S-Function Block: DOut7547p0001 */
  {
    DOut7547p0001_DiscreteOutput_Set
      (BaseEngineController_A02_B.s777_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S667>/motohawk_dout' */

  /* S-Function Block: DOut7557p0001 */
  {
    DOut7557p0001_DiscreteOutput_Set
      (BaseEngineController_A02_B.s781_LogicalOperator);
  }

  /* Update for UnitDelay: '<S351>/Unit Delay' */
  BaseEngineController_A02_DWork.s351_UnitDelay_DSTATE = rtb_Switch_a;

  /* Update for UnitDelay: '<S301>/Unit Delay' incorporates:
   *  MinMax: '<S303>/MinMax1'
   */
  BaseEngineController_A02_DWork.s301_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S321>/Unit Delay1' */
  BaseEngineController_A02_DWork.s321_UnitDelay1_DSTATE =
    BaseEngineController_A02_B.s594_Merge;

  /* Update for UnitDelay: '<S510>/Unit Delay1' */
  BaseEngineController_A02_DWork.s510_UnitDelay1_DSTATE = rtb_Merge_dm;

  /* Update for UnitDelay: '<S543>/Unit Delay' */
  BaseEngineController_A02_DWork.s543_UnitDelay_DSTATE = rtb_Sum1_j;

  /* Update for UnitDelay: '<S559>/Unit Delay' */
  BaseEngineController_A02_DWork.s559_UnitDelay_DSTATE = rtb_Sum1_h;

  /* Update for UnitDelay: '<S508>/Unit Delay1' */
  BaseEngineController_A02_DWork.s508_UnitDelay1_DSTATE = rtb_Merge_nz;

  /* Update for UnitDelay: '<S522>/Unit Delay' */
  BaseEngineController_A02_DWork.s522_UnitDelay_DSTATE = rtb_Sum1_i5;

  /* Update for UnitDelay: '<S515>/Unit Delay1' */
  BaseEngineController_A02_DWork.s515_UnitDelay1_DSTATE = rtb_Merge_l;

  /* Update for UnitDelay: '<S577>/Unit Delay' */
  BaseEngineController_A02_DWork.s577_UnitDelay_DSTATE = rtb_Sum1_d3;

  /* Update for UnitDelay: '<S289>/Unit Delay1' */
  BaseEngineController_A02_DWork.s289_UnitDelay1_DSTATE = rtb_UnitDelay3_a;

  /* Update for UnitDelay: '<S289>/Unit Delay3' */
  BaseEngineController_A02_DWork.s289_UnitDelay3_DSTATE = rtb_UnitDelay4_b;

  /* Update for UnitDelay: '<S289>/Unit Delay4' */
  BaseEngineController_A02_DWork.s289_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s507_Sum1;

  /* Update for UnitDelay: '<S290>/Unit Delay1' */
  BaseEngineController_A02_DWork.s290_UnitDelay1_DSTATE = rtb_UnitDelay3_h;

  /* Update for UnitDelay: '<S290>/Unit Delay3' */
  BaseEngineController_A02_DWork.s290_UnitDelay3_DSTATE = rtb_UnitDelay4_g;

  /* Update for UnitDelay: '<S290>/Unit Delay4' */
  BaseEngineController_A02_DWork.s290_UnitDelay4_DSTATE = rtb_Torque;

  /* Update for UnitDelay: '<S366>/Unit Delay' */
  BaseEngineController_A02_DWork.s366_UnitDelay_DSTATE = rtb_DesiredLambda_idx;

  /* Update for UnitDelay: '<S630>/Unit Delay1' */
  BaseEngineController_A02_DWork.s630_UnitDelay1_DSTATE = rtb_Product1_e;

  /* Update for UnitDelay: '<S630>/Unit Delay' */
  BaseEngineController_A02_DWork.s630_UnitDelay_DSTATE = rtb_Sum_iy;

  /* Update for UnitDelay: '<S630>/Unit Delay3' */
  BaseEngineController_A02_DWork.s630_UnitDelay3_DSTATE = rtb_UnitDelay4_bi;

  /* Update for UnitDelay: '<S630>/Unit Delay4' */
  BaseEngineController_A02_DWork.s630_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s619_Switch;

  /* Update for UnitDelay: '<S647>/Unit Delay1' */
  BaseEngineController_A02_DWork.s647_UnitDelay1_DSTATE = rtb_Sum1_gje;

  /* Update for UnitDelay: '<S647>/Unit Delay' */
  BaseEngineController_A02_DWork.s647_UnitDelay_DSTATE = rtb_Merge_c5;

  /* Update for UnitDelay: '<S647>/Unit Delay3' */
  BaseEngineController_A02_DWork.s647_UnitDelay3_DSTATE = rtb_Sum2_d0;

  /* Update for UnitDelay: '<S647>/Unit Delay4' */
  BaseEngineController_A02_DWork.s647_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s620_Switch;
}

/* Termination for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Term(void)
{
  /* Terminate for Enabled SubSystem: '<S351>/Triggered Subsystem' incorporates:
   *  Terminate for S-Function (fcncallgen): '<S352>/Function-Call Generator'
   *  Terminate for SubSystem: '<S3>/Diagnostics'
   */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
