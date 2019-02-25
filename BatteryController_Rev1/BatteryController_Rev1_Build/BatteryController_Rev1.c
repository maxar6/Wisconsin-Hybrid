/*
 * File: BatteryController_Rev1.c
 *
 * Code generated for Simulink model 'BatteryController_Rev1'.
 *
 * Model version                  : 1.590
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Fri Sep 07 09:42:57 2018
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

/* Output and update for function-call system: '<S4>/CCP Daq Processing' */
void BatteryController_Rev1_CCPDaqProcessing(int_T controlPortIdx)
{
  /* local block i/o variables */
  int8_T rtb_f_c[8];
  int32_T i;

  /* Outputs for Function Call SubSystem: '<S4>/CCP Daq Processing' incorporates:
   *  TriggerPort: '<S7>/f'
   */
  for (i = 0; i < 8; i++) {
    rtb_f_c[i] = 0;
  }

  rtb_f_c[controlPortIdx] = 2;

  /* <S7>/motohawk_sfun_ccp_protocol: CCP Protocol CCP_BAT */
  {
    extern S_CCPHandlerInstance mh_CCP_BAT_CCPHandlerInstance;
    extern S_CCPHandlerConfig mh_CCP_BAT_CCPHandlerConfig;

    /* Tick */
    mh_ProcessCCPTick(rtb_f_c, &mh_CCP_BAT_CCPHandlerConfig,
                      &mh_CCP_BAT_CCPHandlerInstance);
  }

  /* S-Function (motohawk_sfun_code_cover): '<S7>/motohawk_code_coverage' */
  /* Code Coverage Test: BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Daq Processing */
  {
    extern void MH_CodeCovered(uint32_T idx);
    MH_CodeCovered(3);
  }
}

/* Model step function */
void BatteryController_Rev1_step(void)
{
  /* S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_6749p0009 */
  if (BatteryController_Rev1_DWork.s1_motohawk_trigger1_DWORK1 == 0) {
    BatteryController_Rev1_DWork.s1_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_6873p0001 */
  if (BatteryController_Rev1_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    BatteryController_Rev1_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_2XRTI_PERIODIC_6872p0001 */
  if (BatteryController_Rev1_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    BatteryController_Rev1_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_10XRTI_PERIODIC_6874p0001 */
  if (BatteryController_Rev1_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    BatteryController_Rev1_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_6875p0001 */
  if (BatteryController_Rev1_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    BatteryController_Rev1_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_6876p0001 */
  if (BatteryController_Rev1_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    BatteryController_Rev1_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_6877p0001 */
  if (BatteryController_Rev1_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    BatteryController_Rev1_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_6878p0001 */
  if (BatteryController_Rev1_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    BatteryController_Rev1_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_6879p0001 */
  if (BatteryController_Rev1_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    BatteryController_Rev1_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_6803p0001 */
  if (BatteryController_Rev1_DWork.s4_motohawk_trigger1_DWORK1 == 0) {
    BatteryController_Rev1_DWork.s4_motohawk_trigger1_DWORK1 = 1;
  }
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
    BatteryController_Rev1_B.s90_Sum1 = 0.0;
    BatteryController_Rev1_B.s90_Sum = 0.0;
    BatteryController_Rev1_B.s43_ReadCANMessage3_o1 = 0.0;
    BatteryController_Rev1_B.s43_ReadCANMessage3_o2 = 0.0;
    BatteryController_Rev1_B.s43_ReadCANMessage3_o3 = 0.0;
    BatteryController_Rev1_B.s43_ReadCANMessage3_o4 = 0.0;
    BatteryController_Rev1_B.s43_Gain1 = 0.0;
    BatteryController_Rev1_B.s46_Merge = 0.0;
    BatteryController_Rev1_B.s43_Gain2 = 0.0;
    BatteryController_Rev1_B.s47_Merge = 0.0;
    BatteryController_Rev1_B.s43_ReadCANMessage2 = 0.0;
    BatteryController_Rev1_B.s43_Gain = 0.0;
    BatteryController_Rev1_B.s52_Merge = 0.0;
    BatteryController_Rev1_B.s15_Sum = 0.0;
    BatteryController_Rev1_B.s15_Product = 0.0;
    BatteryController_Rev1_B.s21_Merge = 0.0;
    BatteryController_Rev1_B.s17_motohawk_interpolation_2d = 0.0;
    BatteryController_Rev1_B.s17_motohawk_interpolation_1d = 0.0;
    BatteryController_Rev1_B.s38_Switch = 0.0;
    BatteryController_Rev1_B.s40_Merge = 0.0;
    BatteryController_Rev1_B.s87_motohawk_interpolation_2d = 0.0;
    BatteryController_Rev1_B.s87_motohawk_interpolation_2d1 = 0.0;
    BatteryController_Rev1_B.s87_motohawk_interpolation_2d2 = 0.0;
    BatteryController_Rev1_B.s87_motohawk_interpolation_2d3 = 0.0;
    BatteryController_Rev1_B.s31_Merge = 0.0;
    BatteryController_Rev1_B.s30_Merge = 0.0;
    BatteryController_Rev1_B.s43_ReadCANMessage1 = 0.0;
    BatteryController_Rev1_B.s45_ReadCANMessage_o1 = 0.0;
    BatteryController_Rev1_B.s43_ReadCANMessage = 0.0;
    BatteryController_Rev1_B.s39_voltageOut = 0.0;
    BatteryController_Rev1_B.s39_currState = 0.0;
    BatteryController_Rev1_B.s29_state = 0.0;
    BatteryController_Rev1_B.s29_delay3Out = 0.0;
    BatteryController_Rev1_B.s29_delay5Out = 0.0;
    BatteryController_Rev1_B.s28_PackState = 0.0;
    BatteryController_Rev1_B.s20_amps = 0.0;
    BatteryController_Rev1_B.s19_Offset_Out = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BatteryController_Rev1_DWork, 0,
                sizeof(D_Work_BatteryController_Rev1));
  BatteryController_Rev1_DWork.s126_UnitDelay_DSTATE = 0.0;
  BatteryController_Rev1_DWork.s125_UnitDelay_DSTATE = 0.0;
  BatteryController_Rev1_DWork.s18_UnitDelay1_DSTATE = 0.0;
  BatteryController_Rev1_DWork.s38_UnitDelay1_DSTATE = 0.0;
  BatteryController_Rev1_DWork.s39_tick = 0.0;
  BatteryController_Rev1_DWork.s24_Freq = 0.0;
  BatteryController_Rev1_DWork.s26_sf_Delay5Chart.s32_count = 0.0;
  BatteryController_Rev1_DWork.s25_sf_Delay3Chart.s32_count = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BatteryController_Rev1_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_6749p0009 */
  BatteryController_Rev1_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_6873p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_2XRTI_PERIODIC_6872p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_10XRTI_PERIODIC_6874p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_6875p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_6876p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_6877p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_6878p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_6879p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_6803p0001 */
  BatteryController_Rev1_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Background' */

  /* Start for Triggered SubSystem: '<S221>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S231>/Function-Call Generator'
   *  Start for SubSystem: '<S218>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S222>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S232>/Function-Call Generator'
   *  Start for SubSystem: '<S218>/motohawk_store_nvmem'
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

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_6749p0009 */
  BatteryController_Rev1_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_6873p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_2XRTI_PERIODIC_6872p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_10XRTI_PERIODIC_6874p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_6875p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_6876p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_6877p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_6878p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_6879p0001 */
  BatteryController_Rev1_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_6803p0001 */
  BatteryController_Rev1_DWork.s4_motohawk_trigger1_DWORK1 = 1;
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
