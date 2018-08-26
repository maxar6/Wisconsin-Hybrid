/*
 * File: BatteryController_Rev1.c
 *
 * Code generated for Simulink model 'BatteryController_Rev1'.
 *
 * Model version                  : 1.586
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Aug 25 20:25:04 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BatteryController_Rev1.h"
#include "BatteryController_Rev1_private.h"

/* Block signals (auto storage) */
BlockIO_BatteryController_Rev1 BatteryController_Rev1_B;

/* Block states (auto storage) */
D_Work_BatteryController_Rev1 BatteryController_Rev1_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_BatteryController_Rev1 BatteryController_Rev1_PrevZCSigState;

/* Real-time model */
RT_MODEL_BatteryController_Rev1 BatteryController_Rev1_M_;
RT_MODEL_BatteryController_Rev1 *const BatteryController_Rev1_M =
  &BatteryController_Rev1_M_;

/* Model step function */
void BatteryController_Rev1_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void BatteryController_Rev1_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(BatteryController_Rev1_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &BatteryController_Rev1_B), 0,
                sizeof(BlockIO_BatteryController_Rev1));

  {
    BatteryController_Rev1_B.s82_Sum1 = 0.0;
    BatteryController_Rev1_B.s82_Sum = 0.0;
    BatteryController_Rev1_B.s35_ReadCANMessage3_o1 = 0.0;
    BatteryController_Rev1_B.s35_ReadCANMessage3_o2 = 0.0;
    BatteryController_Rev1_B.s35_ReadCANMessage3_o3 = 0.0;
    BatteryController_Rev1_B.s35_ReadCANMessage3_o4 = 0.0;
    BatteryController_Rev1_B.s35_Gain1 = 0.0;
    BatteryController_Rev1_B.s38_Merge = 0.0;
    BatteryController_Rev1_B.s35_Gain2 = 0.0;
    BatteryController_Rev1_B.s39_Merge = 0.0;
    BatteryController_Rev1_B.s35_ReadCANMessage2 = 0.0;
    BatteryController_Rev1_B.s35_Gain = 0.0;
    BatteryController_Rev1_B.s44_Merge = 0.0;
    BatteryController_Rev1_B.s7_Sum = 0.0;
    BatteryController_Rev1_B.s7_Product = 0.0;
    BatteryController_Rev1_B.s13_Merge = 0.0;
    BatteryController_Rev1_B.s9_motohawk_interpolation_1d1 = 0.0;
    BatteryController_Rev1_B.s9_motohawk_interpolation_1d = 0.0;
    BatteryController_Rev1_B.s30_Switch = 0.0;
    BatteryController_Rev1_B.s32_Merge = 0.0;
    BatteryController_Rev1_B.s79_motohawk_interpolation_2d = 0.0;
    BatteryController_Rev1_B.s79_motohawk_interpolation_2d1 = 0.0;
    BatteryController_Rev1_B.s79_motohawk_interpolation_2d2 = 0.0;
    BatteryController_Rev1_B.s79_motohawk_interpolation_2d3 = 0.0;
    BatteryController_Rev1_B.s23_Merge = 0.0;
    BatteryController_Rev1_B.s22_Merge = 0.0;
    BatteryController_Rev1_B.s35_ReadCANMessage1 = 0.0;
    BatteryController_Rev1_B.s37_ReadCANMessage_o1 = 0.0;
    BatteryController_Rev1_B.s35_ReadCANMessage = 0.0;
    BatteryController_Rev1_B.s31_voltageOut = 0.0;
    BatteryController_Rev1_B.s31_currState = 0.0;
    BatteryController_Rev1_B.s21_state = 0.0;
    BatteryController_Rev1_B.s21_delay3Out = 0.0;
    BatteryController_Rev1_B.s21_delay5Out = 0.0;
    BatteryController_Rev1_B.s20_PackState = 0.0;
    BatteryController_Rev1_B.s12_amps = 0.0;
    BatteryController_Rev1_B.s11_Offset_Out = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BatteryController_Rev1_DWork, 0,
                sizeof(D_Work_BatteryController_Rev1));
  BatteryController_Rev1_DWork.s118_UnitDelay_DSTATE = 0.0;
  BatteryController_Rev1_DWork.s117_UnitDelay_DSTATE = 0.0;
  BatteryController_Rev1_DWork.s10_UnitDelay1_DSTATE = 0.0;
  BatteryController_Rev1_DWork.s30_UnitDelay1_DSTATE = 0.0;
  BatteryController_Rev1_DWork.s31_tick = 0.0;
  BatteryController_Rev1_DWork.s16_Freq = 0.0;
  BatteryController_Rev1_DWork.s18_sf_Delay5Chart.s24_count = 0.0;
  BatteryController_Rev1_DWork.s17_sf_Delay3Chart.s24_count = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BatteryController_Rev1_Foreground_Start();

  /* Start for function-call system: '<S2>/Background' */

  /* Start for Triggered SubSystem: '<S213>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S223>/Function-Call Generator'
   *  Start for SubSystem: '<S210>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S214>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S224>/Function-Call Generator'
   *  Start for SubSystem: '<S210>/motohawk_store_nvmem'
   */
  BatteryController_Rev1_PrevZCSigState.SaveNVondisconnect_Trig_ZCE =
    UNINITIALIZED_ZCSIG;
  BatteryController_Rev1_PrevZCSigState.ShutdownpoweronECU565128_Trig_ZCE =
    ZERO_ZCSIG;
  BatteryController_Rev1_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE =
    ZERO_ZCSIG;
  BatteryController_Rev1_PrevZCSigState.ProcessorReboot_Trig_ZCE = ZERO_ZCSIG;
  BatteryController_Rev1_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
    = ZERO_ZCSIG;
  BatteryController_Rev1_PrevZCSigState.Clear_Trig_ZCE = ZERO_ZCSIG;
  BatteryController_Rev1_PrevZCSigState.Clear_Trig_ZCE_d = ZERO_ZCSIG;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BatteryController_Rev1_Foreground_Init();
}

/* Model terminate function */
void BatteryController_Rev1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
