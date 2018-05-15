/*
 * File: DynoController_Rev1.c
 *
 * Code generated for Simulink model 'DynoController_Rev1'.
 *
 * Model version                  : 1.305
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Fri Apr 13 00:18:48 2018
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
RT_MODEL_DynoController_Rev1 *const DynoController_Rev1_M =
  &DynoController_Rev1_M_;

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
    DynoController_Rev1_B.s37_PackState = 0.0;
    DynoController_Rev1_B.s37_StateOfCharge = 0.0;
    DynoController_Rev1_B.s39_Merge = 0.0;
    DynoController_Rev1_B.s38_ReadCANMessage_o2 = 0.0;
    DynoController_Rev1_B.s38_ReadCANMessage_o3 = 0.0;
    DynoController_Rev1_B.s38_ReadCANMessage_o4 = 0.0;
    DynoController_Rev1_B.s38_ReadCANMessage_o6 = 0.0;
    DynoController_Rev1_B.s38_ReadCANMessage_o7 = 0.0;
    DynoController_Rev1_B.s37_BatteryVoltage = 0.0;
    DynoController_Rev1_B.s37_BatteryCurrent = 0.0;
    DynoController_Rev1_B.s37_MaxCellTemperature = 0.0;
    DynoController_Rev1_B.s54_Merge = 0.0;
    DynoController_Rev1_B.s56_Merge = 0.0;
    DynoController_Rev1_B.s130_Sum = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&DynoController_Rev1_DWork, 0,
                sizeof(D_Work_DynoController_Rev1));

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  DynoController_Rev1_Foreground_Start();

  /* Start for function-call system: '<S2>/Background' */

  /* Start for Triggered SubSystem: '<S142>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S152>/Function-Call Generator'
   *  Start for SubSystem: '<S139>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S143>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S153>/Function-Call Generator'
   *  Start for SubSystem: '<S139>/motohawk_store_nvmem'
   */
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
 * File trailer for generated code.
 *
 * [EOF]
 */
