/*
 * File: Foreground.c
 *
 * Real-Time Workshop code generated for Simulink model BaseEngineController_A02.
 *
 * Model version                        : 1.1510
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Nov 19 15:20:16 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Nov 19 15:20:17 2017
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

/* Named constants for Stateflow: '<S140>/Power Limiter Setpoint Manager' */
#define BaseEngineController_A02_IN_Level1Limit (1U)
#define BaseEngineController_A02_IN_Level2Limit (2U)
#define BaseEngineController_A02_IN_Level3Limit (3U)
#define BaseEngineController_A02_IN_Level4Limit (4U)
#define BaseEngineController_A02_IN_NoLimit (5U)

/* Named constants for Stateflow: '<S138>/Chart' */
#define BaseEngineController_A02_IN_Off (1U)
#define BaseEngineController_A02_IN_On (2U)

/* Named constants for Stateflow: '<S319>/Baro Stall State Delay' */
#define BaseEngineController_A02_IN_CrankRun (1U)
#define BaseEngineController_A02_IN_Stall (2U)
#define BaseEngineController_A02_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S364>/Crank APP Lockout' */
#define BaseEngineController_A02_IN_OverrideAPP (1U)
#define BaseEngineController_A02_IN_PassThrough_j (2U)

/* Named constants for Stateflow: '<S370>/Engine State Machine' */
#define BaseEngineController_A02_IN_Crank (1U)
#define BaseEngineController_A02_IN_Run (2U)
#define BaseEngineController_A02_IN_Stall_b (3U)

/* Named constants for Stateflow: '<S274>/Freeze-Frame Trigger' */
#define BaseEngineController_A02_IN_AT_STARTUP (1U)
#define BaseEngineController_A02_IN_TIME_STEP (2U)

/*
 * Output and update for enable system:
 *    '<S162>/Multiply and Divide, avoiding divde by zero'
 *    '<S347>/Multiply and Divide, avoiding divde by zero1'
 */
void BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(boolean_T
  rtu_0, real_T rtu_X1, real_T rtu_X2, real_T rtu_Divide1, real_T rtu_Divide2,
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02 *localB)
{
  if (rtu_0) {
    /* Product: '<S168>/charge mass' */
    localB->s168_chargemass = rtu_X1 * rtu_X2 / rtu_Divide1 / rtu_Divide2;
  }
}

/*
 * Start for enable system:
 *    '<S365>/PassThrough1'
 *    '<S365>/PassThrough2'
 */
void BaseEngineController_A02_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S380>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S365>/PassThrough1'
 *    '<S365>/PassThrough2'
 */
void BaseEngineController_A02_PassThrough1(boolean_T rtu_0, real_T rtu_1, real_T
  *rty_Out1)
{
  if (rtu_0) {
    /* Inport: '<S380>/In1' */
    (*rty_Out1) = rtu_1;
  }
}

/*
 * Output and update for action system:
 *    '<S535>/If Action Subsystem'
 *    '<S535>/If Action Subsystem1'
 *    '<S535>/If Action Subsystem2'
 *    '<S557>/If Action Subsystem'
 *    '<S557>/If Action Subsystem1'
 *    '<S557>/If Action Subsystem2'
 *    '<S558>/If Action Subsystem'
 *    '<S558>/If Action Subsystem1'
 *    '<S558>/If Action Subsystem2'
 *    '<S559>/If Action Subsystem'
 * ...
 */
void BaseEngineController_A02_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S538>/In' */
  (*rty_Out) = rtu_0;
}

/*
 * Output and update for action system:
 *    '<S632>/If Action Subsystem'
 *    '<S632>/If Action Subsystem1'
 *    '<S632>/If Action Subsystem2'
 */
void BaseEngineController_A02_IfActionSubsystem_m(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S635>/In' */
  (*rty_Out) = rtu_0;
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Init(void)
{
  /* S-Function Block: <S549>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s549_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S608>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s608_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Initial conditions for function-call system: '<S409>/Temp Sensors' */

  /* S-Function Block: <S645>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s645_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S654>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s654_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S370>/Engine State Machine' */
  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S390>:4' */
  /* Entry 'Stall': '<S390>:1' */
  BaseEngineController_A02_DWork.s390_is_c2_BaseEngineController_A02 =
    BaseEngineController_A02_IN_Stall_b;
  BaseEngineController_A02_B.s390_State = 1U;

  /* S-Function Block: <S129>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s129_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S119>/Remy Control' */
  BaseEngineController_A02_DWork.s127_is_active_c5_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s127_count = 0.0;
  BaseEngineController_A02_B.s127_cranking = 0.0;
  BaseEngineController_A02_B.s127_idle = 0.0;
  BaseEngineController_A02_B.s127_APPRamp = 0.0;
  BaseEngineController_A02_B.s127_torqueRamp = 0.0;
  BaseEngineController_A02_B.s127_remyEn = 0.0;
  BaseEngineController_A02_B.s127_maxRPM = 0.0;
  BaseEngineController_A02_B.s127_motorTQ = 0.0;
  BaseEngineController_A02_B.s127_generatingTQ = 0.0;

  /* S-Function Block: <S686>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s686_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S669>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s669_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

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

  /* S-Function Block: <S574>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s574_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S566>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s566_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for atomic SubSystem: '<S322>/Base TPS Request' */

  /* S-Function Block: <S382>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s382_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S365>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s365_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* end of InitializeConditions for SubSystem: '<S322>/Base TPS Request' */

  /* S-Function Block: <S634>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s634_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S395>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s395_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S319>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s319_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S319>/Baro Stall State Delay' */
  BaseEngineController_A02_DWork.s324_TOld = 0.0;
  BaseEngineController_A02_B.s324_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S324>:4' */
  /* Entry 'Stall': '<S324>:1' */
  BaseEngineController_A02_DWork.s324_is_c19_BaseEngineController_A02 =
    BaseEngineController_A02_IN_Stall;
  BaseEngineController_A02_B.s324_Enable = TRUE;

  /* S-Function Block: <S537>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s537_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S338>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s338_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S387>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s387_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S624>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s624_motohawk_delta_time_DWORK1 = now -
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

  /* InitializeConditions for Stateflow: '<S19>/Chart' */
  BaseEngineController_A02_DWork.s20_is_active_c1_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_B.s20_enout = 0.0;

  /* S-Function Block: <S806>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s806_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S397>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s397_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S128>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s128_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S616>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s616_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S598>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s598_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S582>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s582_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S393>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s393_motohawk_delta_time_DWORK1 = now -
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S364>/Crank APP Lockout' */
  BaseEngineController_A02_B.s378_APP_Out = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/APP Sensor Management/Crank APP Lockout */
  /* Transition: '<S378>:3' */
  /* Entry 'PassThrough': '<S378>:1' */
  BaseEngineController_A02_DWork.s378_is_c10_BaseEngineController_A02 =
    BaseEngineController_A02_IN_PassThrough_j;
  BaseEngineController_A02_B.s378_APP_Mode = FALSE;
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S409>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_5248p0006 */
  BaseEngineController_A02_DWork.s409_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S370>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_4171p001 */
  BaseEngineController_A02_DWork.s370_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S562>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_5065p0009 */
  BaseEngineController_A02_DWork.s562_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_15457p0007 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_15456p0007 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_6042p0011 */

  /* Enable for function-call system: '<S5>/Coil Control' */

  /* Enable for atomic SubSystem: '<S778>/EST Enable TDC Counter' */
  /* Level2 S-Function Block: '<S783>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_5531p0006 */
  BaseEngineController_A02_DWork.s783_motohawk_trigger1_DWORK1 = 1;

  /* end of Enable for SubSystem: '<S778>/EST Enable TDC Counter' */
  BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S409>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_5248p0006 */
  BaseEngineController_A02_DWork.s409_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S370>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_4171p001 */
  BaseEngineController_A02_DWork.s370_motohawk_trigger_DWORK1 = 0;

  /* Disable for enable SubSystem: '<S7>/Stall' */
  BaseEngineController_A02_DWork.s7_Stall_MODE = FALSE;

  /* end of Disable for SubSystem: '<S7>/Stall' */

  /* Disable for enable SubSystem: '<S7>/Crank' */
  BaseEngineController_A02_DWork.s7_Crank_MODE = FALSE;

  /* end of Disable for SubSystem: '<S7>/Crank' */
  /* Level2 S-Function Block: '<S562>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_5065p0009 */
  BaseEngineController_A02_DWork.s562_motohawk_trigger5_DWORK1 = 0;

  /* Disable for enable SubSystem: '<S319>/Capture Signal At Startup' */

  /* Disable for enable SubSystem: '<S325>/Collect Average' */
  BaseEngineController_A02_DWork.s325_CollectAverage_MODE = FALSE;

  /* end of Disable for SubSystem: '<S325>/Collect Average' */
  BaseEngineController_A02_DWork.s319_CaptureSignalAtStartup_MODE = FALSE;

  /* end of Disable for SubSystem: '<S319>/Capture Signal At Startup' */

  /* Disable for enable SubSystem: '<S322>/Capture ECT At Startup' */

  /* Disable for enable SubSystem: '<S366>/Collect Average' */
  BaseEngineController_A02_DWork.s366_CollectAverage_MODE = FALSE;

  /* end of Disable for SubSystem: '<S366>/Collect Average' */
  BaseEngineController_A02_DWork.s322_CaptureECTAtStartup_MODE = FALSE;

  /* end of Disable for SubSystem: '<S322>/Capture ECT At Startup' */

  /* Disable for enable SubSystem: '<S7>/Run' */
  /* Level2 S-Function Block: '<S121>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1327p0009 */
  BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 = 0;

  /* Disable for atomic SubSystem: '<S121>/Fuel System Manager' */

  /* Disable for atomic SubSystem: '<S134>/Injector Manager' */

  /* Disable for enable SubSystem: '<S156>/Delta TPS Transient Fueling' */

  /* Disable for enable SubSystem: '<S161>/ECT Transient Fueling' */

  /* Disable for Outport: '<S165>/Mult' */
  BaseEngineController_A02_B.s165_motohawk_interpolation_1d = 1.0;
  BaseEngineController_A02_DWork.s161_ECTTransientFueling_MODE = FALSE;

  /* end of Disable for SubSystem: '<S161>/ECT Transient Fueling' */

  /* Disable for Outport: '<S161>/DeltaTPSMult' */
  BaseEngineController_A02_B.s161_Product1 = 1.0;
  BaseEngineController_A02_DWork.s156_DeltaTPSTransientFueling_MODE = FALSE;

  /* end of Disable for SubSystem: '<S156>/Delta TPS Transient Fueling' */

  /* Disable for If: '<S163>/If' */
  BaseEngineController_A02_DWork.s163_If_ActiveSubsystem = -1;

  /* end of Disable for SubSystem: '<S134>/Injector Manager' */

  /* end of Disable for SubSystem: '<S121>/Fuel System Manager' */
  BaseEngineController_A02_DWork.s7_Run_MODE = FALSE;

  /* end of Disable for SubSystem: '<S7>/Run' */
  /* Level2 S-Function Block: '<S6>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_15457p0007 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_15456p0007 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 = 0;

  /* Disable for enable SubSystem: '<S15>/PassThrough1' */
  BaseEngineController_A02_DWork.s15_PassThrough1_MODE = FALSE;

  /* end of Disable for SubSystem: '<S15>/PassThrough1' */

  /* Disable for enable SubSystem: '<S15>/PassThrough3' */
  for (i = 0; i < 32; i++) {
    /* Disable for Outport: '<S94>/Out1' */
    BaseEngineController_A02_B.s15_Merge1[i] = 0;

    /* Disable for Outport: '<S96>/Out1' */
    BaseEngineController_A02_B.s15_Merge1[i] = 0;
  }

  BaseEngineController_A02_DWork.s15_PassThrough3_MODE = FALSE;

  /* end of Disable for SubSystem: '<S15>/PassThrough3' */

  /* Disable for enable SubSystem: '<S15>/SequenceCutMachine' */
  /* Level2 S-Function Block: '<S99>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC1_EVENT_14692p0002 */
  BaseEngineController_A02_DWork.s99_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_A02_DWork.s15_SequenceCutMachine_MODE = FALSE;

  /* end of Disable for SubSystem: '<S15>/SequenceCutMachine' */

  /* Disable for enable SubSystem: '<S15>/PassThrough4' */
  for (i = 0; i < 8; i++) {
    /* Disable for Outport: '<S99>/Out1' */
    BaseEngineController_A02_B.s109_CutArray[i] = 0;

    /* Disable for Outport: '<S97>/Out1' */
    BaseEngineController_A02_B.s97_DataTypeConversion[i] = FALSE;
  }

  BaseEngineController_A02_DWork.s15_PassThrough4_MODE = FALSE;

  /* end of Disable for SubSystem: '<S15>/PassThrough4' */
  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_6042p0011 */

  /* Disable for function-call system: '<S5>/Coil Control' */

  /* Disable for atomic SubSystem: '<S778>/EST Enable TDC Counter' */
  /* Level2 S-Function Block: '<S783>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_5531p0006 */
  BaseEngineController_A02_DWork.s783_motohawk_trigger1_DWORK1 = 0;

  /* end of Disable for SubSystem: '<S778>/EST Enable TDC Counter' */
  BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Disable for enable SubSystem: '<S6>/Electronic Throttle Controller' */

  /* Disable for enable SubSystem: '<S29>/PassThrough' */

  /* Disable for Outport: '<S51>/Out1' */
  BaseEngineController_A02_B.s51_In1 = 10.0;
  BaseEngineController_A02_DWork.s29_PassThrough_MODE = FALSE;

  /* end of Disable for SubSystem: '<S29>/PassThrough' */
  BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE = FALSE;

  /* end of Disable for SubSystem: '<S6>/Electronic Throttle Controller' */

  /* Disable for enable SubSystem: '<S15>/PassThrough5' */

  /* Disable for Outport: '<S98>/Out1' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s98_DataTypeConversion1[i] = FALSE;
  }

  BaseEngineController_A02_DWork.s15_PassThrough5_MODE = FALSE;

  /* end of Disable for SubSystem: '<S15>/PassThrough5' */

  /* Disable for enable SubSystem: '<S322>/Capture IAT At Startup' */

  /* Disable for enable SubSystem: '<S367>/Collect Average' */
  BaseEngineController_A02_DWork.s367_CollectAverage_MODE = FALSE;

  /* end of Disable for SubSystem: '<S367>/Collect Average' */
  BaseEngineController_A02_DWork.s322_CaptureIATAtStartup_MODE = FALSE;

  /* end of Disable for SubSystem: '<S322>/Capture IAT At Startup' */

  /* Disable for enable SubSystem: '<S403>/Triggered Subsystem' */

  /* Disable for S-Function (fcncallgen): '<S404>/Function-Call Generator' incorporates:
   *  Disable for SubSystem: '<S3>/Diagnostics'
   */
  BaseEngineController_A02_DWork.s403_TriggeredSubsystem_MODE = FALSE;

  /* end of Disable for SubSystem: '<S403>/Triggered Subsystem' */
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Start(void)
{
  int32_T i;

  /* Start for S-Function (motohawk_sfun_trigger): '<S409>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_5248p0006 */
  BaseEngineController_A02_DWork.s409_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S370>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_4171p001 */
  BaseEngineController_A02_DWork.s370_motohawk_trigger_DWORK1 = 0;

  /* Start for enable SubSystem: '<S7>/Stall' */

  /* InitializeConditions for UnitDelay: '<S270>/Unit Delay' */
  BaseEngineController_A02_DWork.s270_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S271>/Unit Delay' */
  BaseEngineController_A02_DWork.s271_UnitDelay_DSTATE = 0.0;

  /* end of Start for SubSystem: '<S7>/Stall' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S562>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_5065p0009 */
  BaseEngineController_A02_DWork.s562_motohawk_trigger5_DWORK1 = 0;

  /* Start for atomic SubSystem: '<S322>/Base TPS Request' */

  /* Start for enable SubSystem: '<S365>/PassThrough1' */
  BaseEngineController_A02_PassThrough1_Start
    (&BaseEngineController_A02_B.s365_Merge);

  /* end of Start for SubSystem: '<S365>/PassThrough1' */

  /* Start for enable SubSystem: '<S365>/PassThrough2' */
  BaseEngineController_A02_PassThrough1_Start
    (&BaseEngineController_A02_B.s365_Merge);

  /* end of Start for SubSystem: '<S365>/PassThrough2' */

  /* end of Start for SubSystem: '<S322>/Base TPS Request' */

  /* Start for enable SubSystem: '<S319>/Capture Signal At Startup' */

  /* Start for enable SubSystem: '<S325>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S328>/Unit Delay1' */
  BaseEngineController_A02_DWork.s328_UnitDelay1_DSTATE = 0.0;

  /* end of Start for SubSystem: '<S325>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S325>/Unit Delay' */
  BaseEngineController_A02_DWork.s325_UnitDelay_DSTATE = 0;

  /* end of Start for SubSystem: '<S319>/Capture Signal At Startup' */

  /* Start for enable SubSystem: '<S339>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S343>/Out1' */
  BaseEngineController_A02_B.s339_Merge = 0.005;

  /* end of Start for SubSystem: '<S339>/IncreasingFilter' */

  /* Start for enable SubSystem: '<S339>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S341>/Out1' */
  BaseEngineController_A02_B.s339_Merge = 0.005;

  /* end of Start for SubSystem: '<S339>/DecreasingFilter' */

  /* Start for enable SubSystem: '<S340>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S346>/Out1' */
  BaseEngineController_A02_B.s340_Merge = 0.005;

  /* end of Start for SubSystem: '<S340>/IncreasingFilter' */

  /* Start for enable SubSystem: '<S340>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S344>/Out1' */
  BaseEngineController_A02_B.s340_Merge = 0.005;

  /* end of Start for SubSystem: '<S340>/DecreasingFilter' */

  /* Start for enable SubSystem: '<S338>/Integrate Offset To ECT' */

  /* S-Function Block: <S357>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s357_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* end of Start for SubSystem: '<S338>/Integrate Offset To ECT' */

  /* Start for enable SubSystem: '<S322>/Capture ECT At Startup' */

  /* Start for enable SubSystem: '<S366>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S384>/Unit Delay1' */
  BaseEngineController_A02_DWork.s384_UnitDelay1_DSTATE = 0.0;

  /* end of Start for SubSystem: '<S366>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S366>/Unit Delay' */
  BaseEngineController_A02_DWork.s366_UnitDelay_DSTATE = 0;

  /* end of Start for SubSystem: '<S322>/Capture ECT At Startup' */

  /* Start for enable SubSystem: '<S7>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S121>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1327p0009 */
  BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 = 0;

  /* Start for atomic SubSystem: '<S121>/O2 Control' */

  /* Start for atomic SubSystem: '<S137>/O2 PID Controller' */

  /* Start for InitialCondition: '<S242>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_A02_B.s242_Multiplyby10ifnotyetenabled = 1.0;
  BaseEngineController_A02_DWork.s242_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* end of Start for SubSystem: '<S137>/O2 PID Controller' */

  /* end of Start for SubSystem: '<S121>/O2 Control' */

  /* Start for atomic SubSystem: '<S121>/Fuel System Manager' */

  /* Start for atomic SubSystem: '<S134>/Injector Manager' */

  /* Start for enable SubSystem: '<S156>/Delta TPS Transient Fueling' */

  /* Start for enable SubSystem: '<S161>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S165>/Mult' */
  BaseEngineController_A02_B.s165_motohawk_interpolation_1d = 1.0;

  /* end of Start for SubSystem: '<S161>/ECT Transient Fueling' */

  /* S-Function Block: <S166>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s166_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S167>/Unit Delay' */
  BaseEngineController_A02_DWork.s167_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S161>/DeltaTPSMult' */
  BaseEngineController_A02_B.s161_Product1 = 1.0;

  /* end of Start for SubSystem: '<S156>/Delta TPS Transient Fueling' */

  /* Start for If: '<S163>/If' */
  BaseEngineController_A02_DWork.s163_If_ActiveSubsystem = -1;

  /* Start for ifaction SubSystem: '<S163>/Enabled Tau-X Algorithm' */

  /* InitializeConditions for UnitDelay: '<S174>/Initial Condition is True' */
  BaseEngineController_A02_DWork.s174_InitialConditionisTrue_DSTATE = TRUE;

  /* InitializeConditions for UnitDelay: '<S175>/Unit Delay' */
  BaseEngineController_A02_DWork.s175_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S175>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s175_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* end of Start for SubSystem: '<S163>/Enabled Tau-X Algorithm' */

  /* end of Start for SubSystem: '<S134>/Injector Manager' */

  /* end of Start for SubSystem: '<S121>/Fuel System Manager' */

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S121>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S121>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S206>/IdleStateMachine' */
    BaseEngineController_A02_IdleStateMachine_Init();

    /* S-Function Block: <S205>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s205_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S209>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s209_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* InitializeConditions for atomic SubSystem: '<S136>/AiflowOffset' */

    /* S-Function Block: <S212>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s212_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* end of InitializeConditions for SubSystem: '<S136>/AiflowOffset' */

    /* S-Function Block: <S237>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s237_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S121>/MaxGovernor' */

    /* S-Function Block: <S187>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s187_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S199>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s199_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S121>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S265>/Initial Condition is True' */
    BaseEngineController_A02_DWork.s265_InitialConditionisTrue_DSTATE = TRUE;
  }

  /* InitializeConditions for UnitDelay: '<S140>/Unit Delay' */
  BaseEngineController_A02_DWork.s140_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for Stateflow: '<S140>/Power Limiter Setpoint Manager' */
  BaseEngineController_A02_DWork.s144_is_active_c13_BaseEngineController_A02 =
    0U;
  BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_B.s144_State = 0.0;
  BaseEngineController_A02_B.s144_Setpoint = 0.0;

  /* InitializeConditions for UnitDelay: '<S148>/Unit Delay' */
  BaseEngineController_A02_DWork.s148_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S149>/Unit Delay' */
  BaseEngineController_A02_DWork.s149_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S149>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s149_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for atomic SubSystem: '<S121>/O2 Control' */

  /* InitializeConditions for atomic SubSystem: '<S137>/O2 PID Controller' */

  /* InitializeConditions for UnitDelay: '<S254>/Unit Delay' */
  BaseEngineController_A02_DWork.s254_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S251>/Unit Delay' */
  BaseEngineController_A02_DWork.s251_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S250>/Unit Delay' */
  BaseEngineController_A02_DWork.s250_UnitDelay_DSTATE = 0.0;

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

  /* InitializeConditions for UnitDelay: '<S247>/Unit Delay1' */
  BaseEngineController_A02_DWork.s247_UnitDelay1_DSTATE = 0.0;

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

  /* InitializeConditions for UnitDelay: '<S247>/Unit Delay' */
  BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S257>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s257_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S247>/Unit Delay2' */
  BaseEngineController_A02_DWork.s247_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S256>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s256_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* end of InitializeConditions for SubSystem: '<S137>/O2 PID Controller' */

  /* end of InitializeConditions for SubSystem: '<S121>/O2 Control' */

  /* InitializeConditions for Stateflow: '<S138>/Chart' */
  BaseEngineController_A02_DWork.s258_is_active_c6_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s258_is_c6_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_B.s258_HEATER = FALSE;

  /* end of Start for SubSystem: '<S7>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_15457p0007 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_15456p0007 */
  BaseEngineController_A02_DWork.s6_motohawk_trigger_DWORK1 = 0;

  /* Start for enable SubSystem: '<S15>/SequenceCutMachine' */
  /* Start for function-call system: '<S99>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S109>/CycleCounter' */
  BaseEngineController_A02_B.s109_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S109>/CycleNumber' */
  BaseEngineController_A02_B.s109_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_14692p0002 */
  BaseEngineController_A02_DWork.s99_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S99>/Unit Delay2' */
  BaseEngineController_A02_DWork.s99_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S99>/Unit Delay1' */
  BaseEngineController_A02_DWork.s99_UnitDelay1_DSTATE = 1U;

  /* end of Start for SubSystem: '<S15>/SequenceCutMachine' */
  /* Start for function-call system: '<S5>/Coil Control' */

  /* Start for atomic SubSystem: '<S778>/EST Enable TDC Counter' */
  /* Start for S-Function (motohawk_sfun_trigger): '<S783>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_5531p0006 */
  BaseEngineController_A02_DWork.s783_motohawk_trigger1_DWORK1 = 0;

  /* end of Start for SubSystem: '<S778>/EST Enable TDC Counter' */

  /* S-Function Block: <S706>/Spark Sequence */
  {
    NativeError_S createErrorResult;
    int32_T i;
    extern void SparkSeqDiagCallback_21(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    if ((EST_SequenceType_DataStore()) == 0) {
      S_ESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      CreateObj.u1NumPulsesToCreate = 1;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_21;
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_21;
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_21;

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
            (ESTPinMapArr_PulseNum_21_DataStore())[cyl] = 0;
            (ESTPinMapArr_PulseNum_21_DataStore())[opp_cyl] = 1;/* p1 aligns with opp_cyl */
          } else {
            p0 = (EncoderTDCAngles_DataStore())[opp_cyl];
            p1 = (EncoderTDCAngles_DataStore())[cyl];
            (ESTPinMapArr_PulseNum_21_DataStore())[cyl] = 1;
            (ESTPinMapArr_PulseNum_21_DataStore())[opp_cyl] = 0;/* p0 aligns with opp_cyl */
          }

          (ESTPinMapArr_Resource_21_DataStore())[cyl] = (E_ModuleResource)
            ((EST_InitialPin_DataStore()) + pin);
          (ESTPinMapArr_Resource_21_DataStore())[opp_cyl] = (E_ModuleResource)
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_21;
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

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_6042p0011 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_dout): '<S708>/motohawk_dout' */

  /* S-Function Block: FuelPumpPin */
  {
    (init_resource_FuelPumpPin_DataStore()) = -1;
  }

  /* Start for enable SubSystem: '<S6>/Electronic Throttle Controller' */

  /* Start for enable SubSystem: '<S29>/PassThrough' */

  /* VirtualOutportStart for Outport: '<S51>/Out1' */
  BaseEngineController_A02_B.s51_In1 = 10.0;

  /* end of Start for SubSystem: '<S29>/PassThrough' */

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
  /* Entry 'PassThrough': '<S25>:1' */
  BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
    BaseEngineController_A02_IN_PassThrough;
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

  /* end of Start for SubSystem: '<S6>/Electronic Throttle Controller' */

  /* S-Function Block: <S710>/Injector Sequence */
  {
    S_SeqOutAttributes DynamicObj;
    NativeError_S createErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult2 = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    int32_T i;
    extern void InjectorSeqDiagCallback_41(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_41[8];
    extern int32_T InjectorSeqDiagLastPin_41;
    DynamicObj.uMinPulseDurationInMicroSecs = 1500;
    for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
      InjectorSeqDiagInfo_41[i].u4TXTimeInMicroSecs = 0xFFFFFFFF;
      InjectorSeqDiagInfo_41[i].u1TXCnt = 1;
    }

    InjectorSeqDiagLastPin_41 = -1;
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
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_41;
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
        extern void TransientInjectorSeqReportCallback_41
          (S_SeqOutInjEndEventReportPtr report, NativePtrSizedInt_U userData);
        extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_41[8];
        S_TranInjSeqCreateAttributes CreateObj;
        CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
          USE_SEQ_ENDEVENT_REPORT_COND | USE_SEQ_DIAG_REPORT_COND;
        CreateObj.ReportsObj.pfReportCback =
          TransientInjectorSeqReportCallback_41;
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_41;
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.eReportCond = RES_ENABLED;
        DynamicObj.uValidAttributesMask |= USE_SEQ_ENDEVENT_REPORT_COND;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            TransientInjectorSeqInfo_41[i].primaryComplete = 0;
            TransientInjectorSeqInfo_41[i].primaryDuration = 0;
            TransientInjectorSeqInfo_41[i].pinResource =
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_41;
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_41;
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

    BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK2 = 0;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S711>/motohawk_dout' */

  /* S-Function Block: OilPumpPin */
  {
    (init_resource_OilPumpPin_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S712>/motohawk_dout' */

  /* S-Function Block: O2_Heater */
  {
    (init_resource_O2_Heater_DataStore()) = -1;
  }

  /* Start for enable SubSystem: '<S322>/Capture IAT At Startup' */

  /* Start for enable SubSystem: '<S367>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S385>/Unit Delay1' */
  BaseEngineController_A02_DWork.s385_UnitDelay1_DSTATE = 0.0;

  /* end of Start for SubSystem: '<S367>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S367>/Unit Delay' */
  BaseEngineController_A02_DWork.s367_UnitDelay_DSTATE = 0;

  /* end of Start for SubSystem: '<S322>/Capture IAT At Startup' */

  /* Start for enable SubSystem: '<S403>/Triggered Subsystem' */

  /* Start for S-Function (fcncallgen): '<S404>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S3>/Diagnostics'
   */

  /* Start for iterator SubSystem: '<S8>/Fault Codes and States' */
  /* InitializeConditions for S-Function (motohawk_sfun_prev_fault_T): '<S273>/motohawk_prev_fault_T' */
  /* Initialize previous fault_T */
  {
    extern uint32_T NullFault(void);
    BaseEngineController_A02_DWork.s273_motohawk_prev_fault_T_DWORK1 = NullFault
      ();
  }

  /* end of Start for SubSystem: '<S8>/Fault Codes and States' */

  /* InitializeConditions for S-Function (fcncallgen): '<S404>/Function-Call Generator' incorporates:
   *  InitializeConditions for SubSystem: '<S3>/Diagnostics'
   */

  /* InitializeConditions for UnitDelay: '<S274>/Initialized at 1' */
  BaseEngineController_A02_DWork.s274_Initializedat1_DSTATE = 1.0;

  /* InitializeConditions for Stateflow: '<S274>/Freeze-Frame Trigger' */
  BaseEngineController_A02_DWork.s284_is_active_c4_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s284_is_c4_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s284_ActvFltCount = 0U;
  BaseEngineController_A02_DWork.s284_OldIndex = 0U;
  for (i = 0; i < 6; i++) {
    BaseEngineController_A02_B.s284_FFIDs[i] = 0U;
    BaseEngineController_A02_B.s284_FFTrigg[i] = FALSE;
  }

  memset((void *)(&BaseEngineController_A02_B.s284_FltOrder[0]), (int32_T)0U,
         71U * sizeof(uint16_T));
  BaseEngineController_A02_B.s284_FltOrderMax = 0U;

  /* S-Function Block: <S299>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s299_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S302>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s302_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S303>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s303_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S304>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s304_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S318>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s318_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S317>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s317_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S293>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s293_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S297>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s297_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* end of Start for SubSystem: '<S403>/Triggered Subsystem' */

  /* S-Function (motohawk_sfun_probe): '<S713>/motohawk_probe7' */
  (Fault_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S714>/motohawk_probe1' */
  (Control_Mode_Cmd_Prb_DataStore()) = 1.0;

  /* S-Function (motohawk_sfun_probe): '<S714>/motohawk_probe2' */
  (Motoring_Tq_Curve_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S714>/motohawk_probe3' */
  (Generating_Tq_Curve_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S714>/motohawk_probe10' */
  (Aux_PWM_State_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S714>/motohawk_probe11' */
  (Aux_PWM_DutyCycle_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S714>/motohawk_probe12' */
  (Aux_PWM_Freq_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S714>/motohawk_probe9' */
  (XDRP_Supply_State_Prb_DataStore()) = 0.0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_Merge_c;
  real_T rtb_UnitDelay1_m;
  real_T rtb_Merge_bw;
  real_T rtb_Merge_ce;
  real_T rtb_Merge_i;
  real_T rtb_motohawk_delta_time_cz;
  real_T rtb_Switch_j5;
  real_T rtb_Merge_du;
  real_T rtb_Merge_k;
  real_T rtb_Merge_de;
  real_T rtb_Merge_g;
  real_T rtb_Merge_cg;
  real_T rtb_Merge_ig;
  real_T rtb_Merge_d3;
  real_T rtb_Merge_gg;
  real_T rtb_Merge_cq;
  real_T rtb_Merge_gc;
  real_T rtb_Merge_eb;
  real_T rtb_Merge_bi;
  real_T rtb_Merge_df;
  real_T rtb_Merge_a;
  real_T rtb_Sum1_d;
  real_T rtb_UnitDelay1_d;
  real_T rtb_Merge_py;
  real_T rtb_Sum1_m2;
  real_T rtb_UnitDelay1_j;
  real_T rtb_Merge_h;
  real_T rtb_UnitDelay1_n;
  real_T rtb_Merge_bn;
  real_T rtb_UnitDelay1_p;
  real_T rtb_Merge_k1;
  real_T rtb_UnitDelay1_g;
  real_T rtb_Merge_n;
  real_T rtb_DataTypeConversion_m;
  real_T rtb_UnitDelay_hm;
  real_T rtb_Merge_dh;
  real_T rtb_motohawk_delta_time_c0;
  real_T rtb_UnitDelay1_dq;
  real_T rtb_Merge_pk;
  real_T rtb_Saturation1;
  real_T rtb_motohawk_interpolation_2d;
  real_T rtb_motohawk_interpolation_1d1_d;
  real_T rtb_motohawk_interpolation_1d2_h;
  real_T rtb_UnitDelay_az;
  real_T rtb_Merge_j;
  real_T rtb_Saturation2;
  real_T rtb_Saturation_d;
  real_T rtb_Torque;
  real_T rtb_motohawk_delta_time1;
  real_T rtb_motohawk_delta_time_f;
  real_T rtb_UnitDelay1_az;
  real_T rtb_Merge_cs;
  real_T rtb_motohawk_delta_time_n;
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
  real_T rtb_motohawk_delta_time_i;
  real_T rtb_Switch_k;
  real_T rtb_motohawk_interpolation_1d_k;
  real_T rtb_Product_cf;
  real_T rtb_Saturation_p;
  real_T rtb_Saturation_a5;
  real_T rtb_UnitDelay1_jh;
  real_T rtb_Merge_l;
  real_T rtb_UnitDelay1_b;
  real_T rtb_Merge_dm;
  real_T rtb_motohawk_delta_time_a0;
  real_T rtb_motohawk_delta_time_bh;
  real_T rtb_Saturation_dt;
  real_T rtb_Saturation_o;
  real_T rtb_Saturation_ot;
  real_T rtb_motohawk_delta_time_ae;
  real_T rtb_motohawk_delta_time_jd;
  real_T rtb_Saturation_km;
  real_T rtb_motohawk_interpolation_1d_l;
  real_T rtb_motohawk_delta_time_nt;
  real_T rtb_Saturation_dq;
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
  real_T rtb_motohawk_interpolation_1d3_i;
  real_T rtb_motohawk_interpolation_1d2_j;
  real_T rtb_Product4_f;
  real_T rtb_motohawk_delta_time_iv;
  real_T rtb_motohawk_interpolation_1d4_e;
  real_T rtb_motohawk_delta_time_om;
  real_T rtb_MinMax1_dr;
  real_T rtb_motohawk_interpolation_1d_o;
  real_T rtb_RichEquivRatioTargetDelta_ap;
  real_T rtb_motohawk_interpolation_1d_ox;
  real_T rtb_RichEquivRatioSwPtDelta;
  real_T rtb_LeanEquivRatioSwPtDelta;
  real_T rtb_motohawk_interpolation_1d_j;
  real_T rtb_motohawk_interpolation_1d1_l;
  real_T rtb_motohawk_delta_time_nl;
  real_T rtb_motohawk_delta_time_fo;
  real_T rtb_motohawk_delta_time_ivp;
  real_T rtb_motohawk_delta_time_m;
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
  real_T rtb_motohawk_interpolation_2d2_d;
  real_T rtb_motohawk_interpolation_2d1_a;
  real_T rtb_motohawk_delta_time_m5;
  real_T rtb_motohawk_interpolation_2d2_k;
  real_T rtb_motohawk_interpolation_2d3;
  real_T rtb_WarmUpMult;
  real_T rtb_motohawk_interpolation_1d1_c;
  real_T rtb_Product_f5;
  real_T rtb_motohawk_interpolation_1d2_l;
  real_T rtb_motohawk_interpolation_2d1_ay;
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
  real_T rtb_Add_h;
  real_T rtb_motohawk_replicate[8];
  real_T rtb_motohawk_interpolation_1d1_kt;
  real_T rtb_Product_hl;
  real_T rtb_DataTypeConversion_f5g;
  real_T rtb_motohawk_replicate1;
  real_T rtb_Switch_e;
  real_T rtb_MinMax_nh;
  real_T rtb_DataTypeConversion_ff;
  real_T rtb_UnitDelay_mz;
  real_T rtb_Sum_ic;
  real_T rtb_Product5_d;
  real_T rtb_Sum2_as;
  real_T rtb_DataTypeConversion_e;
  real_T rtb_motohawk_interpolation_1d3_a;
  real_T rtb_DataTypeConversion_kk;
  int32_T rtb_MultiportSwitch9;
  int32_T rtb_MultiportSwitch9_j;
  int32_T rtb_MultiportSwitch9_o;
  int32_T rtb_MultiportSwitch9_n;
  int32_T rtb_MultiportSwitch9_d;
  int32_T rtb_MultiportSwitch9_jb;
  uint32_T rtb_DataTypeConversion3_n;
  uint32_T rtb_motohawk_fault_properties;
  uint32_T rtb_InjectorSequence_o2[8];
  uint32_T rtb_Sum_l0;
  uint32_T rtb_UnitDelay_aka;
  uint32_T rtb_DataTypeConversion6_j;
  fault_T rtb_motohawk_prev_fault_T;
  int16_T rtb_DataTypeConversion4_kh;
  int16_T rtb_DataTypeConversion3_p;
  int16_T rtb_DataTypeConversion7_l;
  int16_T rtb_DataTypeConversion2_l;
  uint16_T rtb_RPM;
  uint16_T rtb_RPMInst;
  uint16_T rtb_motohawk_ain9;
  uint16_T rtb_motohawk_ain6;
  uint16_T rtb_motohawk_ain_read_f;
  uint16_T rtb_motohawk_encoder_average_rpm;
  uint16_T rtb_motohawk_data_read1_k[71];
  uint16_T rtb_motohawk_ain_read_i;
  uint16_T rtb_motohawk_ain_read_d;
  uint16_T rtb_DataTypeConversion2_n;
  uint16_T rtb_DataTypeConversion2_h;
  uint16_T rtb_DataTypeConversion2_lz;
  uint16_T rtb_DataTypeConversion2_mp;
  uint16_T rtb_motohawk_data_read3_i;
  uint16_T rtb_motohawk_data_read3_m;
  uint16_T rtb_motohawk_data_read3_ic;
  uint16_T rtb_motohawk_data_read3_my;
  uint16_T rtb_motohawk_data_read3_p;
  uint16_T rtb_motohawk_data_read3_b;
  uint16_T rtb_DataTypeConversion1_l;
  uint16_T rtb_motohawk_data_read1_d;
  index_T rtb_motohawk_prelookup2;
  index_T rtb_motohawk_prelookup_le;
  index_T rtb_motohawk_prelookup_ld;
  index_T rtb_motohawk_prelookup1_n;
  index_T rtb_motohawk_prelookup2_c;
  index_T rtb_motohawk_prelookup_j;
  index_T rtb_motohawk_prelookup_g;
  index_T rtb_motohawk_prelookup_d;
  index_T rtb_motohawk_prelookup_em;
  index_T rtb_motohawk_prelookup_b;
  index_T rtb_motohawk_prelookup_eu;
  index_T rtb_motohawk_prelookup_iz;
  index_T rtb_motohawk_prelookup1_c;
  index_T rtb_motohawk_prelookup1_n3;
  index_T rtb_motohawk_prelookup_e0;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_motohawk_prelookup1_o;
  index_T rtb_ITermIdx;
  index_T rtb_motohawk_prelookup3;
  index_T rtb_motohawk_prelookup2_b;
  index_T rtb_motohawk_prelookup_h;
  index_T rtb_motohawk_prelookup1_fq;
  index_T rtb_motohawk_prelookup1_kg;
  index_T rtb_motohawk_prelookup1_p;
  index_T rtb_motohawk_prelookup_fj;
  index_T rtb_motohawk_prelookup2_k;
  index_T rtb_motohawk_prelookup_de;
  index_T rtb_App05Idx;
  uint8_T rtb_motohawk_data_read3_c[6];
  uint8_T rtb_Add_l;
  uint8_T rtb_Add_c;
  uint8_T rtb_Add_ie;
  uint8_T rtb_Add_lb;
  uint8_T rtb_Add_ny;
  uint8_T rtb_Add_g;
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
  boolean_T rtb_RelationalOperator3_o;
  boolean_T rtb_LogicalOperator1_c3;
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
  boolean_T rtb_ActiveFaultArray[71];
  boolean_T rtb_RelationalOperator5_b;
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
  boolean_T rtb_RelOp_fa;
  boolean_T rtb_LogicalOperator_kg;
  boolean_T rtb_LogicalOperator_db;
  boolean_T rtb_RelationalOperator1_g;
  boolean_T rtb_motohawk_data_read1_ir;
  boolean_T rtb_AND1[8];
  boolean_T rtb_motohawk_data_read1_h3;
  boolean_T rtb_motohawk_fault_iterator_o1;
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
  uint8_T sf_FltOrderCount;
  int32_T sf_exitg;
  real_T rtb_DataTypeConversion_i;
  boolean_T rtb_RelationalOperator6_k;
  boolean_T rtb_LogicalOperator1_a;
  real_T rtb_UnitDelay_dm;
  boolean_T rtb_RelOp_g;
  boolean_T rtb_Merge_gl;
  real_T rtb_Sum2_ob;
  boolean_T rtb_LogicalOperator3_j[8];
  boolean_T rtb_LogicalOperator1_iht[8];
  real_T rtb_UnitDelay_ph[8];
  real_T rtb_UnitDelay_ak;
  real_T rtb_UnitDelay_gy;
  real_T rtb_UnitDelay_de;
  real_T rtb_UnitDelay_i;
  real_T rtb_UnitDelay_bv;
  real_T rtb_UnitDelay_dv;
  real_T rtb_UnitDelay_e4;
  real_T rtb_UnitDelay_pa;
  real_T rtb_Product2_e[8];
  real_T rtb_UnitDelay3_a;
  real_T rtb_UnitDelay4_b;
  real_T rtb_UnitDelay1_l;
  real_T rtb_UnitDelay3_h;
  real_T rtb_UnitDelay4_g;
  real_T min;
  real_T rtb_Merge_p;
  real_T rtb_Sum1_i;
  real_T rtb_Sum1_pb;
  real_T rtb_Sum1_nl;
  real_T rtb_Sum1_i5;
  real_T rtb_Sum1_kq;
  real_T rtb_Sum1_f;
  real_T rtb_Sum1_gj;
  real_T rtb_Sum1_d3;
  real_T rtb_Sum1_h;
  real_T rtb_Sum1_j;
  boolean_T rtb_RelationalOperator_pj;
  real_T rtb_Sum_iy;
  real_T rtb_Sum1_gje;
  real_T rtb_UnitDelay4_bi;
  int8_T rtb_Add_a;
  int8_T rtb_Sum_l3;
  real_T rtb_UnitDelay2_a5;
  real_T rtb_Product4_l;
  real_T min_0;
  boolean_T rtb_LogicalOperator10;
  boolean_T rtb_Switch1_p0;
  real_T rtb_Merge_b0d;
  int8_T rtb_MultiportSwitch[71];
  boolean_T rtb_LogicalOperator_d[6];
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  uint16_T rtb_DataTypeConversion_a_0;
  uint32_T qY;

  /* S-Function Block: <S407>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S556>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S407>/motohawk_encoder_average_rpm'
   */
  rtb_DataTypeConversion_i = (real_T)rtb_RPM;

  /* S-Function Block: <S549>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s549_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_f5g = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S549>/Product' incorporates:
   *  MinMax: '<S549>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S549>/motohawk_calibration'
   */
  rtb_DataTypeConversion_f5g /= rt_MAXd_snf(rtb_DataTypeConversion_f5g,
    (RPMFiltConst_DataStore()));

  /* Sum: '<S556>/Sum1' incorporates:
   *  Constant: '<S556>/Constant'
   *  Product: '<S556>/Product'
   *  Product: '<S556>/Product1'
   *  Sum: '<S556>/Sum'
   *  UnitDelay: '<S556>/Unit Delay'
   */
  BaseEngineController_A02_B.s556_Sum1 = (1.0 - rtb_DataTypeConversion_f5g) *
    BaseEngineController_A02_DWork.s556_UnitDelay_DSTATE +
    rtb_DataTypeConversion_i * rtb_DataTypeConversion_f5g;

  /* If: '<S719>/If' incorporates:
   *  ActionPort: '<S727>/Action Port'
   *  ActionPort: '<S728>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S719>/override_enable'
   *  SubSystem: '<S719>/NewValue'
   *  SubSystem: '<S719>/OldValue'
   */
  if ((RPM_Ovr_ovr_DataStore())) {
    /* Inport: '<S727>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S719>/new_value'
     */
    rtb_Merge_c = (RPM_Ovr_new_DataStore());
  } else {
    /* Inport: '<S728>/In1' */
    rtb_Merge_c = BaseEngineController_A02_B.s556_Sum1;
  }

  /* S-Function Block: <S408>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get(&BaseEngineController_A02_B.s408_motohawk_ain1,
      NULL);
  }

  /* DataTypeConversion: '<S563>/Data Type Conversion' */
  rtb_DataTypeConversion_f5g = (real_T)
    BaseEngineController_A02_B.s408_motohawk_ain1;

  /* Product: '<S563>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_i = rtb_DataTypeConversion_f5g * (OilPresGain_DataStore
    ());

  /* Sum: '<S563>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s563_Sum1 = rtb_DataTypeConversion_i +
    (OilPresOfst_DataStore());

  /* Logic: '<S563>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(50) || IsFaultActive(51));

  /* Logic: '<S563>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(50) || IsFaultSuspected(51));

  /* UnitDelay: '<S563>/Unit Delay1' */
  rtb_UnitDelay1_m = BaseEngineController_A02_DWork.s563_UnitDelay1_DSTATE;

  /* If: '<S563>/If' incorporates:
   *  ActionPort: '<S609>/Action Port'
   *  ActionPort: '<S610>/Action Port'
   *  ActionPort: '<S611>/Action Port'
   *  Logic: '<S563>/Logical Operator5'
   *  Logic: '<S563>/Logical Operator6'
   *  SubSystem: '<S563>/If Action Subsystem'
   *  SubSystem: '<S563>/If Action Subsystem1'
   *  SubSystem: '<S563>/If Action Subsystem2'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_m, &rtb_Merge_bw);
  } else if (rtb_RelationalOperator6_k) {
    BaseEngineController_A02_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_bw);
  } else {
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s563_Sum1, &rtb_Merge_bw);
  }

  /* S-Function Block: <S608>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s608_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S608>/Product' incorporates:
   *  MinMax: '<S608>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S608>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= rt_MAXd_snf(rtb_DataTypeConversion_e,
    (OilPresFilterConst_DataStore()));

  /* Sum: '<S613>/Sum1' incorporates:
   *  Constant: '<S613>/Constant'
   *  Product: '<S613>/Product'
   *  Product: '<S613>/Product1'
   *  Sum: '<S613>/Sum'
   *  UnitDelay: '<S613>/Unit Delay'
   */
  rtb_Sum1_i = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_A02_DWork.s613_UnitDelay_DSTATE + rtb_Merge_bw *
    rtb_DataTypeConversion_e;

  /* If: '<S612>/If' incorporates:
   *  ActionPort: '<S614>/Action Port'
   *  ActionPort: '<S615>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S612>/override_enable'
   *  SubSystem: '<S612>/NewValue'
   *  SubSystem: '<S612>/OldValue'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Inport: '<S614>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S612>/new_value'
     */
    BaseEngineController_A02_B.s612_Merge = (OilPres_new_DataStore());
  } else {
    /* Inport: '<S615>/In1' */
    BaseEngineController_A02_B.s612_Merge = rtb_Sum1_i;
  }

  /* If: '<S718>/If' incorporates:
   *  ActionPort: '<S725>/Action Port'
   *  ActionPort: '<S726>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S718>/override_enable'
   *  SubSystem: '<S718>/NewValue'
   *  SubSystem: '<S718>/OldValue'
   */
  if ((Oil_Pressure_Ovr_ovr_DataStore())) {
    /* Inport: '<S725>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S718>/new_value'
     */
    rtb_Merge_ce = (Oil_Pressure_Ovr_new_DataStore());
  } else {
    /* Inport: '<S726>/In1' */
    rtb_Merge_ce = BaseEngineController_A02_B.s612_Merge;
  }

  /* S-Function (motohawk_sfun_trigger): '<S409>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_5248p0006 */
  if (BaseEngineController_A02_DWork.s409_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s409_motohawk_trigger_DWORK1 = 1;
  }

  /* If: '<S720>/If' incorporates:
   *  ActionPort: '<S729>/Action Port'
   *  ActionPort: '<S730>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S720>/override_enable'
   *  SubSystem: '<S720>/NewValue'
   *  SubSystem: '<S720>/OldValue'
   */
  if ((Temp_Guage_Ovr_ovr_DataStore())) {
    /* Inport: '<S729>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S720>/new_value'
     */
    rtb_Merge_i = (Temp_Guage_Ovr_new_DataStore());
  } else {
    /* Inport: '<S730>/In1' */
    rtb_Merge_i = BaseEngineController_A02_B.s649_Merge;
  }

  /* S-Function Block: <S407>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S407>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S407>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_A02_B.s407_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S370>/Data Type Conversion' */
  if (BaseEngineController_A02_B.s407_RPMInst < 65536.0) {
    if (BaseEngineController_A02_B.s407_RPMInst >= 0.0) {
      rtb_DataTypeConversion_a_0 = (uint16_T)
        BaseEngineController_A02_B.s407_RPMInst;
    } else {
      rtb_DataTypeConversion_a_0 = 0U;
    }
  } else {
    rtb_DataTypeConversion_a_0 = MAX_uint16_T;
  }

  /* Sum: '<S370>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    rtb_motohawk_data_read1_d = 0U;
  } else {
    rtb_motohawk_data_read1_d = (uint16_T)i;
  }

  /* RelationalOperator: '<S370>/Relational Operator1' */
  BaseEngineController_A02_B.s370_Stall = (rtb_DataTypeConversion_a_0 <
    rtb_motohawk_data_read1_d);

  /* RelationalOperator: '<S370>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration4'
   */
  BaseEngineController_A02_B.s370_Crank = (rtb_DataTypeConversion_a_0 >
    ((uint16_T)(StallRPMMinThreshold_DataStore())));

  /* RelationalOperator: '<S370>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration1'
   */
  rtb_LogicalOperator1_a = (rtb_DataTypeConversion_a_0 > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S370>/Unit Delay' */
  BaseEngineController_A02_B.s370_UnitDelay =
    BaseEngineController_A02_DWork.s370_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S370>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_4171p001 */
  if (BaseEngineController_A02_DWork.s370_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s370_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S370>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S370>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration2'
   */
  BaseEngineController_A02_B.s370_Run = (rtb_LogicalOperator1_a &&
    (BaseEngineController_A02_B.s391_Switch >= ((uint8_T)(RunLatchTDCs_DataStore
    ()))));

  /* Stateflow: '<S370>/Engine State Machine' */
  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch (BaseEngineController_A02_DWork.s390_is_c2_BaseEngineController_A02) {
   case BaseEngineController_A02_IN_Crank:
    /* During 'Crank': '<S390>:3' */
    if (BaseEngineController_A02_B.s370_Stall) {
      /* Transition: '<S390>:8' */
      /* Exit 'Crank': '<S390>:3' */
      /* Entry 'Stall': '<S390>:1' */
      BaseEngineController_A02_DWork.s390_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall_b;
      BaseEngineController_A02_B.s390_State = 1U;
    } else {
      if (BaseEngineController_A02_B.s370_Run) {
        /* Transition: '<S390>:6' */
        /* Exit 'Crank': '<S390>:3' */
        /* Entry 'Run': '<S390>:2' */
        BaseEngineController_A02_DWork.s390_is_c2_BaseEngineController_A02 =
          BaseEngineController_A02_IN_Run;
        BaseEngineController_A02_B.s390_State = 3U;
      }
    }
    break;

   case BaseEngineController_A02_IN_Run:
    /* During 'Run': '<S390>:2' */
    if (BaseEngineController_A02_B.s370_Stall) {
      /* Transition: '<S390>:7' */
      /* Exit 'Run': '<S390>:2' */
      /* Entry 'Stall': '<S390>:1' */
      BaseEngineController_A02_DWork.s390_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall_b;
      BaseEngineController_A02_B.s390_State = 1U;
    }
    break;

   case BaseEngineController_A02_IN_Stall_b:
    /* During 'Stall': '<S390>:1' */
    if (BaseEngineController_A02_B.s370_Crank) {
      /* Transition: '<S390>:5' */
      /* Exit 'Stall': '<S390>:1' */
      /* Entry 'Crank': '<S390>:3' */
      BaseEngineController_A02_DWork.s390_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Crank;
      BaseEngineController_A02_B.s390_State = 2U;
    }
    break;

   default:
    /* Transition: '<S390>:4' */
    /* Entry 'Stall': '<S390>:1' */
    BaseEngineController_A02_DWork.s390_is_c2_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Stall_b;
    BaseEngineController_A02_B.s390_State = 1U;
    break;
  }

  /* RelationalOperator: '<S715>/Compare' incorporates:
   *  Constant: '<S715>/Constant'
   */
  BaseEngineController_A02_B.s715_Compare =
    (BaseEngineController_A02_B.s390_State == 2);

  /* If: '<S721>/If' incorporates:
   *  ActionPort: '<S731>/Action Port'
   *  ActionPort: '<S732>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S721>/override_enable'
   *  SubSystem: '<S721>/NewValue'
   *  SubSystem: '<S721>/OldValue'
   */
  if ((Engine_Crank_Ovr_ovr_DataStore())) {
    /* Inport: '<S731>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S721>/new_value'
     */
    rtb_Merge_ln = (Engine_Crank_Ovr_new_DataStore());
  } else {
    /* Inport: '<S732>/In1' */
    rtb_Merge_ln = BaseEngineController_A02_B.s715_Compare;
  }

  /* RelationalOperator: '<S716>/Compare' incorporates:
   *  Constant: '<S716>/Constant'
   */
  BaseEngineController_A02_B.s716_Compare =
    (BaseEngineController_A02_B.s390_State == 3);

  /* If: '<S722>/If' incorporates:
   *  ActionPort: '<S733>/Action Port'
   *  ActionPort: '<S734>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S722>/override_enable'
   *  SubSystem: '<S722>/NewValue'
   *  SubSystem: '<S722>/OldValue'
   */
  if ((Engine_On_Ovr_ovr_DataStore())) {
    /* Inport: '<S733>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S722>/new_value'
     */
    rtb_Merge_l1 = (Engine_On_Ovr_new_DataStore());
  } else {
    /* Inport: '<S734>/In1' */
    rtb_Merge_l1 = BaseEngineController_A02_B.s716_Compare;
  }

  /* S-Function Block: <S129>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s129_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_cz = ((real_T) delta) * 0.000001;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S411>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_4619p0009;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_4619p0009,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x000000C0) >> 6) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[1] & 0x000000C0) >> 6) |
        ((messageObj.u1DataArr[0] & 0x0000003F) << 2) ;
      BaseEngineController_A02_B.s411_GensetEnable = (real_T) tmp0;
      BaseEngineController_A02_B.s411_GensetEnable_g = (real_T) tmp1;
      BaseEngineController_A02_B.s411_GensetEnable_a = (real_T) tmp2;
    }
  }

  /* If: '<S414>/If' incorporates:
   *  ActionPort: '<S418>/Action Port'
   *  ActionPort: '<S419>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S414>/override_enable'
   *  SubSystem: '<S414>/NewValue'
   *  SubSystem: '<S414>/OldValue'
   */
  if ((Genset_Enable_Ovr_ovr_DataStore())) {
    /* Inport: '<S418>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S414>/new_value'
     */
    rtb_Merge_p = (Genset_Enable_Ovr_new_DataStore());
  } else {
    /* Inport: '<S419>/In1' */
    rtb_Merge_p = BaseEngineController_A02_B.s411_GensetEnable;
  }

  /* If: '<S415>/If' incorporates:
   *  ActionPort: '<S420>/Action Port'
   *  ActionPort: '<S421>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S415>/override_enable'
   *  SubSystem: '<S415>/NewValue'
   *  SubSystem: '<S415>/OldValue'
   */
  if ((Genset_Load_Ovr_ovr_DataStore())) {
    /* Inport: '<S420>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S415>/new_value'
     */
    rtb_DataTypeConversion_i = (Genset_Load_Ovr_new_DataStore());
  } else {
    /* Inport: '<S421>/In1' */
    rtb_DataTypeConversion_i = BaseEngineController_A02_B.s411_GensetEnable_g;
  }

  /* Stateflow: '<S119>/Remy Control' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration5'
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
    /* Entry 'default': '<S127>:14' */
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
        /* Exit 'cranking': '<S127>:20' */
        /* Entry 'startFail': '<S127>:23' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_startFail;
        BaseEngineController_A02_DWork.s127_count = 0.0;
      } else if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S127>:25' */
        /* Exit 'cranking': '<S127>:20' */
        /* Entry 'default': '<S127>:14' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (BaseEngineController_A02_B.s556_Sum1 >= (Caught_RPM_DataStore()))
      {
        /* Transition: '<S127>:32' */
        /* Exit 'cranking': '<S127>:20' */
        /* Entry 'idle': '<S127>:31' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_idle;
      } else {
        BaseEngineController_A02_DWork.s127_count =
          BaseEngineController_A02_DWork.s127_count + 1.0;
        BaseEngineController_A02_B.s127_cranking = 1.0;
        BaseEngineController_A02_B.s127_idle = 0.0;
        BaseEngineController_A02_B.s127_APPRamp = 0.0;
        BaseEngineController_A02_B.s127_torqueRamp = 0.0;
        BaseEngineController_A02_B.s127_remyEn = 1.0;
        BaseEngineController_A02_B.s127_maxRPM = (Max_Cranking_RPM_DataStore());
        BaseEngineController_A02_B.s127_motorTQ = (Cranking_Torque_DataStore());
        BaseEngineController_A02_B.s127_generatingTQ = 1.0;
      }
      break;

     case BaseEngineController_A02_IN_default:
      /* During 'default': '<S127>:14' */
      if (rtb_Merge_p != 0.0) {
        /* Transition: '<S127>:21' */
        /* Exit 'default': '<S127>:14' */
        /* Entry 'cranking': '<S127>:20' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_cranking;
        BaseEngineController_A02_DWork.s127_count = 0.0;
      } else {
        BaseEngineController_A02_B.s127_cranking = 0.0;
        BaseEngineController_A02_B.s127_idle = 0.0;
        BaseEngineController_A02_B.s127_APPRamp = 0.0;
        BaseEngineController_A02_B.s127_torqueRamp = 0.0;
        BaseEngineController_A02_B.s127_remyEn = 0.0;
        BaseEngineController_A02_B.s127_maxRPM = 0.0;
        BaseEngineController_A02_B.s127_motorTQ = 0.0;
        BaseEngineController_A02_B.s127_generatingTQ = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_generating:
      /* During 'generating': '<S127>:36' */
      if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S127>:39' */
        /* Exit 'generating': '<S127>:36' */
        /* Entry 'default': '<S127>:14' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (!(rtb_DataTypeConversion_i != 0.0)) {
        /* Transition: '<S127>:40' */
        /* Exit 'generating': '<S127>:36' */
        /* Entry 'idle': '<S127>:31' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_idle;
      } else {
        BaseEngineController_A02_B.s127_cranking = 0.0;
        BaseEngineController_A02_B.s127_idle = 0.0;
        BaseEngineController_A02_B.s127_APPRamp = 1.0;
        BaseEngineController_A02_B.s127_torqueRamp = 1.0;
        BaseEngineController_A02_B.s127_remyEn = 1.0;
        BaseEngineController_A02_B.s127_maxRPM = (Max_Generating_RPM_DataStore());
        BaseEngineController_A02_B.s127_motorTQ = 0.0;
        BaseEngineController_A02_B.s127_generatingTQ = 1.0;
      }
      break;

     case BaseEngineController_A02_IN_idle:
      /* During 'idle': '<S127>:31' */
      if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S127>:35' */
        /* Exit 'idle': '<S127>:31' */
        /* Entry 'default': '<S127>:14' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (rtb_DataTypeConversion_i != 0.0) {
        /* Transition: '<S127>:37' */
        /* Exit 'idle': '<S127>:31' */
        /* Entry 'generating': '<S127>:36' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_generating;
      } else {
        BaseEngineController_A02_B.s127_cranking = 0.0;
        BaseEngineController_A02_B.s127_idle = 1.0;
        BaseEngineController_A02_B.s127_APPRamp = 0.0;
        BaseEngineController_A02_B.s127_torqueRamp = 0.0;
        BaseEngineController_A02_B.s127_remyEn = 1.0;
        BaseEngineController_A02_B.s127_maxRPM = (Max_Generating_RPM_DataStore());
        BaseEngineController_A02_B.s127_motorTQ = 0.0;
        BaseEngineController_A02_B.s127_generatingTQ = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_startFail:
      /* During 'startFail': '<S127>:23' */
      if (!(rtb_Merge_p != 0.0)) {
        /* Transition: '<S127>:26' */
        /* Exit 'startFail': '<S127>:23' */
        /* Entry 'default': '<S127>:14' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (BaseEngineController_A02_DWork.s127_count >=
                 (Crank_Wait_Before_Retry_DataStore())) {
        /* Transition: '<S127>:29' */
        /* Exit 'startFail': '<S127>:23' */
        /* Entry 'cranking': '<S127>:20' */
        BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_cranking;
        BaseEngineController_A02_DWork.s127_count = 0.0;
      } else {
        BaseEngineController_A02_DWork.s127_count =
          BaseEngineController_A02_DWork.s127_count + 1.0;
        BaseEngineController_A02_B.s127_cranking = 0.0;
        BaseEngineController_A02_B.s127_idle = 0.0;
        BaseEngineController_A02_B.s127_APPRamp = 0.0;
        BaseEngineController_A02_B.s127_torqueRamp = 0.0;
        BaseEngineController_A02_B.s127_remyEn = 0.0;
        BaseEngineController_A02_B.s127_maxRPM = 0.0;
        BaseEngineController_A02_B.s127_motorTQ = 0.0;
        BaseEngineController_A02_B.s127_generatingTQ = 0.0;
      }
      break;

     default:
      /* Transition: '<S127>:41' */
      /* Entry 'default': '<S127>:14' */
      BaseEngineController_A02_DWork.s127_is_c5_BaseEngineController_A02 =
        BaseEngineController_A02_IN_default;
      break;
    }
  }

  /* Switch: '<S129>/Switch' incorporates:
   *  Constant: '<S129>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S129>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S129>/motohawk_delta_time'
   *  Sum: '<S129>/Sum'
   */
  if (BaseEngineController_A02_B.s127_torqueRamp >= 1.0) {
    rtb_Switch_j5 = rtb_motohawk_delta_time_cz + TorqueRampTime_DataStore();
  } else {
    rtb_Switch_j5 = 0.0;
  }

  /* Switch: '<S119>/Switch' incorporates:
   *  Product: '<S119>/Product1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S119>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_prelookup): '<S119>/motohawk_prelookup1'
   */
  if (BaseEngineController_A02_B.s127_APPRamp > 0.0) {
    /* S-Function Block: <S119>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (TQ_PrelookupIn_DataStore()) = rtb_Switch_j5;
      (TQ_PrelookupIdx_DataStore()) = TablePrelookup_real_T(rtb_Switch_j5,
        (TQ_PrelookupIdxArr_DataStore()), 7, (TQ_PrelookupIdx_DataStore()));
      rtb_motohawk_prelookup1_kg = (TQ_PrelookupIdx_DataStore());
    }

    /* S-Function Block: <S119>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_kg, (real_T *) ((TQ_InterpolationTbl_DataStore())),
         7);
      (TQ_Interpolation_DataStore()) = rtb_motohawk_interpolation_1d1_c;
    }

    BaseEngineController_A02_B.s119_generatingTQ =
      rtb_motohawk_interpolation_1d1_c *
      BaseEngineController_A02_B.s127_torqueRamp;
  } else {
    BaseEngineController_A02_B.s119_generatingTQ =
      BaseEngineController_A02_B.s127_generatingTQ;
  }

  /* RelationalOperator: '<S717>/Compare' incorporates:
   *  Constant: '<S717>/Constant'
   */
  BaseEngineController_A02_B.s717_Compare =
    (BaseEngineController_A02_B.s119_generatingTQ >= 3.0);

  /* If: '<S723>/If' incorporates:
   *  ActionPort: '<S735>/Action Port'
   *  ActionPort: '<S736>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S723>/override_enable'
   *  SubSystem: '<S723>/NewValue'
   *  SubSystem: '<S723>/OldValue'
   */
  if ((Load_On_Ovr_ovr_DataStore())) {
    /* Inport: '<S735>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S723>/new_value'
     */
    rtb_Merge_mn = (Load_On_Ovr_new_DataStore());
  } else {
    /* Inport: '<S736>/In1' */
    rtb_Merge_mn = BaseEngineController_A02_B.s717_Compare;
  }

  /* If: '<S724>/If' incorporates:
   *  ActionPort: '<S737>/Action Port'
   *  ActionPort: '<S738>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S724>/override_enable'
   *  SubSystem: '<S724>/NewValue'
   *  SubSystem: '<S724>/OldValue'
   */
  if ((Fault_Ovr_ovr_DataStore())) {
    /* Inport: '<S737>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S724>/new_value'
     */
    rtb_Merge_du = (Fault_Ovr_new_DataStore());
  } else {
    /* Inport: '<S738>/In1' incorporates:
     *  Constant: '<S713>/Constant'
     */
    rtb_Merge_du = 0.0;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S713>/Send CAN Messages' */
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
        if (rtb_Merge_c < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_c > 10230.0000000000F) {
          tmp0 = (uint16_T)(1023U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_c / (10.0000000000F));
        }

        if (rtb_Merge_ce < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_ce > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_ce);
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

  /* If: '<S739>/If' incorporates:
   *  ActionPort: '<S752>/Action Port'
   *  ActionPort: '<S753>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S739>/override_enable'
   *  SubSystem: '<S739>/NewValue'
   *  SubSystem: '<S739>/OldValue'
   */
  if ((Run_Request_Ovr_ovr_DataStore())) {
    /* Inport: '<S752>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S739>/new_value'
     */
    rtb_Merge_k = (Run_Request_Ovr_new_DataStore());
  } else {
    /* Inport: '<S753>/In1' */
    rtb_Merge_k = BaseEngineController_A02_B.s127_remyEn;
  }

  /* If: '<S740>/If' incorporates:
   *  ActionPort: '<S754>/Action Port'
   *  ActionPort: '<S755>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S740>/override_enable'
   *  SubSystem: '<S740>/NewValue'
   *  SubSystem: '<S740>/OldValue'
   */
  if ((Control_Mode_Cmd_Ovr_ovr_DataStore())) {
    /* Inport: '<S754>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S740>/new_value'
     */
    rtb_Merge_de = (Control_Mode_Cmd_Ovr_new_DataStore());
  } else {
    /* Inport: '<S755>/In1' incorporates:
     *  Constant: '<S714>/Constant6'
     */
    rtb_Merge_de = 1.0;
  }

  /* If: '<S744>/If' incorporates:
   *  ActionPort: '<S762>/Action Port'
   *  ActionPort: '<S763>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S744>/override_enable'
   *  SubSystem: '<S744>/NewValue'
   *  SubSystem: '<S744>/OldValue'
   */
  if ((Motoring_Tq_Curve_Ovr_ovr_DataStore())) {
    /* Inport: '<S762>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S744>/new_value'
     */
    rtb_Merge_g = (Motoring_Tq_Curve_Ovr_new_DataStore());
  } else {
    /* Inport: '<S763>/In1' incorporates:
     *  Constant: '<S714>/Constant4'
     */
    rtb_Merge_g = 0.0;
  }

  /* If: '<S745>/If' incorporates:
   *  ActionPort: '<S764>/Action Port'
   *  ActionPort: '<S765>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S745>/override_enable'
   *  SubSystem: '<S745>/NewValue'
   *  SubSystem: '<S745>/OldValue'
   */
  if ((Generating_Tq_Curve_Ovr_ovr_DataStore())) {
    /* Inport: '<S764>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S745>/new_value'
     */
    rtb_Merge_cg = (Generating_Tq_Curve_Ovr_new_DataStore());
  } else {
    /* Inport: '<S765>/In1' incorporates:
     *  Constant: '<S714>/Constant5'
     */
    rtb_Merge_cg = 0.0;
  }

  /* If: '<S746>/If' incorporates:
   *  ActionPort: '<S766>/Action Port'
   *  ActionPort: '<S767>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S746>/override_enable'
   *  SubSystem: '<S746>/NewValue'
   *  SubSystem: '<S746>/OldValue'
   */
  if ((Speed_Voltage_Torque_CMD_Ovr_ovr_DataStore())) {
    /* Inport: '<S766>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S746>/new_value'
     */
    rtb_Merge_ig = (Speed_Voltage_Torque_CMD_Ovr_new_DataStore());
  } else {
    /* Inport: '<S767>/In1' */
    rtb_Merge_ig = BaseEngineController_A02_B.s127_maxRPM;
  }

  /* If: '<S747>/If' incorporates:
   *  ActionPort: '<S768>/Action Port'
   *  ActionPort: '<S769>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S747>/override_enable'
   *  SubSystem: '<S747>/NewValue'
   *  SubSystem: '<S747>/OldValue'
   */
  if ((Motoring_Torque_Lim_Ovr_ovr_DataStore())) {
    /* Inport: '<S768>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S747>/new_value'
     */
    rtb_Merge_d3 = (Motoring_Torque_Lim_Ovr_new_DataStore());
  } else {
    /* Inport: '<S769>/In1' */
    rtb_Merge_d3 = BaseEngineController_A02_B.s127_motorTQ;
  }

  /* If: '<S748>/If' incorporates:
   *  ActionPort: '<S770>/Action Port'
   *  ActionPort: '<S771>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S748>/override_enable'
   *  SubSystem: '<S748>/NewValue'
   *  SubSystem: '<S748>/OldValue'
   */
  if ((Generating_Torque_Lim_Ovr_ovr_DataStore())) {
    /* Inport: '<S770>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S748>/new_value'
     */
    rtb_Merge_gg = (Generating_Torque_Lim_Ovr_new_DataStore());
  } else {
    /* Inport: '<S771>/In1' */
    rtb_Merge_gg = BaseEngineController_A02_B.s119_generatingTQ;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S714>/Send CAN Messages' */
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

  /* If: '<S751>/If' incorporates:
   *  ActionPort: '<S776>/Action Port'
   *  ActionPort: '<S777>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S751>/override_enable'
   *  SubSystem: '<S751>/NewValue'
   *  SubSystem: '<S751>/OldValue'
   */
  if ((XDRP_Supply_State_Ovr_ovr_DataStore())) {
    /* Inport: '<S776>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S751>/new_value'
     */
    rtb_Merge_cq = (XDRP_Supply_State_Ovr_new_DataStore());
  } else {
    /* Inport: '<S777>/In1' incorporates:
     *  Constant: '<S714>/Constant'
     */
    rtb_Merge_cq = 0.0;
  }

  /* If: '<S741>/If' incorporates:
   *  ActionPort: '<S756>/Action Port'
   *  ActionPort: '<S757>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S741>/override_enable'
   *  SubSystem: '<S741>/NewValue'
   *  SubSystem: '<S741>/OldValue'
   */
  if ((Aux_PWM_State_Ovr_ovr_DataStore())) {
    /* Inport: '<S756>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S741>/new_value'
     */
    rtb_Merge_gc = (Aux_PWM_State_Ovr_new_DataStore());
  } else {
    /* Inport: '<S757>/In1' incorporates:
     *  Constant: '<S714>/Constant1'
     */
    rtb_Merge_gc = 0.0;
  }

  /* If: '<S742>/If' incorporates:
   *  ActionPort: '<S758>/Action Port'
   *  ActionPort: '<S759>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S742>/override_enable'
   *  SubSystem: '<S742>/NewValue'
   *  SubSystem: '<S742>/OldValue'
   */
  if ((Aux_PWM_DutyCycle_Ovr_ovr_DataStore())) {
    /* Inport: '<S758>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S742>/new_value'
     */
    rtb_Merge_eb = (Aux_PWM_DutyCycle_Ovr_new_DataStore());
  } else {
    /* Inport: '<S759>/In1' incorporates:
     *  Constant: '<S714>/Constant2'
     */
    rtb_Merge_eb = 0.0;
  }

  /* If: '<S743>/If' incorporates:
   *  ActionPort: '<S760>/Action Port'
   *  ActionPort: '<S761>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S743>/override_enable'
   *  SubSystem: '<S743>/NewValue'
   *  SubSystem: '<S743>/OldValue'
   */
  if ((Aux_PWM_Freq_Ovr_ovr_DataStore())) {
    /* Inport: '<S760>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S743>/new_value'
     */
    rtb_Merge_bi = (Aux_PWM_Freq_Ovr_new_DataStore());
  } else {
    /* Inport: '<S761>/In1' incorporates:
     *  Constant: '<S714>/Constant3'
     */
    rtb_Merge_bi = 0.0;
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S714>/Send CAN Messages2' */
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

  /* If: '<S749>/If' incorporates:
   *  ActionPort: '<S772>/Action Port'
   *  ActionPort: '<S773>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S749>/override_enable'
   *  SubSystem: '<S749>/NewValue'
   *  SubSystem: '<S749>/OldValue'
   */
  if ((SecondartSpeedLim_CenterPT_Ovr_ovr_DataStore())) {
    /* Inport: '<S772>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S749>/new_value'
     */
    rtb_Merge_df = (SecondartSpeedLim_CenterPT_Ovr_new_DataStore());
  } else {
    /* Inport: '<S773>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S714>/motohawk_calibration'
     */
    rtb_Merge_df = (SecondarySpdLim_Cal_DataStore());
  }

  /* If: '<S750>/If' incorporates:
   *  ActionPort: '<S774>/Action Port'
   *  ActionPort: '<S775>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S750>/override_enable'
   *  SubSystem: '<S750>/NewValue'
   *  SubSystem: '<S750>/OldValue'
   */
  if ((SecondaryVoltLim_CenterPT_Ovr_ovr_DataStore())) {
    /* Inport: '<S774>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S750>/new_value'
     */
    rtb_Merge_a = (SecondaryVoltLim_CenterPT_Ovr_new_DataStore());
  } else {
    /* Inport: '<S775>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S714>/motohawk_calibration1'
     */
    rtb_Merge_a = (SecondaryVoltLim_Cal_DataStore());
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S714>/Send CAN Messages1' */
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

  /* S-Function (motohawk_sfun_probe): '<S714>/motohawk_probe7' */
  (SecondarySpeedLim_CenterPT_Prb_DataStore()) = (SecondarySpdLim_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S714>/motohawk_probe8' */
  (SecondaryVoltLim_CenterPT_Prb_DataStore()) = (SecondaryVoltLim_Cal_DataStore());

  /* Outputs for enable SubSystem: '<S7>/Stall' incorporates:
   *  Constant: '<S124>/Constant'
   *  EnablePort: '<S123>/Enable'
   *  RelationalOperator: '<S124>/RelOp'
   */
  if (BaseEngineController_A02_B.s390_State == 1) {
    if (!((int32_T)BaseEngineController_A02_DWork.s7_Stall_MODE != 0)) {
      /* InitializeConditions for UnitDelay: '<S270>/Unit Delay' */
      BaseEngineController_A02_DWork.s270_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S271>/Unit Delay' */
      BaseEngineController_A02_DWork.s271_UnitDelay_DSTATE = 0.0;
      BaseEngineController_A02_DWork.s7_Stall_MODE = TRUE;
    }

    /* UnitDelay: '<S270>/Unit Delay' */
    BaseEngineController_A02_B.s270_UnitDelay =
      BaseEngineController_A02_DWork.s270_UnitDelay_DSTATE;

    /* RelationalOperator: '<S268>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s270_UnitDelay <
      (FuelPumpStartTime_DataStore()));

    /* S-Function Block: <S270>/motohawk_delta_time */
    rtb_motohawk_delta_time_o = 0.005;

    /* Sum: '<S270>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S270>/motohawk_delta_time'
     */
    rtb_DataTypeConversion_i = rtb_motohawk_delta_time_o +
      BaseEngineController_A02_B.s270_UnitDelay;

    /* UnitDelay: '<S271>/Unit Delay' */
    BaseEngineController_A02_B.s271_UnitDelay =
      BaseEngineController_A02_DWork.s271_UnitDelay_DSTATE;

    /* RelationalOperator: '<S269>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S269>/motohawk_calibration'
     */
    rtb_RelationalOperator_pj = (BaseEngineController_A02_B.s271_UnitDelay <
      (OilPumpStartTime_DataStore()));

    /* S-Function Block: <S271>/motohawk_delta_time */
    rtb_motohawk_delta_time_ny = 0.005;

    /* Sum: '<S271>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S271>/motohawk_delta_time'
     */
    rtb_Sum_iy = rtb_motohawk_delta_time_ny +
      BaseEngineController_A02_B.s271_UnitDelay;

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
    BaseEngineController_A02_B.s120_OILP = rtb_RelationalOperator_pj;

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

    /* Update for UnitDelay: '<S270>/Unit Delay' */
    BaseEngineController_A02_DWork.s270_UnitDelay_DSTATE =
      rtb_DataTypeConversion_i;

    /* Update for UnitDelay: '<S271>/Unit Delay' */
    BaseEngineController_A02_DWork.s271_UnitDelay_DSTATE = rtb_Sum_iy;
  } else {
    if ((int32_T)BaseEngineController_A02_DWork.s7_Stall_MODE) {
      BaseEngineController_A02_DWork.s7_Stall_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S7>/Stall' */

  /* S-Function (motohawk_sfun_data_read): '<S410>/motohawk_data_read1' */
  BaseEngineController_A02_B.s410_motohawk_data_read1 = APP_DataStore();

  /* If: '<S666>/If' incorporates:
   *  ActionPort: '<S703>/Action Port'
   *  ActionPort: '<S704>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S666>/override_enable'
   *  SubSystem: '<S666>/NewValue'
   *  SubSystem: '<S666>/OldValue'
   */
  if ((APP1_Ovr_ovr_DataStore())) {
    /* Inport: '<S703>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S666>/new_value'
     */
    BaseEngineController_A02_B.s666_Merge = (APP1_Ovr_new_DataStore());
  } else {
    /* Inport: '<S704>/In1' */
    BaseEngineController_A02_B.s666_Merge =
      BaseEngineController_A02_B.s410_motohawk_data_read1;
  }

  /* S-Function Block: <S410>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get(&rtb_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S664>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S410>/motohawk_ain9'
   */
  rtb_DataTypeConversion_i = (real_T)rtb_motohawk_ain9;

  /* Switch: '<S664>/Switch' incorporates:
   *  Fcn: '<S664>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration2'
   */
  if ((TPS2Rev_Polarity_DataStore())) {
    BaseEngineController_A02_B.s664_Switch = 1023.0 - rtb_DataTypeConversion_i;
  } else {
    BaseEngineController_A02_B.s664_Switch = rtb_DataTypeConversion_i;
  }

  /* S-Function (motohawk_sfun_data_read): '<S684>/motohawk_data_read' */
  rtb_motohawk_data_read1_d = TPS2Raw_Adpt_Low_DataStore();

  /* MinMax: '<S684>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration9'
   */
  rtb_DataTypeConversion_i = (real_T)rtb_motohawk_data_read1_d;
  BaseEngineController_A02_B.s684_MinMax = rt_MINd_snf(rtb_DataTypeConversion_i,
    (TPS2Adapt_Low_Max_DataStore()));

  /* Sum: '<S664>/Sum2' */
  rtb_DataTypeConversion_i = BaseEngineController_A02_B.s664_Switch -
    BaseEngineController_A02_B.s684_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S684>/motohawk_data_read1' */
  rtb_motohawk_data_read1_d = TPS2Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S684>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration11'
   */
  rtb_Sum_iy = (real_T)rtb_motohawk_data_read1_d;
  BaseEngineController_A02_B.s684_MinMax1 = rt_MAXd_snf(rtb_Sum_iy,
    (TPS2Adapt_Hi_Min_DataStore()));

  /* Gain: '<S664>/Gain2' incorporates:
   *  Product: '<S664>/Product1'
   *  Sum: '<S664>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_i /
    (BaseEngineController_A02_B.s684_MinMax1 -
     BaseEngineController_A02_B.s684_MinMax) * 100.0;

  /* MinMax: '<S688>/MinMax' incorporates:
   *  Constant: '<S664>/Constant1'
   */
  rtb_DataTypeConversion_e = rt_MAXd_snf(rtb_DataTypeConversion_e, 0.0);

  /* MinMax: '<S688>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration1'
   */
  BaseEngineController_A02_B.s688_MinMax1 = rt_MINd_snf(rtb_DataTypeConversion_e,
    (TPS2MaxLimit_DataStore()));

  /* S-Function Block: <S686>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s686_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S686>/Product' incorporates:
   *  MinMax: '<S686>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S686>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= rt_MAXd_snf(rtb_DataTypeConversion_e,
    (TPS2FilterConst_DataStore()));

  /* Sum: '<S694>/Sum1' incorporates:
   *  Constant: '<S694>/Constant'
   *  Product: '<S694>/Product'
   *  Product: '<S694>/Product1'
   *  Sum: '<S694>/Sum'
   *  UnitDelay: '<S694>/Unit Delay'
   */
  rtb_Sum1_d = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_A02_DWork.s694_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s688_MinMax1 * rtb_DataTypeConversion_e;

  /* Logic: '<S687>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S687>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S687>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(68) || IsFaultActive(69));

  /* Logic: '<S687>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S687>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S687>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(68) || IsFaultSuspected(69));

  /* UnitDelay: '<S687>/Unit Delay1' */
  rtb_UnitDelay1_d = BaseEngineController_A02_DWork.s687_UnitDelay1_DSTATE;

  /* If: '<S687>/If' incorporates:
   *  ActionPort: '<S695>/Action Port'
   *  ActionPort: '<S696>/Action Port'
   *  ActionPort: '<S697>/Action Port'
   *  Logic: '<S687>/Logical Operator5'
   *  Logic: '<S687>/Logical Operator6'
   *  SubSystem: '<S687>/If Action Subsystem'
   *  SubSystem: '<S687>/If Action Subsystem1'
   *  SubSystem: '<S687>/If Action Subsystem2'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_d, &rtb_Merge_py);
  } else if (rtb_RelationalOperator6_k) {
    BaseEngineController_A02_IfActionSubsystem((TPS2DfltValue_DataStore()),
      &rtb_Merge_py);
  } else {
    BaseEngineController_A02_IfActionSubsystem(rtb_Sum1_d, &rtb_Merge_py);
  }

  /* If: '<S698>/If' incorporates:
   *  ActionPort: '<S699>/Action Port'
   *  ActionPort: '<S700>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S698>/override_enable'
   *  SubSystem: '<S698>/NewValue'
   *  SubSystem: '<S698>/OldValue'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Inport: '<S699>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S698>/new_value'
     */
    BaseEngineController_A02_B.s698_Merge = (TPS2_new_DataStore());
  } else {
    /* Inport: '<S700>/In1' */
    BaseEngineController_A02_B.s698_Merge = rtb_Merge_py;
  }

  /* S-Function Block: <S410>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S663>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S410>/motohawk_ain6'
   */
  rtb_DataTypeConversion_i = (real_T)rtb_motohawk_ain6;

  /* Switch: '<S663>/Switch' incorporates:
   *  Fcn: '<S663>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration2'
   */
  if ((TPS1Rev_Polarity_DataStore())) {
    BaseEngineController_A02_B.s663_Switch = 1023.0 - rtb_DataTypeConversion_i;
  } else {
    BaseEngineController_A02_B.s663_Switch = rtb_DataTypeConversion_i;
  }

  /* S-Function (motohawk_sfun_data_read): '<S667>/motohawk_data_read' */
  rtb_motohawk_data_read1_d = TPS1Raw_Adpt_Low_DataStore();

  /* MinMax: '<S667>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration9'
   */
  rtb_DataTypeConversion_i = (real_T)rtb_motohawk_data_read1_d;
  BaseEngineController_A02_B.s667_MinMax = rt_MINd_snf(rtb_DataTypeConversion_i,
    (TPS1Adapt_Low_Max_DataStore()));

  /* Sum: '<S663>/Sum2' */
  rtb_DataTypeConversion_i = BaseEngineController_A02_B.s663_Switch -
    BaseEngineController_A02_B.s667_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S667>/motohawk_data_read1' */
  rtb_motohawk_data_read1_d = TPS1Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S667>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration11'
   */
  rtb_Sum_iy = (real_T)rtb_motohawk_data_read1_d;
  BaseEngineController_A02_B.s667_MinMax1 = rt_MAXd_snf(rtb_Sum_iy,
    (TPS1Adapt_Hi_Min_DataStore()));

  /* Gain: '<S663>/Gain2' incorporates:
   *  Product: '<S663>/Product1'
   *  Sum: '<S663>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_i /
    (BaseEngineController_A02_B.s667_MinMax1 -
     BaseEngineController_A02_B.s667_MinMax) * 100.0;

  /* MinMax: '<S671>/MinMax' incorporates:
   *  Constant: '<S663>/Constant1'
   */
  rtb_DataTypeConversion_e = rt_MAXd_snf(rtb_DataTypeConversion_e, 0.0);

  /* MinMax: '<S671>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration1'
   */
  BaseEngineController_A02_B.s671_MinMax1 = rt_MINd_snf(rtb_DataTypeConversion_e,
    (TPS1MaxLimit_DataStore()));

  /* S-Function Block: <S669>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s669_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S669>/Product' incorporates:
   *  MinMax: '<S669>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S669>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= rt_MAXd_snf(rtb_DataTypeConversion_e,
    (TPS1FilterConst_DataStore()));

  /* Sum: '<S677>/Sum1' incorporates:
   *  Constant: '<S677>/Constant'
   *  Product: '<S677>/Product'
   *  Product: '<S677>/Product1'
   *  Sum: '<S677>/Sum'
   *  UnitDelay: '<S677>/Unit Delay'
   */
  rtb_Sum1_m2 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_A02_DWork.s677_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s671_MinMax1 * rtb_DataTypeConversion_e;

  /* Logic: '<S670>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S670>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S670>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(62) || IsFaultActive(63));

  /* Logic: '<S670>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S670>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S670>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(62) || IsFaultSuspected(63));

  /* UnitDelay: '<S670>/Unit Delay1' */
  rtb_UnitDelay1_j = BaseEngineController_A02_DWork.s670_UnitDelay1_DSTATE;

  /* If: '<S670>/If' incorporates:
   *  ActionPort: '<S678>/Action Port'
   *  ActionPort: '<S679>/Action Port'
   *  ActionPort: '<S680>/Action Port'
   *  Logic: '<S670>/Logical Operator5'
   *  Logic: '<S670>/Logical Operator6'
   *  SubSystem: '<S670>/If Action Subsystem'
   *  SubSystem: '<S670>/If Action Subsystem1'
   *  SubSystem: '<S670>/If Action Subsystem2'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_j, &rtb_Merge_h);
  } else if (rtb_RelationalOperator6_k) {
    BaseEngineController_A02_IfActionSubsystem((TPS1DfltValue_DataStore()),
      &rtb_Merge_h);
  } else {
    BaseEngineController_A02_IfActionSubsystem(rtb_Sum1_m2, &rtb_Merge_h);
  }

  /* If: '<S681>/If' incorporates:
   *  ActionPort: '<S682>/Action Port'
   *  ActionPort: '<S683>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S681>/override_enable'
   *  SubSystem: '<S681>/NewValue'
   *  SubSystem: '<S681>/OldValue'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Inport: '<S682>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S681>/new_value'
     */
    BaseEngineController_A02_B.s681_Merge = (TPS1_new_DataStore());
  } else {
    /* Inport: '<S683>/In1' */
    BaseEngineController_A02_B.s681_Merge = rtb_Merge_h;
  }

  /* Logic: '<S374>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S374>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S374>/motohawk_fault_status1'
   */
  rtb_LogicalOperator1_a = (IsFaultActive(62) || IsFaultActive(63));

  /* Logic: '<S374>/Logical Operator6' incorporates:
   *  Logic: '<S374>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S374>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S374>/motohawk_fault_status3'
   */
  rtb_RelationalOperator_pj = (rtb_LogicalOperator1_a && (IsFaultActive(68) ||
    IsFaultActive(69)));

  /* Switch: '<S374>/Switch2' incorporates:
   *  Logic: '<S374>/Logical Operator1'
   *  MinMax: '<S374>/MinMax'
   *  S-Function (motohawk_sfun_fault_status): '<S374>/motohawk_fault_status4'
   */
  if (rtb_RelationalOperator_pj || IsFaultActive(70)) {
    BaseEngineController_A02_B.s374_Switch2 = rt_MAXd_snf
      (BaseEngineController_A02_B.s698_Merge,
       BaseEngineController_A02_B.s681_Merge);
  } else {
    /* Switch: '<S374>/Switch1' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s374_Switch2 =
        BaseEngineController_A02_B.s698_Merge;
    } else {
      BaseEngineController_A02_B.s374_Switch2 =
        BaseEngineController_A02_B.s681_Merge;
    }
  }

  /* Outputs for enable SubSystem: '<S7>/Crank' incorporates:
   *  Constant: '<S118>/Constant'
   *  EnablePort: '<S117>/Enable'
   *  RelationalOperator: '<S118>/RelOp'
   */
  if (BaseEngineController_A02_B.s390_State == 2) {
    if (!((int32_T)BaseEngineController_A02_DWork.s7_Crank_MODE != 0)) {
      BaseEngineController_A02_DWork.s7_Crank_MODE = TRUE;
    }

    /* MultiPortSwitch: '<S126>/Multiport Switch2' incorporates:
     *  Constant: '<S126>/ClearFloodFueling3'
     *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read1'
     */
    if ((int32_T)AirControlSource_DataStore() == 0) {
      rtb_DataTypeConversion_i = 0.0;
    } else {
      rtb_DataTypeConversion_i = (OpenThrottleFPCScalar_DataStore());
    }

    /* MultiPortSwitch: '<S126>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read1'
     */
    if ((int32_T)AirControlSource_DataStore() == 0) {
      rtb_motohawk_replicate1 = BaseEngineController_A02_B.s666_Merge;
    } else {
      rtb_motohawk_replicate1 = BaseEngineController_A02_B.s374_Switch2;
    }

    /* Sum: '<S126>/Add' incorporates:
     *  Constant: '<S126>/ClearFloodFueling1'
     *  Gain: '<S126>/Gain'
     *  Product: '<S126>/Product1'
     */
    rtb_DataTypeConversion_i = 0.01 * rtb_motohawk_replicate1 *
      rtb_DataTypeConversion_i + 1.0;

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
        (BaseEngineController_A02_B.s649_Merge, (CrankECT05IdxArr_DataStore()),
         5, (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_p = (CrankECT05Idx_DataStore());
    }

    /* S-Function Block: <S117>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_A02_B.s556_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s556_Sum1, (CrankRPM05IdxArr_DataStore()), 5,
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

    /* Product: '<S126>/Product' */
    rtb_Product_f5 = rtb_DataTypeConversion_i * rtb_motohawk_replicate1;

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
      rtb_motohawk_interpolation_2d1_ay = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_p, rtb_motohawk_prelookup_fj, (real_T *)
         ((CrankSpkEnergyMap_DataStore())), 5, 5);
      (CrankSpkEnergy_DataStore()) = rtb_motohawk_interpolation_2d1_ay;
    }

    /* ZeroOrderHold: '<S117>/Zero-Order Hold4' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S117>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S117>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S117>/motohawk_prelookup1'
     */
    BaseEngineController_A02_B.s120_SparkEnergy =
      rtb_motohawk_interpolation_2d1_ay;

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
    if ((int32_T)BaseEngineController_A02_DWork.s7_Crank_MODE) {
      BaseEngineController_A02_DWork.s7_Crank_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S7>/Crank' */

  /* S-Function (motohawk_sfun_trigger): '<S562>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_5065p0009 */
  if (BaseEngineController_A02_DWork.s562_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s562_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S560>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_i = BaseEngineController_A02_B.s562_Merge *
    (MAPGain_DataStore());

  /* Sum: '<S560>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s560_Sum1 = rtb_DataTypeConversion_i +
    (MAPOfst_DataStore());

  /* Logic: '<S560>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(36) || IsFaultActive(37));

  /* Logic: '<S560>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(36) || IsFaultSuspected(37));

  /* UnitDelay: '<S560>/Unit Delay1' */
  rtb_UnitDelay1_n = BaseEngineController_A02_DWork.s560_UnitDelay1_DSTATE;

  /* If: '<S560>/If' incorporates:
   *  ActionPort: '<S591>/Action Port'
   *  ActionPort: '<S592>/Action Port'
   *  ActionPort: '<S593>/Action Port'
   *  Logic: '<S560>/Logical Operator5'
   *  Logic: '<S560>/Logical Operator6'
   *  SubSystem: '<S560>/If Action Subsystem'
   *  SubSystem: '<S560>/If Action Subsystem1'
   *  SubSystem: '<S560>/If Action Subsystem2'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_n, &rtb_Merge_bn);
  } else if (rtb_RelationalOperator6_k) {
    BaseEngineController_A02_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_bn);
  } else {
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s560_Sum1, &rtb_Merge_bn);
  }

  /* S-Function Block: <S590>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s590_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S590>/Product' incorporates:
   *  MinMax: '<S590>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S590>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= rt_MAXd_snf(rtb_DataTypeConversion_e,
    (MAPFilterConst_DataStore()));

  /* Sum: '<S595>/Sum1' incorporates:
   *  Constant: '<S595>/Constant'
   *  Product: '<S595>/Product'
   *  Product: '<S595>/Product1'
   *  Sum: '<S595>/Sum'
   *  UnitDelay: '<S595>/Unit Delay'
   */
  rtb_Sum1_pb = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_A02_DWork.s595_UnitDelay_DSTATE + rtb_Merge_bn *
    rtb_DataTypeConversion_e;

  /* If: '<S594>/If' incorporates:
   *  ActionPort: '<S596>/Action Port'
   *  ActionPort: '<S597>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S594>/override_enable'
   *  SubSystem: '<S594>/NewValue'
   *  SubSystem: '<S594>/OldValue'
   */
  if ((MAP_ovr_DataStore())) {
    /* Inport: '<S596>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S594>/new_value'
     */
    BaseEngineController_A02_B.s594_Merge = (MAP_new_DataStore());
  } else {
    /* Inport: '<S597>/In1' */
    BaseEngineController_A02_B.s594_Merge = rtb_Sum1_pb;
  }

  /* S-Function Block: <S408>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get(&rtb_DataTypeConversion6_j, NULL);
  }

  /* Gain: '<S408>/Gain' */
  BaseEngineController_A02_B.s408_Gain = 100.0 * (real_T)
    rtb_DataTypeConversion6_j;

  /* Product: '<S558>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_i = BaseEngineController_A02_B.s408_Gain *
    (FuelSensGain_DataStore());

  /* Sum: '<S558>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s558_Sum1 = rtb_DataTypeConversion_i +
    (FuelSensOfst_DataStore());

  /* Logic: '<S558>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(23) || IsFaultActive(24));

  /* Logic: '<S558>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(23) || IsFaultSuspected(24));

  /* UnitDelay: '<S558>/Unit Delay1' */
  rtb_UnitDelay1_p = BaseEngineController_A02_DWork.s558_UnitDelay1_DSTATE;

  /* If: '<S558>/If' incorporates:
   *  ActionPort: '<S575>/Action Port'
   *  ActionPort: '<S576>/Action Port'
   *  ActionPort: '<S577>/Action Port'
   *  Logic: '<S558>/Logical Operator5'
   *  Logic: '<S558>/Logical Operator6'
   *  SubSystem: '<S558>/If Action Subsystem'
   *  SubSystem: '<S558>/If Action Subsystem1'
   *  SubSystem: '<S558>/If Action Subsystem2'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_p, &rtb_Merge_k1);
  } else if (rtb_RelationalOperator6_k) {
    BaseEngineController_A02_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_k1);
  } else {
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s558_Sum1, &rtb_Merge_k1);
  }

  /* S-Function Block: <S574>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s574_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S574>/Product' incorporates:
   *  MinMax: '<S574>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S574>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= rt_MAXd_snf(rtb_DataTypeConversion_e,
    (FuelSensFilterConst_DataStore()));

  /* Sum: '<S579>/Sum1' incorporates:
   *  Constant: '<S579>/Constant'
   *  Product: '<S579>/Product'
   *  Product: '<S579>/Product1'
   *  Sum: '<S579>/Sum'
   *  UnitDelay: '<S579>/Unit Delay'
   */
  rtb_Sum1_nl = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_A02_DWork.s579_UnitDelay_DSTATE + rtb_Merge_k1 *
    rtb_DataTypeConversion_e;

  /* If: '<S578>/If' incorporates:
   *  ActionPort: '<S580>/Action Port'
   *  ActionPort: '<S581>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S578>/override_enable'
   *  SubSystem: '<S578>/NewValue'
   *  SubSystem: '<S578>/OldValue'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Inport: '<S580>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S578>/new_value'
     */
    BaseEngineController_A02_B.s578_Merge = (FuelSens_new_DataStore());
  } else {
    /* Inport: '<S581>/In1' */
    BaseEngineController_A02_B.s578_Merge = rtb_Sum1_nl;
  }

  /* S-Function Block: <S408>/motohawk_ain4 Resource: EGRPin */
  {
    extern NativeError_S EGRPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    EGRPin_AnalogInput_Get(&BaseEngineController_A02_B.s408_motohawk_ain4, NULL);
  }

  /* DataTypeConversion: '<S557>/Data Type Conversion' */
  rtb_DataTypeConversion_e = (real_T)
    BaseEngineController_A02_B.s408_motohawk_ain4;

  /* Product: '<S557>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S557>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_i = rtb_DataTypeConversion_e * (EGRSenseGain_DataStore());

  /* Sum: '<S557>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S557>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s557_Sum1 = rtb_DataTypeConversion_i +
    (EGRSenseOfst_DataStore());

  /* Logic: '<S557>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S557>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S557>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(8) || IsFaultActive(9));

  /* Logic: '<S557>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S557>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S557>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(8) || IsFaultSuspected(9));

  /* UnitDelay: '<S557>/Unit Delay1' */
  rtb_UnitDelay1_g = BaseEngineController_A02_DWork.s557_UnitDelay1_DSTATE;

  /* If: '<S557>/If' incorporates:
   *  ActionPort: '<S567>/Action Port'
   *  ActionPort: '<S568>/Action Port'
   *  ActionPort: '<S569>/Action Port'
   *  Logic: '<S557>/Logical Operator5'
   *  Logic: '<S557>/Logical Operator6'
   *  SubSystem: '<S557>/If Action Subsystem'
   *  SubSystem: '<S557>/If Action Subsystem1'
   *  SubSystem: '<S557>/If Action Subsystem2'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_g, &rtb_Merge_n);
  } else if (rtb_RelationalOperator6_k) {
    BaseEngineController_A02_IfActionSubsystem((EGRSenseDfltValue_DataStore()),
      &rtb_Merge_n);
  } else {
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s557_Sum1, &rtb_Merge_n);
  }

  /* S-Function Block: <S566>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s566_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S566>/Product' incorporates:
   *  MinMax: '<S566>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S566>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= rt_MAXd_snf(rtb_DataTypeConversion_ff,
    (EGRSenseFilterConst_DataStore()));

  /* Sum: '<S571>/Sum1' incorporates:
   *  Constant: '<S571>/Constant'
   *  Product: '<S571>/Product'
   *  Product: '<S571>/Product1'
   *  Sum: '<S571>/Sum'
   *  UnitDelay: '<S571>/Unit Delay'
   */
  rtb_Sum1_i5 = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s571_UnitDelay_DSTATE + rtb_Merge_n *
    rtb_DataTypeConversion_ff;

  /* If: '<S570>/If' incorporates:
   *  ActionPort: '<S572>/Action Port'
   *  ActionPort: '<S573>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S570>/override_enable'
   *  SubSystem: '<S570>/NewValue'
   *  SubSystem: '<S570>/OldValue'
   */
  if ((EGRSense_ovr_DataStore())) {
    /* Inport: '<S572>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S570>/new_value'
     */
    BaseEngineController_A02_B.s570_Merge = (EGRSense_new_DataStore());
  } else {
    /* Inport: '<S573>/In1' */
    BaseEngineController_A02_B.s570_Merge = rtb_Sum1_i5;
  }

  /* Switch: '<S368>/Switch1' incorporates:
   *  MinMax: '<S386>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_fault_action): '<S368>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* Product: '<S368>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration2'
     */
    rtb_DataTypeConversion_i = (Overheat_ScaleAPP_DataStore()) *
      BaseEngineController_A02_B.s666_Merge;

    /* MinMax: '<S386>/MinMax' incorporates:
     *  Constant: '<S368>/Constant1'
     */
    rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i, 0.0);
    BaseEngineController_A02_B.s368_Switch1 = rt_MINd_snf
      (rtb_DataTypeConversion_i, (Overheat_MaxAPP_DataStore()));
  } else {
    BaseEngineController_A02_B.s368_Switch1 =
      BaseEngineController_A02_B.s666_Merge;
  }

  /* S-Function Block: <S363>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_A02_B.s681_Merge;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s681_Merge, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* Outputs for atomic SubSystem: '<S322>/Base TPS Request' */

  /* UnitDelay: '<S365>/Unit Delay2' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s365_UnitDelay2_DSTATE;

  /* S-Function Block: <S365>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_A02_B.s368_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s368_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_f = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S365>/motohawk_interpolation_1d2 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d2_d3 = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_f, (real_T *) ((ETCRequestTbl_DataStore())), 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_1d2_d3;
  }

  /* RelationalOperator: '<S365>/Relational Operator3' */
  BaseEngineController_A02_B.s365_RelationalOperator3 = (rtb_UnitDelay_mz <
    rtb_motohawk_interpolation_1d2_d3);

  /* Outputs for enable SubSystem: '<S365>/PassThrough1' incorporates:
   *  EnablePort: '<S380>/Enable'
   */
  BaseEngineController_A02_PassThrough1
    (BaseEngineController_A02_B.s365_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_A02_B.s365_Merge);

  /* end of Outputs for SubSystem: '<S365>/PassThrough1' */

  /* RelationalOperator: '<S365>/Relational Operator2' */
  rtb_RelationalOperator2_la = (rtb_UnitDelay_mz >
    rtb_motohawk_interpolation_1d2_d3);

  /* Outputs for enable SubSystem: '<S365>/PassThrough2' */
  BaseEngineController_A02_PassThrough1(rtb_RelationalOperator2_la,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_A02_B.s365_Merge);

  /* end of Outputs for SubSystem: '<S365>/PassThrough2' */

  /* S-Function Block: <S382>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s382_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S365>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s365_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_mz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S365>/Product' incorporates:
   *  MinMax: '<S365>/MinMax'
   */
  rtb_UnitDelay_mz /= rt_MAXd_snf(rtb_UnitDelay_mz,
    BaseEngineController_A02_B.s365_Merge);

  /* Product: '<S379>/Product' */
  rtb_DataTypeConversion_i = rtb_motohawk_interpolation_1d2_d3 *
    rtb_UnitDelay_mz;

  /* Sum: '<S379>/Sum' incorporates:
   *  Constant: '<S379>/Constant'
   */
  rtb_Sum_iy = 1.0 - rtb_UnitDelay_mz;

  /* UnitDelay: '<S379>/Unit Delay' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s379_UnitDelay_DSTATE;

  /* Sum: '<S379>/Sum1' incorporates:
   *  Product: '<S379>/Product1'
   */
  rtb_Sum1_gje = rtb_Sum_iy * rtb_UnitDelay_mz + rtb_DataTypeConversion_i;

  /* UnitDelay: '<S382>/Unit Delay' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s382_UnitDelay_DSTATE;

  /* Product: '<S382>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S382>/motohawk_delta_time'
   *  Sum: '<S382>/Sum3'
   */
  rtb_DataTypeConversion_i = 1.0 / rtb_motohawk_delta_time_e * (rtb_Sum1_gje -
    rtb_UnitDelay_mz);

  /* S-Function Block: <S365>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_kt = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_kt;
  }

  /* MinMax: '<S383>/MinMax' */
  rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i,
    rtb_motohawk_interpolation_1d1_kt);

  /* S-Function Block: <S365>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_kt = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_kt;
  }

  /* Sum: '<S382>/Sum2' incorporates:
   *  MinMax: '<S383>/MinMax1'
   *  Product: '<S382>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S382>/motohawk_delta_time'
   */
  BaseEngineController_A02_B.s382_Sum2 = rtb_motohawk_delta_time_e * rt_MINd_snf
    (rtb_DataTypeConversion_i, rtb_motohawk_interpolation_1d1_kt) +
    rtb_UnitDelay_mz;

  /* UnitDelay: '<S365>/Unit Delay1' */
  rtb_DataTypeConversion_i =
    BaseEngineController_A02_DWork.s365_UnitDelay1_DSTATE;

  /* UnitDelay: '<S365>/Unit Delay3' */
  rtb_Sum_iy = BaseEngineController_A02_DWork.s365_UnitDelay3_DSTATE;

  /* UnitDelay: '<S365>/Unit Delay4' */
  rtb_UnitDelay4_bi = BaseEngineController_A02_DWork.s365_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S365>/Unit Delay2' */
  BaseEngineController_A02_DWork.s365_UnitDelay2_DSTATE =
    rtb_DataTypeConversion_i;

  /* Update for UnitDelay: '<S379>/Unit Delay' */
  BaseEngineController_A02_DWork.s379_UnitDelay_DSTATE = rtb_Sum1_gje;

  /* Update for UnitDelay: '<S382>/Unit Delay' */
  BaseEngineController_A02_DWork.s382_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s382_Sum2;

  /* Update for UnitDelay: '<S365>/Unit Delay1' */
  BaseEngineController_A02_DWork.s365_UnitDelay1_DSTATE = rtb_Sum_iy;

  /* Update for UnitDelay: '<S365>/Unit Delay3' */
  BaseEngineController_A02_DWork.s365_UnitDelay3_DSTATE = rtb_UnitDelay4_bi;

  /* Update for UnitDelay: '<S365>/Unit Delay4' */
  BaseEngineController_A02_DWork.s365_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_1d2_d3;

  /* end of Outputs for SubSystem: '<S322>/Base TPS Request' */

  /* UnitDelay: '<S372>/Unit Delay' */
  rtb_DataTypeConversion_i =
    BaseEngineController_A02_DWork.s372_UnitDelay_DSTATE;

  /* Sum: '<S372>/Sum' incorporates:
   *  Constant: '<S372>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration'
   */
  rtb_Sum_iy = 1.0 - (O2DelagFilterConst_DataStore());

  /* S-Function Block: <S409>/motohawk_ain3 Resource: PostO2Pin */
  {
    extern NativeError_S PostO2Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    PostO2Pin_AnalogInput_Get(&BaseEngineController_A02_B.s409_motohawk_ain3,
      NULL);
  }

  /* DataTypeConversion: '<S632>/Data Type Conversion' */
  rtb_DataTypeConversion_m = (real_T)
    BaseEngineController_A02_B.s409_motohawk_ain3;

  /* S-Function Block: <S639>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (O2_PostCatIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_m,
      (O2_PostCatIdxArr_DataStore()), 20, (O2_PostCatIdx_DataStore()));
    rtb_motohawk_prelookup_le = (O2_PostCatIdx_DataStore());
  }

  /* S-Function Block: <S639>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_B.s639_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_le, (real_T *)
      ((O2_PostCatTbl_DataStore())), 20);
  }

  /* Logic: '<S632>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(48) || IsFaultActive(49));

  /* Logic: '<S632>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(48) || IsFaultSuspected(49));

  /* UnitDelay: '<S632>/Unit Delay' */
  rtb_UnitDelay_hm = BaseEngineController_A02_DWork.s632_UnitDelay_DSTATE;

  /* If: '<S632>/If' incorporates:
   *  ActionPort: '<S635>/Action Port'
   *  ActionPort: '<S636>/Action Port'
   *  ActionPort: '<S637>/Action Port'
   *  Logic: '<S632>/Logical Operator5'
   *  Logic: '<S632>/Logical Operator6'
   *  SubSystem: '<S632>/If Action Subsystem'
   *  SubSystem: '<S632>/If Action Subsystem1'
   *  SubSystem: '<S632>/If Action Subsystem2'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    BaseEngineController_A02_IfActionSubsystem_m(rtb_UnitDelay_hm, &rtb_Merge_dh);
  } else if (rtb_RelationalOperator6_k) {
    BaseEngineController_A02_IfActionSubsystem_m((O2_PostCatDefault_DataStore()),
      &rtb_Merge_dh);
  } else {
    BaseEngineController_A02_IfActionSubsystem_m
      (BaseEngineController_A02_B.s639_motohawk_interpolation_1d, &rtb_Merge_dh);
  }

  /* S-Function Block: <S634>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s634_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S634>/Product' incorporates:
   *  MinMax: '<S634>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S634>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= rt_MAXd_snf(rtb_DataTypeConversion_ff,
    (O2_PostCatFiltConst_DataStore()));

  /* Sum: '<S640>/Sum1' incorporates:
   *  Constant: '<S640>/Constant'
   *  Product: '<S640>/Product'
   *  Product: '<S640>/Product1'
   *  Sum: '<S640>/Sum'
   *  UnitDelay: '<S640>/Unit Delay'
   */
  rtb_Sum1_kq = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s640_UnitDelay_DSTATE + rtb_Merge_dh *
    rtb_DataTypeConversion_ff;

  /* If: '<S638>/If' incorporates:
   *  ActionPort: '<S641>/Action Port'
   *  ActionPort: '<S642>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S638>/override_enable'
   *  SubSystem: '<S638>/NewValue'
   *  SubSystem: '<S638>/OldValue'
   */
  if ((O2_PostCat_ovr_DataStore())) {
    /* Inport: '<S641>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S638>/new_value'
     */
    BaseEngineController_A02_B.s638_Merge = (O2_PostCat_new_DataStore());
  } else {
    /* Inport: '<S642>/In1' */
    BaseEngineController_A02_B.s638_Merge = rtb_Sum1_kq;
  }

  /* Sum: '<S372>/Sum1' incorporates:
   *  Product: '<S372>/Product'
   *  Product: '<S372>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration'
   */
  BaseEngineController_A02_B.s372_Sum1 = rtb_DataTypeConversion_i * rtb_Sum_iy +
    (O2DelagFilterConst_DataStore()) * BaseEngineController_A02_B.s638_Merge;

  /* S-Function Block: <S395>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s395_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c0 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S395>/Switch' incorporates:
   *  Constant: '<S394>/Constant'
   *  Constant: '<S395>/Constant'
   *  RelationalOperator: '<S394>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S376>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S395>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S395>/motohawk_delta_time'
   *  Sum: '<S395>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_A02_B.s395_Switch = rtb_motohawk_delta_time_c0 +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_A02_B.s395_Switch = 0.0;
  }

  /* S-Function Block: <S361>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_A02_B.s556_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s556_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_A02_B.s361_motohawk_prelookup1 = (RPM09Idx_DataStore());
  }

  /* S-Function Block: <S361>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_A02_B.s556_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s556_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_A02_B.s361_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S359>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_A02_B.s649_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s649_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_A02_B.s359_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S360>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_A02_B.s658_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s658_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_A02_B.s360_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* UnitDelay: '<S327>/Unit Delay' */
  rtb_UnitDelay_dm = BaseEngineController_A02_DWork.s327_UnitDelay_DSTATE;

  /* S-Function Block: <S408>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_A02_B.s408_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S561>/Data Type Conversion' */
  rtb_DataTypeConversion_ff = (real_T)
    BaseEngineController_A02_B.s408_motohawk_ain_read1;

  /* Product: '<S561>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_i = rtb_DataTypeConversion_ff * (MAPTimeGain_DataStore());

  /* Sum: '<S561>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s561_Sum1 = rtb_DataTypeConversion_i +
    (MAPTimeOfst_DataStore());

  /* Logic: '<S561>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S561>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S561>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(38) || IsFaultActive(39));

  /* Logic: '<S561>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S561>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S561>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(38) || IsFaultSuspected(39));

  /* UnitDelay: '<S561>/Unit Delay1' */
  rtb_UnitDelay1_dq = BaseEngineController_A02_DWork.s561_UnitDelay1_DSTATE;

  /* If: '<S561>/If' incorporates:
   *  ActionPort: '<S599>/Action Port'
   *  ActionPort: '<S600>/Action Port'
   *  ActionPort: '<S601>/Action Port'
   *  Logic: '<S561>/Logical Operator5'
   *  Logic: '<S561>/Logical Operator6'
   *  SubSystem: '<S561>/If Action Subsystem'
   *  SubSystem: '<S561>/If Action Subsystem1'
   *  SubSystem: '<S561>/If Action Subsystem2'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_dq, &rtb_Merge_pk);
  } else if (rtb_RelationalOperator6_k) {
    BaseEngineController_A02_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_pk);
  } else {
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s561_Sum1, &rtb_Merge_pk);
  }

  /* S-Function (motohawk_sfun_data_read): '<S319>/motohawk_data_read1' */
  BaseEngineController_A02_B.s319_motohawk_data_read1 = EngineState_DataStore();

  /* S-Function Block: <S319>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s319_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_A02_B.s319_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S319>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S319>/motohawk_calibration'
   */
  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch (BaseEngineController_A02_DWork.s324_is_c19_BaseEngineController_A02) {
   case BaseEngineController_A02_IN_CrankRun:
    /* During 'CrankRun': '<S324>:2' */
    if (BaseEngineController_A02_B.s319_motohawk_data_read1 == 1) {
      /* Transition: '<S324>:6' */
      /* Exit 'CrankRun': '<S324>:2' */
      /* Entry 'StallDelay': '<S324>:3' */
      BaseEngineController_A02_DWork.s324_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_StallDelay;
      BaseEngineController_A02_B.s324_Enable = FALSE;
      BaseEngineController_A02_B.s324_Timer = 0.0;
      BaseEngineController_A02_DWork.s324_TOld = 0.0;
    }
    break;

   case BaseEngineController_A02_IN_Stall:
    /* During 'Stall': '<S324>:1' */
    if (BaseEngineController_A02_B.s319_motohawk_data_read1 > 1) {
      /* Transition: '<S324>:5' */
      /* Exit 'Stall': '<S324>:1' */
      /* Entry 'CrankRun': '<S324>:2' */
      BaseEngineController_A02_DWork.s324_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_CrankRun;
      BaseEngineController_A02_B.s324_Enable = FALSE;
    }
    break;

   case BaseEngineController_A02_IN_StallDelay:
    /* During 'StallDelay': '<S324>:3' */
    if (BaseEngineController_A02_B.s319_motohawk_data_read1 > 1) {
      /* Transition: '<S324>:8' */
      /* Exit 'StallDelay': '<S324>:3' */
      /* Entry 'CrankRun': '<S324>:2' */
      BaseEngineController_A02_DWork.s324_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_CrankRun;
      BaseEngineController_A02_B.s324_Enable = FALSE;
    } else if (((BaseEngineController_A02_B.s319_motohawk_data_read1 == 1) &
                (BaseEngineController_A02_B.s324_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S324>:7' */
      /* Exit 'StallDelay': '<S324>:3' */
      /* Entry 'Stall': '<S324>:1' */
      BaseEngineController_A02_DWork.s324_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall;
      BaseEngineController_A02_B.s324_Enable = TRUE;
    } else {
      BaseEngineController_A02_B.s324_Timer =
        BaseEngineController_A02_DWork.s324_TOld +
        BaseEngineController_A02_B.s319_motohawk_delta_time;
      BaseEngineController_A02_DWork.s324_TOld =
        BaseEngineController_A02_B.s324_Timer;
    }
    break;

   default:
    /* Transition: '<S324>:4' */
    /* Entry 'Stall': '<S324>:1' */
    BaseEngineController_A02_DWork.s324_is_c19_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Stall;
    BaseEngineController_A02_B.s324_Enable = TRUE;
    break;
  }

  /* Outputs for enable SubSystem: '<S319>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S325>/Enable'
   */
  if (BaseEngineController_A02_B.s324_Enable) {
    if (!((int32_T)
          BaseEngineController_A02_DWork.s319_CaptureSignalAtStartup_MODE != 0))
    {
      /* InitializeConditions for UnitDelay: '<S325>/Unit Delay' */
      BaseEngineController_A02_DWork.s325_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s319_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S325>/Add' incorporates:
     *  Constant: '<S325>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration'
     */
    rtb_Add_a = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S325>/Sum' incorporates:
     *  Constant: '<S325>/Constant'
     *  UnitDelay: '<S325>/Unit Delay'
     */
    rtb_Sum_l3 = (int8_T)(BaseEngineController_A02_DWork.s325_UnitDelay_DSTATE +
                          1);

    /* RelationalOperator: '<S325>/Relational Operator' */
    rtb_LogicalOperator1_a = (rtb_Sum_l3 <= rtb_Add_a);

    /* Switch: '<S325>/Switch' */
    if (rtb_LogicalOperator1_a) {
      rtb_Add_a = rtb_Sum_l3;
    }

    /* Outputs for enable SubSystem: '<S325>/Collect Average' incorporates:
     *  Constant: '<S325>/TwoSampleBuffer ToIgnore'
     *  EnablePort: '<S328>/Enable'
     *  Logic: '<S325>/Logical Operator'
     *  RelationalOperator: '<S325>/Relational Operator1'
     */
    if (rtb_LogicalOperator1_a && (rtb_Sum_l3 > 2)) {
      if (!((int32_T)BaseEngineController_A02_DWork.s325_CollectAverage_MODE !=
            0)) {
        /* InitializeConditions for UnitDelay: '<S328>/Unit Delay1' */
        BaseEngineController_A02_DWork.s328_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s325_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S328>/Sum1' incorporates:
       *  UnitDelay: '<S328>/Unit Delay1'
       */
      rtb_DataTypeConversion_i = rtb_Merge_pk +
        BaseEngineController_A02_DWork.s328_UnitDelay1_DSTATE;

      /* Product: '<S328>/Product' incorporates:
       *  Constant: '<S325>/TwoSampleBuffer ToIgnore'
       *  DataTypeConversion: '<S328>/Data Type Conversion'
       *  Sum: '<S325>/Add1'
       */
      BaseEngineController_A02_B.s328_Product = 1.0 / (real_T)(int8_T)(rtb_Add_a
        - 2) * rtb_DataTypeConversion_i;

      /* Update for UnitDelay: '<S328>/Unit Delay1' */
      BaseEngineController_A02_DWork.s328_UnitDelay1_DSTATE =
        rtb_DataTypeConversion_i;
    } else {
      if ((int32_T)BaseEngineController_A02_DWork.s325_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s325_CollectAverage_MODE = FALSE;
      }
    }

    /* end of Outputs for SubSystem: '<S325>/Collect Average' */

    /* Update for UnitDelay: '<S325>/Unit Delay' */
    BaseEngineController_A02_DWork.s325_UnitDelay_DSTATE = rtb_Add_a;
  } else {
    if ((int32_T)BaseEngineController_A02_DWork.s319_CaptureSignalAtStartup_MODE)
    {
      /* Disable for enable SubSystem: '<S325>/Collect Average' */
      BaseEngineController_A02_DWork.s325_CollectAverage_MODE = FALSE;

      /* end of Disable for SubSystem: '<S325>/Collect Average' */
      BaseEngineController_A02_DWork.s319_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S319>/Capture Signal At Startup' */

  /* If: '<S327>/If' incorporates:
   *  ActionPort: '<S334>/Action Port'
   *  ActionPort: '<S335>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S327>/override_enable'
   *  SubSystem: '<S327>/NewValue'
   *  SubSystem: '<S327>/OldValue'
   */
  if ((BARO_ovr_DataStore())) {
  } else {
    /* Inport: '<S335>/In1' */
    rtb_UnitDelay_dm = BaseEngineController_A02_B.s328_Product;
  }

  /* Sum: '<S327>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S327>/offset'
   */
  BaseEngineController_A02_B.s327_Sum = rtb_UnitDelay_dm +
    (BARO_offset_DataStore());

  /* Saturate: '<S319>/Saturation1' */
  rtb_Saturation1 = rt_MAXd_snf(BaseEngineController_A02_B.s327_Sum, 1.0);

  /* Product: '<S326>/Pressure Ratio' */
  BaseEngineController_A02_B.s326_PressureRatio =
    BaseEngineController_A02_B.s594_Merge / rtb_Saturation1;

  /* S-Function Block: <S326>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (PortPressRatio17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s326_PressureRatio,
       (PortPressRatio17IdxArr_DataStore()), 17, (PortPressRatio17Idx_DataStore()));
    rtb_motohawk_prelookup_ld = (PortPressRatio17Idx_DataStore());
  }

  /* S-Function Block: <S326>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup_ld, BaseEngineController_A02_B.s361_Indexes,
       (real_T *) ((VEMap_DataStore())), 17, 17);
    (VE_DataStore()) = rtb_motohawk_interpolation_2d;
  }

  /* If: '<S331>/If' incorporates:
   *  ActionPort: '<S332>/Action Port'
   *  ActionPort: '<S333>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S331>/override_enable'
   *  SubSystem: '<S331>/NewValue'
   *  SubSystem: '<S331>/OldValue'
   */
  if ((VETable_ovr_DataStore())) {
    /* Inport: '<S332>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S331>/new_value'
     */
    rtb_DataTypeConversion_i = (VETable_new_DataStore());
  } else {
    /* Inport: '<S333>/In1' */
    rtb_DataTypeConversion_i = rtb_motohawk_interpolation_2d;
  }

  /* S-Function Block: <S326>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_n = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S326>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_d = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_d;
  }

  /* S-Function Block: <S360>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_A02_B.s658_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s658_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_c = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S326>/motohawk_interpolation_1d2 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d2_h = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2_c, (real_T *) ((VETempCorrTbl_DataStore())), 17);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_1d2_h;
  }

  /* Fcn: '<S329>/C to K' */
  rtb_DataTypeConversion_kk = BaseEngineController_A02_B.s658_Merge +
    273.19999999999999;

  /* Product: '<S326>/Nominal Air Flow Rate2' incorporates:
   *  Constant: '<S326>/Gas Const [J//kg-K]'
   *  Constant: '<S326>/Units Equivalency Factor'
   *  DataTypeConversion: '<S326>/Data Type Conversion'
   *  S-Function (motohawk_sfun_data_read): '<S326>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_data_read): '<S326>/Number of Combustion Events Per Revolution'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S326>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S326>/motohawk_interpolation_1d2'
   *  S-Function (motohawk_sfun_prelookup): '<S326>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S360>/motohawk_prelookup2'
   *  Saturate: '<S326>/Saturation'
   */
  BaseEngineController_A02_B.s326_NominalAirFlowRate2 =
    BaseEngineController_A02_B.s556_Sum1 * BaseEngineController_A02_B.s594_Merge
    * rtb_motohawk_interpolation_1d1_d * rtb_motohawk_interpolation_1d2_h *
    CylSweptVol_DataStore() * (real_T)((uint8_T)CombEventsPerRev_DataStore()) /
    rt_MAXd_snf(rtb_DataTypeConversion_kk, 1.0) / 60.0 / 287.0;

  /* S-Function Block: <S406>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6_j,
      &rtb_DataTypeConversion2_l);
  }

  /* DataTypeConversion: '<S406>/Data Type Conversion' */
  rtb_DataTypeConversion_kk = (real_T)rtb_DataTypeConversion6_j;

  /* Gain: '<S406>/Gain' */
  BaseEngineController_A02_B.s406_Gain = 0.01 * rtb_DataTypeConversion_kk;

  /* S-Function Block: <S542>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s406_Gain, (MAFIdxArr_DataStore()), 40,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_j = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S542>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_B.s542_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_j, (real_T *)
      ((MAFTbl_DataStore())), 40);
  }

  /* Logic: '<S535>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S535>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S535>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(34) || IsFaultActive(35));

  /* Logic: '<S535>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S535>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S535>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(34) || IsFaultSuspected(35));

  /* UnitDelay: '<S535>/Unit Delay' */
  rtb_UnitDelay_az = BaseEngineController_A02_DWork.s535_UnitDelay_DSTATE;

  /* If: '<S535>/If' incorporates:
   *  ActionPort: '<S538>/Action Port'
   *  ActionPort: '<S539>/Action Port'
   *  ActionPort: '<S540>/Action Port'
   *  Logic: '<S535>/Logical Operator5'
   *  Logic: '<S535>/Logical Operator6'
   *  SubSystem: '<S535>/If Action Subsystem'
   *  SubSystem: '<S535>/If Action Subsystem1'
   *  SubSystem: '<S535>/If Action Subsystem2'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_az, &rtb_Merge_j);
  } else if (rtb_RelationalOperator6_k) {
    BaseEngineController_A02_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_j);
  } else {
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s542_motohawk_interpolation_1d, &rtb_Merge_j);
  }

  /* S-Function Block: <S537>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s537_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_kk = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S537>/Product' incorporates:
   *  MinMax: '<S537>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration'
   */
  rtb_DataTypeConversion_kk /= rt_MAXd_snf(rtb_DataTypeConversion_kk,
    (MAFFiltConst_DataStore()));

  /* Sum: '<S543>/Sum1' incorporates:
   *  Constant: '<S543>/Constant'
   *  Product: '<S543>/Product'
   *  Product: '<S543>/Product1'
   *  Sum: '<S543>/Sum'
   *  UnitDelay: '<S543>/Unit Delay'
   */
  rtb_Sum1_f = (1.0 - rtb_DataTypeConversion_kk) *
    BaseEngineController_A02_DWork.s543_UnitDelay_DSTATE + rtb_Merge_j *
    rtb_DataTypeConversion_kk;

  /* If: '<S541>/If' incorporates:
   *  ActionPort: '<S544>/Action Port'
   *  ActionPort: '<S545>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S541>/override_enable'
   *  SubSystem: '<S541>/NewValue'
   *  SubSystem: '<S541>/OldValue'
   */
  if ((MAF_ovr_DataStore())) {
    /* Inport: '<S544>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S541>/new_value'
     */
    BaseEngineController_A02_B.s541_Merge = (MAF_new_DataStore());
  } else {
    /* Inport: '<S545>/In1' */
    BaseEngineController_A02_B.s541_Merge = rtb_Sum1_f;
  }

  /* MultiPortSwitch: '<S326>/Multiport Switch' incorporates:
   *  Product: '<S326>/Model Air Mass Flow Rate'
   *  S-Function (motohawk_sfun_calibration): '<S326>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    rtb_DataTypeConversion_kk = rtb_DataTypeConversion_i *
      BaseEngineController_A02_B.s326_NominalAirFlowRate2;
  } else {
    rtb_DataTypeConversion_kk = BaseEngineController_A02_B.s541_Merge;
  }

  /* Saturate: '<S326>/Saturation1' */
  BaseEngineController_A02_B.s326_Saturation1 = rt_MAXd_snf
    (rtb_DataTypeConversion_kk, 1.0);

  /* Saturate: '<S347>/Saturation2' */
  rtb_Saturation2 = rt_MAXd_snf(BaseEngineController_A02_B.s556_Sum1, 1.0);

  /* DataTypeConversion: '<S337>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S337>/Number of Combustion Events Per Revolution'
   */
  rtb_DataTypeConversion_kk = (real_T)((uint8_T)CombEventsPerRev_DataStore());

  /* Saturate: '<S347>/Saturation' */
  rtb_Saturation_d = rt_MAXd_snf(rtb_DataTypeConversion_kk, 1.0);

  /* RelationalOperator: '<S350>/RelOp' incorporates:
   *  Constant: '<S350>/Constant'
   */
  rtb_RelOp_pg = (BaseEngineController_A02_B.s556_Sum1 != 0.0);

  /* Outputs for enable SubSystem: '<S347>/Multiply and Divide, avoiding divde by zero1' */
  BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(rtb_RelOp_pg,
    BaseEngineController_A02_B.s326_Saturation1, 60000.0, rtb_Saturation2,
    rtb_Saturation_d,
    &BaseEngineController_A02_B.s347_MultiplyandDivideavoidingdivdebyzero1);

  /* end of Outputs for SubSystem: '<S347>/Multiply and Divide, avoiding divde by zero1' */

  /* S-Function Block: <S337>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APC_TPS10Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s347_MultiplyandDivideavoidingdivdebyzero1.s168_chargemass,
       (APC_TPS10IdxArr_DataStore()), 10, (APC_TPS10Idx_DataStore()));
    rtb_motohawk_prelookup_g = (APC_TPS10Idx_DataStore());
  }

  /* S-Function Block: <S337>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_Torque = TableInterpolation1D_real_T(rtb_motohawk_prelookup_g, (real_T *)
      ((IndLoadTbl_DataStore())), 10);
    (IndLoad_DataStore()) = rtb_Torque;
  }

  /* Fcn: '<S348>/Torque to Power' */
  BaseEngineController_A02_B.s348_TorquetoPower = rtb_Torque *
    BaseEngineController_A02_B.s556_Sum1 * 3.1415926535897931 / 30000.0;

  /* S-Function Block: <S339>/motohawk_delta_time */
  rtb_DataTypeConversion_kk = 0.005;

  /* UnitDelay: '<S339>/Unit Delay2' */
  rtb_DataTypeConversion_i =
    BaseEngineController_A02_DWork.s339_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S339>/Relational Operator4' */
  BaseEngineController_A02_B.s339_RelationalOperator4 =
    (BaseEngineController_A02_DWork.s339_UnitDelay2_DSTATE <
     BaseEngineController_A02_B.s556_Sum1);

  /* Outputs for enable SubSystem: '<S339>/IncreasingFilter' incorporates:
   *  EnablePort: '<S343>/Enable'
   */
  if (BaseEngineController_A02_B.s339_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration1' */
    BaseEngineController_A02_B.s339_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* end of Outputs for SubSystem: '<S339>/IncreasingFilter' */

  /* Outputs for enable SubSystem: '<S339>/DecreasingFilter' incorporates:
   *  EnablePort: '<S341>/Enable'
   *  RelationalOperator: '<S339>/Relational Operator3'
   */
  if (rtb_DataTypeConversion_i > BaseEngineController_A02_B.s556_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S341>/motohawk_calibration2' */
    BaseEngineController_A02_B.s339_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* end of Outputs for SubSystem: '<S339>/DecreasingFilter' */

  /* Product: '<S339>/Product' incorporates:
   *  MinMax: '<S339>/MinMax'
   */
  rtb_DataTypeConversion_kk /= rt_MAXd_snf(rtb_DataTypeConversion_kk,
    BaseEngineController_A02_B.s339_Merge);

  /* Sum: '<S342>/Sum1' incorporates:
   *  Constant: '<S342>/Constant'
   *  Product: '<S342>/Product'
   *  Product: '<S342>/Product1'
   *  Sum: '<S342>/Sum'
   *  UnitDelay: '<S342>/Unit Delay'
   */
  BaseEngineController_A02_B.s342_Sum1 = (1.0 - rtb_DataTypeConversion_kk) *
    BaseEngineController_A02_DWork.s342_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s556_Sum1 * rtb_DataTypeConversion_kk;

  /* Sum: '<S336>/Sum1' */
  rtb_DataTypeConversion_kk = BaseEngineController_A02_B.s556_Sum1 -
    BaseEngineController_A02_B.s342_Sum1;

  /* Abs: '<S336>/Abs1' */
  rtb_DataTypeConversion_i = fabs(rtb_DataTypeConversion_kk);

  /* RelationalOperator: '<S336>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S336>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_LogicalOperator1_a = (rtb_DataTypeConversion_i <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S336>/Relational Operator2' incorporates:
   *  Constant: '<S336>/Constant'
   */
  rtb_RelationalOperator_pj = (BaseEngineController_A02_B.s556_Sum1 > 0.0);

  /* S-Function Block: <S340>/motohawk_delta_time */
  rtb_DataTypeConversion_kk = 0.005;

  /* UnitDelay: '<S340>/Unit Delay2' */
  rtb_DataTypeConversion_i =
    BaseEngineController_A02_DWork.s340_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S340>/Relational Operator4' */
  BaseEngineController_A02_B.s340_RelationalOperator4 =
    (BaseEngineController_A02_DWork.s340_UnitDelay2_DSTATE < rtb_Torque);

  /* Outputs for enable SubSystem: '<S340>/IncreasingFilter' incorporates:
   *  EnablePort: '<S346>/Enable'
   */
  if (BaseEngineController_A02_B.s340_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S346>/motohawk_calibration1' */
    BaseEngineController_A02_B.s340_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* end of Outputs for SubSystem: '<S340>/IncreasingFilter' */

  /* Outputs for enable SubSystem: '<S340>/DecreasingFilter' incorporates:
   *  EnablePort: '<S344>/Enable'
   *  RelationalOperator: '<S340>/Relational Operator3'
   */
  if (rtb_DataTypeConversion_i > rtb_Torque) {
    /* S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration2' */
    BaseEngineController_A02_B.s340_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* end of Outputs for SubSystem: '<S340>/DecreasingFilter' */

  /* Product: '<S340>/Product' incorporates:
   *  MinMax: '<S340>/MinMax'
   */
  rtb_DataTypeConversion_kk /= rt_MAXd_snf(rtb_DataTypeConversion_kk,
    BaseEngineController_A02_B.s340_Merge);

  /* Sum: '<S345>/Sum1' incorporates:
   *  Constant: '<S345>/Constant'
   *  Product: '<S345>/Product'
   *  Product: '<S345>/Product1'
   *  Sum: '<S345>/Sum'
   *  UnitDelay: '<S345>/Unit Delay'
   */
  BaseEngineController_A02_B.s345_Sum1 = (1.0 - rtb_DataTypeConversion_kk) *
    BaseEngineController_A02_DWork.s345_UnitDelay_DSTATE + rtb_Torque *
    rtb_DataTypeConversion_kk;

  /* Sum: '<S336>/Sum' */
  rtb_DataTypeConversion_kk = rtb_Torque - BaseEngineController_A02_B.s345_Sum1;

  /* Abs: '<S336>/Abs' */
  rtb_DataTypeConversion_i = fabs(rtb_DataTypeConversion_kk);

  /* Logic: '<S336>/Logical Operator' incorporates:
   *  RelationalOperator: '<S336>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S336>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_A02_B.s336_LogicalOperator = (rtb_LogicalOperator1_a &&
    rtb_RelationalOperator_pj && (rtb_DataTypeConversion_i <=
    (SSLoadTol_DataStore())));

  /* Sum: '<S338>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S338>/motohawk_calibration3'
   */
  rtb_DataTypeConversion_kk = (SteadyStateECT_DataStore()) -
    BaseEngineController_A02_B.s649_Merge;

  /* Saturate: '<S338>/Saturation1' */
  rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_kk, 0.0);

  /* Product: '<S338>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S338>/motohawk_calibration4'
   */
  rtb_Sum_iy = BaseEngineController_A02_B.s348_TorquetoPower /
    (MaxIndEngPwr_DataStore());

  /* S-Function Block: <S338>/motohawk_delta_time1 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s338_motohawk_delta_time1_DWORK1, NULL);
    rtb_motohawk_delta_time1 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S338>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S338>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_delta_time): '<S338>/motohawk_delta_time1'
   */
  rtb_DataTypeConversion_i = rtb_DataTypeConversion_i * rtb_Sum_iy *
    rtb_motohawk_delta_time1 / (WarmUpTimeConst_DataStore());

  /* RelationalOperator: '<S354>/RelOp' incorporates:
   *  Constant: '<S354>/Constant'
   */
  rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s348_TorquetoPower == 0.0);

  /* Outputs for enable SubSystem: '<S338>/Integrate Offset To ECT' incorporates:
   *  EnablePort: '<S355>/Enable'
   *  RelationalOperator: '<S338>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S338>/motohawk_calibration3'
   *  UnitDelay: '<S338>/Unit Delay'
   */
  if (BaseEngineController_A02_DWork.s338_UnitDelay_DSTATE <
      (SteadyStateECT_DataStore())) {
    /* S-Function Block: <S357>/motohawk_delta_time1 */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s357_motohawk_delta_time1_DWORK1, NULL);
      rtb_motohawk_delta_time1_h = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S357>/Switch1' incorporates:
     *  Constant: '<S355>/Constant1'
     *  DataTypeConversion: '<S357>/Data Type Conversion'
     *  UnitDelay: '<S357>/Unit Delay'
     */
    if ((int32_T)rtb_LogicalOperator1_a >= 1) {
      BaseEngineController_A02_B.s357_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_B.s357_Switch1 =
        BaseEngineController_A02_DWork.s357_UnitDelay_DSTATE;
    }

    /* Sum: '<S357>/Sum' incorporates:
     *  Product: '<S357>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S357>/motohawk_delta_time1'
     */
    rtb_DataTypeConversion_i = rtb_DataTypeConversion_i *
      rtb_motohawk_delta_time1_h + BaseEngineController_A02_B.s357_Switch1;

    /* MinMax: '<S358>/MinMax' incorporates:
     *  Constant: '<S355>/Constant'
     */
    rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i, 0.0);

    /* MinMax: '<S358>/MinMax1' incorporates:
     *  Constant: '<S355>/Constant2'
     */
    rtb_DataTypeConversion_i = rt_MINd_snf(rtb_DataTypeConversion_i, rtInf);

    /* Update for UnitDelay: '<S357>/Unit Delay' */
    BaseEngineController_A02_DWork.s357_UnitDelay_DSTATE =
      rtb_DataTypeConversion_i;
  }

  /* end of Outputs for SubSystem: '<S338>/Integrate Offset To ECT' */

  /* Sum: '<S338>/Sum1' */
  rtb_DataTypeConversion_kk = BaseEngineController_A02_B.s649_Merge +
    BaseEngineController_A02_B.s357_Switch1;

  /* MinMax: '<S356>/MinMax' */
  rtb_DataTypeConversion_kk = rt_MAXd_snf(rtb_DataTypeConversion_kk,
    BaseEngineController_A02_B.s649_Merge);

  /* MinMax: '<S356>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S338>/motohawk_calibration3'
   */
  BaseEngineController_A02_B.s356_MinMax1 = rt_MINd_snf
    (rtb_DataTypeConversion_kk, (SteadyStateECT_DataStore()));

  /* S-Function Block: <S402>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom09In_DataStore()) = rtb_Torque;
    (IndLoadNom09Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom09IdxArr_DataStore()), 9, (IndLoadNom09Idx_DataStore()));
    BaseEngineController_A02_B.s402_motohawk_prelookup1 =
      (IndLoadNom09Idx_DataStore());
  }

  /* S-Function Block: <S402>/motohawk_prelookup4 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom17In_DataStore()) = rtb_Torque;
    (IndLoadNom17Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom17IdxArr_DataStore()), 17, (IndLoadNom17Idx_DataStore()));
    BaseEngineController_A02_B.s402_motohawk_prelookup4 =
      (IndLoadNom17Idx_DataStore());
  }

  /* S-Function Block: <S401>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndPower05In_DataStore()) = BaseEngineController_A02_B.s348_TorquetoPower;
    (IndPower05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s348_TorquetoPower,
       (IndPower05IdxArr_DataStore()), 5, (IndPower05Idx_DataStore()));
    rtb_motohawk_prelookup_d = (IndPower05Idx_DataStore());
  }

  /* S-Function Block: <S400>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (NECCT09In_DataStore()) = BaseEngineController_A02_B.s356_MinMax1;
    (NECCT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s356_MinMax1, (NECCT09IdxArr_DataStore()), 9,
       (NECCT09Idx_DataStore()));
    rtb_motohawk_prelookup_em = (NECCT09Idx_DataStore());
  }

  /* S-Function Block: <S399>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) = BaseEngineController_A02_B.s326_Saturation1;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s326_Saturation1, (MAFPort05IdxArr_DataStore()),
       5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_b = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S373>/RelOp' incorporates:
   *  Constant: '<S373>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S322>/motohawk_data_read'
   */
  rtb_RelOp_g = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for enable SubSystem: '<S322>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S366>/Enable'
   */
  if (rtb_RelOp_g) {
    if (!((int32_T)BaseEngineController_A02_DWork.s322_CaptureECTAtStartup_MODE
          != 0)) {
      /* InitializeConditions for UnitDelay: '<S366>/Unit Delay' */
      BaseEngineController_A02_DWork.s366_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s322_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S366>/Sum' incorporates:
     *  Constant: '<S366>/Constant'
     *  UnitDelay: '<S366>/Unit Delay'
     */
    rtb_Add_a = (int8_T)(BaseEngineController_A02_DWork.s366_UnitDelay_DSTATE +
                         1);

    /* Sum: '<S366>/Add' incorporates:
     *  Constant: '<S366>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S366>/Relational Operator' */
    rtb_LogicalOperator1_a = (rtb_Add_a <= rtb_Sum_l3);

    /* Switch: '<S366>/Switch' */
    if (rtb_LogicalOperator1_a) {
      rtb_Sum_l3 = rtb_Add_a;
    }

    /* Outputs for enable SubSystem: '<S366>/Collect Average' incorporates:
     *  Constant: '<S366>/TwoSampleBuffer ToIgnore'
     *  EnablePort: '<S384>/Enable'
     *  Logic: '<S366>/Logical Operator'
     *  RelationalOperator: '<S366>/Relational Operator1'
     */
    if (rtb_LogicalOperator1_a && (rtb_Add_a > 2)) {
      if (!((int32_T)BaseEngineController_A02_DWork.s366_CollectAverage_MODE !=
            0)) {
        /* InitializeConditions for UnitDelay: '<S384>/Unit Delay1' */
        BaseEngineController_A02_DWork.s384_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s366_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S384>/Sum1' incorporates:
       *  UnitDelay: '<S384>/Unit Delay1'
       */
      rtb_DataTypeConversion_i = BaseEngineController_A02_B.s643_Merge +
        BaseEngineController_A02_DWork.s384_UnitDelay1_DSTATE;

      /* Product: '<S384>/Product' incorporates:
       *  Constant: '<S366>/TwoSampleBuffer ToIgnore'
       *  DataTypeConversion: '<S384>/Data Type Conversion'
       *  Sum: '<S366>/Add1'
       */
      BaseEngineController_A02_B.s384_Product = 1.0 / (real_T)(int8_T)
        (rtb_Sum_l3 - 2) * rtb_DataTypeConversion_i;

      /* Update for UnitDelay: '<S384>/Unit Delay1' */
      BaseEngineController_A02_DWork.s384_UnitDelay1_DSTATE =
        rtb_DataTypeConversion_i;
    } else {
      if ((int32_T)BaseEngineController_A02_DWork.s366_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s366_CollectAverage_MODE = FALSE;
      }
    }

    /* end of Outputs for SubSystem: '<S366>/Collect Average' */

    /* Update for UnitDelay: '<S366>/Unit Delay' */
    BaseEngineController_A02_DWork.s366_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if ((int32_T)BaseEngineController_A02_DWork.s322_CaptureECTAtStartup_MODE) {
      /* Disable for enable SubSystem: '<S366>/Collect Average' */
      BaseEngineController_A02_DWork.s366_CollectAverage_MODE = FALSE;

      /* end of Disable for SubSystem: '<S366>/Collect Average' */
      BaseEngineController_A02_DWork.s322_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S322>/Capture ECT At Startup' */
  /* S-Function Block: <S398>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s384_Product, (ECT_KeyUp09IdxArr_DataStore()),
       9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_eu = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S387>/Sum2' incorporates:
   *  UnitDelay: '<S387>/Unit Delay'
   */
  rtb_DataTypeConversion_i = BaseEngineController_A02_B.s556_Sum1 -
    BaseEngineController_A02_DWork.s387_UnitDelay_DSTATE;

  /* S-Function Block: <S387>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s387_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S387>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S387>/motohawk_delta_time'
   */
  rtb_DataTypeConversion_i /= rtb_motohawk_delta_time_f;

  /* S-Function Block: <S388>/motohawk_delta_time */
  rtb_DataTypeConversion_kk = 0.005;

  /* Product: '<S388>/Product' incorporates:
   *  MinMax: '<S388>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration'
   */
  rtb_DataTypeConversion_kk /= rt_MAXd_snf(rtb_DataTypeConversion_kk,
    (EngineAccelFiltConst_DataStore()));

  /* Sum: '<S389>/Sum1' incorporates:
   *  Constant: '<S389>/Constant'
   *  Product: '<S389>/Product'
   *  Product: '<S389>/Product1'
   *  Sum: '<S389>/Sum'
   *  UnitDelay: '<S389>/Unit Delay'
   */
  BaseEngineController_A02_B.s389_Sum1 = (1.0 - rtb_DataTypeConversion_kk) *
    BaseEngineController_A02_DWork.s389_UnitDelay_DSTATE +
    rtb_DataTypeConversion_i * rtb_DataTypeConversion_kk;

  /* S-Function Block: <S323>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_A02_B.s389_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s389_Sum1, (RPMAccel17IdxArr_DataStore()), 17,
       (RPMAccel17Idx_DataStore()));
    BaseEngineController_A02_B.s323_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* RelationalOperator: '<S122>/RelOp' incorporates:
   *  Constant: '<S122>/Constant'
   */
  rtb_RelOp_av = (BaseEngineController_A02_B.s390_State == 3);

  /* Outputs for enable SubSystem: '<S7>/Run' incorporates:
   *  EnablePort: '<S121>/Enable'
   */
  if (rtb_RelOp_av) {
    if (!((int32_T)BaseEngineController_A02_DWork.s7_Run_MODE != 0)) {
      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S121>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S121>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S206>/IdleStateMachine' */
        BaseEngineController_A02_IdleStateMachine_Init();

        /* S-Function Block: <S205>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s205_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S209>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s209_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for atomic SubSystem: '<S136>/AiflowOffset' */

        /* S-Function Block: <S212>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s212_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* end of InitializeConditions for SubSystem: '<S136>/AiflowOffset' */

        /* S-Function Block: <S237>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s237_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S121>/MaxGovernor' */

        /* S-Function Block: <S187>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s187_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S199>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s199_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S121>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S265>/Initial Condition is True' */
        BaseEngineController_A02_DWork.s265_InitialConditionisTrue_DSTATE = TRUE;
      }

      /* InitializeConditions for UnitDelay: '<S140>/Unit Delay' */
      BaseEngineController_A02_DWork.s140_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for Stateflow: '<S140>/Power Limiter Setpoint Manager' */
      BaseEngineController_A02_DWork.s144_is_active_c13_BaseEngineController_A02
        = 0U;
      BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 = 0U;
      BaseEngineController_A02_B.s144_State = 0.0;
      BaseEngineController_A02_B.s144_Setpoint = 0.0;

      /* InitializeConditions for UnitDelay: '<S148>/Unit Delay' */
      BaseEngineController_A02_DWork.s148_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S149>/Unit Delay' */
      BaseEngineController_A02_DWork.s149_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S149>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s149_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for atomic SubSystem: '<S121>/O2 Control' */

      /* InitializeConditions for atomic SubSystem: '<S137>/O2 PID Controller' */

      /* InitializeConditions for UnitDelay: '<S254>/Unit Delay' */
      BaseEngineController_A02_DWork.s254_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S251>/Unit Delay' */
      BaseEngineController_A02_DWork.s251_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S250>/Unit Delay' */
      BaseEngineController_A02_DWork.s250_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S251>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s251_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S247>/Unit Delay1' */
      BaseEngineController_A02_DWork.s247_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S255>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s255_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S247>/Unit Delay' */
      BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S257>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s257_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S247>/Unit Delay2' */
      BaseEngineController_A02_DWork.s247_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S256>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s256_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* end of InitializeConditions for SubSystem: '<S137>/O2 PID Controller' */

      /* end of InitializeConditions for SubSystem: '<S121>/O2 Control' */

      /* InitializeConditions for Stateflow: '<S138>/Chart' */
      BaseEngineController_A02_DWork.s258_is_active_c6_BaseEngineController_A02 =
        0U;
      BaseEngineController_A02_DWork.s258_is_c6_BaseEngineController_A02 = 0U;
      BaseEngineController_A02_B.s258_HEATER = FALSE;

      /* Level2 S-Function Block: '<S121>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_1327p0009 */
      BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_A02_DWork.s7_Run_MODE = TRUE;
    }

    /* Outputs for enable SubSystem: '<S131>/ShutDownTasksComplete Reset' incorporates:
     *  EnablePort: '<S142>/Enable'
     *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration2'
     */
    if ((AirControlSource_DataStore())) {
      /* S-Function (motohawk_sfun_data_write): '<S142>/motohawk_data_write' incorporates:
       *  Constant: '<S142>/Constant'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    /* end of Outputs for SubSystem: '<S131>/ShutDownTasksComplete Reset' */

    /* Outputs for atomic SubSystem: '<S121>/Base Equiv Ratio' */
    /* S-Function Block: <S132>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s402_motohawk_prelookup4,
         BaseEngineController_A02_B.s361_Indexes, (real_T *)
         ((DesEquivRatioMap_DataStore())), 17, 17);
      (DesEquivRatio_DataStore()) = rtb_motohawk_interpolation_2d3;
    }

    /* If: '<S152>/If' incorporates:
     *  ActionPort: '<S153>/Action Port'
     *  ActionPort: '<S154>/Action Port'
     *  S-Function (motohawk_sfun_calibration): '<S152>/override_enable'
     *  SubSystem: '<S152>/NewValue'
     *  SubSystem: '<S152>/OldValue'
     */
    if ((EquivRatio_ovr_DataStore())) {
      /* Inport: '<S153>/In1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S152>/new_value'
       */
      rtb_DataTypeConversion_i = (EquivRatio_new_DataStore());
    } else {
      /* Inport: '<S154>/In1' */
      rtb_DataTypeConversion_i = rtb_motohawk_interpolation_2d3;
    }

    /* S-Function Block: <S132>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_WarmUpMult = TableInterpolation2D_real_T(rtb_motohawk_prelookup_d,
        rtb_motohawk_prelookup_em, (real_T *) ((WarmUpEqRatioMultMap_DataStore())),
        5, 9);
      (WarmUpEqRatioMult_DataStore()) = rtb_WarmUpMult;
    }

    /* Product: '<S132>/Product1' */
    BaseEngineController_A02_B.s132_DesEquivRatio = rtb_DataTypeConversion_i *
      rtb_WarmUpMult;

    /* end of Outputs for SubSystem: '<S121>/Base Equiv Ratio' */

    /* S-Function (motohawk_sfun_trigger): '<S121>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_1327p0009 */
    if (BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 = 1;
    }

    /* Sum: '<S131>/Sum2' */
    rtb_UnitDelay4_bi =
      BaseEngineController_A02_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
      + BaseEngineController_A02_B.s136_MinGovAirPID;

    /* Switch: '<S131>/Switch2' */
    if (BaseEngineController_A02_B.s186_MultiportSwitch) {
      rtb_DataTypeConversion_i = BaseEngineController_A02_B.s189_Switch;
    } else {
      /* Switch: '<S131>/Switch4' incorporates:
       *  Logic: '<S131>/Logical Operator'
       *  Sum: '<S131>/Sum1'
       */
      if (!BaseEngineController_A02_B.s222_RelOp) {
        rtb_DataTypeConversion_i = BaseEngineController_A02_B.s382_Sum2 +
          BaseEngineController_A02_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM;
      } else {
        rtb_DataTypeConversion_i = rtb_UnitDelay4_bi;
      }
    }

    /* MinMax: '<S141>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration3'
     */
    rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i,
      (MinETCSetpoint_DataStore()));

    /* S-Function Block: <S131>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_MinMax_nh = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
         ((MaxETCSetPtLimitTbl_DataStore())), 9);
      (MaxETCSetPtLimit_DataStore()) = rtb_MinMax_nh;
    }

    /* MinMax: '<S141>/MinMax1' */
    rtb_Sum_iy = rt_MINd_snf(rtb_DataTypeConversion_i, rtb_MinMax_nh);

    /* Stateflow: '<S140>/Power Limiter Setpoint Manager' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_fault_action): '<S140>/motohawk_fault_action'
     *  S-Function (motohawk_sfun_fault_action): '<S140>/motohawk_fault_action1'
     *  S-Function (motohawk_sfun_fault_action): '<S140>/motohawk_fault_action2'
     *  S-Function (motohawk_sfun_fault_action): '<S140>/motohawk_fault_action3'
     *  UnitDelay: '<S140>/Unit Delay'
     */
    /* Gateway: Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Power Limiter Setpoint Manager */
    /* During: Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Power Limiter Setpoint Manager */
    if (BaseEngineController_A02_DWork.s144_is_active_c13_BaseEngineController_A02
        == 0) {
      /* Entry: Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Power Limiter Setpoint Manager */
      BaseEngineController_A02_DWork.s144_is_active_c13_BaseEngineController_A02
        = 1U;

      /* Transition: '<S144>:6' */
      /* Entry 'NoLimit': '<S144>:1' */
      BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
        BaseEngineController_A02_IN_NoLimit;
      BaseEngineController_A02_B.s144_Setpoint = (EngMaxPower_DataStore());
      BaseEngineController_A02_B.s144_State = 0.0;
    } else {
      switch
        (BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02) {
       case BaseEngineController_A02_IN_Level1Limit:
        /* During 'Level1Limit': '<S144>:2' */
        if (GetFaultActionStatus(8)) {
          /* Transition: '<S144>:15' */
          /* Exit 'Level1Limit': '<S144>:2' */
          /* Entry 'Level4Limit': '<S144>:5' */
          BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
            BaseEngineController_A02_IN_Level4Limit;
          BaseEngineController_A02_B.s144_Setpoint = (PowerLimit4_DataStore());
          BaseEngineController_A02_B.s144_State = 4.0;
        } else if (GetFaultActionStatus(7)) {
          /* Transition: '<S144>:14' */
          /* Exit 'Level1Limit': '<S144>:2' */
          /* Entry 'Level3Limit': '<S144>:4' */
          BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
            BaseEngineController_A02_IN_Level3Limit;
          BaseEngineController_A02_B.s144_Setpoint = (PowerLimit3_DataStore());
          BaseEngineController_A02_B.s144_State = 3.0;
        } else if (GetFaultActionStatus(6)) {
          /* Transition: '<S144>:8' */
          /* Exit 'Level1Limit': '<S144>:2' */
          /* Entry 'Level2Limit': '<S144>:3' */
          BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
            BaseEngineController_A02_IN_Level2Limit;
          BaseEngineController_A02_B.s144_Setpoint = (PowerLimit2_DataStore());
          BaseEngineController_A02_B.s144_State = 2.0;
        } else {
          if ((!GetFaultActionStatus(5)) && (rtb_Sum_iy <
               BaseEngineController_A02_DWork.s140_UnitDelay_DSTATE)) {
            /* Transition: '<S144>:17' */
            /* Exit 'Level1Limit': '<S144>:2' */
            /* Entry 'NoLimit': '<S144>:1' */
            BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
              BaseEngineController_A02_IN_NoLimit;
            BaseEngineController_A02_B.s144_Setpoint = (EngMaxPower_DataStore());
            BaseEngineController_A02_B.s144_State = 0.0;
          }
        }
        break;

       case BaseEngineController_A02_IN_Level2Limit:
        /* During 'Level2Limit': '<S144>:3' */
        if (GetFaultActionStatus(8)) {
          /* Transition: '<S144>:16' */
          /* Exit 'Level2Limit': '<S144>:3' */
          /* Entry 'Level4Limit': '<S144>:5' */
          BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
            BaseEngineController_A02_IN_Level4Limit;
          BaseEngineController_A02_B.s144_Setpoint = (PowerLimit4_DataStore());
          BaseEngineController_A02_B.s144_State = 4.0;
        } else if (GetFaultActionStatus(7)) {
          /* Transition: '<S144>:9' */
          /* Exit 'Level2Limit': '<S144>:3' */
          /* Entry 'Level3Limit': '<S144>:4' */
          BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
            BaseEngineController_A02_IN_Level3Limit;
          BaseEngineController_A02_B.s144_Setpoint = (PowerLimit3_DataStore());
          BaseEngineController_A02_B.s144_State = 3.0;
        } else {
          if ((!GetFaultActionStatus(6)) && (rtb_Sum_iy <
               BaseEngineController_A02_DWork.s140_UnitDelay_DSTATE)) {
            /* Transition: '<S144>:18' */
            /* Exit 'Level2Limit': '<S144>:3' */
            /* Entry 'NoLimit': '<S144>:1' */
            BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
              BaseEngineController_A02_IN_NoLimit;
            BaseEngineController_A02_B.s144_Setpoint = (EngMaxPower_DataStore());
            BaseEngineController_A02_B.s144_State = 0.0;
          }
        }
        break;

       case BaseEngineController_A02_IN_Level3Limit:
        /* During 'Level3Limit': '<S144>:4' */
        if (GetFaultActionStatus(8)) {
          /* Transition: '<S144>:10' */
          /* Exit 'Level3Limit': '<S144>:4' */
          /* Entry 'Level4Limit': '<S144>:5' */
          BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
            BaseEngineController_A02_IN_Level4Limit;
          BaseEngineController_A02_B.s144_Setpoint = (PowerLimit4_DataStore());
          BaseEngineController_A02_B.s144_State = 4.0;
        } else {
          if ((!GetFaultActionStatus(7)) && (rtb_Sum_iy <
               BaseEngineController_A02_DWork.s140_UnitDelay_DSTATE)) {
            /* Transition: '<S144>:19' */
            /* Exit 'Level3Limit': '<S144>:4' */
            /* Entry 'NoLimit': '<S144>:1' */
            BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
              BaseEngineController_A02_IN_NoLimit;
            BaseEngineController_A02_B.s144_Setpoint = (EngMaxPower_DataStore());
            BaseEngineController_A02_B.s144_State = 0.0;
          }
        }
        break;

       case BaseEngineController_A02_IN_Level4Limit:
        /* During 'Level4Limit': '<S144>:5' */
        if ((!GetFaultActionStatus(8)) && (rtb_Sum_iy <
             BaseEngineController_A02_DWork.s140_UnitDelay_DSTATE)) {
          /* Transition: '<S144>:20' */
          /* Exit 'Level4Limit': '<S144>:5' */
          /* Entry 'NoLimit': '<S144>:1' */
          BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
            BaseEngineController_A02_IN_NoLimit;
          BaseEngineController_A02_B.s144_Setpoint = (EngMaxPower_DataStore());
          BaseEngineController_A02_B.s144_State = 0.0;
        }
        break;

       case BaseEngineController_A02_IN_NoLimit:
        /* During 'NoLimit': '<S144>:1' */
        if (GetFaultActionStatus(8)) {
          /* Transition: '<S144>:13' */
          /* Exit 'NoLimit': '<S144>:1' */
          /* Entry 'Level4Limit': '<S144>:5' */
          BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
            BaseEngineController_A02_IN_Level4Limit;
          BaseEngineController_A02_B.s144_Setpoint = (PowerLimit4_DataStore());
          BaseEngineController_A02_B.s144_State = 4.0;
        } else if (GetFaultActionStatus(7)) {
          /* Transition: '<S144>:12' */
          /* Exit 'NoLimit': '<S144>:1' */
          /* Entry 'Level3Limit': '<S144>:4' */
          BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
            BaseEngineController_A02_IN_Level3Limit;
          BaseEngineController_A02_B.s144_Setpoint = (PowerLimit3_DataStore());
          BaseEngineController_A02_B.s144_State = 3.0;
        } else if (GetFaultActionStatus(6)) {
          /* Transition: '<S144>:11' */
          /* Exit 'NoLimit': '<S144>:1' */
          /* Entry 'Level2Limit': '<S144>:3' */
          BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
            BaseEngineController_A02_IN_Level2Limit;
          BaseEngineController_A02_B.s144_Setpoint = (PowerLimit2_DataStore());
          BaseEngineController_A02_B.s144_State = 2.0;
        } else {
          if (GetFaultActionStatus(5)) {
            /* Transition: '<S144>:7' */
            /* Exit 'NoLimit': '<S144>:1' */
            /* Entry 'Level1Limit': '<S144>:2' */
            BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
              BaseEngineController_A02_IN_Level1Limit;
            BaseEngineController_A02_B.s144_Setpoint = (PowerLimit1_DataStore());
            BaseEngineController_A02_B.s144_State = 1.0;
          }
        }
        break;

       default:
        /* Transition: '<S144>:6' */
        /* Entry 'NoLimit': '<S144>:1' */
        BaseEngineController_A02_DWork.s144_is_c13_BaseEngineController_A02 =
          BaseEngineController_A02_IN_NoLimit;
        BaseEngineController_A02_B.s144_Setpoint = (EngMaxPower_DataStore());
        BaseEngineController_A02_B.s144_State = 0.0;
        break;
      }
    }

    /* RelationalOperator: '<S143>/Compare' incorporates:
     *  Constant: '<S143>/Constant'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s144_State == 0.0);

    /* Sum: '<S147>/Sum2' */
    BaseEngineController_A02_B.s147_Sum2 =
      BaseEngineController_A02_B.s144_Setpoint
      - BaseEngineController_A02_B.s348_TorquetoPower;

    /* Product: '<S147>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration5'
     */
    rtb_MinMax_nh = BaseEngineController_A02_B.s147_Sum2 *
      (PowerLimt_ErrorGain_DataStore());

    /* S-Function Block: <S145>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (PowerLimt_SpeedErrorIn_DataStore()) =
        BaseEngineController_A02_B.s147_Sum2;
      (PowerLimt_SpeedErrorIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s147_Sum2,
         (PowerLimt_SpeedErrorIdxArr_DataStore()), 10,
         (PowerLimt_SpeedErrorIdx_DataStore()));
      rtb_motohawk_prelookup1_o = (PowerLimt_SpeedErrorIdx_DataStore());
    }

    /* S-Function Block: <S145>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_i = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_o, (real_T *)
         ((PowerLimt_PGainErrorMultTbl_DataStore())), 10);
      (PowerLimt_PGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_i;
    }

    /* Product: '<S147>/Product2' incorporates:
     *  Product: '<S145>/Product4'
     *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S145>/motohawk_interpolation_1d3'
     *  S-Function (motohawk_sfun_prelookup): '<S145>/motohawk_prelookup1'
     */
    BaseEngineController_A02_B.s147_Product2 = (PowerLimt_PGain_DataStore()) *
      rtb_motohawk_interpolation_1d3_i * rtb_MinMax_nh;

    /* UnitDelay: '<S148>/Unit Delay' */
    rtb_DataTypeConversion_i =
      BaseEngineController_A02_DWork.s148_UnitDelay_DSTATE;

    /* S-Function Block: <S145>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_j = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_o, (real_T *)
         ((PowerLimt_DGainErrorMultTbl_DataStore())), 10);
      (PowerLimt_DGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_j;
    }

    /* Product: '<S147>/Product4' incorporates:
     *  Product: '<S145>/Product3'
     *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S145>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S145>/motohawk_prelookup1'
     */
    rtb_Product4_f = (PowerLimt_DGain_DataStore()) *
      rtb_motohawk_interpolation_1d2_j * rtb_MinMax_nh;

    /* Sum: '<S148>/Sum2' */
    rtb_DataTypeConversion_i = rtb_Product4_f - rtb_DataTypeConversion_i;

    /* S-Function Block: <S148>/motohawk_delta_time */
    rtb_motohawk_delta_time_iv = 0.005;

    /* Product: '<S148>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S148>/motohawk_delta_time'
     */
    BaseEngineController_A02_B.s148_Product = rtb_DataTypeConversion_i /
      rtb_motohawk_delta_time_iv;

    /* Switch: '<S149>/Switch1' incorporates:
     *  Constant: '<S140>/Constant2'
     *  Sum: '<S140>/Add1'
     *  UnitDelay: '<S149>/Unit Delay'
     */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s149_Switch1 = rtb_Sum_iy - 100.0;
    } else {
      BaseEngineController_A02_B.s149_Switch1 =
        BaseEngineController_A02_DWork.s149_UnitDelay_DSTATE;
    }

    /* Switch: '<S145>/Switch' incorporates:
     *  Constant: '<S145>/Constant'
     *  MinMax: '<S146>/MinMax1'
     *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration2'
     */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s145_Switch = 0.0;
    } else {
      /* Sum: '<S147>/Sum1' */
      rtb_DataTypeConversion_i = (BaseEngineController_A02_B.s147_Product2 +
        BaseEngineController_A02_B.s148_Product) +
        BaseEngineController_A02_B.s149_Switch1;

      /* MinMax: '<S146>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration9'
       */
      rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i,
        (PowerLimt_PIDOutLowerLimit_DataStore()));
      BaseEngineController_A02_B.s145_Switch = rt_MINd_snf
        (rtb_DataTypeConversion_i, (PowerLimt_PIDOutUpperLimit_DataStore()));
    }

    /* Sum: '<S140>/Add' incorporates:
     *  Constant: '<S140>/Constant1'
     */
    BaseEngineController_A02_B.s140_Add = 100.0 +
      BaseEngineController_A02_B.s145_Switch;

    /* MultiPortSwitch: '<S131>/Multiport Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration2'
     */
    if ((int32_T)(AirControlSource_DataStore()) == 0) {
      /* Switch: '<S131>/Switch1' incorporates:
       *  MinMax: '<S140>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration1'
       */
      if ((ThrottleSource_DataStore())) {
        BaseEngineController_A02_B.s131_MultiportSwitch = rt_MINd_snf(rtb_Sum_iy,
          BaseEngineController_A02_B.s140_Add);
      } else {
        BaseEngineController_A02_B.s131_MultiportSwitch =
          BaseEngineController_A02_B.s666_Merge;
      }
    } else {
      BaseEngineController_A02_B.s131_MultiportSwitch = rtb_UnitDelay4_bi;
    }

    /* S-Function Block: <S145>/motohawk_interpolation_1d4 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d4_e = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_o, (real_T *)
         ((PowerLimt_IGainErrorMultTbl_DataStore())), 10);
      (PowerLimt_IGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4_e;
    }

    /* Product: '<S147>/Product1' incorporates:
     *  Product: '<S145>/Product5'
     *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S145>/motohawk_interpolation_1d4'
     *  S-Function (motohawk_sfun_prelookup): '<S145>/motohawk_prelookup1'
     */
    rtb_DataTypeConversion_i = (PowerLimt_IGain_DataStore()) *
      rtb_motohawk_interpolation_1d4_e * rtb_MinMax_nh;

    /* S-Function Block: <S149>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s149_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_om = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S149>/Sum' incorporates:
     *  Product: '<S149>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S149>/motohawk_delta_time'
     */
    rtb_MinMax_nh = rtb_DataTypeConversion_i * rtb_motohawk_delta_time_om +
      BaseEngineController_A02_B.s149_Switch1;

    /* MinMax: '<S151>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration7'
     */
    rtb_MinMax_nh = rt_MAXd_snf(rtb_MinMax_nh,
      (PowerLimt_ITermLowerLimit_DataStore()));

    /* MinMax: '<S151>/MinMax1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration8'
     */
    rtb_MinMax1_dr = rt_MINd_snf(rtb_MinMax_nh,
      (PowerLimt_ITermUpperLimit_DataStore()));

    /* S-Function Block: <S133>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_o = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s359_motohawk_prelookup, (real_T *)
         ((ECTEGRInterpolationTbl_DataStore())), 5);
      (ECTEGRInterpolation_DataStore()) = rtb_motohawk_interpolation_1d_o;
    }

    /* S-Function Block: <S133>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioTargetDelta_ap = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s402_motohawk_prelookup1,
         BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
         ((EGR_MultMap_DataStore())), 9, 9);
      (EGR_Mult_DataStore()) = rtb_RichEquivRatioTargetDelta_ap;
    }

    /* Product: '<S133>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S133>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S133>/motohawk_interpolation_2d3'
     */
    BaseEngineController_A02_B.s133_Product = rtb_motohawk_interpolation_1d_o *
      rtb_RichEquivRatioTargetDelta_ap;

    /* Outputs for atomic SubSystem: '<S121>/O2 Control' */

    /* S-Function (motohawk_sfun_fault_action): '<S137>/motohawk_fault_action'
     *
     * Regarding '<S137>/motohawk_fault_action':
       Get Fault Action Status: DisableO2Ctrl
     */
    {
      extern boolean_T GetFaultActionStatus(uint32_T action);
      rtb_motohawk_fault_action_g = GetFaultActionStatus(2);
    }

    /* S-Function (motohawk_sfun_data_write): '<S137>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DisableO2FaultAction */
    {
      DisableO2FaultAction_DataStore() = rtb_motohawk_fault_action_g;
    }

    /* Inport: '<S137>/Desired_Equiv' */
    rtb_DesiredLambda_idx = BaseEngineController_A02_B.s132_DesEquivRatio;
    rtb_DesiredLambda_idx_0 = rtb_WarmUpMult;

    /* Logic: '<S240>/Logical Operator' incorporates:
     *  Constant: '<S240>/Constant'
     *  RelationalOperator: '<S240>/Relational Operator'
     *  RelationalOperator: '<S240>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration1'
     *  Sum: '<S240>/Sum'
     *  Sum: '<S240>/Sum1'
     */
    BaseEngineController_A02_B.s240_LogicalOperator = ((rtb_DesiredLambda_idx <=
      (EquivRatioDelta_DataStore()) + 1.0) && (rtb_DesiredLambda_idx >= 1.0 -
      (EquivRatioDelta_DataStore())));

    /* Logic: '<S240>/Logical Operator3' */
    BaseEngineController_A02_B.s240_LogicalOperator3 =
      !rtb_motohawk_fault_action_g;

    /* S-Function Block: <S240>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_ox = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_eu, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_ox;
    }

    /* RelationalOperator: '<S240>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S240>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S398>/motohawk_prelookup'
     */
    BaseEngineController_A02_B.s240_RelationalOperator5 =
      (BaseEngineController_A02_B.s395_Switch >=
       rtb_motohawk_interpolation_1d_ox);

    /* Logic: '<S240>/Logical Operator2' incorporates:
     *  Constant: '<S240>/Constant1'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration2'
     */
    BaseEngineController_A02_B.s240_LogicalOperator2 =
      (BaseEngineController_A02_B.s336_LogicalOperator &&
       BaseEngineController_A02_B.s240_LogicalOperator &&
       BaseEngineController_A02_B.s240_LogicalOperator3 &&
       (O2ControlEnable_DataStore()) &&
       BaseEngineController_A02_B.s240_RelationalOperator5);

    /* Logic: '<S137>/Logical Operator' */
    rtb_LogicalOperator1_a = !BaseEngineController_A02_B.s240_LogicalOperator2;

    /* S-Function Block: <S245>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s402_motohawk_prelookup1,
         BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S245>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s402_motohawk_prelookup1,
         BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S244>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_j = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_em, (real_T *) ((O2NECCTErrGainMultTbl_DataStore
           ())), 9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_j;
    }

    /* S-Function Block: <S244>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_b, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_l;
    }

    /* Product: '<S244>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S244>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S244>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S399>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S400>/motohawk_prelookup'
     */
    rtb_DataTypeConversion_i = rtb_motohawk_interpolation_1d_j *
      rtb_motohawk_interpolation_1d1_l;

    /* Logic: '<S137>/Logical Operator1' */
    rtb_RelationalOperator_pj = !rtb_RelOp_av;

    /* Outputs for atomic SubSystem: '<S137>/O2 PID Controller' */

    /* RelationalOperator: '<S247>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S245>/motohawk_interpolation_2d2'
     *  Sum: '<S247>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_A02_B.s372_Sum1 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S247>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S245>/motohawk_interpolation_2d3'
     *  Sum: '<S247>/Sum4'
     */
    rtb_LogicalOperator2_n2 = (BaseEngineController_A02_B.s372_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S254>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_n2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic[0] =
        BaseEngineController_A02_ConstP.pooled692[rowidx];
      rtb_CombinatorialLogic[1] =
        BaseEngineController_A02_ConstP.pooled692[rowidx + 4];
    }

    /* Switch: '<S254>/Switch1' incorporates:
     *  UnitDelay: '<S254>/Unit Delay'
     */
    if (rtb_CombinatorialLogic[1]) {
      rtb_Switch1_p0 = rtb_CombinatorialLogic[0];
    } else {
      rtb_Switch1_p0 = BaseEngineController_A02_DWork.s254_UnitDelay_DSTATE;
    }

    /* Switch: '<S242>/Switch' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s242_Switch =
        BaseEngineController_A02_B.s372_Sum1;
    } else {
      /* Switch: '<S247>/Switch2' incorporates:
       *  Logic: '<S247>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S245>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S245>/motohawk_interpolation_2d1'
       *  Sum: '<S247>/Sum1'
       *  Sum: '<S247>/Sum2'
       */
      if (!rtb_Switch1_p0) {
        /* S-Function Block: <S245>/motohawk_interpolation_2d */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_RichEquivRatioTargetDelta_nq = TableInterpolation2D_real_T
            (BaseEngineController_A02_B.s402_motohawk_prelookup1,
             BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
             ((RichTargetDeltaMap_DataStore())), 9, 9);
          (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_nq;
        }

        BaseEngineController_A02_B.s242_Switch =
          rtb_RichEquivRatioTargetDelta_nq + rtb_DesiredLambda_idx;
      } else {
        /* S-Function Block: <S245>/motohawk_interpolation_2d1 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
            (BaseEngineController_A02_B.s402_motohawk_prelookup1,
             BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
             ((LeanTargetDeltaMap_DataStore())), 9, 9);
          (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
        }

        BaseEngineController_A02_B.s242_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }
    }

    /* Sum: '<S249>/Sum2' */
    BaseEngineController_A02_B.s249_Sum2 =
      BaseEngineController_A02_B.s242_Switch -
      BaseEngineController_A02_B.s372_Sum1;

    /* Product: '<S249>/Product5' */
    rtb_UnitDelay2_a5 = BaseEngineController_A02_B.s249_Sum2 *
      rtb_DataTypeConversion_i;

    /* Product: '<S249>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration5'
     */
    BaseEngineController_A02_B.s249_Product2 = rtb_UnitDelay2_a5 *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S251>/Switch1' incorporates:
     *  Constant: '<S246>/Constant'
     *  UnitDelay: '<S251>/Unit Delay'
     */
    if (rtb_RelationalOperator_pj) {
      BaseEngineController_A02_B.s251_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_B.s251_Switch1 =
        BaseEngineController_A02_DWork.s251_UnitDelay_DSTATE;
    }

    /* Product: '<S249>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration7'
     */
    rtb_Product4_l = rtb_UnitDelay2_a5 * (O2CtrlDGain_DataStore());

    /* Sum: '<S250>/Sum2' incorporates:
     *  UnitDelay: '<S250>/Unit Delay'
     */
    rtb_DataTypeConversion_i = rtb_Product4_l -
      BaseEngineController_A02_DWork.s250_UnitDelay_DSTATE;

    /* S-Function Block: <S250>/motohawk_delta_time */
    rtb_motohawk_delta_time_nl = 0.005;

    /* Product: '<S250>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S250>/motohawk_delta_time'
     */
    BaseEngineController_A02_B.s250_Product = rtb_DataTypeConversion_i /
      rtb_motohawk_delta_time_nl;

    /* Sum: '<S246>/Sum' incorporates:
     *  Constant: '<S246>/Convert to Fuel Multiplier'
     *  Sum: '<S249>/Sum1'
     */
    rtb_DataTypeConversion_i = ((BaseEngineController_A02_B.s249_Product2 +
      BaseEngineController_A02_B.s250_Product) +
      BaseEngineController_A02_B.s251_Switch1) + 1.0;

    /* MinMax: '<S248>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration11'
     */
    rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i,
      (O2CtrlPIDOutLowerLimit_DataStore()));

    /* MinMax: '<S248>/MinMax1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration10'
     */
    min_0 = rt_MINd_snf(rtb_DataTypeConversion_i,
                        (O2CtrlPIDOutUpperLimit_DataStore()));

    /* Product: '<S249>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration6'
     */
    rtb_DataTypeConversion_i = rtb_UnitDelay2_a5 * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S251>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s251_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fo = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S251>/Sum' incorporates:
     *  Product: '<S251>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S251>/motohawk_delta_time'
     */
    rtb_UnitDelay2_a5 = rtb_DataTypeConversion_i * rtb_motohawk_delta_time_fo +
      BaseEngineController_A02_B.s251_Switch1;

    /* MinMax: '<S253>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration8'
     */
    rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_UnitDelay2_a5,
      (O2ITermLowerLimit_DataStore()));

    /* MinMax: '<S253>/MinMax1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration9'
     */
    rtb_DataTypeConversion_i = rt_MINd_snf(rtb_DataTypeConversion_i,
      (O2ITermUpperLimit_DataStore()));

    /* UnitDelay: '<S247>/Unit Delay1' */
    rtb_UnitDelay2_a5 = BaseEngineController_A02_DWork.s247_UnitDelay1_DSTATE;

    /* Logic: '<S247>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S247>/motohawk_data_read'
     */
    rtb_LogicalOperator10 = (rtb_LogicalOperator2_n2 &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S255>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s255_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ivp = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S247>/Logical Operator4' */
    rtb_RelationalOperator6_k = !rtb_LogicalOperator1_a;

    /* Logic: '<S247>/Logical Operator6' */
    rtb_RelationalOperator_pj = !rtb_RelationalOperator_pj;

    /* Switch: '<S255>/Switch' incorporates:
     *  Constant: '<S255>/Constant'
     *  Logic: '<S247>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S255>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S255>/motohawk_delta_time'
     *  Sum: '<S255>/Sum'
     */
    if (rtb_LogicalOperator2_n2 && rtb_RelationalOperator6_k &&
        rtb_RelationalOperator_pj) {
      rtb_Sum_iy = rtb_motohawk_delta_time_ivp + O2LeanTimer_DataStore();
    } else {
      rtb_Sum_iy = 0.0;
    }

    /* Switch: '<S247>/Switch3' */
    if (rtb_LogicalOperator10) {
      BaseEngineController_A02_B.s247_Switch3 = rtb_UnitDelay2_a5;
    } else {
      BaseEngineController_A02_B.s247_Switch3 = rtb_Sum_iy;
    }

    /* RelationalOperator: '<S247>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration2'
     */
    rtb_LT3 = (BaseEngineController_A02_B.s247_Switch3 >=
               (O2LeanTimeThresh_DataStore()));

    /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(45, rtb_LT3);
      UpdateFault(45);
    }

    /* UnitDelay: '<S247>/Unit Delay' */
    rtb_UnitDelay2_a5 = BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE;

    /* Logic: '<S247>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S247>/motohawk_data_read'
     */
    rtb_LogicalOperator1_a = (rtb_AboveRich && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S257>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s257_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_m = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S257>/Switch' incorporates:
     *  Constant: '<S257>/Constant'
     *  Logic: '<S247>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S257>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S257>/motohawk_delta_time'
     *  Sum: '<S257>/Sum'
     */
    if (rtb_AboveRich && rtb_RelationalOperator6_k && rtb_RelationalOperator_pj)
    {
      rtb_UnitDelay4_bi = rtb_motohawk_delta_time_m + O2RichTimer_DataStore();
    } else {
      rtb_UnitDelay4_bi = 0.0;
    }

    /* Switch: '<S247>/Switch1' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s247_Switch1 = rtb_UnitDelay2_a5;
    } else {
      BaseEngineController_A02_B.s247_Switch1 = rtb_UnitDelay4_bi;
    }

    /* RelationalOperator: '<S247>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration1'
     */
    rtb_LT2 = (BaseEngineController_A02_B.s247_Switch1 >=
               (O2RichTimeThresh_DataStore()));

    /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(46, rtb_LT2);
      UpdateFault(46);
    }

    /* UnitDelay: '<S247>/Unit Delay2' */
    rtb_UnitDelay2_a5 = BaseEngineController_A02_DWork.s247_UnitDelay2_DSTATE;

    /* Logic: '<S247>/Logical Operator2' incorporates:
     *  Logic: '<S247>/Logical Operator1'
     *  Logic: '<S247>/Logical Operator3'
     */
    rtb_LogicalOperator2_n2 = ((!rtb_LogicalOperator2_n2) && (!rtb_AboveRich));

    /* Logic: '<S247>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S247>/motohawk_data_read'
     */
    rtb_LogicalOperator1_a = (rtb_LogicalOperator2_n2 &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S256>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s256_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_me = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S256>/Switch' incorporates:
     *  Constant: '<S256>/Constant'
     *  Logic: '<S247>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S256>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S256>/motohawk_delta_time'
     *  Sum: '<S256>/Sum'
     */
    if (rtb_LogicalOperator2_n2 && rtb_RelationalOperator6_k &&
        rtb_RelationalOperator_pj) {
      rtb_Sum1_gje = rtb_motohawk_delta_time_me + O2ActiveTimer_DataStore();
    } else {
      rtb_Sum1_gje = 0.0;
    }

    /* Switch: '<S247>/Switch4' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s247_Switch4 = rtb_UnitDelay2_a5;
    } else {
      BaseEngineController_A02_B.s247_Switch4 = rtb_Sum1_gje;
    }

    /* RelationalOperator: '<S247>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration3'
     */
    rtb_LT4 = (BaseEngineController_A02_B.s247_Switch4 >=
               (O2ActiveTimeThresh_DataStore()));

    /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(47, rtb_LT4);
      UpdateFault(47);
    }

    /* Saturate: '<S255>/Saturation' */
    rtb_Saturation_ad = rt_SATURATE(rtb_Sum_iy, 0.0, 16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S255>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer */
    {
      O2LeanTimer_DataStore() = rtb_Saturation_ad;
    }

    /* Saturate: '<S256>/Saturation' */
    rtb_Saturation_bu = rt_SATURATE(rtb_Sum1_gje, 0.0, 16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S256>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer */
    {
      O2ActiveTimer_DataStore() = rtb_Saturation_bu;
    }

    /* Saturate: '<S257>/Saturation' */
    rtb_Saturation_bh = rt_SATURATE(rtb_UnitDelay4_bi, 0.0, 16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S257>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer */
    {
      O2RichTimer_DataStore() = rtb_Saturation_bh;
    }

    /* InitialCondition: '<S242>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_A02_DWork.s242_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_A02_DWork.s242_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      BaseEngineController_A02_B.s242_Multiplyby10ifnotyetenabled = 1.0;
    } else {
      BaseEngineController_A02_B.s242_Multiplyby10ifnotyetenabled = min_0;
    }

    /* Update for UnitDelay: '<S254>/Unit Delay' */
    BaseEngineController_A02_DWork.s254_UnitDelay_DSTATE = rtb_Switch1_p0;

    /* Update for UnitDelay: '<S251>/Unit Delay' */
    BaseEngineController_A02_DWork.s251_UnitDelay_DSTATE =
      rtb_DataTypeConversion_i;

    /* Update for UnitDelay: '<S250>/Unit Delay' */
    BaseEngineController_A02_DWork.s250_UnitDelay_DSTATE = rtb_Product4_l;

    /* Update for UnitDelay: '<S247>/Unit Delay1' */
    BaseEngineController_A02_DWork.s247_UnitDelay1_DSTATE =
      BaseEngineController_A02_B.s247_Switch3;

    /* Update for UnitDelay: '<S247>/Unit Delay' */
    BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE =
      BaseEngineController_A02_B.s247_Switch1;

    /* Update for UnitDelay: '<S247>/Unit Delay2' */
    BaseEngineController_A02_DWork.s247_UnitDelay2_DSTATE =
      BaseEngineController_A02_B.s247_Switch4;

    /* end of Outputs for SubSystem: '<S137>/O2 PID Controller' */

    /* S-Function (motohawk_sfun_probe): '<S240>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* S-Function Block: <S137>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITermIn_DataStore()) = BaseEngineController_A02_B.s251_Switch1;
      (O2ITermIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s251_Switch1, (O2ITermIdxArr_DataStore()), 9,
         (O2ITermIdx_DataStore()));
      rtb_ITermIdx = (O2ITermIdx_DataStore());
    }

    /* end of Outputs for SubSystem: '<S121>/O2 Control' */

    /* Outputs for atomic SubSystem: '<S121>/Fuel System Manager' */

    /* Gain: '<S160>/Gain' */
    rtb_DataTypeConversion_i = 0.01 * BaseEngineController_A02_B.s578_Merge;

    /* Product: '<S160>/Product1' incorporates:
     *  Constant: '<S160>/ '
     *  S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration2'
     *  Sum: '<S160>/Add1'
     */
    rtb_Sum_iy = (1.0 - rtb_DataTypeConversion_i) * (AF_Gasoline_DataStore());

    /* Sum: '<S160>/Add' incorporates:
     *  Product: '<S160>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration3'
     */
    BaseEngineController_A02_B.s160_Add = (AF_Ethanol_DataStore()) *
      rtb_DataTypeConversion_i + rtb_Sum_iy;

    /* Product: '<S158>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_A02_B.s158_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_A02_B.s326_Saturation1 * rtb_DesiredLambda_idx /
      BaseEngineController_A02_B.s160_Add;

    /* Product: '<S155>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S155>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S155>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_A02_B.s155_PerCylinderMassFlowRate =
      BaseEngineController_A02_B.s158_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S155>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    BaseEngineController_A02_B.s155_ApplyMultipliersforO2KnockControlandEnrichment1
      = BaseEngineController_A02_B.s155_PerCylinderMassFlowRate *
      BaseEngineController_A02_B.s242_Multiplyby10ifnotyetenabled;

    /* Outputs for atomic SubSystem: '<S134>/Injector Manager' */

    /* Outputs for enable SubSystem: '<S156>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S161>/Enable'
     *  S-Function (motohawk_sfun_calibration): '<S156>/motohawk_calibration1'
     */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!((int32_T)
            BaseEngineController_A02_DWork.s156_DeltaTPSTransientFueling_MODE !=
            0)) {
        /* S-Function Block: <S166>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s166_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S167>/Unit Delay' */
        BaseEngineController_A02_DWork.s167_UnitDelay_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s156_DeltaTPSTransientFueling_MODE = TRUE;
      }

      /* S-Function Block: <S166>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s166_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_hl = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S166>/Product' incorporates:
       *  MinMax: '<S166>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S166>/motohawk_calibration'
       */
      rtb_Product_hl /= rt_MAXd_snf(rtb_Product_hl,
        (DeltaTPS_FiltConst_DataStore()));

      /* Sum: '<S167>/Sum1' incorporates:
       *  Constant: '<S167>/Constant'
       *  Product: '<S167>/Product'
       *  Product: '<S167>/Product1'
       *  Sum: '<S167>/Sum'
       *  UnitDelay: '<S167>/Unit Delay'
       */
      BaseEngineController_A02_B.s167_Sum1 = (1.0 - rtb_Product_hl) *
        BaseEngineController_A02_DWork.s167_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s374_Switch2 * rtb_Product_hl;

      /* Sum: '<S161>/Sum' */
      BaseEngineController_A02_B.s161_Sum =
        BaseEngineController_A02_B.s374_Switch2 -
        BaseEngineController_A02_B.s167_Sum1;

      /* S-Function Block: <S161>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) = BaseEngineController_A02_B.s326_Saturation1;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s326_Saturation1, (MAF09IdxArr_DataStore()),
           9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_h = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S161>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_A02_B.s161_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s161_Sum, (DeltaTPS17IdxArr_DataStore()),
           17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_fq = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S161>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_k = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_h, rtb_motohawk_prelookup1_fq, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_k;
      }

      /* Outputs for enable SubSystem: '<S161>/ECT Transient Fueling' incorporates:
       *  Constant: '<S164>/Constant'
       *  EnablePort: '<S165>/Enable'
       *  RelationalOperator: '<S164>/RelOp'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S161>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S161>/motohawk_prelookup1'
       */
      if (rtb_motohawk_interpolation_2d2_k != 1.0) {
        if (!((int32_T)
              BaseEngineController_A02_DWork.s161_ECTTransientFueling_MODE != 0))
        {
          BaseEngineController_A02_DWork.s161_ECTTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S165>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_A02_B.s165_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_A02_B.s359_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_A02_B.s165_motohawk_interpolation_1d;
        }
      } else {
        if ((int32_T)
            BaseEngineController_A02_DWork.s161_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S165>/Mult' */
          BaseEngineController_A02_B.s165_motohawk_interpolation_1d = 1.0;
          BaseEngineController_A02_DWork.s161_ECTTransientFueling_MODE = FALSE;
        }
      }

      /* end of Outputs for SubSystem: '<S161>/ECT Transient Fueling' */

      /* Product: '<S161>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S161>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S161>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s161_Product1 =
        rtb_motohawk_interpolation_2d2_k *
        BaseEngineController_A02_B.s165_motohawk_interpolation_1d;

      /* Update for UnitDelay: '<S167>/Unit Delay' */
      BaseEngineController_A02_DWork.s167_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s167_Sum1;
    } else {
      if ((int32_T)
          BaseEngineController_A02_DWork.s156_DeltaTPSTransientFueling_MODE) {
        /* Disable for enable SubSystem: '<S161>/ECT Transient Fueling' */

        /* Disable for Outport: '<S165>/Mult' */
        BaseEngineController_A02_B.s165_motohawk_interpolation_1d = 1.0;
        BaseEngineController_A02_DWork.s161_ECTTransientFueling_MODE = FALSE;

        /* end of Disable for SubSystem: '<S161>/ECT Transient Fueling' */

        /* Disable for Outport: '<S161>/DeltaTPSMult' */
        BaseEngineController_A02_B.s161_Product1 = 1.0;
        BaseEngineController_A02_DWork.s156_DeltaTPSTransientFueling_MODE =
          FALSE;
      }
    }

    /* end of Outputs for SubSystem: '<S156>/Delta TPS Transient Fueling' */

    /* If: '<S163>/If' incorporates:
     *  ActionPort: '<S170>/Action Port'
     *  ActionPort: '<S171>/Action Port'
     *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration1'
     *  SubSystem: '<S163>/Enabled Tau-X Algorithm'
     *  SubSystem: '<S163>/Pass-Through'
     */
    rtb_Add_a = BaseEngineController_A02_DWork.s163_If_ActiveSubsystem;
    if ((TauXFuelingEnable_DataStore())) {
      rtb_Sum_l3 = 0;
    } else {
      rtb_Sum_l3 = 1;
    }

    BaseEngineController_A02_DWork.s163_If_ActiveSubsystem = rtb_Sum_l3;
    switch (rtb_Sum_l3) {
     case 0:
      if (rtb_Sum_l3 != rtb_Add_a) {
        /* InitializeConditions for UnitDelay: '<S174>/Initial Condition is True' */
        BaseEngineController_A02_DWork.s174_InitialConditionisTrue_DSTATE = TRUE;

        /* InitializeConditions for UnitDelay: '<S175>/Unit Delay' */
        BaseEngineController_A02_DWork.s175_UnitDelay_DSTATE = 0.0;

        /* S-Function Block: <S175>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s175_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      /* Switch: '<S175>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S170>/motohawk_calibration3'
       *  UnitDelay: '<S174>/Initial Condition is True'
       *  UnitDelay: '<S175>/Unit Delay'
       */
      if (BaseEngineController_A02_DWork.s174_InitialConditionisTrue_DSTATE) {
        BaseEngineController_A02_B.s175_Switch1 =
          (TransientFuelInitPuddle_DataStore());
      } else {
        BaseEngineController_A02_B.s175_Switch1 =
          BaseEngineController_A02_DWork.s175_UnitDelay_DSTATE;
      }

      /* Sum: '<S170>/Add1' incorporates:
       *  Constant: '<S170>/Constant'
       */
      rtb_DataTypeConversion_i = 2.7315E+002 +
        BaseEngineController_A02_B.s658_Merge;

      /* Sum: '<S170>/Add' incorporates:
       *  Constant: '<S170>/Constant'
       */
      rtb_Sum_iy = 2.7315E+002 + BaseEngineController_A02_B.s649_Merge;

      /* Fcn: '<S170>/Film Temperature Average of ECT and IAT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S170>/motohawk_calibration1'
       */
      rtb_DataTypeConversion_i = (1.0 - (FuelVaporFactorBias_DataStore()) /
        100.0) * rtb_Sum_iy + rtb_DataTypeConversion_i *
        (FuelVaporFactorBias_DataStore()) / 100.0;

      /* Math: '<S170>/Math Function' incorporates:
       *  Saturate: '<S170>/Saturation'
       *
       * About '<S170>/Math Function':
       *  Operator: log
       */
      rtb_Sum_iy = log(rt_MAXd_snf(BaseEngineController_A02_B.s594_Merge, 0.0));

      /* Product: '<S170>/Product' incorporates:
       *  Saturate: '<S170>/Saturation1'
       */
      BaseEngineController_A02_B.s170_Product = rtb_DataTypeConversion_i /
        rt_MAXd_snf(rtb_Sum_iy, 0.0001);

      /* S-Function Block: <S170>/motohawk_prelookup3 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF05In_DataStore()) = BaseEngineController_A02_B.s326_Saturation1;
        (MAF05Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s326_Saturation1, (MAF05IdxArr_DataStore()),
           5, (MAF05Idx_DataStore()));
        rtb_motohawk_prelookup3 = (MAF05Idx_DataStore());
      }

      /* S-Function Block: <S170>/motohawk_prelookup2 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (FuelVapFactorIn_DataStore()) = BaseEngineController_A02_B.s170_Product;
        (FuelVapFactorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s170_Product,
           (FuelVapFactorIdxArr_DataStore()), 5, (FuelVapFactorIdx_DataStore()));
        rtb_motohawk_prelookup2_b = (FuelVapFactorIdx_DataStore());
      }

      /* S-Function Block: <S170>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_d = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup3, rtb_motohawk_prelookup2_b, (real_T *)
           ((TransientFuelXMap_DataStore())), 5, 5);
        (TransientFuelX_DataStore()) = rtb_motohawk_interpolation_2d2_d;
      }

      /* Product: '<S176>/Product' incorporates:
       *  Constant: '<S176>/Constant'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S170>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S170>/motohawk_prelookup2'
       *  S-Function (motohawk_sfun_prelookup): '<S170>/motohawk_prelookup3'
       *  Sum: '<S176>/Sum'
       */
      BaseEngineController_A02_B.s176_uX = 1.0 / (1.0 -
        rtb_motohawk_interpolation_2d2_d);

      /* Gain: '<S173>/Compute using grams' */
      rtb_DataTypeConversion_i = 0.001 * BaseEngineController_A02_B.s175_Switch1;

      /* S-Function Block: <S170>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup3, rtb_motohawk_prelookup2_b, (real_T *)
           ((TransientFuelTauMap_DataStore())), 5, 5);
        (TransientFuelTau_DataStore()) = rtb_motohawk_interpolation_2d1_a;
      }

      /* Product: '<S176>/Product2' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S170>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S170>/motohawk_prelookup2'
       *  S-Function (motohawk_sfun_prelookup): '<S170>/motohawk_prelookup3'
       */
      BaseEngineController_A02_B.s176_Product2 = rtb_DataTypeConversion_i /
        rtb_motohawk_interpolation_2d1_a;

      /* Saturate: '<S170>/Saturation2' */
      rtb_Sum_iy = rt_MAXd_snf
        (BaseEngineController_A02_B.s155_ApplyMultipliersforO2KnockControlandEnrichment1,
         0.0001);

      /* Product: '<S176>/Product1' incorporates:
       *  Sum: '<S176>/Sum1'
       */
      rtb_DataTypeConversion_i = (rtb_Sum_iy -
        BaseEngineController_A02_B.s176_Product2) *
        BaseEngineController_A02_B.s176_uX;

      /* MinMax: '<S173>/Can\'t inject negative fuel' incorporates:
       *  Constant: '<S173>/Can\'t Have Negative Puddle Mass1'
       */
      BaseEngineController_A02_B.s173_Cantinjectnegativefuel = rt_MAXd_snf(0.0,
        rtb_DataTypeConversion_i);

      /* Product: '<S173>/Product' */
      BaseEngineController_A02_B.s173_Product =
        BaseEngineController_A02_B.s173_Cantinjectnegativefuel / rtb_Sum_iy;

      /* Gain: '<S173>/Store and report in milligrams' incorporates:
       *  Sum: '<S173>/Sum1'
       */
      rtb_DataTypeConversion_i =
        (BaseEngineController_A02_B.s173_Cantinjectnegativefuel - rtb_Sum_iy) *
        1000.0;

      /* S-Function Block: <S175>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s175_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_m5 = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S175>/Sum' incorporates:
       *  Product: '<S175>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S175>/motohawk_delta_time'
       */
      rtb_Sum_iy = rtb_DataTypeConversion_i * rtb_motohawk_delta_time_m5 +
        BaseEngineController_A02_B.s175_Switch1;

      /* MinMax: '<S177>/MinMax' incorporates:
       *  Constant: '<S173>/Can\'t have negative puddle mass'
       */
      rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_Sum_iy, 0.0);

      /* MinMax: '<S177>/MinMax1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S170>/motohawk_calibration2'
       */
      rtb_DataTypeConversion_i = rt_MINd_snf(rtb_DataTypeConversion_i,
        (TransientFuelMaxPuddle_DataStore()));

      /* ZeroOrderHold: '<S170>/Zero-Order Hold' */
      rtb_Merge_b0d = BaseEngineController_A02_B.s173_Cantinjectnegativefuel;

      /* Update for UnitDelay: '<S174>/Initial Condition is True' incorporates:
       *  Constant: '<S174>/False After First Sample'
       */
      BaseEngineController_A02_DWork.s174_InitialConditionisTrue_DSTATE = FALSE;

      /* Update for UnitDelay: '<S175>/Unit Delay' */
      BaseEngineController_A02_DWork.s175_UnitDelay_DSTATE =
        rtb_DataTypeConversion_i;
      break;

     case 1:
      /* Inport: '<S171>/Fdes [g//s]' */
      rtb_Merge_b0d =
        BaseEngineController_A02_B.s155_ApplyMultipliersforO2KnockControlandEnrichment1;
      break;
    }

    /* Product: '<S156>/Divide' */
    rtb_Divide_l = BaseEngineController_A02_B.s161_Product1 * rtb_Merge_b0d;

    /* S-Function Block: <S156>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s402_motohawk_prelookup1,
         BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* RelationalOperator: '<S169>/RelOp' incorporates:
     *  Constant: '<S169>/Constant'
     */
    rtb_RelOp_fa = (BaseEngineController_A02_B.s556_Sum1 != 0.0);

    /* Outputs for enable SubSystem: '<S162>/Multiply and Divide, avoiding divde by zero' incorporates:
     *  EnablePort: '<S168>/Enable'
     */
    BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(rtb_RelOp_fa,
      rtb_Divide_l, 60000.0, BaseEngineController_A02_B.s556_Sum1, 1.0,
      &BaseEngineController_A02_B.s162_MultiplyandDivideavoidingdivdebyzero);

    /* end of Outputs for SubSystem: '<S162>/Multiply and Divide, avoiding divde by zero' */

    /* S-Function Block: <S156>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s402_motohawk_prelookup1,
         BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* end of Outputs for SubSystem: '<S134>/Injector Manager' */

    /* Outputs for atomic SubSystem: '<S134>/O2 Fuel Adapt' */
    /* S-Function Block: <S157>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_f = TableInterpolation1D_real_T
        (rtb_ITermIdx, (real_T *) ((FuelAdaptGainTbl_DataStore())), 9);
      (FuelAdaptGain_DataStore()) = rtb_motohawk_interpolation_1d1_f;
    }

    /* Product: '<S157>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S157>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S137>/motohawk_prelookup13'
     */
    rtb_DataTypeConversion_i = BaseEngineController_A02_B.s251_Switch1 *
      rtb_motohawk_interpolation_1d1_f;

    /* MinMax: '<S184>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration'
     */
    rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i,
      (FuelAdaptErrorLwrLim_DataStore()));

    /* MinMax: '<S184>/MinMax1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s184_MinMax1 = rt_MINd_snf
      (rtb_DataTypeConversion_i, (FuelAdaptErrorUprLim_DataStore()));

    /* S-Function Block: <S157>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2 = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s402_motohawk_prelookup1,
         BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdaptMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_DataStore()) = rtb_motohawk_interpolation_2d2;
    }

    /* Outputs for atomic SubSystem: '<S157>/WarmUp Disable' */

    /* Logic: '<S182>/Logical Operator' incorporates:
     *  Constant: '<S182>/Constant'
     *  RelationalOperator: '<S182>/Relational Operator'
     */
    BaseEngineController_A02_B.s182_LogicalOperator = !(rtb_DesiredLambda_idx_0 >
      1.01);

    /* end of Outputs for SubSystem: '<S157>/WarmUp Disable' */

    /* Outputs for atomic SubSystem: '<S157>/O2 Control Enable Delay' */
    /* S-Function Block: <S183>/motohawk_delta_time */
    rtb_motohawk_delta_time_g = 0.005;

    /* Switch: '<S183>/Switch' incorporates:
     *  Constant: '<S183>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S183>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S183>/motohawk_delta_time'
     *  Sum: '<S183>/Sum'
     */
    if (BaseEngineController_A02_B.s240_LogicalOperator2) {
      rtb_DataTypeConversion_i = rtb_motohawk_delta_time_g +
        LiqDelayTime_DataStore();
    } else {
      rtb_DataTypeConversion_i = 0.0;
    }

    /* RelationalOperator: '<S180>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_a = (rtb_DataTypeConversion_i >
      (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S183>/Saturation' */
    rtb_Saturation_c = rt_SATURATE(rtb_DataTypeConversion_i, 0.0, 16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S183>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_c;
    }

    /* end of Outputs for SubSystem: '<S157>/O2 Control Enable Delay' */

    /* Abs: '<S157>/Abs' */
    rtb_DataTypeConversion_i = fabs(BaseEngineController_A02_B.s251_Switch1);

    /* Logic: '<S157>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S157>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S157>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S157>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S157>/motohawk_calibration2'
     */
    BaseEngineController_A02_B.s157_LogicalOperator2 =
      ((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
       BaseEngineController_A02_B.s182_LogicalOperator && rtb_LogicalOperator1_a
       && (rtb_DataTypeConversion_i <= (FuelAdaptDelta_DataStore())));

    /* Outputs for enable SubSystem: '<S157>/Adapt FuelFlowComp Map' incorporates:
     *  EnablePort: '<S178>/Enable'
     */
    if (BaseEngineController_A02_B.s157_LogicalOperator2) {
      /* S-Function Block: <S178>/motohawk_adapt_table */
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
              BaseEngineController_A02_B.s184_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdaptMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdaptMap_DataStore())[_row][_col+1] +
              BaseEngineController_A02_B.s184_MinMax1;
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

      /* S-Function (motohawk_sfun_fault_def): '<S178>/motohawk_fault_def' incorporates:
       *  RelationalOperator: '<S178>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S157>/motohawk_interpolation_2d2'
       */

      /* Set Fault Suspected Status: FuelAdaptRangeHi */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(17, (rtb_motohawk_interpolation_2d2 >=
          (FuelFlowCompMaxValue_DataStore())));
        UpdateFault(17);
      }

      /* S-Function (motohawk_sfun_fault_def): '<S178>/motohawk_fault_def1' incorporates:
       *  RelationalOperator: '<S178>/Relational Operator1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S157>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration1'
       */

      /* Set Fault Suspected Status: FuelAdaptRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(18, (rtb_motohawk_interpolation_2d2 <=
          (FuelFlowCompMinValue_DataStore())));
        UpdateFault(18);
      }
    }

    /* end of Outputs for SubSystem: '<S157>/Adapt FuelFlowComp Map' */

    /* S-Function Block: <S157>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_b = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s402_motohawk_prelookup1,
         BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_b;
    }

    /* Product: '<S157>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S157>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S157>/motohawk_interpolation_2d2'
     */
    rtb_DataTypeConversion_i = rtb_motohawk_interpolation_2d1_b *
      rtb_motohawk_interpolation_2d2;

    /* end of Outputs for SubSystem: '<S134>/O2 Fuel Adapt' */

    /* end of Outputs for SubSystem: '<S121>/Fuel System Manager' */

    /* Stateflow: '<S138>/Chart' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S138>/motohawk_calibration'
     */
    /* Gateway: Foreground/Control/Controller/Run/O2 Heater/Chart */
    /* During: Foreground/Control/Controller/Run/O2 Heater/Chart */
    if (BaseEngineController_A02_DWork.s258_is_active_c6_BaseEngineController_A02
        == 0) {
      /* Entry: Foreground/Control/Controller/Run/O2 Heater/Chart */
      BaseEngineController_A02_DWork.s258_is_active_c6_BaseEngineController_A02 =
        1U;

      /* Transition: '<S258>:5' */
      /* Entry 'Off': '<S258>:4' */
      BaseEngineController_A02_DWork.s258_is_c6_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Off;
    } else {
      switch (BaseEngineController_A02_DWork.s258_is_c6_BaseEngineController_A02)
      {
       case BaseEngineController_A02_IN_Off:
        /* During 'Off': '<S258>:4' */
        if (BaseEngineController_A02_B.s356_MinMax1 <=
            (Heater_Off_Temp_DataStore()) - 1.0) {
          /* Transition: '<S258>:8' */
          /* Exit 'Off': '<S258>:4' */
          /* Entry 'On': '<S258>:6' */
          BaseEngineController_A02_DWork.s258_is_c6_BaseEngineController_A02 =
            BaseEngineController_A02_IN_On;
        } else {
          BaseEngineController_A02_B.s258_HEATER = FALSE;
        }
        break;

       case BaseEngineController_A02_IN_On:
        /* During 'On': '<S258>:6' */
        if (BaseEngineController_A02_B.s356_MinMax1 >=
            (Heater_Off_Temp_DataStore()) + 1.0) {
          /* Transition: '<S258>:9' */
          /* Exit 'On': '<S258>:6' */
          /* Entry 'Off': '<S258>:4' */
          BaseEngineController_A02_DWork.s258_is_c6_BaseEngineController_A02 =
            BaseEngineController_A02_IN_Off;
        } else {
          BaseEngineController_A02_B.s258_HEATER = TRUE;
        }
        break;

       default:
        /* Transition: '<S258>:5' */
        /* Entry 'Off': '<S258>:4' */
        BaseEngineController_A02_DWork.s258_is_c6_BaseEngineController_A02 =
          BaseEngineController_A02_IN_Off;
        break;
      }
    }

    /* ZeroOrderHold: '<S121>/Zero-Order Hold1' */
    BaseEngineController_A02_B.s120_SparkEnergy =
      BaseEngineController_A02_B.s139_motohawk_interpolation_2d1;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold12' */
    BaseEngineController_A02_B.s120_SparkAdv =
      BaseEngineController_A02_B.s262_Switch;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold16' incorporates:
     *  Constant: '<S121>/ON1'
     */
    BaseEngineController_A02_B.s120_FUELP = TRUE;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S156>/Primary Pulse Injection Timing'
     */
    BaseEngineController_A02_B.s120_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold18' */
    BaseEngineController_A02_B.s120_Throttle =
      BaseEngineController_A02_B.s131_MultiportSwitch;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold2' */
    BaseEngineController_A02_B.s120_EGR =
      BaseEngineController_A02_B.s133_Product;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S156>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_A02_B.s120_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold4' */
    BaseEngineController_A02_B.s120_FuelMult = rtb_DataTypeConversion_i;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold5' incorporates:
     *  Constant: '<S121>/OILP'
     */
    BaseEngineController_A02_B.s120_OILP = TRUE;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold6' */
    BaseEngineController_A02_B.s120_O2Heater =
      BaseEngineController_A02_B.s258_HEATER;

    /* S-Function (motohawk_sfun_replicate): '<S121>/motohawk_replicate1' */

    /* S-Function Block: <S121>/motohawk_replicate1 */
    {
      int_T i1;
      real_T *y0 = BaseEngineController_A02_B.s120_FPC;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] =
          BaseEngineController_A02_B.s162_MultiplyandDivideavoidingdivdebyzero.s168_chargemass;
      }
    }
  } else {
    if ((int32_T)BaseEngineController_A02_DWork.s7_Run_MODE) {
      /* Level2 S-Function Block: '<S121>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_1327p0009 */
      BaseEngineController_A02_DWork.s121_motohawk_trigger1_DWORK1 = 0;

      /* Disable for atomic SubSystem: '<S121>/Fuel System Manager' */

      /* Disable for atomic SubSystem: '<S134>/Injector Manager' */

      /* Disable for enable SubSystem: '<S156>/Delta TPS Transient Fueling' */

      /* Disable for enable SubSystem: '<S161>/ECT Transient Fueling' */

      /* Disable for Outport: '<S165>/Mult' */
      BaseEngineController_A02_B.s165_motohawk_interpolation_1d = 1.0;
      BaseEngineController_A02_DWork.s161_ECTTransientFueling_MODE = FALSE;

      /* end of Disable for SubSystem: '<S161>/ECT Transient Fueling' */

      /* Disable for Outport: '<S161>/DeltaTPSMult' */
      BaseEngineController_A02_B.s161_Product1 = 1.0;
      BaseEngineController_A02_DWork.s156_DeltaTPSTransientFueling_MODE = FALSE;

      /* end of Disable for SubSystem: '<S156>/Delta TPS Transient Fueling' */

      /* Disable for If: '<S163>/If' */
      BaseEngineController_A02_DWork.s163_If_ActiveSubsystem = -1;

      /* end of Disable for SubSystem: '<S134>/Injector Manager' */

      /* end of Disable for SubSystem: '<S121>/Fuel System Manager' */
      BaseEngineController_A02_DWork.s7_Run_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S7>/Run' */
  /* S-Function Block: <S408>/motohawk_ain14 Resource: O2SensorPin */
  {
    extern NativeError_S O2SensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    O2SensorPin_AnalogInput_Get(&BaseEngineController_A02_B.s408_motohawk_ain14,
      NULL);
  }

  /* DataTypeConversion: '<S565>/Data Type Conversion' */
  rtb_DataTypeConversion_kk = (real_T)
    BaseEngineController_A02_B.s408_motohawk_ain14;

  /* Product: '<S565>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S565>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_i = rtb_DataTypeConversion_kk * (SysVoltGain_DataStore());

  /* Sum: '<S565>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S565>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s565_Sum1 = rtb_DataTypeConversion_i +
    (SysVoltOfst_DataStore());

  /* Logic: '<S565>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S565>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S565>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(56) || IsFaultActive(57));

  /* Logic: '<S565>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S565>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S565>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(56) || IsFaultSuspected(57));

  /* UnitDelay: '<S565>/Unit Delay1' */
  rtb_UnitDelay1_az = BaseEngineController_A02_DWork.s565_UnitDelay1_DSTATE;

  /* If: '<S565>/If' incorporates:
   *  ActionPort: '<S625>/Action Port'
   *  ActionPort: '<S626>/Action Port'
   *  ActionPort: '<S627>/Action Port'
   *  Logic: '<S565>/Logical Operator5'
   *  Logic: '<S565>/Logical Operator6'
   *  SubSystem: '<S565>/If Action Subsystem'
   *  SubSystem: '<S565>/If Action Subsystem1'
   *  SubSystem: '<S565>/If Action Subsystem2'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_az, &rtb_Merge_cs);
  } else if (rtb_RelationalOperator6_k) {
    BaseEngineController_A02_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_cs);
  } else {
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s565_Sum1, &rtb_Merge_cs);
  }

  /* S-Function Block: <S624>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s624_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S624>/Product' incorporates:
   *  MinMax: '<S624>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S624>/motohawk_calibration'
   */
  rtb_Switch_e /= rt_MAXd_snf(rtb_Switch_e, (SysVoltFilterConst_DataStore()));

  /* Sum: '<S629>/Sum1' incorporates:
   *  Constant: '<S629>/Constant'
   *  Product: '<S629>/Product'
   *  Product: '<S629>/Product1'
   *  Sum: '<S629>/Sum'
   *  UnitDelay: '<S629>/Unit Delay'
   */
  rtb_Sum1_gj = (1.0 - rtb_Switch_e) *
    BaseEngineController_A02_DWork.s629_UnitDelay_DSTATE + rtb_Merge_cs *
    rtb_Switch_e;

  /* If: '<S628>/If' incorporates:
   *  ActionPort: '<S630>/Action Port'
   *  ActionPort: '<S631>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S628>/override_enable'
   *  SubSystem: '<S628>/NewValue'
   *  SubSystem: '<S628>/OldValue'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Inport: '<S630>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S628>/new_value'
     */
    BaseEngineController_A02_B.s628_Merge = (SysVolt_new_DataStore());
  } else {
    /* Inport: '<S631>/In1' */
    BaseEngineController_A02_B.s628_Merge = rtb_Sum1_gj;
  }

  /* S-Function Block: <S362>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_A02_B.s628_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s628_Merge, (SysVolt09IdxArr_DataStore()), 9,
       (SysVolt09Idx_DataStore()));
    BaseEngineController_A02_B.s362_motohawk_prelookup = (SysVolt09Idx_DataStore
      ());
  }

  /* S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_15457p0007 */
  if (BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s6_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_15456p0007 */
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
    rtb_motohawk_fault_action1_m = GetFaultActionStatus(10);
  }

  /* Outputs for enable SubSystem: '<S15>/PassThrough1' incorporates:
   *  EnablePort: '<S94>/Enable'
   */
  if (rtb_motohawk_fault_action1_m) {
    if (!((int32_T)BaseEngineController_A02_DWork.s15_PassThrough1_MODE != 0)) {
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
    if ((int32_T)BaseEngineController_A02_DWork.s15_PassThrough1_MODE) {
      /* Disable for Outport: '<S94>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_A02_B.s15_Merge1[i] = 0;
      }

      BaseEngineController_A02_DWork.s15_PassThrough1_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S15>/PassThrough1' */

  /* S-Function (motohawk_sfun_fault_action): '<S15>/motohawk_fault_action2'
   *
   * Regarding '<S15>/motohawk_fault_action2':
     Get Fault Action Status: MediumRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action2 = GetFaultActionStatus(9);
  }

  /* Outputs for enable SubSystem: '<S15>/PassThrough2' incorporates:
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

  /* end of Outputs for SubSystem: '<S15>/PassThrough2' */

  /* S-Function (motohawk_sfun_fault_action): '<S15>/motohawk_fault_action3'
   *
   * Regarding '<S15>/motohawk_fault_action3':
     Get Fault Action Status: HardRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action3 = GetFaultActionStatus(4);
  }

  /* Outputs for enable SubSystem: '<S15>/PassThrough3' incorporates:
   *  EnablePort: '<S96>/Enable'
   */
  if (rtb_motohawk_fault_action3) {
    if (!((int32_T)BaseEngineController_A02_DWork.s15_PassThrough3_MODE != 0)) {
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
    if ((int32_T)BaseEngineController_A02_DWork.s15_PassThrough3_MODE) {
      /* Disable for Outport: '<S96>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_A02_B.s15_Merge1[i] = 0;
      }

      BaseEngineController_A02_DWork.s15_PassThrough3_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S15>/PassThrough3' */

  /* Outputs for enable SubSystem: '<S15>/SequenceCutMachine' incorporates:
   *  EnablePort: '<S99>/Enable'
   *  Logic: '<S15>/Logical Operator4'
   */
  if (rtb_motohawk_fault_action1_m || rtb_motohawk_fault_action2 ||
      rtb_motohawk_fault_action3) {
    if (!((int32_T)BaseEngineController_A02_DWork.s15_SequenceCutMachine_MODE !=
          0)) {
      /* InitializeConditions for UnitDelay: '<S99>/Unit Delay2' */
      BaseEngineController_A02_DWork.s99_UnitDelay2_DSTATE = 1.0;

      /* InitializeConditions for UnitDelay: '<S99>/Unit Delay1' */
      BaseEngineController_A02_DWork.s99_UnitDelay1_DSTATE = 1U;

      /* Level2 S-Function Block: '<S99>/motohawk_trigger' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_TDC1_EVENT_14692p0002 */
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

    /* UnitDelay: '<S99>/Unit Delay1' */
    BaseEngineController_A02_B.s99_UnitDelay1 =
      BaseEngineController_A02_DWork.s99_UnitDelay1_DSTATE;

    /* S-Function (motohawk_sfun_trigger): '<S99>/motohawk_trigger' */
    /* Enable for Trigger_FGND_TDC1_EVENT_14692p0002 */
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
    if ((int32_T)BaseEngineController_A02_DWork.s15_SequenceCutMachine_MODE) {
      /* Level2 S-Function Block: '<S99>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_TDC1_EVENT_14692p0002 */
      BaseEngineController_A02_DWork.s99_motohawk_trigger_DWORK1 = 0;

      /* Disable for Outport: '<S99>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s109_CutArray[i] = 0;
      }

      BaseEngineController_A02_DWork.s15_SequenceCutMachine_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S15>/SequenceCutMachine' */

  /* Outputs for enable SubSystem: '<S15>/PassThrough4' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  EnablePort: '<S97>/Enable'
   *  Logic: '<S15>/Logical Operator'
   *  RelationalOperator: '<S15>/Relational Operator'
   *  RelationalOperator: '<S15>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S15>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 0) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!((int32_T)BaseEngineController_A02_DWork.s15_PassThrough4_MODE != 0)) {
      BaseEngineController_A02_DWork.s15_PassThrough4_MODE = TRUE;
    }

    /* DataTypeConversion: '<S97>/Data Type Conversion' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s97_DataTypeConversion[i] =
        (BaseEngineController_A02_B.s109_CutArray[i] != 0);
    }
  } else {
    if ((int32_T)BaseEngineController_A02_DWork.s15_PassThrough4_MODE) {
      /* Disable for Outport: '<S97>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s97_DataTypeConversion[i] = FALSE;
      }

      BaseEngineController_A02_DWork.s15_PassThrough4_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S15>/PassThrough4' */

  /* Logic: '<S15>/Logical Operator2' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s15_LogicalOperator2[i] =
      !BaseEngineController_A02_B.s97_DataTypeConversion[i];
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_6042p0011 */
  if (BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S5>/Coil Control' */

    /* Enable for atomic SubSystem: '<S778>/EST Enable TDC Counter' */
    /* Level2 S-Function Block: '<S783>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_5531p0006 */
    BaseEngineController_A02_DWork.s783_motohawk_trigger1_DWORK1 = 1;

    /* end of Enable for SubSystem: '<S778>/EST Enable TDC Counter' */
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

  /* Sum: '<S12>/Difference' */
  rtb_Switch_e = BaseEngineController_A02_B.s120_EGR -
    BaseEngineController_A02_B.s570_Merge;

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
    rtb_motohawk_prelookup_iz = (EGR_Prelookup_PWIdx_DataStore());
  }

  /* S-Function Block: <S12>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_iz, (real_T *) ((EGR_Interpolation_PWTbl_DataStore
         ())), 11);
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
  rtb_RelationalOperator_pj = (rtb_motohawk_interpolation_1d1_n > 0.0);

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
    /* Entry 'Init': '<S20>:9' */
    BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Init;
  } else {
    switch (BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02) {
     case BaseEngineController_A02_IN_Init:
      /* During 'Init': '<S20>:9' */
      if ((rtb_LogicalOperator1_a || rtb_RelationalOperator_pj) == 1) {
        /* Transition: '<S20>:14' */
        /* Exit 'Init': '<S20>:9' */
        /* Entry 'default': '<S20>:4' */
        BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else {
        BaseEngineController_A02_B.s20_enout = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_default:
      /* During 'default': '<S20>:4' */
      if ((int32_T)RESET_DataStore() == 1) {
        /* Transition: '<S20>:7' */
        /* Exit 'default': '<S20>:4' */
        /* Entry 'reset': '<S20>:5' */
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
        /* Exit 'reset': '<S20>:5' */
        /* Entry 'default': '<S20>:4' */
        BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else {
        BaseEngineController_A02_B.s20_enout = 0.0;
      }
      break;

     default:
      /* Transition: '<S20>:13' */
      /* Entry 'Init': '<S20>:9' */
      BaseEngineController_A02_DWork.s20_is_c1_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Init;
      break;
    }
  }

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

  /* Gain: '<S19>/Gain' */
  rtb_DataTypeConversion_i = 1.0E+006 * rtb_Switch_e;

  /* MultiPortSwitch: '<S19>/PW Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S12>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S12>/motohawk_prelookup'
   */
  switch (((uint8_T)(Mode_DataStore()))) {
   case 1:
    rtb_Merge_b0d = rtb_motohawk_interpolation_1d_n;
    break;

   case 2:
    rtb_Merge_b0d = (Default_PW_DataStore());
    break;

   default:
    rtb_Merge_b0d = rtb_motohawk_interpolation_1d_n;
    break;
  }

  /* MultiPortSwitch: '<S19>/DC Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S12>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_prelookup): '<S12>/motohawk_prelookup1'
   */
  switch (((uint8_T)(Mode_DataStore()))) {
   case 1:
    rtb_Sum_ic = (Default_DC_DataStore());
    break;

   case 2:
    rtb_Sum_ic = rtb_motohawk_interpolation_1d1_n;
    break;

   default:
    rtb_Sum_ic = rtb_motohawk_interpolation_1d1_n;
    break;
  }

  /* RelationalOperator: '<S19>/Relational Operator2' incorporates:
   *  Gain: '<S19>/Gain2'
   *  Product: '<S19>/Product2'
   */
  rtb_RelationalOperator6_k = (0.01 * rtb_Sum_ic * rtb_Merge_b0d >=
    rtb_DataTypeConversion_i);

  /* Logic: '<S19>/Logical Operator2' incorporates:
   *  Logic: '<S19>/Logical Operator1'
   */
  BaseEngineController_A02_B.s19_Enable = ((rtb_DataTypeConversion_i != 0.0) &&
    (!rtb_RelationalOperator6_k));

  /* If: '<S794>/If' incorporates:
   *  ActionPort: '<S796>/Action Port'
   *  ActionPort: '<S797>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S794>/override_enable'
   *  SubSystem: '<S794>/NewValue'
   *  SubSystem: '<S794>/OldValue'
   */
  if ((Trigger_Ovr_ovr_DataStore())) {
    /* Inport: '<S796>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S794>/new_value'
     */
    BaseEngineController_A02_B.s794_Merge = (Trigger_Ovr_new_DataStore());
  } else {
    /* Inport: '<S797>/In1' */
    BaseEngineController_A02_B.s794_Merge =
      BaseEngineController_A02_B.s19_Enable;
  }

  /* DataTypeConversion: '<S707>/Data Type Conversion' */
  if (rtIsNaN(rtb_Merge_b0d) || rtIsInf(rtb_Merge_b0d)) {
    rtb_DesiredLambda_idx = 0.0;
  } else {
    rtb_DesiredLambda_idx = fmod(floor(rtb_Merge_b0d), 4.294967296E+009);
  }

  BaseEngineController_A02_B.s707_DataTypeConversion = rtb_DesiredLambda_idx <
    0.0 ? -((int32_T)(uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
    rtb_DesiredLambda_idx;

  /* If: '<S795>/If' incorporates:
   *  ActionPort: '<S798>/Action Port'
   *  ActionPort: '<S799>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S795>/override_enable'
   *  SubSystem: '<S795>/NewValue'
   *  SubSystem: '<S795>/OldValue'
   */
  if ((Duration_Ovr_ovr_DataStore())) {
    /* Inport: '<S798>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S795>/new_value'
     */
    BaseEngineController_A02_B.s795_Merge = (Duration_Ovr_new_DataStore());
  } else {
    /* Inport: '<S799>/In1' */
    BaseEngineController_A02_B.s795_Merge =
      BaseEngineController_A02_B.s707_DataTypeConversion;
  }

  /* S-Function (motohawk_sfun_oneshot): '<S707>/motohawk_oneshot' */

  /* S-Function Block: ONESHOT */
  {
    if (BaseEngineController_A02_B.s794_Merge) {
      extern NativeError_S ONESHOT_OneShotOutput_Set(int32_T duration_us,
        boolean_T cancel);
      ONESHOT_OneShotOutput_Set(BaseEngineController_A02_B.s795_Merge, FALSE);
    }
  }

  /* S-Function (motohawk_sfun_dout): '<S708>/motohawk_dout' */
  /* S-Function Block: FuelPumpPin */
  {
    BaseEngineController_A02_B.s708_motohawk_dout = 2;
    if ((init_resource_FuelPumpPin_DataStore()) >= 0) {
      BaseEngineController_A02_B.s708_motohawk_dout =
        (DiscreteOut_FaultStatus_FuelPumpPin_DataStore());
    }
  }

  /* RelationalOperator: '<S800>/RelOp' incorporates:
   *  Constant: '<S800>/Constant'
   */
  rtb_RelationalOperator5_p = (BaseEngineController_A02_B.s708_motohawk_dout ==
    1);

  /* S-Function (motohawk_sfun_fault_def): '<S708>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LSDFault_FuelPump */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    if (rtb_RelationalOperator5_p == 0) {
      SetFaultSuspected(31, 0);
      UpdateFault(31);
    } else if (rtb_RelationalOperator5_p == 1) {
      SetFaultSuspected(31, 1);
      UpdateFault(31);
    }
  }

  /* Switch: '<S130>/Switch' incorporates:
   *  Constant: '<S130>/OFF'
   *  Logic: '<S130>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S130>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S130>/motohawk_data_read1'
   */
  if (DelayedEngineShutdownAction_DataStore() || EngineShutdownAction_DataStore())
  {
    rtb_RelationalOperator5_p = FALSE;
  } else {
    rtb_RelationalOperator5_p = BaseEngineController_A02_B.s120_FUELP;
  }

  /* S-Function (motohawk_sfun_data_read): '<S406>/motohawk_data_read' */
  BaseEngineController_A02_B.s406_EStop = ESTOP_DataStore();

  /* If: '<S536>/If' incorporates:
   *  ActionPort: '<S546>/Action Port'
   *  ActionPort: '<S547>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S536>/override_enable'
   *  SubSystem: '<S536>/NewValue'
   *  SubSystem: '<S536>/OldValue'
   */
  if ((ESTOP_Ovr_ovr_DataStore())) {
    /* Inport: '<S546>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S536>/new_value'
     */
    rtb_Merge_gl = (ESTOP_Ovr_new_DataStore());
  } else {
    /* Inport: '<S547>/In1' */
    rtb_Merge_gl = BaseEngineController_A02_B.s406_EStop;
  }

  /* If: '<S802>/If' incorporates:
   *  ActionPort: '<S803>/Action Port'
   *  ActionPort: '<S804>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S802>/override_enable'
   *  SubSystem: '<S802>/NewValue'
   *  SubSystem: '<S802>/OldValue'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Inport: '<S803>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S802>/new_value'
     */
    rtb_LogicalOperator1_a = (FUELP_new_DataStore());
  } else {
    /* Inport: '<S804>/In1' incorporates:
     *  Logic: '<S5>/Logical Operator4'
     *  Logic: '<S5>/Logical Operator5'
     */
    rtb_LogicalOperator1_a = (rtb_RelationalOperator5_p && (!rtb_Merge_gl));
  }

  /* Logic: '<S801>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S801>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s801_LogicalOperator = rtb_LogicalOperator1_a ^
    (FUELP_Polarity_DataStore());

  /* S-Function (motohawk_sfun_pwm): '<S709>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs
    (&BaseEngineController_A02_B.s709_motohawk_pwm1_o2,
     &BaseEngineController_A02_B.s709_motohawk_pwm1_o1);

  /* RelationalOperator: '<S805>/RelOp' incorporates:
   *  Constant: '<S805>/Constant'
   */
  rtb_RelationalOperator5_p = (BaseEngineController_A02_B.s709_motohawk_pwm1_o2 ==
    1);

  /* S-Function (motohawk_sfun_fault_def): '<S709>/motohawk_fault_def' */

  /* Set Fault Suspected Status: HBridgeFault_ETC */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    if (rtb_RelationalOperator5_p == 0) {
      SetFaultSuspected(25, 0);
      UpdateFault(25);
    } else if (rtb_RelationalOperator5_p == 1) {
      SetFaultSuspected(25, 1);
      UpdateFault(25);
    }
  }

  /* S-Function Block: <S806>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s806_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S397>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s397_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_nn = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S396>/RelOp' incorporates:
   *  Constant: '<S396>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S377>/motohawk_data_read'
   */
  rtb_LogicalOperator1_a = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S377>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_f, NULL);
  }

  /* Switch: '<S397>/Switch' incorporates:
   *  Constant: '<S377>/Constant1'
   *  Constant: '<S397>/Constant'
   *  Logic: '<S377>/Logical Operator'
   *  RelationalOperator: '<S377>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S377>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S397>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S397>/motohawk_delta_time'
   *  Sum: '<S397>/Sum'
   */
  if (rtb_LogicalOperator1_a && (rtb_motohawk_ain_read_f > 150)) {
    BaseEngineController_A02_B.s397_Switch = rtb_motohawk_delta_time_nn +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_A02_B.s397_Switch = 0.0;
  }

  /* Logic: '<S709>/Logical Operator1' incorporates:
   *  Logic: '<S5>/Logical Operator9'
   *  RelationalOperator: '<S5>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S5>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S709>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_p = ((ETC_CutPower_Permitted_DataStore()) &&
    (rtb_Merge_gl || (BaseEngineController_A02_B.s397_Switch >
                      (ETC_CutPower_StallTime_DataStore()))));

  /* Logic: '<S709>/Logical Operator' */
  rtb_LogicalOperator10 = !rtb_RelationalOperator5_p;

  /* Outputs for enable SubSystem: '<S6>/Electronic Throttle Controller' incorporates:
   *  Constant: '<S11>/Constant'
   *  EnablePort: '<S13>/Enable'
   *  RelationalOperator: '<S11>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S6>/motohawk_data_read'
   */
  if (!AirControlSource_DataStore()) {
    if (!((int32_T)
          BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE !=
          0)) {
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
    rtb_RelationalOperator_pj = !ShutDownTasksComplete_DataStore();

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
    BaseEngineController_A02_B.s30_LogicalOperator3 = (rtb_LogicalOperator1_a &&
      rtb_RelationalOperator_pj && rtb_AboveHiTarget);

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

    /* UnitDelay: '<S13>/Unit Delay' */
    rtb_DataTypeConversion_i =
      BaseEngineController_A02_DWork.s13_UnitDelay_DSTATE;

    /* RelationalOperator: '<S13>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration4'
     */
    BaseEngineController_A02_B.s13_RelationalOperator5 =
      (rtb_DataTypeConversion_i < (ETC_ShutdownLoAdaptError_DataStore()));

    /* RelationalOperator: '<S13>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration5'
     */
    BaseEngineController_A02_B.s13_RelationalOperator2 =
      (BaseEngineController_A02_B.s374_Switch2 >
       (ETC_SpringTestHiThresh_DataStore()));

    /* RelationalOperator: '<S13>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration6'
     */
    BaseEngineController_A02_B.s13_RelationalOperator3 =
      (BaseEngineController_A02_B.s374_Switch2 <
       (ETC_SpringTestLoThresh_DataStore()));

    /* Stateflow: '<S13>/ETC Test  Manager' */
    /* Gateway: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    /* During: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    switch (BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02) {
     case BaseEngineController_A02_IN_ForcedShutdown:
      /* During 'ForcedShutdown': '<S25>:6' */
      if (!BaseEngineController_A02_B.s30_LogicalOperator3) {
        /* Transition: '<S25>:19' */
        /* Exit 'ForcedShutdown': '<S25>:6' */
        /* Entry 'SpringTestComplete': '<S25>:5' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestComplete;
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
        /* Exit 'LowAdapt': '<S25>:2' */
        /* Entry 'ForcedShutdown': '<S25>:6' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_ForcedShutdown;
        BaseEngineController_A02_B.s25_DC_Override = 1;
        BaseEngineController_A02_B.s25_TestComplete = TRUE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s30_LogicalOperator3 &&
                 BaseEngineController_A02_B.s13_RelationalOperator5) {
        /* Transition: '<S25>:9' */
        /* Exit 'LowAdapt': '<S25>:2' */
        /* Entry 'SpringTestSetpoint': '<S25>:3' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestSetpoint;
        BaseEngineController_A02_B.s25_DC_Override = 0;
        BaseEngineController_A02_B.s25_TestComplete = FALSE;
        BaseEngineController_A02_B.s25_SetpointMode = 2;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
      } else {
        if (!BaseEngineController_A02_B.s30_LogicalOperator3) {
          /* Transition: '<S25>:12' */
          /* Exit 'LowAdapt': '<S25>:2' */
          /* Entry 'PassThrough': '<S25>:1' */
          BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PassThrough;
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
        /* Exit 'PassThrough': '<S25>:1' */
        /* Entry 'LowAdapt': '<S25>:2' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_LowAdapt;
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
        /* Exit 'SpringTest': '<S25>:4' */
        /* Entry 'ForcedShutdown': '<S25>:6' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_ForcedShutdown;
        BaseEngineController_A02_B.s25_DC_Override = 1;
        BaseEngineController_A02_B.s25_TestComplete = TRUE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s30_LogicalOperator3 &&
                 BaseEngineController_A02_B.s13_RelationalOperator3) {
        /* Transition: '<S25>:11' */
        /* Exit 'SpringTest': '<S25>:4' */
        /* Entry 'SpringTestComplete': '<S25>:5' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestComplete;
        BaseEngineController_A02_B.s25_DC_Override = 1;
        BaseEngineController_A02_B.s25_TestComplete = TRUE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime =
          BaseEngineController_A02_B.s62_Switch -
          BaseEngineController_A02_DWork.s25_TimerOld;
      } else {
        if (!BaseEngineController_A02_B.s30_LogicalOperator3) {
          /* Transition: '<S25>:15' */
          /* Exit 'SpringTest': '<S25>:4' */
          /* Entry 'PassThrough': '<S25>:1' */
          BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PassThrough;
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
        /* Exit 'SpringTestComplete': '<S25>:5' */
        /* Entry 'PassThrough': '<S25>:1' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PassThrough;
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
        /* Exit 'SpringTestSetpoint': '<S25>:3' */
        /* Entry 'PassThrough': '<S25>:1' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PassThrough;
        BaseEngineController_A02_B.s25_DC_Override = 0;
        BaseEngineController_A02_B.s25_TestComplete = FALSE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s30_LogicalOperator3 &&
                 BaseEngineController_A02_B.s13_RelationalOperator2) {
        /* Transition: '<S25>:10' */
        /* Exit 'SpringTestSetpoint': '<S25>:3' */
        /* Entry 'SpringTest': '<S25>:4' */
        BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTest;
        BaseEngineController_A02_B.s25_DC_Override = 1;
        BaseEngineController_A02_B.s25_TestComplete = FALSE;
        BaseEngineController_A02_B.s25_SetpointMode = 0;
        BaseEngineController_A02_B.s25_TestTime = 0.0;
        BaseEngineController_A02_DWork.s25_TimerOld =
          BaseEngineController_A02_B.s62_Switch;
      } else {
        if (BaseEngineController_A02_B.s62_Switch > 5.0) {
          /* Transition: '<S25>:18' */
          /* Exit 'SpringTestSetpoint': '<S25>:3' */
          /* Entry 'ForcedShutdown': '<S25>:6' */
          BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_ForcedShutdown;
          BaseEngineController_A02_B.s25_DC_Override = 1;
          BaseEngineController_A02_B.s25_TestComplete = TRUE;
          BaseEngineController_A02_B.s25_SetpointMode = 0;
          BaseEngineController_A02_B.s25_TestTime = 0.0;
        }
      }
      break;

     default:
      /* Transition: '<S25>:7' */
      /* Entry 'PassThrough': '<S25>:1' */
      BaseEngineController_A02_DWork.s25_is_c9_BaseEngineController_A02 =
        BaseEngineController_A02_IN_PassThrough;
      BaseEngineController_A02_B.s25_DC_Override = 0;
      BaseEngineController_A02_B.s25_TestComplete = FALSE;
      BaseEngineController_A02_B.s25_SetpointMode = 0;
      BaseEngineController_A02_B.s25_TestTime = 0.0;
      break;
    }

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
      rtb_Product4_l = rtb_motohawk_delta_time_jj + ETC_Tune_Timer_DataStore();
    } else {
      rtb_Product4_l = 0.0;
    }

    /* If: '<S56>/If' incorporates:
     *  ActionPort: '<S57>/Action Port'
     *  ActionPort: '<S58>/Action Port'
     *  S-Function (motohawk_sfun_calibration): '<S56>/override_enable'
     *  SubSystem: '<S56>/NewValue'
     *  SubSystem: '<S56>/OldValue'
     */
    if ((ETCReq_ovr_DataStore())) {
      /* Inport: '<S57>/In1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S56>/new_value'
       */
      rtb_Sum_iy = (ETCReq_new_DataStore());
    } else {
      /* Inport: '<S58>/In1' */
      rtb_Sum_iy = BaseEngineController_A02_B.s120_Throttle;
    }

    /* S-Function Block: <S54>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s54_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_kb = ((real_T) delta) * 0.000001;
    }

    /* Outputs for enable SubSystem: '<S29>/PassThrough' incorporates:
     *  Constant: '<S52>/Constant'
     *  EnablePort: '<S51>/Enable'
     *  RelationalOperator: '<S52>/RelOp'
     */
    if (BaseEngineController_A02_B.s25_SetpointMode == 1) {
      if (!((int32_T)BaseEngineController_A02_DWork.s29_PassThrough_MODE != 0))
      {
        BaseEngineController_A02_DWork.s29_PassThrough_MODE = TRUE;
      }

      /* Inport: '<S51>/In1' incorporates:
       *  Constant: '<S29>/Constant2'
       *  S-Function (motohawk_sfun_data_read): '<S29>/motohawk_data_read3'
       *  Sum: '<S29>/Add2'
       */
      BaseEngineController_A02_B.s51_In1 = -5.0 +
        ETC_ShutdownLoAdaptError_DataStore();
    } else {
      if ((int32_T)BaseEngineController_A02_DWork.s29_PassThrough_MODE) {
        /* Disable for Outport: '<S51>/Out1' */
        BaseEngineController_A02_B.s51_In1 = 10.0;
        BaseEngineController_A02_DWork.s29_PassThrough_MODE = FALSE;
      }
    }

    /* end of Outputs for SubSystem: '<S29>/PassThrough' */

    /* UnitDelay: '<S54>/Unit Delay' */
    rtb_DataTypeConversion_i =
      BaseEngineController_A02_DWork.s54_UnitDelay_DSTATE;

    /* Product: '<S54>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S54>/motohawk_delta_time'
     *  Sum: '<S54>/Sum3'
     */
    rtb_Product5_d = 1.0 / rtb_motohawk_delta_time_kb *
      (BaseEngineController_A02_B.s51_In1 -
       BaseEngineController_A02_DWork.s54_UnitDelay_DSTATE);

    /* MinMax: '<S59>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration2'
     */
    rtb_Product5_d = rt_MAXd_snf(rtb_Product5_d, (ETC_LoAdaptRateLimit_DataStore
                                  ()));

    /* Sum: '<S54>/Sum2' incorporates:
     *  Constant: '<S29>/Constant7'
     *  MinMax: '<S59>/MinMax1'
     *  Product: '<S54>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S54>/motohawk_delta_time'
     */
    rtb_UnitDelay2_a5 = rtb_motohawk_delta_time_kb * rt_MINd_snf(rtb_Product5_d,
      100.0) + rtb_DataTypeConversion_i;

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
        BaseEngineController_A02_B.s29_MultiportSwitch = (sin
          (6.2831853071795862E+000 * (ETCTuneFreq_DataStore()) * rtb_Product4_l)
          * (ETCTuneAmp_DataStore()) + (ETCTuneAmp_DataStore())) +
          (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_A02_B.s29_MultiportSwitch = rtb_Sum_iy;
      }
      break;

     case 1:
      BaseEngineController_A02_B.s29_MultiportSwitch = rtb_UnitDelay2_a5;
      break;

     default:
      BaseEngineController_A02_B.s29_MultiportSwitch = 10.0 +
        ETC_SpringTestHiThresh_DataStore();
      break;
    }

    /* Sum: '<S29>/Add' */
    rtb_Sum1_gje = BaseEngineController_A02_B.s29_MultiportSwitch -
      BaseEngineController_A02_B.s374_Switch2;

    /* Logic: '<S23>/Logical Operator' incorporates:
     *  Constant: '<S23>/Constant1'
     *  RelationalOperator: '<S23>/Relational Operator4'
     *  S-Function (motohawk_sfun_data_read): '<S23>/motohawk_data_read1'
     *  Sum: '<S23>/Add1'
     */
    rtb_LogicalOperator_kg = (rtb_LogicalOperator1_a && (rtb_Sum1_gje <= 5.0 +
      ETC_ShutdownLoAdaptError_DataStore()));

    /* S-Function (motohawk_sfun_data_write): '<S23>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: TPSAdaptLoRequest */
    {
      TPSAdaptLoRequest_DataStore() = rtb_LogicalOperator_kg;
    }

    /* Logic: '<S24>/Logical Operator' incorporates:
     *  Abs: '<S24>/Abs'
     *  Constant: '<S32>/Constant'
     *  RelationalOperator: '<S24>/Relational Operator4'
     *  RelationalOperator: '<S32>/RelOp'
     *  S-Function (motohawk_sfun_calibration): '<S24>/motohawk_calibration1'
     */
    rtb_LogicalOperator_db = ((fabs(rtb_Sum1_gje) >
      (ETC_StickingThresh_DataStore())) &&
      (BaseEngineController_A02_B.s25_SetpointMode == 0));

    /* S-Function (motohawk_sfun_fault_def): '<S24>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ETC_Sticking */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(16, rtb_LogicalOperator_db);
      UpdateFault(16);
    }

    /* Outputs for trigger SubSystem: '<S13>/Reset TasksComplete To True' incorporates:
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

    /* end of Outputs for SubSystem: '<S13>/Reset TasksComplete To True' */

    /* S-Function (motohawk_sfun_data_write): '<S13>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SpringTestTime */
    {
      SpringTestTime_DataStore() = BaseEngineController_A02_B.s25_TestTime;
    }

    /* RelationalOperator: '<S13>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration3'
     */
    rtb_RelationalOperator1_g = ((ETC_SpringTestTimerThresh_DataStore()) <
      BaseEngineController_A02_B.s25_TestTime);

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
    BaseEngineController_A02_B.s26_LogicalOperator = (rtb_LogicalOperator1_a &&
      (rtb_motohawk_ain_read_d > 150));

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
    rtb_Sum_iy = BaseEngineController_A02_DWork.s45_UnitDelay_DSTATE;

    /* UnitDelay: '<S41>/Unit Delay' */
    rtb_DataTypeConversion_i =
      BaseEngineController_A02_DWork.s41_UnitDelay_DSTATE;

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
    rtb_Product5_d /= rt_MAXd_snf(rtb_Product5_d, (ETCDamperTPSFilt_DataStore()));

    /* Sum: '<S43>/Sum1' incorporates:
     *  Constant: '<S43>/Constant'
     *  Product: '<S43>/Product'
     *  Product: '<S43>/Product1'
     *  Sum: '<S43>/Sum'
     *  UnitDelay: '<S43>/Unit Delay'
     */
    min_0 = (1.0 - rtb_Product5_d) *
      BaseEngineController_A02_DWork.s43_UnitDelay_DSTATE +
      BaseEngineController_A02_B.s374_Switch2 * rtb_Product5_d;

    /* S-Function Block: <S41>/motohawk_delta_time */
    rtb_motohawk_delta_time_ce = 0.005;

    /* Product: '<S41>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S41>/motohawk_delta_time'
     *  Sum: '<S41>/Sum2'
     */
    BaseEngineController_A02_B.s41_Product = (min_0 - rtb_DataTypeConversion_i) /
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
        BaseEngineController_A02_ConstP.pooled692[rowidx];
      rtb_CombinatorialLogic_i[1] =
        BaseEngineController_A02_ConstP.pooled692[rowidx + 4];
    }

    /* Switch: '<S44>/Switch1' incorporates:
     *  UnitDelay: '<S44>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_i[1]) {
      rtb_RelationalOperator_pj = rtb_CombinatorialLogic_i[0];
    } else {
      rtb_RelationalOperator_pj =
        BaseEngineController_A02_DWork.s44_UnitDelay_DSTATE;
    }

    /* Switch: '<S40>/Switch2' incorporates:
     *  Logic: '<S40>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration5'
     */
    if (!rtb_RelationalOperator_pj) {
      BaseEngineController_A02_B.s40_Switch2 = (ETCDamperSwitchThresh_DataStore());
    } else {
      BaseEngineController_A02_B.s40_Switch2 =
        BaseEngineController_A02_B.s41_Product;
    }

    /* RelationalOperator: '<S34>/Relational Operator' */
    BaseEngineController_A02_B.s34_RelationalOperator =
      (BaseEngineController_A02_B.s41_Product >
       BaseEngineController_A02_B.s40_Switch2);

    /* Switch: '<S37>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration8'
     */
    if (BaseEngineController_A02_B.s34_RelationalOperator) {
      rtb_Product5_d = (ETCDampGainUp_DataStore());
    } else {
      rtb_Product5_d = (ETCDampGainDown_DataStore());
    }

    /* Product: '<S37>/Product3' */
    rtb_UnitDelay4_bi = rtb_Product5_d * BaseEngineController_A02_B.s374_Switch2;

    /* S-Function Block: <S45>/motohawk_delta_time */
    rtb_motohawk_delta_time_oa = 0.005;

    /* Product: '<S45>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S45>/motohawk_delta_time'
     *  Sum: '<S45>/Sum2'
     */
    BaseEngineController_A02_B.s45_Product = (rtb_UnitDelay4_bi - rtb_Sum_iy) /
      rtb_motohawk_delta_time_oa;

    /* UnitDelay: '<S46>/Unit Delay' */
    rtb_DataTypeConversion_i =
      BaseEngineController_A02_DWork.s46_UnitDelay_DSTATE;

    /* Sum: '<S37>/Sum2' */
    BaseEngineController_A02_B.s37_Sum2 =
      BaseEngineController_A02_B.s29_MultiportSwitch -
      BaseEngineController_A02_B.s374_Switch2;

    /* Product: '<S37>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration6'
     */
    rtb_Product5_d = BaseEngineController_A02_B.s37_Sum2 *
      (ETCErrorGain_DataStore());

    /* Product: '<S37>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration1'
     */
    rtb_Sum_iy = (ETCDGain_DataStore()) * rtb_Product5_d;

    /* S-Function Block: <S46>/motohawk_delta_time */
    rtb_motohawk_delta_time_oaj = 0.005;

    /* Product: '<S46>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     *  Sum: '<S46>/Sum2'
     */
    BaseEngineController_A02_B.s46_Product = (rtb_Sum_iy -
      rtb_DataTypeConversion_i) / rtb_motohawk_delta_time_oaj;

    /* Sum: '<S27>/Add' */
    rtb_Add_k = BaseEngineController_A02_B.s29_MultiportSwitch -
      BaseEngineController_A02_B.s374_Switch2;

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

    /* Sum: '<S27>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S27>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S27>/motohawk_prelookup2'
     *  Sum: '<S37>/Sum'
     */
    rtb_DataTypeConversion_i = (((BaseEngineController_A02_B.s46_Product -
      BaseEngineController_A02_B.s45_Product) +
      BaseEngineController_A02_B.s37_Product2) +
      BaseEngineController_A02_B.s47_Switch1) + rtb_motohawk_interpolation_1d_e;

    /* MinMax: '<S50>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration'
     */
    rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i,
      (ETCLwrLim_DataStore()));

    /* MinMax: '<S50>/MinMax1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s50_MinMax1 = rt_MINd_snf
      (rtb_DataTypeConversion_i, (ETCUprLim_DataStore()));

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
    rtb_DataTypeConversion_i = rtb_motohawk_interpolation_1d_c *
      (ETCIGain_DataStore());

    /* Product: '<S37>/Product1' */
    rtb_DataTypeConversion_i *= rtb_Product5_d;

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
    rtb_DataTypeConversion_i = rtb_DataTypeConversion_i *
      rtb_motohawk_delta_time_pc + BaseEngineController_A02_B.s47_Switch1;

    /* MinMax: '<S49>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration3'
     */
    rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i,
      (ETCIMin_DataStore()));

    /* MinMax: '<S49>/MinMax1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration4'
     */
    rtb_DataTypeConversion_i = rt_MINd_snf(rtb_DataTypeConversion_i,
      (ETCIMax_DataStore()));

    /* Saturate: '<S55>/Saturation' */
    rtb_Saturation_og = rt_SATURATE(rtb_Product4_l, 0.0, 16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S55>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETC_Tune_Timer */
    {
      ETC_Tune_Timer_DataStore() = rtb_Saturation_og;
    }

    /* Saturate: '<S62>/Saturation' */
    rtb_Saturation_na = rt_SATURATE(BaseEngineController_A02_B.s62_Switch, 0.0,
      16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S62>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETCShutDownTimer */
    {
      ETCShutDownTimer_DataStore() = rtb_Saturation_na;
    }

    /* S-Function (motohawk_sfun_data_read): '<S30>/motohawk_data_read1' */
    rtb_motohawk_data_read1_ir = MPRD_DataStore();

    /* Outputs for trigger SubSystem: '<S30>/Reset TasksComplete To False' incorporates:
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

    /* end of Outputs for SubSystem: '<S30>/Reset TasksComplete To False' */

    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/Constant2'
     */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s13_Switch = 0.0;
    } else {
      BaseEngineController_A02_B.s13_Switch =
        BaseEngineController_A02_B.s50_MinMax1;
    }

    /* Update for UnitDelay: '<S13>/Unit Delay' */
    BaseEngineController_A02_DWork.s13_UnitDelay_DSTATE = rtb_Sum1_gje;

    /* Update for UnitDelay: '<S54>/Unit Delay' */
    BaseEngineController_A02_DWork.s54_UnitDelay_DSTATE = rtb_UnitDelay2_a5;

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    BaseEngineController_A02_DWork.s45_UnitDelay_DSTATE = rtb_UnitDelay4_bi;

    /* Update for UnitDelay: '<S41>/Unit Delay' */
    BaseEngineController_A02_DWork.s41_UnitDelay_DSTATE = min_0;

    /* Update for UnitDelay: '<S43>/Unit Delay' */
    BaseEngineController_A02_DWork.s43_UnitDelay_DSTATE = min_0;

    /* Update for UnitDelay: '<S44>/Unit Delay' */
    BaseEngineController_A02_DWork.s44_UnitDelay_DSTATE =
      rtb_RelationalOperator_pj;

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    BaseEngineController_A02_DWork.s46_UnitDelay_DSTATE = rtb_Sum_iy;

    /* Update for UnitDelay: '<S47>/Unit Delay' */
    BaseEngineController_A02_DWork.s47_UnitDelay_DSTATE =
      rtb_DataTypeConversion_i;
  } else {
    if ((int32_T)
        BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE) {
      /* Disable for enable SubSystem: '<S29>/PassThrough' */

      /* Disable for Outport: '<S51>/Out1' */
      BaseEngineController_A02_B.s51_In1 = 10.0;
      BaseEngineController_A02_DWork.s29_PassThrough_MODE = FALSE;

      /* end of Disable for SubSystem: '<S29>/PassThrough' */
      BaseEngineController_A02_DWork.s6_ElectronicThrottleController_MODE =
        FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S6>/Electronic Throttle Controller' */

  /* If: '<S807>/If' incorporates:
   *  ActionPort: '<S808>/Action Port'
   *  ActionPort: '<S809>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S807>/override_enable'
   *  SubSystem: '<S807>/NewValue'
   *  SubSystem: '<S807>/OldValue'
   */
  if ((ETC_ovr_DataStore())) {
    /* Inport: '<S808>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S807>/new_value'
     */
    rtb_DataTypeConversion_i = (ETC_new_DataStore());
  } else {
    /* Inport: '<S809>/In1' */
    rtb_DataTypeConversion_i = BaseEngineController_A02_B.s13_Switch;
  }

  /* Switch: '<S709>/Switch' incorporates:
   *  Constant: '<S709>/Constant2'
   *  Product: '<S709>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S709>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S709>/motohawk_interpolation_1d'
   *  Sum: '<S709>/Sum'
   */
  if (rtb_RelationalOperator5_p) {
    rtb_DataTypeConversion_i = 0.0;
  } else {
    /* S-Function Block: <S709>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_l = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s362_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_l;
    }

    rtb_DataTypeConversion_i = rtb_DataTypeConversion_i *
      rtb_motohawk_interpolation_1d_l + (ETC_Offset_DataStore());
  }

  /* Saturate: '<S709>/Saturation' */
  BaseEngineController_A02_B.s709_ETC = rt_SATURATE(rtb_DataTypeConversion_i,
    -100.0, 100.0);

  /* Abs: '<S709>/Abs' */
  rtb_DataTypeConversion_i = fabs(BaseEngineController_A02_B.s709_ETC);

  /* RelationalOperator: '<S709>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S709>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_a = (rtb_DataTypeConversion_i > (ETC_OC_MIN_DataStore()));

  /* Abs: '<S709>/Abs1' */
  rtb_DataTypeConversion2_l = (int16_T)rt_ABS
    (BaseEngineController_A02_B.s709_motohawk_pwm1_o1);

  /* RelationalOperator: '<S709>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S709>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_p = ((real_T)rtb_DataTypeConversion2_l <
    (ETC_I_MIN_DataStore()));

  /* Switch: '<S806>/Switch' incorporates:
   *  Constant: '<S806>/Constant'
   *  Logic: '<S709>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S806>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S806>/motohawk_delta_time'
   *  Sum: '<S806>/Sum'
   */
  if (rtb_LogicalOperator10 && rtb_LogicalOperator1_a &&
      rtb_RelationalOperator5_p) {
    rtb_DataTypeConversion_i = rtb_motohawk_delta_time_l +
      ETCOpenFaultTimer_DataStore();
  } else {
    rtb_DataTypeConversion_i = 0.0;
  }

  /* RelationalOperator: '<S709>/Relational Operator5' incorporates:
   *  Constant: '<S709>/Constant'
   */
  rtb_RelationalOperator5 = (rtb_DataTypeConversion_i > 5.0);

  /* S-Function (motohawk_sfun_fault_def): '<S709>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator5);
    UpdateFault(15);
  }

  /* Gain: '<S709>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S709>/motohawk_calibration4'
   */
  rtb_Sum2_as = 100.0 * (ETC_Frequency_DataStore());

  /* DataTypeConversion: '<S709>/Data Type Conversion3' */
  if (rtb_Sum2_as < 4.294967296E+009) {
    if (rtb_Sum2_as >= 0.0) {
      rtb_DataTypeConversion3_n = (uint32_T)rtb_Sum2_as;
    } else {
      rtb_DataTypeConversion3_n = 0U;
    }
  } else {
    rtb_DataTypeConversion3_n = MAX_uint32_T;
  }

  /* DataTypeConversion: '<S709>/Data Type Conversion4' incorporates:
   *  Gain: '<S709>/Convert to integer 14-bit PWM resolution'
   */
  rtb_DesiredLambda_idx = 40.95 * BaseEngineController_A02_B.s709_ETC;
  if (rtb_DesiredLambda_idx < 32768.0) {
    if (rtb_DesiredLambda_idx >= -32768.0) {
      rtb_DataTypeConversion4_kh = (int16_T)rtb_DesiredLambda_idx;
    } else {
      rtb_DataTypeConversion4_kh = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_kh = MAX_int16_T;
  }

  /* Saturate: '<S806>/Saturation' */
  rtb_Saturation_h = rt_SATURATE(rtb_DataTypeConversion_i, 0.0, 16000.0);

  /* S-Function (motohawk_sfun_data_write): '<S806>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_h;
  }

  /* Outputs for enable SubSystem: '<S15>/PassThrough5' incorporates:
   *  Constant: '<S15>/Constant2'
   *  Constant: '<S15>/Constant3'
   *  EnablePort: '<S98>/Enable'
   *  Logic: '<S15>/Logical Operator1'
   *  RelationalOperator: '<S15>/Relational Operator2'
   *  RelationalOperator: '<S15>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S15>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 1) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!((int32_T)BaseEngineController_A02_DWork.s15_PassThrough5_MODE != 0)) {
      BaseEngineController_A02_DWork.s15_PassThrough5_MODE = TRUE;
    }

    /* DataTypeConversion: '<S98>/Data Type Conversion1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s98_DataTypeConversion1[i] =
        (BaseEngineController_A02_B.s109_CutArray[i] != 0);
    }
  } else {
    if ((int32_T)BaseEngineController_A02_DWork.s15_PassThrough5_MODE) {
      /* Disable for Outport: '<S98>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s98_DataTypeConversion1[i] = FALSE;
      }

      BaseEngineController_A02_DWork.s15_PassThrough5_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S15>/PassThrough5' */

  /* Logic: '<S15>/Logical Operator3' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_j[i] =
      !BaseEngineController_A02_B.s98_DataTypeConversion1[i];
  }

  /* Outputs for atomic SubSystem: '<S710>/Injector Enable Manager' */
  /* S-Function Block: <S819>/motohawk_delta_time */
  rtb_motohawk_delta_time_jd = 0.005;

  /* Switch: '<S819>/Switch' incorporates:
   *  Constant: '<S819>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S819>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S819>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S811>/motohawk_fault_action'
   *  Sum: '<S819>/Sum'
   */
  if (GetFaultActionStatus(1)) {
    rtb_DataTypeConversion_i = rtb_motohawk_delta_time_jd +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_DataTypeConversion_i = 0.0;
  }

  /* RelationalOperator: '<S811>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration1'
   */
  rtb_LogicalOperator_bt = (rtb_DataTypeConversion_i >
    (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S811>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_bt;
  }

  /* RelationalOperator: '<S811>/Relational Operator1' incorporates:
   *  Gain: '<S811>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_m3 = (rtb_DataTypeConversion_i > 0.5 *
    (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S811>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_m3;
  }

  /* RelationalOperator: '<S811>/Relational Operator2' incorporates:
   *  Constant: '<S811>/Constant'
   */
  rtb_RelationalOperator2_jp = (rtb_DataTypeConversion_i > 0.0);

  /* S-Function (motohawk_sfun_data_write): '<S811>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_jp;
  }

  /* Logic: '<S811>/Logical Operator' */
  rtb_LogicalOperator_bt = !rtb_LogicalOperator_bt;

  /* Logic: '<S811>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S811>/motohawk_data_read'
   */
  rtb_LogicalOperator1_a = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S811>/motohawk_data_read1' */
  rtb_motohawk_data_read1_h3 = ECUP_Enabled_DataStore();

  /* Logic: '<S811>/Logical Operator4' incorporates:
   *  Constant: '<S818>/Constant'
   *  RelationalOperator: '<S818>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S811>/motohawk_data_read2'
   */
  rtb_RelationalOperator_pj = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S811>/Logical Operator1' incorporates:
   *  Constant: '<S811>/Constant1'
   *  S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_iht[0] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 &&
    rtb_RelationalOperator_pj && (Injector1Enable_DataStore()));
  rtb_LogicalOperator1_iht[1] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 &&
    rtb_RelationalOperator_pj && (Injector2Enable_DataStore()));
  rtb_LogicalOperator1_iht[2] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 &&
    rtb_RelationalOperator_pj && (Injector3Enable_DataStore()));
  rtb_LogicalOperator1_iht[3] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 &&
    rtb_RelationalOperator_pj && (Injector4Enable_DataStore()));
  rtb_LogicalOperator1_iht[4] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 &&
    rtb_RelationalOperator_pj && (Injector5Enable_DataStore()));
  rtb_LogicalOperator1_iht[5] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 &&
    rtb_RelationalOperator_pj && (Injector6Enable_DataStore()));
  rtb_LogicalOperator1_iht[6] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 &&
    rtb_RelationalOperator_pj && (Injector7Enable_DataStore()));
  rtb_LogicalOperator1_iht[7] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 &&
    rtb_RelationalOperator_pj && (Injector8Enable_DataStore()));

  /* Saturate: '<S819>/Saturation' */
  rtb_Saturation_km = rt_SATURATE(rtb_DataTypeConversion_i, 0.0, 16000.0);

  /* S-Function (motohawk_sfun_data_write): '<S819>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_km;
  }

  /* end of Outputs for SubSystem: '<S710>/Injector Enable Manager' */

  /* If: '<S816>/If' incorporates:
   *  ActionPort: '<S828>/Action Port'
   *  ActionPort: '<S829>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S816>/override_enable'
   *  SubSystem: '<S816>/NewValue'
   *  SubSystem: '<S816>/OldValue'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Inport: '<S828>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S816>/new_value'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s816_Merge[i] = (InjEnable_new_DataStore())[i];
    }
  } else {
    /* Inport: '<S829>/In1' incorporates:
     *  Logic: '<S710>/Logical Operator'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s816_Merge[i] = (rtb_LogicalOperator3_j[i] &&
        rtb_LogicalOperator1_iht[i]);
    }
  }

  /* If: '<S814>/If' incorporates:
   *  ActionPort: '<S824>/Action Port'
   *  ActionPort: '<S825>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S814>/override_enable'
   *  SubSystem: '<S814>/NewValue'
   *  SubSystem: '<S814>/OldValue'
   */
  if ((SOI_ovr_DataStore())) {
    /* Inport: '<S824>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S814>/new_value'
     */
    rtb_DataTypeConversion_i = (SOI_new_DataStore());
  } else {
    /* Inport: '<S825>/In1' */
    rtb_DataTypeConversion_i = BaseEngineController_A02_B.s120_SOI;
  }

  /* DataTypeConversion: '<S710>/Data Type Conversion2' incorporates:
   *  Gain: '<S710>/Gain2'
   */
  rtb_DesiredLambda_idx = 16.0 * rtb_DataTypeConversion_i;
  if (rtb_DesiredLambda_idx < 32768.0) {
    if (rtb_DesiredLambda_idx >= -32768.0) {
      rtb_DataTypeConversion2_l = (int16_T)rtb_DesiredLambda_idx;
    } else {
      rtb_DataTypeConversion2_l = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_l = MAX_int16_T;
  }

  /* UnitDelay: '<S71>/Unit Delay' */
  memcpy((void *)&rtb_UnitDelay_ph[0], (void *)
         (&BaseEngineController_A02_DWork.s71_UnitDelay_DSTATE[0]), sizeof
         (real_T) << 3U);

  /* UnitDelay: '<S73>/Unit Delay' */
  rtb_UnitDelay_ak = BaseEngineController_A02_DWork.s73_UnitDelay_DSTATE;

  /* If: '<S73>/If' incorporates:
   *  ActionPort: '<S90>/Action Port'
   *  ActionPort: '<S91>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S73>/override_enable'
   *  SubSystem: '<S73>/NewValue'
   *  SubSystem: '<S73>/OldValue'
   */
  if ((Fuel_Cyl8_ovr_DataStore())) {
  } else {
    /* Inport: '<S91>/In1' */
    rtb_UnitDelay_ak = BaseEngineController_A02_B.s120_FPC[7];
  }

  /* Sum: '<S73>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S73>/offset'
   */
  rtb_DataTypeConversion_i = rtb_UnitDelay_ak + (Fuel_Cyl8_offset_DataStore());

  /* UnitDelay: '<S72>/Unit Delay' */
  rtb_UnitDelay_gy = BaseEngineController_A02_DWork.s72_UnitDelay_DSTATE;

  /* If: '<S72>/If' incorporates:
   *  ActionPort: '<S88>/Action Port'
   *  ActionPort: '<S89>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S72>/override_enable'
   *  SubSystem: '<S72>/NewValue'
   *  SubSystem: '<S72>/OldValue'
   */
  if ((Fuel_Cyl7_ovr_DataStore())) {
  } else {
    /* Inport: '<S89>/In1' */
    rtb_UnitDelay_gy = BaseEngineController_A02_B.s120_FPC[6];
  }

  /* Sum: '<S72>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S72>/offset'
   */
  rtb_Sum_iy = rtb_UnitDelay_gy + (Fuel_Cyl7_offset_DataStore());

  /* UnitDelay: '<S70>/Unit Delay' */
  rtb_UnitDelay_de = BaseEngineController_A02_DWork.s70_UnitDelay_DSTATE;

  /* If: '<S70>/If' incorporates:
   *  ActionPort: '<S84>/Action Port'
   *  ActionPort: '<S85>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S70>/override_enable'
   *  SubSystem: '<S70>/NewValue'
   *  SubSystem: '<S70>/OldValue'
   */
  if ((Fuel_Cyl6_ovr_DataStore())) {
  } else {
    /* Inport: '<S85>/In1' */
    rtb_UnitDelay_de = BaseEngineController_A02_B.s120_FPC[5];
  }

  /* Sum: '<S70>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S70>/offset'
   */
  rtb_UnitDelay4_bi = rtb_UnitDelay_de + (Fuel_Cyl6_offset_DataStore());

  /* UnitDelay: '<S69>/Unit Delay' */
  rtb_UnitDelay_i = BaseEngineController_A02_DWork.s69_UnitDelay_DSTATE;

  /* If: '<S69>/If' incorporates:
   *  ActionPort: '<S82>/Action Port'
   *  ActionPort: '<S83>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S69>/override_enable'
   *  SubSystem: '<S69>/NewValue'
   *  SubSystem: '<S69>/OldValue'
   */
  if ((Fuel_Cyl5_ovr_DataStore())) {
  } else {
    /* Inport: '<S83>/In1' */
    rtb_UnitDelay_i = BaseEngineController_A02_B.s120_FPC[4];
  }

  /* Sum: '<S69>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S69>/offset'
   */
  rtb_Sum1_gje = rtb_UnitDelay_i + (Fuel_Cyl5_offset_DataStore());

  /* UnitDelay: '<S68>/Unit Delay' */
  rtb_UnitDelay_bv = BaseEngineController_A02_DWork.s68_UnitDelay_DSTATE;

  /* If: '<S68>/If' incorporates:
   *  ActionPort: '<S80>/Action Port'
   *  ActionPort: '<S81>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S68>/override_enable'
   *  SubSystem: '<S68>/NewValue'
   *  SubSystem: '<S68>/OldValue'
   */
  if ((Fuel_Cyl4_ovr_DataStore())) {
  } else {
    /* Inport: '<S81>/In1' */
    rtb_UnitDelay_bv = BaseEngineController_A02_B.s120_FPC[3];
  }

  /* Sum: '<S68>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S68>/offset'
   */
  min_0 = rtb_UnitDelay_bv + (Fuel_Cyl4_offset_DataStore());

  /* UnitDelay: '<S67>/Unit Delay' */
  rtb_UnitDelay_dv = BaseEngineController_A02_DWork.s67_UnitDelay_DSTATE;

  /* If: '<S67>/If' incorporates:
   *  ActionPort: '<S78>/Action Port'
   *  ActionPort: '<S79>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S67>/override_enable'
   *  SubSystem: '<S67>/NewValue'
   *  SubSystem: '<S67>/OldValue'
   */
  if ((Fuel_Cyl3_ovr_DataStore())) {
  } else {
    /* Inport: '<S79>/In1' */
    rtb_UnitDelay_dv = BaseEngineController_A02_B.s120_FPC[2];
  }

  /* Sum: '<S67>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S67>/offset'
   */
  rtb_UnitDelay2_a5 = rtb_UnitDelay_dv + (Fuel_Cyl3_offset_DataStore());

  /* UnitDelay: '<S66>/Unit Delay' */
  rtb_UnitDelay_e4 = BaseEngineController_A02_DWork.s66_UnitDelay_DSTATE;

  /* If: '<S66>/If' incorporates:
   *  ActionPort: '<S76>/Action Port'
   *  ActionPort: '<S77>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S66>/override_enable'
   *  SubSystem: '<S66>/NewValue'
   *  SubSystem: '<S66>/OldValue'
   */
  if ((Fuel_Cyl2_ovr_DataStore())) {
  } else {
    /* Inport: '<S77>/In1' */
    rtb_UnitDelay_e4 = BaseEngineController_A02_B.s120_FPC[1];
  }

  /* Sum: '<S66>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S66>/offset'
   */
  rtb_Product4_l = rtb_UnitDelay_e4 + (Fuel_Cyl2_offset_DataStore());

  /* UnitDelay: '<S65>/Unit Delay' */
  rtb_UnitDelay_pa = BaseEngineController_A02_DWork.s65_UnitDelay_DSTATE;

  /* If: '<S65>/If' incorporates:
   *  ActionPort: '<S74>/Action Port'
   *  ActionPort: '<S75>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S65>/override_enable'
   *  SubSystem: '<S65>/NewValue'
   *  SubSystem: '<S65>/OldValue'
   */
  if ((Fuel_Cyl1_ovr_DataStore())) {
  } else {
    /* Inport: '<S75>/In1' */
    rtb_UnitDelay_pa = BaseEngineController_A02_B.s120_FPC[0];
  }

  /* If: '<S71>/If' incorporates:
   *  ActionPort: '<S86>/Action Port'
   *  ActionPort: '<S87>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S71>/override_enable'
   *  SubSystem: '<S71>/NewValue'
   *  SubSystem: '<S71>/OldValue'
   */
  if ((Fuel_Global_ovr_DataStore())) {
  } else {
    /* Inport: '<S87>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S65>/offset'
     *  Sum: '<S65>/Sum'
     */
    rtb_UnitDelay_ph[0] = rtb_UnitDelay_pa + (Fuel_Cyl1_offset_DataStore());
    rtb_UnitDelay_ph[1] = rtb_Product4_l;
    rtb_UnitDelay_ph[2] = rtb_UnitDelay2_a5;
    rtb_UnitDelay_ph[3] = min_0;
    rtb_UnitDelay_ph[4] = rtb_Sum1_gje;
    rtb_UnitDelay_ph[5] = rtb_UnitDelay4_bi;
    rtb_UnitDelay_ph[6] = rtb_Sum_iy;
    rtb_UnitDelay_ph[7] = rtb_DataTypeConversion_i;
  }

  /* Sum: '<S71>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S71>/offset'
   */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s71_Sum[i] = rtb_UnitDelay_ph[i] +
      (Fuel_Global_offset_DataStore());
  }

  /* Product: '<S14>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/Injector Gain [ms//mg]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_e[i] = BaseEngineController_A02_B.s71_Sum[i] *
      (InjGain_DataStore());
  }

  /* Sum: '<S14>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/Injector Offset [ms]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_e[i] += (InjOffset_DataStore());
  }

  /* Fcn: '<S63>/const ref to atm' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/Regulated Gauge Fuel Pressure [kPa]'
   */
  BaseEngineController_A02_B.s63_constreftoatm = ((GaugeFuelPress_DataStore()) +
    BaseEngineController_A02_B.s327_Sum) - BaseEngineController_A02_B.s594_Merge;

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

  /* Product: '<S14>/Divide' incorporates:
   *  Constant: '<S14>/Constant'
   *  Saturate: '<S14>/Saturation'
   */
  rtb_DataTypeConversion_i = 1.2E+005 / rt_MAXd_snf
    (BaseEngineController_A02_B.s556_Sum1, 0.01);

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
      (BaseEngineController_A02_B.s362_motohawk_prelookup, (real_T *)
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

  /* Sum: '<S14>/Sum1' */
  BaseEngineController_A02_B.s14_Sum1 = rtb_DataTypeConversion_i -
    BaseEngineController_A02_B.s14_Sum2;

  /* MinMax: '<S14>/MinMax' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s14_MinMax[i] = rt_MINd_snf(rtb_Product2_e[i],
      BaseEngineController_A02_B.s14_Sum1);
  }

  /* If: '<S815>/If' incorporates:
   *  ActionPort: '<S826>/Action Port'
   *  ActionPort: '<S827>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S815>/override_enable'
   *  SubSystem: '<S815>/NewValue'
   *  SubSystem: '<S815>/OldValue'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Inport: '<S826>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S815>/new_value'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product2_e[i] = (Mech_PW_new_DataStore())[i];
    }
  } else {
    /* Inport: '<S827>/In1' */
    memcpy((void *)&rtb_Product2_e[0], (void *)
           (&BaseEngineController_A02_B.s14_MinMax[0]), sizeof(real_T) << 3U);
  }

  /* DataTypeConversion: '<S710>/Data Type Conversion3' incorporates:
   *  Gain: '<S710>/Gain3'
   */
  for (i = 0; i < 8; i++) {
    rtb_DesiredLambda_idx = 1000.0 * rtb_Product2_e[i];
    if (rtb_DesiredLambda_idx < 4.294967296E+009) {
      if (rtb_DesiredLambda_idx >= 0.0) {
        qY = (uint32_T)rtb_DesiredLambda_idx;
      } else {
        qY = 0U;
      }
    } else {
      qY = MAX_uint32_T;
    }

    rtb_InjectorSequence_o2[i] = qY;
  }

  /* DataTypeConversion: '<S710>/Data Type Conversion6' incorporates:
   *  Gain: '<S710>/Gain5'
   *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration9'
   */
  rtb_DesiredLambda_idx = 1000.0 * (InjectorMaxDuration_DataStore());
  if (rtb_DesiredLambda_idx < 4.294967296E+009) {
    if (rtb_DesiredLambda_idx >= 0.0) {
      rtb_DataTypeConversion6_j = (uint32_T)rtb_DesiredLambda_idx;
    } else {
      rtb_DataTypeConversion6_j = 0U;
    }
  } else {
    rtb_DataTypeConversion6_j = MAX_uint32_T;
  }

  /* If: '<S812>/If' incorporates:
   *  ActionPort: '<S820>/Action Port'
   *  ActionPort: '<S821>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S812>/override_enable'
   *  SubSystem: '<S812>/NewValue'
   *  SubSystem: '<S812>/OldValue'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Inport: '<S820>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S812>/new_value'
     */
    rtb_DataTypeConversion_i = (Elec_PW_new_DataStore());
  } else {
    /* Inport: '<S821>/In1' */
    rtb_DataTypeConversion_i = BaseEngineController_A02_B.s14_Sum2;
  }

  /* DataTypeConversion: '<S710>/Data Type Conversion1' incorporates:
   *  Gain: '<S710>/Gain1'
   */
  rtb_DesiredLambda_idx = 1000.0 * rtb_DataTypeConversion_i;
  if (rtb_DesiredLambda_idx < 4.294967296E+009) {
    if (rtb_DesiredLambda_idx >= 0.0) {
      rtb_Sum_l0 = (uint32_T)rtb_DesiredLambda_idx;
    } else {
      rtb_Sum_l0 = 0U;
    }
  } else {
    rtb_Sum_l0 = MAX_uint32_T;
  }

  /* If: '<S813>/If' incorporates:
   *  ActionPort: '<S822>/Action Port'
   *  ActionPort: '<S823>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S813>/override_enable'
   *  SubSystem: '<S813>/NewValue'
   *  SubSystem: '<S813>/OldValue'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Inport: '<S822>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S813>/new_value'
     */
    rtb_DataTypeConversion_i = (MakeUp_EOI_new_DataStore());
  } else {
    /* Inport: '<S823>/In1' */
    rtb_DataTypeConversion_i = BaseEngineController_A02_B.s120_MakeUpEOI;
  }

  /* DataTypeConversion: '<S710>/Data Type Conversion7' incorporates:
   *  Gain: '<S710>/Gain6'
   */
  rtb_DesiredLambda_idx = 16.0 * rtb_DataTypeConversion_i;
  if (rtb_DesiredLambda_idx < 32768.0) {
    if (rtb_DesiredLambda_idx >= -32768.0) {
      rtb_DataTypeConversion7_l = (int16_T)rtb_DesiredLambda_idx;
    } else {
      rtb_DataTypeConversion7_l = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7_l = MAX_int16_T;
  }

  /* DataTypeConversion: '<S710>/Data Type Conversion8' incorporates:
   *  Gain: '<S710>/Gain7'
   *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration6'
   */
  rtb_DesiredLambda_idx = 1000.0 * (MinMakeUpPW_DataStore());
  if (rtb_DesiredLambda_idx < 4.294967296E+009) {
    if (rtb_DesiredLambda_idx >= 0.0) {
      rtb_UnitDelay_aka = (uint32_T)rtb_DesiredLambda_idx;
    } else {
      rtb_UnitDelay_aka = 0U;
    }
  } else {
    rtb_UnitDelay_aka = MAX_uint32_T;
  }

  /* S-Function Block: <S710>/Injector Sequence */
  {
    extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_41[8];
    uint32_T makeup_duration;
    int16_T makeup_angle;
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_41[8];
    extern int32_T InjectorSeqDiagLastPin_41;
    extern uint8_T motohawk_encoder_status;
    uint32_T elec_duration;
    S_SeqOutPulseTiming TimingObj;
    E_SeqOutCond seq_enable;
    NativeError_S sErrorResult;
    int32_T i;
    int32_T index;
    int32_T j;
    boolean_T enable;
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

    for (j=0; j < (EncoderNumCylinders_DataStore()); j++) {
      enable = ((BaseEngineController_A02_B.s816_Merge)[index] &&
                (motohawk_encoder_status >= (uint8_T) ENC_SYNC_CAM_UNKNOWN) &&
                (GetEncoderResourceInstantRPM() > 10));
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_A02_ConstB.s710_DataTypeConversion5) !=
            (BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_A02_ConstB.s710_DataTypeConversion5);
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
          if (TransientInjectorSeqInfo_41[index].primaryComplete) {
            if (elec_duration > TransientInjectorSeqInfo_41[index].
                primaryDuration) {
              makeup_duration = elec_duration -
                TransientInjectorSeqInfo_41[index].primaryDuration;
              if (makeup_duration >= (rtb_UnitDelay_aka)) {
                makeup_duration += (rtb_Sum_l0);
                if (rtb_DataTypeConversion6_j > 0) {
                  if (makeup_duration > (rtb_DataTypeConversion6_j))
                    makeup_duration = rtb_DataTypeConversion6_j;
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
              ((&BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[0])
               [index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_A02_ConstB.s710_DataTypeConversion5) !=
              (BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK2)) {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_A02_ConstB.s710_DataTypeConversion5);
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
            ((&BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_A02_ConstB.s710_DataTypeConversion5) !=
            (BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_A02_ConstB.s710_DataTypeConversion5);
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

    BaseEngineController_A02_DWork.s710_InjectorSequence_DWORK2 =
      BaseEngineController_A02_ConstB.s710_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_A02_B.s710_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_41[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_41[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S810>/==' incorporates:
   *  Constant: '<S810>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_j[i] =
      (BaseEngineController_A02_B.s710_InjectorSequence_o1[i] == 0);
  }

  /* S-Function Block: <S810>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S810>/<1' incorporates:
   *  Constant: '<S810>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S810>/motohawk_encoder_average_rpm'
   */
  rtb_LogicalOperator1_a = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S810>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator3_j[i] && rtb_LogicalOperator1_a &&
                   BaseEngineController_A02_B.s816_Merge[i]);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S810>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_AND1[0]);
    UpdateFault(29);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S810>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_AND1[1]);
    UpdateFault(30);
  }

  /* S-Function (motohawk_sfun_dout): '<S711>/motohawk_dout' */
  /* S-Function Block: OilPumpPin */
  {
    BaseEngineController_A02_B.s711_motohawk_dout = 2;
    if ((init_resource_OilPumpPin_DataStore()) >= 0) {
      BaseEngineController_A02_B.s711_motohawk_dout =
        (DiscreteOut_FaultStatus_OilPumpPin_DataStore());
    }
  }

  /* RelationalOperator: '<S830>/RelOp' incorporates:
   *  Constant: '<S830>/Constant'
   */
  rtb_RelationalOperator5_p = (BaseEngineController_A02_B.s711_motohawk_dout ==
    1);

  /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LSDFault_OilPump */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    if (rtb_RelationalOperator5_p == 0) {
      SetFaultSuspected(32, 0);
      UpdateFault(32);
    } else if (rtb_RelationalOperator5_p == 1) {
      SetFaultSuspected(32, 1);
      UpdateFault(32);
    }
  }

  /* If: '<S832>/If' incorporates:
   *  ActionPort: '<S833>/Action Port'
   *  ActionPort: '<S834>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S832>/override_enable'
   *  SubSystem: '<S832>/NewValue'
   *  SubSystem: '<S832>/OldValue'
   */
  if ((OILP_ovr_DataStore())) {
    /* Inport: '<S833>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S832>/new_value'
     */
    rtb_LogicalOperator1_a = (OILP_new_DataStore());
  } else {
    /* Inport: '<S834>/In1' */
    rtb_LogicalOperator1_a = BaseEngineController_A02_B.s120_OILP;
  }

  /* Logic: '<S831>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S831>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s831_LogicalOperator = rtb_LogicalOperator1_a ^
    (OILP_Polarity_DataStore());

  /* S-Function (motohawk_sfun_dout): '<S712>/motohawk_dout' */
  /* S-Function Block: O2_Heater */
  {
    BaseEngineController_A02_B.s712_motohawk_dout = 2;
    if ((init_resource_O2_Heater_DataStore()) >= 0) {
      BaseEngineController_A02_B.s712_motohawk_dout =
        (DiscreteOut_FaultStatus_O2_Heater_DataStore());
    }
  }

  /* RelationalOperator: '<S835>/RelOp' incorporates:
   *  Constant: '<S835>/Constant'
   */
  rtb_RelationalOperator5_p = (BaseEngineController_A02_B.s712_motohawk_dout ==
    1);

  /* S-Function (motohawk_sfun_fault_def): '<S712>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LSDFault_OxygenHeater */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    if (rtb_RelationalOperator5_p == 0) {
      SetFaultSuspected(33, 0);
      UpdateFault(33);
    } else if (rtb_RelationalOperator5_p == 1) {
      SetFaultSuspected(33, 1);
      UpdateFault(33);
    }
  }

  /* If: '<S837>/If' incorporates:
   *  ActionPort: '<S838>/Action Port'
   *  ActionPort: '<S839>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S837>/override_enable'
   *  SubSystem: '<S837>/NewValue'
   *  SubSystem: '<S837>/OldValue'
   */
  if ((Oxygen_Heater_ovr_DataStore())) {
    /* Inport: '<S838>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S837>/new_value'
     */
    rtb_LogicalOperator1_a = (Oxygen_Heater_new_DataStore());
  } else {
    /* Inport: '<S839>/In1' */
    rtb_LogicalOperator1_a = BaseEngineController_A02_B.s120_O2Heater;
  }

  /* Logic: '<S836>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S836>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s836_LogicalOperator = rtb_LogicalOperator1_a ^
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
    rtb_Sum2_ob = rtb_motohawk_delta_time_he + EGR_Disable_DataStore();
  } else {
    rtb_Sum2_ob = 0.0;
  }

  /* RelationalOperator: '<S19>/Relational Operator3' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Gain: '<S19>/Gain1'
   *  Gain: '<S19>/Gain3'
   *  Product: '<S19>/Product1'
   *  Sum: '<S19>/Add'
   */
  rtb_RelationalOperator3_fn = (1.0E+006 * rtb_Sum2_ob >= (100.0 - rtb_Sum_ic) *
    0.01 * rtb_Merge_b0d);

  /* S-Function (motohawk_sfun_data_write): '<S19>/motohawk_data_write' */
  /* Write to Data Storage as scalar: RESET */
  {
    RESET_DataStore() = rtb_RelationalOperator3_fn;
  }

  /* Saturate: '<S21>/Saturation' */
  rtb_Saturation_ms = rt_SATURATE(rtb_Switch_e, 0.0, 16000.0);

  /* S-Function (motohawk_sfun_data_write): '<S21>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EGR_Enable */
  {
    EGR_Enable_DataStore() = rtb_Saturation_ms;
  }

  /* Saturate: '<S22>/Saturation' */
  rtb_Saturation_ai = rt_SATURATE(rtb_Sum2_ob, 0.0, 16000.0);

  /* S-Function (motohawk_sfun_data_write): '<S22>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EGR_Disable */
  {
    EGR_Disable_DataStore() = rtb_Saturation_ai;
  }

  /* DataTypeConversion: '<S15>/Data Type Conversion5' incorporates:
   *  DataTypeConversion: '<S15>/Data Type Conversion2'
   *  DataTypeConversion: '<S15>/Data Type Conversion3'
   *  DataTypeConversion: '<S15>/Data Type Conversion4'
   *  Fcn: '<S15>/Fcn1'
   *  Fcn: '<S15>/Fcn2'
   *  Sum: '<S15>/Sum1'
   */
  BaseEngineController_A02_B.s15_DataTypeConversion5 = (uint8_T)(((int32_T)
    rtb_motohawk_fault_action3 * (int32_T)3.0 + (int32_T)
    rtb_motohawk_fault_action2 * (int32_T)2.0) + (int32_T)
    rtb_motohawk_fault_action1_m);

  /* S-Function Block: <S128>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s128_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_i = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S128>/Switch' incorporates:
   *  Constant: '<S128>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S128>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S128>/motohawk_delta_time'
   *  Sum: '<S128>/Sum'
   */
  if (BaseEngineController_A02_B.s127_APPRamp >= 1.0) {
    rtb_Switch_k = rtb_motohawk_delta_time_i + ThrottleRampTime_DataStore();
  } else {
    rtb_Switch_k = 0.0;
  }

  /* S-Function Block: <S119>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP_PrelookupIn_DataStore()) = rtb_Switch_k;
    (APP_PrelookupIdx_DataStore()) = TablePrelookup_real_T(rtb_Switch_k,
      (APP_PrelookupIdxArr_DataStore()), 7, (APP_PrelookupIdx_DataStore()));
    rtb_motohawk_prelookup_e0 = (APP_PrelookupIdx_DataStore());
  }

  /* S-Function Block: <S119>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d_k = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_e0, (real_T *) ((APP_InterpolationTbl_DataStore())),
       7);
    (APP_Interpolation_DataStore()) = rtb_motohawk_interpolation_1d_k;
  }

  /* Product: '<S119>/Product' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S119>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S119>/motohawk_prelookup'
   */
  rtb_Product_cf = rtb_motohawk_interpolation_1d_k *
    BaseEngineController_A02_B.s127_APPRamp;

  /* S-Function (motohawk_sfun_data_write): '<S119>/motohawk_data_write' */
  /* Write to Data Storage as scalar: APP */
  {
    APP_DataStore() = rtb_Product_cf;
  }

  /* Saturate: '<S128>/Saturation' */
  rtb_Saturation_p = rt_SATURATE(rtb_Switch_k, 0.0, 16000.0);

  /* S-Function (motohawk_sfun_data_write): '<S128>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ThrottleRampTime */
  {
    ThrottleRampTime_DataStore() = rtb_Saturation_p;
  }

  /* Saturate: '<S129>/Saturation' */
  rtb_Saturation_a5 = rt_SATURATE(rtb_Switch_j5, 0.0, 16000.0);

  /* S-Function (motohawk_sfun_data_write): '<S129>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TorqueRampTime */
  {
    TorqueRampTime_DataStore() = rtb_Saturation_a5;
  }

  /* S-Function Block: <S408>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_A02_B.s408_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S564>/Data Type Conversion' */
  rtb_Sum2_ob = (real_T)BaseEngineController_A02_B.s408_motohawk_ain3;

  /* Product: '<S564>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_i = rtb_Sum2_ob * (SensVoltGain_DataStore());

  /* Sum: '<S564>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s564_Sum1 = rtb_DataTypeConversion_i +
    (SensVoltOfst_DataStore());

  /* Logic: '<S564>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_p = (IsFaultActive(52) || IsFaultActive(53));

  /* Logic: '<S564>/Logical Operator6' */
  rtb_LogicalOperator1_a = !rtb_RelationalOperator5_p;

  /* Logic: '<S564>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status3'
   */
  rtb_RelationalOperator_pj = (IsFaultSuspected(52) || IsFaultSuspected(53));

  /* UnitDelay: '<S564>/Unit Delay1' */
  rtb_UnitDelay1_jh = BaseEngineController_A02_DWork.s564_UnitDelay1_DSTATE;

  /* If: '<S564>/If' incorporates:
   *  ActionPort: '<S617>/Action Port'
   *  ActionPort: '<S618>/Action Port'
   *  ActionPort: '<S619>/Action Port'
   *  Logic: '<S564>/Logical Operator5'
   *  SubSystem: '<S564>/If Action Subsystem'
   *  SubSystem: '<S564>/If Action Subsystem1'
   *  SubSystem: '<S564>/If Action Subsystem2'
   */
  if (rtb_LogicalOperator1_a && rtb_RelationalOperator_pj) {
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_jh, &rtb_Merge_l);
  } else if (rtb_RelationalOperator5_p) {
    BaseEngineController_A02_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_l);
  } else {
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s564_Sum1, &rtb_Merge_l);
  }

  /* S-Function Block: <S616>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s616_motohawk_delta_time_DWORK1, NULL);
    rtb_Sum2_as = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S616>/Product' incorporates:
   *  MinMax: '<S616>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S616>/motohawk_calibration'
   */
  rtb_Sum2_as /= rt_MAXd_snf(rtb_Sum2_as, (SensVoltFilterConst_DataStore()));

  /* Sum: '<S621>/Sum1' incorporates:
   *  Constant: '<S621>/Constant'
   *  Product: '<S621>/Product'
   *  Product: '<S621>/Product1'
   *  Sum: '<S621>/Sum'
   *  UnitDelay: '<S621>/Unit Delay'
   */
  rtb_Sum1_d3 = (1.0 - rtb_Sum2_as) *
    BaseEngineController_A02_DWork.s621_UnitDelay_DSTATE + rtb_Merge_l *
    rtb_Sum2_as;

  /* If: '<S620>/If' incorporates:
   *  ActionPort: '<S622>/Action Port'
   *  ActionPort: '<S623>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S620>/override_enable'
   *  SubSystem: '<S620>/NewValue'
   *  SubSystem: '<S620>/OldValue'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Inport: '<S622>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S620>/new_value'
     */
    BaseEngineController_A02_B.s620_Merge = (SensVolt_new_DataStore());
  } else {
    /* Inport: '<S623>/In1' */
    BaseEngineController_A02_B.s620_Merge = rtb_Sum1_d3;
  }

  /* S-Function Block: <S598>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s598_motohawk_delta_time_DWORK1, NULL);
    rtb_Sum2_as = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S598>/Product' incorporates:
   *  MinMax: '<S598>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S598>/motohawk_calibration'
   */
  rtb_Sum2_as /= rt_MAXd_snf(rtb_Sum2_as, (MAPTimeFilterConst_DataStore()));

  /* Sum: '<S603>/Sum1' incorporates:
   *  Constant: '<S603>/Constant'
   *  Product: '<S603>/Product'
   *  Product: '<S603>/Product1'
   *  Sum: '<S603>/Sum'
   *  UnitDelay: '<S603>/Unit Delay'
   */
  rtb_Sum1_h = (1.0 - rtb_Sum2_as) *
    BaseEngineController_A02_DWork.s603_UnitDelay_DSTATE + rtb_Merge_pk *
    rtb_Sum2_as;

  /* If: '<S602>/If' incorporates:
   *  ActionPort: '<S604>/Action Port'
   *  ActionPort: '<S605>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S602>/override_enable'
   *  SubSystem: '<S602>/NewValue'
   *  SubSystem: '<S602>/OldValue'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Inport: '<S604>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S602>/new_value'
     */
    BaseEngineController_A02_B.s602_Merge = (MAPTime_new_DataStore());
  } else {
    /* Inport: '<S605>/In1' */
    BaseEngineController_A02_B.s602_Merge = rtb_Sum1_h;
  }

  /* S-Function Block: <S408>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get(&BaseEngineController_A02_B.s408_motohawk_ain2,
      NULL);
  }

  /* DataTypeConversion: '<S559>/Data Type Conversion' */
  rtb_Sum2_as = (real_T)BaseEngineController_A02_B.s408_motohawk_ain2;

  /* Product: '<S559>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_i = rtb_Sum2_as * (FuelPresGain_DataStore());

  /* Sum: '<S559>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s559_Sum1 = rtb_DataTypeConversion_i +
    (FuelPresOfst_DataStore());

  /* Logic: '<S559>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_p = (IsFaultActive(21) || IsFaultActive(22));

  /* Logic: '<S559>/Logical Operator6' */
  rtb_LogicalOperator1_a = !rtb_RelationalOperator5_p;

  /* Logic: '<S559>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status3'
   */
  rtb_RelationalOperator_pj = (IsFaultSuspected(21) || IsFaultSuspected(22));

  /* UnitDelay: '<S559>/Unit Delay1' */
  rtb_UnitDelay1_b = BaseEngineController_A02_DWork.s559_UnitDelay1_DSTATE;

  /* If: '<S559>/If' incorporates:
   *  ActionPort: '<S583>/Action Port'
   *  ActionPort: '<S584>/Action Port'
   *  ActionPort: '<S585>/Action Port'
   *  Logic: '<S559>/Logical Operator5'
   *  SubSystem: '<S559>/If Action Subsystem'
   *  SubSystem: '<S559>/If Action Subsystem1'
   *  SubSystem: '<S559>/If Action Subsystem2'
   */
  if (rtb_LogicalOperator1_a && rtb_RelationalOperator_pj) {
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_b, &rtb_Merge_dm);
  } else if (rtb_RelationalOperator5_p) {
    BaseEngineController_A02_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_dm);
  } else {
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s559_Sum1, &rtb_Merge_dm);
  }

  /* S-Function Block: <S582>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s582_motohawk_delta_time_DWORK1, NULL);
    rtb_Sum_ic = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S582>/Product' incorporates:
   *  MinMax: '<S582>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S582>/motohawk_calibration'
   */
  rtb_Sum_ic /= rt_MAXd_snf(rtb_Sum_ic, (FuelPresFilterConst_DataStore()));

  /* Sum: '<S587>/Sum1' incorporates:
   *  Constant: '<S587>/Constant'
   *  Product: '<S587>/Product'
   *  Product: '<S587>/Product1'
   *  Sum: '<S587>/Sum'
   *  UnitDelay: '<S587>/Unit Delay'
   */
  rtb_Sum1_j = (1.0 - rtb_Sum_ic) *
    BaseEngineController_A02_DWork.s587_UnitDelay_DSTATE + rtb_Merge_dm *
    rtb_Sum_ic;

  /* If: '<S586>/If' incorporates:
   *  ActionPort: '<S588>/Action Port'
   *  ActionPort: '<S589>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S586>/override_enable'
   *  SubSystem: '<S586>/NewValue'
   *  SubSystem: '<S586>/OldValue'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Inport: '<S588>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S586>/new_value'
     */
    BaseEngineController_A02_B.s586_Merge = (FuelPres_new_DataStore());
  } else {
    /* Inport: '<S589>/In1' */
    BaseEngineController_A02_B.s586_Merge = rtb_Sum1_j;
  }

  /* If: '<S665>/If' incorporates:
   *  ActionPort: '<S701>/Action Port'
   *  ActionPort: '<S702>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S665>/override_enable'
   *  SubSystem: '<S665>/NewValue'
   *  SubSystem: '<S665>/OldValue'
   */
  if ((APP2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S416>/If' incorporates:
   *  ActionPort: '<S422>/Action Port'
   *  ActionPort: '<S423>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S416>/override_enable'
   *  SubSystem: '<S416>/NewValue'
   *  SubSystem: '<S416>/OldValue'
   */
  if ((Vehicle_Speed_Ovr_ovr_DataStore())) {
  } else {
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S412>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_4654p0009;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_4654p0009,
      &messageObj);
    if ((BaseEngineController_A02_B.s412_ReadCANMessage_o1 + 1) >
        BaseEngineController_A02_B.s412_ReadCANMessage_o1)
      BaseEngineController_A02_B.s412_ReadCANMessage_o1++;
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
      BaseEngineController_A02_B.s412_ReadCANMessage_o2 = (((real_T) tmp0) /
        ((real_T) 10)) + ((real_T) -3200);
      BaseEngineController_A02_B.s412_ReadCANMessage_o3 = ((real_T) tmp1) +
        ((real_T) -32000);
      BaseEngineController_A02_B.s412_ReadCANMessage_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_A02_B.s412_ReadCANMessage_o1 = 0;
    }
  }

  /* If: '<S424>/If' incorporates:
   *  ActionPort: '<S461>/Action Port'
   *  ActionPort: '<S462>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S424>/override_enable'
   *  SubSystem: '<S424>/NewValue'
   *  SubSystem: '<S424>/OldValue'
   */
  if ((Status1_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S425>/If' incorporates:
   *  ActionPort: '<S463>/Action Port'
   *  ActionPort: '<S464>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S425>/override_enable'
   *  SubSystem: '<S425>/NewValue'
   *  SubSystem: '<S425>/OldValue'
   */
  if ((Est_Absolute_Torque_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S436>/If' incorporates:
   *  ActionPort: '<S485>/Action Port'
   *  ActionPort: '<S486>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S436>/override_enable'
   *  SubSystem: '<S436>/NewValue'
   *  SubSystem: '<S436>/OldValue'
   */
  if ((Motor_Speed_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S447>/If' incorporates:
   *  ActionPort: '<S507>/Action Port'
   *  ActionPort: '<S508>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S447>/override_enable'
   *  SubSystem: '<S447>/NewValue'
   *  SubSystem: '<S447>/OldValue'
   */
  if ((HVBus_Voltage_Ovr_ovr_DataStore())) {
  } else {
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S412>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_4655p0009;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_4655p0009,
      &messageObj);
    if ((BaseEngineController_A02_B.s412_ReadCANMessage1_o1 + 1) >
        BaseEngineController_A02_B.s412_ReadCANMessage1_o1)
      BaseEngineController_A02_B.s412_ReadCANMessage1_o1++;
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
      BaseEngineController_A02_B.s412_ReadCANMessage1_o2 = (real_T) tmp0;
      BaseEngineController_A02_B.s412_ReadCANMessage1_o3 = (real_T) tmp1;
      BaseEngineController_A02_B.s412_ReadCANMessage1_o4 = (real_T) tmp2;
      BaseEngineController_A02_B.s412_ReadCANMessage1_o5 = (real_T) tmp3;
      BaseEngineController_A02_B.s412_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_A02_B.s412_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_A02_B.s412_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_A02_B.s412_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_A02_B.s412_ReadCANMessage1_o10 = ((real_T) tmp8) /
        ((real_T) 2);
      BaseEngineController_A02_B.s412_ReadCANMessage1_o11 = ((real_T) tmp9) /
        ((real_T) 2);
      BaseEngineController_A02_B.s412_ReadCANMessage1_o12 = ((real_T) tmp10) +
        ((real_T) -40);
      BaseEngineController_A02_B.s412_ReadCANMessage1_o13 = ((real_T) tmp11) +
        ((real_T) -40);
      BaseEngineController_A02_B.s412_ReadCANMessage1_o1 = 0;
    }
  }

  /* If: '<S455>/If' incorporates:
   *  ActionPort: '<S523>/Action Port'
   *  ActionPort: '<S524>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S455>/override_enable'
   *  SubSystem: '<S455>/NewValue'
   *  SubSystem: '<S455>/OldValue'
   */
  if ((Status2_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S456>/If' incorporates:
   *  ActionPort: '<S525>/Action Port'
   *  ActionPort: '<S526>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S456>/override_enable'
   *  SubSystem: '<S456>/NewValue'
   *  SubSystem: '<S456>/OldValue'
   */
  if ((Run_Enable_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S457>/If' incorporates:
   *  ActionPort: '<S527>/Action Port'
   *  ActionPort: '<S528>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S457>/override_enable'
   *  SubSystem: '<S457>/NewValue'
   *  SubSystem: '<S457>/OldValue'
   */
  if ((NegativeTq_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S458>/If' incorporates:
   *  ActionPort: '<S529>/Action Port'
   *  ActionPort: '<S530>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S458>/override_enable'
   *  SubSystem: '<S458>/NewValue'
   *  SubSystem: '<S458>/OldValue'
   */
  if ((Generating_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S459>/If' incorporates:
   *  ActionPort: '<S531>/Action Port'
   *  ActionPort: '<S532>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S459>/override_enable'
   *  SubSystem: '<S459>/NewValue'
   *  SubSystem: '<S459>/OldValue'
   */
  if ((Phoenix_Fault_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S460>/If' incorporates:
   *  ActionPort: '<S533>/Action Port'
   *  ActionPort: '<S534>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S460>/override_enable'
   *  SubSystem: '<S460>/NewValue'
   *  SubSystem: '<S460>/OldValue'
   */
  if ((TqLimiting_Reason_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S426>/If' incorporates:
   *  ActionPort: '<S465>/Action Port'
   *  ActionPort: '<S466>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S426>/override_enable'
   *  SubSystem: '<S426>/NewValue'
   *  SubSystem: '<S426>/OldValue'
   */
  if ((Control_Mode_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S427>/If' incorporates:
   *  ActionPort: '<S467>/Action Port'
   *  ActionPort: '<S468>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S427>/override_enable'
   *  SubSystem: '<S427>/NewValue'
   *  SubSystem: '<S427>/OldValue'
   */
  if ((MotoringTq_Curve_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S428>/If' incorporates:
   *  ActionPort: '<S469>/Action Port'
   *  ActionPort: '<S470>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S428>/override_enable'
   *  SubSystem: '<S428>/NewValue'
   *  SubSystem: '<S428>/OldValue'
   */
  if ((GeneratingTq_Curve_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S429>/If' incorporates:
   *  ActionPort: '<S471>/Action Port'
   *  ActionPort: '<S472>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S429>/override_enable'
   *  SubSystem: '<S429>/NewValue'
   *  SubSystem: '<S429>/OldValue'
   */
  if ((Est_Relative_Torque_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S430>/If' incorporates:
   *  ActionPort: '<S473>/Action Port'
   *  ActionPort: '<S474>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S430>/override_enable'
   *  SubSystem: '<S430>/NewValue'
   *  SubSystem: '<S430>/OldValue'
   */
  if ((Estimating_VBATT_Lv_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S431>/If' incorporates:
   *  ActionPort: '<S475>/Action Port'
   *  ActionPort: '<S476>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S431>/override_enable'
   *  SubSystem: '<S431>/NewValue'
   *  SubSystem: '<S431>/OldValue'
   */
  if ((Motor_Temp_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S432>/If' incorporates:
   *  ActionPort: '<S477>/Action Port'
   *  ActionPort: '<S478>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S432>/override_enable'
   *  SubSystem: '<S432>/NewValue'
   *  SubSystem: '<S432>/OldValue'
   */
  if ((Drive_Temp_Ovr_ovr_DataStore())) {
  } else {
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S412>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_4656p0009;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_4656p0009,
      &messageObj);
    if ((BaseEngineController_A02_B.s412_ReadCANMessage2_o1 + 1) >
        BaseEngineController_A02_B.s412_ReadCANMessage2_o1)
      BaseEngineController_A02_B.s412_ReadCANMessage2_o1++;
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
      BaseEngineController_A02_B.s412_ReadCANMessage2_o2 = (real_T) tmp0;
      BaseEngineController_A02_B.s412_ReadCANMessage2_o3 = (real_T) tmp1;
      BaseEngineController_A02_B.s412_ReadCANMessage2_o4 = (real_T) tmp2;
      BaseEngineController_A02_B.s412_ReadCANMessage2_o5 = (real_T) tmp3;
      BaseEngineController_A02_B.s412_ReadCANMessage2_o6 = (real_T) tmp4;
      BaseEngineController_A02_B.s412_ReadCANMessage2_o7 = (real_T) tmp5;
      BaseEngineController_A02_B.s412_ReadCANMessage2_o8 = (real_T) tmp6;
      BaseEngineController_A02_B.s412_ReadCANMessage2_o9 = (real_T) tmp7;
      BaseEngineController_A02_B.s412_ReadCANMessage2_o10 = (real_T) tmp8;
      BaseEngineController_A02_B.s412_ReadCANMessage2_o11 = (real_T) tmp9;
      BaseEngineController_A02_B.s412_ReadCANMessage2_o12 = (real_T) tmp10;
      BaseEngineController_A02_B.s412_ReadCANMessage2_o13 = ((real_T) tmp11) +
        ((real_T) -40);
      BaseEngineController_A02_B.s412_ReadCANMessage2_o14 = ((real_T) tmp12) /
        ((real_T) 2);
      BaseEngineController_A02_B.s412_ReadCANMessage2_o15 = ((real_T) tmp13) /
        ((real_T) 10);
      BaseEngineController_A02_B.s412_ReadCANMessage2_o16 = ((real_T) tmp14) /
        ((real_T) 10);
      BaseEngineController_A02_B.s412_ReadCANMessage2_o1 = 0;
    }
  }

  /* If: '<S433>/If' incorporates:
   *  ActionPort: '<S479>/Action Port'
   *  ActionPort: '<S480>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S433>/override_enable'
   *  SubSystem: '<S433>/NewValue'
   *  SubSystem: '<S433>/OldValue'
   */
  if ((Status3_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S434>/If' incorporates:
   *  ActionPort: '<S481>/Action Port'
   *  ActionPort: '<S482>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S434>/override_enable'
   *  SubSystem: '<S434>/NewValue'
   *  SubSystem: '<S434>/OldValue'
   */
  if ((AD_Input1_En_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S435>/If' incorporates:
   *  ActionPort: '<S483>/Action Port'
   *  ActionPort: '<S484>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S435>/override_enable'
   *  SubSystem: '<S435>/NewValue'
   *  SubSystem: '<S435>/OldValue'
   */
  if ((XDRP_State_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S437>/If' incorporates:
   *  ActionPort: '<S487>/Action Port'
   *  ActionPort: '<S488>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S437>/override_enable'
   *  SubSystem: '<S437>/NewValue'
   *  SubSystem: '<S437>/OldValue'
   */
  if ((PWMOutput_State_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S438>/If' incorporates:
   *  ActionPort: '<S489>/Action Port'
   *  ActionPort: '<S490>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S438>/override_enable'
   *  SubSystem: '<S438>/NewValue'
   *  SubSystem: '<S438>/OldValue'
   */
  if ((AD_Input2_En_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S439>/If' incorporates:
   *  ActionPort: '<S491>/Action Port'
   *  ActionPort: '<S492>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S439>/override_enable'
   *  SubSystem: '<S439>/NewValue'
   *  SubSystem: '<S439>/OldValue'
   */
  if ((Bus_HVIL_Status_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S440>/If' incorporates:
   *  ActionPort: '<S493>/Action Port'
   *  ActionPort: '<S494>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S440>/override_enable'
   *  SubSystem: '<S440>/NewValue'
   *  SubSystem: '<S440>/OldValue'
   */
  if ((ThreePhase_HVIL_Status_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S441>/If' incorporates:
   *  ActionPort: '<S495>/Action Port'
   *  ActionPort: '<S496>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S441>/override_enable'
   *  SubSystem: '<S441>/NewValue'
   *  SubSystem: '<S441>/OldValue'
   */
  if ((DPos_Sens1_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S442>/If' incorporates:
   *  ActionPort: '<S497>/Action Port'
   *  ActionPort: '<S498>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S442>/override_enable'
   *  SubSystem: '<S442>/NewValue'
   *  SubSystem: '<S442>/OldValue'
   */
  if ((DigPos_Sens2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S443>/If' incorporates:
   *  ActionPort: '<S499>/Action Port'
   *  ActionPort: '<S500>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S443>/override_enable'
   *  SubSystem: '<S443>/NewValue'
   *  SubSystem: '<S443>/OldValue'
   */
  if ((DigPos_Sens3_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S444>/If' incorporates:
   *  ActionPort: '<S501>/Action Port'
   *  ActionPort: '<S502>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S444>/override_enable'
   *  SubSystem: '<S444>/NewValue'
   *  SubSystem: '<S444>/OldValue'
   */
  if ((DigPos_Sens4_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S445>/If' incorporates:
   *  ActionPort: '<S503>/Action Port'
   *  ActionPort: '<S504>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S445>/override_enable'
   *  SubSystem: '<S445>/NewValue'
   *  SubSystem: '<S445>/OldValue'
   */
  if ((DigPos_Sens5_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S446>/If' incorporates:
   *  ActionPort: '<S505>/Action Port'
   *  ActionPort: '<S506>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S446>/override_enable'
   *  SubSystem: '<S446>/NewValue'
   *  SubSystem: '<S446>/OldValue'
   */
  if ((CtrlBoard_Temp_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S448>/If' incorporates:
   *  ActionPort: '<S509>/Action Port'
   *  ActionPort: '<S510>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S448>/override_enable'
   *  SubSystem: '<S448>/NewValue'
   *  SubSystem: '<S448>/OldValue'
   */
  if ((Keyed_Voltage_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S449>/If' incorporates:
   *  ActionPort: '<S511>/Action Port'
   *  ActionPort: '<S512>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S449>/override_enable'
   *  SubSystem: '<S449>/NewValue'
   *  SubSystem: '<S449>/OldValue'
   */
  if ((AD_Input1_Vin_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S450>/If' incorporates:
   *  ActionPort: '<S513>/Action Port'
   *  ActionPort: '<S514>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S450>/override_enable'
   *  SubSystem: '<S450>/NewValue'
   *  SubSystem: '<S450>/OldValue'
   */
  if ((AD_Input2_Vin_Ovr_ovr_DataStore())) {
  } else {
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S412>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_4657p0009;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_4657p0009,
      &messageObj);
    if ((BaseEngineController_A02_B.s412_ReadCANMessage3_o1 + 1) >
        BaseEngineController_A02_B.s412_ReadCANMessage3_o1)
      BaseEngineController_A02_B.s412_ReadCANMessage3_o1++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      BaseEngineController_A02_B.s412_ReadCANMessage3_o2 = ((real_T) tmp0) /
        ((real_T) 10);
      BaseEngineController_A02_B.s412_ReadCANMessage3_o3 = ((real_T) tmp1) /
        ((real_T) 10);
      BaseEngineController_A02_B.s412_ReadCANMessage3_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_A02_B.s412_ReadCANMessage3_o1 = 0;
    }
  }

  /* If: '<S451>/If' incorporates:
   *  ActionPort: '<S515>/Action Port'
   *  ActionPort: '<S516>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S451>/override_enable'
   *  SubSystem: '<S451>/NewValue'
   *  SubSystem: '<S451>/OldValue'
   */
  if ((Status4_Age_Count_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S452>/If' incorporates:
   *  ActionPort: '<S517>/Action Port'
   *  ActionPort: '<S518>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S452>/override_enable'
   *  SubSystem: '<S452>/NewValue'
   *  SubSystem: '<S452>/OldValue'
   */
  if ((An_PosSense1_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S453>/If' incorporates:
   *  ActionPort: '<S519>/Action Port'
   *  ActionPort: '<S520>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S453>/override_enable'
   *  SubSystem: '<S453>/NewValue'
   *  SubSystem: '<S453>/OldValue'
   */
  if ((An_PosSense2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* If: '<S454>/If' incorporates:
   *  ActionPort: '<S521>/Action Port'
   *  ActionPort: '<S522>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S454>/override_enable'
   *  SubSystem: '<S454>/NewValue'
   *  SubSystem: '<S454>/OldValue'
   */
  if ((XDRP_Internal_Meas_Ovr_ovr_DataStore())) {
  } else {
  }

  /* Sum: '<S371>/Sum3' incorporates:
   *  Constant: '<S371>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_A02_B.s371_Sum3 = (BaseEngineController_A02_B.s586_Merge
    + 100.0) - BaseEngineController_A02_B.s602_Merge;

  /* UnitDelay: '<S372>/Unit Delay1' */
  rtb_DataTypeConversion_i =
    BaseEngineController_A02_DWork.s372_UnitDelay1_DSTATE;

  /* Sum: '<S372>/Sum3' incorporates:
   *  Constant: '<S372>/Constant1'
   *  Product: '<S372>/Product2'
   *  Product: '<S372>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration1'
   *  Sum: '<S372>/Sum2'
   */
  BaseEngineController_A02_B.s372_Sum3 = (1.0 - (PostO2DelagFiltConst_DataStore()))
    * rtb_DataTypeConversion_i + (PostO2DelagFiltConst_DataStore()) *
    BaseEngineController_A02_B.s638_Merge;

  /* S-Function Block: <S393>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s393_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_a0 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S393>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S393>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S393>/motohawk_delta_time'
   */
  BaseEngineController_A02_B.s393_Sum = rtb_motohawk_delta_time_a0 +
    TimeSinceKeyOnTimer_DataStore();

  /* Outputs for enable SubSystem: '<S322>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S367>/Enable'
   */
  if (rtb_RelOp_g) {
    if (!((int32_T)BaseEngineController_A02_DWork.s322_CaptureIATAtStartup_MODE
          != 0)) {
      /* InitializeConditions for UnitDelay: '<S367>/Unit Delay' */
      BaseEngineController_A02_DWork.s367_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s322_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S367>/Sum' incorporates:
     *  Constant: '<S367>/Constant'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    rtb_Add_a = (int8_T)(BaseEngineController_A02_DWork.s367_UnitDelay_DSTATE +
                         1);

    /* Sum: '<S367>/Add' incorporates:
     *  Constant: '<S367>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S367>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S367>/Relational Operator' */
    rtb_LogicalOperator1_a = (rtb_Add_a <= rtb_Sum_l3);

    /* Switch: '<S367>/Switch' */
    if (rtb_LogicalOperator1_a) {
      rtb_Sum_l3 = rtb_Add_a;
    }

    /* Outputs for enable SubSystem: '<S367>/Collect Average' incorporates:
     *  Constant: '<S367>/TwoSampleBuffer ToIgnore'
     *  EnablePort: '<S385>/Enable'
     *  Logic: '<S367>/Logical Operator'
     *  RelationalOperator: '<S367>/Relational Operator1'
     */
    if (rtb_LogicalOperator1_a && (rtb_Add_a > 2)) {
      if (!((int32_T)BaseEngineController_A02_DWork.s367_CollectAverage_MODE !=
            0)) {
        /* InitializeConditions for UnitDelay: '<S385>/Unit Delay1' */
        BaseEngineController_A02_DWork.s385_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s367_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S385>/Sum1' incorporates:
       *  UnitDelay: '<S385>/Unit Delay1'
       */
      rtb_DataTypeConversion_i = BaseEngineController_A02_B.s644_Merge +
        BaseEngineController_A02_DWork.s385_UnitDelay1_DSTATE;

      /* Product: '<S385>/Product' incorporates:
       *  Constant: '<S367>/TwoSampleBuffer ToIgnore'
       *  DataTypeConversion: '<S385>/Data Type Conversion'
       *  Sum: '<S367>/Add1'
       */
      BaseEngineController_A02_B.s385_Product = 1.0 / (real_T)(int8_T)
        (rtb_Sum_l3 - 2) * rtb_DataTypeConversion_i;

      /* Update for UnitDelay: '<S385>/Unit Delay1' */
      BaseEngineController_A02_DWork.s385_UnitDelay1_DSTATE =
        rtb_DataTypeConversion_i;
    } else {
      if ((int32_T)BaseEngineController_A02_DWork.s367_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s367_CollectAverage_MODE = FALSE;
      }
    }

    /* end of Outputs for SubSystem: '<S367>/Collect Average' */

    /* Update for UnitDelay: '<S367>/Unit Delay' */
    BaseEngineController_A02_DWork.s367_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if ((int32_T)BaseEngineController_A02_DWork.s322_CaptureIATAtStartup_MODE) {
      /* Disable for enable SubSystem: '<S367>/Collect Average' */
      BaseEngineController_A02_DWork.s367_CollectAverage_MODE = FALSE;

      /* end of Disable for SubSystem: '<S367>/Collect Average' */
      BaseEngineController_A02_DWork.s322_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S322>/Capture IAT At Startup' */
  /* S-Function Block: <S361>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_A02_B.s556_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s556_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_App05Idx = (RPM05Idx_DataStore());
  }

  /* Switch: '<S351>/Switch1' incorporates:
   *  Constant: '<S348>/Constant'
   *  Constant: '<S352>/Constant'
   *  RelationalOperator: '<S352>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S348>/motohawk_data_read'
   *  UnitDelay: '<S351>/Unit Delay'
   */
  if (((uint8_T)EngineState_DataStore()) == 1) {
    BaseEngineController_A02_B.s351_Switch1 = 0.0;
  } else {
    BaseEngineController_A02_B.s351_Switch1 =
      BaseEngineController_A02_DWork.s351_UnitDelay_DSTATE;
  }

  /* S-Function Block: <S402>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom05In_DataStore()) = rtb_Torque;
    (IndLoadNom05Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom05IdxArr_DataStore()), 5, (IndLoadNom05Idx_DataStore()));
    rtb_App05Idx = (IndLoadNom05Idx_DataStore());
  }

  /* S-Function Block: <S323>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = BaseEngineController_A02_B.s368_Switch1;
    (App05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s368_Switch1, (App05IdxArr_DataStore()), 5,
       (App05Idx_DataStore()));
    rtb_App05Idx = (App05Idx_DataStore());
  }

  /* UnitDelay: '<S403>/Unit Delay' */
  rtb_UnitDelay_aka = BaseEngineController_A02_DWork.s403_UnitDelay_DSTATE;

  /* Sum: '<S403>/Sum' incorporates:
   *  Constant: '<S403>/Constant1'
   */
  qY = 1U + rtb_UnitDelay_aka;
  if (qY < 1U) {
    qY = MAX_uint32_T;
  }

  rtb_Sum_l0 = qY;

  /* RelationalOperator: '<S403>/Relational Operator' incorporates:
   *  Constant: '<S10>/Count'
   */
  rtb_RelOp_g = (rtb_Sum_l0 >= 5U);

  /* Outputs for enable SubSystem: '<S403>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S404>/Enable'
   */
  if (rtb_RelOp_g) {
    if (!((int32_T)BaseEngineController_A02_DWork.s403_TriggeredSubsystem_MODE
          != 0)) {
      /* Enable for S-Function (fcncallgen): '<S404>/Function-Call Generator' incorporates:
       *  Enable for SubSystem: '<S3>/Diagnostics'
       */
      BaseEngineController_A02_DWork.s403_TriggeredSubsystem_MODE = TRUE;
    }

    /* S-Function (fcncallgen): '<S404>/Function-Call Generator' incorporates:
     *  SubSystem: '<S3>/Diagnostics'
     */

    /* Outputs for trigger SubSystem: '<S275>/Clear FFIDs and FltOrder' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S275>/motohawk_calibration'
     *  TriggerPort: '<S285>/Trigger'
     */
    if ((ClearFreezeFrames_DataStore()) &&
        (BaseEngineController_A02_PrevZCSigState.ClearFFIDsandFltOrder_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S285>/motohawk_data_write3' incorporates:
       *  Constant: '<S285>/Constant'
       */
      /* Write to Data Storage as scalar: FltOrderMax */
      {
        FltOrderMax_DataStore() = ((uint16_T)0U);
      }

      /* S-Function (motohawk_sfun_data_write): '<S285>/motohawk_data_write1' incorporates:
       *  Constant: '<S285>/Constant1'
       */
      /* Write to Data Storage as vector: FFIDs */
      {
        {
          int_T i1;
          const uint8_T *u0 = BaseEngineController_A02_ConstP.Constant1_Value_n;
          for (i1=0; i1 < 6; i1++) {
            FFIDs_DataStore()[i1] = u0[i1];
          }
        }
      }

      /* S-Function (motohawk_sfun_data_write): '<S285>/motohawk_data_write2' incorporates:
       *  Constant: '<S285>/Constant2'
       */
      /* Write to Data Storage as vector: FltOrder */
      {
        {
          int_T i1;
          const uint16_T *u0 = BaseEngineController_A02_ConstP.Constant2_Value_a;
          for (i1=0; i1 < 71; i1++) {
            FltOrder_DataStore()[i1] = u0[i1];
          }
        }
      }
    }

    BaseEngineController_A02_PrevZCSigState.ClearFFIDsandFltOrder_Trig_ZCE =
      (uint8_T)((ClearFreezeFrames_DataStore()) ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* end of Outputs for SubSystem: '<S275>/Clear FFIDs and FltOrder' */

    /* DataTypeConversion: '<S274>/Data Type Conversion1' incorporates:
     *  UnitDelay: '<S274>/Initialized at 1'
     */
    rtb_LogicalOperator1_a =
      (BaseEngineController_A02_DWork.s274_Initializedat1_DSTATE != 0.0);

    /* S-Function (motohawk_sfun_fault_statuses): '<S274>/Active Fault Array' */
    /* Get Fault Statuses */
    {
      extern boolean_T IsFaultActive(uint32_T fault);

      /* |CamEdgesFault| */
      {
        rtb_ActiveFaultArray[0] = IsFaultActive(0);
      }

      /* |CamSyncFault| */
      {
        rtb_ActiveFaultArray[1] = IsFaultActive(1);
      }

      /* |CrankEdgesFault| */
      {
        rtb_ActiveFaultArray[2] = IsFaultActive(2);
      }

      /* |CrankSyncFault| */
      {
        rtb_ActiveFaultArray[3] = IsFaultActive(3);
      }

      /* |ECTOverTempFault| */
      {
        rtb_ActiveFaultArray[4] = IsFaultActive(4);
      }

      /* |ECTRangeHigh| */
      {
        rtb_ActiveFaultArray[5] = IsFaultActive(5);
      }

      /* |ECTRangeLow| */
      {
        rtb_ActiveFaultArray[6] = IsFaultActive(6);
      }

      /* |ECTSevereOverTempFault| */
      {
        rtb_ActiveFaultArray[7] = IsFaultActive(7);
      }

      /* |EGRSenseRangeHigh| */
      {
        rtb_ActiveFaultArray[8] = IsFaultActive(8);
      }

      /* |EGRSenseRangeLow| */
      {
        rtb_ActiveFaultArray[9] = IsFaultActive(9);
      }

      /* |EST1_Open| */
      {
        rtb_ActiveFaultArray[10] = IsFaultActive(10);
      }

      /* |EST1_Short| */
      {
        rtb_ActiveFaultArray[11] = IsFaultActive(11);
      }

      /* |EST2_Open| */
      {
        rtb_ActiveFaultArray[12] = IsFaultActive(12);
      }

      /* |EST2_Short| */
      {
        rtb_ActiveFaultArray[13] = IsFaultActive(13);
      }

      /* |ETCSpringTest| */
      {
        rtb_ActiveFaultArray[14] = IsFaultActive(14);
      }

      /* |ETC_Open_Fault| */
      {
        rtb_ActiveFaultArray[15] = IsFaultActive(15);
      }

      /* |ETC_Sticking| */
      {
        rtb_ActiveFaultArray[16] = IsFaultActive(16);
      }

      /* |FuelAdaptRangeHi| */
      {
        rtb_ActiveFaultArray[17] = IsFaultActive(17);
      }

      /* |FuelAdaptRangeLow| */
      {
        rtb_ActiveFaultArray[18] = IsFaultActive(18);
      }

      /* |FuelPresHigh_Fault| */
      {
        rtb_ActiveFaultArray[19] = IsFaultActive(19);
      }

      /* |FuelPresLow_Fault| */
      {
        rtb_ActiveFaultArray[20] = IsFaultActive(20);
      }

      /* |FuelPresRangeHigh| */
      {
        rtb_ActiveFaultArray[21] = IsFaultActive(21);
      }

      /* |FuelPresRangeLow| */
      {
        rtb_ActiveFaultArray[22] = IsFaultActive(22);
      }

      /* |FuelSensRangeHigh| */
      {
        rtb_ActiveFaultArray[23] = IsFaultActive(23);
      }

      /* |FuelSensRangeLow| */
      {
        rtb_ActiveFaultArray[24] = IsFaultActive(24);
      }

      /* |HBridgeFault_ETC| */
      {
        rtb_ActiveFaultArray[25] = IsFaultActive(25);
      }

      /* |HardOverspeed| */
      {
        rtb_ActiveFaultArray[26] = IsFaultActive(26);
      }

      /* |IATRangeHigh| */
      {
        rtb_ActiveFaultArray[27] = IsFaultActive(27);
      }

      /* |IATRangeLow| */
      {
        rtb_ActiveFaultArray[28] = IsFaultActive(28);
      }

      /* |Inj1Open| */
      {
        rtb_ActiveFaultArray[29] = IsFaultActive(29);
      }

      /* |Inj2Open| */
      {
        rtb_ActiveFaultArray[30] = IsFaultActive(30);
      }

      /* |LSDFault_FuelPump| */
      {
        rtb_ActiveFaultArray[31] = IsFaultActive(31);
      }

      /* |LSDFault_OilPump| */
      {
        rtb_ActiveFaultArray[32] = IsFaultActive(32);
      }

      /* |LSDFault_OxygenHeater| */
      {
        rtb_ActiveFaultArray[33] = IsFaultActive(33);
      }

      /* |MAFRangeHigh| */
      {
        rtb_ActiveFaultArray[34] = IsFaultActive(34);
      }

      /* |MAFRangeLow| */
      {
        rtb_ActiveFaultArray[35] = IsFaultActive(35);
      }

      /* |MAPRangeHigh| */
      {
        rtb_ActiveFaultArray[36] = IsFaultActive(36);
      }

      /* |MAPRangeLow| */
      {
        rtb_ActiveFaultArray[37] = IsFaultActive(37);
      }

      /* |MAPTimeRangeHigh| */
      {
        rtb_ActiveFaultArray[38] = IsFaultActive(38);
      }

      /* |MAPTimeRangeLow| */
      {
        rtb_ActiveFaultArray[39] = IsFaultActive(39);
      }

      /* |MAP_IR_HI| */
      {
        rtb_ActiveFaultArray[40] = IsFaultActive(40);
      }

      /* |MAP_IR_LO| */
      {
        rtb_ActiveFaultArray[41] = IsFaultActive(41);
      }

      /* |MAP_STICKING| */
      {
        rtb_ActiveFaultArray[42] = IsFaultActive(42);
      }

      /* |MediumOverspeed| */
      {
        rtb_ActiveFaultArray[43] = IsFaultActive(43);
      }

      /* |NoOil_Fault| */
      {
        rtb_ActiveFaultArray[44] = IsFaultActive(44);
      }

      /* |O2FailedLean| */
      {
        rtb_ActiveFaultArray[45] = IsFaultActive(45);
      }

      /* |O2FailedRich| */
      {
        rtb_ActiveFaultArray[46] = IsFaultActive(46);
      }

      /* |O2NotActive| */
      {
        rtb_ActiveFaultArray[47] = IsFaultActive(47);
      }

      /* |O2_PostCatRangeHigh| */
      {
        rtb_ActiveFaultArray[48] = IsFaultActive(48);
      }

      /* |O2_PostCatRangeLow| */
      {
        rtb_ActiveFaultArray[49] = IsFaultActive(49);
      }

      /* |OilPresRangeHigh| */
      {
        rtb_ActiveFaultArray[50] = IsFaultActive(50);
      }

      /* |OilPresRangeLow| */
      {
        rtb_ActiveFaultArray[51] = IsFaultActive(51);
      }

      /* |SensVoltRangeHigh| */
      {
        rtb_ActiveFaultArray[52] = IsFaultActive(52);
      }

      /* |SensVoltRangeLow| */
      {
        rtb_ActiveFaultArray[53] = IsFaultActive(53);
      }

      /* |SoftOverspeed| */
      {
        rtb_ActiveFaultArray[54] = IsFaultActive(54);
      }

      /* |SysVoltLow_Fault| */
      {
        rtb_ActiveFaultArray[55] = IsFaultActive(55);
      }

      /* |SysVoltRangeHigh| */
      {
        rtb_ActiveFaultArray[56] = IsFaultActive(56);
      }

      /* |SysVoltRangeLow| */
      {
        rtb_ActiveFaultArray[57] = IsFaultActive(57);
      }

      /* |TPS1AdaptHiMax| */
      {
        rtb_ActiveFaultArray[58] = IsFaultActive(58);
      }

      /* |TPS1AdaptHiMin| */
      {
        rtb_ActiveFaultArray[59] = IsFaultActive(59);
      }

      /* |TPS1AdaptLoMax| */
      {
        rtb_ActiveFaultArray[60] = IsFaultActive(60);
      }

      /* |TPS1AdaptLoMin| */
      {
        rtb_ActiveFaultArray[61] = IsFaultActive(61);
      }

      /* |TPS1RangeHigh| */
      {
        rtb_ActiveFaultArray[62] = IsFaultActive(62);
      }

      /* |TPS1RangeLow| */
      {
        rtb_ActiveFaultArray[63] = IsFaultActive(63);
      }

      /* |TPS2AdaptHiMax| */
      {
        rtb_ActiveFaultArray[64] = IsFaultActive(64);
      }

      /* |TPS2AdaptHiMin| */
      {
        rtb_ActiveFaultArray[65] = IsFaultActive(65);
      }

      /* |TPS2AdaptLoMax| */
      {
        rtb_ActiveFaultArray[66] = IsFaultActive(66);
      }

      /* |TPS2AdaptLoMin| */
      {
        rtb_ActiveFaultArray[67] = IsFaultActive(67);
      }

      /* |TPS2RangeHigh| */
      {
        rtb_ActiveFaultArray[68] = IsFaultActive(68);
      }

      /* |TPS2RangeLow| */
      {
        rtb_ActiveFaultArray[69] = IsFaultActive(69);
      }

      /* |TPS_Sensors_Conflict| */
      {
        rtb_ActiveFaultArray[70] = IsFaultActive(70);
      }
    }

    /* MultiPortSwitch: '<S274>/Multiport Switch' incorporates:
     *  Constant: '<S274>/zeros vector'
     *  Saturate: '<S274>/Saturation'
     */
    if ((int32_T)rtb_LogicalOperator1_a == 0) {
      for (i = 0; i < 71; i++) {
        /* Sum: '<S274>/Add' incorporates:
         *  UnitDelay: '<S274>/Unit Delay2'
         */
        rtb_Add_a = (int8_T)((int32_T)rtb_ActiveFaultArray[i] - (int32_T)
                             BaseEngineController_A02_DWork.s274_UnitDelay2_DSTATE
                             [i]);
        rtb_Add_a = (int8_T)rt_SATURATE(rtb_Add_a, 0, 1);
        rtb_MultiportSwitch[i] = rtb_Add_a;
      }
    } else {
      memcpy((void *)&rtb_MultiportSwitch[0], (void *)
             (&BaseEngineController_A02_ConstP.zerosvector_Value[0]), 71U *
             sizeof(int8_T));
    }

    /* S-Function (motohawk_sfun_data_read): '<S274>/motohawk_data_read3' */
    {
      int_T i1;
      uint8_T *y0 = rtb_motohawk_data_read3_c;
      for (i1=0; i1 < 6; i1++) {
        y0[i1] = FFIDs_DataStore()[i1];
      }
    }

    /* S-Function (motohawk_sfun_data_read): '<S274>/motohawk_data_read1' */
    {
      int_T i1;
      uint16_T *y0 = rtb_motohawk_data_read1_k;
      for (i1=0; i1 < 71; i1++) {
        y0[i1] = FltOrder_DataStore()[i1];
      }
    }

    /* Stateflow: '<S274>/Freeze-Frame Trigger' incorporates:
     *  Constant: '<S274>/zeros vector1'
     *  S-Function (motohawk_sfun_data_read): '<S274>/motohawk_data_read2'
     */
    /* Gateway: Foreground/Control/Diagnostics/Freeze Frame Trigger/Freeze-Frame Trigger */
    /* During: Foreground/Control/Diagnostics/Freeze Frame Trigger/Freeze-Frame Trigger */
    if (BaseEngineController_A02_DWork.s284_is_active_c4_BaseEngineController_A02
        == 0) {
      /* Entry: Foreground/Control/Diagnostics/Freeze Frame Trigger/Freeze-Frame Trigger */
      BaseEngineController_A02_DWork.s284_is_active_c4_BaseEngineController_A02 =
        1U;

      /* Transition: '<S284>:7' */
      /* Entry 'AT_STARTUP': '<S284>:1' */
      BaseEngineController_A02_DWork.s284_is_c4_BaseEngineController_A02 =
        BaseEngineController_A02_IN_AT_STARTUP;
      for (i = 0; i < 6; i++) {
        BaseEngineController_A02_B.s284_FFIDs[i] = rtb_motohawk_data_read3_c[i];
      }

      memcpy((void *)(&BaseEngineController_A02_B.s284_FltOrder[0]), (void *)
             &rtb_motohawk_data_read1_k[0], 71U * sizeof(uint16_T));
      BaseEngineController_A02_B.s284_FltOrderMax = ((uint16_T)
        FltOrderMax_DataStore());
    } else {
      switch (BaseEngineController_A02_DWork.s284_is_c4_BaseEngineController_A02)
      {
       case BaseEngineController_A02_IN_AT_STARTUP:
        /* During 'AT_STARTUP': '<S284>:1' */
        /* Transition: '<S284>:9' */
        do {
          i = 0;
          if (rtb_MultiportSwitch[(int32_T)
              BaseEngineController_A02_DWork.s284_ActvFltCount] != 0) {
            /* Transition: '<S284>:16' */
            BaseEngineController_A02_B.s284_FltOrderMax = (uint16_T)
              (BaseEngineController_A02_B.s284_FltOrderMax + 1);
            BaseEngineController_A02_B.s284_FltOrder[(int32_T)
              BaseEngineController_A02_DWork.s284_ActvFltCount] =
              BaseEngineController_A02_B.s284_FltOrderMax;
            sf_FltOrderCount = 0U;
            do {
              sf_exitg = 0;
              if ((BaseEngineController_A02_B.s284_FFIDs[sf_FltOrderCount] != 0)
                  && (BaseEngineController_A02_DWork.s284_ActvFltCount + 1 !=
                      BaseEngineController_A02_B.s284_FFIDs[sf_FltOrderCount]))
              {
                /* Transition: '<S284>:11' */
                if (sf_FltOrderCount <
                    BaseEngineController_A02_ConstB.s274_Width1 - 1) {
                  /* Transition: '<S284>:15' */
                  sf_FltOrderCount++;
                } else {
                  /* Transition: '<S284>:17' */
                  sf_FltOrderCount = 0U;
                  rtb_DataTypeConversion_a_0 =
                    BaseEngineController_A02_B.s284_FltOrderMax;
                  do {
                    sf_exitg = 0;
                    if (BaseEngineController_A02_B.s284_FltOrder[BaseEngineController_A02_B.s284_FFIDs
                        [sf_FltOrderCount] - 1] < rtb_DataTypeConversion_a_0) {
                      /* Transition: '<S284>:24' */
                      rtb_DataTypeConversion_a_0 =
                        BaseEngineController_A02_B.s284_FltOrder[BaseEngineController_A02_B.s284_FFIDs
                        [sf_FltOrderCount] - 1];
                      BaseEngineController_A02_DWork.s284_OldIndex =
                        sf_FltOrderCount;
                    } else {
                      /* Transition: '<S284>:23' */
                    }

                    if (sf_FltOrderCount <
                        BaseEngineController_A02_ConstB.s274_Width1 - 1) {
                      /* Transition: '<S284>:25' */
                      sf_FltOrderCount++;
                    } else {
                      sf_exitg = 1;
                    }
                  } while ((uint32_T)sf_exitg == 0U);

                  /* Transition: '<S284>:22' */
                  BaseEngineController_A02_B.s284_FFIDs[(int32_T)
                    BaseEngineController_A02_DWork.s284_OldIndex] = (uint8_T)
                    (BaseEngineController_A02_DWork.s284_ActvFltCount + 1);
                  BaseEngineController_A02_B.s284_FFTrigg[(int32_T)
                    BaseEngineController_A02_DWork.s284_OldIndex] = TRUE;
                  sf_exitg = 1;
                }
              } else {
                /* Transition: '<S284>:12' */
                BaseEngineController_A02_B.s284_FFIDs[sf_FltOrderCount] =
                  (uint8_T)(BaseEngineController_A02_DWork.s284_ActvFltCount + 1);
                BaseEngineController_A02_B.s284_FFTrigg[sf_FltOrderCount] = TRUE;

                /* Transition: '<S284>:21' */
                sf_exitg = 1;
              }
            } while ((uint32_T)sf_exitg == 0U);

            /* Transition: '<S284>:19' */
            /* Transition: '<S284>:20' */
            /* Transition: '<S284>:18' */
          } else {
            /* Transition: '<S284>:8' */
          }

          if (BaseEngineController_A02_DWork.s284_ActvFltCount <
              BaseEngineController_A02_ConstB.s274_Width2 - 1) {
            /* Transition: '<S284>:10' */
            BaseEngineController_A02_DWork.s284_ActvFltCount = (uint8_T)
              (BaseEngineController_A02_DWork.s284_ActvFltCount + 1);
          } else {
            i = 1;
          }
        } while ((uint32_T)i == 0U);

        /* Transition: '<S284>:13' */
        /* Exit 'AT_STARTUP': '<S284>:1' */
        /* Entry 'TIME_STEP': '<S284>:2' */
        BaseEngineController_A02_DWork.s284_is_c4_BaseEngineController_A02 =
          BaseEngineController_A02_IN_TIME_STEP;
        BaseEngineController_A02_DWork.s284_ActvFltCount = 0U;
        break;

       case BaseEngineController_A02_IN_TIME_STEP:
        /* During 'TIME_STEP': '<S284>:2' */
        /* Transition: '<S284>:14' */
        for (i = 0; i < 6; i++) {
          BaseEngineController_A02_B.s284_FFTrigg[i] =
            BaseEngineController_A02_ConstP.zerosvector1_Value[i];
        }

        do {
          i = 0;
          if (rtb_MultiportSwitch[(int32_T)
              BaseEngineController_A02_DWork.s284_ActvFltCount] != 0) {
            /* Transition: '<S284>:16' */
            BaseEngineController_A02_B.s284_FltOrderMax = (uint16_T)
              (BaseEngineController_A02_B.s284_FltOrderMax + 1);
            BaseEngineController_A02_B.s284_FltOrder[(int32_T)
              BaseEngineController_A02_DWork.s284_ActvFltCount] =
              BaseEngineController_A02_B.s284_FltOrderMax;
            sf_FltOrderCount = 0U;
            do {
              sf_exitg = 0;
              if ((BaseEngineController_A02_B.s284_FFIDs[sf_FltOrderCount] != 0)
                  && (BaseEngineController_A02_DWork.s284_ActvFltCount + 1 !=
                      BaseEngineController_A02_B.s284_FFIDs[sf_FltOrderCount]))
              {
                /* Transition: '<S284>:11' */
                if (sf_FltOrderCount <
                    BaseEngineController_A02_ConstB.s274_Width1 - 1) {
                  /* Transition: '<S284>:15' */
                  sf_FltOrderCount++;
                } else {
                  /* Transition: '<S284>:17' */
                  sf_FltOrderCount = 0U;
                  rtb_DataTypeConversion_a_0 =
                    BaseEngineController_A02_B.s284_FltOrderMax;
                  do {
                    sf_exitg = 0;
                    if (BaseEngineController_A02_B.s284_FltOrder[BaseEngineController_A02_B.s284_FFIDs
                        [sf_FltOrderCount] - 1] < rtb_DataTypeConversion_a_0) {
                      /* Transition: '<S284>:24' */
                      rtb_DataTypeConversion_a_0 =
                        BaseEngineController_A02_B.s284_FltOrder[BaseEngineController_A02_B.s284_FFIDs
                        [sf_FltOrderCount] - 1];
                      BaseEngineController_A02_DWork.s284_OldIndex =
                        sf_FltOrderCount;
                    } else {
                      /* Transition: '<S284>:23' */
                    }

                    if (sf_FltOrderCount <
                        BaseEngineController_A02_ConstB.s274_Width1 - 1) {
                      /* Transition: '<S284>:25' */
                      sf_FltOrderCount++;
                    } else {
                      sf_exitg = 1;
                    }
                  } while ((uint32_T)sf_exitg == 0U);

                  /* Transition: '<S284>:22' */
                  BaseEngineController_A02_B.s284_FFIDs[(int32_T)
                    BaseEngineController_A02_DWork.s284_OldIndex] = (uint8_T)
                    (BaseEngineController_A02_DWork.s284_ActvFltCount + 1);
                  BaseEngineController_A02_B.s284_FFTrigg[(int32_T)
                    BaseEngineController_A02_DWork.s284_OldIndex] = TRUE;
                  sf_exitg = 1;
                }
              } else {
                /* Transition: '<S284>:12' */
                BaseEngineController_A02_B.s284_FFIDs[sf_FltOrderCount] =
                  (uint8_T)(BaseEngineController_A02_DWork.s284_ActvFltCount + 1);
                BaseEngineController_A02_B.s284_FFTrigg[sf_FltOrderCount] = TRUE;

                /* Transition: '<S284>:21' */
                sf_exitg = 1;
              }
            } while ((uint32_T)sf_exitg == 0U);

            /* Transition: '<S284>:19' */
            /* Transition: '<S284>:20' */
            /* Transition: '<S284>:18' */
          } else {
            /* Transition: '<S284>:8' */
          }

          if (BaseEngineController_A02_DWork.s284_ActvFltCount <
              BaseEngineController_A02_ConstB.s274_Width2 - 1) {
            /* Transition: '<S284>:10' */
            BaseEngineController_A02_DWork.s284_ActvFltCount = (uint8_T)
              (BaseEngineController_A02_DWork.s284_ActvFltCount + 1);
          } else {
            i = 1;
          }
        } while ((uint32_T)i == 0U);

        /* Transition: '<S284>:13' */
        /* Exit 'TIME_STEP': '<S284>:2' */
        /* Entry 'TIME_STEP': '<S284>:2' */
        BaseEngineController_A02_DWork.s284_is_c4_BaseEngineController_A02 =
          BaseEngineController_A02_IN_TIME_STEP;
        BaseEngineController_A02_DWork.s284_ActvFltCount = 0U;
        break;

       default:
        /* Transition: '<S284>:7' */
        /* Entry 'AT_STARTUP': '<S284>:1' */
        BaseEngineController_A02_DWork.s284_is_c4_BaseEngineController_A02 =
          BaseEngineController_A02_IN_AT_STARTUP;
        for (i = 0; i < 6; i++) {
          BaseEngineController_A02_B.s284_FFIDs[i] = rtb_motohawk_data_read3_c[i];
        }

        memcpy((void *)(&BaseEngineController_A02_B.s284_FltOrder[0]), (void *)
               &rtb_motohawk_data_read1_k[0], 71U * sizeof(uint16_T));
        BaseEngineController_A02_B.s284_FltOrderMax = ((uint16_T)
          FltOrderMax_DataStore());
        break;
      }
    }

    /* Logic: '<S275>/Logical Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S275>/motohawk_calibration'
     */
    for (i = 0; i < 6; i++) {
      rtb_LogicalOperator_d[i] = ((ClearFreezeFrames_DataStore()) ||
        BaseEngineController_A02_B.s284_FFTrigg[i]);
    }

    /* Outputs for trigger SubSystem: '<S275>/Freeze Frame Data Storage' incorporates:
     *  TriggerPort: '<S286>/Trigger1'
     */
    if (rtb_LogicalOperator_d[0] &&
        (BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage_Trig_ZCE
         != POS_ZCSIG)) {
      /* MultiPortSwitch: '<S286>/Multiport Switch' incorporates:
       *  Constant: '<S286>/Constant1'
       *  DataTypeConversion: '<S286>/Data Type Conversion'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9_jb = BaseEngineController_A02_B.s284_FFIDs[0];
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: Name */
      {
        (FF1_Name_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }

      /* MultiPortSwitch: '<S286>/Multiport Switch10' incorporates:
       *  Constant: '<S286>/Constant11'
       *  DataTypeConversion: '<S286>/Data Type Conversion9'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s556_Sum1) || rtIsInf
            (BaseEngineController_A02_B.s556_Sum1)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s556_Sum1), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_jb = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write10' */
      /* Write to Data Storage as scalar: Var9 */
      {
        (FF1_Var9_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }

      /* MultiPortSwitch: '<S286>/Multiport Switch11' incorporates:
       *  Constant: '<S286>/Constant12'
       *  Constant: '<S406>/Constant'
       *  DataTypeConversion: '<S286>/Data Type Conversion10'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9_jb = 1;
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write11' */
      /* Write to Data Storage as scalar: Var10 */
      {
        (FF1_Var10_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }

      /* MultiPortSwitch: '<S286>/Multiport Switch1' incorporates:
       *  Constant: '<S286>/Constant2'
       *  DataTypeConversion: '<S286>/Data Type Conversion11'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        /* Sum: '<S286>/Add' incorporates:
         *  Constant: '<S286>/Constant'
         */
        rtb_Add_g = (uint8_T)(BaseEngineController_A02_B.s284_FFIDs[0] - 1);

        /* S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read3' */
        rtb_motohawk_data_read3_b = FltCodes_DataStore()[(uint32_T)rtb_Add_g];
        rtb_MultiportSwitch9_jb = rtb_motohawk_data_read3_b;
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write12' */
      /* Write to Data Storage as scalar: Code */
      {
        (FF1_Code_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }

      /* MultiPortSwitch: '<S286>/Multiport Switch7' incorporates:
       *  Constant: '<S286>/Constant8'
       *  DataTypeConversion: '<S286>/Data Type Conversion1'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s649_Merge) || rtIsInf
            (BaseEngineController_A02_B.s649_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s649_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_jb = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write2' */
      /* Write to Data Storage as scalar: Var6 */
      {
        (FF1_Var6_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }

      /* MultiPortSwitch: '<S286>/Multiport Switch2' incorporates:
       *  Constant: '<S286>/Constant3'
       *  DataTypeConversion: '<S286>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s628_Merge) || rtIsInf
            (BaseEngineController_A02_B.s628_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s628_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_jb = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Var1 */
      {
        (FF1_Var1_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }

      /* MultiPortSwitch: '<S286>/Multiport Switch3' incorporates:
       *  Constant: '<S286>/Constant4'
       *  DataTypeConversion: '<S286>/Data Type Conversion3'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s620_Merge) || rtIsInf
            (BaseEngineController_A02_B.s620_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s620_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_jb = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write4' */
      /* Write to Data Storage as scalar: Var2 */
      {
        (FF1_Var2_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }

      /* MultiPortSwitch: '<S286>/Multiport Switch4' incorporates:
       *  Constant: '<S286>/Constant5'
       *  DataTypeConversion: '<S286>/Data Type Conversion4'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s666_Merge) || rtIsInf
            (BaseEngineController_A02_B.s666_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s666_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_jb = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write5' */
      /* Write to Data Storage as scalar: Var3 */
      {
        (FF1_Var3_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }

      /* MultiPortSwitch: '<S286>/Multiport Switch5' incorporates:
       *  Constant: '<S286>/Constant6'
       *  DataTypeConversion: '<S286>/Data Type Conversion5'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s681_Merge) || rtIsInf
            (BaseEngineController_A02_B.s681_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s681_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_jb = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write6' */
      /* Write to Data Storage as scalar: Var4 */
      {
        (FF1_Var4_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }

      /* MultiPortSwitch: '<S286>/Multiport Switch6' incorporates:
       *  Constant: '<S286>/Constant7'
       *  DataTypeConversion: '<S286>/Data Type Conversion6'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s658_Merge) || rtIsInf
            (BaseEngineController_A02_B.s658_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s658_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_jb = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write7' */
      /* Write to Data Storage as scalar: Var5 */
      {
        (FF1_Var5_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }

      /* MultiPortSwitch: '<S286>/Multiport Switch8' incorporates:
       *  Constant: '<S286>/Constant9'
       *  DataTypeConversion: '<S286>/Data Type Conversion7'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s594_Merge) || rtIsInf
            (BaseEngineController_A02_B.s594_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s594_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_jb = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write8' */
      /* Write to Data Storage as scalar: Var7 */
      {
        (FF1_Var7_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }

      /* MultiPortSwitch: '<S286>/Multiport Switch9' incorporates:
       *  Constant: '<S286>/Constant10'
       *  DataTypeConversion: '<S286>/Data Type Conversion8'
       *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s541_Merge) || rtIsInf
            (BaseEngineController_A02_B.s541_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s541_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_jb = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_jb = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write9' */
      /* Write to Data Storage as scalar: Var8 */
      {
        (FF1_Var8_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_jb;
      }
    }

    BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage_Trig_ZCE =
      (uint8_T)(rtb_LogicalOperator_d[0] ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* end of Outputs for SubSystem: '<S275>/Freeze Frame Data Storage' */

    /* Outputs for trigger SubSystem: '<S275>/Freeze Frame Data Storage1' incorporates:
     *  TriggerPort: '<S287>/Trigger1'
     */
    if (rtb_LogicalOperator_d[1] &&
        (BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage1_Trig_ZCE
         != POS_ZCSIG)) {
      /* MultiPortSwitch: '<S287>/Multiport Switch' incorporates:
       *  Constant: '<S287>/Constant1'
       *  DataTypeConversion: '<S287>/Data Type Conversion'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9_d = BaseEngineController_A02_B.s284_FFIDs[1];
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: Name */
      {
        (FF2_Name_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }

      /* MultiPortSwitch: '<S287>/Multiport Switch10' incorporates:
       *  Constant: '<S287>/Constant11'
       *  DataTypeConversion: '<S287>/Data Type Conversion9'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s556_Sum1) || rtIsInf
            (BaseEngineController_A02_B.s556_Sum1)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s556_Sum1), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_d = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write10' */
      /* Write to Data Storage as scalar: Var9 */
      {
        (FF2_Var9_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }

      /* MultiPortSwitch: '<S287>/Multiport Switch11' incorporates:
       *  Constant: '<S287>/Constant12'
       *  Constant: '<S406>/Constant'
       *  DataTypeConversion: '<S287>/Data Type Conversion10'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9_d = 1;
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write11' */
      /* Write to Data Storage as scalar: Var10 */
      {
        (FF2_Var10_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }

      /* MultiPortSwitch: '<S287>/Multiport Switch1' incorporates:
       *  Constant: '<S287>/Constant2'
       *  DataTypeConversion: '<S287>/Data Type Conversion11'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        /* Sum: '<S287>/Add' incorporates:
         *  Constant: '<S287>/Constant'
         */
        rtb_Add_ny = (uint8_T)(BaseEngineController_A02_B.s284_FFIDs[1] - 1);

        /* S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read3' */
        rtb_motohawk_data_read3_p = FltCodes_DataStore()[(uint32_T)rtb_Add_ny];
        rtb_MultiportSwitch9_d = rtb_motohawk_data_read3_p;
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write12' */
      /* Write to Data Storage as scalar: Code */
      {
        (FF2_Code_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }

      /* MultiPortSwitch: '<S287>/Multiport Switch7' incorporates:
       *  Constant: '<S287>/Constant8'
       *  DataTypeConversion: '<S287>/Data Type Conversion1'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s649_Merge) || rtIsInf
            (BaseEngineController_A02_B.s649_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s649_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_d = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write2' */
      /* Write to Data Storage as scalar: Var6 */
      {
        (FF2_Var6_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }

      /* MultiPortSwitch: '<S287>/Multiport Switch2' incorporates:
       *  Constant: '<S287>/Constant3'
       *  DataTypeConversion: '<S287>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s628_Merge) || rtIsInf
            (BaseEngineController_A02_B.s628_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s628_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_d = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Var1 */
      {
        (FF2_Var1_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }

      /* MultiPortSwitch: '<S287>/Multiport Switch3' incorporates:
       *  Constant: '<S287>/Constant4'
       *  DataTypeConversion: '<S287>/Data Type Conversion3'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s620_Merge) || rtIsInf
            (BaseEngineController_A02_B.s620_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s620_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_d = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write4' */
      /* Write to Data Storage as scalar: Var2 */
      {
        (FF2_Var2_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }

      /* MultiPortSwitch: '<S287>/Multiport Switch4' incorporates:
       *  Constant: '<S287>/Constant5'
       *  DataTypeConversion: '<S287>/Data Type Conversion4'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s666_Merge) || rtIsInf
            (BaseEngineController_A02_B.s666_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s666_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_d = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write5' */
      /* Write to Data Storage as scalar: Var3 */
      {
        (FF2_Var3_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }

      /* MultiPortSwitch: '<S287>/Multiport Switch5' incorporates:
       *  Constant: '<S287>/Constant6'
       *  DataTypeConversion: '<S287>/Data Type Conversion5'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s681_Merge) || rtIsInf
            (BaseEngineController_A02_B.s681_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s681_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_d = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write6' */
      /* Write to Data Storage as scalar: Var4 */
      {
        (FF2_Var4_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }

      /* MultiPortSwitch: '<S287>/Multiport Switch6' incorporates:
       *  Constant: '<S287>/Constant7'
       *  DataTypeConversion: '<S287>/Data Type Conversion6'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s658_Merge) || rtIsInf
            (BaseEngineController_A02_B.s658_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s658_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_d = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write7' */
      /* Write to Data Storage as scalar: Var5 */
      {
        (FF2_Var5_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }

      /* MultiPortSwitch: '<S287>/Multiport Switch8' incorporates:
       *  Constant: '<S287>/Constant9'
       *  DataTypeConversion: '<S287>/Data Type Conversion7'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s594_Merge) || rtIsInf
            (BaseEngineController_A02_B.s594_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s594_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_d = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write8' */
      /* Write to Data Storage as scalar: Var7 */
      {
        (FF2_Var7_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }

      /* MultiPortSwitch: '<S287>/Multiport Switch9' incorporates:
       *  Constant: '<S287>/Constant10'
       *  DataTypeConversion: '<S287>/Data Type Conversion8'
       *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s541_Merge) || rtIsInf
            (BaseEngineController_A02_B.s541_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s541_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_d = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_d = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S287>/motohawk_data_write9' */
      /* Write to Data Storage as scalar: Var8 */
      {
        (FF2_Var8_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_d;
      }
    }

    BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage1_Trig_ZCE =
      (uint8_T)(rtb_LogicalOperator_d[1] ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* end of Outputs for SubSystem: '<S275>/Freeze Frame Data Storage1' */

    /* Outputs for trigger SubSystem: '<S275>/Freeze Frame Data Storage2' incorporates:
     *  TriggerPort: '<S288>/Trigger1'
     */
    if (rtb_LogicalOperator_d[2] &&
        (BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage2_Trig_ZCE
         != POS_ZCSIG)) {
      /* MultiPortSwitch: '<S288>/Multiport Switch' incorporates:
       *  Constant: '<S288>/Constant1'
       *  DataTypeConversion: '<S288>/Data Type Conversion'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9_n = BaseEngineController_A02_B.s284_FFIDs[2];
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: Name */
      {
        (FF3_Name_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }

      /* MultiPortSwitch: '<S288>/Multiport Switch10' incorporates:
       *  Constant: '<S288>/Constant11'
       *  DataTypeConversion: '<S288>/Data Type Conversion9'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s556_Sum1) || rtIsInf
            (BaseEngineController_A02_B.s556_Sum1)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s556_Sum1), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_n = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write10' */
      /* Write to Data Storage as scalar: Var9 */
      {
        (FF3_Var9_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }

      /* MultiPortSwitch: '<S288>/Multiport Switch11' incorporates:
       *  Constant: '<S288>/Constant12'
       *  Constant: '<S406>/Constant'
       *  DataTypeConversion: '<S288>/Data Type Conversion10'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9_n = 1;
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write11' */
      /* Write to Data Storage as scalar: Var10 */
      {
        (FF3_Var10_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }

      /* MultiPortSwitch: '<S288>/Multiport Switch1' incorporates:
       *  Constant: '<S288>/Constant2'
       *  DataTypeConversion: '<S288>/Data Type Conversion11'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        /* Sum: '<S288>/Add' incorporates:
         *  Constant: '<S288>/Constant'
         */
        rtb_Add_lb = (uint8_T)(BaseEngineController_A02_B.s284_FFIDs[2] - 1);

        /* S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read3' */
        rtb_motohawk_data_read3_my = FltCodes_DataStore()[(uint32_T)rtb_Add_lb];
        rtb_MultiportSwitch9_n = rtb_motohawk_data_read3_my;
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write12' */
      /* Write to Data Storage as scalar: Code */
      {
        (FF3_Code_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }

      /* MultiPortSwitch: '<S288>/Multiport Switch7' incorporates:
       *  Constant: '<S288>/Constant8'
       *  DataTypeConversion: '<S288>/Data Type Conversion1'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s649_Merge) || rtIsInf
            (BaseEngineController_A02_B.s649_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s649_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_n = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write2' */
      /* Write to Data Storage as scalar: Var6 */
      {
        (FF3_Var6_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }

      /* MultiPortSwitch: '<S288>/Multiport Switch2' incorporates:
       *  Constant: '<S288>/Constant3'
       *  DataTypeConversion: '<S288>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s628_Merge) || rtIsInf
            (BaseEngineController_A02_B.s628_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s628_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_n = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Var1 */
      {
        (FF3_Var1_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }

      /* MultiPortSwitch: '<S288>/Multiport Switch3' incorporates:
       *  Constant: '<S288>/Constant4'
       *  DataTypeConversion: '<S288>/Data Type Conversion3'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s620_Merge) || rtIsInf
            (BaseEngineController_A02_B.s620_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s620_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_n = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write4' */
      /* Write to Data Storage as scalar: Var2 */
      {
        (FF3_Var2_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }

      /* MultiPortSwitch: '<S288>/Multiport Switch4' incorporates:
       *  Constant: '<S288>/Constant5'
       *  DataTypeConversion: '<S288>/Data Type Conversion4'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s666_Merge) || rtIsInf
            (BaseEngineController_A02_B.s666_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s666_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_n = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write5' */
      /* Write to Data Storage as scalar: Var3 */
      {
        (FF3_Var3_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }

      /* MultiPortSwitch: '<S288>/Multiport Switch5' incorporates:
       *  Constant: '<S288>/Constant6'
       *  DataTypeConversion: '<S288>/Data Type Conversion5'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s681_Merge) || rtIsInf
            (BaseEngineController_A02_B.s681_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s681_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_n = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write6' */
      /* Write to Data Storage as scalar: Var4 */
      {
        (FF3_Var4_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }

      /* MultiPortSwitch: '<S288>/Multiport Switch6' incorporates:
       *  Constant: '<S288>/Constant7'
       *  DataTypeConversion: '<S288>/Data Type Conversion6'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s658_Merge) || rtIsInf
            (BaseEngineController_A02_B.s658_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s658_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_n = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write7' */
      /* Write to Data Storage as scalar: Var5 */
      {
        (FF3_Var5_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }

      /* MultiPortSwitch: '<S288>/Multiport Switch8' incorporates:
       *  Constant: '<S288>/Constant9'
       *  DataTypeConversion: '<S288>/Data Type Conversion7'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s594_Merge) || rtIsInf
            (BaseEngineController_A02_B.s594_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s594_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_n = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write8' */
      /* Write to Data Storage as scalar: Var7 */
      {
        (FF3_Var7_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }

      /* MultiPortSwitch: '<S288>/Multiport Switch9' incorporates:
       *  Constant: '<S288>/Constant10'
       *  DataTypeConversion: '<S288>/Data Type Conversion8'
       *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s541_Merge) || rtIsInf
            (BaseEngineController_A02_B.s541_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s541_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_n = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_n = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S288>/motohawk_data_write9' */
      /* Write to Data Storage as scalar: Var8 */
      {
        (FF3_Var8_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_n;
      }
    }

    BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage2_Trig_ZCE =
      (uint8_T)(rtb_LogicalOperator_d[2] ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* end of Outputs for SubSystem: '<S275>/Freeze Frame Data Storage2' */

    /* Outputs for trigger SubSystem: '<S275>/Freeze Frame Data Storage3' incorporates:
     *  TriggerPort: '<S289>/Trigger1'
     */
    if (rtb_LogicalOperator_d[3] &&
        (BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage3_Trig_ZCE
         != POS_ZCSIG)) {
      /* MultiPortSwitch: '<S289>/Multiport Switch' incorporates:
       *  Constant: '<S289>/Constant1'
       *  DataTypeConversion: '<S289>/Data Type Conversion'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9_o = BaseEngineController_A02_B.s284_FFIDs[3];
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: Name */
      {
        (FF4_Name_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }

      /* MultiPortSwitch: '<S289>/Multiport Switch10' incorporates:
       *  Constant: '<S289>/Constant11'
       *  DataTypeConversion: '<S289>/Data Type Conversion9'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s556_Sum1) || rtIsInf
            (BaseEngineController_A02_B.s556_Sum1)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s556_Sum1), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_o = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write10' */
      /* Write to Data Storage as scalar: Var9 */
      {
        (FF4_Var9_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }

      /* MultiPortSwitch: '<S289>/Multiport Switch11' incorporates:
       *  Constant: '<S289>/Constant12'
       *  Constant: '<S406>/Constant'
       *  DataTypeConversion: '<S289>/Data Type Conversion10'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9_o = 1;
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write11' */
      /* Write to Data Storage as scalar: Var10 */
      {
        (FF4_Var10_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }

      /* MultiPortSwitch: '<S289>/Multiport Switch1' incorporates:
       *  Constant: '<S289>/Constant2'
       *  DataTypeConversion: '<S289>/Data Type Conversion11'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        /* Sum: '<S289>/Add' incorporates:
         *  Constant: '<S289>/Constant'
         */
        rtb_Add_ie = (uint8_T)(BaseEngineController_A02_B.s284_FFIDs[3] - 1);

        /* S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read3' */
        rtb_motohawk_data_read3_ic = FltCodes_DataStore()[(uint32_T)rtb_Add_ie];
        rtb_MultiportSwitch9_o = rtb_motohawk_data_read3_ic;
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write12' */
      /* Write to Data Storage as scalar: Code */
      {
        (FF4_Code_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }

      /* MultiPortSwitch: '<S289>/Multiport Switch7' incorporates:
       *  Constant: '<S289>/Constant8'
       *  DataTypeConversion: '<S289>/Data Type Conversion1'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s649_Merge) || rtIsInf
            (BaseEngineController_A02_B.s649_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s649_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_o = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write2' */
      /* Write to Data Storage as scalar: Var6 */
      {
        (FF4_Var6_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }

      /* MultiPortSwitch: '<S289>/Multiport Switch2' incorporates:
       *  Constant: '<S289>/Constant3'
       *  DataTypeConversion: '<S289>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s628_Merge) || rtIsInf
            (BaseEngineController_A02_B.s628_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s628_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_o = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Var1 */
      {
        (FF4_Var1_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }

      /* MultiPortSwitch: '<S289>/Multiport Switch3' incorporates:
       *  Constant: '<S289>/Constant4'
       *  DataTypeConversion: '<S289>/Data Type Conversion3'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s620_Merge) || rtIsInf
            (BaseEngineController_A02_B.s620_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s620_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_o = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write4' */
      /* Write to Data Storage as scalar: Var2 */
      {
        (FF4_Var2_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }

      /* MultiPortSwitch: '<S289>/Multiport Switch4' incorporates:
       *  Constant: '<S289>/Constant5'
       *  DataTypeConversion: '<S289>/Data Type Conversion4'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s666_Merge) || rtIsInf
            (BaseEngineController_A02_B.s666_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s666_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_o = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write5' */
      /* Write to Data Storage as scalar: Var3 */
      {
        (FF4_Var3_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }

      /* MultiPortSwitch: '<S289>/Multiport Switch5' incorporates:
       *  Constant: '<S289>/Constant6'
       *  DataTypeConversion: '<S289>/Data Type Conversion5'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s681_Merge) || rtIsInf
            (BaseEngineController_A02_B.s681_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s681_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_o = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write6' */
      /* Write to Data Storage as scalar: Var4 */
      {
        (FF4_Var4_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }

      /* MultiPortSwitch: '<S289>/Multiport Switch6' incorporates:
       *  Constant: '<S289>/Constant7'
       *  DataTypeConversion: '<S289>/Data Type Conversion6'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s658_Merge) || rtIsInf
            (BaseEngineController_A02_B.s658_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s658_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_o = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write7' */
      /* Write to Data Storage as scalar: Var5 */
      {
        (FF4_Var5_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }

      /* MultiPortSwitch: '<S289>/Multiport Switch8' incorporates:
       *  Constant: '<S289>/Constant9'
       *  DataTypeConversion: '<S289>/Data Type Conversion7'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s594_Merge) || rtIsInf
            (BaseEngineController_A02_B.s594_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s594_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_o = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write8' */
      /* Write to Data Storage as scalar: Var7 */
      {
        (FF4_Var7_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }

      /* MultiPortSwitch: '<S289>/Multiport Switch9' incorporates:
       *  Constant: '<S289>/Constant10'
       *  DataTypeConversion: '<S289>/Data Type Conversion8'
       *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s541_Merge) || rtIsInf
            (BaseEngineController_A02_B.s541_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s541_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_o = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_o = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S289>/motohawk_data_write9' */
      /* Write to Data Storage as scalar: Var8 */
      {
        (FF4_Var8_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_o;
      }
    }

    BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage3_Trig_ZCE =
      (uint8_T)(rtb_LogicalOperator_d[3] ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* end of Outputs for SubSystem: '<S275>/Freeze Frame Data Storage3' */

    /* Outputs for trigger SubSystem: '<S275>/Freeze Frame Data Storage4' incorporates:
     *  TriggerPort: '<S290>/Trigger1'
     */
    if (rtb_LogicalOperator_d[4] &&
        (BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage4_Trig_ZCE
         != POS_ZCSIG)) {
      /* MultiPortSwitch: '<S290>/Multiport Switch' incorporates:
       *  Constant: '<S290>/Constant1'
       *  DataTypeConversion: '<S290>/Data Type Conversion'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9_j = BaseEngineController_A02_B.s284_FFIDs[4];
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: Name */
      {
        (FF5_Name_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }

      /* MultiPortSwitch: '<S290>/Multiport Switch10' incorporates:
       *  Constant: '<S290>/Constant11'
       *  DataTypeConversion: '<S290>/Data Type Conversion9'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s556_Sum1) || rtIsInf
            (BaseEngineController_A02_B.s556_Sum1)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s556_Sum1), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_j = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write10' */
      /* Write to Data Storage as scalar: Var9 */
      {
        (FF5_Var9_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }

      /* MultiPortSwitch: '<S290>/Multiport Switch11' incorporates:
       *  Constant: '<S290>/Constant12'
       *  Constant: '<S406>/Constant'
       *  DataTypeConversion: '<S290>/Data Type Conversion10'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9_j = 1;
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write11' */
      /* Write to Data Storage as scalar: Var10 */
      {
        (FF5_Var10_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }

      /* MultiPortSwitch: '<S290>/Multiport Switch1' incorporates:
       *  Constant: '<S290>/Constant2'
       *  DataTypeConversion: '<S290>/Data Type Conversion11'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        /* Sum: '<S290>/Add' incorporates:
         *  Constant: '<S290>/Constant'
         */
        rtb_Add_c = (uint8_T)(BaseEngineController_A02_B.s284_FFIDs[4] - 1);

        /* S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read3' */
        rtb_motohawk_data_read3_m = FltCodes_DataStore()[(uint32_T)rtb_Add_c];
        rtb_MultiportSwitch9_j = rtb_motohawk_data_read3_m;
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write12' */
      /* Write to Data Storage as scalar: Code */
      {
        (FF5_Code_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }

      /* MultiPortSwitch: '<S290>/Multiport Switch7' incorporates:
       *  Constant: '<S290>/Constant8'
       *  DataTypeConversion: '<S290>/Data Type Conversion1'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s649_Merge) || rtIsInf
            (BaseEngineController_A02_B.s649_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s649_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_j = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write2' */
      /* Write to Data Storage as scalar: Var6 */
      {
        (FF5_Var6_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }

      /* MultiPortSwitch: '<S290>/Multiport Switch2' incorporates:
       *  Constant: '<S290>/Constant3'
       *  DataTypeConversion: '<S290>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s628_Merge) || rtIsInf
            (BaseEngineController_A02_B.s628_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s628_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_j = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Var1 */
      {
        (FF5_Var1_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }

      /* MultiPortSwitch: '<S290>/Multiport Switch3' incorporates:
       *  Constant: '<S290>/Constant4'
       *  DataTypeConversion: '<S290>/Data Type Conversion3'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s620_Merge) || rtIsInf
            (BaseEngineController_A02_B.s620_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s620_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_j = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write4' */
      /* Write to Data Storage as scalar: Var2 */
      {
        (FF5_Var2_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }

      /* MultiPortSwitch: '<S290>/Multiport Switch4' incorporates:
       *  Constant: '<S290>/Constant5'
       *  DataTypeConversion: '<S290>/Data Type Conversion4'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s666_Merge) || rtIsInf
            (BaseEngineController_A02_B.s666_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s666_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_j = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write5' */
      /* Write to Data Storage as scalar: Var3 */
      {
        (FF5_Var3_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }

      /* MultiPortSwitch: '<S290>/Multiport Switch5' incorporates:
       *  Constant: '<S290>/Constant6'
       *  DataTypeConversion: '<S290>/Data Type Conversion5'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s681_Merge) || rtIsInf
            (BaseEngineController_A02_B.s681_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s681_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_j = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write6' */
      /* Write to Data Storage as scalar: Var4 */
      {
        (FF5_Var4_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }

      /* MultiPortSwitch: '<S290>/Multiport Switch6' incorporates:
       *  Constant: '<S290>/Constant7'
       *  DataTypeConversion: '<S290>/Data Type Conversion6'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s658_Merge) || rtIsInf
            (BaseEngineController_A02_B.s658_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s658_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_j = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write7' */
      /* Write to Data Storage as scalar: Var5 */
      {
        (FF5_Var5_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }

      /* MultiPortSwitch: '<S290>/Multiport Switch8' incorporates:
       *  Constant: '<S290>/Constant9'
       *  DataTypeConversion: '<S290>/Data Type Conversion7'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s594_Merge) || rtIsInf
            (BaseEngineController_A02_B.s594_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s594_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_j = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write8' */
      /* Write to Data Storage as scalar: Var7 */
      {
        (FF5_Var7_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }

      /* MultiPortSwitch: '<S290>/Multiport Switch9' incorporates:
       *  Constant: '<S290>/Constant10'
       *  DataTypeConversion: '<S290>/Data Type Conversion8'
       *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s541_Merge) || rtIsInf
            (BaseEngineController_A02_B.s541_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s541_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9_j = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9_j = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S290>/motohawk_data_write9' */
      /* Write to Data Storage as scalar: Var8 */
      {
        (FF5_Var8_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9_j;
      }
    }

    BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage4_Trig_ZCE =
      (uint8_T)(rtb_LogicalOperator_d[4] ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* end of Outputs for SubSystem: '<S275>/Freeze Frame Data Storage4' */

    /* Outputs for trigger SubSystem: '<S275>/Freeze Frame Data Storage5' incorporates:
     *  TriggerPort: '<S291>/Trigger1'
     */
    if (rtb_LogicalOperator_d[5] &&
        (BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage5_Trig_ZCE
         != POS_ZCSIG)) {
      /* MultiPortSwitch: '<S291>/Multiport Switch' incorporates:
       *  Constant: '<S291>/Constant1'
       *  DataTypeConversion: '<S291>/Data Type Conversion'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9 = BaseEngineController_A02_B.s284_FFIDs[5];
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: Name */
      {
        (FF6_Name_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }

      /* MultiPortSwitch: '<S291>/Multiport Switch10' incorporates:
       *  Constant: '<S291>/Constant11'
       *  DataTypeConversion: '<S291>/Data Type Conversion9'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s556_Sum1) || rtIsInf
            (BaseEngineController_A02_B.s556_Sum1)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s556_Sum1), 4.294967296E+009);
        }

        rtb_MultiportSwitch9 = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write10' */
      /* Write to Data Storage as scalar: Var9 */
      {
        (FF6_Var9_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }

      /* MultiPortSwitch: '<S291>/Multiport Switch11' incorporates:
       *  Constant: '<S291>/Constant12'
       *  Constant: '<S406>/Constant'
       *  DataTypeConversion: '<S291>/Data Type Conversion10'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        rtb_MultiportSwitch9 = 1;
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write11' */
      /* Write to Data Storage as scalar: Var10 */
      {
        (FF6_Var10_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }

      /* MultiPortSwitch: '<S291>/Multiport Switch1' incorporates:
       *  Constant: '<S291>/Constant2'
       *  DataTypeConversion: '<S291>/Data Type Conversion11'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        /* Sum: '<S291>/Add' incorporates:
         *  Constant: '<S291>/Constant'
         */
        rtb_Add_l = (uint8_T)(BaseEngineController_A02_B.s284_FFIDs[5] - 1);

        /* S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read3' */
        rtb_motohawk_data_read3_i = FltCodes_DataStore()[(uint32_T)rtb_Add_l];
        rtb_MultiportSwitch9 = rtb_motohawk_data_read3_i;
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write12' */
      /* Write to Data Storage as scalar: Code */
      {
        (FF6_Code_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }

      /* MultiPortSwitch: '<S291>/Multiport Switch7' incorporates:
       *  Constant: '<S291>/Constant8'
       *  DataTypeConversion: '<S291>/Data Type Conversion1'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s649_Merge) || rtIsInf
            (BaseEngineController_A02_B.s649_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s649_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9 = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write2' */
      /* Write to Data Storage as scalar: Var6 */
      {
        (FF6_Var6_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }

      /* MultiPortSwitch: '<S291>/Multiport Switch2' incorporates:
       *  Constant: '<S291>/Constant3'
       *  DataTypeConversion: '<S291>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s628_Merge) || rtIsInf
            (BaseEngineController_A02_B.s628_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s628_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9 = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write3' */
      /* Write to Data Storage as scalar: Var1 */
      {
        (FF6_Var1_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }

      /* MultiPortSwitch: '<S291>/Multiport Switch3' incorporates:
       *  Constant: '<S291>/Constant4'
       *  DataTypeConversion: '<S291>/Data Type Conversion3'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s620_Merge) || rtIsInf
            (BaseEngineController_A02_B.s620_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s620_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9 = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write4' */
      /* Write to Data Storage as scalar: Var2 */
      {
        (FF6_Var2_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }

      /* MultiPortSwitch: '<S291>/Multiport Switch4' incorporates:
       *  Constant: '<S291>/Constant5'
       *  DataTypeConversion: '<S291>/Data Type Conversion4'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s666_Merge) || rtIsInf
            (BaseEngineController_A02_B.s666_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s666_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9 = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write5' */
      /* Write to Data Storage as scalar: Var3 */
      {
        (FF6_Var3_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }

      /* MultiPortSwitch: '<S291>/Multiport Switch5' incorporates:
       *  Constant: '<S291>/Constant6'
       *  DataTypeConversion: '<S291>/Data Type Conversion5'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s681_Merge) || rtIsInf
            (BaseEngineController_A02_B.s681_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s681_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9 = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write6' */
      /* Write to Data Storage as scalar: Var4 */
      {
        (FF6_Var4_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }

      /* MultiPortSwitch: '<S291>/Multiport Switch6' incorporates:
       *  Constant: '<S291>/Constant7'
       *  DataTypeConversion: '<S291>/Data Type Conversion6'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s658_Merge) || rtIsInf
            (BaseEngineController_A02_B.s658_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s658_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9 = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write7' */
      /* Write to Data Storage as scalar: Var5 */
      {
        (FF6_Var5_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }

      /* MultiPortSwitch: '<S291>/Multiport Switch8' incorporates:
       *  Constant: '<S291>/Constant9'
       *  DataTypeConversion: '<S291>/Data Type Conversion7'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s594_Merge) || rtIsInf
            (BaseEngineController_A02_B.s594_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s594_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9 = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write8' */
      /* Write to Data Storage as scalar: Var7 */
      {
        (FF6_Var7_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }

      /* MultiPortSwitch: '<S291>/Multiport Switch9' incorporates:
       *  Constant: '<S291>/Constant10'
       *  DataTypeConversion: '<S291>/Data Type Conversion8'
       *  S-Function (motohawk_sfun_data_read): '<S291>/motohawk_data_read1'
       */
      if ((int32_T)ClearFreezeFrames_DataStore() == 0) {
        if (rtIsNaN(BaseEngineController_A02_B.s541_Merge) || rtIsInf
            (BaseEngineController_A02_B.s541_Merge)) {
          rtb_DesiredLambda_idx = 0.0;
        } else {
          rtb_DesiredLambda_idx = fmod(floor
            (BaseEngineController_A02_B.s541_Merge), 4.294967296E+009);
        }

        rtb_MultiportSwitch9 = rtb_DesiredLambda_idx < 0.0 ? -((int32_T)
          (uint32_T)(-rtb_DesiredLambda_idx)) : (int32_T)(uint32_T)
          rtb_DesiredLambda_idx;
      } else {
        rtb_MultiportSwitch9 = 0;
      }

      /* S-Function (motohawk_sfun_data_write): '<S291>/motohawk_data_write9' */
      /* Write to Data Storage as scalar: Var8 */
      {
        (FF6_Var8_DataStore_FreezeFramesContainer()) = rtb_MultiportSwitch9;
      }
    }

    BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage5_Trig_ZCE =
      (uint8_T)(rtb_LogicalOperator_d[5] ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* end of Outputs for SubSystem: '<S275>/Freeze Frame Data Storage5' */

    /* S-Function Block: <S299>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s299_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_nt = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S278>/Logical Operator3' incorporates:
     *  Logic: '<S278>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S278>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S278>/motohawk_fault_status1'
     */
    rtb_LogicalOperator1_a = !(IsFaultActive(56) || IsFaultActive(57));

    /* RelationalOperator: '<S298>/RelOp' incorporates:
     *  Constant: '<S298>/Constant'
     */
    rtb_RelationalOperator_pj = (BaseEngineController_A02_B.s390_State == 3);

    /* Switch: '<S299>/Switch' incorporates:
     *  Constant: '<S299>/Constant'
     *  Logic: '<S278>/Logical Operator4'
     *  RelationalOperator: '<S278>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S278>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S299>/motohawk_delta_time'
     *  Sum: '<S299>/Sum'
     */
    if (rtb_LogicalOperator1_a && rtb_RelationalOperator_pj &&
        (BaseEngineController_A02_B.s628_Merge < (SysVolt_Low_Fault_DataStore())))
    {
      rtb_DataTypeConversion_i = rtb_motohawk_delta_time_nt +
        SysVoltLow_FaultTimer_DataStore();
    } else {
      rtb_DataTypeConversion_i = 0.0;
    }

    /* RelationalOperator: '<S278>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S278>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_b = (rtb_DataTypeConversion_i >
      (SysVolt_Low_FaultTime_DataStore()));

    /* S-Function (motohawk_sfun_fault_def): '<S278>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SysVoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(55, rtb_RelationalOperator5_b);
      UpdateFault(55);
    }

    /* Saturate: '<S299>/Saturation' */
    rtb_Saturation_dq = rt_SATURATE(rtb_DataTypeConversion_i, 0.0, 16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S299>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SysVoltLow_FaultTimer */
    {
      SysVoltLow_FaultTimer_DataStore() = rtb_Saturation_dq;
    }

    /* S-Function Block: <S302>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s302_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_id = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S279>/Logical Operator3' incorporates:
     *  Logic: '<S279>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status10'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status11'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status12'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status13'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status14'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status5'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status6'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status7'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status8'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status9'
     */
    rtb_AboveHiTarget_b = !(IsFaultActive(62) || IsFaultActive(68) ||
      IsFaultActive(63) || IsFaultActive(69) || IsFaultActive(36) ||
      IsFaultActive(37) || IsFaultActive(62) || IsFaultActive(58) ||
      IsFaultActive(59) || IsFaultActive(60) || IsFaultActive(61) ||
      IsFaultActive(64) || IsFaultActive(65) || IsFaultActive(66) ||
      IsFaultActive(67));

    /* RelationalOperator: '<S301>/RelOp' incorporates:
     *  Constant: '<S301>/Constant'
     */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s390_State == 3);

    /* RelationalOperator: '<S279>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s374_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Switch: '<S302>/Switch' incorporates:
     *  Constant: '<S302>/Constant'
     *  Logic: '<S279>/Logical Operator4'
     *  RelationalOperator: '<S279>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S302>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S302>/motohawk_delta_time'
     *  Sum: '<S302>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator1_a &&
        (BaseEngineController_A02_B.s594_Merge > (MAP_IR_HI_DataStore()))) {
      rtb_DataTypeConversion_i = rtb_motohawk_delta_time_id +
        MapHiFaultTimer_DataStore();
    } else {
      rtb_DataTypeConversion_i = 0.0;
    }

    /* RelationalOperator: '<S279>/Relational Operator5' incorporates:
     *  Constant: '<S279>/Constant'
     */
    rtb_RelationalOperator5_g = (rtb_DataTypeConversion_i > 5.0);

    /* S-Function (motohawk_sfun_fault_def): '<S279>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(40, rtb_RelationalOperator5_g);
      UpdateFault(40);
    }

    /* S-Function Block: <S303>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s303_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_kq = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S279>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration6'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s374_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Switch: '<S303>/Switch' incorporates:
     *  Constant: '<S303>/Constant'
     *  Logic: '<S279>/Logical Operator2'
     *  RelationalOperator: '<S279>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_data_read): '<S303>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S303>/motohawk_delta_time'
     *  Sum: '<S303>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator1_a &&
        (BaseEngineController_A02_B.s594_Merge < (MAP_IR_LO_DataStore()))) {
      rtb_Sum_iy = rtb_motohawk_delta_time_kq + MapLoFaultTimer_DataStore();
    } else {
      rtb_Sum_iy = 0.0;
    }

    /* RelationalOperator: '<S279>/Relational Operator6' incorporates:
     *  Constant: '<S279>/Constant1'
     */
    rtb_RelationalOperator6 = (rtb_Sum_iy > 5.0);

    /* S-Function (motohawk_sfun_fault_def): '<S279>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(41, rtb_RelationalOperator6);
      UpdateFault(41);
    }

    /* S-Function Block: <S304>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s304_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_iu = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S279>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration8'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s374_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S279>/Add' */
    rtb_UnitDelay4_bi = BaseEngineController_A02_B.s327_Sum -
      BaseEngineController_A02_B.s594_Merge;

    /* Switch: '<S304>/Switch' incorporates:
     *  Constant: '<S304>/Constant'
     *  Logic: '<S279>/Logical Operator5'
     *  RelationalOperator: '<S279>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_data_read): '<S304>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S304>/motohawk_delta_time'
     *  Sum: '<S304>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator1_a &&
        (rtb_UnitDelay4_bi < (MAP_STUCK_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_iu +
        MapStickFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* RelationalOperator: '<S279>/Relational Operator9' incorporates:
     *  Constant: '<S279>/Constant2'
     */
    rtb_RelationalOperator9_i = (rtb_motohawk_interpolation_1d3_a > 5.0);

    /* S-Function (motohawk_sfun_fault_def): '<S279>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(42, rtb_RelationalOperator9_i);
      UpdateFault(42);
    }

    /* Saturate: '<S302>/Saturation' */
    rtb_Saturation_l = rt_SATURATE(rtb_DataTypeConversion_i, 0.0, 16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S302>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapHiFaultTimer */
    {
      MapHiFaultTimer_DataStore() = rtb_Saturation_l;
    }

    /* Saturate: '<S303>/Saturation' */
    rtb_Saturation_mk = rt_SATURATE(rtb_Sum_iy, 0.0, 16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S303>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapLoFaultTimer */
    {
      MapLoFaultTimer_DataStore() = rtb_Saturation_mk;
    }

    /* Saturate: '<S304>/Saturation' */
    rtb_Saturation_e = rt_SATURATE(rtb_motohawk_interpolation_1d3_a, 0.0,
      16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S304>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapStickFaultTimer */
    {
      MapStickFaultTimer_DataStore() = rtb_Saturation_e;
    }

    /* RelationalOperator: '<S305>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration'
     */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s407_RPMInst >=
                    (BaseRevLimit_DataStore()));

    /* Sum: '<S280>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration1'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) -
      (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S305>/LT1' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s407_RPMInst <=
      rtb_motohawk_interpolation_1d3_a);

    /* CombinatorialLogic: '<S308>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_oi != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled692[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled692[rowidx + 4];
    }

    /* Switch: '<S308>/Switch1' incorporates:
     *  UnitDelay: '<S308>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_RelationalOperator6_k = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_RelationalOperator6_k =
        BaseEngineController_A02_DWork.s308_UnitDelay_DSTATE;
    }

    /* Switch: '<S305>/Switch2' incorporates:
     *  Logic: '<S305>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration'
     */
    if (!rtb_RelationalOperator6_k) {
      rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore());
    }

    /* RelationalOperator: '<S280>/Overspeed' */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s407_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S280>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (MediumRevOffset_DataStore());

    /* RelationalOperator: '<S306>/LT' */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s407_RPMInst >=
                    rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S280>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration1'
     */
    rtb_Sum_iy = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S306>/LT1' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s407_RPMInst <= rtb_Sum_iy);

    /* CombinatorialLogic: '<S309>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_oi != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled692[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled692[rowidx + 4];
    }

    /* Switch: '<S309>/Switch1' incorporates:
     *  UnitDelay: '<S309>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_Switch1_p0 = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_Switch1_p0 = BaseEngineController_A02_DWork.s309_UnitDelay_DSTATE;
    }

    /* Switch: '<S306>/Switch2' incorporates:
     *  Logic: '<S306>/Logical Operator'
     */
    if (rtb_Switch1_p0) {
      rtb_motohawk_interpolation_1d3_a = rtb_Sum_iy;
    }

    /* RelationalOperator: '<S280>/Overspeed1' */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s407_RPMInst >
                    rtb_motohawk_interpolation_1d3_a);

    /* Logic: '<S280>/Logical Operator3' incorporates:
     *  Logic: '<S280>/Logical Operator4'
     */
    rtb_LogicalOperator3_au = (rtb_LogicalOperator1_a && (!rtb_RelOp_oi));

    /* S-Function (motohawk_sfun_fault_def): '<S280>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(54, rtb_LogicalOperator3_au);
      UpdateFault(54);
    }

    /* Sum: '<S280>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (HardRevOffset_DataStore());

    /* RelationalOperator: '<S307>/LT' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s407_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S280>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration1'
     */
    rtb_Sum_iy = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S307>/LT1' */
    rtb_LogicalOperator3_fj = (BaseEngineController_A02_B.s407_RPMInst <=
      rtb_Sum_iy);

    /* CombinatorialLogic: '<S310>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_fj != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled692[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled692[rowidx + 4];
    }

    /* Switch: '<S310>/Switch1' incorporates:
     *  UnitDelay: '<S310>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_LogicalOperator10 = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_LogicalOperator10 =
        BaseEngineController_A02_DWork.s310_UnitDelay_DSTATE;
    }

    /* Switch: '<S307>/Switch2' incorporates:
     *  Logic: '<S307>/Logical Operator'
     */
    if (rtb_LogicalOperator10) {
      rtb_motohawk_interpolation_1d3_a = rtb_Sum_iy;
    }

    /* RelationalOperator: '<S280>/Overspeed2' */
    rtb_LogicalOperator3_fj = (BaseEngineController_A02_B.s407_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Logic: '<S280>/Logical Operator5' incorporates:
     *  Logic: '<S280>/Logical Operator6'
     */
    rtb_LogicalOperator5_nc = (rtb_RelOp_oi && (!rtb_LogicalOperator3_fj));

    /* S-Function (motohawk_sfun_fault_def): '<S280>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(43, rtb_LogicalOperator5_nc);
      UpdateFault(43);
    }

    /* S-Function (motohawk_sfun_fault_def): '<S280>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(26, rtb_LogicalOperator3_fj);
      UpdateFault(26);
    }

    /* S-Function Block: <S318>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s318_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_p0 = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S282>/Logical Operator3' incorporates:
     *  Logic: '<S282>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S282>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S282>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_fj = !(IsFaultActive(21) || IsFaultActive(22) ||
      rtb_Merge_gl);

    /* Sum: '<S282>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = BaseEngineController_A02_B.s371_Sum3 -
      (FuelPres_DeltaTarget_DataStore());

    /* Switch: '<S318>/Switch' incorporates:
     *  Constant: '<S318>/Constant'
     *  Gain: '<S282>/invert'
     *  Logic: '<S282>/Logical Operator4'
     *  RelationalOperator: '<S282>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S318>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S318>/motohawk_delta_time'
     *  Sum: '<S318>/Sum'
     */
    if (rtb_LogicalOperator3_fj && (rtb_motohawk_interpolation_1d3_a <
         -(FuelPres_DeltaTolerance_DataStore()))) {
      rtb_Sum_iy = rtb_motohawk_delta_time_p0 + FuelPresLow_FaultTimer_DataStore
        ();
    } else {
      rtb_Sum_iy = 0.0;
    }

    /* RelationalOperator: '<S282>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_l = (rtb_Sum_iy > (FuelPres_FaultTimer_DataStore()));

    /* S-Function (motohawk_sfun_fault_def): '<S282>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(20, rtb_RelationalOperator5_l);
      UpdateFault(20);
    }

    /* S-Function Block: <S317>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s317_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_iq = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S317>/Switch' incorporates:
     *  Constant: '<S317>/Constant'
     *  Logic: '<S282>/Logical Operator2'
     *  RelationalOperator: '<S282>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S317>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S317>/motohawk_delta_time'
     *  Sum: '<S317>/Sum'
     */
    if (rtb_LogicalOperator3_fj && (rtb_motohawk_interpolation_1d3_a >
         (FuelPres_DeltaTolerance_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_iq +
        FuelPresHigh_FaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* RelationalOperator: '<S282>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_e = (rtb_motohawk_interpolation_1d3_a >
      (FuelPres_FaultTimer_DataStore()));

    /* S-Function (motohawk_sfun_fault_def): '<S282>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(19, rtb_RelationalOperator2_e);
      UpdateFault(19);
    }

    /* Saturate: '<S317>/Saturation' */
    rtb_Saturation_lo = rt_SATURATE(rtb_motohawk_interpolation_1d3_a, 0.0,
      16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S317>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresHigh_FaultTimer */
    {
      FuelPresHigh_FaultTimer_DataStore() = rtb_Saturation_lo;
    }

    /* Saturate: '<S318>/Saturation' */
    rtb_Saturation_n = rt_SATURATE(rtb_Sum_iy, 0.0, 16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S318>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresLow_FaultTimer */
    {
      FuelPresLow_FaultTimer_DataStore() = rtb_Saturation_n;
    }

    /* Logic: '<S272>/Logical Operator3' incorporates:
     *  Logic: '<S272>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S272>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S272>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_fj = !(IsFaultActive(5) || IsFaultActive(6));

    /* RelationalOperator: '<S283>/RelOp' incorporates:
     *  Constant: '<S283>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S272>/motohawk_data_read'
     */
    rtb_RelOp_oi = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S272>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S272>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S272>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_d = (rtb_LogicalOperator3_fj && rtb_RelOp_oi &&
      (BaseEngineController_A02_B.s649_Merge >= (TempOverheat_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S272>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(4, rtb_LogicalOperator2_d);
      UpdateFault(4);
    }

    /* Logic: '<S272>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S272>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S272>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_ez = (rtb_LogicalOperator3_fj && rtb_RelOp_oi &&
      (BaseEngineController_A02_B.s649_Merge >=
       (TempOverheatSevere_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S272>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(7, rtb_LogicalOperator4_ez);
      UpdateFault(7);
    }

    /* S-Function (motohawk_sfun_calibration): '<S272>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_a = (TempOverheat_Warn_DataStore());

    /* S-Function (motohawk_sfun_data_write): '<S274>/motohawk_data_write1' */
    /* Write to Data Storage as vector: FFIDs */
    {
      {
        int_T i1;
        const uint8_T *u0 = BaseEngineController_A02_B.s284_FFIDs;
        for (i1=0; i1 < 6; i1++) {
          FFIDs_DataStore()[i1] = u0[i1];
        }
      }
    }

    /* S-Function (motohawk_sfun_data_write): '<S274>/motohawk_data_write2' */
    /* Write to Data Storage as vector: FltOrder */
    {
      {
        int_T i1;
        const uint16_T *u0 = BaseEngineController_A02_B.s284_FltOrder;
        for (i1=0; i1 < 71; i1++) {
          FltOrder_DataStore()[i1] = u0[i1];
        }
      }
    }

    /* S-Function (motohawk_sfun_data_write): '<S274>/motohawk_data_write3' */
    /* Write to Data Storage as scalar: FltOrderMax */
    {
      FltOrderMax_DataStore() = BaseEngineController_A02_B.s284_FltOrderMax;
    }

    /* S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration2' */
    rtb_motohawk_interpolation_1d3_a = (FuelEconomy_FilterC_DataStore());

    /* S-Function Block: <S293>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s293_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_interpolation_1d3_a = ((real_T) delta) * 0.000001;
    }

    /* Gain: '<S292>/Gain' */
    rtb_motohawk_interpolation_1d3_a = 0.01 *
      BaseEngineController_A02_B.s578_Merge;

    /* S-Function Block: <S297>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s297_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fr = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S277>/Logical Operator3' incorporates:
     *  Logic: '<S277>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S277>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S277>/motohawk_fault_status1'
     */
    rtb_LogicalOperator1_a = !(IsFaultActive(50) || IsFaultActive(51));

    /* RelationalOperator: '<S296>/RelOp' incorporates:
     *  Constant: '<S296>/Constant'
     */
    rtb_RelationalOperator_pj = (BaseEngineController_A02_B.s390_State == 3);

    /* S-Function Block: <S277>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_a = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_a;
    }

    /* Switch: '<S297>/Switch' incorporates:
     *  Constant: '<S297>/Constant'
     *  Logic: '<S277>/Logical Operator4'
     *  RelationalOperator: '<S277>/Relational Operator2'
     *  S-Function (motohawk_sfun_data_read): '<S297>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S297>/motohawk_delta_time'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S277>/motohawk_interpolation_1d'
     *  Sum: '<S297>/Sum'
     */
    if (rtb_LogicalOperator1_a && rtb_RelationalOperator_pj &&
        (BaseEngineController_A02_B.s612_Merge < rtb_motohawk_interpolation_1d_a))
    {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_fr +
        OilPresFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* RelationalOperator: '<S277>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S277>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_ch = (rtb_motohawk_interpolation_1d3_a >
      (NoOilPres_FaultTime_DataStore()));

    /* S-Function (motohawk_sfun_fault_def): '<S277>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(44, rtb_RelationalOperator5_ch);
      UpdateFault(44);
    }

    /* Saturate: '<S297>/Saturation' */
    rtb_Saturation_eu = rt_SATURATE(rtb_motohawk_interpolation_1d3_a, 0.0,
      16000.0);

    /* S-Function (motohawk_sfun_data_write): '<S297>/motohawk_data_write' */
    /* Write to Data Storage as scalar: OilPresFaultTimer */
    {
      OilPresFaultTimer_DataStore() = rtb_Saturation_eu;
    }

    /* S-Function Block: <S277>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_a = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s361_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_a;
    }

    /* Outputs for iterator SubSystem: '<S8>/Fault Codes and States' incorporates:
     *  Constant: '<S8>/Constant'
     *  WhileIterator: '<S273>/While Iterator'
     */
    rtb_Add_a = 1;

    /* InitializeConditions for S-Function (motohawk_sfun_prev_fault_T): '<S273>/motohawk_prev_fault_T' */
    /* Initialize previous fault_T */
    {
      extern uint32_T NullFault(void);
      BaseEngineController_A02_DWork.s273_motohawk_prev_fault_T_DWORK1 =
        NullFault();
    }

    rtb_LogicalOperator1_a = TRUE;
    while (rtb_LogicalOperator1_a) {
      /* S-Function (motohawk_sfun_prev_fault_T): '<S273>/motohawk_prev_fault_T' */
      rtb_motohawk_prev_fault_T =
        BaseEngineController_A02_DWork.s273_motohawk_prev_fault_T_DWORK1;

      /* S-Function (motohawk_sfun_fault_iterator): '<S273>/motohawk_fault_iterator' */
      /* Get Next Fault */
      {
        extern boolean_T IsFaultValid(uint32_T fault);
        extern uint32_T GetNextFault(uint32_T fault, boolean_T loop);
        BaseEngineController_A02_B.s273_motohawk_fault_iterator_o2 =
          GetNextFault((uint32_T) (rtb_motohawk_prev_fault_T), 0);
        rtb_motohawk_fault_iterator_o1 = IsFaultValid
          (BaseEngineController_A02_B.s273_motohawk_fault_iterator_o2);
      }

      /* S-Function (motohawk_sfun_fault_properties): '<S273>/motohawk_fault_properties' */
      /* Get Fault Properties by fault_T reference */
      {
        uint32_T id;
        uint8_T mode;
        uint32_T xlim;
        uint32_T ylim;
        uint32_T x;
        uint32_T y;
        extern boolean_T GetFaultProperties(uint32_T fault,
          uint32_T *out_id, uint8_T *out_mode,
          uint32_T *out_xlim, uint32_T *out_ylim,
          uint32_T *out_x, uint32_T *out_y);
        GetFaultProperties
          (BaseEngineController_A02_B.s273_motohawk_fault_iterator_o2, &id,
           &mode, &xlim, &ylim, &x, &y);
        rtb_motohawk_fault_properties = id;
      }

      /* DataTypeConversion: '<S273>/Data Type Conversion1' */
      if (rtb_motohawk_fault_properties > 65535U) {
        rtb_DataTypeConversion1_l = MAX_uint16_T;
      } else {
        rtb_DataTypeConversion1_l = (uint16_T)rtb_motohawk_fault_properties;
      }

      /* DataTypeConversion: '<S273>/Data Type Conversion' */
      rtb_DataTypeConversion_i = (real_T)rtb_Add_a;

      /* Sum: '<S273>/Add' incorporates:
       *  Constant: '<S273>/Constant'
       */
      rtb_Add_h = rtb_DataTypeConversion_i - 1.0;

      /* S-Function (motohawk_sfun_data_write): '<S273>/motohawk_data_write' */
      /* Write to Data Storage as vector: FltCodes */
      {
        FltCodes_DataStore()[(uint32_T)(rtb_Add_h)] = rtb_DataTypeConversion1_l;
      }

      /* S-Function (motohawk_sfun_data_write): '<S273>/motohawk_data_write1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S273>/motohawk_fault_status'
       *
       * Regarding '<S273>/motohawk_fault_status':
         Status : "Active"
       */
      /* Write to Data Storage as vector: FltActvStatus */
      {
        FltActvStatus_DataStore()[(uint32_T)(rtb_Add_h)] = IsFaultActive
          (BaseEngineController_A02_B.s273_motohawk_fault_iterator_o2);
      }

      /* RelationalOperator: '<S273>/Relational Operator' incorporates:
       *  Constant: '<S273>/Constant1'
       */
      rtb_LogicalOperator1_a = (rtb_DataTypeConversion_i < 71.0);

      /* Update for S-Function (motohawk_sfun_prev_fault_T): '<S273>/motohawk_prev_fault_T' */
      BaseEngineController_A02_DWork.s273_motohawk_prev_fault_T_DWORK1 =
        BaseEngineController_A02_B.s273_motohawk_fault_iterator_o2;
      rtb_Add_a++;
    }

    /* end of Outputs for SubSystem: '<S8>/Fault Codes and States' */

    /* Update for UnitDelay: '<S274>/Initialized at 1' */
    BaseEngineController_A02_DWork.s274_Initializedat1_DSTATE = 0.0;

    /* Update for UnitDelay: '<S274>/Unit Delay2' */
    memcpy((void *)(&BaseEngineController_A02_DWork.s274_UnitDelay2_DSTATE[0]),
           (void *)&rtb_ActiveFaultArray[0], 71U * sizeof(boolean_T));

    /* Update for UnitDelay: '<S308>/Unit Delay' */
    BaseEngineController_A02_DWork.s308_UnitDelay_DSTATE =
      rtb_RelationalOperator6_k;

    /* Update for UnitDelay: '<S309>/Unit Delay' */
    BaseEngineController_A02_DWork.s309_UnitDelay_DSTATE = rtb_Switch1_p0;

    /* Update for UnitDelay: '<S310>/Unit Delay' */
    BaseEngineController_A02_DWork.s310_UnitDelay_DSTATE = rtb_LogicalOperator10;
  } else {
    if ((int32_T)BaseEngineController_A02_DWork.s403_TriggeredSubsystem_MODE) {
      /* Disable for S-Function (fcncallgen): '<S404>/Function-Call Generator' incorporates:
       *  Disable for SubSystem: '<S3>/Diagnostics'
       */
      BaseEngineController_A02_DWork.s403_TriggeredSubsystem_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S403>/Triggered Subsystem' */

  /* UnitDelay: '<S339>/Unit Delay1' */
  rtb_DesiredLambda_idx_0 =
    BaseEngineController_A02_DWork.s339_UnitDelay1_DSTATE;

  /* UnitDelay: '<S339>/Unit Delay3' */
  rtb_UnitDelay3_a = BaseEngineController_A02_DWork.s339_UnitDelay3_DSTATE;

  /* UnitDelay: '<S339>/Unit Delay4' */
  rtb_UnitDelay4_b = BaseEngineController_A02_DWork.s339_UnitDelay4_DSTATE;

  /* UnitDelay: '<S340>/Unit Delay1' */
  rtb_UnitDelay1_l = BaseEngineController_A02_DWork.s340_UnitDelay1_DSTATE;

  /* UnitDelay: '<S340>/Unit Delay3' */
  rtb_UnitDelay3_h = BaseEngineController_A02_DWork.s340_UnitDelay3_DSTATE;

  /* UnitDelay: '<S340>/Unit Delay4' */
  rtb_UnitDelay4_g = BaseEngineController_A02_DWork.s340_UnitDelay4_DSTATE;

  /* S-Function Block: <S351>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s351_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_bh = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S351>/Sum' incorporates:
   *  Product: '<S351>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S351>/motohawk_delta_time'
   */
  rtb_Sum_ic = BaseEngineController_A02_B.s348_TorquetoPower *
    rtb_motohawk_delta_time_bh + BaseEngineController_A02_B.s351_Switch1;

  /* MinMax: '<S353>/MinMax' incorporates:
   *  Constant: '<S348>/Constant'
   */
  rtb_Sum_ic = rt_MAXd_snf(rtb_Sum_ic, 0.0);

  /* MinMax: '<S353>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S348>/motohawk_calibration'
   */
  min = rt_MINd_snf(rtb_Sum_ic, (IndWorkMax_DataStore()));

  /* S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read' */
  BaseEngineController_A02_B.s364_motohawk_data_read = EngineState_DataStore();

  /* UnitDelay: '<S364>/Unit Delay' */
  BaseEngineController_A02_B.s364_UnitDelay =
    BaseEngineController_A02_DWork.s364_UnitDelay_DSTATE;

  /* Stateflow: '<S364>/Crank APP Lockout' */
  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/APP Sensor Management/Crank APP Lockout */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/APP Sensor Management/Crank APP Lockout */
  switch (BaseEngineController_A02_DWork.s378_is_c10_BaseEngineController_A02) {
   case BaseEngineController_A02_IN_OverrideAPP:
    /* During 'OverrideAPP': '<S378>:2' */
    if (BaseEngineController_A02_B.s666_Merge <= 3.0) {
      /* Transition: '<S378>:5' */
      /* Exit 'OverrideAPP': '<S378>:2' */
      /* Entry 'PassThrough': '<S378>:1' */
      BaseEngineController_A02_DWork.s378_is_c10_BaseEngineController_A02 =
        BaseEngineController_A02_IN_PassThrough_j;
      BaseEngineController_A02_B.s378_APP_Mode = FALSE;
    }
    break;

   case BaseEngineController_A02_IN_PassThrough_j:
    /* During 'PassThrough': '<S378>:1' */
    if ((BaseEngineController_A02_B.s364_motohawk_data_read == 3) &&
        (BaseEngineController_A02_B.s364_UnitDelay == 2) &&
        (BaseEngineController_A02_B.s666_Merge > 3.0)) {
      /* Transition: '<S378>:4' */
      /* Exit 'PassThrough': '<S378>:1' */
      /* Entry 'OverrideAPP': '<S378>:2' */
      BaseEngineController_A02_DWork.s378_is_c10_BaseEngineController_A02 =
        BaseEngineController_A02_IN_OverrideAPP;
      BaseEngineController_A02_B.s378_APP_Out = 0.0;
      BaseEngineController_A02_B.s378_APP_Mode = TRUE;
    } else {
      BaseEngineController_A02_B.s378_APP_Out =
        BaseEngineController_A02_B.s666_Merge;
    }
    break;

   default:
    /* Transition: '<S378>:3' */
    /* Entry 'PassThrough': '<S378>:1' */
    BaseEngineController_A02_DWork.s378_is_c10_BaseEngineController_A02 =
      BaseEngineController_A02_IN_PassThrough_j;
    BaseEngineController_A02_B.s378_APP_Mode = FALSE;
    break;
  }

  /* S-Function (motohawk_sfun_data_write): '<S370>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_A02_B.s390_State;
  }

  /* Sum: '<S374>/Sum' */
  rtb_Sum_ic = BaseEngineController_A02_B.s681_Merge -
    BaseEngineController_A02_B.s698_Merge;

  /* Abs: '<S374>/Abs' */
  rtb_DataTypeConversion_i = fabs(rtb_Sum_ic);

  /* RelationalOperator: '<S374>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S374>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_o = (rtb_DataTypeConversion_i >
    (TPS1_TPS2_Max_Deviation_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S374>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(70, rtb_RelationalOperator3_o);
    UpdateFault(70);
  }

  /* Saturate: '<S393>/Saturation' */
  rtb_Saturation_dt = rt_SATURATE(BaseEngineController_A02_B.s393_Sum, 0.0,
    16000.0);

  /* S-Function (motohawk_sfun_data_write): '<S393>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_dt;
  }

  /* Saturate: '<S395>/Saturation' */
  rtb_Saturation_o = rt_SATURATE(BaseEngineController_A02_B.s395_Switch, 0.0,
    16000.0);

  /* S-Function (motohawk_sfun_data_write): '<S395>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_o;
  }

  /* Saturate: '<S397>/Saturation' */
  rtb_Saturation_ot = rt_SATURATE(BaseEngineController_A02_B.s397_Switch, 0.0,
    16000.0);

  /* S-Function (motohawk_sfun_data_write): '<S397>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_ot;
  }

  /* Switch: '<S403>/Switch' incorporates:
   *  Constant: '<S403>/Constant2'
   */
  if (rtb_RelOp_g) {
    qY = 0U;
  } else {
    qY = rtb_Sum_l0;
  }

  /* UnitDelay: '<S417>/Unit Delay' */
  BaseEngineController_A02_B.s417_UnitDelay =
    BaseEngineController_A02_DWork.s417_UnitDelay_DSTATE;

  /* Logic: '<S411>/Logical Operator1' incorporates:
   *  Logic: '<S411>/Logical Operator'
   *  RelationalOperator: '<S413>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S413>/motohawk_calibration'
   */
  rtb_LogicalOperator1_c3 = (BaseEngineController_A02_B.s417_UnitDelay <
    (ONTime_DataStore())) ^ !(rtb_Merge_p != 0.0);

  /* S-Function (motohawk_sfun_data_write): '<S411>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ESTOP */
  {
    ESTOP_DataStore() = rtb_LogicalOperator1_c3;
  }

  /* S-Function Block: <S417>/motohawk_delta_time */
  rtb_motohawk_delta_time_ae = 0.005;

  /* Sum: '<S417>/Sum' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S417>/motohawk_delta_time'
   */
  rtb_UnitDelay2_a5 = rtb_motohawk_delta_time_ae +
    BaseEngineController_A02_B.s417_UnitDelay;

  /* Logic: '<S535>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S535>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S535>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S535>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_m = (MPRD_DataStore() &&
    (BaseEngineController_A02_B.s406_Gain > (MAFMax_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S535>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(34, rtb_LogicalOperator2_m);
    UpdateFault(34);
  }

  /* Logic: '<S535>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S535>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S535>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S535>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_h = (MPRD_DataStore() &&
    (BaseEngineController_A02_B.s406_Gain < (MAFMin_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S535>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(35, rtb_LogicalOperator3_h);
    UpdateFault(35);
  }

  /* RelationalOperator: '<S407>/Relational Operator' incorporates:
   *  Constant: '<S407>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S407>/motohawk_calibration'
   */
  rtb_RelationalOperator_mm = (0 != ((uint16_T)(PseudoRPM_DataStore())));

  /* S-Function Block: <S407>/motohawk_encoder_pseudo */
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

  /* DataTypeConversion: '<S407>/Data Type Conversion3' incorporates:
   *  Gain: '<S407>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S407>/motohawk_calibration1'
   */
  rtb_DesiredLambda_idx = 16.0 * (EngineToEncoderOffset_DataStore());
  if (rtIsNaN(rtb_DesiredLambda_idx) || rtIsInf(rtb_DesiredLambda_idx)) {
    rtb_DesiredLambda_idx = 0.0;
  } else {
    rtb_DesiredLambda_idx = fmod(rtb_DesiredLambda_idx >= 0.0 ? floor
      (rtb_DesiredLambda_idx) : ceil(rtb_DesiredLambda_idx), 65536.0);
  }

  rtb_DataTypeConversion3_p = (int16_T)(rtb_DesiredLambda_idx < 0.0 ? (int32_T)
    (int16_T)(-((int16_T)(uint16_T)(-rtb_DesiredLambda_idx))) : (int32_T)
    (int16_T)(uint16_T)rtb_DesiredLambda_idx);

  /* S-Function Block: <S407>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_p;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S552>/RelOp' incorporates:
   *  Constant: '<S552>/Constant'
   */
  rtb_RelationalOperator5_p = (BaseEngineController_A02_B.s555_Sum > 100U);

  /* S-Function Block: <S407>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_A02_B.s407_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S548>/Logical Operator' incorporates:
   *  Constant: '<S554>/Constant'
   *  RelationalOperator: '<S554>/RelOp'
   */
  rtb_LogicalOperator_kt = (rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s407_motohawk_encoder_fault == 1));

  /* S-Function (motohawk_sfun_fault_def): '<S548>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator_kt);
    UpdateFault(3);
  }

  /* Logic: '<S548>/Logical Operator1' incorporates:
   *  Constant: '<S553>/Constant'
   *  RelationalOperator: '<S553>/RelOp'
   */
  rtb_LogicalOperator1_hh = (rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s407_motohawk_encoder_fault == 3));

  /* S-Function (motohawk_sfun_fault_def): '<S548>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator1_hh);
    UpdateFault(2);
  }

  /* Logic: '<S548>/Logical Operator2' incorporates:
   *  Constant: '<S550>/Constant'
   *  RelationalOperator: '<S550>/RelOp'
   */
  rtb_LogicalOperator2_nh = (rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s407_motohawk_encoder_fault == 4));

  /* S-Function (motohawk_sfun_fault_def): '<S548>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(0, rtb_LogicalOperator2_nh);
    UpdateFault(0);
  }

  /* Logic: '<S548>/Logical Operator3' incorporates:
   *  Constant: '<S551>/Constant'
   *  RelationalOperator: '<S551>/RelOp'
   */
  rtb_LogicalOperator3_ho = (rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s407_motohawk_encoder_fault == 5));

  /* S-Function (motohawk_sfun_fault_def): '<S548>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(1, rtb_LogicalOperator3_ho);
    UpdateFault(1);
  }

  /* S-Function Block: <S407>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_A02_B.s407_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S557>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S557>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S557>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S557>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_is = (MPRD_DataStore() && (rtb_DataTypeConversion_e >
    (EGRSenseInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S557>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: EGRSenseRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_LogicalOperator2_is);
    UpdateFault(8);
  }

  /* Logic: '<S557>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S557>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S557>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S557>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_o = (MPRD_DataStore() && (rtb_DataTypeConversion_e <
    (EGRSenseInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S557>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: EGRSenseRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_LogicalOperator3_o);
    UpdateFault(9);
  }

  /* Logic: '<S558>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S558>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S558>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_mq = (MPRD_DataStore() &&
    (BaseEngineController_A02_B.s408_Gain > (FuelSensInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S558>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_LogicalOperator2_mq);
    UpdateFault(23);
  }

  /* Logic: '<S558>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S558>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S558>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_a5 = (MPRD_DataStore() &&
    (BaseEngineController_A02_B.s408_Gain < (FuelSensInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S558>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_LogicalOperator3_a5);
    UpdateFault(24);
  }

  /* Logic: '<S559>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S559>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S559>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_it = (MPRD_DataStore() && (rtb_Sum2_as >
    (FuelPresInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S559>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_LogicalOperator2_it);
    UpdateFault(21);
  }

  /* Logic: '<S559>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S559>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S559>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_fk = (MPRD_DataStore() && (rtb_Sum2_as <
    (FuelPresInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S559>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_LogicalOperator3_fk);
    UpdateFault(22);
  }

  /* Logic: '<S560>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S560>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S560>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ir = (MPRD_DataStore() &&
    (BaseEngineController_A02_B.s562_Merge > (MAPInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S560>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(36, rtb_LogicalOperator2_ir);
    UpdateFault(36);
  }

  /* Logic: '<S560>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S560>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S560>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_k = (MPRD_DataStore() &&
    (BaseEngineController_A02_B.s562_Merge < (MAPInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S560>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(37, rtb_LogicalOperator3_k);
    UpdateFault(37);
  }

  /* Logic: '<S561>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S561>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S561>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_bq = (MPRD_DataStore() && (rtb_DataTypeConversion_ff >
    (MAPTimeInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S561>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(38, rtb_LogicalOperator2_bq);
    UpdateFault(38);
  }

  /* Logic: '<S561>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S561>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S561>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_p = (MPRD_DataStore() && (rtb_DataTypeConversion_ff <
    (MAPTimeInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S561>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(39, rtb_LogicalOperator3_p);
    UpdateFault(39);
  }

  /* Logic: '<S563>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S563>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S563>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_a = (MPRD_DataStore() && (rtb_DataTypeConversion_f5g >
    (OilPresInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S563>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(50, rtb_LogicalOperator2_a);
    UpdateFault(50);
  }

  /* Logic: '<S563>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S563>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S563>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_c = (MPRD_DataStore() && (rtb_DataTypeConversion_f5g <
    (OilPresInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S563>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(51, rtb_LogicalOperator3_c);
    UpdateFault(51);
  }

  /* Logic: '<S564>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S564>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S564>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p = (MPRD_DataStore() && (rtb_Sum2_ob >
    (SensVoltInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S564>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(52, rtb_LogicalOperator2_p);
    UpdateFault(52);
  }

  /* Logic: '<S564>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S564>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S564>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_g = (MPRD_DataStore() && (rtb_Sum2_ob <
    (SensVoltInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S564>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(53, rtb_LogicalOperator3_g);
    UpdateFault(53);
  }

  /* Logic: '<S565>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S565>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S565>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S565>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_n1 = (MPRD_DataStore() && (rtb_DataTypeConversion_kk >
    (SysVoltInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S565>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(56, rtb_LogicalOperator2_n1);
    UpdateFault(56);
  }

  /* Logic: '<S565>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S565>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S565>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S565>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_i = (MPRD_DataStore() && (rtb_DataTypeConversion_kk <
    (SysVoltInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S565>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(57, rtb_LogicalOperator3_i);
    UpdateFault(57);
  }

  /* Logic: '<S632>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S632>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S632>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p0 = (MPRD_DataStore() && (rtb_DataTypeConversion_m >
    (O2_PostCatMax_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S632>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: O2_PostCatRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(48, rtb_LogicalOperator2_p0);
    UpdateFault(48);
  }

  /* Logic: '<S632>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S632>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S632>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_pg = (MPRD_DataStore() && (rtb_DataTypeConversion_m <
    (O2_PostCatMin_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S632>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: O2_PostCatRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(49, rtb_LogicalOperator3_pg);
    UpdateFault(49);
  }

  /* RelationalOperator: '<S668>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S668>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_i = (BaseEngineController_A02_B.s663_Switch >
    (TPS1InputHiFltPos_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S668>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_RelationalOperator5_i);
    UpdateFault(62);
  }

  /* RelationalOperator: '<S668>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S668>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_o = (BaseEngineController_A02_B.s663_Switch <
    (TPS1InputLoFltPos_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S668>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_RelationalOperator4_o);
    UpdateFault(63);
  }

  /* RelationalOperator: '<S668>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration9'
   */
  rtb_RelationalOperator_f = (BaseEngineController_A02_B.s667_MinMax >
    (TPS1Adapt_Low_Max_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S668>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS1AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_RelationalOperator_f);
    UpdateFault(60);
  }

  /* RelationalOperator: '<S668>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_f1 = (BaseEngineController_A02_B.s667_MinMax1 >
    (TPS1Adapt_Hi_Max_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S668>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(58, rtb_RelationalOperator3_f1);
    UpdateFault(58);
  }

  /* RelationalOperator: '<S668>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_b = (BaseEngineController_A02_B.s667_MinMax1 <
    (TPS1Adapt_Hi_Min_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S668>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(59, rtb_RelationalOperator2_b);
    UpdateFault(59);
  }

  /* RelationalOperator: '<S668>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_kg = (BaseEngineController_A02_B.s667_MinMax <
    (TPS1Adapt_Low_Min_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S668>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS1AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_RelationalOperator1_kg);
    UpdateFault(61);
  }

  /* UnitDelay: '<S674>/Unit Delay1' */
  rtb_Sum2_ob = BaseEngineController_A02_DWork.s674_UnitDelay1_DSTATE;

  /* UnitDelay: '<S674>/Unit Delay' */
  rtb_Product4_l = BaseEngineController_A02_DWork.s674_UnitDelay_DSTATE;

  /* UnitDelay: '<S674>/Unit Delay3' */
  rtb_Merge_b0d = BaseEngineController_A02_DWork.s674_UnitDelay3_DSTATE;

  /* UnitDelay: '<S674>/Unit Delay4' */
  rtb_Merge_p = BaseEngineController_A02_DWork.s674_UnitDelay4_DSTATE;

  /* MinMax: '<S674>/MinMax1' */
  rtb_DataTypeConversion_i = rt_MINd_snf
    (BaseEngineController_A02_DWork.s674_UnitDelay1_DSTATE,
     BaseEngineController_A02_DWork.s674_UnitDelay_DSTATE);
  rtb_DataTypeConversion_i = rt_MINd_snf(rtb_DataTypeConversion_i,
    BaseEngineController_A02_DWork.s674_UnitDelay3_DSTATE);
  rtb_DataTypeConversion_i = rt_MINd_snf(rtb_DataTypeConversion_i,
    BaseEngineController_A02_DWork.s674_UnitDelay4_DSTATE);
  rtb_DataTypeConversion_i = rt_MINd_snf(rtb_DataTypeConversion_i,
    BaseEngineController_A02_B.s663_Switch);

  /* RelationalOperator: '<S672>/Relational Operator9' */
  rtb_LogicalOperator1_a = (rtb_DataTypeConversion_i >
    BaseEngineController_A02_B.s667_MinMax1);

  /* RelationalOperator: '<S672>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_p = (rtb_DataTypeConversion_i <=
    (TPS1Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S672>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_k = (rtb_DataTypeConversion_i >=
    (TPS1Adapt_Hi_Min_DataStore()));

  /* Sum: '<S672>/Sum2' */
  rtb_Sum2_as = rtb_DataTypeConversion_i -
    BaseEngineController_A02_B.s667_MinMax1;

  /* Abs: '<S672>/Abs' */
  rtb_Sum_iy = fabs(rtb_Sum2_as);

  /* Outputs for enable SubSystem: '<S672>/Store Current Position' incorporates:
   *  Constant: '<S410>/Constant4'
   *  EnablePort: '<S675>/Enable'
   *  Logic: '<S672>/Logical Operator1'
   *  Logic: '<S672>/Logical Operator2'
   *  Logic: '<S672>/Logical Operator4'
   *  RelationalOperator: '<S672>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S667>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S667>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
      rtb_RelationalOperator6_k && (TPS1AdaptHiEnable_DataStore()) &&
      (rtb_Sum_iy > (TPS1Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S675>/Data Type Conversion2' */
    if (rtb_DataTypeConversion_i < 65536.0) {
      if (rtb_DataTypeConversion_i >= 0.0) {
        rtb_DataTypeConversion2_mp = (uint16_T)rtb_DataTypeConversion_i;
      } else {
        rtb_DataTypeConversion2_mp = 0U;
      }
    } else {
      rtb_DataTypeConversion2_mp = MAX_uint16_T;
    }

    /* S-Function (motohawk_sfun_data_write): '<S675>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Hi */
    {
      TPS1Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_mp;
    }
  }

  /* end of Outputs for SubSystem: '<S672>/Store Current Position' */

  /* MinMax: '<S674>/MinMax' */
  rtb_DataTypeConversion_i = rt_MAXd_snf(BaseEngineController_A02_B.s663_Switch,
    rtb_Merge_p);
  rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i, rtb_Merge_b0d);
  rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i,
    rtb_Product4_l);
  rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i, rtb_Sum2_ob);

  /* RelationalOperator: '<S673>/Relational Operator9' */
  rtb_LogicalOperator1_a = (rtb_DataTypeConversion_i <
    BaseEngineController_A02_B.s667_MinMax);

  /* RelationalOperator: '<S673>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_p = (rtb_DataTypeConversion_i <=
    (TPS1Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S673>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_k = (rtb_DataTypeConversion_i >=
    (TPS1Adapt_Low_Min_DataStore()));

  /* Sum: '<S673>/Sum2' */
  rtb_Sum2_ob = rtb_DataTypeConversion_i -
    BaseEngineController_A02_B.s667_MinMax;

  /* Logic: '<S673>/Logical Operator1' incorporates:
   *  Abs: '<S673>/Abs'
   *  RelationalOperator: '<S673>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S667>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S667>/motohawk_calibration14'
   */
  rtb_LogicalOperator1_a = (rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
    rtb_RelationalOperator6_k && (TPS1AdaptLoEnable_DataStore()) && (fabs
    (rtb_Sum2_ob) > (TPS1Adapt_Delta_DataStore())));

  /* Outputs for enable SubSystem: '<S673>/Store Current Position' incorporates:
   *  EnablePort: '<S676>/Enable'
   *  Logic: '<S673>/Logical Operator2'
   *  Logic: '<S673>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S667>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S410>/motohawk_data_read'
   */
  if (rtb_LogicalOperator1_a || (rtb_RelationalOperator5_p &&
       rtb_RelationalOperator6_k && (TPS1AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S676>/Data Type Conversion2' */
    if (rtb_DataTypeConversion_i < 65536.0) {
      if (rtb_DataTypeConversion_i >= 0.0) {
        rtb_DataTypeConversion2_lz = (uint16_T)rtb_DataTypeConversion_i;
      } else {
        rtb_DataTypeConversion2_lz = 0U;
      }
    } else {
      rtb_DataTypeConversion2_lz = MAX_uint16_T;
    }

    /* S-Function (motohawk_sfun_data_write): '<S676>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Low */
    {
      TPS1Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_lz;
    }
  }

  /* end of Outputs for SubSystem: '<S673>/Store Current Position' */

  /* RelationalOperator: '<S685>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S685>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_c = (BaseEngineController_A02_B.s664_Switch >
    (TPS2InputHiFltPos_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S685>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(68, rtb_RelationalOperator5_c);
    UpdateFault(68);
  }

  /* RelationalOperator: '<S685>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S685>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_f = (BaseEngineController_A02_B.s664_Switch <
    (TPS2InputLoFltPos_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S685>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(69, rtb_RelationalOperator4_f);
    UpdateFault(69);
  }

  /* RelationalOperator: '<S685>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration9'
   */
  rtb_RelationalOperator_a1 = (BaseEngineController_A02_B.s684_MinMax >
    (TPS2Adapt_Low_Max_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S685>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS2AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(66, rtb_RelationalOperator_a1);
    UpdateFault(66);
  }

  /* RelationalOperator: '<S685>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_bm = (BaseEngineController_A02_B.s684_MinMax1 >
    (TPS2Adapt_Hi_Max_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S685>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(64, rtb_RelationalOperator3_bm);
    UpdateFault(64);
  }

  /* RelationalOperator: '<S685>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_ly = (BaseEngineController_A02_B.s684_MinMax1 <
    (TPS2Adapt_Hi_Min_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S685>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(65, rtb_RelationalOperator2_ly);
    UpdateFault(65);
  }

  /* RelationalOperator: '<S685>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_i = (BaseEngineController_A02_B.s684_MinMax <
    (TPS2Adapt_Low_Min_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S685>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS2AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(67, rtb_RelationalOperator1_i);
    UpdateFault(67);
  }

  /* UnitDelay: '<S691>/Unit Delay1' */
  rtb_Sum2_ob = BaseEngineController_A02_DWork.s691_UnitDelay1_DSTATE;

  /* UnitDelay: '<S691>/Unit Delay' */
  rtb_UnitDelay4_bi = BaseEngineController_A02_DWork.s691_UnitDelay_DSTATE;

  /* UnitDelay: '<S691>/Unit Delay3' */
  rtb_Sum1_gje = BaseEngineController_A02_DWork.s691_UnitDelay3_DSTATE;

  /* UnitDelay: '<S691>/Unit Delay4' */
  min_0 = BaseEngineController_A02_DWork.s691_UnitDelay4_DSTATE;

  /* MinMax: '<S691>/MinMax1' */
  rtb_DataTypeConversion_i = rt_MINd_snf
    (BaseEngineController_A02_DWork.s691_UnitDelay1_DSTATE,
     BaseEngineController_A02_DWork.s691_UnitDelay_DSTATE);
  rtb_DataTypeConversion_i = rt_MINd_snf(rtb_DataTypeConversion_i,
    BaseEngineController_A02_DWork.s691_UnitDelay3_DSTATE);
  rtb_DataTypeConversion_i = rt_MINd_snf(rtb_DataTypeConversion_i,
    BaseEngineController_A02_DWork.s691_UnitDelay4_DSTATE);
  rtb_DataTypeConversion_i = rt_MINd_snf(rtb_DataTypeConversion_i,
    BaseEngineController_A02_B.s664_Switch);

  /* RelationalOperator: '<S689>/Relational Operator9' */
  rtb_LogicalOperator1_a = (rtb_DataTypeConversion_i >
    BaseEngineController_A02_B.s684_MinMax1);

  /* RelationalOperator: '<S689>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_p = (rtb_DataTypeConversion_i <=
    (TPS2Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S689>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_k = (rtb_DataTypeConversion_i >=
    (TPS2Adapt_Hi_Min_DataStore()));

  /* Sum: '<S689>/Sum2' */
  rtb_Sum2_as = rtb_DataTypeConversion_i -
    BaseEngineController_A02_B.s684_MinMax1;

  /* Abs: '<S689>/Abs' */
  rtb_Sum_iy = fabs(rtb_Sum2_as);

  /* Outputs for enable SubSystem: '<S689>/Store Current Position' incorporates:
   *  Constant: '<S410>/Constant5'
   *  EnablePort: '<S692>/Enable'
   *  Logic: '<S689>/Logical Operator1'
   *  Logic: '<S689>/Logical Operator2'
   *  Logic: '<S689>/Logical Operator4'
   *  RelationalOperator: '<S689>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S684>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S684>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
      rtb_RelationalOperator6_k && (TPS2AdaptHiEnable_DataStore()) &&
      (rtb_Sum_iy > (TPS2Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S692>/Data Type Conversion2' */
    if (rtb_DataTypeConversion_i < 65536.0) {
      if (rtb_DataTypeConversion_i >= 0.0) {
        rtb_DataTypeConversion2_h = (uint16_T)rtb_DataTypeConversion_i;
      } else {
        rtb_DataTypeConversion2_h = 0U;
      }
    } else {
      rtb_DataTypeConversion2_h = MAX_uint16_T;
    }

    /* S-Function (motohawk_sfun_data_write): '<S692>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Hi */
    {
      TPS2Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_h;
    }
  }

  /* end of Outputs for SubSystem: '<S689>/Store Current Position' */

  /* MinMax: '<S691>/MinMax' */
  rtb_DataTypeConversion_i = rt_MAXd_snf(BaseEngineController_A02_B.s664_Switch,
    min_0);
  rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i, rtb_Sum1_gje);
  rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i,
    rtb_UnitDelay4_bi);
  rtb_DataTypeConversion_i = rt_MAXd_snf(rtb_DataTypeConversion_i, rtb_Sum2_ob);

  /* RelationalOperator: '<S690>/Relational Operator9' */
  rtb_LogicalOperator1_a = (rtb_DataTypeConversion_i <
    BaseEngineController_A02_B.s684_MinMax);

  /* RelationalOperator: '<S690>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_p = (rtb_DataTypeConversion_i <=
    (TPS2Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S690>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_k = (rtb_DataTypeConversion_i >=
    (TPS2Adapt_Low_Min_DataStore()));

  /* Sum: '<S690>/Sum2' */
  rtb_Sum2_ob = rtb_DataTypeConversion_i -
    BaseEngineController_A02_B.s684_MinMax;

  /* Outputs for enable SubSystem: '<S690>/Store Current Position' incorporates:
   *  Abs: '<S690>/Abs'
   *  EnablePort: '<S693>/Enable'
   *  Logic: '<S690>/Logical Operator1'
   *  Logic: '<S690>/Logical Operator2'
   *  Logic: '<S690>/Logical Operator4'
   *  RelationalOperator: '<S690>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S684>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S684>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_data_read): '<S410>/motohawk_data_read'
   */
  if ((rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
       rtb_RelationalOperator6_k && (TPS2AdaptLoEnable_DataStore()) && (fabs
        (rtb_Sum2_ob) > (TPS2Adapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_p && rtb_RelationalOperator6_k &&
       (TPS2AdaptLoEnable_DataStore()) && TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S693>/Data Type Conversion2' */
    if (rtb_DataTypeConversion_i < 65536.0) {
      if (rtb_DataTypeConversion_i >= 0.0) {
        rtb_DataTypeConversion2_n = (uint16_T)rtb_DataTypeConversion_i;
      } else {
        rtb_DataTypeConversion2_n = 0U;
      }
    } else {
      rtb_DataTypeConversion2_n = MAX_uint16_T;
    }

    /* S-Function (motohawk_sfun_data_write): '<S693>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Low */
    {
      TPS2Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_n;
    }
  }

  /* end of Outputs for SubSystem: '<S690>/Store Current Position' */

  /* Update for UnitDelay: '<S556>/Unit Delay' */
  BaseEngineController_A02_DWork.s556_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s556_Sum1;

  /* Update for UnitDelay: '<S563>/Unit Delay1' */
  BaseEngineController_A02_DWork.s563_UnitDelay1_DSTATE = rtb_Merge_bw;

  /* Update for UnitDelay: '<S613>/Unit Delay' */
  BaseEngineController_A02_DWork.s613_UnitDelay_DSTATE = rtb_Sum1_i;

  /* Update for UnitDelay: '<S370>/Unit Delay' */
  BaseEngineController_A02_DWork.s370_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s390_State;

  /* Update for UnitDelay: '<S694>/Unit Delay' */
  BaseEngineController_A02_DWork.s694_UnitDelay_DSTATE = rtb_Sum1_d;

  /* Update for UnitDelay: '<S687>/Unit Delay1' */
  BaseEngineController_A02_DWork.s687_UnitDelay1_DSTATE = rtb_Merge_py;

  /* Update for UnitDelay: '<S677>/Unit Delay' */
  BaseEngineController_A02_DWork.s677_UnitDelay_DSTATE = rtb_Sum1_m2;

  /* Update for UnitDelay: '<S670>/Unit Delay1' */
  BaseEngineController_A02_DWork.s670_UnitDelay1_DSTATE = rtb_Merge_h;

  /* Update for UnitDelay: '<S560>/Unit Delay1' */
  BaseEngineController_A02_DWork.s560_UnitDelay1_DSTATE = rtb_Merge_bn;

  /* Update for UnitDelay: '<S595>/Unit Delay' */
  BaseEngineController_A02_DWork.s595_UnitDelay_DSTATE = rtb_Sum1_pb;

  /* Update for UnitDelay: '<S558>/Unit Delay1' */
  BaseEngineController_A02_DWork.s558_UnitDelay1_DSTATE = rtb_Merge_k1;

  /* Update for UnitDelay: '<S579>/Unit Delay' */
  BaseEngineController_A02_DWork.s579_UnitDelay_DSTATE = rtb_Sum1_nl;

  /* Update for UnitDelay: '<S557>/Unit Delay1' */
  BaseEngineController_A02_DWork.s557_UnitDelay1_DSTATE = rtb_Merge_n;

  /* Update for UnitDelay: '<S571>/Unit Delay' */
  BaseEngineController_A02_DWork.s571_UnitDelay_DSTATE = rtb_Sum1_i5;

  /* Update for UnitDelay: '<S372>/Unit Delay' */
  BaseEngineController_A02_DWork.s372_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s638_Merge;

  /* Update for UnitDelay: '<S632>/Unit Delay' */
  BaseEngineController_A02_DWork.s632_UnitDelay_DSTATE = rtb_Merge_dh;

  /* Update for UnitDelay: '<S640>/Unit Delay' */
  BaseEngineController_A02_DWork.s640_UnitDelay_DSTATE = rtb_Sum1_kq;

  /* Update for UnitDelay: '<S327>/Unit Delay' */
  BaseEngineController_A02_DWork.s327_UnitDelay_DSTATE = rtb_UnitDelay_dm;

  /* Update for UnitDelay: '<S561>/Unit Delay1' */
  BaseEngineController_A02_DWork.s561_UnitDelay1_DSTATE = rtb_Merge_pk;

  /* Update for UnitDelay: '<S535>/Unit Delay' */
  BaseEngineController_A02_DWork.s535_UnitDelay_DSTATE = rtb_Merge_j;

  /* Update for UnitDelay: '<S543>/Unit Delay' */
  BaseEngineController_A02_DWork.s543_UnitDelay_DSTATE = rtb_Sum1_f;

  /* Update for UnitDelay: '<S339>/Unit Delay2' */
  BaseEngineController_A02_DWork.s339_UnitDelay2_DSTATE =
    rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S342>/Unit Delay' */
  BaseEngineController_A02_DWork.s342_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s342_Sum1;

  /* Update for UnitDelay: '<S340>/Unit Delay2' */
  BaseEngineController_A02_DWork.s340_UnitDelay2_DSTATE = rtb_UnitDelay1_l;

  /* Update for UnitDelay: '<S345>/Unit Delay' */
  BaseEngineController_A02_DWork.s345_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s345_Sum1;

  /* Update for UnitDelay: '<S338>/Unit Delay' */
  BaseEngineController_A02_DWork.s338_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s356_MinMax1;

  /* Update for UnitDelay: '<S387>/Unit Delay' */
  BaseEngineController_A02_DWork.s387_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s556_Sum1;

  /* Update for UnitDelay: '<S389>/Unit Delay' */
  BaseEngineController_A02_DWork.s389_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s389_Sum1;

  /* Update for enable SubSystem: '<S7>/Run' incorporates:
   *  Update for EnablePort: '<S121>/Enable'
   */
  if ((int32_T)BaseEngineController_A02_DWork.s7_Run_MODE) {
    /* Update for UnitDelay: '<S140>/Unit Delay' */
    BaseEngineController_A02_DWork.s140_UnitDelay_DSTATE =
      BaseEngineController_A02_B.s140_Add;

    /* Update for UnitDelay: '<S148>/Unit Delay' */
    BaseEngineController_A02_DWork.s148_UnitDelay_DSTATE = rtb_Product4_f;

    /* Update for UnitDelay: '<S149>/Unit Delay' */
    BaseEngineController_A02_DWork.s149_UnitDelay_DSTATE = rtb_MinMax1_dr;
  }

  /* end of Update for SubSystem: '<S7>/Run' */

  /* Update for UnitDelay: '<S565>/Unit Delay1' */
  BaseEngineController_A02_DWork.s565_UnitDelay1_DSTATE = rtb_Merge_cs;

  /* Update for UnitDelay: '<S629>/Unit Delay' */
  BaseEngineController_A02_DWork.s629_UnitDelay_DSTATE = rtb_Sum1_gj;

  /* Update for S-Function (motohawk_sfun_dout): '<S708>/motohawk_dout' */

  /* S-Function Block: FuelPumpPin */
  {
    extern void DiscreteOut_DiagnosticCallback_FuelPumpPin(S_DiscreteOutDiagInfo
      const *diagPtr, NativePtrSizedInt_U in_uAppDataSentOnNotify);
    if (((init_resource_FuelPumpPin_DataStore()) < 0) && ((FuelPumpPin_DataStore
          ()) >= 0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState =
        (BaseEngineController_A02_B.s801_LogicalOperator) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      CreateInfo.pfDiagCback = DiscreteOut_DiagnosticCallback_FuelPumpPin;
      CreateInfo.uDiagCbackAppData = 0;
      CreateInfo.uValidAttributesMask |= USE_DISCRETE_DIAG_REPORT;
      CreateInfo.DynamicObj.eResourceDiagCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask |= USE_DISCRETE_DIAG_CONDITION;
      sErrorResult = CreateResource((E_ModuleResource) ((FuelPumpPin_DataStore())),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_FuelPumpPin_DataStore()) = (FuelPumpPin_DataStore());
      } else {
        (init_resource_FuelPumpPin_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_FuelPumpPin;
        if (SUCCESS(sErrorResult))
          dout_create_FuelPumpPin = 0;
        else
          dout_create_FuelPumpPin = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_FuelPumpPin_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource)
                          ((init_resource_FuelPumpPin_DataStore())),
                          (BaseEngineController_A02_B.s801_LogicalOperator) ?
                          RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S709>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_n,
    rtb_DataTypeConversion4_kh, 0, 1);

  /* Update for UnitDelay: '<S71>/Unit Delay' */
  memcpy((void *)(&BaseEngineController_A02_DWork.s71_UnitDelay_DSTATE[0]),
         (void *)&rtb_UnitDelay_ph[0], sizeof(real_T) << 3U);

  /* Update for UnitDelay: '<S73>/Unit Delay' */
  BaseEngineController_A02_DWork.s73_UnitDelay_DSTATE = rtb_UnitDelay_ak;

  /* Update for UnitDelay: '<S72>/Unit Delay' */
  BaseEngineController_A02_DWork.s72_UnitDelay_DSTATE = rtb_UnitDelay_gy;

  /* Update for UnitDelay: '<S70>/Unit Delay' */
  BaseEngineController_A02_DWork.s70_UnitDelay_DSTATE = rtb_UnitDelay_de;

  /* Update for UnitDelay: '<S69>/Unit Delay' */
  BaseEngineController_A02_DWork.s69_UnitDelay_DSTATE = rtb_UnitDelay_i;

  /* Update for UnitDelay: '<S68>/Unit Delay' */
  BaseEngineController_A02_DWork.s68_UnitDelay_DSTATE = rtb_UnitDelay_bv;

  /* Update for UnitDelay: '<S67>/Unit Delay' */
  BaseEngineController_A02_DWork.s67_UnitDelay_DSTATE = rtb_UnitDelay_dv;

  /* Update for UnitDelay: '<S66>/Unit Delay' */
  BaseEngineController_A02_DWork.s66_UnitDelay_DSTATE = rtb_UnitDelay_e4;

  /* Update for UnitDelay: '<S65>/Unit Delay' */
  BaseEngineController_A02_DWork.s65_UnitDelay_DSTATE = rtb_UnitDelay_pa;

  /* Update for S-Function (motohawk_sfun_dout): '<S711>/motohawk_dout' */

  /* S-Function Block: OilPumpPin */
  {
    extern void DiscreteOut_DiagnosticCallback_OilPumpPin(S_DiscreteOutDiagInfo
      const *diagPtr, NativePtrSizedInt_U in_uAppDataSentOnNotify);
    if (((init_resource_OilPumpPin_DataStore()) < 0) && ((OilPumpPin_DataStore())
         >= 0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState =
        (BaseEngineController_A02_B.s831_LogicalOperator) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      CreateInfo.pfDiagCback = DiscreteOut_DiagnosticCallback_OilPumpPin;
      CreateInfo.uDiagCbackAppData = 0;
      CreateInfo.uValidAttributesMask |= USE_DISCRETE_DIAG_REPORT;
      CreateInfo.DynamicObj.eResourceDiagCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask |= USE_DISCRETE_DIAG_CONDITION;
      sErrorResult = CreateResource((E_ModuleResource) ((OilPumpPin_DataStore())),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_OilPumpPin_DataStore()) = (OilPumpPin_DataStore());
      } else {
        (init_resource_OilPumpPin_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_OilPumpPin;
        if (SUCCESS(sErrorResult))
          dout_create_OilPumpPin = 0;
        else
          dout_create_OilPumpPin = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_OilPumpPin_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource)
                          ((init_resource_OilPumpPin_DataStore())),
                          (BaseEngineController_A02_B.s831_LogicalOperator) ?
                          RES_ON : RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S712>/motohawk_dout' */

  /* S-Function Block: O2_Heater */
  {
    extern void DiscreteOut_DiagnosticCallback_O2_Heater(S_DiscreteOutDiagInfo
      const *diagPtr, NativePtrSizedInt_U in_uAppDataSentOnNotify);
    if (((init_resource_O2_Heater_DataStore()) < 0) && ((O2_Heater_DataStore()) >=
         0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState =
        (BaseEngineController_A02_B.s836_LogicalOperator) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      CreateInfo.pfDiagCback = DiscreteOut_DiagnosticCallback_O2_Heater;
      CreateInfo.uDiagCbackAppData = 0;
      CreateInfo.uValidAttributesMask |= USE_DISCRETE_DIAG_REPORT;
      CreateInfo.DynamicObj.eResourceDiagCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask |= USE_DISCRETE_DIAG_CONDITION;
      sErrorResult = CreateResource((E_ModuleResource) ((O2_Heater_DataStore())),
        &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_O2_Heater_DataStore()) = (O2_Heater_DataStore());
      } else {
        (init_resource_O2_Heater_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_O2_Heater;
        if (SUCCESS(sErrorResult))
          dout_create_O2_Heater = 0;
        else
          dout_create_O2_Heater = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_O2_Heater_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource) ((init_resource_O2_Heater_DataStore
                            ())),
                          (BaseEngineController_A02_B.s836_LogicalOperator) ?
                          RES_ON : RES_OFF);
    }
  }

  /* Update for UnitDelay: '<S564>/Unit Delay1' */
  BaseEngineController_A02_DWork.s564_UnitDelay1_DSTATE = rtb_Merge_l;

  /* Update for UnitDelay: '<S621>/Unit Delay' */
  BaseEngineController_A02_DWork.s621_UnitDelay_DSTATE = rtb_Sum1_d3;

  /* Update for UnitDelay: '<S603>/Unit Delay' */
  BaseEngineController_A02_DWork.s603_UnitDelay_DSTATE = rtb_Sum1_h;

  /* Update for UnitDelay: '<S559>/Unit Delay1' */
  BaseEngineController_A02_DWork.s559_UnitDelay1_DSTATE = rtb_Merge_dm;

  /* Update for UnitDelay: '<S587>/Unit Delay' */
  BaseEngineController_A02_DWork.s587_UnitDelay_DSTATE = rtb_Sum1_j;

  /* Update for UnitDelay: '<S372>/Unit Delay1' */
  BaseEngineController_A02_DWork.s372_UnitDelay1_DSTATE =
    BaseEngineController_A02_B.s638_Merge;

  /* Update for UnitDelay: '<S351>/Unit Delay' */
  BaseEngineController_A02_DWork.s351_UnitDelay_DSTATE = min;

  /* Update for UnitDelay: '<S403>/Unit Delay' */
  BaseEngineController_A02_DWork.s403_UnitDelay_DSTATE = qY;

  /* Update for UnitDelay: '<S339>/Unit Delay1' */
  BaseEngineController_A02_DWork.s339_UnitDelay1_DSTATE = rtb_UnitDelay3_a;

  /* Update for UnitDelay: '<S339>/Unit Delay3' */
  BaseEngineController_A02_DWork.s339_UnitDelay3_DSTATE = rtb_UnitDelay4_b;

  /* Update for UnitDelay: '<S339>/Unit Delay4' */
  BaseEngineController_A02_DWork.s339_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s556_Sum1;

  /* Update for UnitDelay: '<S340>/Unit Delay1' */
  BaseEngineController_A02_DWork.s340_UnitDelay1_DSTATE = rtb_UnitDelay3_h;

  /* Update for UnitDelay: '<S340>/Unit Delay3' */
  BaseEngineController_A02_DWork.s340_UnitDelay3_DSTATE = rtb_UnitDelay4_g;

  /* Update for UnitDelay: '<S340>/Unit Delay4' */
  BaseEngineController_A02_DWork.s340_UnitDelay4_DSTATE = rtb_Torque;

  /* Update for UnitDelay: '<S364>/Unit Delay' */
  BaseEngineController_A02_DWork.s364_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s364_motohawk_data_read;

  /* Update for UnitDelay: '<S417>/Unit Delay' */
  BaseEngineController_A02_DWork.s417_UnitDelay_DSTATE = rtb_UnitDelay2_a5;

  /* Update for UnitDelay: '<S674>/Unit Delay1' */
  BaseEngineController_A02_DWork.s674_UnitDelay1_DSTATE = rtb_Product4_l;

  /* Update for UnitDelay: '<S674>/Unit Delay' */
  BaseEngineController_A02_DWork.s674_UnitDelay_DSTATE = rtb_Merge_b0d;

  /* Update for UnitDelay: '<S674>/Unit Delay3' */
  BaseEngineController_A02_DWork.s674_UnitDelay3_DSTATE = rtb_Merge_p;

  /* Update for UnitDelay: '<S674>/Unit Delay4' */
  BaseEngineController_A02_DWork.s674_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s663_Switch;

  /* Update for UnitDelay: '<S691>/Unit Delay1' */
  BaseEngineController_A02_DWork.s691_UnitDelay1_DSTATE = rtb_UnitDelay4_bi;

  /* Update for UnitDelay: '<S691>/Unit Delay' */
  BaseEngineController_A02_DWork.s691_UnitDelay_DSTATE = rtb_Sum1_gje;

  /* Update for UnitDelay: '<S691>/Unit Delay3' */
  BaseEngineController_A02_DWork.s691_UnitDelay3_DSTATE = min_0;

  /* Update for UnitDelay: '<S691>/Unit Delay4' */
  BaseEngineController_A02_DWork.s691_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s664_Switch;
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
