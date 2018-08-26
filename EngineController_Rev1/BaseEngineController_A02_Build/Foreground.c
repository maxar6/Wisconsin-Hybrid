/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1639
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Aug 25 19:54:14 2018
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

/* Named constants for Stateflow: '<S27>/Chart' */
#define BaseEngineController_A02_IN_Init (1U)
#define BaseEngineController_A02_IN_default (2U)
#define BaseEngineController_A02_IN_reset (3U)

/* Named constants for Stateflow: '<S21>/ETC Test  Manager' */
#define BaseEngineController_A02_IN_ForcedShutdown (1U)
#define BaseEngineController_A02_IN_LowAdapt (2U)
#define BaseEngineController_A02_IN_PassThrough (3U)
#define BaseEngineController_A02_IN_SpringTest (4U)
#define BaseEngineController_A02_IN_SpringTestComplete (5U)
#define BaseEngineController_A02_IN_SpringTestSetpoint (6U)

/* Named constants for Stateflow: '<S127>/Remy Control' */
#define BaseEngineController_A02_IN_cranking (1U)
#define BaseEngineController_A02_IN_generating (3U)
#define BaseEngineController_A02_IN_idle (4U)
#define BaseEngineController_A02_IN_rampDown (5U)
#define BaseEngineController_A02_IN_startFail (6U)

/* Named constants for Stateflow: '<S297>/Baro Stall State Delay' */
#define BaseEngineController_A02_IN_CrankRun (1U)
#define BaseEngineController_A02_IN_Stall (2U)
#define BaseEngineController_A02_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S347>/Engine State Machine' */
#define BaseEngineController_A02_IN_Crank (1U)
#define BaseEngineController_A02_IN_Run (2U)
#define BaseEngineController_A02_IN_Stall_l (3U)

/*
 * Output and update for enable system:
 *    '<S167>/Multiply and Divide, avoiding divde by zero'
 *    '<S325>/Multiply and Divide, avoiding divde by zero1'
 */
void BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(boolean_T
  rtu_0, real_T rtu_X1, real_T rtu_X2, real_T rtu_Divide1, real_T rtu_Divide2,
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02 *localB)
{
  /* Outputs for Enabled SubSystem: '<S167>/Multiply and Divide, avoiding divde by zero' incorporates:
   *  EnablePort: '<S172>/Enable'
   */
  if (rtu_0) {
    /* Product: '<S172>/charge mass' */
    localB->s172_chargemass = rtu_X1 * rtu_X2 / rtu_Divide1 / rtu_Divide2;
  }

  /* End of Outputs for SubSystem: '<S167>/Multiply and Divide, avoiding divde by zero' */
}

/*
 * Start for enable system:
 *    '<S342>/PassThrough1'
 *    '<S342>/PassThrough2'
 */
void BaseEngineController_A02_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S356>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S342>/PassThrough1'
 *    '<S342>/PassThrough2'
 */
void BaseEngineController_A02_PassThrough1(boolean_T rtu_0, real_T rtu_1, real_T
  *rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S342>/PassThrough1' incorporates:
   *  EnablePort: '<S356>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S356>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S342>/PassThrough1' */
}

/*
 * Output and update for action system:
 *    '<S522>/If Action Subsystem'
 *    '<S522>/If Action Subsystem1'
 *    '<S522>/If Action Subsystem2'
 *    '<S544>/If Action Subsystem'
 *    '<S544>/If Action Subsystem1'
 *    '<S544>/If Action Subsystem2'
 *    '<S545>/If Action Subsystem'
 *    '<S545>/If Action Subsystem1'
 *    '<S545>/If Action Subsystem2'
 *    '<S546>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_A02_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S525>/In' */
  (*rty_Out) = rtu_0;
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Init(void)
{
  /* S-Function Block: <S600>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s600_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S536>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s536_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Initial conditions for function-call system: '<S385>/Temp Sensors' */

  /* S-Function Block: <S637>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s637_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S646>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s646_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S347>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S366>:4' */
  BaseEngineController_A02_DWork.s366_is_c2_BaseEngineController_A02 =
    BaseEngineController_A02_IN_Stall_l;

  /* Entry 'Stall': '<S366>:1' */
  BaseEngineController_A02_B.s366_State = 1U;

  /* S-Function Block: <S408>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s408_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S127>/Remy Control' */
  BaseEngineController_A02_DWork.s135_is_active_c5_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s135_count = 0.0;
  BaseEngineController_A02_B.s135_APP = 0.0;
  BaseEngineController_A02_B.s135_remyEn = 0.0;
  BaseEngineController_A02_B.s135_maxRPM = 0.0;
  BaseEngineController_A02_B.s135_motorTQ = 0.0;
  BaseEngineController_A02_B.s135_generatingTQ = 0.0;

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

  /* S-Function Block: <S661>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s661_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S678>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s678_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Atomic SubSystem: '<S300>/Base TPS Request' */

  /* S-Function Block: <S358>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s358_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S342>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s342_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S300>/Base TPS Request' */

  /* S-Function Block: <S626>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s626_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S371>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s371_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_DWork.s297_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S297>/Baro Stall State Delay' */
  BaseEngineController_A02_DWork.s302_TOld = 0.0;
  BaseEngineController_A02_B.s302_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S302>:4' */
  BaseEngineController_A02_DWork.s302_is_c19_BaseEngineController_A02 =
    BaseEngineController_A02_IN_Stall;

  /* Entry 'Stall': '<S302>:1' */
  BaseEngineController_A02_B.s302_Enable = TRUE;

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

  /* S-Function Block: <S524>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s524_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S316>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s316_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S363>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s363_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S570>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s570_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
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

  /* S-Function Block: <S29>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s29_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S553>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s553_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S27>/Chart' */
  BaseEngineController_A02_DWork.s28_is_active_c1_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_DWork.s28_is_c1_BaseEngineController_A02 = 0U;
  BaseEngineController_A02_B.s28_enout = 0.0;

  /* S-Function Block: <S810>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s810_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S30>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s30_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S369>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s369_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
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

  /* S-Function Block: <S329>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s329_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S385>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7130p0001 */
  BaseEngineController_A02_DWork.s385_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S347>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_5811p0002 */
  BaseEngineController_A02_DWork.s347_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S549>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_6947p0001 */
  BaseEngineController_A02_DWork.s549_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1409p0004 */
  BaseEngineController_A02_DWork.s14_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1408p0004 */
  BaseEngineController_A02_DWork.s14_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7978p0001 */

  /* Enable for function-call system: '<S13>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S784>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S789>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_7485p0004 */
  BaseEngineController_A02_DWork.s789_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S784>/EST Enable TDC Counter' */
  BaseEngineController_A02_DWork.s13_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S385>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_7130p0001 */
  BaseEngineController_A02_DWork.s385_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S347>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_5811p0002 */
  BaseEngineController_A02_DWork.s347_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S15>/Stall' */
  BaseEngineController_A02_DWork.s15_Stall_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Stall' */

  /* Disable for Enabled SubSystem: '<S15>/Crank' */
  BaseEngineController_A02_DWork.s15_Crank_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Crank' */

  /* Disable for Enabled SubSystem: '<S297>/Capture Signal At Startup' */
  /* Disable for Enabled SubSystem: '<S303>/Collect Average' */
  BaseEngineController_A02_DWork.s303_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S303>/Collect Average' */
  BaseEngineController_A02_DWork.s297_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S297>/Capture Signal At Startup' */

  /* Level2 S-Function Block: '<S549>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_6947p0001 */
  BaseEngineController_A02_DWork.s549_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S300>/Capture ECT At Startup' */
  /* Disable for Enabled SubSystem: '<S343>/Collect Average' */
  BaseEngineController_A02_DWork.s343_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S343>/Collect Average' */
  BaseEngineController_A02_DWork.s300_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S300>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S129>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_4024p0001 */
  BaseEngineController_A02_DWork.s129_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Atomic SubSystem: '<S129>/Fuel System Manager' */
  /* Disable for Atomic SubSystem: '<S140>/Injector Manager' */
  /* Disable for Enabled SubSystem: '<S161>/Delta TPS Transient Fueling' */
  /* Disable for Enabled SubSystem: '<S166>/ECT Transient Fueling' */
  /* Disable for Outport: '<S169>/Mult' */
  BaseEngineController_A02_B.s169_motohawk_interpolation_1d = 1.0;
  BaseEngineController_A02_DWork.s166_ECTTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S166>/ECT Transient Fueling' */

  /* Disable for Outport: '<S166>/DeltaTPSMult' */
  BaseEngineController_A02_B.s166_Product1 = 1.0;
  BaseEngineController_A02_DWork.s161_DeltaTPSTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S161>/Delta TPS Transient Fueling' */
  /* End of Disable for SubSystem: '<S140>/Injector Manager' */
  /* End of Disable for SubSystem: '<S129>/Fuel System Manager' */
  BaseEngineController_A02_DWork.s15_Run_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Run' */
  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1409p0004 */
  BaseEngineController_A02_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1408p0004 */
  BaseEngineController_A02_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S23>/PassThrough1' */
  BaseEngineController_A02_DWork.s23_PassThrough1_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S23>/PassThrough3' */
  for (i = 0; i < 32; i++) {
    /* Disable for Outport: '<S102>/Out1' */
    BaseEngineController_A02_B.s23_Merge1[i] = 0;

    /* Disable for Outport: '<S104>/Out1' */
    BaseEngineController_A02_B.s23_Merge1[i] = 0;
  }

  /* End of Disable for SubSystem: '<S23>/PassThrough1' */
  BaseEngineController_A02_DWork.s23_PassThrough3_MODE = FALSE;

  /* End of Disable for SubSystem: '<S23>/PassThrough3' */

  /* Disable for Enabled SubSystem: '<S23>/SequenceCutMachine' */

  /* Level2 S-Function Block: '<S107>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC1_EVENT_1156p0004 */
  BaseEngineController_A02_DWork.s107_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_A02_DWork.s23_SequenceCutMachine_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S23>/PassThrough4' */
  for (i = 0; i < 8; i++) {
    /* Disable for Outport: '<S107>/Out1' */
    BaseEngineController_A02_B.s117_CutArray[i] = 0;

    /* Disable for Outport: '<S105>/Out1' */
    BaseEngineController_A02_B.s105_DataTypeConversion[i] = FALSE;
  }

  /* End of Disable for SubSystem: '<S23>/SequenceCutMachine' */
  BaseEngineController_A02_DWork.s23_PassThrough4_MODE = FALSE;

  /* End of Disable for SubSystem: '<S23>/PassThrough4' */

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_7978p0001 */

  /* Disable for function-call system: '<S13>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S784>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S789>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_7485p0004 */
  BaseEngineController_A02_DWork.s789_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S784>/EST Enable TDC Counter' */
  BaseEngineController_A02_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S37>/PassThrough' */
  /* Disable for Outport: '<S59>/Out1' */
  BaseEngineController_A02_B.s59_In1 = 10.0;
  BaseEngineController_A02_DWork.s37_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S37>/PassThrough' */
  BaseEngineController_A02_DWork.s14_ElectronicThrottleController_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Disable for Enabled SubSystem: '<S23>/PassThrough5' */
  /* Disable for Outport: '<S106>/Out1' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s106_DataTypeConversion1[i] = FALSE;
  }

  /* End of Outport: '<S106>/Out1' */
  BaseEngineController_A02_DWork.s23_PassThrough5_MODE = FALSE;

  /* End of Disable for SubSystem: '<S23>/PassThrough5' */

  /* Disable for Enabled SubSystem: '<S300>/Capture IAT At Startup' */
  /* Disable for Enabled SubSystem: '<S344>/Collect Average' */
  BaseEngineController_A02_DWork.s344_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S344>/Collect Average' */
  BaseEngineController_A02_DWork.s300_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S300>/Capture IAT At Startup' */
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S385>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_7130p0001 */
  BaseEngineController_A02_DWork.s385_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S347>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_5811p0002 */
  BaseEngineController_A02_DWork.s347_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S15>/Stall' */

  /* InitializeConditions for UnitDelay: '<S263>/Unit Delay' */
  BaseEngineController_A02_DWork.s263_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S264>/Unit Delay' */
  BaseEngineController_A02_DWork.s264_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S15>/Stall' */

  /* Start for Atomic SubSystem: '<S300>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S342>/PassThrough1' */
  BaseEngineController_A02_PassThrough1_Start
    (&BaseEngineController_A02_B.s342_Merge);

  /* End of Start for SubSystem: '<S342>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S342>/PassThrough2' */
  BaseEngineController_A02_PassThrough1_Start
    (&BaseEngineController_A02_B.s342_Merge);

  /* End of Start for SubSystem: '<S342>/PassThrough2' */

  /* End of Start for SubSystem: '<S300>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S297>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S303>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S306>/Unit Delay1' */
  BaseEngineController_A02_DWork.s306_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S303>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S303>/Unit Delay' */
  BaseEngineController_A02_DWork.s303_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S297>/Capture Signal At Startup' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S549>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_6947p0001 */
  BaseEngineController_A02_DWork.s549_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S317>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S321>/Out1' */
  BaseEngineController_A02_B.s317_Merge = 0.005;

  /* End of Start for SubSystem: '<S317>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S317>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S319>/Out1' */
  BaseEngineController_A02_B.s317_Merge = 0.005;

  /* End of Start for SubSystem: '<S317>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S318>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S324>/Out1' */
  BaseEngineController_A02_B.s318_Merge = 0.005;

  /* End of Start for SubSystem: '<S318>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S318>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S322>/Out1' */
  BaseEngineController_A02_B.s318_Merge = 0.005;

  /* End of Start for SubSystem: '<S318>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S316>/Integrate Offset To ECT' */

  /* S-Function Block: <S335>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s335_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S316>/Integrate Offset To ECT' */

  /* Start for Enabled SubSystem: '<S300>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S343>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S360>/Unit Delay1' */
  BaseEngineController_A02_DWork.s360_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S343>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S343>/Unit Delay' */
  BaseEngineController_A02_DWork.s343_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S300>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S129>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_4024p0001 */
  BaseEngineController_A02_DWork.s129_motohawk_trigger1_DWORK1 = 0;

  /* Start for Atomic SubSystem: '<S129>/O2 Control' */

  /* Start for Atomic SubSystem: '<S143>/O2 PID Controller' */

  /* Start for InitialCondition: '<S238>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_A02_DWork.s238_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S143>/O2 PID Controller' */

  /* End of Start for SubSystem: '<S129>/O2 Control' */

  /* Start for Atomic SubSystem: '<S129>/Fuel System Manager' */

  /* Start for Atomic SubSystem: '<S140>/Injector Manager' */

  /* Start for Enabled SubSystem: '<S161>/Delta TPS Transient Fueling' */

  /* Start for Enabled SubSystem: '<S166>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S169>/Mult' */
  BaseEngineController_A02_B.s169_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S166>/ECT Transient Fueling' */

  /* S-Function Block: <S170>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s170_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S171>/Unit Delay' */
  BaseEngineController_A02_DWork.s171_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S166>/DeltaTPSMult' */
  BaseEngineController_A02_B.s166_Product1 = 1.0;

  /* End of Start for SubSystem: '<S161>/Delta TPS Transient Fueling' */

  /* End of Start for SubSystem: '<S140>/Injector Manager' */

  /* End of Start for SubSystem: '<S129>/Fuel System Manager' */

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

  /* InitializeConditions for UnitDelay: '<S151>/Unit Delay' */
  BaseEngineController_A02_DWork.s151_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S152>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s152_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S150>/Unit Delay' */
  BaseEngineController_A02_DWork.s150_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S153>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s153_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S150>/Unit Delay1' */
  BaseEngineController_A02_DWork.s150_UnitDelay1_DSTATE = 0.0;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S129>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S129>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S202>/IdleStateMachine' */
    BaseEngineController_A02_IdleStateMachine_Init();

    /* S-Function Block: <S201>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s201_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

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

    /* InitializeConditions for Atomic SubSystem: '<S142>/AiflowOffset' */

    /* S-Function Block: <S208>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s208_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* End of InitializeConditions for SubSystem: '<S142>/AiflowOffset' */

    /* S-Function Block: <S233>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s233_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S129>/MaxGovernor' */

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

    /* S-Function Block: <S195>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_DWork.s195_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    /* Initial conditions for function-call system: '<S129>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S258>/Initial Condition is True' */
    BaseEngineController_A02_DWork.s258_InitialConditionisTrue_DSTATE = TRUE;
  }

  /* InitializeConditions for Atomic SubSystem: '<S129>/O2 Control' */

  /* InitializeConditions for Atomic SubSystem: '<S143>/O2 PID Controller' */
  /* InitializeConditions for UnitDelay: '<S250>/Unit Delay' */
  BaseEngineController_A02_DWork.s250_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S247>/Unit Delay' */
  BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S246>/Unit Delay' */
  BaseEngineController_A02_DWork.s246_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S247>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s247_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S243>/Unit Delay1' */
  BaseEngineController_A02_DWork.s243_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S251>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s251_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S243>/Unit Delay' */
  BaseEngineController_A02_DWork.s243_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S253>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s253_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S243>/Unit Delay2' */
  BaseEngineController_A02_DWork.s243_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S252>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s252_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S143>/O2 PID Controller' */

  /* End of InitializeConditions for SubSystem: '<S129>/O2 Control' */

  /* End of Start for SubSystem: '<S15>/Run' */
  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1409p0004 */
  BaseEngineController_A02_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1408p0004 */
  BaseEngineController_A02_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S23>/SequenceCutMachine' */

  /* Start for function-call system: '<S107>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S117>/CycleCounter' */
  BaseEngineController_A02_B.s117_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S117>/CycleNumber' */
  BaseEngineController_A02_B.s117_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_1156p0004 */
  BaseEngineController_A02_DWork.s107_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S107>/Unit Delay2' */
  BaseEngineController_A02_DWork.s107_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S107>/Unit Delay1' */
  BaseEngineController_A02_DWork.s107_UnitDelay1_DSTATE = 1U;

  /* End of Start for SubSystem: '<S23>/SequenceCutMachine' */

  /* Start for function-call system: '<S13>/Coil Control' */

  /* Start for Atomic SubSystem: '<S784>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S789>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_7485p0004 */
  BaseEngineController_A02_DWork.s789_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S784>/EST Enable TDC Counter' */

  /* S-Function Block: <S698>/Spark Sequence */
  {
    NativeError_S createErrorResult;
    int32_T i;
    extern void SparkSeqDiagCallback_20(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    if ((EST_SequenceType_DataStore()) == 0) {
      S_ESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      CreateObj.u1NumPulsesToCreate = 1;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_20;
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_20;
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_20;

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
            (ESTPinMapArr_PulseNum_20_DataStore())[cyl] = 0;
            (ESTPinMapArr_PulseNum_20_DataStore())[opp_cyl] = 1;/* p1 aligns with opp_cyl */
          } else {
            p0 = (EncoderTDCAngles_DataStore())[opp_cyl];
            p1 = (EncoderTDCAngles_DataStore())[cyl];
            (ESTPinMapArr_PulseNum_20_DataStore())[cyl] = 1;
            (ESTPinMapArr_PulseNum_20_DataStore())[opp_cyl] = 0;/* p0 aligns with opp_cyl */
          }

          (ESTPinMapArr_Resource_20_DataStore())[cyl] = (E_ModuleResource)
            ((EST_InitialPin_DataStore()) + pin);
          (ESTPinMapArr_Resource_20_DataStore())[opp_cyl] = (E_ModuleResource)
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_20;
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

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_7978p0001 */
  BaseEngineController_A02_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Start for Enabled SubSystem: '<S37>/PassThrough' */
  /* VirtualOutportStart for Outport: '<S59>/Out1' */
  BaseEngineController_A02_B.s59_In1 = 10.0;

  /* End of Start for SubSystem: '<S37>/PassThrough' */

  /* S-Function Block: <S70>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s70_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S21>/ETC Test  Manager' */
  BaseEngineController_A02_DWork.s33_TimerOld = 0.0;

  /* Entry: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
  /* Transition: '<S33>:7' */
  BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
    BaseEngineController_A02_IN_PassThrough;

  /* Entry 'PassThrough': '<S33>:1' */
  BaseEngineController_A02_B.s33_DC_Override = 0;
  BaseEngineController_A02_B.s33_TestComplete = FALSE;
  BaseEngineController_A02_B.s33_SetpointMode = 0;
  BaseEngineController_A02_B.s33_TestTime = 0.0;

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

  /* S-Function Block: <S50>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s50_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S55>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s55_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* S-Function Block: <S702>/Injector Sequence */
  {
    S_SeqOutAttributes DynamicObj;
    NativeError_S createErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult2 = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    int32_T i;
    extern void InjectorSeqDiagCallback_39(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_39[8];
    extern int32_T InjectorSeqDiagLastPin_39;
    DynamicObj.uMinPulseDurationInMicroSecs = 1500;
    for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
      InjectorSeqDiagInfo_39[i].u4TXTimeInMicroSecs = 0xFFFFFFFF;
      InjectorSeqDiagInfo_39[i].u1TXCnt = 1;
    }

    InjectorSeqDiagLastPin_39 = -1;
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
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_39;
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
        extern void TransientInjectorSeqReportCallback_39
          (S_SeqOutInjEndEventReportPtr report, NativePtrSizedInt_U userData);
        extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_39[8];
        S_TranInjSeqCreateAttributes CreateObj;
        CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
          USE_SEQ_ENDEVENT_REPORT_COND | USE_SEQ_DIAG_REPORT_COND;
        CreateObj.ReportsObj.pfReportCback =
          TransientInjectorSeqReportCallback_39;
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_39;
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.eReportCond = RES_ENABLED;
        DynamicObj.uValidAttributesMask |= USE_SEQ_ENDEVENT_REPORT_COND;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            TransientInjectorSeqInfo_39[i].primaryComplete = 0;
            TransientInjectorSeqInfo_39[i].primaryDuration = 0;
            TransientInjectorSeqInfo_39[i].pinResource =
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_39;
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_39;
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

    BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK2 = 0;
  }

  /* Start for Enabled SubSystem: '<S300>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S344>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S361>/Unit Delay1' */
  BaseEngineController_A02_DWork.s361_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S344>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S344>/Unit Delay' */
  BaseEngineController_A02_DWork.s344_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S300>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S379>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S380>/Function-Call Generator'
   *  Start for SubSystem: '<S11>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S379>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S380>/Function-Call Generator'
   *  InitializeConditions for SubSystem: '<S11>/Diagnostics'
   */

  /* S-Function Block: <S282>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s282_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S283>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s283_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S284>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s284_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_DWork.s296_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_DWork.s295_motohawk_delta_time_DWORK1 = now -
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S279>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s279_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function (motohawk_sfun_probe): '<S706>/motohawk_probe1' */
  (Control_Mode_Cmd_Prb_DataStore()) = 1.0;

  /* S-Function (motohawk_sfun_probe): '<S706>/motohawk_probe2' */
  (Motoring_Tq_Curve_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S706>/motohawk_probe3' */
  (Generating_Tq_Curve_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S706>/motohawk_probe10' */
  (Aux_PWM_State_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S706>/motohawk_probe11' */
  (Aux_PWM_DutyCycle_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S706>/motohawk_probe12' */
  (Aux_PWM_Freq_Prb_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S706>/motohawk_probe9' */
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
  real_T rtb_Merge_d;
  real_T rtb_Merge_lo;
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
  real_T rtb_Merge_p;
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
  real_T rtb_Merge_l0;
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
  real_T rtb_Sum1_a;
  real_T rtb_motohawk_delta_time_fm;
  real_T rtb_motohawk_delta_time_iv;
  real_T rtb_Saturation_dd;
  real_T rtb_Saturation_bn;
  real_T rtb_motohawk_interpolation_1d_o;
  real_T rtb_RichEquivRatioTargetDelta_a;
  real_T rtb_motohawk_interpolation_1d_ox;
  real_T rtb_RichEquivRatioSwPtDelta;
  real_T rtb_LeanEquivRatioSwPtDelta;
  real_T rtb_motohawk_interpolation_1d_j;
  real_T rtb_motohawk_interpolation_1d1_l;
  real_T rtb_motohawk_delta_time_nl;
  real_T rtb_motohawk_delta_time_fo;
  real_T rtb_motohawk_delta_time_ivp;
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
  real_T rtb_WarmUptimeMult;
  real_T rtb_ECTEnrichment;
  real_T rtb_IATEnrichment;
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
  real_T rtb_Switch_b;
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
  index_T rtb_TimeSinceRun09;
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
  boolean_T rtb_LogicalOperator2_nw;
  boolean_T rtb_LogicalOperator1_j;
  boolean_T rtb_LogicalOperator3_hf;
  boolean_T rtb_LogicalOperator4_h;
  boolean_T rtb_RelationalOperator2_la;
  boolean_T rtb_LT3;
  boolean_T rtb_LT2;
  boolean_T rtb_LT4;
  boolean_T rtb_RelationalOperator2_c;
  boolean_T rtb_RelationalOperator1_dd;
  boolean_T rtb_RelOp_fa;
  boolean_T rtb_LogicalOperator_kg;
  boolean_T rtb_LogicalOperator_d;
  boolean_T rtb_RelationalOperator1_gq;
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
  boolean_T rtb_RelOp_oi;
  boolean_T rtb_RelationalOperator5_p;
  boolean_T rtb_LogicalOperator_ob;
  real_T minV;
  boolean_T rtb_RelationalOperator6_k;
  boolean_T rtb_LogicalOperator1_a;
  int32_T rtb_DataTypeConversion_f5;
  real_T rtb_Product1_e;
  real_T rtb_Merge_l;
  real_T rtb_Sum1_ix;
  boolean_T rtb_GensetEnable;
  int32_T rtb_DataTypeConversion_kk;
  real_T rtb_Merge_kp;
  boolean_T rtb_RelOp_g;
  real_T rtb_UnitDelay_li;
  real_T rtb_UnitDelay1_e;
  real_T rtb_Sum2_n;
  real_T rtb_Sum1_da;
  real_T rtb_DataTypeConversion_f5a;
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
  real_T rtb_UnitDelay4_g;
  real_T rtb_Sum1_i;
  real_T rtb_Sum1_gj;
  real_T rtb_Sum1_kq;
  real_T rtb_Sum1_pb;
  real_T rtb_Sum1_f;
  real_T rtb_Sum1_i5;
  uint32_T rtb_Switch_a;
  real_T rtb_Sum1_j;
  real_T rtb_Sum1_h;
  real_T rtb_Sum1_d3;
  boolean_T rtb_Merge_i5;
  real_T rtb_Merge_oq;
  real_T rtb_Merge_dn;
  real_T rtb_Merge_o4;
  real_T rtb_Merge_c5;
  int8_T rtb_Add_a;
  int8_T rtb_Sum_l3;
  real_T rtb_Switch_o;
  boolean_T rtb_LogicalOperator2_l;
  real_T rtb_Product4_l;
  boolean_T rtb_LogicalOperator10;
  boolean_T rtb_Switch1_p0;
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  real_T rtb_DesiredLambda_idx_1;
  real_T rtb_DesiredLambda_idx_2;
  real_T rtb_DesiredLambda_idx_3;
  uint16_T rtb_DataTypeConversion_a_0;

  /* S-Function Block: <S600>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s600_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S600>/Product' incorporates:
   *  MinMax: '<S600>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S600>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (OilPresFilterConst_DataStore())) || rtIsNaN((OilPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_ff : (OilPresFilterConst_DataStore());

  /* Logic: '<S550>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S550>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S550>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(55) || IsFaultActive(56));

  /* Logic: '<S550>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S550>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S550>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(55) || IsFaultSuspected(56));

  /* S-Function Block: <S384>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get(&BaseEngineController_A02_B.s384_motohawk_ain1,
      NULL);
  }

  /* DataTypeConversion: '<S550>/Data Type Conversion' */
  rtb_DataTypeConversion_f5 = BaseEngineController_A02_B.s384_motohawk_ain1;

  /* Product: '<S550>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S550>/motohawk_calibration4'
   */
  rtb_Product1_e = (real_T)rtb_DataTypeConversion_f5 * (OilPresGain_DataStore());

  /* Sum: '<S550>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S550>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s550_Sum1 = rtb_Product1_e + (OilPresOfst_DataStore
    ());

  /* UnitDelay: '<S550>/Unit Delay1' */
  rtb_UnitDelay1_m = BaseEngineController_A02_DWork.s550_UnitDelay1_DSTATE;

  /* If: '<S550>/If' incorporates:
   *  Logic: '<S550>/Logical Operator5'
   *  Logic: '<S550>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S550>/If Action Subsystem' incorporates:
     *  ActionPort: '<S601>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_m, &rtb_Merge_bw);

    /* End of Outputs for SubSystem: '<S550>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S550>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S602>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_bw);

    /* End of Outputs for SubSystem: '<S550>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S550>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S603>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s550_Sum1, &rtb_Merge_bw);

    /* End of Outputs for SubSystem: '<S550>/If Action Subsystem2' */
  }

  /* End of If: '<S550>/If' */

  /* Sum: '<S605>/Sum1' incorporates:
   *  Constant: '<S605>/Constant'
   *  Product: '<S605>/Product'
   *  Product: '<S605>/Product1'
   *  Sum: '<S605>/Sum'
   *  UnitDelay: '<S605>/Unit Delay'
   */
  rtb_Sum1_i = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s605_UnitDelay_DSTATE + rtb_Merge_bw *
    rtb_DataTypeConversion_ff;

  /* If: '<S604>/If' incorporates:
   *  Inport: '<S606>/In1'
   *  Inport: '<S607>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S604>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S604>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S604>/NewValue' incorporates:
     *  ActionPort: '<S606>/Action Port'
     */
    BaseEngineController_A02_B.s604_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S604>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S604>/OldValue' incorporates:
     *  ActionPort: '<S607>/Action Port'
     */
    BaseEngineController_A02_B.s604_Merge = rtb_Sum1_i;

    /* End of Outputs for SubSystem: '<S604>/OldValue' */
  }

  /* End of If: '<S604>/If' */

  /* If: '<S711>/If' incorporates:
   *  Inport: '<S729>/In1'
   *  Inport: '<S730>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S711>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S711>/override_enable'
   */
  if ((Oil_Pressure_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S711>/NewValue' incorporates:
     *  ActionPort: '<S729>/Action Port'
     */
    rtb_Merge_c = (Oil_Pressure_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S711>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S711>/OldValue' incorporates:
     *  ActionPort: '<S730>/Action Port'
     */
    rtb_Merge_c = BaseEngineController_A02_B.s604_Merge;

    /* End of Outputs for SubSystem: '<S711>/OldValue' */
  }

  /* End of If: '<S711>/If' */

  /* S-Function Block: <S383>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S543>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S383>/motohawk_encoder_average_rpm'
   */
  rtb_Product1_e = (real_T)rtb_RPM;

  /* S-Function Block: <S536>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s536_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S536>/Product' incorporates:
   *  MinMax: '<S536>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S536>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_ff : (RPMFiltConst_DataStore());

  /* Sum: '<S543>/Sum1' incorporates:
   *  Constant: '<S543>/Constant'
   *  Product: '<S543>/Product'
   *  Product: '<S543>/Product1'
   *  Sum: '<S543>/Sum'
   *  UnitDelay: '<S543>/Unit Delay'
   */
  BaseEngineController_A02_B.s543_Sum1 = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s543_UnitDelay_DSTATE + rtb_Product1_e *
    rtb_DataTypeConversion_ff;

  /* If: '<S712>/If' incorporates:
   *  Inport: '<S731>/In1'
   *  Inport: '<S732>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S712>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S712>/override_enable'
   */
  if ((RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S712>/NewValue' incorporates:
     *  ActionPort: '<S731>/Action Port'
     */
    rtb_Merge_cd = (RPM_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S712>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S712>/OldValue' incorporates:
     *  ActionPort: '<S732>/Action Port'
     */
    rtb_Merge_cd = BaseEngineController_A02_B.s543_Sum1;

    /* End of Outputs for SubSystem: '<S712>/OldValue' */
  }

  /* End of If: '<S712>/If' */

  /* S-Function (motohawk_sfun_trigger): '<S385>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7130p0001 */
  if (BaseEngineController_A02_DWork.s385_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s385_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S388>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6363p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6363p0001,
      &messageObj);
    if ((BaseEngineController_A02_B.s388_ReadCANMessage1_o1 + 1) >
        BaseEngineController_A02_B.s388_ReadCANMessage1_o1)
      BaseEngineController_A02_B.s388_ReadCANMessage1_o1++;
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
      BaseEngineController_A02_B.s388_ReadCANMessage1_o2 = (real_T) tmp0;
      BaseEngineController_A02_B.s388_ReadCANMessage1_o3 = (real_T) tmp1;
      BaseEngineController_A02_B.s388_ReadCANMessage1_o4 = (real_T) tmp2;
      BaseEngineController_A02_B.s388_ReadCANMessage1_o5 = (real_T) tmp3;
      BaseEngineController_A02_B.s388_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_A02_B.s388_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_A02_B.s388_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_A02_B.s388_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_A02_B.s388_ReadCANMessage1_o10 = ((real_T) tmp8) /
        ((real_T) 2);
      BaseEngineController_A02_B.s388_ReadCANMessage1_o11 = ((real_T) tmp9) /
        ((real_T) 2);
      BaseEngineController_A02_B.s388_ReadCANMessage1_o12 = ((real_T) tmp10) +
        ((real_T) -40);
      BaseEngineController_A02_B.s388_ReadCANMessage1_o13 = ((real_T) tmp11) +
        ((real_T) -40);
      BaseEngineController_A02_B.s388_ReadCANMessage1_o1 = 0;
    }
  }

  /* If: '<S417>/If' incorporates:
   *  Inport: '<S462>/In1'
   *  Inport: '<S463>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S417>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S417>/override_enable'
   */
  if ((Motor_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S417>/NewValue' incorporates:
     *  ActionPort: '<S462>/Action Port'
     */
    rtb_Merge_l = (Motor_Temp_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S417>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S417>/OldValue' incorporates:
     *  ActionPort: '<S463>/Action Port'
     */
    rtb_Merge_l = BaseEngineController_A02_B.s388_ReadCANMessage1_o12;

    /* End of Outputs for SubSystem: '<S417>/OldValue' */
  }

  /* End of If: '<S417>/If' */

  /* Sum: '<S710>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff = rtb_Merge_l + (Motor_Temp_Offset_DataStore());

  /* MinMax: '<S710>/MinMax' */
  BaseEngineController_A02_B.s710_MinMax =
    (BaseEngineController_A02_B.s641_Merge >= rtb_DataTypeConversion_ff) ||
    rtIsNaN(rtb_DataTypeConversion_ff) ? BaseEngineController_A02_B.s641_Merge :
    rtb_DataTypeConversion_ff;

  /* If: '<S713>/If' incorporates:
   *  Inport: '<S733>/In1'
   *  Inport: '<S734>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S713>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S713>/override_enable'
   */
  if ((Temp_Guage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S713>/NewValue' incorporates:
     *  ActionPort: '<S733>/Action Port'
     */
    rtb_Merge_i = (Temp_Guage_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S713>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S713>/OldValue' incorporates:
     *  ActionPort: '<S734>/Action Port'
     */
    rtb_Merge_i = BaseEngineController_A02_B.s710_MinMax;

    /* End of Outputs for SubSystem: '<S713>/OldValue' */
  }

  /* End of If: '<S713>/If' */

  /* S-Function Block: <S383>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S383>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S383>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_A02_B.s383_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S347>/Data Type Conversion' */
  if (BaseEngineController_A02_B.s383_RPMInst < 65536.0) {
    if (BaseEngineController_A02_B.s383_RPMInst >= 0.0) {
      rtb_DataTypeConversion_a_0 = (uint16_T)
        BaseEngineController_A02_B.s383_RPMInst;
    } else {
      rtb_DataTypeConversion_a_0 = 0U;
    }
  } else {
    rtb_DataTypeConversion_a_0 = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S347>/Data Type Conversion' */
  /* Sum: '<S347>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  rtb_motohawk_data_read1_k = (uint16_T)i;

  /* End of Sum: '<S347>/Sum' */

  /* RelationalOperator: '<S347>/Relational Operator1' incorporates:
   *  DataTypeConversion: '<S347>/Data Type Conversion'
   */
  BaseEngineController_A02_B.s347_Stall = ((rtb_DataTypeConversion_a_0 <
    rtb_motohawk_data_read1_k));

  /* RelationalOperator: '<S347>/Relational Operator4' incorporates:
   *  DataTypeConversion: '<S347>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration4'
   */
  BaseEngineController_A02_B.s347_Crank = ((rtb_DataTypeConversion_a_0 >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S347>/Relational Operator2' incorporates:
   *  DataTypeConversion: '<S347>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration1'
   */
  rtb_LogicalOperator1_a = (rtb_DataTypeConversion_a_0 > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S347>/Unit Delay' */
  BaseEngineController_A02_B.s347_UnitDelay =
    BaseEngineController_A02_DWork.s347_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S347>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_5811p0002 */
  if (BaseEngineController_A02_DWork.s347_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s347_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S347>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S347>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration2'
   */
  BaseEngineController_A02_B.s347_Run = ((rtb_LogicalOperator1_a &&
    (BaseEngineController_A02_B.s367_Switch >= ((uint8_T)(RunLatchTDCs_DataStore
    ())))));

  /* Stateflow: '<S347>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch (BaseEngineController_A02_DWork.s366_is_c2_BaseEngineController_A02) {
   case BaseEngineController_A02_IN_Crank:
    /* During 'Crank': '<S366>:3' */
    if (BaseEngineController_A02_B.s347_Stall) {
      /* Transition: '<S366>:8' */
      BaseEngineController_A02_DWork.s366_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall_l;

      /* Entry 'Stall': '<S366>:1' */
      BaseEngineController_A02_B.s366_State = 1U;
    } else {
      if (BaseEngineController_A02_B.s347_Run) {
        /* Transition: '<S366>:6' */
        BaseEngineController_A02_DWork.s366_is_c2_BaseEngineController_A02 =
          BaseEngineController_A02_IN_Run;

        /* Entry 'Run': '<S366>:2' */
        BaseEngineController_A02_B.s366_State = 3U;
      }
    }
    break;

   case BaseEngineController_A02_IN_Run:
    /* During 'Run': '<S366>:2' */
    if (BaseEngineController_A02_B.s347_Stall) {
      /* Transition: '<S366>:7' */
      BaseEngineController_A02_DWork.s366_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall_l;

      /* Entry 'Stall': '<S366>:1' */
      BaseEngineController_A02_B.s366_State = 1U;
    }
    break;

   case BaseEngineController_A02_IN_Stall_l:
    /* During 'Stall': '<S366>:1' */
    if (BaseEngineController_A02_B.s347_Crank) {
      /* Transition: '<S366>:5' */
      BaseEngineController_A02_DWork.s366_is_c2_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Crank;

      /* Entry 'Crank': '<S366>:3' */
      BaseEngineController_A02_B.s366_State = 2U;
    }
    break;

   default:
    /* Transition: '<S366>:4' */
    BaseEngineController_A02_DWork.s366_is_c2_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Stall_l;

    /* Entry 'Stall': '<S366>:1' */
    BaseEngineController_A02_B.s366_State = 1U;
    break;
  }

  /* End of Stateflow: '<S347>/Engine State Machine' */

  /* RelationalOperator: '<S707>/Compare' incorporates:
   *  Constant: '<S707>/Constant'
   */
  BaseEngineController_A02_B.s707_Compare =
    ((BaseEngineController_A02_B.s366_State == 2));

  /* If: '<S714>/If' incorporates:
   *  Inport: '<S735>/In1'
   *  Inport: '<S736>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S714>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S714>/override_enable'
   */
  if ((Engine_Crank_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S714>/NewValue' incorporates:
     *  ActionPort: '<S735>/Action Port'
     */
    rtb_Merge_ln = (Engine_Crank_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S714>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S714>/OldValue' incorporates:
     *  ActionPort: '<S736>/Action Port'
     */
    rtb_Merge_ln = BaseEngineController_A02_B.s707_Compare;

    /* End of Outputs for SubSystem: '<S714>/OldValue' */
  }

  /* End of If: '<S714>/If' */

  /* RelationalOperator: '<S708>/Compare' incorporates:
   *  Constant: '<S708>/Constant'
   */
  BaseEngineController_A02_B.s708_Compare =
    ((BaseEngineController_A02_B.s366_State == 3));

  /* If: '<S715>/If' incorporates:
   *  Inport: '<S737>/In1'
   *  Inport: '<S738>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S715>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S715>/override_enable'
   */
  if ((Engine_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S715>/NewValue' incorporates:
     *  ActionPort: '<S737>/Action Port'
     */
    rtb_Merge_l1 = (Engine_On_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S715>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S715>/OldValue' incorporates:
     *  ActionPort: '<S738>/Action Port'
     */
    rtb_Merge_l1 = BaseEngineController_A02_B.s708_Compare;

    /* End of Outputs for SubSystem: '<S715>/OldValue' */
  }

  /* End of If: '<S715>/If' */

  /* S-Function Block: <S408>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s408_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S408>/Product' incorporates:
   *  MinMax: '<S408>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S408>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (Torque_Filter_DataStore())) || rtIsNaN((Torque_Filter_DataStore())) ?
    rtb_DataTypeConversion_ff : (Torque_Filter_DataStore());

  /* S-Function (motohawk_sfun_read_canmsg): '<S388>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6362p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6362p0004,
      &messageObj);
    if ((BaseEngineController_A02_B.s388_ReadCANMessage_o1 + 1) >
        BaseEngineController_A02_B.s388_ReadCANMessage_o1)
      BaseEngineController_A02_B.s388_ReadCANMessage_o1++;
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
      BaseEngineController_A02_B.s388_ReadCANMessage_o2 = (((real_T) tmp0) /
        ((real_T) 10)) + ((real_T) -3200);
      BaseEngineController_A02_B.s388_ReadCANMessage_o3 = ((real_T) tmp1) +
        ((real_T) -32000);
      BaseEngineController_A02_B.s388_ReadCANMessage_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_A02_B.s388_ReadCANMessage_o1 = 0;
    }
  }

  /* If: '<S411>/If' incorporates:
   *  Inport: '<S450>/In1'
   *  Inport: '<S451>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S411>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S411>/override_enable'
   */
  if ((Est_Absolute_Torque_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S411>/NewValue' incorporates:
     *  ActionPort: '<S450>/Action Port'
     */
    rtb_Product1_e = (Est_Absolute_Torque_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S411>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S411>/OldValue' incorporates:
     *  ActionPort: '<S451>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s388_ReadCANMessage_o2;

    /* End of Outputs for SubSystem: '<S411>/OldValue' */
  }

  /* End of If: '<S411>/If' */

  /* Sum: '<S447>/Sum1' incorporates:
   *  Constant: '<S447>/Constant'
   *  Product: '<S447>/Product'
   *  Product: '<S447>/Product1'
   *  Sum: '<S447>/Sum'
   *  UnitDelay: '<S447>/Unit Delay'
   */
  rtb_Sum1_ix = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s447_UnitDelay_DSTATE + rtb_Product1_e *
    rtb_DataTypeConversion_ff;

  /* RelationalOperator: '<S705>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration'
   */
  BaseEngineController_A02_B.s705_RelationalOperator = ((rtb_Sum1_ix >=
    (Load_On_DataStore())));

  /* If: '<S716>/If' incorporates:
   *  Inport: '<S739>/In1'
   *  Inport: '<S740>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S716>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S716>/override_enable'
   */
  if ((Load_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S716>/NewValue' incorporates:
     *  ActionPort: '<S739>/Action Port'
     */
    rtb_Merge_mn = (Load_On_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S716>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S716>/OldValue' incorporates:
     *  ActionPort: '<S740>/Action Port'
     */
    rtb_Merge_mn = BaseEngineController_A02_B.s705_RelationalOperator;

    /* End of Outputs for SubSystem: '<S716>/OldValue' */
  }

  /* End of If: '<S716>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S709>/motohawk_fault_action1'
   *
   * Regarding '<S709>/motohawk_fault_action1':
     Get Fault Action Status: CEL
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    BaseEngineController_A02_B.s709_motohawk_fault_action1 =
      GetFaultActionStatus(0);
  }

  /* If: '<S720>/If' incorporates:
   *  Inport: '<S723>/In1'
   *  Inport: '<S724>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S720>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S720>/override_enable'
   */
  if ((CEL_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S720>/NewValue' incorporates:
     *  ActionPort: '<S723>/Action Port'
     */
    rtb_LogicalOperator1_a = (CEL_Status_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S720>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S720>/OldValue' incorporates:
     *  ActionPort: '<S724>/Action Port'
     */
    rtb_LogicalOperator1_a =
      BaseEngineController_A02_B.s709_motohawk_fault_action1;

    /* End of Outputs for SubSystem: '<S720>/OldValue' */
  }

  /* End of If: '<S720>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S709>/motohawk_fault_action'
   *
   * Regarding '<S709>/motohawk_fault_action':
     Get Fault Action Status: Wrench_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    BaseEngineController_A02_B.s709_motohawk_fault_action = GetFaultActionStatus
      (8);
  }

  /* If: '<S721>/If' incorporates:
   *  Inport: '<S725>/In1'
   *  Inport: '<S726>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S721>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S721>/override_enable'
   */
  if ((Wrench_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S721>/NewValue' incorporates:
     *  ActionPort: '<S725>/Action Port'
     */
    rtb_Merge_i5 = (Wrench_Status_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S721>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S721>/OldValue' incorporates:
     *  ActionPort: '<S726>/Action Port'
     */
    rtb_Merge_i5 = BaseEngineController_A02_B.s709_motohawk_fault_action;

    /* End of Outputs for SubSystem: '<S721>/OldValue' */
  }

  /* End of If: '<S721>/If' */

  /* MATLAB Function Block: '<S709>/MATLAB Function' */

  /* MATLAB Function 'Foreground/Outputs/CAN Out/112/MIL States/MATLAB Function': '<S719>:1' */
  if (rtb_Merge_i5 && rtb_LogicalOperator1_a) {
    /* '<S719>:1:3' */
    /* '<S719>:1:4' */
    BaseEngineController_A02_B.s719_faults = 3.0;
  } else if (rtb_Merge_i5) {
    /* '<S719>:1:5' */
    /* '<S719>:1:6' */
    BaseEngineController_A02_B.s719_faults = 1.0;
  } else if (rtb_LogicalOperator1_a) {
    /* '<S719>:1:7' */
    /* '<S719>:1:8' */
    BaseEngineController_A02_B.s719_faults = 2.0;
  } else {
    /* '<S719>:1:10' */
    BaseEngineController_A02_B.s719_faults = 0.0;
  }

  /* End of MATLAB Function Block: '<S709>/MATLAB Function' */
  /* If: '<S722>/If' incorporates:
   *  Inport: '<S727>/In1'
   *  Inport: '<S728>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S722>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S722>/override_enable'
   */
  if ((Faults_Light_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S722>/NewValue' incorporates:
     *  ActionPort: '<S727>/Action Port'
     */
    BaseEngineController_A02_B.s722_Merge =
      (Faults_Light_Status_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S722>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S722>/OldValue' incorporates:
     *  ActionPort: '<S728>/Action Port'
     */
    BaseEngineController_A02_B.s722_Merge =
      BaseEngineController_A02_B.s719_faults;

    /* End of Outputs for SubSystem: '<S722>/OldValue' */
  }

  /* End of If: '<S722>/If' */

  /* If: '<S717>/If' incorporates:
   *  Inport: '<S741>/In1'
   *  Inport: '<S742>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S717>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S717>/override_enable'
   */
  if ((Fault_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S717>/NewValue' incorporates:
     *  ActionPort: '<S741>/Action Port'
     */
    rtb_Merge_d = (Fault_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S717>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S717>/OldValue' incorporates:
     *  ActionPort: '<S742>/Action Port'
     */
    rtb_Merge_d = BaseEngineController_A02_B.s722_Merge;

    /* End of Outputs for SubSystem: '<S717>/OldValue' */
  }

  /* End of If: '<S717>/If' */

  /* If: '<S418>/If' incorporates:
   *  Inport: '<S464>/In1'
   *  Inport: '<S465>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S418>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S418>/override_enable'
   */
  if ((Drive_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S418>/NewValue' incorporates:
     *  ActionPort: '<S464>/Action Port'
     */
    BaseEngineController_A02_B.s418_Merge = (Drive_Temp_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S418>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S418>/OldValue' incorporates:
     *  ActionPort: '<S465>/Action Port'
     */
    BaseEngineController_A02_B.s418_Merge =
      BaseEngineController_A02_B.s388_ReadCANMessage1_o13;

    /* End of Outputs for SubSystem: '<S418>/OldValue' */
  }

  /* End of If: '<S418>/If' */

  /* If: '<S718>/If' incorporates:
   *  Inport: '<S743>/In1'
   *  Inport: '<S744>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S718>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S718>/override_enable'
   */
  if ((Inverter_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S718>/NewValue' incorporates:
     *  ActionPort: '<S743>/Action Port'
     */
    rtb_Merge_lo = (Inverter_Temp_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S718>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S718>/OldValue' incorporates:
     *  ActionPort: '<S744>/Action Port'
     */
    rtb_Merge_lo = BaseEngineController_A02_B.s418_Merge;

    /* End of Outputs for SubSystem: '<S718>/OldValue' */
  }

  /* End of If: '<S718>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S705>/Send CAN Messages' */
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
        uint8_T tmp7;
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

        if (rtb_Merge_lo < -40.0000000000F) {
          tmp7 = (uint8_T)(0U);
        } else if (rtb_Merge_lo > 215.0000000000F) {
          tmp7 = (uint8_T)(255U);
        } else {
          tmp7 = (uint8_T)(rtb_Merge_lo - (-40.0000000000F));
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
          | ((((uint8_T *)(&tmp6))[0] & 0x00000003) << 1) | ((((uint8_T *)(&tmp7))
          [0] & 0x00000080) >> 7) ;
        msg_data[4] = ((((uint8_T *)(&tmp7))[0] & 0x0000007F) << 1) ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x209UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Logic: '<S387>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S387>/motohawk_fault_status1'
   */
  rtb_LogicalOperator1_a = !IsFaultActive(0);

  /* S-Function (motohawk_sfun_read_canmsg): '<S387>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6285p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6285p0001,
      &messageObj);
    if ((BaseEngineController_A02_B.s387_AgeCount + 1) >
        BaseEngineController_A02_B.s387_AgeCount)
      BaseEngineController_A02_B.s387_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint16_T tmp4 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[1] & 0x000000F8) >> 3) ;
      ((uint8_T *)(&tmp4))[1] = ((messageObj.u1DataArr[2] & 0x000000F8) >> 3) |
        ((messageObj.u1DataArr[1] & 0x00000007) << 5) ;
      BaseEngineController_A02_B.s387_GensetEnable_g = (boolean_T) tmp0;
      BaseEngineController_A02_B.s387_GensetEnable = (real_T) tmp1;
      BaseEngineController_A02_B.s387_ReadCANMessage_o4 = (real_T) tmp2;
      BaseEngineController_A02_B.s387_ReadCANMessage_o5 = (real_T) tmp3;
      BaseEngineController_A02_B.s387_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_A02_B.s387_AgeCount = 0;
    }
  }

  /* If: '<S392>/If' incorporates:
   *  Inport: '<S398>/In1'
   *  Inport: '<S399>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S392>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S392>/override_enable'
   */
  if ((Genset_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S392>/NewValue' incorporates:
     *  ActionPort: '<S398>/Action Port'
     */
    rtb_Merge_i5 = (Genset_Enable_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S392>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S392>/OldValue' incorporates:
     *  ActionPort: '<S399>/Action Port'
     */
    rtb_Merge_i5 = BaseEngineController_A02_B.s387_GensetEnable_g;

    /* End of Outputs for SubSystem: '<S392>/OldValue' */
  }

  /* End of If: '<S392>/If' */

  /* Logic: '<S387>/Logical Operator2' */
  rtb_GensetEnable = (rtb_Merge_i5 && rtb_LogicalOperator1_a);

  /* DataTypeConversion: '<S127>/Data Type Conversion' */
  rtb_Product1_e = (real_T)rtb_GensetEnable;

  /* If: '<S393>/If' incorporates:
   *  Inport: '<S400>/In1'
   *  Inport: '<S401>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S393>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S393>/override_enable'
   */
  if ((Genset_Load_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S393>/NewValue' incorporates:
     *  ActionPort: '<S400>/Action Port'
     */
    rtb_Merge_oq = (Genset_Load_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S393>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S393>/OldValue' incorporates:
     *  ActionPort: '<S401>/Action Port'
     */
    rtb_Merge_oq = BaseEngineController_A02_B.s387_GensetEnable;

    /* End of Outputs for SubSystem: '<S393>/OldValue' */
  }

  /* End of If: '<S393>/If' */

  /* If: '<S395>/If' incorporates:
   *  Inport: '<S404>/In1'
   *  Inport: '<S405>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S395>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S395>/override_enable'
   */
  if ((Load_Throttle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S395>/NewValue' incorporates:
     *  ActionPort: '<S404>/Action Port'
     */
    rtb_Merge_dn = (Load_Throttle_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S395>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S395>/OldValue' incorporates:
     *  ActionPort: '<S405>/Action Port'
     */
    rtb_Merge_dn = BaseEngineController_A02_B.s387_ReadCANMessage_o5;

    /* End of Outputs for SubSystem: '<S395>/OldValue' */
  }

  /* End of If: '<S395>/If' */

  /* Product: '<S387>/Product' incorporates:
   *  Constant: '<S387>/Constant1'
   */
  BaseEngineController_A02_B.s387_Product =
    -BaseEngineController_A02_B.s387_ReadCANMessage_o6;

  /* If: '<S396>/If' incorporates:
   *  Inport: '<S406>/In1'
   *  Inport: '<S407>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S396>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S396>/override_enable'
   */
  if ((Load_RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S396>/NewValue' incorporates:
     *  ActionPort: '<S406>/Action Port'
     */
    rtb_Merge_o4 = (Load_RPM_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S396>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S396>/OldValue' incorporates:
     *  ActionPort: '<S407>/Action Port'
     */
    rtb_Merge_o4 = BaseEngineController_A02_B.s387_Product;

    /* End of Outputs for SubSystem: '<S396>/OldValue' */
  }

  /* End of If: '<S396>/If' */

  /* Stateflow: '<S127>/Remy Control' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration6'
   */

  /* Gateway: Foreground/Control/Controller/Hybrid/Remy Control */
  /* During: Foreground/Control/Controller/Hybrid/Remy Control */
  if (BaseEngineController_A02_DWork.s135_is_active_c5_BaseEngineController_A02 ==
      0) {
    /* Entry: Foreground/Control/Controller/Hybrid/Remy Control */
    BaseEngineController_A02_DWork.s135_is_active_c5_BaseEngineController_A02 =
      1U;

    /* Transition: '<S135>:41' */
    BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
      BaseEngineController_A02_IN_default;
  } else {
    switch (BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02)
    {
     case BaseEngineController_A02_IN_cranking:
      /* During 'cranking': '<S135>:20' */
      if (BaseEngineController_A02_DWork.s135_count >= (Crank_Time_DataStore()))
      {
        /* Transition: '<S135>:24' */
        BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_startFail;

        /* Entry 'startFail': '<S135>:23' */
        BaseEngineController_A02_DWork.s135_count = 0.0;
      } else if (!(rtb_Product1_e != 0.0)) {
        /* Transition: '<S135>:25' */
        BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (BaseEngineController_A02_B.s543_Sum1 >= (Caught_RPM_DataStore()))
      {
        /* Transition: '<S135>:32' */
        BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_idle;
      } else {
        BaseEngineController_A02_DWork.s135_count =
          BaseEngineController_A02_DWork.s135_count + 1.0;
        BaseEngineController_A02_B.s135_remyEn = 1.0;
        BaseEngineController_A02_B.s135_maxRPM = (Max_Cranking_RPM_DataStore());
        BaseEngineController_A02_B.s135_motorTQ = (Cranking_Torque_DataStore());
      }
      break;

     case BaseEngineController_A02_IN_default:
      /* During 'default': '<S135>:14' */
      if (rtb_Product1_e != 0.0) {
        /* Transition: '<S135>:21' */
        BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_cranking;

        /* Entry 'cranking': '<S135>:20' */
        BaseEngineController_A02_DWork.s135_count = 0.0;
      } else {
        BaseEngineController_A02_B.s135_remyEn = 0.0;
        BaseEngineController_A02_B.s135_maxRPM = 0.0;
        BaseEngineController_A02_B.s135_motorTQ = 0.0;
        BaseEngineController_A02_B.s135_generatingTQ = 0.0;
        BaseEngineController_A02_B.s135_APP = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_generating:
      /* During 'generating': '<S135>:36' */
      if (!(rtb_Product1_e != 0.0)) {
        /* Transition: '<S135>:39' */
        BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (!(rtb_Merge_oq != 0.0)) {
        /* Transition: '<S135>:45' */
        BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_rampDown;
      } else {
        BaseEngineController_A02_B.s135_APP = rtb_Merge_dn;
        BaseEngineController_A02_B.s135_generatingTQ =
          (Generating_Max_Torque_DataStore());
        BaseEngineController_A02_B.s135_maxRPM = rtb_Merge_o4;
      }
      break;

     case BaseEngineController_A02_IN_idle:
      /* During 'idle': '<S135>:31' */
      if (!(rtb_Product1_e != 0.0)) {
        /* Transition: '<S135>:35' */
        BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (rtb_Merge_oq != 0.0) {
        /* Transition: '<S135>:37' */
        BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_generating;
      } else {
        BaseEngineController_A02_B.s135_remyEn = 1.0;
        BaseEngineController_A02_B.s135_maxRPM = rtb_Merge_o4;
        BaseEngineController_A02_B.s135_generatingTQ = 0.0;
        BaseEngineController_A02_B.s135_motorTQ = 0.0;
        BaseEngineController_A02_B.s135_APP = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_rampDown:
      /* During 'rampDown': '<S135>:49' */
      if (BaseEngineController_A02_B.s543_Sum1 <= 1400.0) {
        /* Transition: '<S135>:50' */
        BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_idle;
      } else {
        BaseEngineController_A02_B.s135_APP = 0.0;
        BaseEngineController_A02_B.s135_generatingTQ =
          (Generating_Max_Torque_DataStore());
      }
      break;

     case BaseEngineController_A02_IN_startFail:
      /* During 'startFail': '<S135>:23' */
      if (!(rtb_Product1_e != 0.0)) {
        /* Transition: '<S135>:26' */
        BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else if (BaseEngineController_A02_DWork.s135_count >=
                 (Crank_Wait_Before_Retry_DataStore())) {
        /* Transition: '<S135>:29' */
        BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
          BaseEngineController_A02_IN_cranking;

        /* Entry 'cranking': '<S135>:20' */
        BaseEngineController_A02_DWork.s135_count = 0.0;
      } else {
        BaseEngineController_A02_DWork.s135_count =
          BaseEngineController_A02_DWork.s135_count + 1.0;
        BaseEngineController_A02_B.s135_remyEn = 0.0;
        BaseEngineController_A02_B.s135_maxRPM = 0.0;
        BaseEngineController_A02_B.s135_motorTQ = 0.0;
      }
      break;

     default:
      /* Transition: '<S135>:41' */
      BaseEngineController_A02_DWork.s135_is_c5_BaseEngineController_A02 =
        BaseEngineController_A02_IN_default;
      break;
    }
  }

  /* End of Stateflow: '<S127>/Remy Control' */
  /* If: '<S745>/If' incorporates:
   *  Inport: '<S758>/In1'
   *  Inport: '<S759>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S745>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S745>/override_enable'
   */
  if ((Run_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S745>/NewValue' incorporates:
     *  ActionPort: '<S758>/Action Port'
     */
    rtb_Merge_k = (Run_Request_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S745>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S745>/OldValue' incorporates:
     *  ActionPort: '<S759>/Action Port'
     */
    rtb_Merge_k = BaseEngineController_A02_B.s135_remyEn;

    /* End of Outputs for SubSystem: '<S745>/OldValue' */
  }

  /* End of If: '<S745>/If' */

  /* If: '<S746>/If' incorporates:
   *  Constant: '<S706>/Constant6'
   *  Inport: '<S760>/In1'
   *  Inport: '<S761>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S746>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S746>/override_enable'
   */
  if ((Control_Mode_Cmd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S746>/NewValue' incorporates:
     *  ActionPort: '<S760>/Action Port'
     */
    rtb_Merge_de = (Control_Mode_Cmd_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S746>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S746>/OldValue' incorporates:
     *  ActionPort: '<S761>/Action Port'
     */
    rtb_Merge_de = 1.0;

    /* End of Outputs for SubSystem: '<S746>/OldValue' */
  }

  /* End of If: '<S746>/If' */

  /* If: '<S750>/If' incorporates:
   *  Constant: '<S706>/Constant4'
   *  Inport: '<S768>/In1'
   *  Inport: '<S769>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S750>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S750>/override_enable'
   */
  if ((Motoring_Tq_Curve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S750>/NewValue' incorporates:
     *  ActionPort: '<S768>/Action Port'
     */
    rtb_Merge_g = (Motoring_Tq_Curve_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S750>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S750>/OldValue' incorporates:
     *  ActionPort: '<S769>/Action Port'
     */
    rtb_Merge_g = 0.0;

    /* End of Outputs for SubSystem: '<S750>/OldValue' */
  }

  /* End of If: '<S750>/If' */

  /* If: '<S751>/If' incorporates:
   *  Constant: '<S706>/Constant5'
   *  Inport: '<S770>/In1'
   *  Inport: '<S771>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S751>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S751>/override_enable'
   */
  if ((Generating_Tq_Curve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S751>/NewValue' incorporates:
     *  ActionPort: '<S770>/Action Port'
     */
    rtb_Merge_cg = (Generating_Tq_Curve_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S751>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S751>/OldValue' incorporates:
     *  ActionPort: '<S771>/Action Port'
     */
    rtb_Merge_cg = 0.0;

    /* End of Outputs for SubSystem: '<S751>/OldValue' */
  }

  /* End of If: '<S751>/If' */

  /* If: '<S752>/If' incorporates:
   *  Inport: '<S772>/In1'
   *  Inport: '<S773>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S752>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S752>/override_enable'
   */
  if ((Speed_Voltage_Torque_CMD_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S752>/NewValue' incorporates:
     *  ActionPort: '<S772>/Action Port'
     */
    rtb_Merge_ig = (Speed_Voltage_Torque_CMD_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S752>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S752>/OldValue' incorporates:
     *  ActionPort: '<S773>/Action Port'
     */
    rtb_Merge_ig = BaseEngineController_A02_B.s135_maxRPM;

    /* End of Outputs for SubSystem: '<S752>/OldValue' */
  }

  /* End of If: '<S752>/If' */

  /* If: '<S753>/If' incorporates:
   *  Inport: '<S774>/In1'
   *  Inport: '<S775>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S753>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S753>/override_enable'
   */
  if ((Motoring_Torque_Lim_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S753>/NewValue' incorporates:
     *  ActionPort: '<S774>/Action Port'
     */
    rtb_Merge_d3 = (Motoring_Torque_Lim_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S753>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S753>/OldValue' incorporates:
     *  ActionPort: '<S775>/Action Port'
     */
    rtb_Merge_d3 = BaseEngineController_A02_B.s135_motorTQ;

    /* End of Outputs for SubSystem: '<S753>/OldValue' */
  }

  /* End of If: '<S753>/If' */

  /* If: '<S754>/If' incorporates:
   *  Inport: '<S776>/In1'
   *  Inport: '<S777>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S754>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S754>/override_enable'
   */
  if ((Generating_Torque_Lim_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S754>/NewValue' incorporates:
     *  ActionPort: '<S776>/Action Port'
     */
    rtb_Merge_gg = (Generating_Torque_Lim_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S754>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S754>/OldValue' incorporates:
     *  ActionPort: '<S777>/Action Port'
     */
    rtb_Merge_gg = BaseEngineController_A02_B.s135_generatingTQ;

    /* End of Outputs for SubSystem: '<S754>/OldValue' */
  }

  /* End of If: '<S754>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S706>/Send CAN Messages' */
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

  /* If: '<S747>/If' incorporates:
   *  Constant: '<S706>/Constant1'
   *  Inport: '<S762>/In1'
   *  Inport: '<S763>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S747>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S747>/override_enable'
   */
  if ((Aux_PWM_State_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S747>/NewValue' incorporates:
     *  ActionPort: '<S762>/Action Port'
     */
    rtb_Merge_gc = (Aux_PWM_State_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S747>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S747>/OldValue' incorporates:
     *  ActionPort: '<S763>/Action Port'
     */
    rtb_Merge_gc = 0.0;

    /* End of Outputs for SubSystem: '<S747>/OldValue' */
  }

  /* End of If: '<S747>/If' */

  /* If: '<S748>/If' incorporates:
   *  Constant: '<S706>/Constant2'
   *  Inport: '<S764>/In1'
   *  Inport: '<S765>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S748>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S748>/override_enable'
   */
  if ((Aux_PWM_DutyCycle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S748>/NewValue' incorporates:
     *  ActionPort: '<S764>/Action Port'
     */
    rtb_Merge_eb = (Aux_PWM_DutyCycle_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S748>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S748>/OldValue' incorporates:
     *  ActionPort: '<S765>/Action Port'
     */
    rtb_Merge_eb = 0.0;

    /* End of Outputs for SubSystem: '<S748>/OldValue' */
  }

  /* End of If: '<S748>/If' */

  /* If: '<S749>/If' incorporates:
   *  Constant: '<S706>/Constant3'
   *  Inport: '<S766>/In1'
   *  Inport: '<S767>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S749>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S749>/override_enable'
   */
  if ((Aux_PWM_Freq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S749>/NewValue' incorporates:
     *  ActionPort: '<S766>/Action Port'
     */
    rtb_Merge_bi = (Aux_PWM_Freq_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S749>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S749>/OldValue' incorporates:
     *  ActionPort: '<S767>/Action Port'
     */
    rtb_Merge_bi = 0.0;

    /* End of Outputs for SubSystem: '<S749>/OldValue' */
  }

  /* End of If: '<S749>/If' */

  /* If: '<S757>/If' incorporates:
   *  Constant: '<S706>/Constant'
   *  Inport: '<S782>/In1'
   *  Inport: '<S783>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S757>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S757>/override_enable'
   */
  if ((XDRP_Supply_State_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S757>/NewValue' incorporates:
     *  ActionPort: '<S782>/Action Port'
     */
    rtb_Merge_cq = (XDRP_Supply_State_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S757>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S757>/OldValue' incorporates:
     *  ActionPort: '<S783>/Action Port'
     */
    rtb_Merge_cq = 0.0;

    /* End of Outputs for SubSystem: '<S757>/OldValue' */
  }

  /* End of If: '<S757>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S706>/Send CAN Messages2' */
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

  /* If: '<S755>/If' incorporates:
   *  Inport: '<S778>/In1'
   *  Inport: '<S779>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S755>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S755>/override_enable'
   */
  if ((SecondartSpeedLim_CenterPT_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S755>/NewValue' incorporates:
     *  ActionPort: '<S778>/Action Port'
     */
    rtb_Merge_df = (SecondartSpeedLim_CenterPT_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S755>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S755>/OldValue' incorporates:
     *  ActionPort: '<S779>/Action Port'
     */
    rtb_Merge_df = (SecondarySpdLim_Cal_DataStore());

    /* End of Outputs for SubSystem: '<S755>/OldValue' */
  }

  /* End of If: '<S755>/If' */

  /* If: '<S756>/If' incorporates:
   *  Inport: '<S780>/In1'
   *  Inport: '<S781>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S706>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S756>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S756>/override_enable'
   */
  if ((SecondaryVoltLim_CenterPT_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S756>/NewValue' incorporates:
     *  ActionPort: '<S780>/Action Port'
     */
    rtb_Merge_a = (SecondaryVoltLim_CenterPT_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S756>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S756>/OldValue' incorporates:
     *  ActionPort: '<S781>/Action Port'
     */
    rtb_Merge_a = (SecondaryVoltLim_Cal_DataStore());

    /* End of Outputs for SubSystem: '<S756>/OldValue' */
  }

  /* End of If: '<S756>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S706>/Send CAN Messages1' */
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

  /* S-Function (motohawk_sfun_probe): '<S706>/motohawk_probe7' */
  (SecondarySpeedLim_CenterPT_Prb_DataStore()) = (SecondarySpdLim_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S706>/motohawk_probe8' */
  (SecondaryVoltLim_CenterPT_Prb_DataStore()) = (SecondaryVoltLim_Cal_DataStore());

  /* S-Function Block: <S616>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s616_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S616>/Product' incorporates:
   *  MinMax: '<S616>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S616>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (SysVoltFilterConst_DataStore())) || rtIsNaN((SysVoltFilterConst_DataStore()))
    ? rtb_DataTypeConversion_ff : (SysVoltFilterConst_DataStore());

  /* Logic: '<S552>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S552>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S552>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(60) || IsFaultActive(61));

  /* Logic: '<S552>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S552>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S552>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(60) || IsFaultSuspected(61));

  /* S-Function Block: <S384>/motohawk_ain14 Resource: SysVoltage */
  {
    extern NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    SysVoltage_AnalogInput_Get(&BaseEngineController_A02_B.s384_motohawk_ain14,
      NULL);
  }

  /* DataTypeConversion: '<S552>/Data Type Conversion' */
  rtb_DataTypeConversion_kk = BaseEngineController_A02_B.s384_motohawk_ain14;

  /* Product: '<S552>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S552>/motohawk_calibration4'
   */
  rtb_Product1_e = (real_T)rtb_DataTypeConversion_kk * (SysVoltGain_DataStore());

  /* Sum: '<S552>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S552>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s552_Sum1 = rtb_Product1_e + (SysVoltOfst_DataStore
    ());

  /* UnitDelay: '<S552>/Unit Delay1' */
  rtb_UnitDelay1_az = BaseEngineController_A02_DWork.s552_UnitDelay1_DSTATE;

  /* If: '<S552>/If' incorporates:
   *  Logic: '<S552>/Logical Operator5'
   *  Logic: '<S552>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S552>/If Action Subsystem' incorporates:
     *  ActionPort: '<S617>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_az, &rtb_Merge_cs);

    /* End of Outputs for SubSystem: '<S552>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S552>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S618>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_cs);

    /* End of Outputs for SubSystem: '<S552>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S552>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S619>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s552_Sum1, &rtb_Merge_cs);

    /* End of Outputs for SubSystem: '<S552>/If Action Subsystem2' */
  }

  /* End of If: '<S552>/If' */

  /* Sum: '<S621>/Sum1' incorporates:
   *  Constant: '<S621>/Constant'
   *  Product: '<S621>/Product'
   *  Product: '<S621>/Product1'
   *  Sum: '<S621>/Sum'
   *  UnitDelay: '<S621>/Unit Delay'
   */
  rtb_Sum1_gj = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s621_UnitDelay_DSTATE + rtb_Merge_cs *
    rtb_DataTypeConversion_ff;

  /* If: '<S620>/If' incorporates:
   *  Inport: '<S622>/In1'
   *  Inport: '<S623>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S620>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S620>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S620>/NewValue' incorporates:
     *  ActionPort: '<S622>/Action Port'
     */
    BaseEngineController_A02_B.s620_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S620>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S620>/OldValue' incorporates:
     *  ActionPort: '<S623>/Action Port'
     */
    BaseEngineController_A02_B.s620_Merge = rtb_Sum1_gj;

    /* End of Outputs for SubSystem: '<S620>/OldValue' */
  }

  /* End of If: '<S620>/If' */

  /* S-Function Block: <S340>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_A02_B.s620_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s620_Merge, (SysVolt09IdxArr_DataStore()), 9,
       (SysVolt09Idx_DataStore()));
    BaseEngineController_A02_B.s340_motohawk_prelookup = (SysVolt09Idx_DataStore
      ());
  }

  /* Outputs for Enabled SubSystem: '<S15>/Stall' incorporates:
   *  EnablePort: '<S131>/Enable'
   */
  /* RelationalOperator: '<S132>/RelOp' incorporates:
   *  Constant: '<S132>/Constant'
   */
  if (BaseEngineController_A02_B.s366_State == 1) {
    if (!BaseEngineController_A02_DWork.s15_Stall_MODE) {
      /* InitializeConditions for UnitDelay: '<S263>/Unit Delay' */
      BaseEngineController_A02_DWork.s263_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S264>/Unit Delay' */
      BaseEngineController_A02_DWork.s264_UnitDelay_DSTATE = 0.0;
      BaseEngineController_A02_DWork.s15_Stall_MODE = TRUE;
    }

    /* UnitDelay: '<S263>/Unit Delay' */
    BaseEngineController_A02_B.s263_UnitDelay =
      BaseEngineController_A02_DWork.s263_UnitDelay_DSTATE;

    /* Switch: '<S261>/Switch' incorporates:
     *  Constant: '<S261>/Constant'
     *  RelationalOperator: '<S261>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S261>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S261>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore()) > 0.0) {
      rtb_LogicalOperator1_a = TRUE;
    } else {
      rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s263_UnitDelay <
        (FuelPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S261>/Switch' */
    /* S-Function Block: <S263>/motohawk_delta_time */
    rtb_motohawk_delta_time_o = 0.005;

    /* Sum: '<S263>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S263>/motohawk_delta_time'
     */
    rtb_Product1_e = rtb_motohawk_delta_time_o +
      BaseEngineController_A02_B.s263_UnitDelay;

    /* UnitDelay: '<S264>/Unit Delay' */
    BaseEngineController_A02_B.s264_UnitDelay =
      BaseEngineController_A02_DWork.s264_UnitDelay_DSTATE;

    /* Switch: '<S262>/Switch' incorporates:
     *  Constant: '<S262>/Constant'
     *  RelationalOperator: '<S262>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration1'
     */
    if ((Constant_Oil_Pump_DataStore()) > 0.0) {
      rtb_Merge_i5 = TRUE;
    } else {
      rtb_Merge_i5 = (BaseEngineController_A02_B.s264_UnitDelay <
                      (OilPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S262>/Switch' */
    /* S-Function Block: <S264>/motohawk_delta_time */
    rtb_motohawk_delta_time_ny = 0.005;

    /* Sum: '<S264>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S264>/motohawk_delta_time'
     */
    rtb_Merge_oq = rtb_motohawk_delta_time_ny +
      BaseEngineController_A02_B.s264_UnitDelay;

    /* ZeroOrderHold: '<S131>/Zero-Order Hold1' incorporates:
     *  Constant: '<S131>/EGR'
     */
    BaseEngineController_A02_B.s128_EGR = 0.0;

    /* ZeroOrderHold: '<S131>/Zero-Order Hold10' incorporates:
     *  Constant: '<S131>/No Mult'
     */
    BaseEngineController_A02_B.s128_FuelMult = 0.0;

    /* ZeroOrderHold: '<S131>/Zero-Order Hold11' incorporates:
     *  Constant: '<S131>/O2 Heater'
     */
    BaseEngineController_A02_B.s128_O2Heater = TRUE;

    /* ZeroOrderHold: '<S131>/Zero-Order Hold2' */
    BaseEngineController_A02_B.s128_OILP = rtb_Merge_i5;

    /* ZeroOrderHold: '<S131>/Zero-Order Hold3' */
    BaseEngineController_A02_B.s128_SparkAdv =
      BaseEngineController_A02_ConstB.s131_motohawk_replicate2;

    /* ZeroOrderHold: '<S131>/Zero-Order Hold4' incorporates:
     *  Constant: '<S131>/No Spark'
     */
    BaseEngineController_A02_B.s128_SparkEnergy = 0.0;

    /* ZeroOrderHold: '<S131>/Zero-Order Hold5' incorporates:
     *  Constant: '<S131>/No Start EOI'
     */
    BaseEngineController_A02_B.s128_MakeUpEOI = 0.0;

    /* ZeroOrderHold: '<S131>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_A02_B.s128_FPC[0]), (void *)
           (&BaseEngineController_A02_ConstB.s131_motohawk_replicate[0]), sizeof
           (real_T) << 3U);

    /* ZeroOrderHold: '<S131>/Zero-Order Hold7' */
    BaseEngineController_A02_B.s128_FUELP = rtb_LogicalOperator1_a;

    /* ZeroOrderHold: '<S131>/Zero-Order Hold8' incorporates:
     *  Constant: '<S131>/No Start Fuel Timing'
     */
    BaseEngineController_A02_B.s128_SOI = 0.0;

    /* ZeroOrderHold: '<S131>/Zero-Order Hold9' incorporates:
     *  Constant: '<S131>/Closed Throttle'
     */
    BaseEngineController_A02_B.s128_Throttle = 0.0;

    /* Update for UnitDelay: '<S263>/Unit Delay' */
    BaseEngineController_A02_DWork.s263_UnitDelay_DSTATE = rtb_Product1_e;

    /* Update for UnitDelay: '<S264>/Unit Delay' */
    BaseEngineController_A02_DWork.s264_UnitDelay_DSTATE = rtb_Merge_oq;
  } else {
    if (BaseEngineController_A02_DWork.s15_Stall_MODE) {
      BaseEngineController_A02_DWork.s15_Stall_MODE = FALSE;
    }
  }

  /* End of RelationalOperator: '<S132>/RelOp' */
  /* End of Outputs for SubSystem: '<S15>/Stall' */
  /* Logic: '<S662>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(66) || IsFaultActive(67));

  /* Logic: '<S662>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(66) || IsFaultSuspected(67));

  /* S-Function Block: <S386>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S655>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S386>/motohawk_ain6'
   */
  rtb_Product1_e = (real_T)rtb_motohawk_ain6;

  /* Switch: '<S655>/Switch' incorporates:
   *  Fcn: '<S655>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration2'
   */
  if ((TPS1Rev_Polarity_DataStore())) {
    BaseEngineController_A02_B.s655_Switch = 1023.0 - rtb_Product1_e;
  } else {
    BaseEngineController_A02_B.s655_Switch = rtb_Product1_e;
  }

  /* End of Switch: '<S655>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S659>/motohawk_data_read' */
  rtb_motohawk_data_read1_k = TPS1Raw_Adpt_Low_DataStore();

  /* MinMax: '<S659>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration9'
   */
  rtb_Switch_o = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s659_MinMax = (rtb_Switch_o <=
    (TPS1Adapt_Low_Max_DataStore())) || rtIsNaN((TPS1Adapt_Low_Max_DataStore()))
    ? rtb_Switch_o : (TPS1Adapt_Low_Max_DataStore());

  /* Sum: '<S655>/Sum2' */
  rtb_Product1_e = BaseEngineController_A02_B.s655_Switch -
    BaseEngineController_A02_B.s659_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S659>/motohawk_data_read1' */
  rtb_motohawk_data_read1_k = TPS1Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S659>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration11'
   */
  rtb_Switch_o = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s659_MinMax1 = (rtb_Switch_o >=
    (TPS1Adapt_Hi_Min_DataStore())) || rtIsNaN((TPS1Adapt_Hi_Min_DataStore())) ?
    rtb_Switch_o : (TPS1Adapt_Hi_Min_DataStore());

  /* Gain: '<S655>/Gain2' incorporates:
   *  Product: '<S655>/Product1'
   *  Sum: '<S655>/Sum1'
   */
  rtb_DataTypeConversion_ff = rtb_Product1_e /
    (BaseEngineController_A02_B.s659_MinMax1 -
     BaseEngineController_A02_B.s659_MinMax) * 100.0;

  /* MinMax: '<S663>/MinMax' incorporates:
   *  Constant: '<S655>/Constant1'
   */
  rtb_DataTypeConversion_ff = rtb_DataTypeConversion_ff >= 0.0 ?
    rtb_DataTypeConversion_ff : 0.0;

  /* MinMax: '<S663>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration1'
   */
  BaseEngineController_A02_B.s663_MinMax1 = (rtb_DataTypeConversion_ff <=
    (TPS1MaxLimit_DataStore())) || rtIsNaN((TPS1MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS1MaxLimit_DataStore());

  /* S-Function Block: <S661>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s661_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S661>/Product' incorporates:
   *  MinMax: '<S661>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (TPS1FilterConst_DataStore())) || rtIsNaN((TPS1FilterConst_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS1FilterConst_DataStore());

  /* Sum: '<S669>/Sum1' incorporates:
   *  Constant: '<S669>/Constant'
   *  Product: '<S669>/Product'
   *  Product: '<S669>/Product1'
   *  Sum: '<S669>/Sum'
   *  UnitDelay: '<S669>/Unit Delay'
   */
  rtb_Sum1_m2 = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s669_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s663_MinMax1 * rtb_DataTypeConversion_ff;

  /* UnitDelay: '<S662>/Unit Delay1' */
  rtb_UnitDelay1_j = BaseEngineController_A02_DWork.s662_UnitDelay1_DSTATE;

  /* If: '<S662>/If' incorporates:
   *  Logic: '<S662>/Logical Operator5'
   *  Logic: '<S662>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S662>/If Action Subsystem' incorporates:
     *  ActionPort: '<S670>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_j, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S662>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S662>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S671>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((TPS1DfltValue_DataStore()),
      &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S662>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S662>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S672>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_Sum1_m2, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S662>/If Action Subsystem2' */
  }

  /* End of If: '<S662>/If' */

  /* If: '<S673>/If' incorporates:
   *  Inport: '<S674>/In1'
   *  Inport: '<S675>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S673>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S673>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S673>/NewValue' incorporates:
     *  ActionPort: '<S674>/Action Port'
     */
    BaseEngineController_A02_B.s673_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S673>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S673>/OldValue' incorporates:
     *  ActionPort: '<S675>/Action Port'
     */
    BaseEngineController_A02_B.s673_Merge = rtb_Merge_h;

    /* End of Outputs for SubSystem: '<S673>/OldValue' */
  }

  /* End of If: '<S673>/If' */

  /* Logic: '<S679>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S679>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S679>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(72) || IsFaultActive(73));

  /* Logic: '<S679>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S679>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S679>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(72) || IsFaultSuspected(73));

  /* S-Function Block: <S386>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get(&rtb_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S656>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S386>/motohawk_ain9'
   */
  rtb_Product1_e = (real_T)rtb_motohawk_ain9;

  /* Switch: '<S656>/Switch' incorporates:
   *  Fcn: '<S656>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration2'
   */
  if ((TPS2Rev_Polarity_DataStore())) {
    BaseEngineController_A02_B.s656_Switch = 1023.0 - rtb_Product1_e;
  } else {
    BaseEngineController_A02_B.s656_Switch = rtb_Product1_e;
  }

  /* End of Switch: '<S656>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S676>/motohawk_data_read' */
  rtb_motohawk_data_read1_k = TPS2Raw_Adpt_Low_DataStore();

  /* MinMax: '<S676>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration9'
   */
  rtb_Switch_o = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s676_MinMax = (rtb_Switch_o <=
    (TPS2Adapt_Low_Max_DataStore())) || rtIsNaN((TPS2Adapt_Low_Max_DataStore()))
    ? rtb_Switch_o : (TPS2Adapt_Low_Max_DataStore());

  /* Sum: '<S656>/Sum2' */
  rtb_Product1_e = BaseEngineController_A02_B.s656_Switch -
    BaseEngineController_A02_B.s676_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S676>/motohawk_data_read1' */
  rtb_motohawk_data_read1_k = TPS2Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S676>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration11'
   */
  rtb_Switch_o = (real_T)rtb_motohawk_data_read1_k;
  BaseEngineController_A02_B.s676_MinMax1 = (rtb_Switch_o >=
    (TPS2Adapt_Hi_Min_DataStore())) || rtIsNaN((TPS2Adapt_Hi_Min_DataStore())) ?
    rtb_Switch_o : (TPS2Adapt_Hi_Min_DataStore());

  /* Gain: '<S656>/Gain2' incorporates:
   *  Product: '<S656>/Product1'
   *  Sum: '<S656>/Sum1'
   */
  rtb_DataTypeConversion_ff = rtb_Product1_e /
    (BaseEngineController_A02_B.s676_MinMax1 -
     BaseEngineController_A02_B.s676_MinMax) * 100.0;

  /* MinMax: '<S680>/MinMax' incorporates:
   *  Constant: '<S656>/Constant1'
   */
  rtb_DataTypeConversion_ff = rtb_DataTypeConversion_ff >= 0.0 ?
    rtb_DataTypeConversion_ff : 0.0;

  /* MinMax: '<S680>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration1'
   */
  BaseEngineController_A02_B.s680_MinMax1 = (rtb_DataTypeConversion_ff <=
    (TPS2MaxLimit_DataStore())) || rtIsNaN((TPS2MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS2MaxLimit_DataStore());

  /* S-Function Block: <S678>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s678_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S678>/Product' incorporates:
   *  MinMax: '<S678>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S678>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (TPS2FilterConst_DataStore())) || rtIsNaN((TPS2FilterConst_DataStore())) ?
    rtb_DataTypeConversion_ff : (TPS2FilterConst_DataStore());

  /* Sum: '<S686>/Sum1' incorporates:
   *  Constant: '<S686>/Constant'
   *  Product: '<S686>/Product'
   *  Product: '<S686>/Product1'
   *  Sum: '<S686>/Sum'
   *  UnitDelay: '<S686>/Unit Delay'
   */
  rtb_Sum1_dp = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s686_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s680_MinMax1 * rtb_DataTypeConversion_ff;

  /* UnitDelay: '<S679>/Unit Delay1' */
  rtb_UnitDelay1_d = BaseEngineController_A02_DWork.s679_UnitDelay1_DSTATE;

  /* If: '<S679>/If' incorporates:
   *  Logic: '<S679>/Logical Operator5'
   *  Logic: '<S679>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S679>/If Action Subsystem' incorporates:
     *  ActionPort: '<S687>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_d, &rtb_Merge_p);

    /* End of Outputs for SubSystem: '<S679>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S679>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S688>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((TPS2DfltValue_DataStore()),
      &rtb_Merge_p);

    /* End of Outputs for SubSystem: '<S679>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S679>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S689>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_Sum1_dp, &rtb_Merge_p);

    /* End of Outputs for SubSystem: '<S679>/If Action Subsystem2' */
  }

  /* End of If: '<S679>/If' */

  /* If: '<S690>/If' incorporates:
   *  Inport: '<S691>/In1'
   *  Inport: '<S692>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S690>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S690>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S690>/NewValue' incorporates:
     *  ActionPort: '<S691>/Action Port'
     */
    BaseEngineController_A02_B.s690_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S690>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S690>/OldValue' incorporates:
     *  ActionPort: '<S692>/Action Port'
     */
    BaseEngineController_A02_B.s690_Merge = rtb_Merge_p;

    /* End of Outputs for SubSystem: '<S690>/OldValue' */
  }

  /* End of If: '<S690>/If' */

  /* Logic: '<S351>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S351>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S351>/motohawk_fault_status1'
   */
  rtb_LogicalOperator1_a = (IsFaultActive(66) || IsFaultActive(67));

  /* Logic: '<S351>/Logical Operator6' incorporates:
   *  Logic: '<S351>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S351>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S351>/motohawk_fault_status3'
   */
  rtb_Merge_i5 = (rtb_LogicalOperator1_a && (IsFaultActive(72) || IsFaultActive
    (73)));

  /* Switch: '<S351>/Switch2' incorporates:
   *  Logic: '<S351>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S351>/motohawk_fault_status4'
   */
  if (rtb_Merge_i5 || IsFaultActive(74)) {
    /* MinMax: '<S351>/MinMax' */
    BaseEngineController_A02_B.s351_Switch2 =
      (BaseEngineController_A02_B.s690_Merge >=
       BaseEngineController_A02_B.s673_Merge) || rtIsNaN
      (BaseEngineController_A02_B.s673_Merge) ?
      BaseEngineController_A02_B.s690_Merge :
      BaseEngineController_A02_B.s673_Merge;
  } else {
    /* Switch: '<S351>/Switch1' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s351_Switch2 =
        BaseEngineController_A02_B.s690_Merge;
    } else {
      BaseEngineController_A02_B.s351_Switch2 =
        BaseEngineController_A02_B.s673_Merge;
    }

    /* End of Switch: '<S351>/Switch1' */
  }

  /* End of Switch: '<S351>/Switch2' */

  /* RelationalOperator: '<S126>/RelOp' incorporates:
   *  Constant: '<S126>/Constant'
   */
  rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s366_State == 2);

  /* S-Function (motohawk_sfun_data_read): '<S386>/motohawk_data_read1' */
  BaseEngineController_A02_B.s386_motohawk_data_read1 = APP_DataStore();

  /* If: '<S658>/If' incorporates:
   *  Inport: '<S695>/In1'
   *  Inport: '<S696>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S658>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S658>/override_enable'
   */
  if ((APP1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S658>/NewValue' incorporates:
     *  ActionPort: '<S695>/Action Port'
     */
    rtb_Merge_c5 = (APP1_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S658>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S658>/OldValue' incorporates:
     *  ActionPort: '<S696>/Action Port'
     */
    rtb_Merge_c5 = BaseEngineController_A02_B.s386_motohawk_data_read1;

    /* End of Outputs for SubSystem: '<S658>/OldValue' */
  }

  /* End of If: '<S658>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Crank' incorporates:
   *  EnablePort: '<S125>/Enable'
   */
  if (rtb_LogicalOperator1_a) {
    if (!BaseEngineController_A02_DWork.s15_Crank_MODE) {
      BaseEngineController_A02_DWork.s15_Crank_MODE = TRUE;
    }

    /* MultiPortSwitch: '<S134>/Multiport Switch2' incorporates:
     *  Constant: '<S134>/ClearFloodFueling3'
     *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S134>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_Product1_e = 0.0;
    } else {
      rtb_Product1_e = (OpenThrottleFPCScalar_DataStore());
    }

    /* End of MultiPortSwitch: '<S134>/Multiport Switch2' */

    /* MultiPortSwitch: '<S134>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S134>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_motohawk_replicate1 = rtb_Merge_c5;
    } else {
      rtb_motohawk_replicate1 = BaseEngineController_A02_B.s351_Switch2;
    }

    /* End of MultiPortSwitch: '<S134>/Multiport Switch1' */

    /* Sum: '<S134>/Add' incorporates:
     *  Constant: '<S134>/ClearFloodFueling1'
     *  Gain: '<S134>/Gain'
     *  Product: '<S134>/Product1'
     */
    rtb_Product1_e = 0.01 * rtb_motohawk_replicate1 * rtb_Product1_e + 1.0;

    /* RelationalOperator: '<S134>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_a = (rtb_motohawk_replicate1 >=
      (ClearFloodThreshold_DataStore()));

    /* S-Function Block: <S125>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankECT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s641_Merge, (CrankECT05IdxArr_DataStore()),
         5, (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_p = (CrankECT05Idx_DataStore());
    }

    /* S-Function Block: <S125>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_A02_B.s543_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s543_Sum1, (CrankRPM05IdxArr_DataStore()), 5,
         (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_fj = (CrankRPM05Idx_DataStore());
    }

    /* Switch: '<S134>/Switch' incorporates:
     *  Constant: '<S134>/ClearFloodFueling'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S134>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup1'
     */
    if (rtb_LogicalOperator1_a) {
      rtb_motohawk_replicate1 = 0.0;
    } else {
      /* S-Function Block: <S134>/motohawk_interpolation_2d */
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

    /* End of Switch: '<S134>/Switch' */

    /* Product: '<S134>/Product' */
    rtb_Product_f5 = rtb_Product1_e * rtb_motohawk_replicate1;

    /* ZeroOrderHold: '<S125>/Zero-Order Hold1' incorporates:
     *  Constant: '<S125>/EGR'
     */
    BaseEngineController_A02_B.s128_EGR = 0.0;

    /* ZeroOrderHold: '<S125>/Zero-Order Hold10' incorporates:
     *  Constant: '<S125>/Mult'
     */
    BaseEngineController_A02_B.s128_FuelMult = 1.0;

    /* ZeroOrderHold: '<S125>/Zero-Order Hold11' incorporates:
     *  Constant: '<S125>/O2 Heater'
     */
    BaseEngineController_A02_B.s128_O2Heater = TRUE;

    /* ZeroOrderHold: '<S125>/Zero-Order Hold2' incorporates:
     *  Constant: '<S125>/OILP'
     */
    BaseEngineController_A02_B.s128_OILP = TRUE;

    /* S-Function Block: <S125>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_fj, (real_T *) ((CrankSparkTbl_DataStore())), 5);
      (CrankSpark_DataStore()) = rtb_motohawk_interpolation_1d2_l;
    }

    /* S-Function (motohawk_sfun_replicate): '<S125>/motohawk_replicate1' */

    /* S-Function Block: <S125>/motohawk_replicate1 */
    rtb_motohawk_replicate1 = rtb_motohawk_interpolation_1d2_l;

    /* ZeroOrderHold: '<S125>/Zero-Order Hold3' */
    BaseEngineController_A02_B.s128_SparkAdv = rtb_motohawk_replicate1;

    /* S-Function Block: <S125>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_a = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_p, rtb_motohawk_prelookup_fj, (real_T *)
         ((CrankSpkEnergyMap_DataStore())), 5, 5);
      (CrankSpkEnergy_DataStore()) = rtb_motohawk_interpolation_2d1_a;
    }

    /* ZeroOrderHold: '<S125>/Zero-Order Hold4' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S125>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup1'
     */
    BaseEngineController_A02_B.s128_SparkEnergy =
      rtb_motohawk_interpolation_2d1_a;

    /* S-Function Block: <S125>/motohawk_interpolation_1d4 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d4_k = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_fj, (real_T *) ((CrankSOITbl_DataStore())), 5);
      (CrankSOI_DataStore()) = rtb_motohawk_interpolation_1d4_k;
    }

    /* ZeroOrderHold: '<S125>/Zero-Order Hold5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S125>/motohawk_interpolation_1d4'
     *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup'
     */
    BaseEngineController_A02_B.s128_SOI = rtb_motohawk_interpolation_1d4_k;

    /* S-Function (motohawk_sfun_replicate): '<S125>/motohawk_replicate' */

    /* S-Function Block: <S125>/motohawk_replicate */
    {
      int_T i1;
      real_T *y0 = rtb_motohawk_replicate;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] = rtb_Product_f5;
      }
    }

    /* ZeroOrderHold: '<S125>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_A02_B.s128_FPC[0]), (void *)
           &rtb_motohawk_replicate[0], sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S125>/Zero-Order Hold7' incorporates:
     *  Constant: '<S125>/ON'
     */
    BaseEngineController_A02_B.s128_FUELP = TRUE;

    /* S-Function Block: <S125>/motohawk_interpolation_1d5 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_fj, (real_T *) ((CrankMakeUpEOITbl_DataStore())),
         5);
      (CrankMakeUpEOI_DataStore()) = rtb_motohawk_interpolation_1d5;
    }

    /* ZeroOrderHold: '<S125>/Zero-Order Hold8' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S125>/motohawk_interpolation_1d5'
     *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup'
     */
    BaseEngineController_A02_B.s128_MakeUpEOI = rtb_motohawk_interpolation_1d5;

    /* S-Function Block: <S125>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_o5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_p, (real_T *) ((CrankAirflowSetPtTbl_DataStore())),
         5);
      (CrankAirflowSetPt_DataStore()) = rtb_motohawk_interpolation_1d1_o5;
    }

    /* ZeroOrderHold: '<S125>/Zero-Order Hold9' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S125>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup1'
     */
    BaseEngineController_A02_B.s128_Throttle = rtb_motohawk_interpolation_1d1_o5;
  } else {
    if (BaseEngineController_A02_DWork.s15_Crank_MODE) {
      BaseEngineController_A02_DWork.s15_Crank_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Crank' */
  /* Switch: '<S345>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S345>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(1)) {
    /* MinMax: '<S362>/MinMax' incorporates:
     *  Constant: '<S345>/Constant1'
     *  Product: '<S345>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S345>/motohawk_calibration2'
     */
    rtb_Switch_o = (Overheat_ScaleAPP_DataStore()) * rtb_Merge_c5;
    rtb_Product1_e = rtb_Switch_o >= 0.0 ? rtb_Switch_o : 0.0;

    /* MinMax: '<S362>/MinMax1' incorporates:
     *  Constant: '<S345>/Constant1'
     *  MinMax: '<S362>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S345>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s345_Switch1 = (rtb_Product1_e <=
      (Overheat_MaxAPP_DataStore())) || rtIsNaN((Overheat_MaxAPP_DataStore())) ?
      rtb_Product1_e : (Overheat_MaxAPP_DataStore());
  } else {
    BaseEngineController_A02_B.s345_Switch1 = rtb_Merge_c5;
  }

  /* End of Switch: '<S345>/Switch1' */
  /* S-Function Block: <S341>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_A02_B.s673_Merge;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s673_Merge, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S300>/Base TPS Request' */

  /* UnitDelay: '<S342>/Unit Delay2' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s342_UnitDelay2_DSTATE;

  /* S-Function Block: <S342>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_A02_B.s345_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s345_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_f = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S342>/motohawk_interpolation_1d2 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d2_d3 = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_f, (real_T *) ((ETCRequestTbl_DataStore())), 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_1d2_d3;
  }

  /* RelationalOperator: '<S342>/Relational Operator3' */
  BaseEngineController_A02_B.s342_RelationalOperator3 = ((rtb_UnitDelay_mz <
    rtb_motohawk_interpolation_1d2_d3));

  /* Outputs for Enabled SubSystem: '<S342>/PassThrough1' */
  BaseEngineController_A02_PassThrough1
    (BaseEngineController_A02_B.s342_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_A02_B.s342_Merge);

  /* End of Outputs for SubSystem: '<S342>/PassThrough1' */

  /* RelationalOperator: '<S342>/Relational Operator2' */
  rtb_RelationalOperator2_la = (rtb_UnitDelay_mz >
    rtb_motohawk_interpolation_1d2_d3);

  /* Outputs for Enabled SubSystem: '<S342>/PassThrough2' */
  BaseEngineController_A02_PassThrough1(rtb_RelationalOperator2_la,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_A02_B.s342_Merge);

  /* End of Outputs for SubSystem: '<S342>/PassThrough2' */

  /* S-Function Block: <S358>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s358_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S342>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s342_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_mz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S342>/Product' incorporates:
   *  MinMax: '<S342>/MinMax'
   */
  rtb_UnitDelay_mz /= (rtb_UnitDelay_mz >= BaseEngineController_A02_B.s342_Merge)
    || rtIsNaN(BaseEngineController_A02_B.s342_Merge) ? rtb_UnitDelay_mz :
    BaseEngineController_A02_B.s342_Merge;

  /* Product: '<S355>/Product' */
  rtb_Product1_e = rtb_motohawk_interpolation_1d2_d3 * rtb_UnitDelay_mz;

  /* Sum: '<S355>/Sum' incorporates:
   *  Constant: '<S355>/Constant'
   */
  rtb_Merge_oq = 1.0 - rtb_UnitDelay_mz;

  /* UnitDelay: '<S355>/Unit Delay' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s355_UnitDelay_DSTATE;

  /* Sum: '<S355>/Sum1' incorporates:
   *  Product: '<S355>/Product1'
   */
  rtb_Merge_o4 = rtb_Merge_oq * rtb_UnitDelay_mz + rtb_Product1_e;

  /* UnitDelay: '<S358>/Unit Delay' */
  rtb_UnitDelay_mz = BaseEngineController_A02_DWork.s358_UnitDelay_DSTATE;

  /* Product: '<S358>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S358>/motohawk_delta_time'
   *  Sum: '<S358>/Sum3'
   */
  rtb_Product1_e = 1.0 / rtb_motohawk_delta_time_e * (rtb_Merge_o4 -
    rtb_UnitDelay_mz);

  /* S-Function Block: <S342>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_kt = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_kt;
  }

  /* MinMax: '<S359>/MinMax' */
  rtb_Product1_e = (rtb_Product1_e >= rtb_motohawk_interpolation_1d1_kt) ||
    rtIsNaN(rtb_motohawk_interpolation_1d1_kt) ? rtb_Product1_e :
    rtb_motohawk_interpolation_1d1_kt;

  /* S-Function Block: <S342>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_kt = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_kt;
  }

  /* Sum: '<S358>/Sum2' incorporates:
   *  MinMax: '<S359>/MinMax'
   *  MinMax: '<S359>/MinMax1'
   *  Product: '<S358>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S358>/motohawk_delta_time'
   */
  BaseEngineController_A02_B.s358_Sum2 = ((rtb_Product1_e <=
    rtb_motohawk_interpolation_1d1_kt) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_kt) ? rtb_Product1_e :
    rtb_motohawk_interpolation_1d1_kt) * rtb_motohawk_delta_time_e +
    rtb_UnitDelay_mz;

  /* UnitDelay: '<S342>/Unit Delay1' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s342_UnitDelay1_DSTATE;

  /* UnitDelay: '<S342>/Unit Delay3' */
  rtb_Merge_oq = BaseEngineController_A02_DWork.s342_UnitDelay3_DSTATE;

  /* UnitDelay: '<S342>/Unit Delay4' */
  rtb_Merge_dn = BaseEngineController_A02_DWork.s342_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S342>/Unit Delay2' */
  BaseEngineController_A02_DWork.s342_UnitDelay2_DSTATE = rtb_Product1_e;

  /* Update for UnitDelay: '<S355>/Unit Delay' */
  BaseEngineController_A02_DWork.s355_UnitDelay_DSTATE = rtb_Merge_o4;

  /* Update for UnitDelay: '<S358>/Unit Delay' */
  BaseEngineController_A02_DWork.s358_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s358_Sum2;

  /* Update for UnitDelay: '<S342>/Unit Delay1' */
  BaseEngineController_A02_DWork.s342_UnitDelay1_DSTATE = rtb_Merge_oq;

  /* Update for UnitDelay: '<S342>/Unit Delay3' */
  BaseEngineController_A02_DWork.s342_UnitDelay3_DSTATE = rtb_Merge_dn;

  /* Update for UnitDelay: '<S342>/Unit Delay4' */
  BaseEngineController_A02_DWork.s342_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_1d2_d3;

  /* End of Outputs for SubSystem: '<S300>/Base TPS Request' */

  /* UnitDelay: '<S349>/Unit Delay' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s349_UnitDelay_DSTATE;

  /* Sum: '<S349>/Sum' incorporates:
   *  Constant: '<S349>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S349>/motohawk_calibration'
   */
  rtb_Merge_oq = 1.0 - (O2DelagFilterConst_DataStore());

  /* S-Function Block: <S626>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s626_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ff = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S626>/Product' incorporates:
   *  MinMax: '<S626>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S626>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ff /= (rtb_DataTypeConversion_ff >=
    (O2_PostCatFiltConst_DataStore())) || rtIsNaN((O2_PostCatFiltConst_DataStore
    ())) ? rtb_DataTypeConversion_ff : (O2_PostCatFiltConst_DataStore());

  /* Logic: '<S624>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S624>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S624>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(53) || IsFaultActive(54));

  /* Logic: '<S624>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S624>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S624>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(53) || IsFaultSuspected(54));

  /* S-Function Block: <S385>/motohawk_ain3 Resource: PostO2Pin */
  {
    extern NativeError_S PostO2Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    PostO2Pin_AnalogInput_Get(&BaseEngineController_A02_B.s385_motohawk_ain3,
      NULL);
  }

  /* DataTypeConversion: '<S624>/Data Type Conversion' */
  rtb_DataTypeConversion_m = (real_T)
    BaseEngineController_A02_B.s385_motohawk_ain3;

  /* S-Function Block: <S631>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (O2_PostCatIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_m,
      (O2_PostCatIdxArr_DataStore()), 20, (O2_PostCatIdx_DataStore()));
    rtb_motohawk_prelookup_l = (O2_PostCatIdx_DataStore());
  }

  /* S-Function Block: <S631>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_B.s631_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_l, (real_T *)
      ((O2_PostCatTbl_DataStore())), 20);
  }

  /* UnitDelay: '<S624>/Unit Delay' */
  rtb_UnitDelay_hm = BaseEngineController_A02_DWork.s624_UnitDelay_DSTATE;

  /* If: '<S624>/If' incorporates:
   *  Logic: '<S624>/Logical Operator5'
   *  Logic: '<S624>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S624>/If Action Subsystem' incorporates:
     *  ActionPort: '<S627>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_hm, &rtb_Merge_dh);

    /* End of Outputs for SubSystem: '<S624>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S624>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S628>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((O2_PostCatDefault_DataStore()),
      &rtb_Merge_dh);

    /* End of Outputs for SubSystem: '<S624>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S624>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S629>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s631_motohawk_interpolation_1d, &rtb_Merge_dh);

    /* End of Outputs for SubSystem: '<S624>/If Action Subsystem2' */
  }

  /* End of If: '<S624>/If' */

  /* Sum: '<S632>/Sum1' incorporates:
   *  Constant: '<S632>/Constant'
   *  Product: '<S632>/Product'
   *  Product: '<S632>/Product1'
   *  Sum: '<S632>/Sum'
   *  UnitDelay: '<S632>/Unit Delay'
   */
  rtb_Sum1_kq = (1.0 - rtb_DataTypeConversion_ff) *
    BaseEngineController_A02_DWork.s632_UnitDelay_DSTATE + rtb_Merge_dh *
    rtb_DataTypeConversion_ff;

  /* If: '<S630>/If' incorporates:
   *  Inport: '<S633>/In1'
   *  Inport: '<S634>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S630>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S630>/override_enable'
   */
  if ((O2_PostCat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S630>/NewValue' incorporates:
     *  ActionPort: '<S633>/Action Port'
     */
    BaseEngineController_A02_B.s630_Merge = (O2_PostCat_new_DataStore());

    /* End of Outputs for SubSystem: '<S630>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S630>/OldValue' incorporates:
     *  ActionPort: '<S634>/Action Port'
     */
    BaseEngineController_A02_B.s630_Merge = rtb_Sum1_kq;

    /* End of Outputs for SubSystem: '<S630>/OldValue' */
  }

  /* End of If: '<S630>/If' */

  /* Sum: '<S349>/Sum1' incorporates:
   *  Product: '<S349>/Product'
   *  Product: '<S349>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S349>/motohawk_calibration'
   */
  BaseEngineController_A02_B.s349_Sum1 = rtb_Product1_e * rtb_Merge_oq +
    (O2DelagFilterConst_DataStore()) * BaseEngineController_A02_B.s630_Merge;

  /* S-Function Block: <S371>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s371_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c0 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S371>/Switch' incorporates:
   *  Constant: '<S370>/Constant'
   *  Constant: '<S371>/Constant'
   *  RelationalOperator: '<S370>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S353>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S371>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S371>/motohawk_delta_time'
   *  Sum: '<S371>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_A02_B.s371_Switch = rtb_motohawk_delta_time_c0 +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_A02_B.s371_Switch = 0.0;
  }

  /* End of Switch: '<S371>/Switch' */
  /* S-Function Block: <S339>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_A02_B.s543_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s543_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_A02_B.s339_motohawk_prelookup1 = (RPM09Idx_DataStore());
  }

  /* S-Function Block: <S339>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_A02_B.s543_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s543_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_A02_B.s339_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S337>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_A02_B.s641_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s641_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_A02_B.s337_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S338>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_A02_B.s650_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s650_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_A02_B.s338_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_data_read): '<S297>/motohawk_data_read1' */
  BaseEngineController_A02_B.s297_motohawk_data_read1 = EngineState_DataStore();

  /* S-Function Block: <S297>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s297_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_A02_B.s297_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S297>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S297>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch (BaseEngineController_A02_DWork.s302_is_c19_BaseEngineController_A02) {
   case BaseEngineController_A02_IN_CrankRun:
    /* During 'CrankRun': '<S302>:2' */
    if (BaseEngineController_A02_B.s297_motohawk_data_read1 == 1) {
      /* Transition: '<S302>:6' */
      BaseEngineController_A02_DWork.s302_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_StallDelay;

      /* Entry 'StallDelay': '<S302>:3' */
      BaseEngineController_A02_B.s302_Enable = FALSE;
      BaseEngineController_A02_B.s302_Timer = 0.0;
      BaseEngineController_A02_DWork.s302_TOld = 0.0;
    }
    break;

   case BaseEngineController_A02_IN_Stall:
    /* During 'Stall': '<S302>:1' */
    if (BaseEngineController_A02_B.s297_motohawk_data_read1 > 1) {
      /* Transition: '<S302>:5' */
      BaseEngineController_A02_DWork.s302_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_CrankRun;

      /* Entry 'CrankRun': '<S302>:2' */
      BaseEngineController_A02_B.s302_Enable = FALSE;
    }
    break;

   case BaseEngineController_A02_IN_StallDelay:
    /* During 'StallDelay': '<S302>:3' */
    if (BaseEngineController_A02_B.s297_motohawk_data_read1 > 1) {
      /* Transition: '<S302>:8' */
      BaseEngineController_A02_DWork.s302_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_CrankRun;

      /* Entry 'CrankRun': '<S302>:2' */
      BaseEngineController_A02_B.s302_Enable = FALSE;
    } else if (((BaseEngineController_A02_B.s297_motohawk_data_read1 == 1) &
                (BaseEngineController_A02_B.s302_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S302>:7' */
      BaseEngineController_A02_DWork.s302_is_c19_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Stall;

      /* Entry 'Stall': '<S302>:1' */
      BaseEngineController_A02_B.s302_Enable = TRUE;
    } else {
      BaseEngineController_A02_B.s302_Timer =
        BaseEngineController_A02_DWork.s302_TOld +
        BaseEngineController_A02_B.s297_motohawk_delta_time;
      BaseEngineController_A02_DWork.s302_TOld =
        BaseEngineController_A02_B.s302_Timer;
    }
    break;

   default:
    /* Transition: '<S302>:4' */
    BaseEngineController_A02_DWork.s302_is_c19_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Stall;

    /* Entry 'Stall': '<S302>:1' */
    BaseEngineController_A02_B.s302_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S297>/Baro Stall State Delay' */
  /* Logic: '<S548>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S548>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S548>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(41) || IsFaultActive(42));

  /* Logic: '<S548>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S548>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S548>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(41) || IsFaultSuspected(42));

  /* S-Function Block: <S384>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_A02_B.s384_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S548>/Data Type Conversion' */
  rtb_DataTypeConversion_ff = (real_T)
    BaseEngineController_A02_B.s384_motohawk_ain_read1;

  /* Product: '<S548>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S548>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_DataTypeConversion_ff * (MAPTimeGain_DataStore());

  /* Sum: '<S548>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S548>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s548_Sum1 = rtb_Product1_e + (MAPTimeOfst_DataStore
    ());

  /* UnitDelay: '<S548>/Unit Delay1' */
  rtb_UnitDelay1_dq = BaseEngineController_A02_DWork.s548_UnitDelay1_DSTATE;

  /* If: '<S548>/If' incorporates:
   *  Logic: '<S548>/Logical Operator5'
   *  Logic: '<S548>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S548>/If Action Subsystem' incorporates:
     *  ActionPort: '<S591>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_dq, &rtb_Merge_pk);

    /* End of Outputs for SubSystem: '<S548>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S548>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S592>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_pk);

    /* End of Outputs for SubSystem: '<S548>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S548>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S593>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s548_Sum1, &rtb_Merge_pk);

    /* End of Outputs for SubSystem: '<S548>/If Action Subsystem2' */
  }

  /* End of If: '<S548>/If' */

  /* Outputs for Enabled SubSystem: '<S297>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S303>/Enable'
   */
  if (BaseEngineController_A02_B.s302_Enable) {
    if (!BaseEngineController_A02_DWork.s297_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S303>/Unit Delay' */
      BaseEngineController_A02_DWork.s303_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s297_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S303>/Add' incorporates:
     *  Constant: '<S303>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration'
     */
    rtb_Add_a = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S303>/Sum' incorporates:
     *  Constant: '<S303>/Constant'
     *  UnitDelay: '<S303>/Unit Delay'
     */
    rtb_Sum_l3 = (int8_T)(BaseEngineController_A02_DWork.s303_UnitDelay_DSTATE +
                          1);

    /* RelationalOperator: '<S303>/Relational Operator' */
    rtb_LogicalOperator1_a = (rtb_Sum_l3 <= rtb_Add_a);

    /* Switch: '<S303>/Switch' */
    if (rtb_LogicalOperator1_a) {
      rtb_Add_a = rtb_Sum_l3;
    }

    /* End of Switch: '<S303>/Switch' */

    /* Outputs for Enabled SubSystem: '<S303>/Collect Average' incorporates:
     *  EnablePort: '<S306>/Enable'
     */
    /* Logic: '<S303>/Logical Operator' incorporates:
     *  Constant: '<S303>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S303>/Relational Operator1'
     */
    if (rtb_LogicalOperator1_a && (rtb_Sum_l3 > 2)) {
      if (!BaseEngineController_A02_DWork.s303_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S306>/Unit Delay1' */
        BaseEngineController_A02_DWork.s306_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s303_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S306>/Sum1' incorporates:
       *  UnitDelay: '<S306>/Unit Delay1'
       */
      rtb_Product1_e = rtb_Merge_pk +
        BaseEngineController_A02_DWork.s306_UnitDelay1_DSTATE;

      /* Product: '<S306>/Product' incorporates:
       *  DataTypeConversion: '<S306>/Data Type Conversion'
       *  Sum: '<S303>/Add1'
       */
      BaseEngineController_A02_B.s306_Product = 1.0 / (real_T)(int8_T)(rtb_Add_a
        - 2) * rtb_Product1_e;

      /* Update for UnitDelay: '<S306>/Unit Delay1' */
      BaseEngineController_A02_DWork.s306_UnitDelay1_DSTATE = rtb_Product1_e;
    } else {
      if (BaseEngineController_A02_DWork.s303_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s303_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S303>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S303>/Collect Average' */

    /* Update for UnitDelay: '<S303>/Unit Delay' */
    BaseEngineController_A02_DWork.s303_UnitDelay_DSTATE = rtb_Add_a;
  } else {
    if (BaseEngineController_A02_DWork.s297_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S303>/Collect Average' */
      BaseEngineController_A02_DWork.s303_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S303>/Collect Average' */
      BaseEngineController_A02_DWork.s297_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S297>/Capture Signal At Startup' */

  /* If: '<S305>/If' incorporates:
   *  Inport: '<S312>/In1'
   *  Inport: '<S313>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S305>/override_enable'
   *  UnitDelay: '<S305>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S305>/NewValue' incorporates:
     *  ActionPort: '<S312>/Action Port'
     */
    rtb_Merge_kp = BaseEngineController_A02_DWork.s305_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S305>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S305>/OldValue' incorporates:
     *  ActionPort: '<S313>/Action Port'
     */
    rtb_Merge_kp = BaseEngineController_A02_B.s306_Product;

    /* End of Outputs for SubSystem: '<S305>/OldValue' */
  }

  /* End of If: '<S305>/If' */

  /* Sum: '<S305>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S305>/offset'
   */
  BaseEngineController_A02_B.s305_Sum = rtb_Merge_kp + (BARO_offset_DataStore());

  /* Saturate: '<S297>/Saturation1' */
  rtb_Saturation1 = BaseEngineController_A02_B.s305_Sum >= 1.0 ?
    BaseEngineController_A02_B.s305_Sum : 1.0;

  /* S-Function Block: <S304>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_n = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S304>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_d = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_d;
  }

  /* S-Function Block: <S338>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_A02_B.s650_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s650_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_c = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S304>/motohawk_interpolation_1d2 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d2_h = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2_c, (real_T *) ((VETempCorrTbl_DataStore())), 17);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_1d2_h;
  }

  /* DataTypeConversion: '<S304>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S304>/Number of Combustion Events Per Revolution'
   */
  rtb_Merge_oq = (real_T)((uint8_T)CombEventsPerRev_DataStore());

  /* Fcn: '<S307>/C to K' */
  rtb_DataTypeConversion_e = BaseEngineController_A02_B.s650_Merge + 273.2;

  /* Saturate: '<S304>/Saturation' */
  rtb_Merge_dn = rtb_DataTypeConversion_e >= 1.0 ? rtb_DataTypeConversion_e :
    1.0;

  /* S-Function Block: <S582>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s582_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S582>/Product' incorporates:
   *  MinMax: '<S582>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S582>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (MAPFilterConst_DataStore())) || rtIsNaN((MAPFilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (MAPFilterConst_DataStore());

  /* Logic: '<S547>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S547>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S547>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(39) || IsFaultActive(40));

  /* Logic: '<S547>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S547>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S547>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(39) || IsFaultSuspected(40));

  /* S-Function (motohawk_sfun_trigger): '<S549>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_6947p0001 */
  if (BaseEngineController_A02_DWork.s549_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s549_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S547>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S547>/motohawk_calibration4'
   */
  rtb_Product1_e = BaseEngineController_A02_B.s549_Merge * (MAPGain_DataStore());

  /* Sum: '<S547>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S547>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s547_Sum1 = rtb_Product1_e + (MAPOfst_DataStore());

  /* UnitDelay: '<S547>/Unit Delay1' */
  rtb_UnitDelay1_n = BaseEngineController_A02_DWork.s547_UnitDelay1_DSTATE;

  /* If: '<S547>/If' incorporates:
   *  Logic: '<S547>/Logical Operator5'
   *  Logic: '<S547>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S547>/If Action Subsystem' incorporates:
     *  ActionPort: '<S583>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_n, &rtb_Merge_bn);

    /* End of Outputs for SubSystem: '<S547>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S547>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S584>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_bn);

    /* End of Outputs for SubSystem: '<S547>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S547>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S585>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s547_Sum1, &rtb_Merge_bn);

    /* End of Outputs for SubSystem: '<S547>/If Action Subsystem2' */
  }

  /* End of If: '<S547>/If' */

  /* Sum: '<S587>/Sum1' incorporates:
   *  Constant: '<S587>/Constant'
   *  Product: '<S587>/Product'
   *  Product: '<S587>/Product1'
   *  Sum: '<S587>/Sum'
   *  UnitDelay: '<S587>/Unit Delay'
   */
  rtb_Sum1_pb = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_A02_DWork.s587_UnitDelay_DSTATE + rtb_Merge_bn *
    rtb_DataTypeConversion_e;

  /* If: '<S586>/If' incorporates:
   *  Inport: '<S588>/In1'
   *  Inport: '<S589>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S586>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S586>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S586>/NewValue' incorporates:
     *  ActionPort: '<S588>/Action Port'
     */
    BaseEngineController_A02_B.s586_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S586>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S586>/OldValue' incorporates:
     *  ActionPort: '<S589>/Action Port'
     */
    BaseEngineController_A02_B.s586_Merge = rtb_Sum1_pb;

    /* End of Outputs for SubSystem: '<S586>/OldValue' */
  }

  /* End of If: '<S586>/If' */

  /* Product: '<S304>/Nominal Air Flow Rate2' incorporates:
   *  Constant: '<S304>/Gas Const [J//kg-K]'
   *  Constant: '<S304>/Units Equivalency Factor'
   *  S-Function (motohawk_sfun_data_read): '<S304>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S304>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S304>/motohawk_interpolation_1d2'
   *  S-Function (motohawk_sfun_prelookup): '<S304>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S338>/motohawk_prelookup2'
   */
  BaseEngineController_A02_B.s304_NominalAirFlowRate2 =
    BaseEngineController_A02_B.s543_Sum1 * BaseEngineController_A02_B.s586_Merge
    * rtb_motohawk_interpolation_1d1_d * rtb_motohawk_interpolation_1d2_h *
    CylSweptVol_DataStore() * rtb_Merge_oq / rtb_Merge_dn / 60.0 / 287.0;

  /* Product: '<S304>/Pressure Ratio' */
  BaseEngineController_A02_B.s304_PressureRatio =
    BaseEngineController_A02_B.s586_Merge / rtb_Saturation1;

  /* S-Function Block: <S304>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (PortPressRatio17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s304_PressureRatio,
       (PortPressRatio17IdxArr_DataStore()), 17, (PortPressRatio17Idx_DataStore()));
    rtb_motohawk_prelookup_ld = (PortPressRatio17Idx_DataStore());
  }

  /* S-Function Block: <S304>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup_ld, BaseEngineController_A02_B.s339_Indexes,
       (real_T *) ((VEMap_DataStore())), 17, 17);
    (VE_DataStore()) = rtb_motohawk_interpolation_2d;
  }

  /* If: '<S309>/If' incorporates:
   *  Inport: '<S310>/In1'
   *  Inport: '<S311>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S309>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S309>/override_enable'
   */
  if ((VETable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S309>/NewValue' incorporates:
     *  ActionPort: '<S310>/Action Port'
     */
    BaseEngineController_A02_B.s309_Merge = (VETable_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S309>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S309>/OldValue' incorporates:
     *  ActionPort: '<S311>/Action Port'
     */
    BaseEngineController_A02_B.s309_Merge = rtb_motohawk_interpolation_2d;

    /* End of Outputs for SubSystem: '<S309>/OldValue' */
  }

  /* End of If: '<S309>/If' */

  /* S-Function Block: <S524>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s524_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S524>/Product' incorporates:
   *  MinMax: '<S524>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S524>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (MAFFiltConst_DataStore())) || rtIsNaN((MAFFiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (MAFFiltConst_DataStore());

  /* Logic: '<S522>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(37) || IsFaultActive(38));

  /* Logic: '<S522>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S522>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(37) || IsFaultSuspected(38));

  /* S-Function Block: <S382>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_l);
  }

  /* DataTypeConversion: '<S382>/Data Type Conversion' */
  rtb_Switch_e = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S382>/Gain' */
  BaseEngineController_A02_B.s382_Gain = 0.01 * rtb_Switch_e;

  /* S-Function Block: <S529>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s382_Gain, (MAFIdxArr_DataStore()), 40,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_j = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S529>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_B.s529_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_j, (real_T *)
      ((MAFTbl_DataStore())), 40);
  }

  /* UnitDelay: '<S522>/Unit Delay' */
  rtb_UnitDelay_az = BaseEngineController_A02_DWork.s522_UnitDelay_DSTATE;

  /* If: '<S522>/If' incorporates:
   *  Logic: '<S522>/Logical Operator5'
   *  Logic: '<S522>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S522>/If Action Subsystem' incorporates:
     *  ActionPort: '<S525>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay_az, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S522>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S522>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S526>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S522>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S522>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S527>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s529_motohawk_interpolation_1d, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S522>/If Action Subsystem2' */
  }

  /* End of If: '<S522>/If' */

  /* Sum: '<S530>/Sum1' incorporates:
   *  Constant: '<S530>/Constant'
   *  Product: '<S530>/Product'
   *  Product: '<S530>/Product1'
   *  Sum: '<S530>/Sum'
   *  UnitDelay: '<S530>/Unit Delay'
   */
  rtb_Sum1_f = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_A02_DWork.s530_UnitDelay_DSTATE + rtb_Merge_j *
    rtb_DataTypeConversion_e;

  /* If: '<S528>/If' incorporates:
   *  Inport: '<S531>/In1'
   *  Inport: '<S532>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S528>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S528>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S528>/NewValue' incorporates:
     *  ActionPort: '<S531>/Action Port'
     */
    BaseEngineController_A02_B.s528_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S528>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S528>/OldValue' incorporates:
     *  ActionPort: '<S532>/Action Port'
     */
    BaseEngineController_A02_B.s528_Merge = rtb_Sum1_f;

    /* End of Outputs for SubSystem: '<S528>/OldValue' */
  }

  /* End of If: '<S528>/If' */

  /* MultiPortSwitch: '<S304>/Multiport Switch' incorporates:
   *  Product: '<S304>/Model Air Mass Flow Rate'
   *  S-Function (motohawk_sfun_calibration): '<S304>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    rtb_Switch_e = BaseEngineController_A02_B.s309_Merge *
      BaseEngineController_A02_B.s304_NominalAirFlowRate2;
  } else {
    rtb_Switch_e = BaseEngineController_A02_B.s528_Merge;
  }

  /* End of MultiPortSwitch: '<S304>/Multiport Switch' */

  /* Saturate: '<S304>/Saturation1' */
  BaseEngineController_A02_B.s304_Saturation1 = rtb_Switch_e >= 1.0 ?
    rtb_Switch_e : 1.0;

  /* Saturate: '<S325>/Saturation2' */
  rtb_Saturation2 = BaseEngineController_A02_B.s543_Sum1 >= 1.0 ?
    BaseEngineController_A02_B.s543_Sum1 : 1.0;

  /* DataTypeConversion: '<S315>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S315>/Number of Combustion Events Per Revolution'
   */
  rtb_Switch_e = (real_T)((uint8_T)CombEventsPerRev_DataStore());

  /* Saturate: '<S325>/Saturation' */
  rtb_Saturation_d = rtb_Switch_e >= 1.0 ? rtb_Switch_e : 1.0;

  /* RelationalOperator: '<S328>/RelOp' incorporates:
   *  Constant: '<S328>/Constant'
   */
  rtb_RelOp_pg = (BaseEngineController_A02_B.s543_Sum1 != 0.0);

  /* Outputs for Enabled SubSystem: '<S325>/Multiply and Divide, avoiding divde by zero1' */
  BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(rtb_RelOp_pg,
    BaseEngineController_A02_B.s304_Saturation1, 60000.0, rtb_Saturation2,
    rtb_Saturation_d,
    &BaseEngineController_A02_B.s325_MultiplyandDivideavoidingdivdebyzero1);

  /* End of Outputs for SubSystem: '<S325>/Multiply and Divide, avoiding divde by zero1' */

  /* S-Function Block: <S315>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APC_TPS10Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s325_MultiplyandDivideavoidingdivdebyzero1.s172_chargemass,
       (APC_TPS10IdxArr_DataStore()), 10, (APC_TPS10Idx_DataStore()));
    rtb_motohawk_prelookup_g = (APC_TPS10Idx_DataStore());
  }

  /* S-Function Block: <S315>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_Torque = TableInterpolation1D_real_T(rtb_motohawk_prelookup_g, (real_T *)
      ((IndLoadTbl_DataStore())), 10);
    (IndLoad_DataStore()) = rtb_Torque;
  }

  /* S-Function Block: <S317>/motohawk_delta_time */
  rtb_Switch_e = 0.005;

  /* UnitDelay: '<S317>/Unit Delay2' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s317_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S317>/Relational Operator4' incorporates:
   *  UnitDelay: '<S317>/Unit Delay2'
   */
  BaseEngineController_A02_B.s317_RelationalOperator4 =
    ((BaseEngineController_A02_DWork.s317_UnitDelay2_DSTATE <
      BaseEngineController_A02_B.s543_Sum1));

  /* Outputs for Enabled SubSystem: '<S317>/IncreasingFilter' incorporates:
   *  EnablePort: '<S321>/Enable'
   */
  if (BaseEngineController_A02_B.s317_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S321>/motohawk_calibration1' */
    BaseEngineController_A02_B.s317_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S317>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S317>/DecreasingFilter' incorporates:
   *  EnablePort: '<S319>/Enable'
   */
  /* RelationalOperator: '<S317>/Relational Operator3' */
  if (rtb_Product1_e > BaseEngineController_A02_B.s543_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S319>/motohawk_calibration2' */
    BaseEngineController_A02_B.s317_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S317>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S317>/DecreasingFilter' */

  /* Product: '<S317>/Product' incorporates:
   *  MinMax: '<S317>/MinMax'
   */
  rtb_Switch_e /= (rtb_Switch_e >= BaseEngineController_A02_B.s317_Merge) ||
    rtIsNaN(BaseEngineController_A02_B.s317_Merge) ? rtb_Switch_e :
    BaseEngineController_A02_B.s317_Merge;

  /* Sum: '<S320>/Sum1' incorporates:
   *  Constant: '<S320>/Constant'
   *  Product: '<S320>/Product'
   *  Product: '<S320>/Product1'
   *  Sum: '<S320>/Sum'
   *  UnitDelay: '<S320>/Unit Delay'
   */
  BaseEngineController_A02_B.s320_Sum1 = (1.0 - rtb_Switch_e) *
    BaseEngineController_A02_DWork.s320_UnitDelay_DSTATE +
    BaseEngineController_A02_B.s543_Sum1 * rtb_Switch_e;

  /* Sum: '<S314>/Sum1' */
  rtb_Switch_e = BaseEngineController_A02_B.s543_Sum1 -
    BaseEngineController_A02_B.s320_Sum1;

  /* Abs: '<S314>/Abs1' */
  rtb_Switch_e = fabs(rtb_Switch_e);

  /* RelationalOperator: '<S314>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S314>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_LogicalOperator1_a = (rtb_Switch_e <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S314>/Relational Operator2' incorporates:
   *  Constant: '<S314>/Constant'
   */
  rtb_Merge_i5 = (BaseEngineController_A02_B.s543_Sum1 > 0.0);

  /* S-Function Block: <S318>/motohawk_delta_time */
  rtb_Switch_e = 0.005;

  /* UnitDelay: '<S318>/Unit Delay2' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s318_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S318>/Relational Operator4' incorporates:
   *  UnitDelay: '<S318>/Unit Delay2'
   */
  BaseEngineController_A02_B.s318_RelationalOperator4 =
    ((BaseEngineController_A02_DWork.s318_UnitDelay2_DSTATE < rtb_Torque));

  /* Outputs for Enabled SubSystem: '<S318>/IncreasingFilter' incorporates:
   *  EnablePort: '<S324>/Enable'
   */
  if (BaseEngineController_A02_B.s318_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S324>/motohawk_calibration1' */
    BaseEngineController_A02_B.s318_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S318>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S318>/DecreasingFilter' incorporates:
   *  EnablePort: '<S322>/Enable'
   */
  /* RelationalOperator: '<S318>/Relational Operator3' */
  if (rtb_Product1_e > rtb_Torque) {
    /* S-Function (motohawk_sfun_calibration): '<S322>/motohawk_calibration2' */
    BaseEngineController_A02_B.s318_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S318>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S318>/DecreasingFilter' */

  /* Product: '<S318>/Product' incorporates:
   *  MinMax: '<S318>/MinMax'
   */
  rtb_Switch_e /= (rtb_Switch_e >= BaseEngineController_A02_B.s318_Merge) ||
    rtIsNaN(BaseEngineController_A02_B.s318_Merge) ? rtb_Switch_e :
    BaseEngineController_A02_B.s318_Merge;

  /* Sum: '<S323>/Sum1' incorporates:
   *  Constant: '<S323>/Constant'
   *  Product: '<S323>/Product'
   *  Product: '<S323>/Product1'
   *  Sum: '<S323>/Sum'
   *  UnitDelay: '<S323>/Unit Delay'
   */
  BaseEngineController_A02_B.s323_Sum1 = (1.0 - rtb_Switch_e) *
    BaseEngineController_A02_DWork.s323_UnitDelay_DSTATE + rtb_Torque *
    rtb_Switch_e;

  /* Sum: '<S314>/Sum' */
  rtb_Switch_e = rtb_Torque - BaseEngineController_A02_B.s323_Sum1;

  /* Abs: '<S314>/Abs' */
  rtb_Switch_e = fabs(rtb_Switch_e);

  /* Logic: '<S314>/Logical Operator' incorporates:
   *  RelationalOperator: '<S314>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S314>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_A02_B.s314_LogicalOperator = ((rtb_LogicalOperator1_a &&
    rtb_Merge_i5 && (rtb_Switch_e <= (SSLoadTol_DataStore()))));

  /* S-Function Block: <S378>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom09In_DataStore()) = rtb_Torque;
    (IndLoadNom09Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom09IdxArr_DataStore()), 9, (IndLoadNom09Idx_DataStore()));
    BaseEngineController_A02_B.s378_motohawk_prelookup1 =
      (IndLoadNom09Idx_DataStore());
  }

  /* S-Function Block: <S378>/motohawk_prelookup4 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom17In_DataStore()) = rtb_Torque;
    (IndLoadNom17Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom17IdxArr_DataStore()), 17, (IndLoadNom17Idx_DataStore()));
    BaseEngineController_A02_B.s378_motohawk_prelookup4 =
      (IndLoadNom17Idx_DataStore());
  }

  /* Fcn: '<S326>/Torque to Power' */
  BaseEngineController_A02_B.s326_TorquetoPower = rtb_Torque *
    BaseEngineController_A02_B.s543_Sum1 * 3.1415926535897931 / 30000.0;

  /* S-Function Block: <S377>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndPower05In_DataStore()) = BaseEngineController_A02_B.s326_TorquetoPower;
    (IndPower05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s326_TorquetoPower,
       (IndPower05IdxArr_DataStore()), 5, (IndPower05Idx_DataStore()));
    rtb_motohawk_prelookup_d = (IndPower05Idx_DataStore());
  }

  /* Sum: '<S316>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S316>/motohawk_calibration3'
   */
  rtb_Switch_e = (SteadyStateECT_DataStore()) -
    BaseEngineController_A02_B.s641_Merge;

  /* Saturate: '<S316>/Saturation1' */
  rtb_Product1_e = rtb_Switch_e >= 0.0 ? rtb_Switch_e : 0.0;

  /* Product: '<S316>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S316>/motohawk_calibration4'
   */
  rtb_Merge_oq = BaseEngineController_A02_B.s326_TorquetoPower /
    (MaxIndEngPwr_DataStore());

  /* S-Function Block: <S316>/motohawk_delta_time1 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s316_motohawk_delta_time1_DWORK1, NULL);
    rtb_motohawk_delta_time1 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S316>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S316>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_delta_time): '<S316>/motohawk_delta_time1'
   */
  rtb_Product1_e = rtb_Product1_e * rtb_Merge_oq * rtb_motohawk_delta_time1 /
    (WarmUpTimeConst_DataStore());

  /* RelationalOperator: '<S332>/RelOp' incorporates:
   *  Constant: '<S332>/Constant'
   */
  rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s326_TorquetoPower == 0.0);

  /* Outputs for Enabled SubSystem: '<S316>/Integrate Offset To ECT' incorporates:
   *  EnablePort: '<S333>/Enable'
   */
  /* RelationalOperator: '<S316>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S316>/motohawk_calibration3'
   *  UnitDelay: '<S316>/Unit Delay'
   */
  if (BaseEngineController_A02_DWork.s316_UnitDelay_DSTATE <
      (SteadyStateECT_DataStore())) {
    /* S-Function Block: <S335>/motohawk_delta_time1 */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s335_motohawk_delta_time1_DWORK1, NULL);
      rtb_motohawk_delta_time1_h = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S333>/Constant1'
     *  DataTypeConversion: '<S335>/Data Type Conversion'
     *  UnitDelay: '<S335>/Unit Delay'
     */
    if (rtb_LogicalOperator1_a >= 1) {
      BaseEngineController_A02_B.s335_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_B.s335_Switch1 =
        BaseEngineController_A02_DWork.s335_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S335>/Switch1' */

    /* MinMax: '<S336>/MinMax' incorporates:
     *  Constant: '<S333>/Constant'
     *  Product: '<S335>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S335>/motohawk_delta_time1'
     *  Sum: '<S335>/Sum'
     */
    rtb_Switch_o = rtb_Product1_e * rtb_motohawk_delta_time1_h +
      BaseEngineController_A02_B.s335_Switch1;
    rtb_Product1_e = rtb_Switch_o >= 0.0 ? rtb_Switch_o : 0.0;

    /* MinMax: '<S336>/MinMax1' incorporates:
     *  Constant: '<S333>/Constant'
     *  Constant: '<S333>/Constant2'
     *  MinMax: '<S336>/MinMax'
     */
    minV = (rtb_Product1_e <= rtInf) || rtIsNaN(rtInf) ? rtb_Product1_e : rtInf;

    /* Update for UnitDelay: '<S335>/Unit Delay' incorporates:
     *  MinMax: '<S336>/MinMax1'
     */
    BaseEngineController_A02_DWork.s335_UnitDelay_DSTATE = minV;
  }

  /* End of RelationalOperator: '<S316>/Relational Operator' */
  /* End of Outputs for SubSystem: '<S316>/Integrate Offset To ECT' */

  /* Sum: '<S316>/Sum1' */
  rtb_Switch_e = BaseEngineController_A02_B.s641_Merge +
    BaseEngineController_A02_B.s335_Switch1;

  /* MinMax: '<S334>/MinMax' */
  rtb_Switch_e = (rtb_Switch_e >= BaseEngineController_A02_B.s641_Merge) ||
    rtIsNaN(BaseEngineController_A02_B.s641_Merge) ? rtb_Switch_e :
    BaseEngineController_A02_B.s641_Merge;

  /* MinMax: '<S334>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S316>/motohawk_calibration3'
   */
  BaseEngineController_A02_B.s334_MinMax1 = (rtb_Switch_e <=
    (SteadyStateECT_DataStore())) || rtIsNaN((SteadyStateECT_DataStore())) ?
    rtb_Switch_e : (SteadyStateECT_DataStore());

  /* S-Function Block: <S376>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (NECCT09In_DataStore()) = BaseEngineController_A02_B.s334_MinMax1;
    (NECCT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s334_MinMax1, (NECCT09IdxArr_DataStore()), 9,
       (NECCT09Idx_DataStore()));
    rtb_motohawk_prelookup_em = (NECCT09Idx_DataStore());
  }

  /* S-Function Block: <S375>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) = BaseEngineController_A02_B.s304_Saturation1;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s304_Saturation1, (MAFPort05IdxArr_DataStore()),
       5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_b = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S350>/RelOp' incorporates:
   *  Constant: '<S350>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S300>/motohawk_data_read'
   */
  rtb_RelOp_g = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S300>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S343>/Enable'
   */
  if (rtb_RelOp_g) {
    if (!BaseEngineController_A02_DWork.s300_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S343>/Unit Delay' */
      BaseEngineController_A02_DWork.s343_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s300_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S343>/Sum' incorporates:
     *  Constant: '<S343>/Constant'
     *  UnitDelay: '<S343>/Unit Delay'
     */
    rtb_Add_a = (int8_T)(BaseEngineController_A02_DWork.s343_UnitDelay_DSTATE +
                         1);

    /* Sum: '<S343>/Add' incorporates:
     *  Constant: '<S343>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S343>/Relational Operator' */
    rtb_LogicalOperator1_a = (rtb_Add_a <= rtb_Sum_l3);

    /* Switch: '<S343>/Switch' */
    if (rtb_LogicalOperator1_a) {
      rtb_Sum_l3 = rtb_Add_a;
    }

    /* End of Switch: '<S343>/Switch' */

    /* Outputs for Enabled SubSystem: '<S343>/Collect Average' incorporates:
     *  EnablePort: '<S360>/Enable'
     */
    /* Logic: '<S343>/Logical Operator' incorporates:
     *  Constant: '<S343>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S343>/Relational Operator1'
     */
    if (rtb_LogicalOperator1_a && (rtb_Add_a > 2)) {
      if (!BaseEngineController_A02_DWork.s343_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S360>/Unit Delay1' */
        BaseEngineController_A02_DWork.s360_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s343_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S360>/Sum1' incorporates:
       *  UnitDelay: '<S360>/Unit Delay1'
       */
      rtb_Product1_e = BaseEngineController_A02_B.s635_Merge +
        BaseEngineController_A02_DWork.s360_UnitDelay1_DSTATE;

      /* Product: '<S360>/Product' incorporates:
       *  DataTypeConversion: '<S360>/Data Type Conversion'
       *  Sum: '<S343>/Add1'
       */
      BaseEngineController_A02_B.s360_Product = 1.0 / (real_T)(int8_T)
        (rtb_Sum_l3 - 2) * rtb_Product1_e;

      /* Update for UnitDelay: '<S360>/Unit Delay1' */
      BaseEngineController_A02_DWork.s360_UnitDelay1_DSTATE = rtb_Product1_e;
    } else {
      if (BaseEngineController_A02_DWork.s343_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s343_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S343>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S343>/Collect Average' */

    /* Update for UnitDelay: '<S343>/Unit Delay' */
    BaseEngineController_A02_DWork.s343_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_A02_DWork.s300_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S343>/Collect Average' */
      BaseEngineController_A02_DWork.s343_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S343>/Collect Average' */
      BaseEngineController_A02_DWork.s300_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S300>/Capture ECT At Startup' */
  /* S-Function Block: <S374>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) = BaseEngineController_A02_B.s360_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s360_Product, (ECT_KeyUp09IdxArr_DataStore()),
       9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_eu = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S363>/Sum2' incorporates:
   *  UnitDelay: '<S363>/Unit Delay'
   */
  rtb_Product1_e = BaseEngineController_A02_B.s543_Sum1 -
    BaseEngineController_A02_DWork.s363_UnitDelay_DSTATE;

  /* S-Function Block: <S363>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s363_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S363>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S363>/motohawk_delta_time'
   */
  rtb_Product1_e /= rtb_motohawk_delta_time_f;

  /* S-Function Block: <S364>/motohawk_delta_time */
  rtb_Switch_e = 0.005;

  /* Product: '<S364>/Product' incorporates:
   *  MinMax: '<S364>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S364>/motohawk_calibration'
   */
  rtb_Switch_e /= (rtb_Switch_e >= (EngineAccelFiltConst_DataStore())) ||
    rtIsNaN((EngineAccelFiltConst_DataStore())) ? rtb_Switch_e :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S365>/Sum1' incorporates:
   *  Constant: '<S365>/Constant'
   *  Product: '<S365>/Product'
   *  Product: '<S365>/Product1'
   *  Sum: '<S365>/Sum'
   *  UnitDelay: '<S365>/Unit Delay'
   */
  BaseEngineController_A02_B.s365_Sum1 = (1.0 - rtb_Switch_e) *
    BaseEngineController_A02_DWork.s365_UnitDelay_DSTATE + rtb_Product1_e *
    rtb_Switch_e;

  /* S-Function Block: <S301>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_A02_B.s365_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s365_Sum1, (RPMAccel17IdxArr_DataStore()), 17,
       (RPMAccel17Idx_DataStore()));
    BaseEngineController_A02_B.s301_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* S-Function Block: <S301>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TimeSinceRun09In_DataStore()) = BaseEngineController_A02_B.s371_Switch;
    (TimeSinceRun09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s371_Switch, (TimeSinceRun09IdxArr_DataStore()),
       9, (TimeSinceRun09Idx_DataStore()));
    rtb_TimeSinceRun09 = (TimeSinceRun09Idx_DataStore());
  }

  /* RelationalOperator: '<S130>/RelOp' incorporates:
   *  Constant: '<S130>/Constant'
   */
  rtb_RelOp_av = (BaseEngineController_A02_B.s366_State == 3);

  /* S-Function Block: <S570>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s570_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_m = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S570>/Unit Delay' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s570_UnitDelay_DSTATE;

  /* Logic: '<S545>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(30) || IsFaultActive(31));

  /* Logic: '<S545>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(30) || IsFaultSuspected(31));

  /* S-Function Block: <S384>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get(&rtb_DataTypeConversion6, NULL);
  }

  /* Gain: '<S384>/Gain' */
  BaseEngineController_A02_B.s384_Gain = 0.00999999999839929 * (real_T)
    rtb_DataTypeConversion6;

  /* Product: '<S545>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration4'
   */
  rtb_Merge_oq = BaseEngineController_A02_B.s384_Gain * (FuelSensGain_DataStore());

  /* Sum: '<S545>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s545_Sum1 = rtb_Merge_oq + (FuelSensOfst_DataStore());

  /* Saturate: '<S545>/Saturation' */
  rtb_Saturation_j = BaseEngineController_A02_B.s545_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_A02_B.s545_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s545_Sum1;

  /* UnitDelay: '<S545>/Unit Delay1' */
  rtb_UnitDelay1_p = BaseEngineController_A02_DWork.s545_UnitDelay1_DSTATE;

  /* If: '<S545>/If' incorporates:
   *  Logic: '<S545>/Logical Operator5'
   *  Logic: '<S545>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S545>/If Action Subsystem' incorporates:
     *  ActionPort: '<S562>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_p, &rtb_Merge_k1);

    /* End of Outputs for SubSystem: '<S545>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S545>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S563>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_k1);

    /* End of Outputs for SubSystem: '<S545>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S545>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S564>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_Saturation_j, &rtb_Merge_k1);

    /* End of Outputs for SubSystem: '<S545>/If Action Subsystem2' */
  }

  /* End of If: '<S545>/If' */

  /* Product: '<S570>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S570>/motohawk_delta_time'
   *  Sum: '<S570>/Sum3'
   */
  rtb_Switch_e = 1.0 / rtb_motohawk_delta_time_m * (rtb_Merge_k1 -
    rtb_Product1_e);

  /* MinMax: '<S571>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S568>/motohawk_calibration1'
   */
  rtb_Switch_e = (rtb_Switch_e >= (Fall_Rate_DataStore())) || rtIsNaN
    ((Fall_Rate_DataStore())) ? rtb_Switch_e : (Fall_Rate_DataStore());

  /* Sum: '<S570>/Sum2' incorporates:
   *  MinMax: '<S571>/MinMax1'
   *  Product: '<S570>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S568>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S570>/motohawk_delta_time'
   */
  rtb_Sum2_n = ((rtb_Switch_e <= (Rise_Rate_DataStore())) || rtIsNaN
                ((Rise_Rate_DataStore())) ? rtb_Switch_e : (Rise_Rate_DataStore()))
    * rtb_motohawk_delta_time_m + rtb_Product1_e;

  /* S-Function Block: <S566>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s566_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S566>/Product' incorporates:
   *  MinMax: '<S566>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S566>/motohawk_calibration'
   */
  rtb_Switch_e /= (rtb_Switch_e >= (FuelSensFilterConst_DataStore())) || rtIsNaN
    ((FuelSensFilterConst_DataStore())) ? rtb_Switch_e :
    (FuelSensFilterConst_DataStore());

  /* Sum: '<S569>/Sum1' incorporates:
   *  Constant: '<S569>/Constant'
   *  Product: '<S569>/Product'
   *  Product: '<S569>/Product1'
   *  Sum: '<S569>/Sum'
   *  UnitDelay: '<S569>/Unit Delay'
   */
  rtb_Sum1_da = (1.0 - rtb_Switch_e) *
    BaseEngineController_A02_DWork.s569_UnitDelay_DSTATE + rtb_Merge_k1 *
    rtb_Switch_e;

  /* UnitDelay: '<S567>/Unit Delay' */
  rtb_UnitDelay_li = BaseEngineController_A02_DWork.s567_UnitDelay_DSTATE;

  /* UnitDelay: '<S567>/Unit Delay1' */
  rtb_UnitDelay1_e = BaseEngineController_A02_DWork.s567_UnitDelay1_DSTATE;

  /* UnitDelay: '<S567>/Unit Delay2' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s567_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S561>/Multiport Switch' incorporates:
   *  Product: '<S567>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 1:
    rtb_Product1_e = rtb_Sum2_n;
    break;

   case 2:
    rtb_Product1_e = rtb_Sum1_da;
    break;

   default:
    /* Product: '<S567>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration3'
     */
    rtb_Product1_e *= (Gain3_DataStore());

    /* Sum: '<S567>/Sum2' incorporates:
     *  Product: '<S567>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration2'
     */
    rtb_Product1_e += (Gain2_DataStore()) * rtb_UnitDelay1_e;

    /* Sum: '<S567>/Sum' incorporates:
     *  Product: '<S567>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration1'
     *  Sum: '<S567>/Sum1'
     */
    rtb_Product1_e = ((Gain1_DataStore()) * rtb_UnitDelay_li + rtb_Product1_e) +
      rtb_Merge_k1;
    rtb_Product1_e *= (Gain4_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S561>/Multiport Switch' */
  /* If: '<S565>/If' incorporates:
   *  Inport: '<S572>/In1'
   *  Inport: '<S573>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S565>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S565>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S565>/NewValue' incorporates:
     *  ActionPort: '<S572>/Action Port'
     */
    BaseEngineController_A02_B.s565_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S565>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S565>/OldValue' incorporates:
     *  ActionPort: '<S573>/Action Port'
     */
    BaseEngineController_A02_B.s565_Merge = rtb_Product1_e;

    /* End of Outputs for SubSystem: '<S565>/OldValue' */
  }

  /* End of If: '<S565>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Run' incorporates:
   *  EnablePort: '<S129>/Enable'
   */
  if (rtb_RelOp_av) {
    if (!BaseEngineController_A02_DWork.s15_Run_MODE) {
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

      /* InitializeConditions for UnitDelay: '<S151>/Unit Delay' */
      BaseEngineController_A02_DWork.s151_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S152>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s152_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S150>/Unit Delay' */
      BaseEngineController_A02_DWork.s150_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S153>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s153_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S150>/Unit Delay1' */
      BaseEngineController_A02_DWork.s150_UnitDelay1_DSTATE = 0.0;

      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S129>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S129>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S202>/IdleStateMachine' */
        BaseEngineController_A02_IdleStateMachine_Init();

        /* S-Function Block: <S201>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s201_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

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

        /* InitializeConditions for Atomic SubSystem: '<S142>/AiflowOffset' */

        /* S-Function Block: <S208>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s208_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* End of InitializeConditions for SubSystem: '<S142>/AiflowOffset' */

        /* S-Function Block: <S233>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s233_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S129>/MaxGovernor' */

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

        /* S-Function Block: <S195>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s195_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
        /* Initial conditions for function-call system: '<S129>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S258>/Initial Condition is True' */
        BaseEngineController_A02_DWork.s258_InitialConditionisTrue_DSTATE = TRUE;
      }

      /* InitializeConditions for Atomic SubSystem: '<S129>/O2 Control' */

      /* InitializeConditions for Atomic SubSystem: '<S143>/O2 PID Controller' */
      /* InitializeConditions for UnitDelay: '<S250>/Unit Delay' */
      BaseEngineController_A02_DWork.s250_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S247>/Unit Delay' */
      BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S246>/Unit Delay' */
      BaseEngineController_A02_DWork.s246_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S247>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s247_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S243>/Unit Delay1' */
      BaseEngineController_A02_DWork.s243_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S251>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s251_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S243>/Unit Delay' */
      BaseEngineController_A02_DWork.s243_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S253>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s253_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S243>/Unit Delay2' */
      BaseEngineController_A02_DWork.s243_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S252>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_DWork.s252_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S143>/O2 PID Controller' */

      /* End of InitializeConditions for SubSystem: '<S129>/O2 Control' */

      /* Level2 S-Function Block: '<S129>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_4024p0001 */
      BaseEngineController_A02_DWork.s129_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_A02_DWork.s15_Run_MODE = TRUE;
    }

    /* Outputs for Enabled SubSystem: '<S137>/ShutDownTasksComplete Reset' incorporates:
     *  EnablePort: '<S146>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration2' */
    if ((AirControlSource_DataStore())) {
      /* S-Function (motohawk_sfun_data_write): '<S146>/motohawk_data_write' incorporates:
       *  Constant: '<S146>/Constant'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration2' */
    /* End of Outputs for SubSystem: '<S137>/ShutDownTasksComplete Reset' */
    /* Product: '<S147>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S147>/motohawk_data_read'
     */
    BaseEngineController_A02_B.s147_Product =
      BaseEngineController_A02_B.s528_Merge / MAFPortModel_DataStore();

    /* Sum: '<S147>/Sum' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S147>/motohawk_data_read1'
     */
    BaseEngineController_A02_B.s147_Sum =
      BaseEngineController_A02_B.s147_Product - VETable_DataStore();

    /* S-Function Block: <S149>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s149_motohawk_delta_time_DWORK1, NULL);
      rtb_Switch_b = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S149>/Product' incorporates:
     *  MinMax: '<S149>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S149>/motohawk_calibration'
     */
    rtb_Switch_b /= (rtb_Switch_b >= (VEAdaptFilt_DataStore())) || rtIsNaN
      ((VEAdaptFilt_DataStore())) ? rtb_Switch_b : (VEAdaptFilt_DataStore());

    /* Sum: '<S151>/Sum1' incorporates:
     *  Constant: '<S151>/Constant'
     *  Product: '<S151>/Product'
     *  Product: '<S151>/Product1'
     *  Sum: '<S151>/Sum'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    rtb_Sum1_a = (1.0 - rtb_Switch_b) *
      BaseEngineController_A02_DWork.s151_UnitDelay_DSTATE +
      BaseEngineController_A02_B.s147_Sum * rtb_Switch_b;

    /* S-Function Block: <S152>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s152_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fm = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S150>/Sum' incorporates:
     *  UnitDelay: '<S150>/Unit Delay'
     */
    rtb_Switch_b = BaseEngineController_A02_B.s543_Sum1 -
      BaseEngineController_A02_DWork.s150_UnitDelay_DSTATE;

    /* Abs: '<S150>/Abs' */
    rtb_Switch_b = fabs(rtb_Switch_b);

    /* RelationalOperator: '<S150>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration'
     */
    BaseEngineController_A02_B.s150_RelationalOperator = ((rtb_Switch_b <=
      (StableRPM__DataStore())));

    /* Switch: '<S152>/Switch' incorporates:
     *  Constant: '<S152>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S152>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S152>/motohawk_delta_time'
     *  Sum: '<S152>/Sum'
     */
    if (BaseEngineController_A02_B.s150_RelationalOperator) {
      rtb_Switch_b = rtb_motohawk_delta_time_fm + StableRPM_DataStore();
    } else {
      rtb_Switch_b = 0.0;
    }

    /* End of Switch: '<S152>/Switch' */
    /* RelationalOperator: '<S150>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s150_RelationalOperator1 = ((rtb_Switch_b >=
      (StableRPM_t_DataStore())));

    /* S-Function Block: <S153>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s153_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_iv = ((real_T) delta) * 0.000001;
    }

    /* Abs: '<S150>/Abs1' incorporates:
     *  Sum: '<S150>/Sum1'
     *  UnitDelay: '<S150>/Unit Delay1'
     */
    rtb_Product1_e = fabs(rtb_Torque -
                          BaseEngineController_A02_DWork.s150_UnitDelay1_DSTATE);

    /* RelationalOperator: '<S150>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration2'
     */
    BaseEngineController_A02_B.s150_RelationalOperator2 = ((rtb_Product1_e <=
      (StableLoad__DataStore())));

    /* Switch: '<S153>/Switch' incorporates:
     *  Constant: '<S153>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S153>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S153>/motohawk_delta_time'
     *  Sum: '<S153>/Sum'
     */
    if (BaseEngineController_A02_B.s150_RelationalOperator2) {
      rtb_Product1_e = rtb_motohawk_delta_time_iv + StableLoad_DataStore();
    } else {
      rtb_Product1_e = 0.0;
    }

    /* End of Switch: '<S153>/Switch' */
    /* RelationalOperator: '<S150>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration3'
     */
    BaseEngineController_A02_B.s150_RelationalOperator3 = ((rtb_Product1_e >=
      (StableLoad_t_DataStore())));

    /* Logic: '<S150>/Logical Operator' */
    BaseEngineController_A02_B.s150_LogicalOperator =
      ((BaseEngineController_A02_B.s150_RelationalOperator1 &&
        BaseEngineController_A02_B.s150_RelationalOperator3));

    /* If: '<S154>/If' incorporates:
     *  Inport: '<S155>/In1'
     *  Inport: '<S156>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S154>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S154>/override_enable'
     */
    if ((StableEngine_Ovr_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S154>/NewValue' incorporates:
       *  ActionPort: '<S155>/Action Port'
       */
      rtb_LogicalOperator1_a = (StableEngine_Ovr_new_DataStore());

      /* End of Outputs for SubSystem: '<S154>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S154>/OldValue' incorporates:
       *  ActionPort: '<S156>/Action Port'
       */
      rtb_LogicalOperator1_a = BaseEngineController_A02_B.s150_LogicalOperator;

      /* End of Outputs for SubSystem: '<S154>/OldValue' */
    }

    /* End of If: '<S154>/If' */

    /* Outputs for Enabled SubSystem: '<S147>/Adapt Table' incorporates:
     *  EnablePort: '<S148>/Enable'
     */
    /* Logic: '<S147>/Logical Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration'
     */
    if (rtb_LogicalOperator1_a && ((VE_Adapt_Enable_DataStore()) != 0.0) &&
        BaseEngineController_A02_B.s314_LogicalOperator) {
      /* S-Function Block: <S148>/motohawk_adapt_table */
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
            _new = (VEMap_DataStore())[_row][_col] + rtb_Sum1_a;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (VEMap_DataStore())[_row][_col+1] + rtb_Sum1_a;
            if (_new > (VE_Adapt_Max_DataStore()))
              _new = (VE_Adapt_Max_DataStore());
            if (_new < (VE_Adapt_Min_DataStore()))
              _new = (VE_Adapt_Min_DataStore());
            (VEMap_DataStore())[_row][_col+1] = _new;
          } else {
            real_T _half = (rtb_Sum1_a) / 2;
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
            real_T _half = (rtb_Sum1_a) / 2;
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
            real_T _quarter = (rtb_Sum1_a) / 4;
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

    /* End of Logic: '<S147>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S147>/Adapt Table' */

    /* Saturate: '<S152>/Saturation' */
    rtb_Saturation_dd = rtb_Switch_b >= 16000.0 ? 16000.0 : rtb_Switch_b <= 0.0 ?
      0.0 : rtb_Switch_b;

    /* S-Function (motohawk_sfun_data_write): '<S152>/motohawk_data_write' */
    /* Write to Data Storage as scalar: StableRPM */
    {
      StableRPM_DataStore() = rtb_Saturation_dd;
    }

    /* Saturate: '<S153>/Saturation' */
    rtb_Saturation_bn = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
      0.0 ? 0.0 : rtb_Product1_e;

    /* S-Function (motohawk_sfun_data_write): '<S153>/motohawk_data_write' */
    /* Write to Data Storage as scalar: StableLoad */
    {
      StableLoad_DataStore() = rtb_Saturation_bn;
    }

    /* Outputs for Atomic SubSystem: '<S129>/Base Equiv Ratio' */

    /* S-Function Block: <S138>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_WarmUpMult = TableInterpolation2D_real_T(rtb_motohawk_prelookup_d,
        rtb_motohawk_prelookup_em, (real_T *) ((WarmUpEqRatioMultMap_DataStore())),
        5, 9);
      (WarmUpEqRatioMult_DataStore()) = rtb_WarmUpMult;
    }

    /* S-Function Block: <S138>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_WarmUptimeMult = TableInterpolation2D_real_T(rtb_TimeSinceRun09,
        BaseEngineController_A02_B.s337_motohawk_prelookup, (real_T *)
        ((WarmUpTimeMultMap_DataStore())), 9, 5);
      (WarmUpTimeMult_DataStore()) = rtb_WarmUptimeMult;
    }

    /* S-Function Block: <S138>/motohawk_interpolation_2d4 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_ECTEnrichment = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s378_motohawk_prelookup1,
         BaseEngineController_A02_B.s337_motohawk_prelookup, (real_T *)
         ((CoolantTempEnrichmentMap_DataStore())), 9, 5);
      (CoolantTempEnrichment_DataStore()) = rtb_ECTEnrichment;
    }

    /* S-Function Block: <S138>/motohawk_interpolation_2d5 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_IATEnrichment = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s378_motohawk_prelookup1,
         BaseEngineController_A02_B.s338_motohawk_prelookup, (real_T *)
         ((IntakeAirTempEnrichmentMap_DataStore())), 9, 5);
      (IntakeAirTempEnrichment_DataStore()) = rtb_IATEnrichment;
    }

    /* S-Function Block: <S138>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s378_motohawk_prelookup4,
         BaseEngineController_A02_B.s339_Indexes, (real_T *)
         ((DesEquivRatioMap_DataStore())), 17, 17);
      (DesEquivRatio_DataStore()) = rtb_motohawk_interpolation_2d3;
    }

    /* If: '<S157>/If' incorporates:
     *  Inport: '<S158>/In1'
     *  Inport: '<S159>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S157>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S157>/override_enable'
     */
    if ((EquivRatio_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S157>/NewValue' incorporates:
       *  ActionPort: '<S158>/Action Port'
       */
      rtb_Product1_e = (EquivRatio_new_DataStore());

      /* End of Outputs for SubSystem: '<S157>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S157>/OldValue' incorporates:
       *  ActionPort: '<S159>/Action Port'
       */
      rtb_Product1_e = rtb_motohawk_interpolation_2d3;

      /* End of Outputs for SubSystem: '<S157>/OldValue' */
    }

    /* End of If: '<S157>/If' */

    /* Product: '<S138>/Product1' */
    BaseEngineController_A02_B.s138_DesEquivRatio = rtb_Product1_e *
      rtb_WarmUpMult * rtb_WarmUptimeMult * rtb_ECTEnrichment *
      rtb_IATEnrichment;

    /* End of Outputs for SubSystem: '<S129>/Base Equiv Ratio' */

    /* S-Function (motohawk_sfun_trigger): '<S129>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_4024p0001 */
    if (BaseEngineController_A02_DWork.s129_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_A02_DWork.s129_motohawk_trigger1_DWORK1 = 1;
    }

    /* Sum: '<S137>/Sum2' */
    rtb_Product1_e =
      BaseEngineController_A02_B.s208_DontallowsetpointtoeverdropbelowtheTargetRPM
      + BaseEngineController_A02_B.s142_MinGovAirPID;

    /* MultiPortSwitch: '<S137>/Multiport Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration2'
     */
    if ((AirControlSource_DataStore()) == FALSE) {
      /* Switch: '<S137>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration1'
       */
      if ((ThrottleSource_DataStore())) {
        /* S-Function Block: <S137>/motohawk_interpolation_1d2 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d2_g = TableInterpolation1D_real_T
            (BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_g;
        }

        /* Switch: '<S137>/Switch2' */
        if (BaseEngineController_A02_B.s182_MultiportSwitch) {
          rtb_Product1_e = BaseEngineController_A02_B.s185_Switch;
        } else {
          /* Switch: '<S137>/Switch4' incorporates:
           *  Logic: '<S137>/Logical Operator'
           *  Sum: '<S137>/Sum1'
           */
          if (!BaseEngineController_A02_B.s218_RelOp) {
            rtb_Product1_e = BaseEngineController_A02_B.s358_Sum2 +
              BaseEngineController_A02_B.s208_DontallowsetpointtoeverdropbelowtheTargetRPM;
          }

          /* End of Switch: '<S137>/Switch4' */
        }

        /* End of Switch: '<S137>/Switch2' */

        /* MinMax: '<S145>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration3'
         */
        rtb_Product1_e = (rtb_Product1_e >= (MinETCSetpoint_DataStore())) ||
          rtIsNaN((MinETCSetpoint_DataStore())) ? rtb_Product1_e :
          (MinETCSetpoint_DataStore());

        /* MinMax: '<S145>/MinMax1' incorporates:
         *  MinMax: '<S145>/MinMax'
         */
        rtb_Merge_c5 = (rtb_Product1_e <= rtb_motohawk_interpolation_1d2_g) ||
          rtIsNaN(rtb_motohawk_interpolation_1d2_g) ? rtb_Product1_e :
          rtb_motohawk_interpolation_1d2_g;
      }

      /* End of Switch: '<S137>/Switch1' */
      BaseEngineController_A02_B.s137_MultiportSwitch = rtb_Merge_c5;
    } else {
      BaseEngineController_A02_B.s137_MultiportSwitch = rtb_Product1_e;
    }

    /* End of MultiPortSwitch: '<S137>/Multiport Switch' */

    /* S-Function Block: <S139>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_o = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s337_motohawk_prelookup, (real_T *)
         ((ECTEGRInterpolationTbl_DataStore())), 5);
      (ECTEGRInterpolation_DataStore()) = rtb_motohawk_interpolation_1d_o;
    }

    /* S-Function Block: <S139>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioTargetDelta_a = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s378_motohawk_prelookup1,
         BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
         ((EGR_MultMap_DataStore())), 9, 9);
      (EGR_Mult_DataStore()) = rtb_RichEquivRatioTargetDelta_a;
    }

    /* Product: '<S139>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S139>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S139>/motohawk_interpolation_2d3'
     */
    BaseEngineController_A02_B.s139_Product = rtb_motohawk_interpolation_1d_o *
      rtb_RichEquivRatioTargetDelta_a;

    /* Outputs for Atomic SubSystem: '<S129>/O2 Control' */

    /* S-Function (motohawk_sfun_fault_action): '<S143>/motohawk_fault_action'
     *
     * Regarding '<S143>/motohawk_fault_action':
       Get Fault Action Status: DisableO2Ctrl
     */
    {
      extern boolean_T GetFaultActionStatus(uint32_T action);
      rtb_motohawk_fault_action_g = GetFaultActionStatus(3);
    }

    /* S-Function (motohawk_sfun_data_write): '<S143>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DisableO2FaultAction */
    {
      DisableO2FaultAction_DataStore() = rtb_motohawk_fault_action_g;
    }

    /* Inport: '<S143>/Desired_Equiv' */
    rtb_DesiredLambda_idx = BaseEngineController_A02_B.s138_DesEquivRatio;
    rtb_DesiredLambda_idx_0 = rtb_WarmUpMult;
    rtb_DesiredLambda_idx_1 = rtb_WarmUptimeMult;
    rtb_DesiredLambda_idx_2 = rtb_ECTEnrichment;
    rtb_DesiredLambda_idx_3 = rtb_IATEnrichment;

    /* Logic: '<S236>/Logical Operator' incorporates:
     *  Constant: '<S236>/Constant'
     *  RelationalOperator: '<S236>/Relational Operator'
     *  RelationalOperator: '<S236>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration1'
     *  Sum: '<S236>/Sum'
     *  Sum: '<S236>/Sum1'
     */
    BaseEngineController_A02_B.s236_LogicalOperator = (((rtb_DesiredLambda_idx <=
      (EquivRatioDelta_DataStore()) + 1.0) && (rtb_DesiredLambda_idx >= 1.0 -
      (EquivRatioDelta_DataStore()))));

    /* Logic: '<S236>/Logical Operator3' */
    BaseEngineController_A02_B.s236_LogicalOperator3 =
      !rtb_motohawk_fault_action_g;

    /* S-Function Block: <S236>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_ox = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_eu, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_ox;
    }

    /* RelationalOperator: '<S236>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S236>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S374>/motohawk_prelookup'
     */
    BaseEngineController_A02_B.s236_RelationalOperator5 =
      ((BaseEngineController_A02_B.s371_Switch >=
        rtb_motohawk_interpolation_1d_ox));

    /* Logic: '<S236>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration2'
     */
    BaseEngineController_A02_B.s236_LogicalOperator2 =
      ((BaseEngineController_A02_B.s314_LogicalOperator &&
        BaseEngineController_A02_B.s236_LogicalOperator &&
        BaseEngineController_A02_B.s236_LogicalOperator3 &&
        (O2ControlEnable_DataStore()) &&
        BaseEngineController_A02_B.s236_RelationalOperator5));

    /* Logic: '<S143>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S143>/motohawk_calibration'
     */
    rtb_LogicalOperator2_l = ((((int8_T)(O2DisablmentMult_DataStore())) != 0) &&
      BaseEngineController_A02_B.s236_LogicalOperator2);

    /* Logic: '<S143>/Logical Operator' */
    rtb_LogicalOperator1_a = !BaseEngineController_A02_B.s236_LogicalOperator2;

    /* S-Function Block: <S241>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s378_motohawk_prelookup1,
         BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S241>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s378_motohawk_prelookup1,
         BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S240>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_j = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_em, (real_T *) ((O2NECCTErrGainMultTbl_DataStore
           ())), 9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_j;
    }

    /* S-Function Block: <S240>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_b, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_l;
    }

    /* Product: '<S240>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S240>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S240>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S375>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S376>/motohawk_prelookup'
     */
    rtb_Product1_e = rtb_motohawk_interpolation_1d_j *
      rtb_motohawk_interpolation_1d1_l;

    /* Logic: '<S143>/Logical Operator1' */
    rtb_Merge_i5 = !rtb_RelOp_av;

    /* Outputs for Atomic SubSystem: '<S143>/O2 PID Controller' */
    /* RelationalOperator: '<S243>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S241>/motohawk_interpolation_2d2'
     *  Sum: '<S243>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_A02_B.s349_Sum1 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S243>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S241>/motohawk_interpolation_2d3'
     *  Sum: '<S243>/Sum4'
     */
    rtb_LogicalOperator2_n2 = (BaseEngineController_A02_B.s349_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S250>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_n2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic[0] =
        BaseEngineController_A02_ConstP.pooled680[rowidx];
      rtb_CombinatorialLogic[1] =
        BaseEngineController_A02_ConstP.pooled680[rowidx + 4];
    }

    /* Switch: '<S250>/Switch1' incorporates:
     *  UnitDelay: '<S250>/Unit Delay'
     */
    if (rtb_CombinatorialLogic[1]) {
      rtb_Switch1_p0 = rtb_CombinatorialLogic[0];
    } else {
      rtb_Switch1_p0 = BaseEngineController_A02_DWork.s250_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S250>/Switch1' */

    /* Switch: '<S238>/Switch' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s238_Switch =
        BaseEngineController_A02_B.s349_Sum1;
    } else {
      /* Switch: '<S243>/Switch2' incorporates:
       *  Logic: '<S243>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S241>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S241>/motohawk_interpolation_2d1'
       *  Sum: '<S243>/Sum1'
       *  Sum: '<S243>/Sum2'
       */
      if (!rtb_Switch1_p0) {
        /* S-Function Block: <S241>/motohawk_interpolation_2d */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_RichEquivRatioTargetDelta_nq = TableInterpolation2D_real_T
            (BaseEngineController_A02_B.s378_motohawk_prelookup1,
             BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
             ((RichTargetDeltaMap_DataStore())), 9, 9);
          (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_nq;
        }

        BaseEngineController_A02_B.s238_Switch =
          rtb_RichEquivRatioTargetDelta_nq + rtb_DesiredLambda_idx;
      } else {
        /* S-Function Block: <S241>/motohawk_interpolation_2d1 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
            (BaseEngineController_A02_B.s378_motohawk_prelookup1,
             BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
             ((LeanTargetDeltaMap_DataStore())), 9, 9);
          (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
        }

        BaseEngineController_A02_B.s238_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S243>/Switch2' */
    }

    /* End of Switch: '<S238>/Switch' */

    /* Sum: '<S245>/Sum2' */
    BaseEngineController_A02_B.s245_Sum2 =
      BaseEngineController_A02_B.s238_Switch -
      BaseEngineController_A02_B.s349_Sum1;

    /* Product: '<S245>/Product5' */
    rtb_Merge_o4 = BaseEngineController_A02_B.s245_Sum2 * rtb_Product1_e;

    /* Product: '<S245>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration5'
     */
    BaseEngineController_A02_B.s245_Product2 = rtb_Merge_o4 *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S247>/Switch1' incorporates:
     *  Constant: '<S242>/Constant'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    if (rtb_Merge_i5) {
      BaseEngineController_A02_B.s247_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_B.s247_Switch1 =
        BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S247>/Switch1' */

    /* Product: '<S245>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration7'
     */
    rtb_Product4_l = rtb_Merge_o4 * (O2CtrlDGain_DataStore());

    /* Sum: '<S246>/Sum2' incorporates:
     *  UnitDelay: '<S246>/Unit Delay'
     */
    rtb_Product1_e = rtb_Product4_l -
      BaseEngineController_A02_DWork.s246_UnitDelay_DSTATE;

    /* S-Function Block: <S246>/motohawk_delta_time */
    rtb_motohawk_delta_time_nl = 0.005;

    /* Product: '<S246>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S246>/motohawk_delta_time'
     */
    BaseEngineController_A02_B.s246_Product = rtb_Product1_e /
      rtb_motohawk_delta_time_nl;

    /* MinMax: '<S244>/MinMax' incorporates:
     *  Constant: '<S242>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration11'
     *  Sum: '<S242>/Sum'
     *  Sum: '<S245>/Sum1'
     */
    rtb_Switch_o = ((BaseEngineController_A02_B.s245_Product2 +
                     BaseEngineController_A02_B.s246_Product) +
                    BaseEngineController_A02_B.s247_Switch1) + 1.0;
    rtb_Product1_e = (rtb_Switch_o >= (O2CtrlPIDOutLowerLimit_DataStore())) ||
      rtIsNaN((O2CtrlPIDOutLowerLimit_DataStore())) ? rtb_Switch_o :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S244>/MinMax1' incorporates:
     *  MinMax: '<S244>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration10'
     */
    rtb_Merge_c5 = (rtb_Product1_e <= (O2CtrlPIDOutUpperLimit_DataStore())) ||
      rtIsNaN((O2CtrlPIDOutUpperLimit_DataStore())) ? rtb_Product1_e :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S245>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration6'
     */
    rtb_Product1_e = rtb_Merge_o4 * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S247>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s247_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fo = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S249>/MinMax' incorporates:
     *  Product: '<S247>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S247>/motohawk_delta_time'
     *  Sum: '<S247>/Sum'
     */
    rtb_Switch_o = rtb_Product1_e * rtb_motohawk_delta_time_fo +
      BaseEngineController_A02_B.s247_Switch1;
    rtb_Product1_e = (rtb_Switch_o >= (O2ITermLowerLimit_DataStore())) ||
      rtIsNaN((O2ITermLowerLimit_DataStore())) ? rtb_Switch_o :
      (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S249>/MinMax1' incorporates:
     *  MinMax: '<S249>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration9'
     */
    minV = (rtb_Product1_e <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? rtb_Product1_e :
      (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S243>/Unit Delay1' */
    rtb_Merge_o4 = BaseEngineController_A02_DWork.s243_UnitDelay1_DSTATE;

    /* Logic: '<S243>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S243>/motohawk_data_read'
     */
    rtb_LogicalOperator10 = (rtb_LogicalOperator2_n2 &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S251>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s251_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ivp = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S243>/Logical Operator4' */
    rtb_RelationalOperator6_k = !rtb_LogicalOperator1_a;

    /* Logic: '<S243>/Logical Operator6' */
    rtb_Merge_i5 = !rtb_Merge_i5;

    /* Switch: '<S251>/Switch' incorporates:
     *  Constant: '<S251>/Constant'
     *  Logic: '<S243>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S251>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S251>/motohawk_delta_time'
     *  Sum: '<S251>/Sum'
     */
    if (rtb_LogicalOperator2_n2 && rtb_RelationalOperator6_k && rtb_Merge_i5) {
      rtb_Product1_e = rtb_motohawk_delta_time_ivp + O2LeanTimer_DataStore();
    } else {
      rtb_Product1_e = 0.0;
    }

    /* End of Switch: '<S251>/Switch' */

    /* Switch: '<S243>/Switch3' */
    if (rtb_LogicalOperator10) {
      BaseEngineController_A02_B.s243_Switch3 = rtb_Merge_o4;
    } else {
      BaseEngineController_A02_B.s243_Switch3 = rtb_Product1_e;
    }

    /* End of Switch: '<S243>/Switch3' */
    /* RelationalOperator: '<S243>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S243>/motohawk_calibration2'
     */
    rtb_LT3 = ((BaseEngineController_A02_B.s243_Switch3 >=
                (O2LeanTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S243>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(50, rtb_LT3);
      UpdateFault(50);
    }

    /* UnitDelay: '<S243>/Unit Delay' */
    rtb_Merge_o4 = BaseEngineController_A02_DWork.s243_UnitDelay_DSTATE;

    /* Logic: '<S243>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S243>/motohawk_data_read'
     */
    rtb_LogicalOperator1_a = (rtb_AboveRich && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S253>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s253_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_m0 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S253>/Switch' incorporates:
     *  Constant: '<S253>/Constant'
     *  Logic: '<S243>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S253>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S253>/motohawk_delta_time'
     *  Sum: '<S253>/Sum'
     */
    if (rtb_AboveRich && rtb_RelationalOperator6_k && rtb_Merge_i5) {
      rtb_Merge_oq = rtb_motohawk_delta_time_m0 + O2RichTimer_DataStore();
    } else {
      rtb_Merge_oq = 0.0;
    }

    /* End of Switch: '<S253>/Switch' */

    /* Switch: '<S243>/Switch1' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s243_Switch1 = rtb_Merge_o4;
    } else {
      BaseEngineController_A02_B.s243_Switch1 = rtb_Merge_oq;
    }

    /* End of Switch: '<S243>/Switch1' */
    /* RelationalOperator: '<S243>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S243>/motohawk_calibration1'
     */
    rtb_LT2 = ((BaseEngineController_A02_B.s243_Switch1 >=
                (O2RichTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S243>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(51, rtb_LT2);
      UpdateFault(51);
    }

    /* UnitDelay: '<S243>/Unit Delay2' */
    rtb_Merge_o4 = BaseEngineController_A02_DWork.s243_UnitDelay2_DSTATE;

    /* Logic: '<S243>/Logical Operator2' incorporates:
     *  Logic: '<S243>/Logical Operator1'
     *  Logic: '<S243>/Logical Operator3'
     */
    rtb_LogicalOperator2_n2 = ((!rtb_LogicalOperator2_n2) && (!rtb_AboveRich));

    /* Logic: '<S243>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S243>/motohawk_data_read'
     */
    rtb_LogicalOperator1_a = (rtb_LogicalOperator2_n2 &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S252>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s252_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_me = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S252>/Switch' incorporates:
     *  Constant: '<S252>/Constant'
     *  Logic: '<S243>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S252>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S252>/motohawk_delta_time'
     *  Sum: '<S252>/Sum'
     */
    if (rtb_LogicalOperator2_n2 && rtb_RelationalOperator6_k && rtb_Merge_i5) {
      rtb_Merge_dn = rtb_motohawk_delta_time_me + O2ActiveTimer_DataStore();
    } else {
      rtb_Merge_dn = 0.0;
    }

    /* End of Switch: '<S252>/Switch' */

    /* Switch: '<S243>/Switch4' */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s243_Switch4 = rtb_Merge_o4;
    } else {
      BaseEngineController_A02_B.s243_Switch4 = rtb_Merge_dn;
    }

    /* End of Switch: '<S243>/Switch4' */
    /* RelationalOperator: '<S243>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S243>/motohawk_calibration3'
     */
    rtb_LT4 = ((BaseEngineController_A02_B.s243_Switch4 >=
                (O2ActiveTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S243>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(52, rtb_LT4);
      UpdateFault(52);
    }

    /* Saturate: '<S251>/Saturation' */
    rtb_Saturation_ad = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
      0.0 ? 0.0 : rtb_Product1_e;

    /* S-Function (motohawk_sfun_data_write): '<S251>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer */
    {
      O2LeanTimer_DataStore() = rtb_Saturation_ad;
    }

    /* Saturate: '<S252>/Saturation' */
    rtb_Saturation_bu = rtb_Merge_dn >= 16000.0 ? 16000.0 : rtb_Merge_dn <= 0.0 ?
      0.0 : rtb_Merge_dn;

    /* S-Function (motohawk_sfun_data_write): '<S252>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer */
    {
      O2ActiveTimer_DataStore() = rtb_Saturation_bu;
    }

    /* Saturate: '<S253>/Saturation' */
    rtb_Saturation_bh = rtb_Merge_oq >= 16000.0 ? 16000.0 : rtb_Merge_oq <= 0.0 ?
      0.0 : rtb_Merge_oq;

    /* S-Function (motohawk_sfun_data_write): '<S253>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer */
    {
      O2RichTimer_DataStore() = rtb_Saturation_bh;
    }

    /* InitialCondition: '<S238>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_A02_DWork.s238_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_A02_DWork.s238_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Merge_c5 = 1.0;
    }

    /* End of InitialCondition: '<S238>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S250>/Unit Delay' */
    BaseEngineController_A02_DWork.s250_UnitDelay_DSTATE = rtb_Switch1_p0;

    /* Update for UnitDelay: '<S247>/Unit Delay' incorporates:
     *  MinMax: '<S249>/MinMax1'
     */
    BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE = minV;

    /* Update for UnitDelay: '<S246>/Unit Delay' */
    BaseEngineController_A02_DWork.s246_UnitDelay_DSTATE = rtb_Product4_l;

    /* Update for UnitDelay: '<S243>/Unit Delay1' */
    BaseEngineController_A02_DWork.s243_UnitDelay1_DSTATE =
      BaseEngineController_A02_B.s243_Switch3;

    /* Update for UnitDelay: '<S243>/Unit Delay' */
    BaseEngineController_A02_DWork.s243_UnitDelay_DSTATE =
      BaseEngineController_A02_B.s243_Switch1;

    /* Update for UnitDelay: '<S243>/Unit Delay2' */
    BaseEngineController_A02_DWork.s243_UnitDelay2_DSTATE =
      BaseEngineController_A02_B.s243_Switch4;

    /* End of Outputs for SubSystem: '<S143>/O2 PID Controller' */

    /* Switch: '<S143>/Switch' incorporates:
     *  Constant: '<S143>/Constant'
     */
    if (rtb_LogicalOperator2_l) {
      BaseEngineController_A02_B.s143_O2FuelMult = 1.0;
    } else {
      BaseEngineController_A02_B.s143_O2FuelMult = rtb_Merge_c5;
    }

    /* End of Switch: '<S143>/Switch' */

    /* S-Function (motohawk_sfun_probe): '<S236>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* S-Function Block: <S143>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITermIn_DataStore()) = BaseEngineController_A02_B.s247_Switch1;
      (O2ITermIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s247_Switch1, (O2ITermIdxArr_DataStore()), 9,
         (O2ITermIdx_DataStore()));
      rtb_ITermIdx = (O2ITermIdx_DataStore());
    }

    /* End of Outputs for SubSystem: '<S129>/O2 Control' */

    /* Outputs for Atomic SubSystem: '<S129>/Fuel System Manager' */

    /* Gain: '<S165>/Gain' */
    rtb_Product1_e = 0.01 * BaseEngineController_A02_B.s565_Merge;

    /* Product: '<S165>/Product1' incorporates:
     *  Constant: '<S165>/ '
     *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration2'
     *  Sum: '<S165>/Add1'
     */
    rtb_Merge_oq = (1.0 - rtb_Product1_e) * (AF_Gasoline_DataStore());

    /* Sum: '<S165>/Add' incorporates:
     *  Product: '<S165>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration3'
     */
    BaseEngineController_A02_B.s165_Add = (AF_Ethanol_DataStore()) *
      rtb_Product1_e + rtb_Merge_oq;

    /* Product: '<S163>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_A02_B.s163_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_A02_B.s304_Saturation1 * rtb_DesiredLambda_idx /
      BaseEngineController_A02_B.s165_Add;

    /* Product: '<S160>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S160>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S160>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_A02_B.s160_PerCylinderMassFlowRate =
      BaseEngineController_A02_B.s163_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S160>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    BaseEngineController_A02_B.s160_ApplyMultipliersforO2KnockControlandEnrichment1
      = BaseEngineController_A02_B.s160_PerCylinderMassFlowRate *
      BaseEngineController_A02_B.s143_O2FuelMult;

    /* Outputs for Atomic SubSystem: '<S140>/Injector Manager' */

    /* Outputs for Enabled SubSystem: '<S161>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S166>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration1' incorporates:
     *  Constant: '<S168>/Constant'
     *  RelationalOperator: '<S168>/RelOp'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S166>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S166>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S166>/motohawk_prelookup1'
     */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!BaseEngineController_A02_DWork.s161_DeltaTPSTransientFueling_MODE) {
        /* S-Function Block: <S170>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_DWork.s170_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S171>/Unit Delay' */
        BaseEngineController_A02_DWork.s171_UnitDelay_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s161_DeltaTPSTransientFueling_MODE = TRUE;
      }

      /* S-Function Block: <S170>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_DWork.s170_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_hl = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S170>/Product' incorporates:
       *  MinMax: '<S170>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S170>/motohawk_calibration'
       */
      rtb_Product_hl /= (rtb_Product_hl >= (DeltaTPS_FiltConst_DataStore())) ||
        rtIsNaN((DeltaTPS_FiltConst_DataStore())) ? rtb_Product_hl :
        (DeltaTPS_FiltConst_DataStore());

      /* Sum: '<S171>/Sum1' incorporates:
       *  Constant: '<S171>/Constant'
       *  Product: '<S171>/Product'
       *  Product: '<S171>/Product1'
       *  Sum: '<S171>/Sum'
       *  UnitDelay: '<S171>/Unit Delay'
       */
      BaseEngineController_A02_B.s171_Sum1 = (1.0 - rtb_Product_hl) *
        BaseEngineController_A02_DWork.s171_UnitDelay_DSTATE +
        BaseEngineController_A02_B.s351_Switch2 * rtb_Product_hl;

      /* Sum: '<S166>/Sum' */
      BaseEngineController_A02_B.s166_Sum =
        BaseEngineController_A02_B.s351_Switch2 -
        BaseEngineController_A02_B.s171_Sum1;

      /* S-Function Block: <S166>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) = BaseEngineController_A02_B.s304_Saturation1;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s304_Saturation1, (MAF09IdxArr_DataStore()),
           9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_h = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S166>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_A02_B.s166_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_B.s166_Sum, (DeltaTPS17IdxArr_DataStore()),
           17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_fq = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S166>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_k = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_h, rtb_motohawk_prelookup1_fq, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_k;
      }

      /* Outputs for Enabled SubSystem: '<S166>/ECT Transient Fueling' incorporates:
       *  EnablePort: '<S169>/Enable'
       */
      if (rtb_motohawk_interpolation_2d2_k != 1.0) {
        if (!BaseEngineController_A02_DWork.s166_ECTTransientFueling_MODE) {
          BaseEngineController_A02_DWork.s166_ECTTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S169>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_A02_B.s169_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_A02_B.s337_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_A02_B.s169_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_A02_DWork.s166_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S169>/Mult' */
          BaseEngineController_A02_B.s169_motohawk_interpolation_1d = 1.0;
          BaseEngineController_A02_DWork.s166_ECTTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S166>/ECT Transient Fueling' */

      /* Product: '<S166>/Product1' incorporates:
       *  Constant: '<S168>/Constant'
       *  RelationalOperator: '<S168>/RelOp'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S166>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S166>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S166>/motohawk_prelookup1'
       */
      BaseEngineController_A02_B.s166_Product1 =
        rtb_motohawk_interpolation_2d2_k *
        BaseEngineController_A02_B.s169_motohawk_interpolation_1d;

      /* Update for UnitDelay: '<S171>/Unit Delay' */
      BaseEngineController_A02_DWork.s171_UnitDelay_DSTATE =
        BaseEngineController_A02_B.s171_Sum1;
    } else {
      if (BaseEngineController_A02_DWork.s161_DeltaTPSTransientFueling_MODE) {
        /* Disable for Enabled SubSystem: '<S166>/ECT Transient Fueling' */
        /* Disable for Outport: '<S169>/Mult' */
        BaseEngineController_A02_B.s169_motohawk_interpolation_1d = 1.0;
        BaseEngineController_A02_DWork.s166_ECTTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S166>/ECT Transient Fueling' */

        /* Disable for Outport: '<S166>/DeltaTPSMult' */
        BaseEngineController_A02_B.s166_Product1 = 1.0;
        BaseEngineController_A02_DWork.s161_DeltaTPSTransientFueling_MODE =
          FALSE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration1' */
    /* End of Outputs for SubSystem: '<S161>/Delta TPS Transient Fueling' */

    /* Product: '<S161>/Divide' */
    rtb_Divide_l = BaseEngineController_A02_B.s166_Product1 *
      BaseEngineController_A02_B.s160_ApplyMultipliersforO2KnockControlandEnrichment1;

    /* S-Function Block: <S161>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s378_motohawk_prelookup1,
         BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* RelationalOperator: '<S173>/RelOp' incorporates:
     *  Constant: '<S173>/Constant'
     */
    rtb_RelOp_fa = (BaseEngineController_A02_B.s543_Sum1 != 0.0);

    /* Outputs for Enabled SubSystem: '<S167>/Multiply and Divide, avoiding divde by zero' */
    BaseEngineController_A02_MultiplyandDivideavoidingdivdebyzero(rtb_RelOp_fa,
      rtb_Divide_l, 60000.0, BaseEngineController_A02_B.s543_Sum1, 1.0,
      &BaseEngineController_A02_B.s167_MultiplyandDivideavoidingdivdebyzero);

    /* End of Outputs for SubSystem: '<S167>/Multiply and Divide, avoiding divde by zero' */

    /* S-Function Block: <S161>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s378_motohawk_prelookup1,
         BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* End of Outputs for SubSystem: '<S140>/Injector Manager' */

    /* Outputs for Atomic SubSystem: '<S140>/O2 Fuel Adapt' */

    /* S-Function Block: <S162>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_f = TableInterpolation1D_real_T
        (rtb_ITermIdx, (real_T *) ((FuelAdaptGainTbl_DataStore())), 9);
      (FuelAdaptGain_DataStore()) = rtb_motohawk_interpolation_1d1_f;
    }

    /* Product: '<S162>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S162>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S143>/motohawk_prelookup13'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s247_Switch1 *
      rtb_motohawk_interpolation_1d1_f;

    /* MinMax: '<S180>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration'
     */
    rtb_Product1_e = (rtb_Product1_e >= (FuelAdaptErrorLwrLim_DataStore())) ||
      rtIsNaN((FuelAdaptErrorLwrLim_DataStore())) ? rtb_Product1_e :
      (FuelAdaptErrorLwrLim_DataStore());

    /* MinMax: '<S180>/MinMax1' incorporates:
     *  MinMax: '<S180>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s180_MinMax1 = (rtb_Product1_e <=
      (FuelAdaptErrorUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptErrorUprLim_DataStore())) ? rtb_Product1_e :
      (FuelAdaptErrorUprLim_DataStore());

    /* S-Function Block: <S162>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2 = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s378_motohawk_prelookup1,
         BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdaptMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_DataStore()) = rtb_motohawk_interpolation_2d2;
    }

    /* End of Outputs for SubSystem: '<S140>/O2 Fuel Adapt' */

    /* MinMax: '<S140>/MinMax' */
    rtb_Product1_e = (rtb_DesiredLambda_idx_0 >= rtb_DesiredLambda_idx_1) ||
      rtIsNaN(rtb_DesiredLambda_idx_1) ? rtb_DesiredLambda_idx_0 :
      rtb_DesiredLambda_idx_1;
    rtb_Product1_e = (rtb_Product1_e >= rtb_DesiredLambda_idx_2) || rtIsNaN
      (rtb_DesiredLambda_idx_2) ? rtb_Product1_e : rtb_DesiredLambda_idx_2;

    /* Outputs for Atomic SubSystem: '<S140>/O2 Fuel Adapt' */
    /* Outputs for Atomic SubSystem: '<S162>/WarmUp Disable' */
    /* Logic: '<S178>/Logical Operator' incorporates:
     *  Constant: '<S178>/Constant'
     *  MinMax: '<S140>/MinMax'
     *  RelationalOperator: '<S178>/Relational Operator'
     */
    BaseEngineController_A02_B.s178_LogicalOperator = !(((rtb_Product1_e >=
      rtb_DesiredLambda_idx_3) || rtIsNaN(rtb_DesiredLambda_idx_3) ?
      rtb_Product1_e : rtb_DesiredLambda_idx_3) > 1.01);

    /* End of Outputs for SubSystem: '<S162>/WarmUp Disable' */

    /* Outputs for Atomic SubSystem: '<S162>/O2 Control Enable Delay' */

    /* S-Function Block: <S179>/motohawk_delta_time */
    rtb_motohawk_delta_time_g = 0.005;

    /* Switch: '<S179>/Switch' incorporates:
     *  Constant: '<S179>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S179>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S179>/motohawk_delta_time'
     *  Sum: '<S179>/Sum'
     */
    if (BaseEngineController_A02_B.s236_LogicalOperator2) {
      rtb_Product1_e = rtb_motohawk_delta_time_g + LiqDelayTime_DataStore();
    } else {
      rtb_Product1_e = 0.0;
    }

    /* End of Switch: '<S179>/Switch' */
    /* RelationalOperator: '<S176>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S176>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_a = (rtb_Product1_e > (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S179>/Saturation' */
    rtb_Saturation_c = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
      0.0 ? 0.0 : rtb_Product1_e;

    /* S-Function (motohawk_sfun_data_write): '<S179>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_c;
    }

    /* End of Outputs for SubSystem: '<S162>/O2 Control Enable Delay' */

    /* Abs: '<S162>/Abs' */
    rtb_Product1_e = fabs(BaseEngineController_A02_B.s247_Switch1);

    /* Logic: '<S162>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S162>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S162>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S162>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S162>/motohawk_calibration2'
     */
    BaseEngineController_A02_B.s162_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_A02_B.s178_LogicalOperator &&
        rtb_LogicalOperator1_a && (rtb_Product1_e <= (FuelAdaptDelta_DataStore()))));

    /* Outputs for Enabled SubSystem: '<S162>/Adapt FuelFlowComp Map' incorporates:
     *  EnablePort: '<S174>/Enable'
     */
    if (BaseEngineController_A02_B.s162_LogicalOperator2) {
      /* S-Function Block: <S174>/motohawk_adapt_table */
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
              BaseEngineController_A02_B.s180_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdaptMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdaptMap_DataStore())[_row][_col+1] +
              BaseEngineController_A02_B.s180_MinMax1;
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

      /* RelationalOperator: '<S174>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S174>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S162>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator2_c = ((rtb_motohawk_interpolation_2d2 >=
        (FuelFlowCompMaxValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S174>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(24, rtb_RelationalOperator2_c);
        UpdateFault(24);
      }

      /* RelationalOperator: '<S174>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S174>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S162>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator1_dd = ((rtb_motohawk_interpolation_2d2 <=
        (FuelFlowCompMinValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S174>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(25, rtb_RelationalOperator1_dd);
        UpdateFault(25);
      }
    }

    /* End of Outputs for SubSystem: '<S162>/Adapt FuelFlowComp Map' */

    /* S-Function Block: <S162>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_b = TableInterpolation2D_real_T
        (BaseEngineController_A02_B.s378_motohawk_prelookup1,
         BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_b;
    }

    /* Product: '<S162>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S162>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S162>/motohawk_interpolation_2d2'
     */
    rtb_Product1_e = rtb_motohawk_interpolation_2d1_b *
      rtb_motohawk_interpolation_2d2;

    /* End of Outputs for SubSystem: '<S140>/O2 Fuel Adapt' */

    /* End of Outputs for SubSystem: '<S129>/Fuel System Manager' */

    /* ZeroOrderHold: '<S129>/Zero-Order Hold1' */
    BaseEngineController_A02_B.s128_SparkEnergy =
      BaseEngineController_A02_B.s144_motohawk_interpolation_2d1;

    /* ZeroOrderHold: '<S129>/Zero-Order Hold12' */
    BaseEngineController_A02_B.s128_SparkAdv =
      BaseEngineController_A02_B.s255_Switch;

    /* ZeroOrderHold: '<S129>/Zero-Order Hold16' incorporates:
     *  Constant: '<S129>/ON1'
     */
    BaseEngineController_A02_B.s128_FUELP = TRUE;

    /* ZeroOrderHold: '<S129>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/Primary Pulse Injection Timing'
     */
    BaseEngineController_A02_B.s128_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S129>/Zero-Order Hold18' */
    BaseEngineController_A02_B.s128_Throttle =
      BaseEngineController_A02_B.s137_MultiportSwitch;

    /* ZeroOrderHold: '<S129>/Zero-Order Hold2' */
    BaseEngineController_A02_B.s128_EGR =
      BaseEngineController_A02_B.s139_Product;

    /* ZeroOrderHold: '<S129>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_A02_B.s128_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S129>/Zero-Order Hold4' */
    BaseEngineController_A02_B.s128_FuelMult = rtb_Product1_e;

    /* ZeroOrderHold: '<S129>/Zero-Order Hold5' incorporates:
     *  Constant: '<S129>/OILP'
     */
    BaseEngineController_A02_B.s128_OILP = TRUE;

    /* ZeroOrderHold: '<S129>/Zero-Order Hold6' incorporates:
     *  Constant: '<S129>/OILP1'
     */
    BaseEngineController_A02_B.s128_O2Heater = TRUE;

    /* S-Function (motohawk_sfun_replicate): '<S129>/motohawk_replicate1' */

    /* S-Function Block: <S129>/motohawk_replicate1 */
    {
      int_T i1;
      real_T *y0 = BaseEngineController_A02_B.s128_FPC;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] =
          BaseEngineController_A02_B.s167_MultiplyandDivideavoidingdivdebyzero.s172_chargemass;
      }
    }
  } else {
    if (BaseEngineController_A02_DWork.s15_Run_MODE) {
      /* Level2 S-Function Block: '<S129>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_4024p0001 */
      BaseEngineController_A02_DWork.s129_motohawk_trigger1_DWORK1 = 0;

      /* Disable for Atomic SubSystem: '<S129>/Fuel System Manager' */
      /* Disable for Atomic SubSystem: '<S140>/Injector Manager' */
      /* Disable for Enabled SubSystem: '<S161>/Delta TPS Transient Fueling' */
      /* Disable for Enabled SubSystem: '<S166>/ECT Transient Fueling' */
      /* Disable for Outport: '<S169>/Mult' */
      BaseEngineController_A02_B.s169_motohawk_interpolation_1d = 1.0;
      BaseEngineController_A02_DWork.s166_ECTTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S166>/ECT Transient Fueling' */

      /* Disable for Outport: '<S166>/DeltaTPSMult' */
      BaseEngineController_A02_B.s166_Product1 = 1.0;
      BaseEngineController_A02_DWork.s161_DeltaTPSTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S161>/Delta TPS Transient Fueling' */
      /* End of Disable for SubSystem: '<S140>/Injector Manager' */
      /* End of Disable for SubSystem: '<S129>/Fuel System Manager' */
      BaseEngineController_A02_DWork.s15_Run_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Run' */

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1409p0004 */
  if (BaseEngineController_A02_DWork.s14_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s14_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1408p0004 */
  if (BaseEngineController_A02_DWork.s14_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s14_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_fault_action): '<S23>/motohawk_fault_action1'
   *
   * Regarding '<S23>/motohawk_fault_action1':
     Get Fault Action Status: SoftRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_m = GetFaultActionStatus(7);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S23>/motohawk_fault_action2'
   *
   * Regarding '<S23>/motohawk_fault_action2':
     Get Fault Action Status: MediumRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action2 = GetFaultActionStatus(6);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S23>/motohawk_fault_action3'
   *
   * Regarding '<S23>/motohawk_fault_action3':
     Get Fault Action Status: HardRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action3 = GetFaultActionStatus(5);
  }

  /* Logic: '<S23>/Logical Operator4' */
  rtb_LogicalOperator1_a = (rtb_motohawk_fault_action1_m ||
    rtb_motohawk_fault_action2 || rtb_motohawk_fault_action3);

  /* Outputs for Enabled SubSystem: '<S23>/PassThrough1' incorporates:
   *  EnablePort: '<S102>/Enable'
   */
  if (rtb_motohawk_fault_action1_m) {
    if (!BaseEngineController_A02_DWork.s23_PassThrough1_MODE) {
      BaseEngineController_A02_DWork.s23_PassThrough1_MODE = TRUE;
    }

    /* Inport: '<S102>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration9'
     */
    BaseEngineController_A02_B.s23_Merge1[0] = ((int8_T)
      (SoftCycle1Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[1] = ((int8_T)
      (SoftCycle1Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[2] = ((int8_T)
      (SoftCycle1Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[3] = ((int8_T)
      (SoftCycle1Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[4] = ((int8_T)
      (SoftCycle1Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[5] = ((int8_T)
      (SoftCycle1Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[6] = ((int8_T)
      (SoftCycle1Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[7] = ((int8_T)
      (SoftCycle1Cyl8_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[8] = ((int8_T)
      (SoftCycle2Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[9] = ((int8_T)
      (SoftCycle2Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[10] = ((int8_T)
      (SoftCycle2Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[11] = ((int8_T)
      (SoftCycle2Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[12] = ((int8_T)
      (SoftCycle2Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[13] = ((int8_T)
      (SoftCycle2Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[14] = ((int8_T)
      (SoftCycle2Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[15] = ((int8_T)
      (SoftCycle2Cyl8_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[16] = ((int8_T)
      (SoftCycle3Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[17] = ((int8_T)
      (SoftCycle3Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[18] = ((int8_T)
      (SoftCycle3Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[19] = ((int8_T)
      (SoftCycle3Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[20] = ((int8_T)
      (SoftCycle3Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[21] = ((int8_T)
      (SoftCycle3Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[22] = ((int8_T)
      (SoftCycle3Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[23] = ((int8_T)
      (SoftCycle3Cyl8_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[24] = ((int8_T)
      (SoftCycle4Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[25] = ((int8_T)
      (SoftCycle4Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[26] = ((int8_T)
      (SoftCycle4Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[27] = ((int8_T)
      (SoftCycle4Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[28] = ((int8_T)
      (SoftCycle4Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[29] = ((int8_T)
      (SoftCycle4Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[30] = ((int8_T)
      (SoftCycle4Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[31] = ((int8_T)
      (SoftCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_A02_DWork.s23_PassThrough1_MODE) {
      /* Disable for Outport: '<S102>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_A02_B.s23_Merge1[i] = 0;
      }

      /* End of Outport: '<S102>/Out1' */
      BaseEngineController_A02_DWork.s23_PassThrough1_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S23>/PassThrough1' */
  /* Outputs for Enabled SubSystem: '<S23>/PassThrough2' incorporates:
   *  EnablePort: '<S103>/Enable'
   */
  if (rtb_motohawk_fault_action2) {
    /* Inport: '<S103>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration9'
     */
    BaseEngineController_A02_B.s23_Merge1[0] = ((int8_T)
      (MediumCycle1Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[1] = ((int8_T)
      (MediumCycle1Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[2] = ((int8_T)
      (MediumCycle1Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[3] = ((int8_T)
      (MediumCycle1Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[4] = ((int8_T)
      (MediumCycle1Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[5] = ((int8_T)
      (MediumCycle1Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[6] = ((int8_T)
      (MediumCycle1Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[7] = ((int8_T)
      (MediumCycle1Cyl8_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[8] = ((int8_T)
      (MediumCycle2Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[9] = ((int8_T)
      (MediumCycle2Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[10] = ((int8_T)
      (MediumCycle2Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[11] = ((int8_T)
      (MediumCycle2Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[12] = ((int8_T)
      (MediumCycle2Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[13] = ((int8_T)
      (MediumCycle2Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[14] = ((int8_T)
      (MediumCycle2Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[15] = ((int8_T)
      (MediumCycle2Cyl8_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[16] = ((int8_T)
      (MediumCycle3Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[17] = ((int8_T)
      (MediumCycle3Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[18] = ((int8_T)
      (MediumCycle3Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[19] = ((int8_T)
      (MediumCycle3Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[20] = ((int8_T)
      (MediumCycle3Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[21] = ((int8_T)
      (MediumCycle3Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[22] = ((int8_T)
      (MediumCycle3Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[23] = ((int8_T)
      (MediumCycle3Cyl8_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[24] = ((int8_T)
      (MediumCycle4Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[25] = ((int8_T)
      (MediumCycle4Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[26] = ((int8_T)
      (MediumCycle4Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[27] = ((int8_T)
      (MediumCycle4Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[28] = ((int8_T)
      (MediumCycle4Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[29] = ((int8_T)
      (MediumCycle4Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[30] = ((int8_T)
      (MediumCycle4Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[31] = ((int8_T)
      (MediumCycle4Cyl8_DataStore()));
  }

  /* End of Outputs for SubSystem: '<S23>/PassThrough2' */
  /* Outputs for Enabled SubSystem: '<S23>/PassThrough3' incorporates:
   *  EnablePort: '<S104>/Enable'
   */
  if (rtb_motohawk_fault_action3) {
    if (!BaseEngineController_A02_DWork.s23_PassThrough3_MODE) {
      BaseEngineController_A02_DWork.s23_PassThrough3_MODE = TRUE;
    }

    /* Inport: '<S104>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration9'
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
     */
    BaseEngineController_A02_B.s23_Merge1[0] = ((int8_T)
      (HardCycle1Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[1] = ((int8_T)
      (HardCycle1Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[2] = ((int8_T)
      (HardCycle1Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[3] = ((int8_T)
      (HardCycle1Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[4] = ((int8_T)
      (HardCycle1Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[5] = ((int8_T)
      (HardCycle1Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[6] = ((int8_T)
      (HardCycle1Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[7] = ((int8_T)
      (HardCycle1Cyl8_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[8] = ((int8_T)
      (HardCycle2Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[9] = ((int8_T)
      (HardCycle2Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[10] = ((int8_T)
      (HardCycle2Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[11] = ((int8_T)
      (HardCycle2Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[12] = ((int8_T)
      (HardCycle2Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[13] = ((int8_T)
      (HardCycle2Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[14] = ((int8_T)
      (HardCycle2Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[15] = ((int8_T)
      (HardCycle2Cyl8_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[16] = ((int8_T)
      (HardCycle3Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[17] = ((int8_T)
      (HardCycle3Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[18] = ((int8_T)
      (HardCycle3Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[19] = ((int8_T)
      (HardCycle3Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[20] = ((int8_T)
      (HardCycle3Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[21] = ((int8_T)
      (HardCycle3Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[22] = ((int8_T)
      (HardCycle3Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[23] = ((int8_T)
      (HardCycle3Cyl8_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[24] = ((int8_T)
      (HardCycle4Cyl1_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[25] = ((int8_T)
      (HardCycle4Cyl2_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[26] = ((int8_T)
      (HardCycle4Cyl3_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[27] = ((int8_T)
      (HardCycle4Cyl4_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[28] = ((int8_T)
      (HardCycle4Cyl5_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[29] = ((int8_T)
      (HardCycle4Cyl6_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[30] = ((int8_T)
      (HardCycle4Cyl7_DataStore()));
    BaseEngineController_A02_B.s23_Merge1[31] = ((int8_T)
      (HardCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_A02_DWork.s23_PassThrough3_MODE) {
      /* Disable for Outport: '<S104>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_A02_B.s23_Merge1[i] = 0;
      }

      /* End of Outport: '<S104>/Out1' */
      BaseEngineController_A02_DWork.s23_PassThrough3_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S23>/PassThrough3' */

  /* Outputs for Enabled SubSystem: '<S23>/SequenceCutMachine' incorporates:
   *  EnablePort: '<S107>/Enable'
   */
  if (rtb_LogicalOperator1_a) {
    if (!BaseEngineController_A02_DWork.s23_SequenceCutMachine_MODE) {
      /* InitializeConditions for UnitDelay: '<S107>/Unit Delay2' */
      BaseEngineController_A02_DWork.s107_UnitDelay2_DSTATE = 1.0;

      /* InitializeConditions for UnitDelay: '<S107>/Unit Delay1' */
      BaseEngineController_A02_DWork.s107_UnitDelay1_DSTATE = 1U;

      /* Level2 S-Function Block: '<S107>/motohawk_trigger' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_TDC1_EVENT_1156p0004 */
      BaseEngineController_A02_DWork.s107_motohawk_trigger_DWORK1 = 1;
      BaseEngineController_A02_DWork.s23_SequenceCutMachine_MODE = TRUE;
    }

    /* UnitDelay: '<S107>/Unit Delay2' */
    BaseEngineController_A02_B.s107_UnitDelay2 =
      BaseEngineController_A02_DWork.s107_UnitDelay2_DSTATE;

    /* MultiPortSwitch: '<S107>/Multiport Switch' */
    switch ((int32_T)BaseEngineController_A02_B.s107_UnitDelay2) {
     case 1:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s107_MultiportSwitch[i] =
          BaseEngineController_A02_B.s23_Merge1[i];
      }
      break;

     case 2:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s107_MultiportSwitch[i] =
          BaseEngineController_A02_B.s23_Merge1[i + 8];
      }
      break;

     case 3:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s107_MultiportSwitch[i] =
          BaseEngineController_A02_B.s23_Merge1[i + 16];
      }
      break;

     default:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s107_MultiportSwitch[i] =
          BaseEngineController_A02_B.s23_Merge1[i + 24];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S107>/Multiport Switch' */

    /* UnitDelay: '<S107>/Unit Delay1' */
    BaseEngineController_A02_B.s107_UnitDelay1 =
      BaseEngineController_A02_DWork.s107_UnitDelay1_DSTATE;

    /* S-Function (motohawk_sfun_trigger): '<S107>/motohawk_trigger' */
    /* Enable for Trigger_FGND_TDC1_EVENT_1156p0004 */
    if (BaseEngineController_A02_DWork.s107_motohawk_trigger_DWORK1 == 0) {
      BaseEngineController_A02_DWork.s107_motohawk_trigger_DWORK1 = 1;
    }

    /* Update for UnitDelay: '<S107>/Unit Delay2' */
    BaseEngineController_A02_DWork.s107_UnitDelay2_DSTATE =
      BaseEngineController_A02_B.s117_Switch1;

    /* Update for UnitDelay: '<S107>/Unit Delay1' */
    BaseEngineController_A02_DWork.s107_UnitDelay1_DSTATE =
      BaseEngineController_A02_B.s117_Switch;
  } else {
    if (BaseEngineController_A02_DWork.s23_SequenceCutMachine_MODE) {
      /* Level2 S-Function Block: '<S107>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_TDC1_EVENT_1156p0004 */
      BaseEngineController_A02_DWork.s107_motohawk_trigger_DWORK1 = 0;

      /* Disable for Outport: '<S107>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s117_CutArray[i] = 0;
      }

      /* End of Outport: '<S107>/Out1' */
      BaseEngineController_A02_DWork.s23_SequenceCutMachine_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S23>/SequenceCutMachine' */
  /* Outputs for Enabled SubSystem: '<S23>/PassThrough4' incorporates:
   *  EnablePort: '<S105>/Enable'
   */
  /* Logic: '<S23>/Logical Operator' incorporates:
   *  Constant: '<S23>/Constant'
   *  Constant: '<S23>/Constant1'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  RelationalOperator: '<S23>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S23>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 0) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!BaseEngineController_A02_DWork.s23_PassThrough4_MODE) {
      BaseEngineController_A02_DWork.s23_PassThrough4_MODE = TRUE;
    }

    /* DataTypeConversion: '<S105>/Data Type Conversion' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s105_DataTypeConversion[i] =
        ((BaseEngineController_A02_B.s117_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S105>/Data Type Conversion' */
  } else {
    if (BaseEngineController_A02_DWork.s23_PassThrough4_MODE) {
      /* Disable for Outport: '<S105>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s105_DataTypeConversion[i] = FALSE;
      }

      /* End of Outport: '<S105>/Out1' */
      BaseEngineController_A02_DWork.s23_PassThrough4_MODE = FALSE;
    }
  }

  /* End of Logic: '<S23>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S23>/PassThrough4' */

  /* Logic: '<S23>/Logical Operator2' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s23_LogicalOperator2[i] =
      !BaseEngineController_A02_B.s105_DataTypeConversion[i];
  }

  /* End of Logic: '<S23>/Logical Operator2' */

  /* S-Function (motohawk_sfun_trigger): '<S13>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7978p0001 */
  if (BaseEngineController_A02_DWork.s13_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S13>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S784>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S789>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_7485p0004 */
    BaseEngineController_A02_DWork.s789_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S784>/EST Enable TDC Counter' */
    BaseEngineController_A02_DWork.s13_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function Block: <S29>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s29_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_n = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S553>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s553_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S553>/Product' incorporates:
   *  MinMax: '<S553>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S553>/motohawk_calibration'
   */
  rtb_Switch_e /= (rtb_Switch_e >= (EGRSenseFilterConst_DataStore())) || rtIsNaN
    ((EGRSenseFilterConst_DataStore())) ? rtb_Switch_e :
    (EGRSenseFilterConst_DataStore());

  /* Logic: '<S544>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S544>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S544>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_k = (IsFaultActive(15) || IsFaultActive(16));

  /* Logic: '<S544>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S544>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S544>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(15) || IsFaultSuspected(16));

  /* S-Function Block: <S384>/motohawk_ain4 Resource: EGRPin */
  {
    extern NativeError_S EGRPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    EGRPin_AnalogInput_Get(&BaseEngineController_A02_B.s384_motohawk_ain4, NULL);
  }

  /* DataTypeConversion: '<S544>/Data Type Conversion' */
  rtb_DataTypeConversion_e = (real_T)
    BaseEngineController_A02_B.s384_motohawk_ain4;

  /* Product: '<S544>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_DataTypeConversion_e * (EGRSenseGain_DataStore());

  /* Sum: '<S544>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s544_Sum1 = rtb_Product1_e +
    (EGRSenseOfst_DataStore());

  /* UnitDelay: '<S544>/Unit Delay1' */
  rtb_UnitDelay1_g = BaseEngineController_A02_DWork.s544_UnitDelay1_DSTATE;

  /* If: '<S544>/If' incorporates:
   *  Logic: '<S544>/Logical Operator5'
   *  Logic: '<S544>/Logical Operator6'
   */
  if ((!rtb_RelationalOperator6_k) && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S544>/If Action Subsystem' incorporates:
     *  ActionPort: '<S554>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_g, &rtb_Merge_n);

    /* End of Outputs for SubSystem: '<S544>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_k) {
    /* Outputs for IfAction SubSystem: '<S544>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S555>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((EGRSenseDfltValue_DataStore()),
      &rtb_Merge_n);

    /* End of Outputs for SubSystem: '<S544>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S544>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S556>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s544_Sum1, &rtb_Merge_n);

    /* End of Outputs for SubSystem: '<S544>/If Action Subsystem2' */
  }

  /* End of If: '<S544>/If' */

  /* Sum: '<S558>/Sum1' incorporates:
   *  Constant: '<S558>/Constant'
   *  Product: '<S558>/Product'
   *  Product: '<S558>/Product1'
   *  Sum: '<S558>/Sum'
   *  UnitDelay: '<S558>/Unit Delay'
   */
  rtb_Sum1_i5 = (1.0 - rtb_Switch_e) *
    BaseEngineController_A02_DWork.s558_UnitDelay_DSTATE + rtb_Merge_n *
    rtb_Switch_e;

  /* If: '<S557>/If' incorporates:
   *  Inport: '<S559>/In1'
   *  Inport: '<S560>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S557>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S557>/override_enable'
   */
  if ((EGRSense_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S557>/NewValue' incorporates:
     *  ActionPort: '<S559>/Action Port'
     */
    BaseEngineController_A02_B.s557_Merge = (EGRSense_new_DataStore());

    /* End of Outputs for SubSystem: '<S557>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S557>/OldValue' incorporates:
     *  ActionPort: '<S560>/Action Port'
     */
    BaseEngineController_A02_B.s557_Merge = rtb_Sum1_i5;

    /* End of Outputs for SubSystem: '<S557>/OldValue' */
  }

  /* End of If: '<S557>/If' */

  /* Sum: '<S20>/Difference' */
  rtb_Switch_e = BaseEngineController_A02_B.s128_EGR -
    BaseEngineController_A02_B.s557_Merge;

  /* Product: '<S26>/Product' incorporates:
   *  Gain: '<S26>/Gain'
   *  Logic: '<S26>/Logical Operator'
   *  RelationalOperator: '<S26>/Relational Operator'
   *  RelationalOperator: '<S26>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration'
   */
  rtb_Product_mm = (real_T)!((rtb_Switch_e >= (EGR_Hyst_DataStore())) ||
    (rtb_Switch_e <= -(EGR_Hyst_DataStore()))) * rtb_Switch_e;

  /* S-Function Block: <S20>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (EGR_Prelookup_PWIn_DataStore()) = rtb_Product_mm;
    (EGR_Prelookup_PWIdx_DataStore()) = TablePrelookup_real_T(rtb_Product_mm,
      (EGR_Prelookup_PWIdxArr_DataStore()), 11, (EGR_Prelookup_PWIdx_DataStore()));
    rtb_motohawk_prelookup_i = (EGR_Prelookup_PWIdx_DataStore());
  }

  /* S-Function Block: <S20>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_i, (real_T *) ((EGR_Interpolation_PWTbl_DataStore())),
       11);
    (EGR_Interpolation_PW_DataStore()) = rtb_motohawk_interpolation_1d_n;
  }

  /* RelationalOperator: '<S27>/Relational Operator' incorporates:
   *  Constant: '<S27>/Constant'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S20>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S20>/motohawk_prelookup'
   */
  rtb_LogicalOperator1_a = (rtb_motohawk_interpolation_1d_n > 0.0);

  /* S-Function Block: <S20>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (EGR_Prelookup_DCIn_DataStore()) = rtb_Product_mm;
    (EGR_Prelookup_DCIdx_DataStore()) = TablePrelookup_real_T(rtb_Product_mm,
      (EGR_Prelookup_DCIdxArr_DataStore()), 11, (EGR_Prelookup_DCIdx_DataStore()));
    rtb_motohawk_prelookup1_c = (EGR_Prelookup_DCIdx_DataStore());
  }

  /* S-Function Block: <S20>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_n = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_c, (real_T *) ((EGR_Interpolation_DCTbl_DataStore
         ())), 11);
    (EGR_Interpolation_DC_DataStore()) = rtb_motohawk_interpolation_1d1_n;
  }

  /* RelationalOperator: '<S27>/Relational Operator1' incorporates:
   *  Constant: '<S27>/Constant2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S20>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_prelookup): '<S20>/motohawk_prelookup1'
   */
  rtb_Merge_i5 = (rtb_motohawk_interpolation_1d1_n > 0.0);

  /* Stateflow: '<S27>/Chart' incorporates:
   *  Logic: '<S27>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S27>/motohawk_data_read'
   */

  /* Gateway: Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Chart */
  /* During: Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Chart */
  if (BaseEngineController_A02_DWork.s28_is_active_c1_BaseEngineController_A02 ==
      0) {
    /* Entry: Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Chart */
    BaseEngineController_A02_DWork.s28_is_active_c1_BaseEngineController_A02 =
      1U;

    /* Transition: '<S28>:13' */
    BaseEngineController_A02_DWork.s28_is_c1_BaseEngineController_A02 =
      BaseEngineController_A02_IN_Init;
  } else {
    switch (BaseEngineController_A02_DWork.s28_is_c1_BaseEngineController_A02) {
     case BaseEngineController_A02_IN_Init:
      /* During 'Init': '<S28>:9' */
      if ((rtb_LogicalOperator1_a || rtb_Merge_i5) == 1) {
        /* Transition: '<S28>:14' */
        BaseEngineController_A02_DWork.s28_is_c1_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else {
        BaseEngineController_A02_B.s28_enout = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_default:
      /* During 'default': '<S28>:4' */
      if (RESET_DataStore() == TRUE) {
        /* Transition: '<S28>:7' */
        BaseEngineController_A02_DWork.s28_is_c1_BaseEngineController_A02 =
          BaseEngineController_A02_IN_reset;
      } else {
        BaseEngineController_A02_B.s28_enout = 1.0;
      }
      break;

     case BaseEngineController_A02_IN_reset:
      /* During 'reset': '<S28>:5' */
      if (BaseEngineController_A02_B.s28_enout == 0.0) {
        /* Transition: '<S28>:8' */
        BaseEngineController_A02_DWork.s28_is_c1_BaseEngineController_A02 =
          BaseEngineController_A02_IN_default;
      } else {
        BaseEngineController_A02_B.s28_enout = 0.0;
      }
      break;

     default:
      /* Transition: '<S28>:13' */
      BaseEngineController_A02_DWork.s28_is_c1_BaseEngineController_A02 =
        BaseEngineController_A02_IN_Init;
      break;
    }
  }

  /* End of Stateflow: '<S27>/Chart' */

  /* Switch: '<S29>/Switch' incorporates:
   *  Constant: '<S29>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S29>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S29>/motohawk_delta_time'
   *  Sum: '<S29>/Sum'
   */
  if (BaseEngineController_A02_B.s28_enout >= 1.0) {
    rtb_Switch_e = rtb_motohawk_delta_time_n + EGR_Enable_DataStore();
  } else {
    rtb_Switch_e = 0.0;
  }

  /* End of Switch: '<S29>/Switch' */

  /* Gain: '<S27>/Gain' */
  rtb_Product1_e = 1.0E+6 * rtb_Switch_e;

  /* MultiPortSwitch: '<S27>/PW Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S20>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S20>/motohawk_prelookup'
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

  /* End of MultiPortSwitch: '<S27>/PW Switch' */

  /* MultiPortSwitch: '<S27>/DC Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S20>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_prelookup): '<S20>/motohawk_prelookup1'
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

  /* End of MultiPortSwitch: '<S27>/DC Switch' */

  /* RelationalOperator: '<S27>/Relational Operator2' incorporates:
   *  Gain: '<S27>/Gain2'
   *  Product: '<S27>/Product2'
   */
  rtb_RelationalOperator6_k = (0.01 * rtb_DataTypeConversion_f5a *
    rtb_DesiredLambda_idx >= rtb_Product1_e);

  /* Logic: '<S27>/Logical Operator2' incorporates:
   *  Logic: '<S27>/Logical Operator1'
   */
  BaseEngineController_A02_B.s27_Enable = (((rtb_Product1_e != 0.0) &&
    (!rtb_RelationalOperator6_k)));

  /* If: '<S800>/If' incorporates:
   *  Inport: '<S802>/In1'
   *  Inport: '<S803>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S800>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S800>/override_enable'
   */
  if ((Trigger_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S800>/NewValue' incorporates:
     *  ActionPort: '<S802>/Action Port'
     */
    BaseEngineController_A02_B.s800_Merge = (Trigger_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S800>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S800>/OldValue' incorporates:
     *  ActionPort: '<S803>/Action Port'
     */
    BaseEngineController_A02_B.s800_Merge =
      BaseEngineController_A02_B.s27_Enable;

    /* End of Outputs for SubSystem: '<S800>/OldValue' */
  }

  /* End of If: '<S800>/If' */

  /* DataTypeConversion: '<S699>/Data Type Conversion' */
  if (rtIsNaN(rtb_DesiredLambda_idx) || rtIsInf(rtb_DesiredLambda_idx)) {
    rtb_Switch_o = 0.0;
  } else {
    rtb_Switch_o = fmod(floor(rtb_DesiredLambda_idx), 4.294967296E+9);
  }

  BaseEngineController_A02_B.s699_DataTypeConversion = rtb_Switch_o < 0.0 ?
    -(int32_T)(uint32_T)-rtb_Switch_o : (int32_T)(uint32_T)rtb_Switch_o;

  /* End of DataTypeConversion: '<S699>/Data Type Conversion' */
  /* If: '<S801>/If' incorporates:
   *  Inport: '<S804>/In1'
   *  Inport: '<S805>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S801>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S801>/override_enable'
   */
  if ((Duration_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S801>/NewValue' incorporates:
     *  ActionPort: '<S804>/Action Port'
     */
    BaseEngineController_A02_B.s801_Merge = (Duration_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S801>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S801>/OldValue' incorporates:
     *  ActionPort: '<S805>/Action Port'
     */
    BaseEngineController_A02_B.s801_Merge =
      BaseEngineController_A02_B.s699_DataTypeConversion;

    /* End of Outputs for SubSystem: '<S801>/OldValue' */
  }

  /* End of If: '<S801>/If' */

  /* S-Function (motohawk_sfun_oneshot): '<S699>/motohawk_oneshot' */

  /* S-Function Block: ONESHOT */
  {
    if (BaseEngineController_A02_B.s800_Merge) {
      extern NativeError_S ONESHOT_OneShotOutput_Set(int32_T duration_us,
        boolean_T cancel);
      ONESHOT_OneShotOutput_Set(BaseEngineController_A02_B.s801_Merge, FALSE);
    }
  }

  /* Switch: '<S136>/Switch' incorporates:
   *  Constant: '<S136>/OFF'
   *  Logic: '<S136>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S136>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S136>/motohawk_data_read1'
   */
  if (DelayedEngineShutdownAction_DataStore() || EngineShutdownAction_DataStore())
  {
    rtb_RelationalOperator5_p = FALSE;
  } else {
    rtb_RelationalOperator5_p = BaseEngineController_A02_B.s128_FUELP;
  }

  /* End of Switch: '<S136>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S382>/motohawk_data_read' */
  BaseEngineController_A02_B.s382_EStop = ESTOP_DataStore();

  /* If: '<S523>/If' incorporates:
   *  Inport: '<S533>/In1'
   *  Inport: '<S534>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S523>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S523>/override_enable'
   */
  if ((ESTOP_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S523>/NewValue' incorporates:
     *  ActionPort: '<S533>/Action Port'
     */
    rtb_Switch1_p0 = (ESTOP_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S523>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S523>/OldValue' incorporates:
     *  ActionPort: '<S534>/Action Port'
     */
    rtb_Switch1_p0 = BaseEngineController_A02_B.s382_EStop;

    /* End of Outputs for SubSystem: '<S523>/OldValue' */
  }

  /* End of If: '<S523>/If' */

  /* Logic: '<S13>/Logical Operator5' incorporates:
   *  Logic: '<S13>/Logical Operator4'
   */
  rtb_LogicalOperator1_a = (rtb_RelationalOperator5_p && (!rtb_Switch1_p0));

  /* If: '<S807>/If' incorporates:
   *  Inport: '<S808>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S807>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S807>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S807>/NewValue' incorporates:
     *  ActionPort: '<S808>/Action Port'
     */
    rtb_LogicalOperator1_a = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S807>/NewValue' */
  } else {
  }

  /* End of If: '<S807>/If' */

  /* Logic: '<S806>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S806>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s806_LogicalOperator = rtb_LogicalOperator1_a ^
    (FUELP_Polarity_DataStore());

  /* S-Function Block: <S810>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s810_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S373>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s373_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_nn = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S372>/RelOp' incorporates:
   *  Constant: '<S372>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S354>/motohawk_data_read'
   */
  rtb_LogicalOperator1_a = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S354>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_f, NULL);
  }

  /* Switch: '<S373>/Switch' incorporates:
   *  Constant: '<S354>/Constant1'
   *  Constant: '<S373>/Constant'
   *  Logic: '<S354>/Logical Operator'
   *  RelationalOperator: '<S354>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S354>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S373>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S373>/motohawk_delta_time'
   *  Sum: '<S373>/Sum'
   */
  if (rtb_LogicalOperator1_a && (rtb_motohawk_ain_read_f > 150)) {
    BaseEngineController_A02_B.s373_Switch = rtb_motohawk_delta_time_nn +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_A02_B.s373_Switch = 0.0;
  }

  /* End of Switch: '<S373>/Switch' */
  /* Logic: '<S701>/Logical Operator1' incorporates:
   *  Logic: '<S13>/Logical Operator9'
   *  RelationalOperator: '<S13>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_p = ((ETC_CutPower_Permitted_DataStore()) &&
    (rtb_Switch1_p0 || (BaseEngineController_A02_B.s373_Switch >
                        (ETC_CutPower_StallTime_DataStore()))));

  /* Logic: '<S701>/Logical Operator' */
  rtb_LogicalOperator10 = !rtb_RelationalOperator5_p;

  /* Outputs for Enabled SubSystem: '<S14>/Electronic Throttle Controller' incorporates:
   *  EnablePort: '<S21>/Enable'
   */
  /* RelationalOperator: '<S19>/RelOp' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S37>/Constant2'
   *  Constant: '<S60>/Constant'
   *  Inport: '<S59>/In1'
   *  RelationalOperator: '<S60>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S14>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S37>/motohawk_data_read3'
   *  Sum: '<S37>/Add2'
   */
  if (!AirControlSource_DataStore()) {
    if (!BaseEngineController_A02_DWork.s14_ElectronicThrottleController_MODE) {
      BaseEngineController_A02_DWork.s14_ElectronicThrottleController_MODE =
        TRUE;
    }

    /* RelationalOperator: '<S69>/RelOp' incorporates:
     *  Constant: '<S69>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S38>/motohawk_data_read3'
     */
    rtb_LogicalOperator1_a = (((uint8_T)EngineState_DataStore()) == 1);

    /* Logic: '<S38>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S38>/motohawk_data_read2'
     */
    rtb_Merge_i5 = !ShutDownTasksComplete_DataStore();

    /* S-Function Block: <S38>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_i, NULL);
    }

    /* RelationalOperator: '<S38>/Relational Operator' incorporates:
     *  Constant: '<S38>/Constant1'
     *  S-Function (motohawk_sfun_ain_read): '<S38>/motohawk_ain_read'
     */
    rtb_AboveHiTarget = (rtb_motohawk_ain_read_i < 150);

    /* Logic: '<S38>/Logical Operator3' */
    BaseEngineController_A02_B.s38_LogicalOperator3 = ((rtb_LogicalOperator1_a &&
      rtb_Merge_i5 && rtb_AboveHiTarget));

    /* S-Function Block: <S70>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s70_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_n0 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S70>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S70>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S70>/motohawk_delta_time'
     *  Sum: '<S70>/Sum'
     */
    if (rtb_AboveHiTarget) {
      BaseEngineController_A02_B.s70_Switch = rtb_motohawk_delta_time_n0 +
        ETCShutDownTimer_DataStore();
    } else {
      BaseEngineController_A02_B.s70_Switch = 0.0;
    }

    /* End of Switch: '<S70>/Switch' */

    /* UnitDelay: '<S21>/Unit Delay' */
    rtb_Product1_e = BaseEngineController_A02_DWork.s21_UnitDelay_DSTATE;

    /* RelationalOperator: '<S21>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration4'
     */
    BaseEngineController_A02_B.s21_RelationalOperator5 = ((rtb_Product1_e <
      (ETC_ShutdownLoAdaptError_DataStore())));

    /* RelationalOperator: '<S21>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration5'
     */
    BaseEngineController_A02_B.s21_RelationalOperator2 =
      ((BaseEngineController_A02_B.s351_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S21>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration6'
     */
    BaseEngineController_A02_B.s21_RelationalOperator3 =
      ((BaseEngineController_A02_B.s351_Switch2 <
        (ETC_SpringTestLoThresh_DataStore())));

    /* Stateflow: '<S21>/ETC Test  Manager' */

    /* Gateway: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    /* During: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    switch (BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02) {
     case BaseEngineController_A02_IN_ForcedShutdown:
      /* During 'ForcedShutdown': '<S33>:6' */
      if (!BaseEngineController_A02_B.s38_LogicalOperator3) {
        /* Transition: '<S33>:19' */
        BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S33>:5' */
        BaseEngineController_A02_B.s33_DC_Override = 1;
        BaseEngineController_A02_B.s33_TestComplete = TRUE;
        BaseEngineController_A02_B.s33_SetpointMode = 0;
        BaseEngineController_A02_B.s33_TestTime =
          BaseEngineController_A02_B.s70_Switch -
          BaseEngineController_A02_DWork.s33_TimerOld;
      }
      break;

     case BaseEngineController_A02_IN_LowAdapt:
      /* During 'LowAdapt': '<S33>:2' */
      if (BaseEngineController_A02_B.s70_Switch > 5.0) {
        /* Transition: '<S33>:17' */
        BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S33>:6' */
        BaseEngineController_A02_B.s33_DC_Override = 1;
        BaseEngineController_A02_B.s33_TestComplete = TRUE;
        BaseEngineController_A02_B.s33_SetpointMode = 0;
        BaseEngineController_A02_B.s33_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s38_LogicalOperator3 &&
                 BaseEngineController_A02_B.s21_RelationalOperator5) {
        /* Transition: '<S33>:9' */
        BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestSetpoint;

        /* Entry 'SpringTestSetpoint': '<S33>:3' */
        BaseEngineController_A02_B.s33_DC_Override = 0;
        BaseEngineController_A02_B.s33_TestComplete = FALSE;
        BaseEngineController_A02_B.s33_SetpointMode = 2;
        BaseEngineController_A02_B.s33_TestTime = 0.0;
      } else {
        if (!BaseEngineController_A02_B.s38_LogicalOperator3) {
          /* Transition: '<S33>:12' */
          BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PassThrough;

          /* Entry 'PassThrough': '<S33>:1' */
          BaseEngineController_A02_B.s33_DC_Override = 0;
          BaseEngineController_A02_B.s33_TestComplete = FALSE;
          BaseEngineController_A02_B.s33_SetpointMode = 0;
          BaseEngineController_A02_B.s33_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_A02_IN_PassThrough:
      /* During 'PassThrough': '<S33>:1' */
      if (BaseEngineController_A02_B.s38_LogicalOperator3) {
        /* Transition: '<S33>:8' */
        BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_LowAdapt;

        /* Entry 'LowAdapt': '<S33>:2' */
        BaseEngineController_A02_B.s33_DC_Override = 0;
        BaseEngineController_A02_B.s33_TestComplete = FALSE;
        BaseEngineController_A02_B.s33_SetpointMode = 1;
        BaseEngineController_A02_B.s33_TestTime = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_SpringTest:
      /* During 'SpringTest': '<S33>:4' */
      if (BaseEngineController_A02_B.s70_Switch > 5.0) {
        /* Transition: '<S33>:16' */
        BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S33>:6' */
        BaseEngineController_A02_B.s33_DC_Override = 1;
        BaseEngineController_A02_B.s33_TestComplete = TRUE;
        BaseEngineController_A02_B.s33_SetpointMode = 0;
        BaseEngineController_A02_B.s33_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s38_LogicalOperator3 &&
                 BaseEngineController_A02_B.s21_RelationalOperator3) {
        /* Transition: '<S33>:11' */
        BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S33>:5' */
        BaseEngineController_A02_B.s33_DC_Override = 1;
        BaseEngineController_A02_B.s33_TestComplete = TRUE;
        BaseEngineController_A02_B.s33_SetpointMode = 0;
        BaseEngineController_A02_B.s33_TestTime =
          BaseEngineController_A02_B.s70_Switch -
          BaseEngineController_A02_DWork.s33_TimerOld;
      } else {
        if (!BaseEngineController_A02_B.s38_LogicalOperator3) {
          /* Transition: '<S33>:15' */
          BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_PassThrough;

          /* Entry 'PassThrough': '<S33>:1' */
          BaseEngineController_A02_B.s33_DC_Override = 0;
          BaseEngineController_A02_B.s33_TestComplete = FALSE;
          BaseEngineController_A02_B.s33_SetpointMode = 0;
          BaseEngineController_A02_B.s33_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_A02_IN_SpringTestComplete:
      /* During 'SpringTestComplete': '<S33>:5' */
      if (!BaseEngineController_A02_B.s38_LogicalOperator3) {
        /* Transition: '<S33>:14' */
        BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PassThrough;

        /* Entry 'PassThrough': '<S33>:1' */
        BaseEngineController_A02_B.s33_DC_Override = 0;
        BaseEngineController_A02_B.s33_TestComplete = FALSE;
        BaseEngineController_A02_B.s33_SetpointMode = 0;
        BaseEngineController_A02_B.s33_TestTime = 0.0;
      }
      break;

     case BaseEngineController_A02_IN_SpringTestSetpoint:
      /* During 'SpringTestSetpoint': '<S33>:3' */
      if (!BaseEngineController_A02_B.s38_LogicalOperator3) {
        /* Transition: '<S33>:13' */
        BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_PassThrough;

        /* Entry 'PassThrough': '<S33>:1' */
        BaseEngineController_A02_B.s33_DC_Override = 0;
        BaseEngineController_A02_B.s33_TestComplete = FALSE;
        BaseEngineController_A02_B.s33_SetpointMode = 0;
        BaseEngineController_A02_B.s33_TestTime = 0.0;
      } else if (BaseEngineController_A02_B.s38_LogicalOperator3 &&
                 BaseEngineController_A02_B.s21_RelationalOperator2) {
        /* Transition: '<S33>:10' */
        BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
          BaseEngineController_A02_IN_SpringTest;

        /* Entry 'SpringTest': '<S33>:4' */
        BaseEngineController_A02_B.s33_DC_Override = 1;
        BaseEngineController_A02_B.s33_TestComplete = FALSE;
        BaseEngineController_A02_B.s33_SetpointMode = 0;
        BaseEngineController_A02_B.s33_TestTime = 0.0;
        BaseEngineController_A02_DWork.s33_TimerOld =
          BaseEngineController_A02_B.s70_Switch;
      } else {
        if (BaseEngineController_A02_B.s70_Switch > 5.0) {
          /* Transition: '<S33>:18' */
          BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
            BaseEngineController_A02_IN_ForcedShutdown;

          /* Entry 'ForcedShutdown': '<S33>:6' */
          BaseEngineController_A02_B.s33_DC_Override = 1;
          BaseEngineController_A02_B.s33_TestComplete = TRUE;
          BaseEngineController_A02_B.s33_SetpointMode = 0;
          BaseEngineController_A02_B.s33_TestTime = 0.0;
        }
      }
      break;

     default:
      /* Transition: '<S33>:7' */
      BaseEngineController_A02_DWork.s33_is_c9_BaseEngineController_A02 =
        BaseEngineController_A02_IN_PassThrough;

      /* Entry 'PassThrough': '<S33>:1' */
      BaseEngineController_A02_B.s33_DC_Override = 0;
      BaseEngineController_A02_B.s33_TestComplete = FALSE;
      BaseEngineController_A02_B.s33_SetpointMode = 0;
      BaseEngineController_A02_B.s33_TestTime = 0.0;
      break;
    }

    /* End of Stateflow: '<S21>/ETC Test  Manager' */

    /* RelationalOperator: '<S39>/RelOp' incorporates:
     *  Constant: '<S39>/Constant'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s33_SetpointMode == 1);

    /* S-Function Block: <S63>/motohawk_delta_time */
    rtb_motohawk_delta_time_jj = 0.005;

    /* Switch: '<S63>/Switch' incorporates:
     *  Constant: '<S63>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S61>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S63>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S63>/motohawk_delta_time'
     *  Sum: '<S63>/Sum'
     */
    if ((ETCTuneEnable_DataStore())) {
      rtb_Switch_o = rtb_motohawk_delta_time_jj + ETC_Tune_Timer_DataStore();
    } else {
      rtb_Switch_o = 0.0;
    }

    /* End of Switch: '<S63>/Switch' */
    /* If: '<S64>/If' incorporates:
     *  Inport: '<S65>/In1'
     *  Inport: '<S66>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S64>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S64>/override_enable'
     */
    if ((ETCReq_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S64>/NewValue' incorporates:
       *  ActionPort: '<S65>/Action Port'
       */
      rtb_Merge_oq = (ETCReq_new_DataStore());

      /* End of Outputs for SubSystem: '<S64>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S64>/OldValue' incorporates:
       *  ActionPort: '<S66>/Action Port'
       */
      rtb_Merge_oq = BaseEngineController_A02_B.s128_Throttle;

      /* End of Outputs for SubSystem: '<S64>/OldValue' */
    }

    /* End of If: '<S64>/If' */

    /* S-Function Block: <S62>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s62_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_kb = ((real_T) delta) * 0.000001;
    }

    /* Outputs for Enabled SubSystem: '<S37>/PassThrough' incorporates:
     *  EnablePort: '<S59>/Enable'
     */
    if (BaseEngineController_A02_B.s33_SetpointMode == 1) {
      if (!BaseEngineController_A02_DWork.s37_PassThrough_MODE) {
        BaseEngineController_A02_DWork.s37_PassThrough_MODE = TRUE;
      }

      BaseEngineController_A02_B.s59_In1 = -5.0 +
        ETC_ShutdownLoAdaptError_DataStore();
    } else {
      if (BaseEngineController_A02_DWork.s37_PassThrough_MODE) {
        /* Disable for Outport: '<S59>/Out1' */
        BaseEngineController_A02_B.s59_In1 = 10.0;
        BaseEngineController_A02_DWork.s37_PassThrough_MODE = FALSE;
      }
    }

    /* End of Outputs for SubSystem: '<S37>/PassThrough' */

    /* UnitDelay: '<S62>/Unit Delay' incorporates:
     *  Constant: '<S37>/Constant2'
     *  Constant: '<S60>/Constant'
     *  Inport: '<S59>/In1'
     *  RelationalOperator: '<S60>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S37>/motohawk_data_read3'
     *  Sum: '<S37>/Add2'
     */
    rtb_Product1_e = BaseEngineController_A02_DWork.s62_UnitDelay_DSTATE;

    /* Product: '<S62>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S62>/motohawk_delta_time'
     *  Sum: '<S62>/Sum3'
     *  UnitDelay: '<S62>/Unit Delay'
     */
    rtb_Product5_d = 1.0 / rtb_motohawk_delta_time_kb *
      (BaseEngineController_A02_B.s59_In1 -
       BaseEngineController_A02_DWork.s62_UnitDelay_DSTATE);

    /* MinMax: '<S67>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration2'
     */
    rtb_Product5_d = (rtb_Product5_d >= (ETC_LoAdaptRateLimit_DataStore())) ||
      rtIsNaN((ETC_LoAdaptRateLimit_DataStore())) ? rtb_Product5_d :
      (ETC_LoAdaptRateLimit_DataStore());

    /* Sum: '<S62>/Sum2' incorporates:
     *  Constant: '<S37>/Constant7'
     *  MinMax: '<S67>/MinMax1'
     *  Product: '<S62>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S62>/motohawk_delta_time'
     */
    rtb_Product4_l = (rtb_Product5_d <= 100.0 ? rtb_Product5_d : 100.0) *
      rtb_motohawk_delta_time_kb + rtb_Product1_e;

    /* MultiPortSwitch: '<S37>/Multiport Switch' incorporates:
     *  Constant: '<S37>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S37>/motohawk_data_read1'
     *  Sum: '<S37>/Add1'
     */
    switch (BaseEngineController_A02_B.s33_SetpointMode) {
     case 0:
      /* Switch: '<S61>/Switch' incorporates:
       *  Fcn: '<S61>/Sine Wave'
       *  S-Function (motohawk_sfun_calibration): '<S61>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S61>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S61>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S61>/motohawk_calibration4'
       *  Sum: '<S61>/Sum'
       */
      if ((ETCTuneEnable_DataStore())) {
        BaseEngineController_A02_B.s37_MultiportSwitch = (sin(6.2831853071795862
          * (ETCTuneFreq_DataStore()) * rtb_Switch_o) * (ETCTuneAmp_DataStore())
          + (ETCTuneAmp_DataStore())) + (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_A02_B.s37_MultiportSwitch = rtb_Merge_oq;
      }

      /* End of Switch: '<S61>/Switch' */
      break;

     case 1:
      BaseEngineController_A02_B.s37_MultiportSwitch = rtb_Product4_l;
      break;

     default:
      BaseEngineController_A02_B.s37_MultiportSwitch = 10.0 +
        ETC_SpringTestHiThresh_DataStore();
      break;
    }

    /* End of MultiPortSwitch: '<S37>/Multiport Switch' */

    /* Sum: '<S37>/Add' */
    rtb_Merge_o4 = BaseEngineController_A02_B.s37_MultiportSwitch -
      BaseEngineController_A02_B.s351_Switch2;

    /* Logic: '<S31>/Logical Operator' incorporates:
     *  Constant: '<S31>/Constant1'
     *  RelationalOperator: '<S31>/Relational Operator4'
     *  S-Function (motohawk_sfun_data_read): '<S31>/motohawk_data_read1'
     *  Sum: '<S31>/Add1'
     */
    rtb_LogicalOperator_kg = ((rtb_LogicalOperator1_a && (rtb_Merge_o4 <= 5.0 +
      ETC_ShutdownLoAdaptError_DataStore())));

    /* S-Function (motohawk_sfun_data_write): '<S31>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: TPSAdaptLoRequest */
    {
      TPSAdaptLoRequest_DataStore() = rtb_LogicalOperator_kg;
    }

    /* Abs: '<S32>/Abs' */
    rtb_Product5_d = fabs(rtb_Merge_o4);

    /* Logic: '<S32>/Logical Operator' incorporates:
     *  Constant: '<S40>/Constant'
     *  RelationalOperator: '<S32>/Relational Operator4'
     *  RelationalOperator: '<S40>/RelOp'
     *  S-Function (motohawk_sfun_calibration): '<S32>/motohawk_calibration1'
     */
    rtb_LogicalOperator_d = (((rtb_Product5_d > (ETC_StickingThresh_DataStore()))
      && (BaseEngineController_A02_B.s33_SetpointMode == 0)));

    /* S-Function (motohawk_sfun_fault_def): '<S32>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ETC_Sticking */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(23, rtb_LogicalOperator_d);
      UpdateFault(23);
    }

    /* Outputs for Triggered SubSystem: '<S21>/Reset TasksComplete To True' incorporates:
     *  TriggerPort: '<S36>/Trigger'
     */
    if (BaseEngineController_A02_B.s33_TestComplete &&
        (BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S36>/motohawk_data_write' incorporates:
       *  Constant: '<S36>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE =
      (uint8_T)(BaseEngineController_A02_B.s33_TestComplete ? (int32_T)POS_ZCSIG
                : (int32_T)ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S21>/Reset TasksComplete To True' */

    /* S-Function (motohawk_sfun_data_write): '<S21>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SpringTestTime */
    {
      SpringTestTime_DataStore() = BaseEngineController_A02_B.s33_TestTime;
    }

    /* RelationalOperator: '<S21>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration3'
     */
    rtb_RelationalOperator1_gq = (((ETC_SpringTestTimerThresh_DataStore()) <
      BaseEngineController_A02_B.s33_TestTime));

    /* S-Function (motohawk_sfun_fault_def): '<S21>/motohawk_fault_def' */

    /* Set Fault Suspected Status: ETCSpringTest */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(21, rtb_RelationalOperator1_gq);
      UpdateFault(21);
    }

    /* RelationalOperator: '<S34>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S34>/motohawk_data_read'
     */
    rtb_LogicalOperator1_a = (TimeSinceStall_DataStore() >
      (ETCShutdownTimerThresh_DataStore()));

    /* S-Function Block: <S34>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_d, NULL);
    }

    /* Logic: '<S34>/Logical Operator' incorporates:
     *  Constant: '<S34>/Constant1'
     *  RelationalOperator: '<S34>/Relational Operator'
     *  S-Function (motohawk_sfun_ain_read): '<S34>/motohawk_ain_read'
     */
    BaseEngineController_A02_B.s34_LogicalOperator = ((rtb_LogicalOperator1_a &&
      (rtb_motohawk_ain_read_d > 150)));

    /* Logic: '<S21>/Logical Operator' */
    rtb_LogicalOperator1_a = ((BaseEngineController_A02_B.s33_DC_Override != 0) ||
      BaseEngineController_A02_B.s34_LogicalOperator);

    /* S-Function Block: <S35>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_SetpointIn_DataStore()) =
        BaseEngineController_A02_B.s37_MultiportSwitch;
      (ETC_SetpointIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_B.s37_MultiportSwitch,
         (ETC_SetpointIdxArr_DataStore()), 20, (ETC_SetpointIdx_DataStore()));
      rtb_motohawk_prelookup2_k = (ETC_SetpointIdx_DataStore());
    }

    /* S-Function Block: <S35>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_e = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_k, (real_T *) ((ETCDCOffsetTbl_DataStore())),
         20);
      (ETCDCOffset_DataStore()) = rtb_motohawk_interpolation_1d_e;
    }

    /* UnitDelay: '<S53>/Unit Delay' */
    rtb_Merge_oq = BaseEngineController_A02_DWork.s53_UnitDelay_DSTATE;

    /* UnitDelay: '<S49>/Unit Delay' */
    rtb_Product1_e = BaseEngineController_A02_DWork.s49_UnitDelay_DSTATE;

    /* S-Function Block: <S50>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s50_motohawk_delta_time_DWORK1, NULL);
      rtb_Product5_d = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S50>/Product' incorporates:
     *  MinMax: '<S50>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S50>/motohawk_calibration'
     */
    rtb_Product5_d /= (rtb_Product5_d >= (ETCDamperTPSFilt_DataStore())) ||
      rtIsNaN((ETCDamperTPSFilt_DataStore())) ? rtb_Product5_d :
      (ETCDamperTPSFilt_DataStore());

    /* Sum: '<S51>/Sum1' incorporates:
     *  Constant: '<S51>/Constant'
     *  Product: '<S51>/Product'
     *  Product: '<S51>/Product1'
     *  Sum: '<S51>/Sum'
     *  UnitDelay: '<S51>/Unit Delay'
     */
    rtb_Merge_c5 = (1.0 - rtb_Product5_d) *
      BaseEngineController_A02_DWork.s51_UnitDelay_DSTATE +
      BaseEngineController_A02_B.s351_Switch2 * rtb_Product5_d;

    /* S-Function Block: <S49>/motohawk_delta_time */
    rtb_motohawk_delta_time_ce = 0.005;

    /* Product: '<S49>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S49>/motohawk_delta_time'
     *  Sum: '<S49>/Sum2'
     */
    BaseEngineController_A02_B.s49_Product = (rtb_Merge_c5 - rtb_Product1_e) /
      rtb_motohawk_delta_time_ce;

    /* Sum: '<S42>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S42>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S42>/motohawk_calibration5'
     */
    rtb_Product5_d = (ETCDamperSwitchThresh_DataStore()) -
      (ETCDamperSwitchHyst_DataStore());

    /* RelationalOperator: '<S48>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S42>/motohawk_calibration5'
     */
    rtb_AboveHiTarget = (rtb_Product5_d >= (ETCDamperSwitchThresh_DataStore()));

    /* RelationalOperator: '<S48>/LT1' */
    rtb_BelowLoTarget = (rtb_Product5_d <=
                         BaseEngineController_A02_B.s49_Product);

    /* CombinatorialLogic: '<S52>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_i[0] =
        BaseEngineController_A02_ConstP.pooled680[rowidx];
      rtb_CombinatorialLogic_i[1] =
        BaseEngineController_A02_ConstP.pooled680[rowidx + 4];
    }

    /* Switch: '<S52>/Switch1' incorporates:
     *  UnitDelay: '<S52>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_i[1]) {
      rtb_Merge_i5 = rtb_CombinatorialLogic_i[0];
    } else {
      rtb_Merge_i5 = BaseEngineController_A02_DWork.s52_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S52>/Switch1' */

    /* Switch: '<S48>/Switch2' incorporates:
     *  Logic: '<S48>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S42>/motohawk_calibration5'
     */
    if (!rtb_Merge_i5) {
      BaseEngineController_A02_B.s48_Switch2 = (ETCDamperSwitchThresh_DataStore());
    } else {
      BaseEngineController_A02_B.s48_Switch2 =
        BaseEngineController_A02_B.s49_Product;
    }

    /* End of Switch: '<S48>/Switch2' */

    /* RelationalOperator: '<S42>/Relational Operator' */
    BaseEngineController_A02_B.s42_RelationalOperator =
      ((BaseEngineController_A02_B.s49_Product >
        BaseEngineController_A02_B.s48_Switch2));

    /* Switch: '<S45>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration8'
     */
    if (BaseEngineController_A02_B.s42_RelationalOperator) {
      rtb_Product5_d = (ETCDampGainUp_DataStore());
    } else {
      rtb_Product5_d = (ETCDampGainDown_DataStore());
    }

    /* End of Switch: '<S45>/Switch' */

    /* Product: '<S45>/Product3' */
    rtb_Merge_dn = rtb_Product5_d * BaseEngineController_A02_B.s351_Switch2;

    /* S-Function Block: <S53>/motohawk_delta_time */
    rtb_motohawk_delta_time_oa = 0.005;

    /* Product: '<S53>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S53>/motohawk_delta_time'
     *  Sum: '<S53>/Sum2'
     */
    BaseEngineController_A02_B.s53_Product = (rtb_Merge_dn - rtb_Merge_oq) /
      rtb_motohawk_delta_time_oa;

    /* UnitDelay: '<S54>/Unit Delay' */
    rtb_Product1_e = BaseEngineController_A02_DWork.s54_UnitDelay_DSTATE;

    /* Sum: '<S45>/Sum2' */
    BaseEngineController_A02_B.s45_Sum2 =
      BaseEngineController_A02_B.s37_MultiportSwitch -
      BaseEngineController_A02_B.s351_Switch2;

    /* Product: '<S45>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration6'
     */
    rtb_Product5_d = BaseEngineController_A02_B.s45_Sum2 *
      (ETCErrorGain_DataStore());

    /* Product: '<S45>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration1'
     */
    rtb_Merge_oq = (ETCDGain_DataStore()) * rtb_Product5_d;

    /* S-Function Block: <S54>/motohawk_delta_time */
    rtb_motohawk_delta_time_oaj = 0.005;

    /* Product: '<S54>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S54>/motohawk_delta_time'
     *  Sum: '<S54>/Sum2'
     */
    BaseEngineController_A02_B.s54_Product = (rtb_Merge_oq - rtb_Product1_e) /
      rtb_motohawk_delta_time_oaj;

    /* Sum: '<S35>/Add' */
    rtb_Add_k = BaseEngineController_A02_B.s37_MultiportSwitch -
      BaseEngineController_A02_B.s351_Switch2;

    /* S-Function Block: <S35>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_ErrorIn_DataStore()) = rtb_Add_k;
      (ETC_ErrorIdx_DataStore()) = TablePrelookup_real_T(rtb_Add_k,
        (ETC_ErrorIdxArr_DataStore()), 10, (ETC_ErrorIdx_DataStore()));
      rtb_motohawk_prelookup_de = (ETC_ErrorIdx_DataStore());
    }

    /* S-Function Block: <S44>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_m = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_de, (real_T *) ((ETC_PGainMultTbl_DataStore())),
         10);
      (ETC_PGainMult_DataStore()) = rtb_motohawk_interpolation_1d_m;
    }

    /* Product: '<S45>/Product2' incorporates:
     *  Product: '<S44>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S44>/motohawk_calibration'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S44>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S35>/motohawk_prelookup'
     *  Sum: '<S35>/Add'
     */
    BaseEngineController_A02_B.s45_Product2 = rtb_motohawk_interpolation_1d_m *
      (ETCPGain_DataStore()) * rtb_Product5_d;

    /* Switch: '<S55>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S21>/motohawk_data_read'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    if (ETCStallStateShutdown_DataStore()) {
      BaseEngineController_A02_B.s55_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_B.s55_Switch1 =
        BaseEngineController_A02_DWork.s55_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S55>/Switch1' */

    /* Sum: '<S35>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S35>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S35>/motohawk_prelookup2'
     *  Sum: '<S45>/Sum'
     */
    rtb_Product1_e = (((BaseEngineController_A02_B.s54_Product -
                        BaseEngineController_A02_B.s53_Product) +
                       BaseEngineController_A02_B.s45_Product2) +
                      BaseEngineController_A02_B.s55_Switch1) +
      rtb_motohawk_interpolation_1d_e;

    /* MinMax: '<S58>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S46>/motohawk_calibration'
     */
    rtb_Product1_e = (rtb_Product1_e >= (ETCLwrLim_DataStore())) || rtIsNaN
      ((ETCLwrLim_DataStore())) ? rtb_Product1_e : (ETCLwrLim_DataStore());

    /* MinMax: '<S58>/MinMax1' incorporates:
     *  MinMax: '<S58>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S46>/motohawk_calibration1'
     */
    BaseEngineController_A02_B.s58_MinMax1 = (rtb_Product1_e <=
      (ETCUprLim_DataStore())) || rtIsNaN((ETCUprLim_DataStore())) ?
      rtb_Product1_e : (ETCUprLim_DataStore());

    /* S-Function Block: <S43>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_de, (real_T *) ((ETC_IGainMultTbl_DataStore())),
         10);
      (ETC_IGainMult_DataStore()) = rtb_motohawk_interpolation_1d_c;
    }

    /* Product: '<S43>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S43>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S43>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S35>/motohawk_prelookup'
     *  Sum: '<S35>/Add'
     */
    rtb_Product1_e = rtb_motohawk_interpolation_1d_c * (ETCIGain_DataStore());

    /* Product: '<S45>/Product1' */
    rtb_Product1_e *= rtb_Product5_d;

    /* S-Function Block: <S55>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s55_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_pc = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S55>/Sum' incorporates:
     *  Product: '<S55>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S55>/motohawk_delta_time'
     */
    rtb_Product1_e = rtb_Product1_e * rtb_motohawk_delta_time_pc +
      BaseEngineController_A02_B.s55_Switch1;

    /* MinMax: '<S57>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration3'
     */
    rtb_Product1_e = (rtb_Product1_e >= (ETCIMin_DataStore())) || rtIsNaN
      ((ETCIMin_DataStore())) ? rtb_Product1_e : (ETCIMin_DataStore());

    /* MinMax: '<S57>/MinMax1' incorporates:
     *  MinMax: '<S57>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration4'
     */
    minV = (rtb_Product1_e <= (ETCIMax_DataStore())) || rtIsNaN
      ((ETCIMax_DataStore())) ? rtb_Product1_e : (ETCIMax_DataStore());

    /* Saturate: '<S63>/Saturation' */
    rtb_Saturation_og = rtb_Switch_o >= 16000.0 ? 16000.0 : rtb_Switch_o <= 0.0 ?
      0.0 : rtb_Switch_o;

    /* S-Function (motohawk_sfun_data_write): '<S63>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETC_Tune_Timer */
    {
      ETC_Tune_Timer_DataStore() = rtb_Saturation_og;
    }

    /* Saturate: '<S70>/Saturation' */
    rtb_Saturation_na = BaseEngineController_A02_B.s70_Switch >= 16000.0 ?
      16000.0 : BaseEngineController_A02_B.s70_Switch <= 0.0 ? 0.0 :
      BaseEngineController_A02_B.s70_Switch;

    /* S-Function (motohawk_sfun_data_write): '<S70>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETCShutDownTimer */
    {
      ETCShutDownTimer_DataStore() = rtb_Saturation_na;
    }

    /* S-Function (motohawk_sfun_data_read): '<S38>/motohawk_data_read1' */
    rtb_motohawk_data_read1_ir = MPRD_DataStore();

    /* Outputs for Triggered SubSystem: '<S38>/Reset TasksComplete To False' incorporates:
     *  TriggerPort: '<S68>/Trigger'
     */
    if (rtb_motohawk_data_read1_ir &&
        (BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S68>/motohawk_data_write' incorporates:
       *  Constant: '<S68>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = FALSE;
      }
    }

    BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE =
      (uint8_T)(rtb_motohawk_data_read1_ir ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S38>/Reset TasksComplete To False' */

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S21>/Constant2'
     */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_A02_B.s21_Switch = 0.0;
    } else {
      BaseEngineController_A02_B.s21_Switch =
        BaseEngineController_A02_B.s58_MinMax1;
    }

    /* End of Switch: '<S21>/Switch' */

    /* Update for UnitDelay: '<S21>/Unit Delay' */
    BaseEngineController_A02_DWork.s21_UnitDelay_DSTATE = rtb_Merge_o4;

    /* Update for UnitDelay: '<S62>/Unit Delay' */
    BaseEngineController_A02_DWork.s62_UnitDelay_DSTATE = rtb_Product4_l;

    /* Update for UnitDelay: '<S53>/Unit Delay' */
    BaseEngineController_A02_DWork.s53_UnitDelay_DSTATE = rtb_Merge_dn;

    /* Update for UnitDelay: '<S49>/Unit Delay' */
    BaseEngineController_A02_DWork.s49_UnitDelay_DSTATE = rtb_Merge_c5;

    /* Update for UnitDelay: '<S51>/Unit Delay' */
    BaseEngineController_A02_DWork.s51_UnitDelay_DSTATE = rtb_Merge_c5;

    /* Update for UnitDelay: '<S52>/Unit Delay' */
    BaseEngineController_A02_DWork.s52_UnitDelay_DSTATE = rtb_Merge_i5;

    /* Update for UnitDelay: '<S54>/Unit Delay' */
    BaseEngineController_A02_DWork.s54_UnitDelay_DSTATE = rtb_Merge_oq;

    /* Update for UnitDelay: '<S55>/Unit Delay' incorporates:
     *  MinMax: '<S57>/MinMax1'
     */
    BaseEngineController_A02_DWork.s55_UnitDelay_DSTATE = minV;
  } else {
    if (BaseEngineController_A02_DWork.s14_ElectronicThrottleController_MODE) {
      /* Disable for Enabled SubSystem: '<S37>/PassThrough' */
      /* Disable for Outport: '<S59>/Out1' */
      BaseEngineController_A02_B.s59_In1 = 10.0;
      BaseEngineController_A02_DWork.s37_PassThrough_MODE = FALSE;

      /* End of Disable for SubSystem: '<S37>/PassThrough' */
      BaseEngineController_A02_DWork.s14_ElectronicThrottleController_MODE =
        FALSE;
    }
  }

  /* End of RelationalOperator: '<S19>/RelOp' */
  /* End of Outputs for SubSystem: '<S14>/Electronic Throttle Controller' */
  /* If: '<S811>/If' incorporates:
   *  Inport: '<S812>/In1'
   *  Inport: '<S813>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S811>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S811>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S811>/NewValue' incorporates:
     *  ActionPort: '<S812>/Action Port'
     */
    rtb_Product1_e = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S811>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S811>/OldValue' incorporates:
     *  ActionPort: '<S813>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s21_Switch;

    /* End of Outputs for SubSystem: '<S811>/OldValue' */
  }

  /* End of If: '<S811>/If' */

  /* Switch: '<S701>/Switch' incorporates:
   *  Constant: '<S701>/Constant2'
   *  Product: '<S701>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S701>/motohawk_interpolation_1d'
   *  Sum: '<S701>/Sum'
   */
  if (rtb_RelationalOperator5_p) {
    rtb_Product1_e = 0.0;
  } else {
    /* S-Function Block: <S701>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_l = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s340_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_l;
    }

    rtb_Product1_e = rtb_Product1_e * rtb_motohawk_interpolation_1d_l +
      (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S701>/Switch' */

  /* Saturate: '<S701>/Saturation' */
  BaseEngineController_A02_B.s701_ETC = rtb_Product1_e >= 100.0 ? 100.0 :
    rtb_Product1_e <= -100.0 ? -100.0 : rtb_Product1_e;

  /* Abs: '<S701>/Abs' */
  rtb_Product1_e = fabs(BaseEngineController_A02_B.s701_ETC);

  /* RelationalOperator: '<S701>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_a = (rtb_Product1_e > (ETC_OC_MIN_DataStore()));

  /* S-Function (motohawk_sfun_pwm): '<S701>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs(NULL,
    &BaseEngineController_A02_B.s701_motohawk_pwm1);

  /* Abs: '<S701>/Abs1' */
  rtb_DataTypeConversion2_l = (int16_T)
    (BaseEngineController_A02_B.s701_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_A02_B.s701_motohawk_pwm1 :
     BaseEngineController_A02_B.s701_motohawk_pwm1);

  /* RelationalOperator: '<S701>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_p = ((real_T)rtb_DataTypeConversion2_l <
    (ETC_I_MIN_DataStore()));

  /* Switch: '<S810>/Switch' incorporates:
   *  Constant: '<S810>/Constant'
   *  Logic: '<S701>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S810>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S810>/motohawk_delta_time'
   *  Sum: '<S810>/Sum'
   */
  if (rtb_LogicalOperator10 && rtb_LogicalOperator1_a &&
      rtb_RelationalOperator5_p) {
    rtb_Product1_e = rtb_motohawk_delta_time_l + ETCOpenFaultTimer_DataStore();
  } else {
    rtb_Product1_e = 0.0;
  }

  /* End of Switch: '<S810>/Switch' */

  /* RelationalOperator: '<S701>/Relational Operator5' incorporates:
   *  Constant: '<S701>/Constant'
   */
  rtb_RelationalOperator5 = ((rtb_Product1_e > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S701>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_RelationalOperator5);
    UpdateFault(22);
  }

  /* Gain: '<S701>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_is = 40.95 * BaseEngineController_A02_B.s701_ETC;

  /* DataTypeConversion: '<S701>/Data Type Conversion3' incorporates:
   *  Gain: '<S701>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration4'
   */
  rtb_Switch_o = 100.0 * (ETC_Frequency_DataStore());
  if (rtb_Switch_o < 4.294967296E+9) {
    if (rtb_Switch_o >= 0.0) {
      rtb_DataTypeConversion3_n = (uint32_T)rtb_Switch_o;
    } else {
      rtb_DataTypeConversion3_n = 0U;
    }
  } else {
    rtb_DataTypeConversion3_n = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S701>/Data Type Conversion3' */

  /* DataTypeConversion: '<S701>/Data Type Conversion4' */
  if (rtb_Abs_is < 32768.0) {
    if (rtb_Abs_is >= -32768.0) {
      rtb_DataTypeConversion4_k = (int16_T)rtb_Abs_is;
    } else {
      rtb_DataTypeConversion4_k = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_k = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S701>/Data Type Conversion4' */

  /* Saturate: '<S810>/Saturation' */
  rtb_Saturation_h = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <= 0.0
    ? 0.0 : rtb_Product1_e;

  /* S-Function (motohawk_sfun_data_write): '<S810>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_h;
  }

  /* If: '<S818>/If' incorporates:
   *  Inport: '<S829>/In1'
   *  Inport: '<S830>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S818>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S818>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S818>/NewValue' incorporates:
     *  ActionPort: '<S829>/Action Port'
     */
    rtb_Product1_e = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S818>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S818>/OldValue' incorporates:
     *  ActionPort: '<S830>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s128_SOI;

    /* End of Outputs for SubSystem: '<S818>/OldValue' */
  }

  /* End of If: '<S818>/If' */

  /* Gain: '<S702>/Gain2' */
  rtb_Abs_is = 16.0 * rtb_Product1_e;

  /* DataTypeConversion: '<S702>/Data Type Conversion2' */
  if (rtb_Abs_is < 32768.0) {
    if (rtb_Abs_is >= -32768.0) {
      rtb_DataTypeConversion2_l = (int16_T)rtb_Abs_is;
    } else {
      rtb_DataTypeConversion2_l = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_l = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S702>/Data Type Conversion2' */
  /* If: '<S81>/If' incorporates:
   *  Inport: '<S98>/In1'
   *  Inport: '<S99>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S81>/override_enable'
   *  UnitDelay: '<S81>/Unit Delay'
   */
  if ((Fuel_Cyl8_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S81>/NewValue' incorporates:
     *  ActionPort: '<S98>/Action Port'
     */
    rtb_Merge_hk = BaseEngineController_A02_DWork.s81_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S81>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S81>/OldValue' incorporates:
     *  ActionPort: '<S99>/Action Port'
     */
    rtb_Merge_hk = BaseEngineController_A02_B.s128_FPC[7];

    /* End of Outputs for SubSystem: '<S81>/OldValue' */
  }

  /* End of If: '<S81>/If' */

  /* Sum: '<S81>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S81>/offset'
   */
  rtb_Product1_e = rtb_Merge_hk + (Fuel_Cyl8_offset_DataStore());

  /* If: '<S80>/If' incorporates:
   *  Inport: '<S96>/In1'
   *  Inport: '<S97>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S80>/override_enable'
   *  UnitDelay: '<S80>/Unit Delay'
   */
  if ((Fuel_Cyl7_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S80>/NewValue' incorporates:
     *  ActionPort: '<S96>/Action Port'
     */
    rtb_Merge_mj = BaseEngineController_A02_DWork.s80_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S80>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S80>/OldValue' incorporates:
     *  ActionPort: '<S97>/Action Port'
     */
    rtb_Merge_mj = BaseEngineController_A02_B.s128_FPC[6];

    /* End of Outputs for SubSystem: '<S80>/OldValue' */
  }

  /* End of If: '<S80>/If' */

  /* Sum: '<S80>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S80>/offset'
   */
  rtb_Merge_oq = rtb_Merge_mj + (Fuel_Cyl7_offset_DataStore());

  /* If: '<S78>/If' incorporates:
   *  Inport: '<S92>/In1'
   *  Inport: '<S93>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S78>/override_enable'
   *  UnitDelay: '<S78>/Unit Delay'
   */
  if ((Fuel_Cyl6_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S78>/NewValue' incorporates:
     *  ActionPort: '<S92>/Action Port'
     */
    rtb_Merge_n2 = BaseEngineController_A02_DWork.s78_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S78>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S78>/OldValue' incorporates:
     *  ActionPort: '<S93>/Action Port'
     */
    rtb_Merge_n2 = BaseEngineController_A02_B.s128_FPC[5];

    /* End of Outputs for SubSystem: '<S78>/OldValue' */
  }

  /* End of If: '<S78>/If' */

  /* Sum: '<S78>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S78>/offset'
   */
  rtb_Merge_dn = rtb_Merge_n2 + (Fuel_Cyl6_offset_DataStore());

  /* If: '<S77>/If' incorporates:
   *  Inport: '<S90>/In1'
   *  Inport: '<S91>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S77>/override_enable'
   *  UnitDelay: '<S77>/Unit Delay'
   */
  if ((Fuel_Cyl5_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S77>/NewValue' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    rtb_Merge_fc = BaseEngineController_A02_DWork.s77_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S77>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S77>/OldValue' incorporates:
     *  ActionPort: '<S91>/Action Port'
     */
    rtb_Merge_fc = BaseEngineController_A02_B.s128_FPC[4];

    /* End of Outputs for SubSystem: '<S77>/OldValue' */
  }

  /* End of If: '<S77>/If' */

  /* Sum: '<S77>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S77>/offset'
   */
  rtb_Merge_o4 = rtb_Merge_fc + (Fuel_Cyl5_offset_DataStore());

  /* If: '<S76>/If' incorporates:
   *  Inport: '<S88>/In1'
   *  Inport: '<S89>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S76>/override_enable'
   *  UnitDelay: '<S76>/Unit Delay'
   */
  if ((Fuel_Cyl4_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S76>/NewValue' incorporates:
     *  ActionPort: '<S88>/Action Port'
     */
    rtb_Merge_p2 = BaseEngineController_A02_DWork.s76_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S76>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S76>/OldValue' incorporates:
     *  ActionPort: '<S89>/Action Port'
     */
    rtb_Merge_p2 = BaseEngineController_A02_B.s128_FPC[3];

    /* End of Outputs for SubSystem: '<S76>/OldValue' */
  }

  /* End of If: '<S76>/If' */

  /* Sum: '<S76>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/offset'
   */
  rtb_Merge_c5 = rtb_Merge_p2 + (Fuel_Cyl4_offset_DataStore());

  /* If: '<S75>/If' incorporates:
   *  Inport: '<S86>/In1'
   *  Inport: '<S87>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S75>/override_enable'
   *  UnitDelay: '<S75>/Unit Delay'
   */
  if ((Fuel_Cyl3_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S75>/NewValue' incorporates:
     *  ActionPort: '<S86>/Action Port'
     */
    rtb_Merge_b0 = BaseEngineController_A02_DWork.s75_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S75>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S75>/OldValue' incorporates:
     *  ActionPort: '<S87>/Action Port'
     */
    rtb_Merge_b0 = BaseEngineController_A02_B.s128_FPC[2];

    /* End of Outputs for SubSystem: '<S75>/OldValue' */
  }

  /* End of If: '<S75>/If' */

  /* Sum: '<S75>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S75>/offset'
   */
  rtb_Product4_l = rtb_Merge_b0 + (Fuel_Cyl3_offset_DataStore());

  /* If: '<S74>/If' incorporates:
   *  Inport: '<S84>/In1'
   *  Inport: '<S85>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S74>/override_enable'
   *  UnitDelay: '<S74>/Unit Delay'
   */
  if ((Fuel_Cyl2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S74>/NewValue' incorporates:
     *  ActionPort: '<S84>/Action Port'
     */
    rtb_Merge_f3 = BaseEngineController_A02_DWork.s74_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S74>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S74>/OldValue' incorporates:
     *  ActionPort: '<S85>/Action Port'
     */
    rtb_Merge_f3 = BaseEngineController_A02_B.s128_FPC[1];

    /* End of Outputs for SubSystem: '<S74>/OldValue' */
  }

  /* End of If: '<S74>/If' */

  /* Sum: '<S74>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S74>/offset'
   */
  rtb_Switch_o = rtb_Merge_f3 + (Fuel_Cyl2_offset_DataStore());

  /* If: '<S73>/If' incorporates:
   *  Inport: '<S82>/In1'
   *  Inport: '<S83>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S73>/override_enable'
   *  UnitDelay: '<S73>/Unit Delay'
   */
  if ((Fuel_Cyl1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S73>/NewValue' incorporates:
     *  ActionPort: '<S82>/Action Port'
     */
    rtb_Merge_iu = BaseEngineController_A02_DWork.s73_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S73>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S73>/OldValue' incorporates:
     *  ActionPort: '<S83>/Action Port'
     */
    rtb_Merge_iu = BaseEngineController_A02_B.s128_FPC[0];

    /* End of Outputs for SubSystem: '<S73>/OldValue' */
  }

  /* End of If: '<S73>/If' */

  /* If: '<S79>/If' incorporates:
   *  Inport: '<S94>/In1'
   *  Inport: '<S95>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S73>/offset'
   *  S-Function (motohawk_sfun_calibration): '<S79>/override_enable'
   *  Sum: '<S73>/Sum'
   *  UnitDelay: '<S79>/Unit Delay'
   */
  if ((Fuel_Global_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S79>/NewValue' incorporates:
     *  ActionPort: '<S94>/Action Port'
     */
    memcpy((void *)&rtb_Merge_pj[0], (void *)
           BaseEngineController_A02_DWork.s79_UnitDelay_DSTATE, sizeof(real_T) <<
           3U);

    /* End of Outputs for SubSystem: '<S79>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S79>/OldValue' incorporates:
     *  ActionPort: '<S95>/Action Port'
     */
    rtb_Merge_pj[0] = rtb_Merge_iu + (Fuel_Cyl1_offset_DataStore());
    rtb_Merge_pj[1] = rtb_Switch_o;
    rtb_Merge_pj[2] = rtb_Product4_l;
    rtb_Merge_pj[3] = rtb_Merge_c5;
    rtb_Merge_pj[4] = rtb_Merge_o4;
    rtb_Merge_pj[5] = rtb_Merge_dn;
    rtb_Merge_pj[6] = rtb_Merge_oq;
    rtb_Merge_pj[7] = rtb_Product1_e;

    /* End of Outputs for SubSystem: '<S79>/OldValue' */
  }

  /* End of If: '<S79>/If' */

  /* Sum: '<S79>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S79>/offset'
   */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s79_Sum[i] = rtb_Merge_pj[i] +
      (Fuel_Global_offset_DataStore());
  }

  /* End of Sum: '<S79>/Sum' */
  /* Product: '<S22>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S22>/Injector Gain [ms//mg]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_e[i] = BaseEngineController_A02_B.s79_Sum[i] *
      (InjGain_DataStore());
  }

  /* End of Product: '<S22>/Product2' */
  /* Sum: '<S22>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S22>/Injector Offset [ms]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_e[i] += (InjOffset_DataStore());
  }

  /* End of Sum: '<S22>/Sum' */
  /* Fcn: '<S71>/const ref to atm' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S22>/Regulated Gauge Fuel Pressure [kPa]'
   */
  BaseEngineController_A02_B.s71_constreftoatm = ((GaugeFuelPress_DataStore()) +
    BaseEngineController_A02_B.s305_Sum) - BaseEngineController_A02_B.s586_Merge;

  /* S-Function Block: <S71>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (InjDeltaPress09In_DataStore()) =
      BaseEngineController_A02_B.s71_constreftoatm;
    (InjDeltaPress09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s71_constreftoatm,
       (InjDeltaPress09IdxArr_DataStore()), 9, (InjDeltaPress09Idx_DataStore()));
    rtb_motohawk_prelookup1_n3 = (InjDeltaPress09Idx_DataStore());
  }

  /* S-Function Block: <S22>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d3_k = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n3, (real_T *) ((InjdPCompTbl_DataStore())), 9);
    (InjdPComp_DataStore()) = rtb_motohawk_interpolation_1d3_k;
  }

  /* Product: '<S22>/Product3' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S22>/motohawk_interpolation_1d3'
   *  S-Function (motohawk_sfun_prelookup): '<S71>/motohawk_prelookup1'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_e[i] = BaseEngineController_A02_B.s128_FuelMult *
      rtb_Product2_e[i] * rtb_motohawk_interpolation_1d3_k;
  }

  /* End of Product: '<S22>/Product3' */

  /* Saturate: '<S22>/Saturation' */
  rtb_Product1_e = BaseEngineController_A02_B.s543_Sum1 >= 0.01 ?
    BaseEngineController_A02_B.s543_Sum1 : 0.01;

  /* S-Function Block: <S22>/motohawk_interpolation_1d4 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d4_ii = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n3, (real_T *) ((InjTurnOffTbl_DataStore())), 9);
    (InjTurnOff_DataStore()) = rtb_motohawk_interpolation_1d4_ii;
  }

  /* S-Function Block: <S22>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_k = TableInterpolation1D_real_T
      (BaseEngineController_A02_B.s340_motohawk_prelookup, (real_T *)
       ((InjTurnOnTbl_DataStore())), 9);
    (InjTurnOn_DataStore()) = rtb_motohawk_interpolation_1d1_k;
  }

  /* Sum: '<S22>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S22>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S22>/motohawk_interpolation_1d4'
   *  S-Function (motohawk_sfun_prelookup): '<S71>/motohawk_prelookup1'
   */
  BaseEngineController_A02_B.s22_Sum2 = rtb_motohawk_interpolation_1d1_k -
    rtb_motohawk_interpolation_1d4_ii;

  /* Sum: '<S22>/Sum1' incorporates:
   *  Constant: '<S22>/Constant'
   *  Product: '<S22>/Divide'
   *  Saturate: '<S22>/Saturation'
   */
  BaseEngineController_A02_B.s22_Sum1 = 120000.0 / rtb_Product1_e -
    BaseEngineController_A02_B.s22_Sum2;

  /* MinMax: '<S22>/MinMax' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_B.s22_MinMax[i] = (rtb_Product2_e[i] <=
      BaseEngineController_A02_B.s22_Sum1) || rtIsNaN
      (BaseEngineController_A02_B.s22_Sum1) ? rtb_Product2_e[i] :
      BaseEngineController_A02_B.s22_Sum1;
  }

  /* End of MinMax: '<S22>/MinMax' */
  /* If: '<S819>/If' incorporates:
   *  Inport: '<S831>/In1'
   *  Inport: '<S832>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S819>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S819>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S819>/NewValue' incorporates:
     *  ActionPort: '<S831>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product2_e[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S819>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S819>/OldValue' incorporates:
     *  ActionPort: '<S832>/Action Port'
     */
    memcpy((void *)&rtb_Product2_e[0], (void *)
           (&BaseEngineController_A02_B.s22_MinMax[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S819>/OldValue' */
  }

  /* End of If: '<S819>/If' */

  /* DataTypeConversion: '<S702>/Data Type Conversion3' incorporates:
   *  Gain: '<S702>/Gain3'
   */
  for (i = 0; i < 8; i++) {
    rtb_Switch_o = 1000.0 * rtb_Product2_e[i];
    if (rtb_Switch_o < 4.294967296E+9) {
      if (rtb_Switch_o >= 0.0) {
        rtb_Switch_a = (uint32_T)rtb_Switch_o;
      } else {
        rtb_Switch_a = 0U;
      }
    } else {
      rtb_Switch_a = MAX_uint32_T;
    }

    rtb_InjectorSequence_o2[i] = rtb_Switch_a;
  }

  /* End of DataTypeConversion: '<S702>/Data Type Conversion3' */
  /* Gain: '<S702>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration9'
   */
  rtb_Abs_is = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S702>/Data Type Conversion6' */
  if (rtb_Abs_is < 4.294967296E+9) {
    if (rtb_Abs_is >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_is;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S702>/Data Type Conversion6' */
  /* If: '<S816>/If' incorporates:
   *  Inport: '<S825>/In1'
   *  Inport: '<S826>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S816>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S816>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S816>/NewValue' incorporates:
     *  ActionPort: '<S825>/Action Port'
     */
    rtb_Product1_e = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S816>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S816>/OldValue' incorporates:
     *  ActionPort: '<S826>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s22_Sum2;

    /* End of Outputs for SubSystem: '<S816>/OldValue' */
  }

  /* End of If: '<S816>/If' */

  /* Gain: '<S702>/Gain1' */
  rtb_Abs_is = 1000.0 * rtb_Product1_e;

  /* DataTypeConversion: '<S702>/Data Type Conversion1' */
  if (rtb_Abs_is < 4.294967296E+9) {
    if (rtb_Abs_is >= 0.0) {
      rtb_Sum_l0 = (uint32_T)rtb_Abs_is;
    } else {
      rtb_Sum_l0 = 0U;
    }
  } else {
    rtb_Sum_l0 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S702>/Data Type Conversion1' */
  /* If: '<S817>/If' incorporates:
   *  Inport: '<S827>/In1'
   *  Inport: '<S828>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S817>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S817>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S817>/NewValue' incorporates:
     *  ActionPort: '<S827>/Action Port'
     */
    rtb_Product1_e = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S817>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S817>/OldValue' incorporates:
     *  ActionPort: '<S828>/Action Port'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s128_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S817>/OldValue' */
  }

  /* End of If: '<S817>/If' */

  /* Gain: '<S702>/Gain6' */
  rtb_Abs_is = 16.0 * rtb_Product1_e;

  /* DataTypeConversion: '<S702>/Data Type Conversion7' */
  if (rtb_Abs_is < 32768.0) {
    if (rtb_Abs_is >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_is;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S702>/Data Type Conversion7' */
  /* Gain: '<S702>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration6'
   */
  rtb_Abs_is = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S702>/Data Type Conversion8' */
  if (rtb_Abs_is < 4.294967296E+9) {
    if (rtb_Abs_is >= 0.0) {
      rtb_UnitDelay_aka = (uint32_T)rtb_Abs_is;
    } else {
      rtb_UnitDelay_aka = 0U;
    }
  } else {
    rtb_UnitDelay_aka = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S702>/Data Type Conversion8' */
  /* Outputs for Enabled SubSystem: '<S23>/PassThrough5' incorporates:
   *  EnablePort: '<S106>/Enable'
   */
  /* Logic: '<S23>/Logical Operator1' incorporates:
   *  Constant: '<S23>/Constant2'
   *  Constant: '<S23>/Constant3'
   *  RelationalOperator: '<S23>/Relational Operator2'
   *  RelationalOperator: '<S23>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S23>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 1) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!BaseEngineController_A02_DWork.s23_PassThrough5_MODE) {
      BaseEngineController_A02_DWork.s23_PassThrough5_MODE = TRUE;
    }

    /* DataTypeConversion: '<S106>/Data Type Conversion1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s106_DataTypeConversion1[i] =
        ((BaseEngineController_A02_B.s117_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S106>/Data Type Conversion1' */
  } else {
    if (BaseEngineController_A02_DWork.s23_PassThrough5_MODE) {
      /* Disable for Outport: '<S106>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s106_DataTypeConversion1[i] = FALSE;
      }

      /* End of Outport: '<S106>/Out1' */
      BaseEngineController_A02_DWork.s23_PassThrough5_MODE = FALSE;
    }
  }

  /* End of Logic: '<S23>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S23>/PassThrough5' */

  /* Logic: '<S23>/Logical Operator3' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_j[i] =
      !BaseEngineController_A02_B.s106_DataTypeConversion1[i];
  }

  /* End of Logic: '<S23>/Logical Operator3' */

  /* Outputs for Atomic SubSystem: '<S702>/Injector Enable Manager' */

  /* S-Function Block: <S824>/motohawk_delta_time */
  rtb_motohawk_delta_time_jd = 0.005;

  /* Switch: '<S824>/Switch' incorporates:
   *  Constant: '<S824>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S824>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S824>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S815>/motohawk_fault_action'
   *  Sum: '<S824>/Sum'
   */
  if (GetFaultActionStatus(2)) {
    rtb_Product1_e = rtb_motohawk_delta_time_jd +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_Product1_e = 0.0;
  }

  /* End of Switch: '<S824>/Switch' */
  /* RelationalOperator: '<S815>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration1'
   */
  rtb_LogicalOperator_bt = (rtb_Product1_e > (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S815>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_bt;
  }

  /* RelationalOperator: '<S815>/Relational Operator1' incorporates:
   *  Gain: '<S815>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_m3 = ((rtb_Product1_e > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S815>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_m3;
  }

  /* RelationalOperator: '<S815>/Relational Operator2' incorporates:
   *  Constant: '<S815>/Constant'
   */
  rtb_RelationalOperator2_jp = ((rtb_Product1_e > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S815>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_jp;
  }

  /* Logic: '<S815>/Logical Operator' */
  rtb_LogicalOperator_bt = !rtb_LogicalOperator_bt;

  /* Logic: '<S815>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S815>/motohawk_data_read'
   */
  rtb_LogicalOperator1_a = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S815>/motohawk_data_read1' */
  rtb_motohawk_data_read1_h3 = ECUP_Enabled_DataStore();

  /* Logic: '<S815>/Logical Operator4' incorporates:
   *  Constant: '<S823>/Constant'
   *  RelationalOperator: '<S823>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S815>/motohawk_data_read2'
   */
  rtb_Merge_i5 = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S815>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_iht[0] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Merge_i5 &&
    (Injector1Enable_DataStore()));
  rtb_LogicalOperator1_iht[1] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Merge_i5 &&
    (Injector2Enable_DataStore()));
  rtb_LogicalOperator1_iht[2] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Merge_i5 &&
    (Injector3Enable_DataStore()));
  rtb_LogicalOperator1_iht[3] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Merge_i5 &&
    (Injector4Enable_DataStore()));
  rtb_LogicalOperator1_iht[4] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Merge_i5 &&
    (Injector5Enable_DataStore()));
  rtb_LogicalOperator1_iht[5] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Merge_i5 &&
    (Injector6Enable_DataStore()));
  rtb_LogicalOperator1_iht[6] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Merge_i5 &&
    (Injector7Enable_DataStore()));
  rtb_LogicalOperator1_iht[7] = (rtb_LogicalOperator_bt &&
    rtb_LogicalOperator1_a && rtb_motohawk_data_read1_h3 && rtb_Merge_i5 &&
    (Injector8Enable_DataStore()));

  /* Saturate: '<S824>/Saturation' */
  rtb_Saturation_km = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
    0.0 ? 0.0 : rtb_Product1_e;

  /* S-Function (motohawk_sfun_data_write): '<S824>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_km;
  }

  /* End of Outputs for SubSystem: '<S702>/Injector Enable Manager' */
  /* Logic: '<S702>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S702>/motohawk_data_read'
   */
  rtb_LogicalOperator1_a = !ESTOP_DataStore();

  /* If: '<S821>/If' incorporates:
   *  Inport: '<S835>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S821>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S821>/override_enable'
   */
  if ((ESTOP_FuelInj_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S821>/NewValue' incorporates:
     *  ActionPort: '<S835>/Action Port'
     */
    rtb_LogicalOperator1_a = (ESTOP_FuelInj_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S821>/NewValue' */
  } else {
  }

  /* End of If: '<S821>/If' */

  /* If: '<S820>/If' incorporates:
   *  Inport: '<S833>/In1'
   *  Inport: '<S834>/In1'
   *  Logic: '<S702>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S820>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S820>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S820>/NewValue' incorporates:
     *  ActionPort: '<S833>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s820_Merge[i] = (InjEnable_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S820>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S820>/OldValue' incorporates:
     *  ActionPort: '<S834>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s820_Merge[i] = ((rtb_LogicalOperator1_a &&
        rtb_LogicalOperator3_j[i] && rtb_LogicalOperator1_iht[i]));
    }

    /* End of Outputs for SubSystem: '<S820>/OldValue' */
  }

  /* End of If: '<S820>/If' */

  /* S-Function Block: <S702>/Injector Sequence */
  {
    extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_39[8];
    uint32_T makeup_duration;
    int16_T makeup_angle;
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_39[8];
    extern int32_T InjectorSeqDiagLastPin_39;
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
      enable = ((BaseEngineController_A02_B.s820_Merge)[index] &&
                pulse_scheduling_allowed);
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_A02_ConstB.s702_DataTypeConversion5) !=
            (BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_A02_ConstB.s702_DataTypeConversion5);
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
          if (TransientInjectorSeqInfo_39[index].primaryComplete) {
            if (elec_duration > TransientInjectorSeqInfo_39[index].
                primaryDuration) {
              makeup_duration = elec_duration -
                TransientInjectorSeqInfo_39[index].primaryDuration;
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
              ((&BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[0])
               [index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_A02_ConstB.s702_DataTypeConversion5) !=
              (BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK2)) {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_A02_ConstB.s702_DataTypeConversion5);
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
            ((&BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_A02_ConstB.s702_DataTypeConversion5) !=
            (BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_A02_ConstB.s702_DataTypeConversion5);
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

    BaseEngineController_A02_DWork.s702_InjectorSequence_DWORK2 =
      BaseEngineController_A02_ConstB.s702_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_A02_B.s702_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_39[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_39[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S814>/==' incorporates:
   *  Constant: '<S814>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_j[i] =
      (BaseEngineController_A02_B.s702_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S814>/==' */
  /* S-Function Block: <S814>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S814>/<1' incorporates:
   *  Constant: '<S814>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S814>/motohawk_encoder_average_rpm'
   */
  rtb_LogicalOperator1_a = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S814>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator3_j[i] && rtb_LogicalOperator1_a &&
                   BaseEngineController_A02_B.s820_Merge[i]);
  }

  /* End of Logic: '<S814>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S814>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(35, rtb_AND1[0]);
    UpdateFault(35);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S814>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(36, rtb_AND1[1]);
    UpdateFault(36);
  }

  /* If: '<S838>/If' incorporates:
   *  Inport: '<S839>/In1'
   *  Inport: '<S840>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S838>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S838>/override_enable'
   */
  if ((OILP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S838>/NewValue' incorporates:
     *  ActionPort: '<S839>/Action Port'
     */
    rtb_LogicalOperator1_a = (OILP_new_DataStore());

    /* End of Outputs for SubSystem: '<S838>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S838>/OldValue' incorporates:
     *  ActionPort: '<S840>/Action Port'
     */
    rtb_LogicalOperator1_a = BaseEngineController_A02_B.s128_OILP;

    /* End of Outputs for SubSystem: '<S838>/OldValue' */
  }

  /* End of If: '<S838>/If' */

  /* Logic: '<S837>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S837>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s837_LogicalOperator = rtb_LogicalOperator1_a ^
    (OILP_Polarity_DataStore());

  /* If: '<S842>/If' incorporates:
   *  Inport: '<S843>/In1'
   *  Inport: '<S844>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S842>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S842>/override_enable'
   */
  if ((Oxygen_Heater_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S842>/NewValue' incorporates:
     *  ActionPort: '<S843>/Action Port'
     */
    rtb_LogicalOperator1_a = (Oxygen_Heater_new_DataStore());

    /* End of Outputs for SubSystem: '<S842>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S842>/OldValue' incorporates:
     *  ActionPort: '<S844>/Action Port'
     */
    rtb_LogicalOperator1_a = BaseEngineController_A02_B.s128_O2Heater;

    /* End of Outputs for SubSystem: '<S842>/OldValue' */
  }

  /* End of If: '<S842>/If' */

  /* Logic: '<S841>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S841>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_B.s841_LogicalOperator = rtb_LogicalOperator1_a ^
    (Oxygen_Heater_Polarity_DataStore());

  /* S-Function Block: <S30>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s30_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_he = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S30>/Switch' incorporates:
   *  Constant: '<S30>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S30>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S30>/motohawk_delta_time'
   *  Sum: '<S30>/Sum'
   */
  if (rtb_RelationalOperator6_k) {
    rtb_Abs_is = rtb_motohawk_delta_time_he + EGR_Disable_DataStore();
  } else {
    rtb_Abs_is = 0.0;
  }

  /* End of Switch: '<S30>/Switch' */

  /* RelationalOperator: '<S27>/Relational Operator3' incorporates:
   *  Constant: '<S27>/Constant1'
   *  Gain: '<S27>/Gain1'
   *  Gain: '<S27>/Gain3'
   *  Product: '<S27>/Product1'
   *  Sum: '<S27>/Add'
   */
  rtb_RelationalOperator3_fn = ((1.0E+6 * rtb_Abs_is >= (100.0 -
    rtb_DataTypeConversion_f5a) * 0.01 * rtb_DesiredLambda_idx));

  /* S-Function (motohawk_sfun_data_write): '<S27>/motohawk_data_write' */
  /* Write to Data Storage as scalar: RESET */
  {
    RESET_DataStore() = rtb_RelationalOperator3_fn;
  }

  /* Saturate: '<S29>/Saturation' */
  rtb_Saturation_ms = rtb_Switch_e >= 16000.0 ? 16000.0 : rtb_Switch_e <= 0.0 ?
    0.0 : rtb_Switch_e;

  /* S-Function (motohawk_sfun_data_write): '<S29>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EGR_Enable */
  {
    EGR_Enable_DataStore() = rtb_Saturation_ms;
  }

  /* Saturate: '<S30>/Saturation' */
  rtb_Saturation_ai = rtb_Abs_is >= 16000.0 ? 16000.0 : rtb_Abs_is <= 0.0 ? 0.0 :
    rtb_Abs_is;

  /* S-Function (motohawk_sfun_data_write): '<S30>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EGR_Disable */
  {
    EGR_Disable_DataStore() = rtb_Saturation_ai;
  }

  /* Sum: '<S23>/Sum1' incorporates:
   *  DataTypeConversion: '<S23>/Data Type Conversion2'
   *  DataTypeConversion: '<S23>/Data Type Conversion3'
   *  DataTypeConversion: '<S23>/Data Type Conversion4'
   *  Fcn: '<S23>/Fcn1'
   *  Fcn: '<S23>/Fcn2'
   */
  rtb_Abs_is = ((real_T)rtb_motohawk_fault_action3 * 3.0 + (real_T)
                rtb_motohawk_fault_action2 * 2.0) + (real_T)
    rtb_motohawk_fault_action1_m;

  /* DataTypeConversion: '<S23>/Data Type Conversion5' */
  if (rtb_Abs_is < 256.0) {
    if (rtb_Abs_is >= 0.0) {
      BaseEngineController_A02_B.s23_DataTypeConversion5 = (uint8_T)rtb_Abs_is;
    } else {
      BaseEngineController_A02_B.s23_DataTypeConversion5 = 0U;
    }
  } else {
    BaseEngineController_A02_B.s23_DataTypeConversion5 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S23>/Data Type Conversion5' */

  /* S-Function (motohawk_sfun_data_write): '<S127>/motohawk_data_write' */
  /* Write to Data Storage as scalar: APP */
  {
    APP_DataStore() = BaseEngineController_A02_B.s135_APP;
  }

  /* UnitDelay: '<S379>/Unit Delay' */
  rtb_UnitDelay_aka = BaseEngineController_A02_DWork.s379_UnitDelay_DSTATE;

  /* Sum: '<S379>/Sum' incorporates:
   *  Constant: '<S379>/Constant1'
   */
  rtb_Switch_a = 1U + rtb_UnitDelay_aka;
  if (rtb_Switch_a < 1U) {
    rtb_Switch_a = MAX_uint32_T;
  }

  rtb_Sum_l0 = rtb_Switch_a;

  /* End of Sum: '<S379>/Sum' */

  /* RelationalOperator: '<S379>/Relational Operator' incorporates:
   *  Constant: '<S18>/Count'
   */
  rtb_RelationalOperator_hu = (rtb_Sum_l0 >= 5U);

  /* S-Function Block: <S301>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = BaseEngineController_A02_B.s345_Switch1;
    (App05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s345_Switch1, (App05IdxArr_DataStore()), 5,
       (App05Idx_DataStore()));
    rtb_motohawk_prelookup_a = (App05Idx_DataStore());
  }

  /* S-Function Block: <S378>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom05In_DataStore()) = rtb_Torque;
    (IndLoadNom05Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom05IdxArr_DataStore()), 5, (IndLoadNom05Idx_DataStore()));
    rtb_motohawk_prelookup_a = (IndLoadNom05Idx_DataStore());
  }

  /* Switch: '<S329>/Switch1' incorporates:
   *  Constant: '<S326>/Constant'
   *  Constant: '<S330>/Constant'
   *  RelationalOperator: '<S330>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S326>/motohawk_data_read'
   *  UnitDelay: '<S329>/Unit Delay'
   */
  if (((uint8_T)EngineState_DataStore()) == 1) {
    BaseEngineController_A02_B.s329_Switch1 = 0.0;
  } else {
    BaseEngineController_A02_B.s329_Switch1 =
      BaseEngineController_A02_DWork.s329_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S329>/Switch1' */
  /* S-Function Block: <S339>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_A02_B.s543_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_B.s543_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_a = (RPM05Idx_DataStore());
  }

  /* Outputs for Enabled SubSystem: '<S300>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S344>/Enable'
   */
  if (rtb_RelOp_g) {
    if (!BaseEngineController_A02_DWork.s300_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S344>/Unit Delay' */
      BaseEngineController_A02_DWork.s344_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_DWork.s300_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S344>/Sum' incorporates:
     *  Constant: '<S344>/Constant'
     *  UnitDelay: '<S344>/Unit Delay'
     */
    rtb_Add_a = (int8_T)(BaseEngineController_A02_DWork.s344_UnitDelay_DSTATE +
                         1);

    /* Sum: '<S344>/Add' incorporates:
     *  Constant: '<S344>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S344>/Relational Operator' */
    rtb_LogicalOperator1_a = (rtb_Add_a <= rtb_Sum_l3);

    /* Switch: '<S344>/Switch' */
    if (rtb_LogicalOperator1_a) {
      rtb_Sum_l3 = rtb_Add_a;
    }

    /* End of Switch: '<S344>/Switch' */

    /* Outputs for Enabled SubSystem: '<S344>/Collect Average' incorporates:
     *  EnablePort: '<S361>/Enable'
     */
    /* Logic: '<S344>/Logical Operator' incorporates:
     *  Constant: '<S344>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S344>/Relational Operator1'
     */
    if (rtb_LogicalOperator1_a && (rtb_Add_a > 2)) {
      if (!BaseEngineController_A02_DWork.s344_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S361>/Unit Delay1' */
        BaseEngineController_A02_DWork.s361_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_DWork.s344_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S361>/Sum1' incorporates:
       *  UnitDelay: '<S361>/Unit Delay1'
       */
      rtb_Product1_e = BaseEngineController_A02_B.s636_Merge +
        BaseEngineController_A02_DWork.s361_UnitDelay1_DSTATE;

      /* Product: '<S361>/Product' incorporates:
       *  DataTypeConversion: '<S361>/Data Type Conversion'
       *  Sum: '<S344>/Add1'
       */
      BaseEngineController_A02_B.s361_Product = 1.0 / (real_T)(int8_T)
        (rtb_Sum_l3 - 2) * rtb_Product1_e;

      /* Update for UnitDelay: '<S361>/Unit Delay1' */
      BaseEngineController_A02_DWork.s361_UnitDelay1_DSTATE = rtb_Product1_e;
    } else {
      if (BaseEngineController_A02_DWork.s344_CollectAverage_MODE) {
        BaseEngineController_A02_DWork.s344_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S344>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S344>/Collect Average' */

    /* Update for UnitDelay: '<S344>/Unit Delay' */
    BaseEngineController_A02_DWork.s344_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_A02_DWork.s300_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S344>/Collect Average' */
      BaseEngineController_A02_DWork.s344_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S344>/Collect Average' */
      BaseEngineController_A02_DWork.s300_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S300>/Capture IAT At Startup' */
  /* S-Function Block: <S369>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s369_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_a0 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S369>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S369>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S369>/motohawk_delta_time'
   */
  BaseEngineController_A02_B.s369_Sum = rtb_motohawk_delta_time_a0 +
    TimeSinceKeyOnTimer_DataStore();

  /* UnitDelay: '<S349>/Unit Delay1' */
  rtb_Product1_e = BaseEngineController_A02_DWork.s349_UnitDelay1_DSTATE;

  /* Sum: '<S349>/Sum3' incorporates:
   *  Constant: '<S349>/Constant1'
   *  Product: '<S349>/Product2'
   *  Product: '<S349>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S349>/motohawk_calibration1'
   *  Sum: '<S349>/Sum2'
   */
  BaseEngineController_A02_B.s349_Sum3 = (1.0 - (PostO2DelagFiltConst_DataStore()))
    * rtb_Product1_e + (PostO2DelagFiltConst_DataStore()) *
    BaseEngineController_A02_B.s630_Merge;

  /* S-Function Block: <S574>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s574_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_is = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S574>/Product' incorporates:
   *  MinMax: '<S574>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S574>/motohawk_calibration'
   */
  rtb_Abs_is /= (rtb_Abs_is >= (FuelPresFilterConst_DataStore())) || rtIsNaN
    ((FuelPresFilterConst_DataStore())) ? rtb_Abs_is :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S546>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S546>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S546>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_p = (IsFaultActive(28) || IsFaultActive(29));

  /* Logic: '<S546>/Logical Operator6' */
  rtb_LogicalOperator1_a = !rtb_RelationalOperator5_p;

  /* Logic: '<S546>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S546>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S546>/motohawk_fault_status3'
   */
  rtb_Merge_i5 = (IsFaultSuspected(28) || IsFaultSuspected(29));

  /* S-Function Block: <S384>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get(&BaseEngineController_A02_B.s384_motohawk_ain2,
      NULL);
  }

  /* DataTypeConversion: '<S546>/Data Type Conversion' */
  rtb_Abs_b = (real_T)BaseEngineController_A02_B.s384_motohawk_ain2;

  /* Product: '<S546>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S546>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_Abs_b * (FuelPresGain_DataStore());

  /* Sum: '<S546>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S546>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s546_Sum1 = rtb_Product1_e +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S546>/Unit Delay1' */
  rtb_UnitDelay1_b = BaseEngineController_A02_DWork.s546_UnitDelay1_DSTATE;

  /* If: '<S546>/If' incorporates:
   *  Logic: '<S546>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_a && rtb_Merge_i5) {
    /* Outputs for IfAction SubSystem: '<S546>/If Action Subsystem' incorporates:
     *  ActionPort: '<S575>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_b, &rtb_Merge_dm);

    /* End of Outputs for SubSystem: '<S546>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_p) {
    /* Outputs for IfAction SubSystem: '<S546>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S576>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_dm);

    /* End of Outputs for SubSystem: '<S546>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S546>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S577>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s546_Sum1, &rtb_Merge_dm);

    /* End of Outputs for SubSystem: '<S546>/If Action Subsystem2' */
  }

  /* End of If: '<S546>/If' */

  /* Sum: '<S579>/Sum1' incorporates:
   *  Constant: '<S579>/Constant'
   *  Product: '<S579>/Product'
   *  Product: '<S579>/Product1'
   *  Sum: '<S579>/Sum'
   *  UnitDelay: '<S579>/Unit Delay'
   */
  rtb_Sum1_j = (1.0 - rtb_Abs_is) *
    BaseEngineController_A02_DWork.s579_UnitDelay_DSTATE + rtb_Merge_dm *
    rtb_Abs_is;

  /* If: '<S578>/If' incorporates:
   *  Inport: '<S580>/In1'
   *  Inport: '<S581>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S578>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S578>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S578>/NewValue' incorporates:
     *  ActionPort: '<S580>/Action Port'
     */
    BaseEngineController_A02_B.s578_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S578>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S578>/OldValue' incorporates:
     *  ActionPort: '<S581>/Action Port'
     */
    BaseEngineController_A02_B.s578_Merge = rtb_Sum1_j;

    /* End of Outputs for SubSystem: '<S578>/OldValue' */
  }

  /* End of If: '<S578>/If' */

  /* S-Function Block: <S590>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s590_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_is = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S590>/Product' incorporates:
   *  MinMax: '<S590>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S590>/motohawk_calibration'
   */
  rtb_Abs_is /= (rtb_Abs_is >= (MAPTimeFilterConst_DataStore())) || rtIsNaN
    ((MAPTimeFilterConst_DataStore())) ? rtb_Abs_is :
    (MAPTimeFilterConst_DataStore());

  /* Sum: '<S595>/Sum1' incorporates:
   *  Constant: '<S595>/Constant'
   *  Product: '<S595>/Product'
   *  Product: '<S595>/Product1'
   *  Sum: '<S595>/Sum'
   *  UnitDelay: '<S595>/Unit Delay'
   */
  rtb_Sum1_h = (1.0 - rtb_Abs_is) *
    BaseEngineController_A02_DWork.s595_UnitDelay_DSTATE + rtb_Merge_pk *
    rtb_Abs_is;

  /* If: '<S594>/If' incorporates:
   *  Inport: '<S596>/In1'
   *  Inport: '<S597>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S594>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S594>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S594>/NewValue' incorporates:
     *  ActionPort: '<S596>/Action Port'
     */
    BaseEngineController_A02_B.s594_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S594>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S594>/OldValue' incorporates:
     *  ActionPort: '<S597>/Action Port'
     */
    BaseEngineController_A02_B.s594_Merge = rtb_Sum1_h;

    /* End of Outputs for SubSystem: '<S594>/OldValue' */
  }

  /* End of If: '<S594>/If' */

  /* Sum: '<S348>/Sum3' incorporates:
   *  Constant: '<S348>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_A02_B.s348_Sum3 = (BaseEngineController_A02_B.s578_Merge
    + 100.0) - BaseEngineController_A02_B.s594_Merge;

  /* If: '<S394>/If' incorporates:
   *  Inport: '<S402>/In1'
   *  Inport: '<S403>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S394>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S394>/override_enable'
   */
  if ((Vehicle_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S394>/NewValue' incorporates:
     *  ActionPort: '<S402>/Action Port'
     */
    rtb_Merge_o4 = (Vehicle_Speed_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S394>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S394>/OldValue' incorporates:
     *  ActionPort: '<S403>/Action Port'
     */
    rtb_Merge_o4 = BaseEngineController_A02_B.s387_ReadCANMessage_o4;

    /* End of Outputs for SubSystem: '<S394>/OldValue' */
  }

  /* End of If: '<S394>/If' */

  /* If: '<S410>/If' incorporates:
   *  Inport: '<S448>/In1'
   *  Inport: '<S449>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S410>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S410>/override_enable'
   */
  if ((Status1_Age_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S410>/NewValue' incorporates:
     *  ActionPort: '<S448>/Action Port'
     */
    BaseEngineController_A02_B.s410_Merge = (Status1_Age_Count_Ovr_new_DataStore
      ());

    /* End of Outputs for SubSystem: '<S410>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S410>/OldValue' incorporates:
     *  ActionPort: '<S449>/Action Port'
     */
    BaseEngineController_A02_B.s410_Merge =
      BaseEngineController_A02_B.s388_ReadCANMessage_o1;

    /* End of Outputs for SubSystem: '<S410>/OldValue' */
  }

  /* End of If: '<S410>/If' */

  /* If: '<S412>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S412>/override_enable'
   */
  if ((Control_Mode_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S412>/If' */

  /* If: '<S413>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S413>/override_enable'
   */
  if ((MotoringTq_Curve_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S413>/If' */

  /* If: '<S414>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S414>/override_enable'
   */
  if ((GeneratingTq_Curve_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S414>/If' */

  /* If: '<S415>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S415>/override_enable'
   */
  if ((Est_Relative_Torque_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S415>/If' */

  /* If: '<S416>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S416>/override_enable'
   */
  if ((Estimating_VBATT_Lv_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S416>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S388>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6364p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6364p0001,
      &messageObj);
    if ((BaseEngineController_A02_B.s388_ReadCANMessage2_o1 + 1) >
        BaseEngineController_A02_B.s388_ReadCANMessage2_o1)
      BaseEngineController_A02_B.s388_ReadCANMessage2_o1++;
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
      BaseEngineController_A02_B.s388_ReadCANMessage2_o2 = (real_T) tmp0;
      BaseEngineController_A02_B.s388_ReadCANMessage2_o3 = (real_T) tmp1;
      BaseEngineController_A02_B.s388_ReadCANMessage2_o4 = (real_T) tmp2;
      BaseEngineController_A02_B.s388_ReadCANMessage2_o5 = (real_T) tmp3;
      BaseEngineController_A02_B.s388_ReadCANMessage2_o6 = (real_T) tmp4;
      BaseEngineController_A02_B.s388_ReadCANMessage2_o7 = (real_T) tmp5;
      BaseEngineController_A02_B.s388_ReadCANMessage2_o8 = (real_T) tmp6;
      BaseEngineController_A02_B.s388_ReadCANMessage2_o9 = (real_T) tmp7;
      BaseEngineController_A02_B.s388_ReadCANMessage2_o10 = (real_T) tmp8;
      BaseEngineController_A02_B.s388_ReadCANMessage2_o11 = (real_T) tmp9;
      BaseEngineController_A02_B.s388_ReadCANMessage2_o12 = (real_T) tmp10;
      BaseEngineController_A02_B.s388_ReadCANMessage2_o13 = ((real_T) tmp11) +
        ((real_T) -40);
      BaseEngineController_A02_B.s388_ReadCANMessage2_o14 = ((real_T) tmp12) /
        ((real_T) 2);
      BaseEngineController_A02_B.s388_ReadCANMessage2_o15 = ((real_T) tmp13) /
        ((real_T) 10);
      BaseEngineController_A02_B.s388_ReadCANMessage2_o16 = ((real_T) tmp14) /
        ((real_T) 10);
      BaseEngineController_A02_B.s388_ReadCANMessage2_o1 = 0;
    }
  }

  /* If: '<S419>/If' incorporates:
   *  Inport: '<S466>/In1'
   *  Inport: '<S467>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S419>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S419>/override_enable'
   */
  if ((Status3_Age_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S419>/NewValue' incorporates:
     *  ActionPort: '<S466>/Action Port'
     */
    BaseEngineController_A02_B.s419_Merge = (Status3_Age_Count_Ovr_new_DataStore
      ());

    /* End of Outputs for SubSystem: '<S419>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S419>/OldValue' incorporates:
     *  ActionPort: '<S467>/Action Port'
     */
    BaseEngineController_A02_B.s419_Merge =
      BaseEngineController_A02_B.s388_ReadCANMessage2_o1;

    /* End of Outputs for SubSystem: '<S419>/OldValue' */
  }

  /* End of If: '<S419>/If' */

  /* If: '<S420>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S420>/override_enable'
   */
  if ((AD_Input1_En_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S420>/If' */

  /* If: '<S421>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S421>/override_enable'
   */
  if ((XDRP_State_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S421>/If' */

  /* If: '<S422>/If' incorporates:
   *  Inport: '<S472>/In1'
   *  Inport: '<S473>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S422>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S422>/override_enable'
   */
  if ((Motor_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S422>/NewValue' incorporates:
     *  ActionPort: '<S472>/Action Port'
     */
    rtb_Merge_c5 = (Motor_Speed_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S422>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S422>/OldValue' incorporates:
     *  ActionPort: '<S473>/Action Port'
     */
    rtb_Merge_c5 = BaseEngineController_A02_B.s388_ReadCANMessage_o3;

    /* End of Outputs for SubSystem: '<S422>/OldValue' */
  }

  /* End of If: '<S422>/If' */

  /* If: '<S423>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S423>/override_enable'
   */
  if ((PWMOutput_State_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S423>/If' */

  /* If: '<S424>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S424>/override_enable'
   */
  if ((AD_Input2_En_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S424>/If' */

  /* If: '<S425>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S425>/override_enable'
   */
  if ((Bus_HVIL_Status_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S425>/If' */

  /* If: '<S426>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S426>/override_enable'
   */
  if ((ThreePhase_HVIL_Status_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S426>/If' */

  /* If: '<S427>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S427>/override_enable'
   */
  if ((DPos_Sens1_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S427>/If' */

  /* If: '<S428>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S428>/override_enable'
   */
  if ((DigPos_Sens2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S428>/If' */

  /* If: '<S429>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S429>/override_enable'
   */
  if ((DigPos_Sens3_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S429>/If' */

  /* If: '<S430>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S430>/override_enable'
   */
  if ((DigPos_Sens4_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S430>/If' */

  /* If: '<S431>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S431>/override_enable'
   */
  if ((DigPos_Sens5_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S431>/If' */

  /* If: '<S432>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S432>/override_enable'
   */
  if ((CtrlBoard_Temp_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S432>/If' */

  /* If: '<S433>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S433>/override_enable'
   */
  if ((HVBus_Voltage_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S433>/If' */

  /* If: '<S434>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S434>/override_enable'
   */
  if ((Keyed_Voltage_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S434>/If' */

  /* If: '<S435>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S435>/override_enable'
   */
  if ((AD_Input1_Vin_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S435>/If' */

  /* If: '<S436>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S436>/override_enable'
   */
  if ((AD_Input2_Vin_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S436>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S388>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_6365p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_6365p0001,
      &messageObj);
    if ((BaseEngineController_A02_B.s388_ReadCANMessage3_o1 + 1) >
        BaseEngineController_A02_B.s388_ReadCANMessage3_o1)
      BaseEngineController_A02_B.s388_ReadCANMessage3_o1++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      BaseEngineController_A02_B.s388_ReadCANMessage3_o2 = ((real_T) tmp0) /
        ((real_T) 10);
      BaseEngineController_A02_B.s388_ReadCANMessage3_o3 = ((real_T) tmp1) /
        ((real_T) 10);
      BaseEngineController_A02_B.s388_ReadCANMessage3_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_A02_B.s388_ReadCANMessage3_o1 = 0;
    }
  }

  /* If: '<S437>/If' incorporates:
   *  Inport: '<S502>/In1'
   *  Inport: '<S503>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S437>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S437>/override_enable'
   */
  if ((Status4_Age_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S437>/NewValue' incorporates:
     *  ActionPort: '<S502>/Action Port'
     */
    BaseEngineController_A02_B.s437_Merge = (Status4_Age_Count_Ovr_new_DataStore
      ());

    /* End of Outputs for SubSystem: '<S437>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S437>/OldValue' incorporates:
     *  ActionPort: '<S503>/Action Port'
     */
    BaseEngineController_A02_B.s437_Merge =
      BaseEngineController_A02_B.s388_ReadCANMessage3_o1;

    /* End of Outputs for SubSystem: '<S437>/OldValue' */
  }

  /* End of If: '<S437>/If' */

  /* If: '<S438>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S438>/override_enable'
   */
  if ((An_PosSense1_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S438>/If' */

  /* If: '<S439>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S439>/override_enable'
   */
  if ((An_PosSense2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S439>/If' */

  /* If: '<S440>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S440>/override_enable'
   */
  if ((XDRP_Internal_Meas_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S440>/If' */

  /* If: '<S441>/If' incorporates:
   *  Inport: '<S510>/In1'
   *  Inport: '<S511>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S441>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S441>/override_enable'
   */
  if ((Status2_Age_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S441>/NewValue' incorporates:
     *  ActionPort: '<S510>/Action Port'
     */
    BaseEngineController_A02_B.s441_Merge = (Status2_Age_Count_Ovr_new_DataStore
      ());

    /* End of Outputs for SubSystem: '<S441>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S441>/OldValue' incorporates:
     *  ActionPort: '<S511>/Action Port'
     */
    BaseEngineController_A02_B.s441_Merge =
      BaseEngineController_A02_B.s388_ReadCANMessage1_o1;

    /* End of Outputs for SubSystem: '<S441>/OldValue' */
  }

  /* End of If: '<S441>/If' */

  /* If: '<S442>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S442>/override_enable'
   */
  if ((Run_Enable_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S442>/If' */

  /* If: '<S443>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S443>/override_enable'
   */
  if ((NegativeTq_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S443>/If' */

  /* If: '<S444>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S444>/override_enable'
   */
  if ((Generating_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S444>/If' */

  /* If: '<S445>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S445>/override_enable'
   */
  if ((Phoenix_Fault_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S445>/If' */

  /* If: '<S446>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S446>/override_enable'
   */
  if ((TqLimiting_Reason_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S446>/If' */

  /* S-Function Block: <S608>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s608_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_is = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S608>/Product' incorporates:
   *  MinMax: '<S608>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S608>/motohawk_calibration'
   */
  rtb_Abs_is /= (rtb_Abs_is >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_is :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S551>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S551>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S551>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_p = (IsFaultActive(57) || IsFaultActive(58));

  /* Logic: '<S551>/Logical Operator6' */
  rtb_LogicalOperator1_a = !rtb_RelationalOperator5_p;

  /* Logic: '<S551>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S551>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S551>/motohawk_fault_status3'
   */
  rtb_Merge_i5 = (IsFaultSuspected(57) || IsFaultSuspected(58));

  /* S-Function Block: <S384>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_A02_B.s384_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S551>/Data Type Conversion' */
  rtb_DataTypeConversion_f5a = (real_T)
    BaseEngineController_A02_B.s384_motohawk_ain3;

  /* Product: '<S551>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S551>/motohawk_calibration4'
   */
  rtb_Product1_e = rtb_DataTypeConversion_f5a * (SensVoltGain_DataStore());

  /* Sum: '<S551>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S551>/motohawk_calibration5'
   */
  BaseEngineController_A02_B.s551_Sum1 = rtb_Product1_e +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S551>/Unit Delay1' */
  rtb_UnitDelay1_jh = BaseEngineController_A02_DWork.s551_UnitDelay1_DSTATE;

  /* If: '<S551>/If' incorporates:
   *  Logic: '<S551>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_a && rtb_Merge_i5) {
    /* Outputs for IfAction SubSystem: '<S551>/If Action Subsystem' incorporates:
     *  ActionPort: '<S609>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem(rtb_UnitDelay1_jh, &rtb_Merge_l0);

    /* End of Outputs for SubSystem: '<S551>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_p) {
    /* Outputs for IfAction SubSystem: '<S551>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S610>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_l0);

    /* End of Outputs for SubSystem: '<S551>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S551>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S611>/Action Port'
     */
    BaseEngineController_A02_IfActionSubsystem
      (BaseEngineController_A02_B.s551_Sum1, &rtb_Merge_l0);

    /* End of Outputs for SubSystem: '<S551>/If Action Subsystem2' */
  }

  /* End of If: '<S551>/If' */

  /* Sum: '<S613>/Sum1' incorporates:
   *  Constant: '<S613>/Constant'
   *  Product: '<S613>/Product'
   *  Product: '<S613>/Product1'
   *  Sum: '<S613>/Sum'
   *  UnitDelay: '<S613>/Unit Delay'
   */
  rtb_Sum1_d3 = (1.0 - rtb_Abs_is) *
    BaseEngineController_A02_DWork.s613_UnitDelay_DSTATE + rtb_Merge_l0 *
    rtb_Abs_is;

  /* If: '<S612>/If' incorporates:
   *  Inport: '<S614>/In1'
   *  Inport: '<S615>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S612>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S612>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S612>/NewValue' incorporates:
     *  ActionPort: '<S614>/Action Port'
     */
    BaseEngineController_A02_B.s612_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S612>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S612>/OldValue' incorporates:
     *  ActionPort: '<S615>/Action Port'
     */
    BaseEngineController_A02_B.s612_Merge = rtb_Sum1_d3;

    /* End of Outputs for SubSystem: '<S612>/OldValue' */
  }

  /* End of If: '<S612>/If' */

  /* If: '<S657>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S657>/override_enable'
   */
  if ((APP2_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S657>/If' */

  /* Outputs for Enabled SubSystem: '<S379>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S380>/Enable'
   */
  if (rtb_RelationalOperator_hu) {
    /* Outputs for Function Call SubSystem: '<S11>/Diagnostics' */

    /* S-Function Block: <S282>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s282_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_i = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S268>/Logical Operator3' incorporates:
     *  Logic: '<S268>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status10'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status11'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status12'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status13'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status14'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status5'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status6'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status7'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status8'
     *  S-Function (motohawk_sfun_fault_status): '<S268>/motohawk_fault_status9'
     */
    rtb_AboveHiTarget_b = !(IsFaultActive(66) || IsFaultActive(72) ||
      IsFaultActive(67) || IsFaultActive(73) || IsFaultActive(39) ||
      IsFaultActive(40) || IsFaultActive(66) || IsFaultActive(62) ||
      IsFaultActive(63) || IsFaultActive(64) || IsFaultActive(65) ||
      IsFaultActive(68) || IsFaultActive(69) || IsFaultActive(70) ||
      IsFaultActive(71));

    /* RelationalOperator: '<S281>/RelOp' incorporates:
     *  Constant: '<S281>/Constant'
     */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s366_State == 3);

    /* RelationalOperator: '<S268>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s351_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Switch: '<S282>/Switch' incorporates:
     *  Constant: '<S282>/Constant'
     *  Logic: '<S268>/Logical Operator4'
     *  RelationalOperator: '<S268>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S282>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S282>/motohawk_delta_time'
     *  Sum: '<S282>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator1_a &&
        (BaseEngineController_A02_B.s586_Merge > (MAP_IR_HI_DataStore()))) {
      rtb_Product1_e = rtb_motohawk_delta_time_i + MapHiFaultTimer_DataStore();
    } else {
      rtb_Product1_e = 0.0;
    }

    /* End of Switch: '<S282>/Switch' */

    /* RelationalOperator: '<S268>/Relational Operator5' incorporates:
     *  Constant: '<S268>/Constant'
     */
    rtb_RelationalOperator5_g = ((rtb_Product1_e > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S268>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(43, rtb_RelationalOperator5_g);
      UpdateFault(43);
    }

    /* S-Function Block: <S283>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s283_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_kq = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S268>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration6'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s351_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Switch: '<S283>/Switch' incorporates:
     *  Constant: '<S283>/Constant'
     *  Logic: '<S268>/Logical Operator2'
     *  RelationalOperator: '<S268>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_data_read): '<S283>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S283>/motohawk_delta_time'
     *  Sum: '<S283>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator1_a &&
        (BaseEngineController_A02_B.s586_Merge < (MAP_IR_LO_DataStore()))) {
      rtb_Merge_oq = rtb_motohawk_delta_time_kq + MapLoFaultTimer_DataStore();
    } else {
      rtb_Merge_oq = 0.0;
    }

    /* End of Switch: '<S283>/Switch' */

    /* RelationalOperator: '<S268>/Relational Operator6' incorporates:
     *  Constant: '<S268>/Constant1'
     */
    rtb_RelationalOperator6 = ((rtb_Merge_oq > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S268>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(44, rtb_RelationalOperator6);
      UpdateFault(44);
    }

    /* S-Function Block: <S284>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s284_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_iu = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S268>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration8'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s351_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S268>/Add' */
    rtb_Merge_dn = BaseEngineController_A02_B.s305_Sum -
      BaseEngineController_A02_B.s586_Merge;

    /* Switch: '<S284>/Switch' incorporates:
     *  Constant: '<S284>/Constant'
     *  Logic: '<S268>/Logical Operator5'
     *  RelationalOperator: '<S268>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_data_read): '<S284>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S284>/motohawk_delta_time'
     *  Sum: '<S284>/Sum'
     */
    if (rtb_AboveHiTarget_b && rtb_RelOp_oi && rtb_LogicalOperator1_a &&
        (rtb_Merge_dn < (MAP_STUCK_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_iu +
        MapStickFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S284>/Switch' */

    /* RelationalOperator: '<S268>/Relational Operator9' incorporates:
     *  Constant: '<S268>/Constant2'
     */
    rtb_RelationalOperator9_i = ((rtb_motohawk_interpolation_1d3_a > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S268>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(45, rtb_RelationalOperator9_i);
      UpdateFault(45);
    }

    /* Saturate: '<S282>/Saturation' */
    rtb_Saturation_l = rtb_Product1_e >= 16000.0 ? 16000.0 : rtb_Product1_e <=
      0.0 ? 0.0 : rtb_Product1_e;

    /* S-Function (motohawk_sfun_data_write): '<S282>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapHiFaultTimer */
    {
      MapHiFaultTimer_DataStore() = rtb_Saturation_l;
    }

    /* Saturate: '<S283>/Saturation' */
    rtb_Saturation_mk = rtb_Merge_oq >= 16000.0 ? 16000.0 : rtb_Merge_oq <= 0.0 ?
      0.0 : rtb_Merge_oq;

    /* S-Function (motohawk_sfun_data_write): '<S283>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapLoFaultTimer */
    {
      MapLoFaultTimer_DataStore() = rtb_Saturation_mk;
    }

    /* Saturate: '<S284>/Saturation' */
    rtb_Saturation_e = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S284>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapStickFaultTimer */
    {
      MapStickFaultTimer_DataStore() = rtb_Saturation_e;
    }

    /* RelationalOperator: '<S285>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration'
     */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s383_RPMInst >=
                    (BaseRevLimit_DataStore()));

    /* Sum: '<S270>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration1'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) -
      (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S285>/LT1' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s383_RPMInst <=
      rtb_motohawk_interpolation_1d3_a);

    /* CombinatorialLogic: '<S288>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_oi != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled680[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled680[rowidx + 4];
    }

    /* Switch: '<S288>/Switch1' incorporates:
     *  UnitDelay: '<S288>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_RelationalOperator6_k = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_RelationalOperator6_k =
        BaseEngineController_A02_DWork.s288_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S288>/Switch1' */

    /* Switch: '<S285>/Switch2' incorporates:
     *  Logic: '<S285>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration'
     */
    if (!rtb_RelationalOperator6_k) {
      rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore());
    }

    /* End of Switch: '<S285>/Switch2' */

    /* RelationalOperator: '<S270>/Overspeed' */
    rtb_LogicalOperator1_a = (BaseEngineController_A02_B.s383_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S270>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (MediumRevOffset_DataStore());

    /* RelationalOperator: '<S286>/LT' */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s383_RPMInst >=
                    rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S270>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration1'
     */
    rtb_Merge_oq = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S286>/LT1' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s383_RPMInst <=
      rtb_Merge_oq);

    /* CombinatorialLogic: '<S289>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_oi != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled680[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled680[rowidx + 4];
    }

    /* Switch: '<S289>/Switch1' incorporates:
     *  UnitDelay: '<S289>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_LogicalOperator2_l = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_LogicalOperator2_l =
        BaseEngineController_A02_DWork.s289_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S289>/Switch1' */

    /* Switch: '<S286>/Switch2' incorporates:
     *  Logic: '<S286>/Logical Operator'
     */
    if (rtb_LogicalOperator2_l) {
      rtb_motohawk_interpolation_1d3_a = rtb_Merge_oq;
    }

    /* End of Switch: '<S286>/Switch2' */

    /* RelationalOperator: '<S270>/Overspeed1' */
    rtb_RelOp_oi = (BaseEngineController_A02_B.s383_RPMInst >
                    rtb_motohawk_interpolation_1d3_a);

    /* Logic: '<S270>/Logical Operator3' incorporates:
     *  Logic: '<S270>/Logical Operator4'
     */
    rtb_LogicalOperator3_au = ((rtb_LogicalOperator1_a && (!rtb_RelOp_oi)));

    /* S-Function (motohawk_sfun_fault_def): '<S270>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(59, rtb_LogicalOperator3_au);
      UpdateFault(59);
    }

    /* Sum: '<S270>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (HardRevOffset_DataStore());

    /* RelationalOperator: '<S287>/LT' */
    rtb_AboveHiTarget_b = (BaseEngineController_A02_B.s383_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S270>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration1'
     */
    rtb_Merge_oq = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S287>/LT1' */
    rtb_LogicalOperator_ob = (BaseEngineController_A02_B.s383_RPMInst <=
      rtb_Merge_oq);

    /* CombinatorialLogic: '<S290>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_b != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator_ob != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_A02_ConstP.pooled680[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_A02_ConstP.pooled680[rowidx + 4];
    }

    /* Switch: '<S290>/Switch1' incorporates:
     *  UnitDelay: '<S290>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_LogicalOperator10 = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_LogicalOperator10 =
        BaseEngineController_A02_DWork.s290_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S290>/Switch1' */

    /* Switch: '<S287>/Switch2' incorporates:
     *  Logic: '<S287>/Logical Operator'
     */
    if (rtb_LogicalOperator10) {
      rtb_motohawk_interpolation_1d3_a = rtb_Merge_oq;
    }

    /* End of Switch: '<S287>/Switch2' */

    /* RelationalOperator: '<S270>/Overspeed2' */
    rtb_LogicalOperator_ob = (BaseEngineController_A02_B.s383_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Logic: '<S270>/Logical Operator5' incorporates:
     *  Logic: '<S270>/Logical Operator6'
     */
    rtb_LogicalOperator5_nc = ((rtb_RelOp_oi && (!rtb_LogicalOperator_ob)));

    /* S-Function (motohawk_sfun_fault_def): '<S270>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(46, rtb_LogicalOperator5_nc);
      UpdateFault(46);
    }

    /* S-Function (motohawk_sfun_fault_def): '<S270>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(32, rtb_LogicalOperator_ob);
      UpdateFault(32);
    }

    /* RelationalOperator: '<S291>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S291>/motohawk_calibration'
     */
    rtb_LogicalOperator_ob = ((real_T)BaseEngineController_A02_B.s410_Merge >=
      (CAN_Timeout_Phoenix_1_DataStore()));

    /* S-Function (motohawk_sfun_fault_def): '<S291>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: CAN_Timeout_Phoenix_1 */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_LogicalOperator_ob);
      UpdateFault(1);
    }

    /* RelationalOperator: '<S292>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S292>/motohawk_calibration'
     */
    rtb_LogicalOperator_ob = ((real_T)BaseEngineController_A02_B.s441_Merge >=
      (CAN_Timeout_Phoenix_2_DataStore()));

    /* S-Function (motohawk_sfun_fault_def): '<S292>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: CAN_Timeout_Phoenix_2 */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(2, rtb_LogicalOperator_ob);
      UpdateFault(2);
    }

    /* RelationalOperator: '<S293>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration'
     */
    rtb_LogicalOperator_ob = ((real_T)BaseEngineController_A02_B.s419_Merge >=
      (CAN_Timeout_Phoenix_3_DataStore()));

    /* S-Function (motohawk_sfun_fault_def): '<S293>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: CAN_Timeout_Phoenix_3 */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(3, rtb_LogicalOperator_ob);
      UpdateFault(3);
    }

    /* RelationalOperator: '<S294>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration'
     */
    rtb_LogicalOperator_ob = ((real_T)BaseEngineController_A02_B.s437_Merge >=
      (CAN_Timeout_Phoenix_4_DataStore()));

    /* S-Function (motohawk_sfun_fault_def): '<S294>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: CAN_Timeout_Phoenix_4 */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(4, rtb_LogicalOperator_ob);
      UpdateFault(4);
    }

    /* S-Function Block: <S296>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s296_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_p0 = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S272>/Logical Operator3' incorporates:
     *  Logic: '<S272>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S272>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S272>/motohawk_fault_status1'
     */
    rtb_LogicalOperator_ob = !(IsFaultActive(28) || IsFaultActive(29) ||
      rtb_Switch1_p0);

    /* Sum: '<S272>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S272>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = BaseEngineController_A02_B.s348_Sum3 -
      (FuelPres_DeltaTarget_DataStore());

    /* Switch: '<S296>/Switch' incorporates:
     *  Constant: '<S296>/Constant'
     *  Gain: '<S272>/invert'
     *  Logic: '<S272>/Logical Operator4'
     *  RelationalOperator: '<S272>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S272>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S296>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S296>/motohawk_delta_time'
     *  Sum: '<S296>/Sum'
     */
    if (rtb_LogicalOperator_ob && (rtb_motohawk_interpolation_1d3_a <
         -(FuelPres_DeltaTolerance_DataStore()))) {
      rtb_Merge_oq = rtb_motohawk_delta_time_p0 +
        FuelPresLow_FaultTimer_DataStore();
    } else {
      rtb_Merge_oq = 0.0;
    }

    /* End of Switch: '<S296>/Switch' */
    /* RelationalOperator: '<S272>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S272>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_l = ((rtb_Merge_oq > (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S272>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(27, rtb_RelationalOperator5_l);
      UpdateFault(27);
    }

    /* S-Function Block: <S295>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s295_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_iq = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S295>/Switch' incorporates:
     *  Constant: '<S295>/Constant'
     *  Logic: '<S272>/Logical Operator2'
     *  RelationalOperator: '<S272>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S272>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S295>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S295>/motohawk_delta_time'
     *  Sum: '<S295>/Sum'
     */
    if (rtb_LogicalOperator_ob && (rtb_motohawk_interpolation_1d3_a >
         (FuelPres_DeltaTolerance_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_iq +
        FuelPresHigh_FaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S295>/Switch' */

    /* RelationalOperator: '<S272>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S272>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_e = ((rtb_motohawk_interpolation_1d3_a >
      (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S272>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(26, rtb_RelationalOperator2_e);
      UpdateFault(26);
    }

    /* Saturate: '<S295>/Saturation' */
    rtb_Saturation_lo = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S295>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresHigh_FaultTimer */
    {
      FuelPresHigh_FaultTimer_DataStore() = rtb_Saturation_lo;
    }

    /* Saturate: '<S296>/Saturation' */
    rtb_Saturation_n = rtb_Merge_oq >= 16000.0 ? 16000.0 : rtb_Merge_oq <= 0.0 ?
      0.0 : rtb_Merge_oq;

    /* S-Function (motohawk_sfun_data_write): '<S296>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresLow_FaultTimer */
    {
      FuelPresLow_FaultTimer_DataStore() = rtb_Saturation_n;
    }

    /* Logic: '<S265>/Logical Operator3' incorporates:
     *  Logic: '<S265>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S265>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S265>/motohawk_fault_status1'
     */
    rtb_LogicalOperator_ob = !(IsFaultActive(12) || IsFaultActive(13));

    /* RelationalOperator: '<S273>/RelOp' incorporates:
     *  Constant: '<S273>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S265>/motohawk_data_read'
     */
    rtb_RelOp_oi = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S265>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S265>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S265>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_d = ((rtb_LogicalOperator_ob && rtb_RelOp_oi &&
      (BaseEngineController_A02_B.s641_Merge >= (TempOverheat_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S265>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(11, rtb_LogicalOperator2_d);
      UpdateFault(11);
    }

    /* Logic: '<S265>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S265>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S265>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_ez = ((rtb_LogicalOperator_ob && rtb_RelOp_oi &&
      (BaseEngineController_A02_B.s641_Merge >=
       (TempOverheatSevere_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S265>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(14, rtb_LogicalOperator4_ez);
      UpdateFault(14);
    }

    /* S-Function (motohawk_sfun_calibration): '<S265>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_a = (TempOverheat_Warn_DataStore());

    /* Gain: '<S266>/inj//min to inj//hr' incorporates:
     *  DataTypeConversion: '<S266>/Data Type Conversion'
     *  Product: '<S266>/RPM to inj//min'
     *  S-Function (motohawk_sfun_data_read): '<S266>/Number of Combustion Events Per Revolution'
     */
    rtb_Product1_e = BaseEngineController_A02_B.s543_Sum1 * (real_T)((uint8_T)
      CombEventsPerRev_DataStore()) * 60.0;

    /* Gain: '<S274>/Gain' */
    rtb_motohawk_interpolation_1d3_a = 0.01 *
      BaseEngineController_A02_B.s565_Merge;

    /* Gain: '<S266>/g to mg' incorporates:
     *  Constant: '<S274>/ '
     *  Constant: '<S274>/ Ethanol density (g//ml)'
     *  Constant: '<S274>/ Gasoline density (g//ml)'
     *  Product: '<S274>/Product1'
     *  Product: '<S274>/Product2'
     *  Sum: '<S274>/Add'
     *  Sum: '<S274>/Add1'
     */
    rtb_Merge_oq = ((1.0 - rtb_motohawk_interpolation_1d3_a) * 0.737 + 0.789 *
                    rtb_motohawk_interpolation_1d3_a) * 1000.0;
    for (i = 0; i < 8; i++) {
      /* Gain: '<S266>/ml//hr to gal//hr' incorporates:
       *  Product: '<S266>/Mass flow to Volume flow mg//hr to ml//hr'
       *  Product: '<S266>/inj//hr to mg//hr'
       */
      rtb_Switch_o = rtb_Product1_e * BaseEngineController_A02_B.s128_FPC[i] /
        rtb_Merge_oq * 0.00026417205263729591;

      /* RelationalOperator: '<S266>/Relational Operator7' incorporates:
       *  Constant: '<S266>/Min fuel flow  for calc'
       */
      rtb_RelationalOperator7_b[i] = (rtb_Switch_o > 0.1);

      /* Gain: '<S266>/ml//hr to gal//hr' */
      rtb_Product2_e[i] = rtb_Switch_o;
    }

    /* Outputs for Enabled SubSystem: '<S266>/Multiply and Divide, avoiding divde by zero1' incorporates:
     *  EnablePort: '<S276>/Enable'
     */
    if (rtb_RelationalOperator7_b[0] || rtb_RelationalOperator7_b[1] ||
        rtb_RelationalOperator7_b[2] || rtb_RelationalOperator7_b[3] ||
        rtb_RelationalOperator7_b[4] || rtb_RelationalOperator7_b[5] ||
        rtb_RelationalOperator7_b[6] || rtb_RelationalOperator7_b[7]) {
      /* Product: '<S276>/charge mass' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_B.s276_chargemass[i] = rtb_Merge_o4 /
          rtb_Product2_e[i];
      }

      /* End of Product: '<S276>/charge mass' */
    }

    /* End of Outputs for SubSystem: '<S266>/Multiply and Divide, avoiding divde by zero1' */

    /* Switch: '<S266>/Default (if no flow)' incorporates:
     *  Constant: '<S266>/Default value'
     */
    for (i = 0; i < 8; i++) {
      if (rtb_RelationalOperator7_b[i]) {
        BaseEngineController_A02_B.s266_Defaultifnoflow[i] =
          BaseEngineController_A02_B.s276_chargemass[i];
      } else {
        BaseEngineController_A02_B.s266_Defaultifnoflow[i] = 0.0;
      }
    }

    /* End of Switch: '<S266>/Default (if no flow)' */

    /* S-Function Block: <S275>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s275_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_interpolation_1d3_a = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S275>/Product' incorporates:
     *  MinMax: '<S275>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S275>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a /= (rtb_motohawk_interpolation_1d3_a >=
      (FuelEconomy_FilterC_DataStore())) || rtIsNaN
      ((FuelEconomy_FilterC_DataStore())) ? rtb_motohawk_interpolation_1d3_a :
      (FuelEconomy_FilterC_DataStore());

    /* Sum: '<S277>/Sum' incorporates:
     *  Constant: '<S277>/Constant'
     */
    rtb_Product1_e = 1.0 - rtb_motohawk_interpolation_1d3_a;

    /* Sum: '<S277>/Sum1' incorporates:
     *  Product: '<S277>/Product'
     *  Product: '<S277>/Product1'
     *  UnitDelay: '<S277>/Unit Delay'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s277_Sum1[i] =
        BaseEngineController_A02_B.s266_Defaultifnoflow[i] *
        rtb_motohawk_interpolation_1d3_a + rtb_Product1_e *
        BaseEngineController_A02_DWork.s277_UnitDelay_DSTATE[i];
    }

    /* End of Sum: '<S277>/Sum1' */

    /* S-Function Block: <S279>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_DWork.s279_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fr = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S267>/Logical Operator3' incorporates:
     *  Logic: '<S267>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S267>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S267>/motohawk_fault_status1'
     */
    rtb_LogicalOperator1_a = !(IsFaultActive(55) || IsFaultActive(56));

    /* RelationalOperator: '<S278>/RelOp' incorporates:
     *  Constant: '<S278>/Constant'
     */
    rtb_Merge_i5 = (BaseEngineController_A02_B.s366_State == 3);

    /* S-Function Block: <S267>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_a = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_a;
    }

    /* Switch: '<S279>/Switch' incorporates:
     *  Constant: '<S279>/Constant'
     *  Logic: '<S267>/Logical Operator4'
     *  RelationalOperator: '<S267>/Relational Operator2'
     *  S-Function (motohawk_sfun_data_read): '<S279>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S279>/motohawk_delta_time'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S267>/motohawk_interpolation_1d'
     *  Sum: '<S279>/Sum'
     */
    if (rtb_LogicalOperator1_a && rtb_Merge_i5 &&
        (BaseEngineController_A02_B.s604_Merge < rtb_motohawk_interpolation_1d_a))
    {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_fr +
        OilPresFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S279>/Switch' */
    /* RelationalOperator: '<S267>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S267>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_ch = ((rtb_motohawk_interpolation_1d3_a >
      (NoOilPres_FaultTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S267>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(49, rtb_RelationalOperator5_ch);
      UpdateFault(49);
    }

    /* Saturate: '<S279>/Saturation' */
    rtb_Saturation_eu = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S279>/motohawk_data_write' */
    /* Write to Data Storage as scalar: OilPresFaultTimer */
    {
      OilPresFaultTimer_DataStore() = rtb_Saturation_eu;
    }

    /* S-Function Block: <S267>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_a = TableInterpolation1D_real_T
        (BaseEngineController_A02_B.s339_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_a;
    }

    /* S-Function (motohawk_sfun_fault_status): '<S269>/motohawk_fault_status1'
     *
     * Regarding '<S269>/motohawk_fault_status1':
       Status : "Active"
     */
    {
      extern boolean_T IsFaultActive(uint32_T fault);
      rtb_LogicalOperator_ob = IsFaultActive(48);
    }

    /* S-Function (motohawk_sfun_fault_status): '<S269>/motohawk_fault_status2'
     *
     * Regarding '<S269>/motohawk_fault_status2':
       Status : "Active"
     */
    {
      extern boolean_T IsFaultActive(uint32_T fault);
      rtb_LogicalOperator_ob = IsFaultActive(47);
    }

    /* S-Function (motohawk_sfun_fault_status): '<S269>/motohawk_fault_status3'
     *
     * Regarding '<S269>/motohawk_fault_status3':
       Status : "Active"
     */
    {
      extern boolean_T IsFaultActive(uint32_T fault);
      rtb_LogicalOperator_ob = IsFaultActive(10);
    }

    /* S-Function (motohawk_sfun_fault_status): '<S269>/motohawk_fault_status4'
     *
     * Regarding '<S269>/motohawk_fault_status4':
       Status : "Active"
     */
    {
      extern boolean_T IsFaultActive(uint32_T fault);
      rtb_LogicalOperator_ob = IsFaultActive(9);
    }

    /* Logic: '<S269>/Logical Operator' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S269>/motohawk_fault_status'
     */
    rtb_LogicalOperator_ob = !IsFaultActive(2);

    /* Logic: '<S269>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S269>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S269>/motohawk_calibration1'
     */
    rtb_LogicalOperator2_nw = ((rtb_LogicalOperator_ob && (rtb_Merge_l >=
      (Motor_Hot_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S269>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Motor_Hot */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(47, rtb_LogicalOperator2_nw);
      UpdateFault(47);
    }

    /* Logic: '<S269>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S269>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S269>/motohawk_calibration'
     */
    rtb_LogicalOperator1_j = ((rtb_LogicalOperator_ob && (rtb_Merge_l >=
      (Motor_Warm_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S269>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Motor_Warm */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(48, rtb_LogicalOperator1_j);
      UpdateFault(48);
    }

    /* Logic: '<S269>/Logical Operator3' incorporates:
     *  RelationalOperator: '<S269>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S269>/motohawk_calibration2'
     */
    rtb_LogicalOperator3_hf = ((rtb_LogicalOperator_ob &&
      (BaseEngineController_A02_B.s418_Merge >= (Drive_Warm_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S269>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Drive_Warm */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(10, rtb_LogicalOperator3_hf);
      UpdateFault(10);
    }

    /* Logic: '<S269>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S269>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S269>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_h = ((rtb_LogicalOperator_ob &&
      (BaseEngineController_A02_B.s418_Merge >= (Drive_Hot_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S269>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Drive_Hot */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(9, rtb_LogicalOperator4_h);
      UpdateFault(9);
    }

    /* Update for UnitDelay: '<S288>/Unit Delay' */
    BaseEngineController_A02_DWork.s288_UnitDelay_DSTATE =
      rtb_RelationalOperator6_k;

    /* Update for UnitDelay: '<S289>/Unit Delay' */
    BaseEngineController_A02_DWork.s289_UnitDelay_DSTATE =
      rtb_LogicalOperator2_l;

    /* Update for UnitDelay: '<S290>/Unit Delay' */
    BaseEngineController_A02_DWork.s290_UnitDelay_DSTATE = rtb_LogicalOperator10;

    /* Update for UnitDelay: '<S277>/Unit Delay' */
    memcpy((void *)BaseEngineController_A02_DWork.s277_UnitDelay_DSTATE, (void *)
           (&BaseEngineController_A02_B.s277_Sum1[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S11>/Diagnostics' */
  }

  /* UnitDelay: '<S317>/Unit Delay1' */
  rtb_Merge_l = BaseEngineController_A02_DWork.s317_UnitDelay1_DSTATE;

  /* UnitDelay: '<S317>/Unit Delay3' */
  rtb_DesiredLambda_idx_0 =
    BaseEngineController_A02_DWork.s317_UnitDelay3_DSTATE;

  /* UnitDelay: '<S317>/Unit Delay4' */
  rtb_DesiredLambda_idx_1 =
    BaseEngineController_A02_DWork.s317_UnitDelay4_DSTATE;

  /* UnitDelay: '<S318>/Unit Delay1' */
  rtb_DesiredLambda_idx_2 =
    BaseEngineController_A02_DWork.s318_UnitDelay1_DSTATE;

  /* UnitDelay: '<S318>/Unit Delay3' */
  rtb_DesiredLambda_idx_3 =
    BaseEngineController_A02_DWork.s318_UnitDelay3_DSTATE;

  /* UnitDelay: '<S318>/Unit Delay4' */
  rtb_UnitDelay4_g = BaseEngineController_A02_DWork.s318_UnitDelay4_DSTATE;

  /* S-Function Block: <S329>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_DWork.s329_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_bh = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S329>/Sum' incorporates:
   *  Product: '<S329>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S329>/motohawk_delta_time'
   */
  rtb_Abs_is = BaseEngineController_A02_B.s326_TorquetoPower *
    rtb_motohawk_delta_time_bh + BaseEngineController_A02_B.s329_Switch1;

  /* MinMax: '<S331>/MinMax' incorporates:
   *  Constant: '<S326>/Constant'
   */
  rtb_Abs_is = rtb_Abs_is >= 0.0 ? rtb_Abs_is : 0.0;

  /* MinMax: '<S331>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S326>/motohawk_calibration'
   */
  minV = (rtb_Abs_is <= (IndWorkMax_DataStore())) || rtIsNaN
    ((IndWorkMax_DataStore())) ? rtb_Abs_is : (IndWorkMax_DataStore());

  /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_A02_B.s366_State;
  }

  /* Sum: '<S351>/Sum' */
  rtb_Abs_is = BaseEngineController_A02_B.s673_Merge -
    BaseEngineController_A02_B.s690_Merge;

  /* Abs: '<S351>/Abs' */
  rtb_Abs_is = fabs(rtb_Abs_is);

  /* RelationalOperator: '<S351>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_o = ((rtb_Abs_is > (TPS1_TPS2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S351>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_RelationalOperator3_o);
    UpdateFault(74);
  }

  /* Saturate: '<S369>/Saturation' */
  rtb_Saturation_dt = BaseEngineController_A02_B.s369_Sum >= 16000.0 ? 16000.0 :
    BaseEngineController_A02_B.s369_Sum <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s369_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S369>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_dt;
  }

  /* Saturate: '<S371>/Saturation' */
  rtb_Saturation_o = BaseEngineController_A02_B.s371_Switch >= 16000.0 ? 16000.0
    : BaseEngineController_A02_B.s371_Switch <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s371_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S371>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_o;
  }

  /* Saturate: '<S373>/Saturation' */
  rtb_Saturation_ot = BaseEngineController_A02_B.s373_Switch >= 16000.0 ?
    16000.0 : BaseEngineController_A02_B.s373_Switch <= 0.0 ? 0.0 :
    BaseEngineController_A02_B.s373_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S373>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_ot;
  }

  /* Switch: '<S379>/Switch' incorporates:
   *  Constant: '<S379>/Constant2'
   */
  if (rtb_RelationalOperator_hu) {
    rtb_Switch_a = 0U;
  } else {
    rtb_Switch_a = rtb_Sum_l0;
  }

  /* End of Switch: '<S379>/Switch' */

  /* RelationalOperator: '<S389>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S389>/motohawk_calibration'
   */
  rtb_RelationalOperator5_p = ((real_T)BaseEngineController_A02_B.s387_AgeCount >=
                               (CAN_Timeout_112_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S389>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CAN_Timeout_112 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(0, rtb_RelationalOperator5_p);
    UpdateFault(0);
  }

  /* UnitDelay: '<S397>/Unit Delay' */
  BaseEngineController_A02_B.s397_UnitDelay =
    BaseEngineController_A02_DWork.s397_UnitDelay_DSTATE;

  /* RelationalOperator: '<S390>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration'
   */
  rtb_Merge_i5 = (BaseEngineController_A02_B.s397_UnitDelay < (ONTime_DataStore()));

  /* Switch: '<S387>/Switch' incorporates:
   *  Constant: '<S387>/Constant'
   *  Logic: '<S387>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S387>/motohawk_calibration'
   */
  if ((Disable_ESTOP_DataStore()) > 0.0) {
    rtb_LogicalOperator1_a = TRUE;
  } else {
    rtb_LogicalOperator1_a = !rtb_GensetEnable;
  }

  /* End of Switch: '<S387>/Switch' */

  /* MATLAB Function Block: '<S387>/MATLAB Function' */

  /* MATLAB Function 'Foreground/Inputs/CAN Inputs/112/MATLAB Function': '<S391>:1' */
  if (rtb_Merge_i5 == TRUE) {
    /* '<S391>:1:3' */
    /* '<S391>:1:4' */
    rtb_Product1_e = 0.0;
  } else if (rtb_LogicalOperator1_a == FALSE) {
    /* '<S391>:1:5' */
    /* '<S391>:1:6' */
    rtb_Product1_e = 0.0;
  } else {
    /* '<S391>:1:8' */
    rtb_Product1_e = 1.0;
  }

  /* End of MATLAB Function Block: '<S387>/MATLAB Function' */

  /* DataTypeConversion: '<S387>/Data Type Conversion2' */
  rtb_RelationalOperator5_p = (rtb_Product1_e != 0.0);

  /* S-Function (motohawk_sfun_data_write): '<S387>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ESTOP */
  {
    ESTOP_DataStore() = rtb_RelationalOperator5_p;
  }

  /* S-Function Block: <S397>/motohawk_delta_time */
  rtb_motohawk_delta_time_ae = 0.005;

  /* Sum: '<S397>/Sum' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S397>/motohawk_delta_time'
   */
  rtb_DesiredLambda_idx = rtb_motohawk_delta_time_ae +
    BaseEngineController_A02_B.s397_UnitDelay;

  /* MATLAB Function Block: '<S388>/Power Estimator' */

  /* MATLAB Function 'Foreground/Inputs/CAN Inputs/Phoenix/Power Estimator': '<S409>:1' */
  /* '<S409>:1:3' */
  rtb_Product1_e = rtb_Sum1_ix * 0.737562149 * rtb_Merge_c5 / 5252.0;

  /* '<S409>:1:4' */
  BaseEngineController_A02_B.s409_kw = rtb_Product1_e * 0.7457;
  BaseEngineController_A02_B.s409_hp = rtb_Product1_e;

  /* Logic: '<S522>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S522>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S522>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S522>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_m = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s382_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S522>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(37, rtb_LogicalOperator2_m);
    UpdateFault(37);
  }

  /* Logic: '<S522>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S522>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S522>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S522>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_h = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s382_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S522>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(38, rtb_LogicalOperator3_h);
    UpdateFault(38);
  }

  /* RelationalOperator: '<S383>/Relational Operator' incorporates:
   *  Constant: '<S383>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S383>/motohawk_calibration'
   */
  rtb_RelationalOperator_mm = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S383>/motohawk_encoder_pseudo */
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

  /* DataTypeConversion: '<S383>/Data Type Conversion3' incorporates:
   *  Gain: '<S383>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S383>/motohawk_calibration1'
   */
  rtb_Switch_o = 16.0 * (EngineToEncoderOffset_DataStore());
  if (rtIsNaN(rtb_Switch_o) || rtIsInf(rtb_Switch_o)) {
    rtb_Switch_o = 0.0;
  } else {
    rtb_Product1_e = rtb_Switch_o < 0.0 ? ceil(rtb_Switch_o) : floor
      (rtb_Switch_o);
    rtb_Switch_o = fmod(rtb_Product1_e, 65536.0);
  }

  rtb_DataTypeConversion3_p = (int16_T)(rtb_Switch_o < 0.0 ? (int16_T)-(int16_T)
                                        (uint16_T)-rtb_Switch_o : (int16_T)
    (uint16_T)rtb_Switch_o);

  /* End of DataTypeConversion: '<S383>/Data Type Conversion3' */
  /* S-Function Block: <S383>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_p;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S539>/RelOp' incorporates:
   *  Constant: '<S539>/Constant'
   */
  rtb_RelationalOperator5_p = (BaseEngineController_A02_B.s542_Sum > 100U);

  /* S-Function Block: <S383>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_A02_B.s383_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S535>/Logical Operator' incorporates:
   *  Constant: '<S541>/Constant'
   *  RelationalOperator: '<S541>/RelOp'
   */
  rtb_LogicalOperator_kt = ((rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s383_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S535>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_LogicalOperator_kt);
    UpdateFault(8);
  }

  /* Logic: '<S535>/Logical Operator1' incorporates:
   *  Constant: '<S540>/Constant'
   *  RelationalOperator: '<S540>/RelOp'
   */
  rtb_LogicalOperator1_hh = ((rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s383_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S535>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_LogicalOperator1_hh);
    UpdateFault(7);
  }

  /* Logic: '<S535>/Logical Operator2' incorporates:
   *  Constant: '<S537>/Constant'
   *  RelationalOperator: '<S537>/RelOp'
   */
  rtb_LogicalOperator2_nh = ((rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s383_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S535>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator2_nh);
    UpdateFault(5);
  }

  /* Logic: '<S535>/Logical Operator3' incorporates:
   *  Constant: '<S538>/Constant'
   *  RelationalOperator: '<S538>/RelOp'
   */
  rtb_LogicalOperator3_ho = ((rtb_RelationalOperator5_p &&
    (BaseEngineController_A02_B.s383_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S535>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_LogicalOperator3_ho);
    UpdateFault(6);
  }

  /* S-Function Block: <S383>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_A02_B.s383_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S544>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S544>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S544>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_is = ((MPRD_DataStore() && (rtb_DataTypeConversion_e >
    (EGRSenseInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S544>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: EGRSenseRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_LogicalOperator2_is);
    UpdateFault(15);
  }

  /* Logic: '<S544>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S544>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S544>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_o = ((MPRD_DataStore() && (rtb_DataTypeConversion_e <
    (EGRSenseInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S544>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: EGRSenseRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_LogicalOperator3_o);
    UpdateFault(16);
  }

  /* Logic: '<S545>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S545>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S545>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_mq = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s384_Gain > (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S545>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator2_mq);
    UpdateFault(30);
  }

  /* Logic: '<S545>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S545>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S545>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_a5 = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s384_Gain < (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S545>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(31, rtb_LogicalOperator3_a5);
    UpdateFault(31);
  }

  /* Logic: '<S546>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S546>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S546>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S546>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_it = ((MPRD_DataStore() && (rtb_Abs_b >
    (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S546>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_LogicalOperator2_it);
    UpdateFault(28);
  }

  /* Logic: '<S546>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S546>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S546>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S546>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_fk = ((MPRD_DataStore() && (rtb_Abs_b <
    (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S546>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_LogicalOperator3_fk);
    UpdateFault(29);
  }

  /* Logic: '<S547>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S547>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S547>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S547>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ir = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s549_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S547>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(39, rtb_LogicalOperator2_ir);
    UpdateFault(39);
  }

  /* Logic: '<S547>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S547>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S547>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S547>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_k = ((MPRD_DataStore() &&
    (BaseEngineController_A02_B.s549_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S547>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(40, rtb_LogicalOperator3_k);
    UpdateFault(40);
  }

  /* Logic: '<S548>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S548>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S548>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S548>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_bq = ((MPRD_DataStore() && (rtb_DataTypeConversion_ff >
    (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S548>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(41, rtb_LogicalOperator2_bq);
    UpdateFault(41);
  }

  /* Logic: '<S548>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S548>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S548>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S548>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_ff <
    (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S548>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(42, rtb_LogicalOperator3_p);
    UpdateFault(42);
  }

  /* Logic: '<S550>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S550>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S550>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S550>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_a = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_f5 > (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S550>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(55, rtb_LogicalOperator2_a);
    UpdateFault(55);
  }

  /* Logic: '<S550>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S550>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S550>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S550>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_c = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_f5 < (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S550>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(56, rtb_LogicalOperator3_c);
    UpdateFault(56);
  }

  /* Logic: '<S551>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S551>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S551>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S551>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_f5a >
    (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S551>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(57, rtb_LogicalOperator2_p);
    UpdateFault(57);
  }

  /* Logic: '<S551>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S551>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S551>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S551>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_g = ((MPRD_DataStore() && (rtb_DataTypeConversion_f5a <
    (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S551>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(58, rtb_LogicalOperator3_g);
    UpdateFault(58);
  }

  /* Logic: '<S552>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S552>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S552>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S552>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_n1 = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_kk > (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S552>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_LogicalOperator2_n1);
    UpdateFault(60);
  }

  /* Logic: '<S552>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S552>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S552>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S552>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_i = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_kk < (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S552>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_LogicalOperator3_i);
    UpdateFault(61);
  }

  /* Logic: '<S624>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S624>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S624>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S624>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p0 = ((MPRD_DataStore() && (rtb_DataTypeConversion_m >
    (O2_PostCatMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S624>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: O2_PostCatRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(53, rtb_LogicalOperator2_p0);
    UpdateFault(53);
  }

  /* Logic: '<S624>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S624>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S624>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S624>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_pg = ((MPRD_DataStore() && (rtb_DataTypeConversion_m <
    (O2_PostCatMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S624>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: O2_PostCatRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(54, rtb_LogicalOperator3_pg);
    UpdateFault(54);
  }

  /* RelationalOperator: '<S660>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S660>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_i = ((BaseEngineController_A02_B.s655_Switch >
    (TPS1InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S660>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(66, rtb_RelationalOperator5_i);
    UpdateFault(66);
  }

  /* RelationalOperator: '<S660>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S660>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_o = ((BaseEngineController_A02_B.s655_Switch <
    (TPS1InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S660>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(67, rtb_RelationalOperator4_o);
    UpdateFault(67);
  }

  /* RelationalOperator: '<S660>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration9'
   */
  rtb_RelationalOperator_f = ((BaseEngineController_A02_B.s659_MinMax >
    (TPS1Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S660>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS1AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(64, rtb_RelationalOperator_f);
    UpdateFault(64);
  }

  /* RelationalOperator: '<S660>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_f1 = ((BaseEngineController_A02_B.s659_MinMax1 >
    (TPS1Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S660>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_RelationalOperator3_f1);
    UpdateFault(62);
  }

  /* RelationalOperator: '<S660>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_b = ((BaseEngineController_A02_B.s659_MinMax1 <
    (TPS1Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S660>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_RelationalOperator2_b);
    UpdateFault(63);
  }

  /* RelationalOperator: '<S660>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_kg = ((BaseEngineController_A02_B.s659_MinMax <
    (TPS1Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S660>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS1AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(65, rtb_RelationalOperator1_kg);
    UpdateFault(65);
  }

  /* UnitDelay: '<S666>/Unit Delay1' */
  rtb_Abs_is = BaseEngineController_A02_DWork.s666_UnitDelay1_DSTATE;

  /* UnitDelay: '<S666>/Unit Delay' */
  rtb_Merge_oq = BaseEngineController_A02_DWork.s666_UnitDelay_DSTATE;

  /* UnitDelay: '<S666>/Unit Delay3' */
  rtb_Merge_dn = BaseEngineController_A02_DWork.s666_UnitDelay3_DSTATE;

  /* UnitDelay: '<S666>/Unit Delay4' */
  rtb_Merge_o4 = BaseEngineController_A02_DWork.s666_UnitDelay4_DSTATE;

  /* MinMax: '<S666>/MinMax1' incorporates:
   *  UnitDelay: '<S666>/Unit Delay'
   *  UnitDelay: '<S666>/Unit Delay3'
   *  UnitDelay: '<S666>/Unit Delay4'
   */
  rtb_Product1_e = (rtb_Abs_is <=
                    BaseEngineController_A02_DWork.s666_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_A02_DWork.s666_UnitDelay_DSTATE) ? rtb_Abs_is :
    BaseEngineController_A02_DWork.s666_UnitDelay_DSTATE;
  rtb_Product1_e = (rtb_Product1_e <=
                    BaseEngineController_A02_DWork.s666_UnitDelay3_DSTATE) ||
    rtIsNaN(BaseEngineController_A02_DWork.s666_UnitDelay3_DSTATE) ?
    rtb_Product1_e : BaseEngineController_A02_DWork.s666_UnitDelay3_DSTATE;
  rtb_Product1_e = (rtb_Product1_e <=
                    BaseEngineController_A02_DWork.s666_UnitDelay4_DSTATE) ||
    rtIsNaN(BaseEngineController_A02_DWork.s666_UnitDelay4_DSTATE) ?
    rtb_Product1_e : BaseEngineController_A02_DWork.s666_UnitDelay4_DSTATE;
  rtb_Product1_e = (rtb_Product1_e <= BaseEngineController_A02_B.s655_Switch) ||
    rtIsNaN(BaseEngineController_A02_B.s655_Switch) ? rtb_Product1_e :
    BaseEngineController_A02_B.s655_Switch;

  /* RelationalOperator: '<S664>/Relational Operator9' incorporates:
   *  MinMax: '<S666>/MinMax1'
   */
  rtb_LogicalOperator1_a = (rtb_Product1_e >
    BaseEngineController_A02_B.s659_MinMax1);

  /* RelationalOperator: '<S664>/Relational Operator5' incorporates:
   *  MinMax: '<S666>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_p = (rtb_Product1_e <= (TPS1Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S664>/Relational Operator6' incorporates:
   *  MinMax: '<S666>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_k = (rtb_Product1_e >= (TPS1Adapt_Hi_Min_DataStore()));

  /* Sum: '<S664>/Sum2' incorporates:
   *  MinMax: '<S666>/MinMax1'
   */
  rtb_Abs_b = rtb_Product1_e - BaseEngineController_A02_B.s659_MinMax1;

  /* Abs: '<S664>/Abs' */
  rtb_Abs_b = fabs(rtb_Abs_b);

  /* Outputs for Enabled SubSystem: '<S664>/Store Current Position' incorporates:
   *  EnablePort: '<S667>/Enable'
   */
  /* Logic: '<S664>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S664>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
      rtb_RelationalOperator6_k && (TPS1AdaptHiEnable_DataStore()) && (rtb_Abs_b
       > (TPS1Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S667>/Data Type Conversion2' incorporates:
     *  MinMax: '<S666>/MinMax1'
     */
    if (rtb_Product1_e < 65536.0) {
      if (rtb_Product1_e >= 0.0) {
        rtb_DataTypeConversion2_m = (uint16_T)rtb_Product1_e;
      } else {
        rtb_DataTypeConversion2_m = 0U;
      }
    } else {
      rtb_DataTypeConversion2_m = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S667>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S667>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Hi */
    {
      TPS1Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_m;
    }
  }

  /* End of Logic: '<S664>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S664>/Store Current Position' */

  /* MinMax: '<S666>/MinMax' */
  rtb_Product1_e = (BaseEngineController_A02_B.s655_Switch >= rtb_Merge_o4) ||
    rtIsNaN(rtb_Merge_o4) ? BaseEngineController_A02_B.s655_Switch :
    rtb_Merge_o4;
  rtb_Product1_e = (rtb_Product1_e >= rtb_Merge_dn) || rtIsNaN(rtb_Merge_dn) ?
    rtb_Product1_e : rtb_Merge_dn;
  rtb_Product1_e = (rtb_Product1_e >= rtb_Merge_oq) || rtIsNaN(rtb_Merge_oq) ?
    rtb_Product1_e : rtb_Merge_oq;
  rtb_Product1_e = (rtb_Product1_e >= rtb_Abs_is) || rtIsNaN(rtb_Abs_is) ?
    rtb_Product1_e : rtb_Abs_is;

  /* RelationalOperator: '<S665>/Relational Operator9' incorporates:
   *  MinMax: '<S666>/MinMax'
   */
  rtb_LogicalOperator1_a = (rtb_Product1_e <
    BaseEngineController_A02_B.s659_MinMax);

  /* RelationalOperator: '<S665>/Relational Operator5' incorporates:
   *  MinMax: '<S666>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_p = (rtb_Product1_e <= (TPS1Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S665>/Relational Operator6' incorporates:
   *  MinMax: '<S666>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_k = (rtb_Product1_e >= (TPS1Adapt_Low_Min_DataStore()));

  /* Sum: '<S665>/Sum2' incorporates:
   *  MinMax: '<S666>/MinMax'
   */
  rtb_Abs_is = rtb_Product1_e - BaseEngineController_A02_B.s659_MinMax;

  /* Abs: '<S665>/Abs' */
  rtb_Abs_is = fabs(rtb_Abs_is);

  /* Logic: '<S665>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S665>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration14'
   */
  rtb_LogicalOperator1_a = (rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
    rtb_RelationalOperator6_k && (TPS1AdaptLoEnable_DataStore()) && (rtb_Abs_is >
                             (TPS1Adapt_Delta_DataStore())));

  /* Outputs for Enabled SubSystem: '<S665>/Store Current Position' incorporates:
   *  EnablePort: '<S668>/Enable'
   */
  /* Logic: '<S665>/Logical Operator2' incorporates:
   *  Logic: '<S665>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S386>/motohawk_data_read'
   */
  if (rtb_LogicalOperator1_a || (rtb_RelationalOperator5_p &&
       rtb_RelationalOperator6_k && (TPS1AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S668>/Data Type Conversion2' incorporates:
     *  MinMax: '<S666>/MinMax'
     */
    if (rtb_Product1_e < 65536.0) {
      if (rtb_Product1_e >= 0.0) {
        rtb_DataTypeConversion2_lz = (uint16_T)rtb_Product1_e;
      } else {
        rtb_DataTypeConversion2_lz = 0U;
      }
    } else {
      rtb_DataTypeConversion2_lz = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S668>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S668>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Low */
    {
      TPS1Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_lz;
    }
  }

  /* End of Logic: '<S665>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S665>/Store Current Position' */

  /* RelationalOperator: '<S677>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S677>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_c = ((BaseEngineController_A02_B.s656_Switch >
    (TPS2InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S677>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(72, rtb_RelationalOperator5_c);
    UpdateFault(72);
  }

  /* RelationalOperator: '<S677>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S677>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_f = ((BaseEngineController_A02_B.s656_Switch <
    (TPS2InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S677>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_RelationalOperator4_f);
    UpdateFault(73);
  }

  /* RelationalOperator: '<S677>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration9'
   */
  rtb_RelationalOperator_a1 = ((BaseEngineController_A02_B.s676_MinMax >
    (TPS2Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S677>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS2AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(70, rtb_RelationalOperator_a1);
    UpdateFault(70);
  }

  /* RelationalOperator: '<S677>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_bm = ((BaseEngineController_A02_B.s676_MinMax1 >
    (TPS2Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S677>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(68, rtb_RelationalOperator3_bm);
    UpdateFault(68);
  }

  /* RelationalOperator: '<S677>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_ly = ((BaseEngineController_A02_B.s676_MinMax1 <
    (TPS2Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S677>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(69, rtb_RelationalOperator2_ly);
    UpdateFault(69);
  }

  /* RelationalOperator: '<S677>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_i = ((BaseEngineController_A02_B.s676_MinMax <
    (TPS2Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S677>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS2AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(71, rtb_RelationalOperator1_i);
    UpdateFault(71);
  }

  /* UnitDelay: '<S683>/Unit Delay1' */
  rtb_Abs_is = BaseEngineController_A02_DWork.s683_UnitDelay1_DSTATE;

  /* UnitDelay: '<S683>/Unit Delay' */
  rtb_Merge_c5 = BaseEngineController_A02_DWork.s683_UnitDelay_DSTATE;

  /* UnitDelay: '<S683>/Unit Delay3' */
  rtb_Product4_l = BaseEngineController_A02_DWork.s683_UnitDelay3_DSTATE;

  /* UnitDelay: '<S683>/Unit Delay4' */
  rtb_Switch_o = BaseEngineController_A02_DWork.s683_UnitDelay4_DSTATE;

  /* MinMax: '<S683>/MinMax1' incorporates:
   *  UnitDelay: '<S683>/Unit Delay'
   *  UnitDelay: '<S683>/Unit Delay3'
   *  UnitDelay: '<S683>/Unit Delay4'
   */
  rtb_Product1_e = (rtb_Abs_is <=
                    BaseEngineController_A02_DWork.s683_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_A02_DWork.s683_UnitDelay_DSTATE) ? rtb_Abs_is :
    BaseEngineController_A02_DWork.s683_UnitDelay_DSTATE;
  rtb_Product1_e = (rtb_Product1_e <=
                    BaseEngineController_A02_DWork.s683_UnitDelay3_DSTATE) ||
    rtIsNaN(BaseEngineController_A02_DWork.s683_UnitDelay3_DSTATE) ?
    rtb_Product1_e : BaseEngineController_A02_DWork.s683_UnitDelay3_DSTATE;
  rtb_Product1_e = (rtb_Product1_e <=
                    BaseEngineController_A02_DWork.s683_UnitDelay4_DSTATE) ||
    rtIsNaN(BaseEngineController_A02_DWork.s683_UnitDelay4_DSTATE) ?
    rtb_Product1_e : BaseEngineController_A02_DWork.s683_UnitDelay4_DSTATE;
  rtb_Product1_e = (rtb_Product1_e <= BaseEngineController_A02_B.s656_Switch) ||
    rtIsNaN(BaseEngineController_A02_B.s656_Switch) ? rtb_Product1_e :
    BaseEngineController_A02_B.s656_Switch;

  /* RelationalOperator: '<S681>/Relational Operator9' incorporates:
   *  MinMax: '<S683>/MinMax1'
   */
  rtb_LogicalOperator1_a = (rtb_Product1_e >
    BaseEngineController_A02_B.s676_MinMax1);

  /* RelationalOperator: '<S681>/Relational Operator5' incorporates:
   *  MinMax: '<S683>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_p = (rtb_Product1_e <= (TPS2Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S681>/Relational Operator6' incorporates:
   *  MinMax: '<S683>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_k = (rtb_Product1_e >= (TPS2Adapt_Hi_Min_DataStore()));

  /* Sum: '<S681>/Sum2' incorporates:
   *  MinMax: '<S683>/MinMax1'
   */
  rtb_Abs_b = rtb_Product1_e - BaseEngineController_A02_B.s676_MinMax1;

  /* Abs: '<S681>/Abs' */
  rtb_Abs_b = fabs(rtb_Abs_b);

  /* Outputs for Enabled SubSystem: '<S681>/Store Current Position' incorporates:
   *  EnablePort: '<S684>/Enable'
   */
  /* Logic: '<S681>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S681>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S676>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S676>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
      rtb_RelationalOperator6_k && (TPS2AdaptHiEnable_DataStore()) && (rtb_Abs_b
       > (TPS2Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S684>/Data Type Conversion2' incorporates:
     *  MinMax: '<S683>/MinMax1'
     */
    if (rtb_Product1_e < 65536.0) {
      if (rtb_Product1_e >= 0.0) {
        rtb_DataTypeConversion2_h = (uint16_T)rtb_Product1_e;
      } else {
        rtb_DataTypeConversion2_h = 0U;
      }
    } else {
      rtb_DataTypeConversion2_h = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S684>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S684>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Hi */
    {
      TPS2Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_h;
    }
  }

  /* End of Logic: '<S681>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S681>/Store Current Position' */

  /* MinMax: '<S683>/MinMax' */
  rtb_Product1_e = (BaseEngineController_A02_B.s656_Switch >= rtb_Switch_o) ||
    rtIsNaN(rtb_Switch_o) ? BaseEngineController_A02_B.s656_Switch :
    rtb_Switch_o;
  rtb_Product1_e = (rtb_Product1_e >= rtb_Product4_l) || rtIsNaN(rtb_Product4_l)
    ? rtb_Product1_e : rtb_Product4_l;
  rtb_Product1_e = (rtb_Product1_e >= rtb_Merge_c5) || rtIsNaN(rtb_Merge_c5) ?
    rtb_Product1_e : rtb_Merge_c5;
  rtb_Product1_e = (rtb_Product1_e >= rtb_Abs_is) || rtIsNaN(rtb_Abs_is) ?
    rtb_Product1_e : rtb_Abs_is;

  /* RelationalOperator: '<S682>/Relational Operator9' incorporates:
   *  MinMax: '<S683>/MinMax'
   */
  rtb_LogicalOperator1_a = (rtb_Product1_e <
    BaseEngineController_A02_B.s676_MinMax);

  /* RelationalOperator: '<S682>/Relational Operator5' incorporates:
   *  MinMax: '<S683>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_p = (rtb_Product1_e <= (TPS2Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S682>/Relational Operator6' incorporates:
   *  MinMax: '<S683>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_k = (rtb_Product1_e >= (TPS2Adapt_Low_Min_DataStore()));

  /* Sum: '<S682>/Sum2' incorporates:
   *  MinMax: '<S683>/MinMax'
   */
  rtb_Abs_is = rtb_Product1_e - BaseEngineController_A02_B.s676_MinMax;

  /* Abs: '<S682>/Abs' */
  rtb_Abs_is = fabs(rtb_Abs_is);

  /* Outputs for Enabled SubSystem: '<S682>/Store Current Position' incorporates:
   *  EnablePort: '<S685>/Enable'
   */
  /* Logic: '<S682>/Logical Operator2' incorporates:
   *  Logic: '<S682>/Logical Operator1'
   *  Logic: '<S682>/Logical Operator4'
   *  RelationalOperator: '<S682>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S676>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S676>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_data_read): '<S386>/motohawk_data_read'
   */
  if ((rtb_LogicalOperator1_a && rtb_RelationalOperator5_p &&
       rtb_RelationalOperator6_k && (TPS2AdaptLoEnable_DataStore()) &&
       (rtb_Abs_is > (TPS2Adapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_p && rtb_RelationalOperator6_k &&
       (TPS2AdaptLoEnable_DataStore()) && TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S685>/Data Type Conversion2' incorporates:
     *  MinMax: '<S683>/MinMax'
     */
    if (rtb_Product1_e < 65536.0) {
      if (rtb_Product1_e >= 0.0) {
        rtb_DataTypeConversion2_n = (uint16_T)rtb_Product1_e;
      } else {
        rtb_DataTypeConversion2_n = 0U;
      }
    } else {
      rtb_DataTypeConversion2_n = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S685>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S685>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Low */
    {
      TPS2Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_n;
    }
  }

  /* End of Logic: '<S682>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S682>/Store Current Position' */

  /* Update for UnitDelay: '<S550>/Unit Delay1' */
  BaseEngineController_A02_DWork.s550_UnitDelay1_DSTATE = rtb_Merge_bw;

  /* Update for UnitDelay: '<S605>/Unit Delay' */
  BaseEngineController_A02_DWork.s605_UnitDelay_DSTATE = rtb_Sum1_i;

  /* Update for UnitDelay: '<S543>/Unit Delay' */
  BaseEngineController_A02_DWork.s543_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s543_Sum1;

  /* Update for UnitDelay: '<S347>/Unit Delay' */
  BaseEngineController_A02_DWork.s347_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s366_State;

  /* Update for UnitDelay: '<S447>/Unit Delay' */
  BaseEngineController_A02_DWork.s447_UnitDelay_DSTATE = rtb_Sum1_ix;

  /* Update for UnitDelay: '<S552>/Unit Delay1' */
  BaseEngineController_A02_DWork.s552_UnitDelay1_DSTATE = rtb_Merge_cs;

  /* Update for UnitDelay: '<S621>/Unit Delay' */
  BaseEngineController_A02_DWork.s621_UnitDelay_DSTATE = rtb_Sum1_gj;

  /* Update for UnitDelay: '<S669>/Unit Delay' */
  BaseEngineController_A02_DWork.s669_UnitDelay_DSTATE = rtb_Sum1_m2;

  /* Update for UnitDelay: '<S662>/Unit Delay1' */
  BaseEngineController_A02_DWork.s662_UnitDelay1_DSTATE = rtb_Merge_h;

  /* Update for UnitDelay: '<S686>/Unit Delay' */
  BaseEngineController_A02_DWork.s686_UnitDelay_DSTATE = rtb_Sum1_dp;

  /* Update for UnitDelay: '<S679>/Unit Delay1' */
  BaseEngineController_A02_DWork.s679_UnitDelay1_DSTATE = rtb_Merge_p;

  /* Update for UnitDelay: '<S349>/Unit Delay' */
  BaseEngineController_A02_DWork.s349_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s630_Merge;

  /* Update for UnitDelay: '<S624>/Unit Delay' */
  BaseEngineController_A02_DWork.s624_UnitDelay_DSTATE = rtb_Merge_dh;

  /* Update for UnitDelay: '<S632>/Unit Delay' */
  BaseEngineController_A02_DWork.s632_UnitDelay_DSTATE = rtb_Sum1_kq;

  /* Update for UnitDelay: '<S548>/Unit Delay1' */
  BaseEngineController_A02_DWork.s548_UnitDelay1_DSTATE = rtb_Merge_pk;

  /* Update for UnitDelay: '<S305>/Unit Delay' */
  BaseEngineController_A02_DWork.s305_UnitDelay_DSTATE = rtb_Merge_kp;

  /* Update for UnitDelay: '<S547>/Unit Delay1' */
  BaseEngineController_A02_DWork.s547_UnitDelay1_DSTATE = rtb_Merge_bn;

  /* Update for UnitDelay: '<S587>/Unit Delay' */
  BaseEngineController_A02_DWork.s587_UnitDelay_DSTATE = rtb_Sum1_pb;

  /* Update for UnitDelay: '<S522>/Unit Delay' */
  BaseEngineController_A02_DWork.s522_UnitDelay_DSTATE = rtb_Merge_j;

  /* Update for UnitDelay: '<S530>/Unit Delay' */
  BaseEngineController_A02_DWork.s530_UnitDelay_DSTATE = rtb_Sum1_f;

  /* Update for UnitDelay: '<S317>/Unit Delay2' */
  BaseEngineController_A02_DWork.s317_UnitDelay2_DSTATE = rtb_Merge_l;

  /* Update for UnitDelay: '<S320>/Unit Delay' */
  BaseEngineController_A02_DWork.s320_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s320_Sum1;

  /* Update for UnitDelay: '<S318>/Unit Delay2' */
  BaseEngineController_A02_DWork.s318_UnitDelay2_DSTATE =
    rtb_DesiredLambda_idx_2;

  /* Update for UnitDelay: '<S323>/Unit Delay' */
  BaseEngineController_A02_DWork.s323_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s323_Sum1;

  /* Update for UnitDelay: '<S316>/Unit Delay' */
  BaseEngineController_A02_DWork.s316_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s334_MinMax1;

  /* Update for UnitDelay: '<S363>/Unit Delay' */
  BaseEngineController_A02_DWork.s363_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s543_Sum1;

  /* Update for UnitDelay: '<S365>/Unit Delay' */
  BaseEngineController_A02_DWork.s365_UnitDelay_DSTATE =
    BaseEngineController_A02_B.s365_Sum1;

  /* Update for UnitDelay: '<S570>/Unit Delay' */
  BaseEngineController_A02_DWork.s570_UnitDelay_DSTATE = rtb_Sum2_n;

  /* Update for UnitDelay: '<S545>/Unit Delay1' */
  BaseEngineController_A02_DWork.s545_UnitDelay1_DSTATE = rtb_Merge_k1;

  /* Update for UnitDelay: '<S569>/Unit Delay' */
  BaseEngineController_A02_DWork.s569_UnitDelay_DSTATE = rtb_Sum1_da;

  /* Update for UnitDelay: '<S567>/Unit Delay' */
  BaseEngineController_A02_DWork.s567_UnitDelay_DSTATE = rtb_Merge_k1;

  /* Update for UnitDelay: '<S567>/Unit Delay1' */
  BaseEngineController_A02_DWork.s567_UnitDelay1_DSTATE = rtb_UnitDelay_li;

  /* Update for UnitDelay: '<S567>/Unit Delay2' */
  BaseEngineController_A02_DWork.s567_UnitDelay2_DSTATE = rtb_UnitDelay1_e;

  /* Update for Enabled SubSystem: '<S15>/Run' incorporates:
   *  Update for EnablePort: '<S129>/Enable'
   */
  if (BaseEngineController_A02_DWork.s15_Run_MODE) {
    /* Update for UnitDelay: '<S151>/Unit Delay' */
    BaseEngineController_A02_DWork.s151_UnitDelay_DSTATE = rtb_Sum1_a;

    /* Update for UnitDelay: '<S150>/Unit Delay' */
    BaseEngineController_A02_DWork.s150_UnitDelay_DSTATE =
      BaseEngineController_A02_B.s543_Sum1;

    /* Update for UnitDelay: '<S150>/Unit Delay1' */
    BaseEngineController_A02_DWork.s150_UnitDelay1_DSTATE = rtb_Torque;
  }

  /* End of Update for SubSystem: '<S15>/Run' */

  /* Update for UnitDelay: '<S544>/Unit Delay1' */
  BaseEngineController_A02_DWork.s544_UnitDelay1_DSTATE = rtb_Merge_n;

  /* Update for UnitDelay: '<S558>/Unit Delay' */
  BaseEngineController_A02_DWork.s558_UnitDelay_DSTATE = rtb_Sum1_i5;

  /* Update for S-Function (motohawk_sfun_dout): '<S700>/motohawk_dout' */

  /* S-Function Block: DOut7679p0004 */
  {
    DOut7679p0004_DiscreteOutput_Set
      (BaseEngineController_A02_B.s806_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S701>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_n,
    rtb_DataTypeConversion4_k, 0, 1);

  /* Update for UnitDelay: '<S81>/Unit Delay' */
  BaseEngineController_A02_DWork.s81_UnitDelay_DSTATE = rtb_Merge_hk;

  /* Update for UnitDelay: '<S80>/Unit Delay' */
  BaseEngineController_A02_DWork.s80_UnitDelay_DSTATE = rtb_Merge_mj;

  /* Update for UnitDelay: '<S78>/Unit Delay' */
  BaseEngineController_A02_DWork.s78_UnitDelay_DSTATE = rtb_Merge_n2;

  /* Update for UnitDelay: '<S77>/Unit Delay' */
  BaseEngineController_A02_DWork.s77_UnitDelay_DSTATE = rtb_Merge_fc;

  /* Update for UnitDelay: '<S76>/Unit Delay' */
  BaseEngineController_A02_DWork.s76_UnitDelay_DSTATE = rtb_Merge_p2;

  /* Update for UnitDelay: '<S75>/Unit Delay' */
  BaseEngineController_A02_DWork.s75_UnitDelay_DSTATE = rtb_Merge_b0;

  /* Update for UnitDelay: '<S74>/Unit Delay' */
  BaseEngineController_A02_DWork.s74_UnitDelay_DSTATE = rtb_Merge_f3;

  /* Update for UnitDelay: '<S73>/Unit Delay' */
  BaseEngineController_A02_DWork.s73_UnitDelay_DSTATE = rtb_Merge_iu;

  /* Update for UnitDelay: '<S79>/Unit Delay' */
  memcpy((void *)BaseEngineController_A02_DWork.s79_UnitDelay_DSTATE, (void *)
         &rtb_Merge_pj[0], sizeof(real_T) << 3U);

  /* Update for S-Function (motohawk_sfun_dout): '<S703>/motohawk_dout' */

  /* S-Function Block: DOut7963p0001 */
  {
    DOut7963p0001_DiscreteOutput_Set
      (BaseEngineController_A02_B.s837_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S704>/motohawk_dout' */

  /* S-Function Block: DOut7973p0001 */
  {
    DOut7973p0001_DiscreteOutput_Set
      (BaseEngineController_A02_B.s841_LogicalOperator);
  }

  /* Update for UnitDelay: '<S379>/Unit Delay' */
  BaseEngineController_A02_DWork.s379_UnitDelay_DSTATE = rtb_Switch_a;

  /* Update for UnitDelay: '<S329>/Unit Delay' incorporates:
   *  MinMax: '<S331>/MinMax1'
   */
  BaseEngineController_A02_DWork.s329_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S349>/Unit Delay1' */
  BaseEngineController_A02_DWork.s349_UnitDelay1_DSTATE =
    BaseEngineController_A02_B.s630_Merge;

  /* Update for UnitDelay: '<S546>/Unit Delay1' */
  BaseEngineController_A02_DWork.s546_UnitDelay1_DSTATE = rtb_Merge_dm;

  /* Update for UnitDelay: '<S579>/Unit Delay' */
  BaseEngineController_A02_DWork.s579_UnitDelay_DSTATE = rtb_Sum1_j;

  /* Update for UnitDelay: '<S595>/Unit Delay' */
  BaseEngineController_A02_DWork.s595_UnitDelay_DSTATE = rtb_Sum1_h;

  /* Update for UnitDelay: '<S551>/Unit Delay1' */
  BaseEngineController_A02_DWork.s551_UnitDelay1_DSTATE = rtb_Merge_l0;

  /* Update for UnitDelay: '<S613>/Unit Delay' */
  BaseEngineController_A02_DWork.s613_UnitDelay_DSTATE = rtb_Sum1_d3;

  /* Update for UnitDelay: '<S317>/Unit Delay1' */
  BaseEngineController_A02_DWork.s317_UnitDelay1_DSTATE =
    rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S317>/Unit Delay3' */
  BaseEngineController_A02_DWork.s317_UnitDelay3_DSTATE =
    rtb_DesiredLambda_idx_1;

  /* Update for UnitDelay: '<S317>/Unit Delay4' */
  BaseEngineController_A02_DWork.s317_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s543_Sum1;

  /* Update for UnitDelay: '<S318>/Unit Delay1' */
  BaseEngineController_A02_DWork.s318_UnitDelay1_DSTATE =
    rtb_DesiredLambda_idx_3;

  /* Update for UnitDelay: '<S318>/Unit Delay3' */
  BaseEngineController_A02_DWork.s318_UnitDelay3_DSTATE = rtb_UnitDelay4_g;

  /* Update for UnitDelay: '<S318>/Unit Delay4' */
  BaseEngineController_A02_DWork.s318_UnitDelay4_DSTATE = rtb_Torque;

  /* Update for UnitDelay: '<S397>/Unit Delay' */
  BaseEngineController_A02_DWork.s397_UnitDelay_DSTATE = rtb_DesiredLambda_idx;

  /* Update for UnitDelay: '<S666>/Unit Delay1' */
  BaseEngineController_A02_DWork.s666_UnitDelay1_DSTATE = rtb_Merge_oq;

  /* Update for UnitDelay: '<S666>/Unit Delay' */
  BaseEngineController_A02_DWork.s666_UnitDelay_DSTATE = rtb_Merge_dn;

  /* Update for UnitDelay: '<S666>/Unit Delay3' */
  BaseEngineController_A02_DWork.s666_UnitDelay3_DSTATE = rtb_Merge_o4;

  /* Update for UnitDelay: '<S666>/Unit Delay4' */
  BaseEngineController_A02_DWork.s666_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s655_Switch;

  /* Update for UnitDelay: '<S683>/Unit Delay1' */
  BaseEngineController_A02_DWork.s683_UnitDelay1_DSTATE = rtb_Merge_c5;

  /* Update for UnitDelay: '<S683>/Unit Delay' */
  BaseEngineController_A02_DWork.s683_UnitDelay_DSTATE = rtb_Product4_l;

  /* Update for UnitDelay: '<S683>/Unit Delay3' */
  BaseEngineController_A02_DWork.s683_UnitDelay3_DSTATE = rtb_Switch_o;

  /* Update for UnitDelay: '<S683>/Unit Delay4' */
  BaseEngineController_A02_DWork.s683_UnitDelay4_DSTATE =
    BaseEngineController_A02_B.s656_Switch;
}

/* Termination for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_Foreground_Term(void)
{
  /* Terminate for Enabled SubSystem: '<S379>/Triggered Subsystem' incorporates:
   *  Terminate for S-Function (fcncallgen): '<S380>/Function-Call Generator'
   *  Terminate for SubSystem: '<S11>/Diagnostics'
   */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
