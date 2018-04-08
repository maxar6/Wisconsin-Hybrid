/*
 * File: BaseEngineController_A02.c
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

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

/* Named constants for Stateflow: '<S805>/ECUP Latch' */
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
      BaseEngineController_A02_B.s120_FPC[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s71_Sum[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s14_MinMax[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s250_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s259_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_B.s258_chargemass[i] = 0.0;
    }

    BaseEngineController_A02_B.s527_Sum1 = 0.0;
    BaseEngineController_A02_B.s581_Merge = 0.0;
    BaseEngineController_A02_B.s520_Sum1 = 0.0;
    BaseEngineController_A02_B.s361_RPMInst = 0.0;
    BaseEngineController_A02_B.s365_GensetEnable = 0.0;
    BaseEngineController_A02_B.s365_GensetEnable_g = 0.0;
    BaseEngineController_A02_B.s365_GensetEnable_a = 0.0;
    BaseEngineController_A02_B.s365_ReadCANMessage_o4 = 0.0;
    BaseEngineController_A02_B.s365_ReadCANMessage_o5 = 0.0;
    BaseEngineController_A02_B.s529_Sum1 = 0.0;
    BaseEngineController_A02_B.s597_Merge = 0.0;
    BaseEngineController_A02_B.s632_Switch = 0.0;
    BaseEngineController_A02_B.s636_MinMax = 0.0;
    BaseEngineController_A02_B.s636_MinMax1 = 0.0;
    BaseEngineController_A02_B.s640_MinMax1 = 0.0;
    BaseEngineController_A02_B.s633_Switch = 0.0;
    BaseEngineController_A02_B.s653_MinMax = 0.0;
    BaseEngineController_A02_B.s653_MinMax1 = 0.0;
    BaseEngineController_A02_B.s657_MinMax1 = 0.0;
    BaseEngineController_A02_B.s650_Merge = 0.0;
    BaseEngineController_A02_B.s667_Merge = 0.0;
    BaseEngineController_A02_B.s329_Switch2 = 0.0;
    BaseEngineController_A02_B.s364_motohawk_data_read1 = 0.0;
    BaseEngineController_A02_B.s323_Switch1 = 0.0;
    BaseEngineController_A02_B.s608_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s607_Merge = 0.0;
    BaseEngineController_A02_B.s327_Sum1 = 0.0;
    BaseEngineController_A02_B.s349_Switch = 0.0;
    BaseEngineController_A02_B.s275_motohawk_delta_time = 0.0;
    BaseEngineController_A02_B.s525_Sum1 = 0.0;
    BaseEngineController_A02_B.s283_Sum = 0.0;
    BaseEngineController_A02_B.s526_Merge = 0.0;
    BaseEngineController_A02_B.s524_Sum1 = 0.0;
    BaseEngineController_A02_B.s563_Merge = 0.0;
    BaseEngineController_A02_B.s282_NominalAirFlowRate2 = 0.0;
    BaseEngineController_A02_B.s282_PressureRatio = 0.0;
    BaseEngineController_A02_B.s287_Merge = 0.0;
    BaseEngineController_A02_B.s360_Gain = 0.0;
    BaseEngineController_A02_B.s506_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s505_Merge = 0.0;
    BaseEngineController_A02_B.s282_Saturation1 = 0.0;
    BaseEngineController_A02_B.s295_Merge = 0.0;
    BaseEngineController_A02_B.s298_Sum1 = 0.0;
    BaseEngineController_A02_B.s296_Merge = 0.0;
    BaseEngineController_A02_B.s301_Sum1 = 0.0;
    BaseEngineController_A02_B.s304_TorquetoPower = 0.0;
    BaseEngineController_A02_B.s312_MinMax1 = 0.0;
    BaseEngineController_A02_B.s343_Sum1 = 0.0;
    BaseEngineController_A02_B.s362_Gain = 0.0;
    BaseEngineController_A02_B.s522_Sum1 = 0.0;
    BaseEngineController_A02_B.s542_Merge = 0.0;
    BaseEngineController_A02_B.s120_SparkEnergy = 0.0;
    BaseEngineController_A02_B.s120_SparkAdv = 0.0;
    BaseEngineController_A02_B.s521_Sum1 = 0.0;
    BaseEngineController_A02_B.s120_EGR = 0.0;
    BaseEngineController_A02_B.s534_Merge = 0.0;
    BaseEngineController_A02_B.s351_Switch = 0.0;
    BaseEngineController_A02_B.s120_Throttle = 0.0;
    BaseEngineController_A02_B.s678_ETC = 0.0;
    BaseEngineController_A02_B.s120_SOI = 0.0;
    BaseEngineController_A02_B.s63_constreftoatm = 0.0;
    BaseEngineController_A02_B.s120_FuelMult = 0.0;
    BaseEngineController_A02_B.s14_Sum2 = 0.0;
    BaseEngineController_A02_B.s14_Sum1 = 0.0;
    BaseEngineController_A02_B.s120_MakeUpEOI = 0.0;
    BaseEngineController_A02_B.s307_Switch1 = 0.0;
    BaseEngineController_A02_B.s347_Sum = 0.0;
    BaseEngineController_A02_B.s327_Sum3 = 0.0;
    BaseEngineController_A02_B.s523_Sum1 = 0.0;
    BaseEngineController_A02_B.s555_Merge = 0.0;
    BaseEngineController_A02_B.s571_Merge = 0.0;
    BaseEngineController_A02_B.s326_Sum3 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage_o2 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage_o3 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage_o4 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o4 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o5 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o11 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o12 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage1_o13 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o2 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o3 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o4 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o5 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o6 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o7 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o8 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o9 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o10 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o11 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o12 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o13 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o14 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o15 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage2_o16 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage3_o2 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage3_o3 = 0.0;
    BaseEngineController_A02_B.s366_ReadCANMessage3_o4 = 0.0;
    BaseEngineController_A02_B.s528_Sum1 = 0.0;
    BaseEngineController_A02_B.s589_Merge = 0.0;
    BaseEngineController_A02_B.s374_UnitDelay = 0.0;
    BaseEngineController_A02_B.s749_Sum = 0.0;
    BaseEngineController_A02_B.s750_Sum = 0.0;
    BaseEngineController_A02_B.s752_CrankCounter = 0.0;
    BaseEngineController_A02_B.s619_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s612_Merge = 0.0;
    BaseEngineController_A02_B.s618_Merge = 0.0;
    BaseEngineController_A02_B.s628_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s613_Merge = 0.0;
    BaseEngineController_A02_B.s627_Merge = 0.0;
    BaseEngineController_A02_B.s386_hp = 0.0;
    BaseEngineController_A02_B.s386_kw = 0.0;
    BaseEngineController_A02_B.s339_Product = 0.0;
    BaseEngineController_A02_B.s338_Product = 0.0;
    BaseEngineController_A02_B.s320_Merge = 0.0;
    BaseEngineController_A02_B.s336_Sum2 = 0.0;
    BaseEngineController_A02_B.s313_Switch1 = 0.0;
    BaseEngineController_A02_B.s284_Product = 0.0;
    BaseEngineController_A02_B.s280_Timer = 0.0;
    BaseEngineController_A02_B.s247_UnitDelay = 0.0;
    BaseEngineController_A02_B.s248_UnitDelay = 0.0;
    BaseEngineController_A02_B.s139_Product = 0.0;
    BaseEngineController_A02_B.s139_Sum = 0.0;
    BaseEngineController_A02_B.s129_MultiportSwitch = 0.0;
    BaseEngineController_A02_B.s131_Product = 0.0;
    BaseEngineController_A02_B.s241_Add = 0.0;
    BaseEngineController_A02_B.s238_Product = 0.0;
    BaseEngineController_A02_B.s136_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_A02_B.s244_MinMax1 = 0.0;
    BaseEngineController_A02_B.s239_Switch = 0.0;
    BaseEngineController_A02_B.s136_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_A02_B.s133_Sum = 0.0;
    BaseEngineController_A02_B.s168_Merge = 0.0;
    BaseEngineController_A02_B.s168_Merge1 = 0.0;
    BaseEngineController_A02_B.s167_DontallowsetpointtoevergoabovetheTargetRPM =
      0.0;
    BaseEngineController_A02_B.s177_Sum2 = 0.0;
    BaseEngineController_A02_B.s177_Product2 = 0.0;
    BaseEngineController_A02_B.s178_Product = 0.0;
    BaseEngineController_A02_B.s179_Switch1 = 0.0;
    BaseEngineController_A02_B.s169_Switch = 0.0;
    BaseEngineController_A02_B.s165_Sum = 0.0;
    BaseEngineController_A02_B.s199_MinMax1 = 0.0;
    BaseEngineController_A02_B.s189_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_B.s215_Sum2 = 0.0;
    BaseEngineController_A02_B.s215_Product2 = 0.0;
    BaseEngineController_A02_B.s216_Product = 0.0;
    BaseEngineController_A02_B.s217_Switch1 = 0.0;
    BaseEngineController_A02_B.s134_MinGovAirPID = 0.0;
    BaseEngineController_A02_B.s210_Sum1 = 0.0;
    BaseEngineController_A02_B.s210_Product = 0.0;
    BaseEngineController_A02_B.s211_Product = 0.0;
    BaseEngineController_A02_B.s134_IdleSpk = 0.0;
    BaseEngineController_A02_B.s207_Switch = 0.0;
    BaseEngineController_A02_B.s192_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_B.s222_Switch = 0.0;
    BaseEngineController_A02_B.s229_Sum2 = 0.0;
    BaseEngineController_A02_B.s229_Product2 = 0.0;
    BaseEngineController_A02_B.s231_Switch1 = 0.0;
    BaseEngineController_A02_B.s230_Product = 0.0;
    BaseEngineController_A02_B.s227_Switch3 = 0.0;
    BaseEngineController_A02_B.s227_Switch1 = 0.0;
    BaseEngineController_A02_B.s227_Switch4 = 0.0;
    BaseEngineController_A02_B.s222_Multiplyby10ifnotyetenabled = 0.0;
    BaseEngineController_A02_B.s149_Add = 0.0;
    BaseEngineController_A02_B.s147_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_A02_B.s144_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_A02_B.s144_ApplyMultipliersforO2KnockControlandEnrichment1
      = 0.0;
    BaseEngineController_A02_B.s164_MinMax1 = 0.0;
    BaseEngineController_A02_B.s155_Sum1 = 0.0;
    BaseEngineController_A02_B.s150_Sum = 0.0;
    BaseEngineController_A02_B.s150_Product1 = 0.0;
    BaseEngineController_A02_B.s153_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s130_DesEquivRatio = 0.0;
    BaseEngineController_A02_B.s127_APP = 0.0;
    BaseEngineController_A02_B.s127_remyEn = 0.0;
    BaseEngineController_A02_B.s127_maxRPM = 0.0;
    BaseEngineController_A02_B.s127_motorTQ = 0.0;
    BaseEngineController_A02_B.s127_generatingTQ = 0.0;
    BaseEngineController_A02_B.s114_Sum = 0.0;
    BaseEngineController_A02_B.s16_Sum = 0.0;
    BaseEngineController_A02_B.s99_UnitDelay2 = 0.0;
    BaseEngineController_A02_B.s109_Switch1 = 0.0;
    BaseEngineController_A02_B.s62_Switch = 0.0;
    BaseEngineController_A02_B.s29_MultiportSwitch = 0.0;
    BaseEngineController_A02_B.s41_Product = 0.0;
    BaseEngineController_A02_B.s40_Switch2 = 0.0;
    BaseEngineController_A02_B.s45_Product = 0.0;
    BaseEngineController_A02_B.s37_Sum2 = 0.0;
    BaseEngineController_A02_B.s46_Product = 0.0;
    BaseEngineController_A02_B.s37_Product2 = 0.0;
    BaseEngineController_A02_B.s47_Switch1 = 0.0;
    BaseEngineController_A02_B.s50_MinMax1 = 0.0;
    BaseEngineController_A02_B.s13_Switch = 0.0;
    BaseEngineController_A02_B.s51_In1 = 0.0;
    BaseEngineController_A02_B.s25_TestTime = 0.0;
    BaseEngineController_A02_B.s20_enout = 0.0;
    BaseEngineController_A02_B.s821_Switch = 0.0;
    BaseEngineController_A02_B.s303_MultiplyandDivideavoidingdivdebyzero1.s156_chargemass
      = 0.0;
    BaseEngineController_A02_B.s151_MultiplyandDivideavoidingdivdebyzero.s156_chargemass
      = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_A02_DWork, 0,
                sizeof(D_Work_BaseEngineController_A02));
  BaseEngineController_A02_DWork.s527_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s582_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s520_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s529_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s598_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s646_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s639_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s663_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s656_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s327_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s601_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s609_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s525_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s283_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s524_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s564_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s499_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s507_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s295_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s298_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s296_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s301_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s294_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s341_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s343_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s547_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s522_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s546_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s544_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s544_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s544_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s521_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s535_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s73_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s72_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s70_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s69_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s68_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s67_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s66_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s65_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_DWork.s71_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_A02_DWork.s307_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s327_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s523_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s556_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s572_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s424_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s528_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s590_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s295_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s295_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s295_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s296_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s296_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s296_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s374_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s643_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s643_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s643_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s660_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s660_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s660_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s660_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s749_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s750_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s752_CrankCounter_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s612_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s620_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s613_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s629_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_DWork.s259_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_A02_DWork.s339_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s338_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s320_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s333_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s336_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s320_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s320_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s320_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s313_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s284_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s248_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s239_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s167_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s178_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s179_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s204_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s206_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s134_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s134_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s185_state_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s134_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s189_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s216_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s217_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s211_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s192_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s231_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s230_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s227_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s227_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s227_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s155_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s114_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s99_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s13_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s54_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s45_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s41_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s43_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s47_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s811_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s811_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s280_TOld = 0.0;
  BaseEngineController_A02_DWork.s127_count = 0.0;
  BaseEngineController_A02_DWork.s25_TimerOld = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_A02_Foreground_Start();

  /* Start for function-call system: '<S2>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S807>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S815>/Function-Call Generator'
   *  Start for SubSystem: '<S805>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S808>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S816>/Function-Call Generator'
   *  Start for SubSystem: '<S805>/motohawk_store_nvmem'
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

  /* S-Function Block: <S821>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s821_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S805>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S809>:3' */
  BaseEngineController_A02_DWork.s809_is_c8_BaseEngineController_A02 =
    BaseEngineController_A02_IN_PowerDown;

  /* Entry 'PowerDown': '<S809>:1' */
  BaseEngineController_A02_B.s809_MPRDState = FALSE;

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
