/*
 * File: BaseEngineController_A02.c
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

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

/* Named constants for Stateflow: '<S785>/ECUP Latch' */
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

/* Model step function */
void BaseEngineController_A02_step(void)
{
  /* (no output/update code required) */
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
      BaseEngineController_A02_B.s114_FPC[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s65_Sum[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s13_MinMax[i] = 0.0;
    }

    BaseEngineController_A02_B.s514_Sum1 = 0.0;
    BaseEngineController_A02_B.s568_Merge = 0.0;
    BaseEngineController_A02_B.s507_Sum1 = 0.0;
    BaseEngineController_A02_B.s355_RPMInst = 0.0;
    BaseEngineController_A02_B.s359_GensetEnable = 0.0;
    BaseEngineController_A02_B.s359_GensetEnable_g = 0.0;
    BaseEngineController_A02_B.s359_GensetEnable_a = 0.0;
    BaseEngineController_A02_B.s113_generatingTQ = 0.0;
    BaseEngineController_A02_B.s516_Sum1 = 0.0;
    BaseEngineController_A02_B.s584_Merge = 0.0;
    BaseEngineController_A02_B.s619_Switch = 0.0;
    BaseEngineController_A02_B.s623_MinMax = 0.0;
    BaseEngineController_A02_B.s623_MinMax1 = 0.0;
    BaseEngineController_A02_B.s627_MinMax1 = 0.0;
    BaseEngineController_A02_B.s620_Switch = 0.0;
    BaseEngineController_A02_B.s640_MinMax = 0.0;
    BaseEngineController_A02_B.s640_MinMax1 = 0.0;
    BaseEngineController_A02_B.s644_MinMax1 = 0.0;
    BaseEngineController_A02_B.s637_Merge = 0.0;
    BaseEngineController_A02_B.s654_Merge = 0.0;
    BaseEngineController_A02_B.s323_Switch2 = 0.0;
    BaseEngineController_A02_B.s358_motohawk_data_read1 = 0.0;
    BaseEngineController_A02_B.s317_Switch1 = 0.0;
    BaseEngineController_A02_B.s595_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s594_Merge = 0.0;
    BaseEngineController_A02_B.s321_Sum1 = 0.0;
    BaseEngineController_A02_B.s343_Switch = 0.0;
    BaseEngineController_A02_B.s269_motohawk_delta_time = 0.0;
    BaseEngineController_A02_B.s512_Sum1 = 0.0;
    BaseEngineController_A02_B.s277_Sum = 0.0;
    BaseEngineController_A02_B.s513_Merge = 0.0;
    BaseEngineController_A02_B.s511_Sum1 = 0.0;
    BaseEngineController_A02_B.s550_Merge = 0.0;
    BaseEngineController_A02_B.s276_NominalAirFlowRate2 = 0.0;
    BaseEngineController_A02_B.s276_PressureRatio = 0.0;
    BaseEngineController_A02_B.s354_Gain = 0.0;
    BaseEngineController_A02_B.s493_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s492_Merge = 0.0;
    BaseEngineController_A02_B.s276_Saturation1 = 0.0;
    BaseEngineController_A02_B.s289_Merge = 0.0;
    BaseEngineController_A02_B.s292_Sum1 = 0.0;
    BaseEngineController_A02_B.s290_Merge = 0.0;
    BaseEngineController_A02_B.s295_Sum1 = 0.0;
    BaseEngineController_A02_B.s298_TorquetoPower = 0.0;
    BaseEngineController_A02_B.s306_MinMax1 = 0.0;
    BaseEngineController_A02_B.s337_Sum1 = 0.0;
    BaseEngineController_A02_B.s356_Gain = 0.0;
    BaseEngineController_A02_B.s509_Sum1 = 0.0;
    BaseEngineController_A02_B.s529_Merge = 0.0;
    BaseEngineController_A02_B.s114_SparkEnergy = 0.0;
    BaseEngineController_A02_B.s114_SparkAdv = 0.0;
    BaseEngineController_A02_B.s345_Switch = 0.0;
    BaseEngineController_A02_B.s114_Throttle = 0.0;
    BaseEngineController_A02_B.s664_ETC = 0.0;
    BaseEngineController_A02_B.s114_SOI = 0.0;
    BaseEngineController_A02_B.s57_constreftoatm = 0.0;
    BaseEngineController_A02_B.s114_FuelMult = 0.0;
    BaseEngineController_A02_B.s13_Sum2 = 0.0;
    BaseEngineController_A02_B.s13_Sum1 = 0.0;
    BaseEngineController_A02_B.s114_MakeUpEOI = 0.0;
    BaseEngineController_A02_B.s301_Switch1 = 0.0;
    BaseEngineController_A02_B.s341_Sum = 0.0;
    BaseEngineController_A02_B.s321_Sum3 = 0.0;
    BaseEngineController_A02_B.s510_Sum1 = 0.0;
    BaseEngineController_A02_B.s542_Merge = 0.0;
    BaseEngineController_A02_B.s558_Merge = 0.0;
    BaseEngineController_A02_B.s320_Sum3 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage_o2 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage_o3 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage_o4 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o4 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o5 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o11 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o12 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage1_o13 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o2 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o3 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o4 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o5 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o6 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o7 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o8 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o9 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o10 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o11 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o12 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o13 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o14 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o15 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage2_o16 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage3_o2 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage3_o3 = 0.0;
    BaseEngineController_A02_B.s360_ReadCANMessage3_o4 = 0.0;
    BaseEngineController_A02_B.s508_Sum1 = 0.0;
    BaseEngineController_A02_B.s515_Sum1 = 0.0;
    BaseEngineController_A02_B.s521_Merge = 0.0;
    BaseEngineController_A02_B.s576_Merge = 0.0;
    BaseEngineController_A02_B.s366_UnitDelay = 0.0;
    BaseEngineController_A02_B.s735_Sum = 0.0;
    BaseEngineController_A02_B.s736_Sum = 0.0;
    BaseEngineController_A02_B.s738_CrankCounter = 0.0;
    BaseEngineController_A02_B.s606_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s599_Merge = 0.0;
    BaseEngineController_A02_B.s605_Merge = 0.0;
    BaseEngineController_A02_B.s615_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s600_Merge = 0.0;
    BaseEngineController_A02_B.s614_Merge = 0.0;
    BaseEngineController_A02_B.s333_Product = 0.0;
    BaseEngineController_A02_B.s332_Product = 0.0;
    BaseEngineController_A02_B.s314_Merge = 0.0;
    BaseEngineController_A02_B.s330_Sum2 = 0.0;
    BaseEngineController_A02_B.s307_Switch1 = 0.0;
    BaseEngineController_A02_B.s278_Product = 0.0;
    BaseEngineController_A02_B.s274_Timer = 0.0;
    BaseEngineController_A02_B.s241_UnitDelay = 0.0;
    BaseEngineController_A02_B.s242_UnitDelay = 0.0;
    BaseEngineController_A02_B.s125_MultiportSwitch = 0.0;
    BaseEngineController_A02_B.s127_Product = 0.0;
    BaseEngineController_A02_B.s235_Add = 0.0;
    BaseEngineController_A02_B.s232_Product = 0.0;
    BaseEngineController_A02_B.s132_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_A02_B.s238_MinMax1 = 0.0;
    BaseEngineController_A02_B.s233_Switch = 0.0;
    BaseEngineController_A02_B.s132_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_A02_B.s129_Sum = 0.0;
    BaseEngineController_A02_B.s162_Merge = 0.0;
    BaseEngineController_A02_B.s162_Merge1 = 0.0;
    BaseEngineController_A02_B.s161_DontallowsetpointtoevergoabovetheTargetRPM =
      0.0;
    BaseEngineController_A02_B.s171_Sum2 = 0.0;
    BaseEngineController_A02_B.s171_Product2 = 0.0;
    BaseEngineController_A02_B.s172_Product = 0.0;
    BaseEngineController_A02_B.s173_Switch1 = 0.0;
    BaseEngineController_A02_B.s163_Switch = 0.0;
    BaseEngineController_A02_B.s159_Sum = 0.0;
    BaseEngineController_A02_B.s193_MinMax1 = 0.0;
    BaseEngineController_A02_B.s183_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_B.s209_Sum2 = 0.0;
    BaseEngineController_A02_B.s209_Product2 = 0.0;
    BaseEngineController_A02_B.s210_Product = 0.0;
    BaseEngineController_A02_B.s211_Switch1 = 0.0;
    BaseEngineController_A02_B.s130_MinGovAirPID = 0.0;
    BaseEngineController_A02_B.s204_Sum1 = 0.0;
    BaseEngineController_A02_B.s204_Product = 0.0;
    BaseEngineController_A02_B.s205_Product = 0.0;
    BaseEngineController_A02_B.s130_IdleSpk = 0.0;
    BaseEngineController_A02_B.s201_Switch = 0.0;
    BaseEngineController_A02_B.s186_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_B.s216_Switch = 0.0;
    BaseEngineController_A02_B.s223_Sum2 = 0.0;
    BaseEngineController_A02_B.s223_Product2 = 0.0;
    BaseEngineController_A02_B.s225_Switch1 = 0.0;
    BaseEngineController_A02_B.s224_Product = 0.0;
    BaseEngineController_A02_B.s221_Switch3 = 0.0;
    BaseEngineController_A02_B.s221_Switch1 = 0.0;
    BaseEngineController_A02_B.s221_Switch4 = 0.0;
    BaseEngineController_A02_B.s216_Multiplyby10ifnotyetenabled = 0.0;
    BaseEngineController_A02_B.s143_Add = 0.0;
    BaseEngineController_A02_B.s141_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_A02_B.s138_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_A02_B.s138_ApplyMultipliersforO2KnockControlandEnrichment1
      = 0.0;
    BaseEngineController_A02_B.s158_MinMax1 = 0.0;
    BaseEngineController_A02_B.s149_Sum1 = 0.0;
    BaseEngineController_A02_B.s144_Sum = 0.0;
    BaseEngineController_A02_B.s144_Product1 = 0.0;
    BaseEngineController_A02_B.s147_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s126_DesEquivRatio = 0.0;
    BaseEngineController_A02_B.s121_cranking = 0.0;
    BaseEngineController_A02_B.s121_idle = 0.0;
    BaseEngineController_A02_B.s121_APPRamp = 0.0;
    BaseEngineController_A02_B.s121_torqueRamp = 0.0;
    BaseEngineController_A02_B.s121_remyEn = 0.0;
    BaseEngineController_A02_B.s121_maxRPM = 0.0;
    BaseEngineController_A02_B.s121_motorTQ = 0.0;
    BaseEngineController_A02_B.s121_generatingTQ = 0.0;
    BaseEngineController_A02_B.s108_Sum = 0.0;
    BaseEngineController_A02_B.s15_Sum = 0.0;
    BaseEngineController_A02_B.s93_UnitDelay2 = 0.0;
    BaseEngineController_A02_B.s103_Switch1 = 0.0;
    BaseEngineController_A02_B.s56_Switch = 0.0;
    BaseEngineController_A02_B.s23_MultiportSwitch = 0.0;
    BaseEngineController_A02_B.s35_Product = 0.0;
    BaseEngineController_A02_B.s34_Switch2 = 0.0;
    BaseEngineController_A02_B.s39_Product = 0.0;
    BaseEngineController_A02_B.s31_Sum2 = 0.0;
    BaseEngineController_A02_B.s40_Product = 0.0;
    BaseEngineController_A02_B.s31_Product2 = 0.0;
    BaseEngineController_A02_B.s41_Switch1 = 0.0;
    BaseEngineController_A02_B.s44_MinMax1 = 0.0;
    BaseEngineController_A02_B.s12_Switch = 0.0;
    BaseEngineController_A02_B.s45_In1 = 0.0;
    BaseEngineController_A02_B.s19_TestTime = 0.0;
    BaseEngineController_A02_B.s801_Switch = 0.0;
    BaseEngineController_A02_B.s297_MultiplyandDivideavoidingdivdebyzero1.s150_chargemass
      = 0.0;
    BaseEngineController_A02_B.s145_MultiplyandDivideavoidingdivdebyzero.s150_chargemass
      = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_A02_DWork, 0,
                sizeof(D_Work_BaseEngineController_A02));
  BaseEngineController_A02_DWork.s514_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s569_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s507_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s516_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s585_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s633_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s626_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s650_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s643_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s321_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s588_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s596_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s512_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s277_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s511_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s551_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s486_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s494_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s289_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s292_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s290_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s295_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s288_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s335_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s337_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s534_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s509_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s533_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s531_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s531_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s531_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s67_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s66_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s64_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s63_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s62_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s61_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s60_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s59_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_DWork.s65_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_A02_DWork.s301_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s321_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s510_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s543_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s559_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s508_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s522_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s515_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s577_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s289_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s289_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s289_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s290_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s290_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s290_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s366_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s630_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s630_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s630_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s630_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s647_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s647_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s647_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s647_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s735_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s736_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s738_CrankCounter_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s599_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s607_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s600_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s616_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s333_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s332_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s314_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s327_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s330_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s314_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s314_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s314_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s307_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s278_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s241_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s242_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s233_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s161_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s172_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s173_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s198_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s200_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s130_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s130_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s179_state_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s130_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s183_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s210_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s211_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s205_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s186_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s225_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s224_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s221_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s221_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s221_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s149_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s108_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s93_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s12_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s48_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s39_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s35_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s37_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s40_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s41_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s791_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s791_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s274_TOld = 0.0;
  BaseEngineController_A02_DWork.s121_count = 0.0;
  BaseEngineController_A02_DWork.s19_TimerOld = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_A02_Foreground_Start();

  /* Start for function-call system: '<S2>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S787>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S795>/Function-Call Generator'
   *  Start for SubSystem: '<S785>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S788>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S796>/Function-Call Generator'
   *  Start for SubSystem: '<S785>/motohawk_store_nvmem'
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

  /* Initial conditions for function-call system: '<S2>/Main Power Relay' */

  /* S-Function Block: <S801>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s801_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S785>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S789>:3' */
  BaseEngineController_A02_DWork.s789_is_c8_BaseEngineController_A02 =
    BaseEngineController_A02_IN_PowerDown;

  /* Entry 'PowerDown': '<S789>:1' */
  BaseEngineController_A02_B.s789_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_A02_M)) {
    rtmSetFirstInitCond(BaseEngineController_A02_M, 0);
  }
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
