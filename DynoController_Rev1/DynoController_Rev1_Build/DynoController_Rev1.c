/*
 * File: DynoController_Rev1.c
 *
 * Real-Time Workshop code generated for Simulink model DynoController_Rev1.
 *
 * Model version                        : 1.279
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Nov 19 19:40:13 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Nov 19 19:40:14 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DynoController_Rev1.h"
#include "DynoController_Rev1_private.h"

/* Block signals (auto storage) */
BlockIO_DynoController_Rev1 DynoController_Rev1_B;

/* Block states (auto storage) */
D_Work_DynoController_Rev1 DynoController_Rev1_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_DynoController_Rev1 DynoController_Rev1_PrevZCSigState;

/* Real-time model */
RT_MODEL_DynoController_Rev1 DynoController_Rev1_M_;
RT_MODEL_DynoController_Rev1 *DynoController_Rev1_M = &DynoController_Rev1_M_;

/* Model step function */
void DynoController_Rev1_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void DynoController_Rev1_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(DynoController_Rev1_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &DynoController_Rev1_B), 0,
                sizeof(BlockIO_DynoController_Rev1));

  {
    DynoController_Rev1_B.s36_PackState = 0.0;
    DynoController_Rev1_B.s36_StateOfCharge = 0.0;
    DynoController_Rev1_B.s37_ReadCANMessage_o2 = 0.0;
    DynoController_Rev1_B.s37_ReadCANMessage_o3 = 0.0;
    DynoController_Rev1_B.s37_ReadCANMessage_o4 = 0.0;
    DynoController_Rev1_B.s37_ReadCANMessage_o6 = 0.0;
    DynoController_Rev1_B.s37_ReadCANMessage_o7 = 0.0;
    DynoController_Rev1_B.s36_BatteryVoltage = 0.0;
    DynoController_Rev1_B.s36_BatteryCurrent = 0.0;
    DynoController_Rev1_B.s36_MaxCellTemperature = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&DynoController_Rev1_DWork, 0,
                sizeof(D_Work_DynoController_Rev1));

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  DynoController_Rev1_Foreground_Start();

  /* Start for function-call system: '<S2>/Background' */

  /* Start for trigger SubSystem: '<S130>/Post Shutdown two ticks before MPRD off' */

  /* Start for S-Function (fcncallgen): '<S135>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S135>/Post Shutdown two ticks before MPRD off'
   */

  /* end of Start for SubSystem: '<S130>/Post Shutdown two ticks before MPRD off' */

  /* Start for trigger SubSystem: '<S130>/Save NV Vars one tick before MPRD off' */

  /* Start for S-Function (fcncallgen): '<S137>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S137>/Save NV Vars one tick before MPRD off'
   */

  /* end of Start for SubSystem: '<S130>/Save NV Vars one tick before MPRD off' */

  /* Start for trigger SubSystem: '<S130>/Shutdown power on ECU565-128' */

  /* Start for S-Function (fcncallgen): '<S138>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S138>/Shutdown power on ECU565-128'
   */

  /* end of Start for SubSystem: '<S130>/Shutdown power on ECU565-128' */

  /* Start for S-Function (motohawk_sfun_dout): '<S130>/motohawk_dout' */

  /* S-Function Block: MPRD */
  {
    (init_resource_MPRD_DataStore()) = -1;
  }

  /* Start for trigger SubSystem: '<S133>/Clear' */

  /* Start for S-Function (fcncallgen): '<S143>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S130>/motohawk_restore_nvmem'
   */

  /* end of Start for SubSystem: '<S133>/Clear' */

  /* Start for trigger SubSystem: '<S134>/Clear' */

  /* Start for S-Function (fcncallgen): '<S144>/Function-Call Generator' incorporates:
   *  Start for SubSystem: '<S130>/motohawk_store_nvmem'
   */

  /* end of Start for SubSystem: '<S134>/Clear' */
  DynoController_Rev1_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE =
    ZERO_ZCSIG;
  DynoController_Rev1_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE =
    ZERO_ZCSIG;
  DynoController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE = ZERO_ZCSIG;
  DynoController_Rev1_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE =
    ZERO_ZCSIG;
  DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE = ZERO_ZCSIG;
  DynoController_Rev1_PrevZCSigState.Clear_Trig_ZCE_n = ZERO_ZCSIG;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  DynoController_Rev1_Foreground_Init();
}

/* Model terminate function */
void DynoController_Rev1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
