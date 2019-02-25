/*
 * File: BaseEngineController_A02.c
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1640
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Fri Sep 07 11:01:26 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

/* Named constants for Stateflow: '<S845>/ECUP Latch' */
#define BaseEngineController_A02_IN_PowerDown (1U)
#define BaseEngineController_A02_IN_PowerUp (2U)

/* Block signals (auto storage) */
BlockIO_BaseEngineController_A02 BaseEngineController_A02_B;

/* Block states (auto storage) */
D_Work_BaseEngineController_A02 BaseEngineController_A02_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_BaseEngineController_A02 BaseEngineController_A02_PrevZCSigState;

/* Real-time model */
RT_MODEL_BaseEngineController_A02 BaseEngineController_A02_M_;
RT_MODEL_BaseEngineController_A02 *const BaseEngineController_A02_M =
  &BaseEngineController_A02_M_;

/* Output and update for function-call system: '<S4>/CCP Daq Processing' */
void BaseEngineController_A02_CCPDaqProcessing(int_T controlPortIdx)
{
  /* local block i/o variables */
  int8_T rtb_f_f[8];
  int32_T i;

  /* Outputs for Function Call SubSystem: '<S4>/CCP Daq Processing' incorporates:
   *  TriggerPort: '<S7>/f'
   */
  for (i = 0; i < 8; i++) {
    rtb_f_f[i] = 0;
  }

  rtb_f_f[controlPortIdx] = 2;

  /* <S7>/motohawk_sfun_ccp_protocol: CCP Protocol Engine_Controller */
  {
    extern S_CCPHandlerInstance mh_Engine_Controller_CCPHandlerInstance;
    extern S_CCPHandlerConfig mh_Engine_Controller_CCPHandlerConfig;

    /* Tick */
    mh_ProcessCCPTick(rtb_f_f, &mh_Engine_Controller_CCPHandlerConfig,
                      &mh_Engine_Controller_CCPHandlerInstance);
  }
}

/* Model step function */
void BaseEngineController_A02_step(void)
{
  /* S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_9487p0004 */
  if (BaseEngineController_A02_DWork.s1_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s1_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_10113p0005 */
  if (BaseEngineController_A02_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_2XRTI_PERIODIC_10112p0005 */
  if (BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_10XRTI_PERIODIC_10114p0005 */
  if (BaseEngineController_A02_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10115p0005 */
  if (BaseEngineController_A02_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_10116p0005 */
  if (BaseEngineController_A02_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_10117p0005 */
  if (BaseEngineController_A02_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_10118p0005 */
  if (BaseEngineController_A02_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_10119p0005 */
  if (BaseEngineController_A02_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_10038p0005 */
  if (BaseEngineController_A02_DWork.s4_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_A02_DWork.s4_motohawk_trigger1_DWORK1 = 1;
  }
}

/* Model initialize function */
void BaseEngineController_A02_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)BaseEngineController_A02_M, 0,
                sizeof(RT_MODEL_BaseEngineController_A02));
  rtmSetFirstInitCond(BaseEngineController_A02_M, 1);

  /* block I/O */
  (void) memset(((void *) &BaseEngineController_A02_B), 0,
                sizeof(BlockIO_BaseEngineController_A02));

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s128_FPC[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s79_Sum[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s22_MinMax[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s266_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s277_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s276_chargemass[i] = 0.0;
    }

    BaseEngineController_A02_B.s550_Sum1 = 0.0;
    BaseEngineController_A02_B.s604_Merge = 0.0;
    BaseEngineController_A02_B.s543_Sum1 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o4 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o5 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o11 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o12 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage1_o13 = 0.0;
    BaseEngineController_A02_B.s710_MinMax = 0.0;
    BaseEngineController_A02_B.s383_RPMInst = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage_o2 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage_o3 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage_o4 = 0.0;
    BaseEngineController_A02_B.s722_Merge = 0.0;
    BaseEngineController_A02_B.s418_Merge = 0.0;
    BaseEngineController_A02_B.s387_GensetEnable = 0.0;
    BaseEngineController_A02_B.s387_ReadCANMessage_o4 = 0.0;
    BaseEngineController_A02_B.s387_ReadCANMessage_o5 = 0.0;
    BaseEngineController_A02_B.s387_ReadCANMessage_o6 = 0.0;
    BaseEngineController_A02_B.s387_Product = 0.0;
    BaseEngineController_A02_B.s552_Sum1 = 0.0;
    BaseEngineController_A02_B.s620_Merge = 0.0;
    BaseEngineController_A02_B.s655_Switch = 0.0;
    BaseEngineController_A02_B.s659_MinMax = 0.0;
    BaseEngineController_A02_B.s659_MinMax1 = 0.0;
    BaseEngineController_A02_B.s663_MinMax1 = 0.0;
    BaseEngineController_A02_B.s656_Switch = 0.0;
    BaseEngineController_A02_B.s676_MinMax = 0.0;
    BaseEngineController_A02_B.s676_MinMax1 = 0.0;
    BaseEngineController_A02_B.s680_MinMax1 = 0.0;
    BaseEngineController_A02_B.s673_Merge = 0.0;
    BaseEngineController_A02_B.s690_Merge = 0.0;
    BaseEngineController_A02_B.s351_Switch2 = 0.0;
    BaseEngineController_A02_B.s386_motohawk_data_read1 = 0.0;
    BaseEngineController_A02_B.s345_Switch1 = 0.0;
    BaseEngineController_A02_B.s631_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s630_Merge = 0.0;
    BaseEngineController_A02_B.s349_Sum1 = 0.0;
    BaseEngineController_A02_B.s371_Switch = 0.0;
    BaseEngineController_A02_B.s297_motohawk_delta_time = 0.0;
    BaseEngineController_A02_B.s548_Sum1 = 0.0;
    BaseEngineController_A02_B.s305_Sum = 0.0;
    BaseEngineController_A02_B.s549_Merge = 0.0;
    BaseEngineController_A02_B.s547_Sum1 = 0.0;
    BaseEngineController_A02_B.s586_Merge = 0.0;
    BaseEngineController_A02_B.s304_NominalAirFlowRate2 = 0.0;
    BaseEngineController_A02_B.s304_PressureRatio = 0.0;
    BaseEngineController_A02_B.s309_Merge = 0.0;
    BaseEngineController_A02_B.s382_Gain = 0.0;
    BaseEngineController_A02_B.s529_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s528_Merge = 0.0;
    BaseEngineController_A02_B.s304_Saturation1 = 0.0;
    BaseEngineController_A02_B.s317_Merge = 0.0;
    BaseEngineController_A02_B.s320_Sum1 = 0.0;
    BaseEngineController_A02_B.s318_Merge = 0.0;
    BaseEngineController_A02_B.s323_Sum1 = 0.0;
    BaseEngineController_A02_B.s326_TorquetoPower = 0.0;
    BaseEngineController_A02_B.s334_MinMax1 = 0.0;
    BaseEngineController_A02_B.s365_Sum1 = 0.0;
    BaseEngineController_A02_B.s384_Gain = 0.0;
    BaseEngineController_A02_B.s545_Sum1 = 0.0;
    BaseEngineController_A02_B.s565_Merge = 0.0;
    BaseEngineController_A02_B.s128_SparkEnergy = 0.0;
    BaseEngineController_A02_B.s128_SparkAdv = 0.0;
    BaseEngineController_A02_B.s544_Sum1 = 0.0;
    BaseEngineController_A02_B.s128_EGR = 0.0;
    BaseEngineController_A02_B.s557_Merge = 0.0;
    BaseEngineController_A02_B.s373_Switch = 0.0;
    BaseEngineController_A02_B.s128_Throttle = 0.0;
    BaseEngineController_A02_B.s701_ETC = 0.0;
    BaseEngineController_A02_B.s128_SOI = 0.0;
    BaseEngineController_A02_B.s71_constreftoatm = 0.0;
    BaseEngineController_A02_B.s128_FuelMult = 0.0;
    BaseEngineController_A02_B.s22_Sum2 = 0.0;
    BaseEngineController_A02_B.s22_Sum1 = 0.0;
    BaseEngineController_A02_B.s128_MakeUpEOI = 0.0;
    BaseEngineController_A02_B.s329_Switch1 = 0.0;
    BaseEngineController_A02_B.s369_Sum = 0.0;
    BaseEngineController_A02_B.s349_Sum3 = 0.0;
    BaseEngineController_A02_B.s546_Sum1 = 0.0;
    BaseEngineController_A02_B.s578_Merge = 0.0;
    BaseEngineController_A02_B.s594_Merge = 0.0;
    BaseEngineController_A02_B.s348_Sum3 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o2 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o3 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o4 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o5 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o6 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o7 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o8 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o9 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o10 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o11 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o12 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o13 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o14 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o15 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage2_o16 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage3_o2 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage3_o3 = 0.0;
    BaseEngineController_A02_B.s388_ReadCANMessage3_o4 = 0.0;
    BaseEngineController_A02_B.s551_Sum1 = 0.0;
    BaseEngineController_A02_B.s612_Merge = 0.0;
    BaseEngineController_A02_B.s397_UnitDelay = 0.0;
    BaseEngineController_A02_B.s786_Sum = 0.0;
    BaseEngineController_A02_B.s787_Sum = 0.0;
    BaseEngineController_A02_B.s789_CrankCounter = 0.0;
    BaseEngineController_A02_B.s719_faults = 0.0;
    BaseEngineController_A02_B.s642_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s635_Merge = 0.0;
    BaseEngineController_A02_B.s641_Merge = 0.0;
    BaseEngineController_A02_B.s651_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s636_Merge = 0.0;
    BaseEngineController_A02_B.s650_Merge = 0.0;
    BaseEngineController_A02_B.s409_hp = 0.0;
    BaseEngineController_A02_B.s409_kw = 0.0;
    BaseEngineController_A02_B.s361_Product = 0.0;
    BaseEngineController_A02_B.s360_Product = 0.0;
    BaseEngineController_A02_B.s342_Merge = 0.0;
    BaseEngineController_A02_B.s358_Sum2 = 0.0;
    BaseEngineController_A02_B.s335_Switch1 = 0.0;
    BaseEngineController_A02_B.s306_Product = 0.0;
    BaseEngineController_A02_B.s302_Timer = 0.0;
    BaseEngineController_A02_B.s263_UnitDelay = 0.0;
    BaseEngineController_A02_B.s264_UnitDelay = 0.0;
    BaseEngineController_A02_B.s147_Product = 0.0;
    BaseEngineController_A02_B.s147_Sum = 0.0;
    BaseEngineController_A02_B.s137_MultiportSwitch = 0.0;
    BaseEngineController_A02_B.s139_Product = 0.0;
    BaseEngineController_A02_B.s257_Add = 0.0;
    BaseEngineController_A02_B.s254_Product = 0.0;
    BaseEngineController_A02_B.s144_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_A02_B.s260_MinMax1 = 0.0;
    BaseEngineController_A02_B.s255_Switch = 0.0;
    BaseEngineController_A02_B.s144_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_A02_B.s141_Sum = 0.0;
    BaseEngineController_A02_B.s184_Merge = 0.0;
    BaseEngineController_A02_B.s184_Merge1 = 0.0;
    BaseEngineController_A02_B.s183_DontallowsetpointtoevergoabovetheTargetRPM =
      0.0;
    BaseEngineController_A02_B.s193_Sum2 = 0.0;
    BaseEngineController_A02_B.s193_Product2 = 0.0;
    BaseEngineController_A02_B.s194_Product = 0.0;
    BaseEngineController_A02_B.s195_Switch1 = 0.0;
    BaseEngineController_A02_B.s185_Switch = 0.0;
    BaseEngineController_A02_B.s181_Sum = 0.0;
    BaseEngineController_A02_B.s215_MinMax1 = 0.0;
    BaseEngineController_A02_B.s205_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_B.s231_Sum2 = 0.0;
    BaseEngineController_A02_B.s231_Product2 = 0.0;
    BaseEngineController_A02_B.s232_Product = 0.0;
    BaseEngineController_A02_B.s233_Switch1 = 0.0;
    BaseEngineController_A02_B.s142_MinGovAirPID = 0.0;
    BaseEngineController_A02_B.s226_Sum1 = 0.0;
    BaseEngineController_A02_B.s226_Product = 0.0;
    BaseEngineController_A02_B.s227_Product = 0.0;
    BaseEngineController_A02_B.s142_IdleSpk = 0.0;
    BaseEngineController_A02_B.s223_Switch = 0.0;
    BaseEngineController_A02_B.s208_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_B.s143_O2FuelMult = 0.0;
    BaseEngineController_A02_B.s238_Switch = 0.0;
    BaseEngineController_A02_B.s245_Sum2 = 0.0;
    BaseEngineController_A02_B.s245_Product2 = 0.0;
    BaseEngineController_A02_B.s247_Switch1 = 0.0;
    BaseEngineController_A02_B.s246_Product = 0.0;
    BaseEngineController_A02_B.s243_Switch3 = 0.0;
    BaseEngineController_A02_B.s243_Switch1 = 0.0;
    BaseEngineController_A02_B.s243_Switch4 = 0.0;
    BaseEngineController_A02_B.s165_Add = 0.0;
    BaseEngineController_A02_B.s163_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_A02_B.s160_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_A02_B.s160_ApplyMultipliersforO2KnockControlandEnrichment1
      = 0.0;
    BaseEngineController_A02_B.s180_MinMax1 = 0.0;
    BaseEngineController_A02_B.s171_Sum1 = 0.0;
    BaseEngineController_A02_B.s166_Sum = 0.0;
    BaseEngineController_A02_B.s166_Product1 = 0.0;
    BaseEngineController_A02_B.s169_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s138_DesEquivRatio = 0.0;
    BaseEngineController_A02_B.s135_APP = 0.0;
    BaseEngineController_A02_B.s135_remyEn = 0.0;
    BaseEngineController_A02_B.s135_maxRPM = 0.0;
    BaseEngineController_A02_B.s135_motorTQ = 0.0;
    BaseEngineController_A02_B.s135_generatingTQ = 0.0;
    BaseEngineController_A02_B.s122_Sum = 0.0;
    BaseEngineController_A02_B.s24_Sum = 0.0;
    BaseEngineController_A02_B.s107_UnitDelay2 = 0.0;
    BaseEngineController_A02_B.s117_Switch1 = 0.0;
    BaseEngineController_A02_B.s70_Switch = 0.0;
    BaseEngineController_A02_B.s37_MultiportSwitch = 0.0;
    BaseEngineController_A02_B.s49_Product = 0.0;
    BaseEngineController_A02_B.s48_Switch2 = 0.0;
    BaseEngineController_A02_B.s53_Product = 0.0;
    BaseEngineController_A02_B.s45_Sum2 = 0.0;
    BaseEngineController_A02_B.s54_Product = 0.0;
    BaseEngineController_A02_B.s45_Product2 = 0.0;
    BaseEngineController_A02_B.s55_Switch1 = 0.0;
    BaseEngineController_A02_B.s58_MinMax1 = 0.0;
    BaseEngineController_A02_B.s21_Switch = 0.0;
    BaseEngineController_A02_B.s59_In1 = 0.0;
    BaseEngineController_A02_B.s33_TestTime = 0.0;
    BaseEngineController_A02_B.s28_enout = 0.0;
    BaseEngineController_A02_B.s861_Switch = 0.0;
    BaseEngineController_A02_B.s325_MultiplyandDivideavoidingdivdebyzero1.s172_chargemass
      = 0.0;
    BaseEngineController_A02_B.s167_MultiplyandDivideavoidingdivdebyzero.s172_chargemass
      = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_A02_DWork, 0,
                sizeof(D_Work_BaseEngineController_A02));
  BaseEngineController_A02_DWork.s550_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s605_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s543_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s447_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s552_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s621_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s669_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s662_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s686_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s679_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s349_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s624_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s632_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s548_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s305_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s547_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s587_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s522_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s530_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s317_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s320_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s318_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s323_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s316_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s363_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s365_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s570_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s545_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s569_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s567_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s567_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s567_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s544_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s558_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s81_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s80_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s78_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s77_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s76_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s75_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s74_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s73_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_DWork.s79_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_A02_DWork.s329_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s349_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s546_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s579_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s595_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s551_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s613_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s317_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s317_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s317_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s318_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s318_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s318_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s397_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s666_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s666_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s666_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s666_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s683_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s683_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s683_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s683_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s786_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s787_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s789_CrankCounter_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s635_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s636_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s652_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_DWork.s277_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_A02_DWork.s361_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s360_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s342_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s355_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s358_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s342_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s342_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s342_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s335_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s306_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s263_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s264_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s151_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s150_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s150_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s255_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s183_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s194_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s195_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s220_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s222_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s142_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s142_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s201_state_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s142_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s205_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s232_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s233_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s227_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s208_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s246_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s243_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s243_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s243_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s171_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s122_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s107_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s21_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s62_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s53_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s49_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s51_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s54_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s55_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s851_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s851_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s302_TOld = 0.0;
  BaseEngineController_A02_DWork.s135_count = 0.0;
  BaseEngineController_A02_DWork.s33_TimerOld = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_A02_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_9487p0004 */
  BaseEngineController_A02_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_10113p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_2XRTI_PERIODIC_10112p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_10XRTI_PERIODIC_10114p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_10115p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_10116p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_10117p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_10118p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_10119p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_10038p0005 */
  BaseEngineController_A02_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S847>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S855>/Function-Call Generator'
   *  Start for SubSystem: '<S845>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S848>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S856>/Function-Call Generator'
   *  Start for SubSystem: '<S845>/motohawk_store_nvmem'
   */
  BaseEngineController_A02_PrevZCSigState.HitCrossing1_Input_ZCE =
    UNINITIALIZED_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
    ZERO_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
    = ZERO_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE = ZERO_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
    = ZERO_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_e =
    ZERO_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j
    = ZERO_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.ProcessorReboot_Trig_ZCE_j =
    ZERO_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c
    = ZERO_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE = ZERO_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.Clear_Trig_ZCE_l = ZERO_ZCSIG;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_A02_Foreground_Init();

  /* Initial conditions for function-call system: '<S3>/Main Power Relay' */

  /* S-Function Block: <S861>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s861_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S845>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S849>:3' */
  BaseEngineController_A02_DWork.s849_is_c8_BaseEngineController_A02 =
    BaseEngineController_A02_IN_PowerDown;

  /* Entry 'PowerDown': '<S849>:1' */
  BaseEngineController_A02_B.s849_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    rtmSetFirstInitCond(BaseEngineController_A02_M, 0);
  }

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_9487p0004 */
  BaseEngineController_A02_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_10113p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_2XRTI_PERIODIC_10112p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_10XRTI_PERIODIC_10114p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10115p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_10116p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_10117p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_10118p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_10119p0005 */
  BaseEngineController_A02_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_10038p0005 */
  BaseEngineController_A02_DWork.s4_motohawk_trigger1_DWORK1 = 1;
}

/* Model terminate function */
void BaseEngineController_A02_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
