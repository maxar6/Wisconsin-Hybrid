/*
 * File: BaseEngineController_A02.c
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1553
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Wed Jan 24 11:43:49 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

/* Named constants for Stateflow: '<S822>/ECUP Latch' */
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

    BaseEngineController_A02_B.s549_Sum1 = 0.0;
    BaseEngineController_A02_B.s598_Merge = 0.0;
    BaseEngineController_A02_B.s542_Sum1 = 0.0;
    BaseEngineController_A02_B.s393_RPMInst = 0.0;
    BaseEngineController_A02_B.s397_GensetEnable = 0.0;
    BaseEngineController_A02_B.s397_GensetEnable_g = 0.0;
    BaseEngineController_A02_B.s397_GensetEnable_a = 0.0;
    BaseEngineController_A02_B.s119_generatingTQ = 0.0;
    BaseEngineController_A02_B.s551_Sum1 = 0.0;
    BaseEngineController_A02_B.s614_Merge = 0.0;
    BaseEngineController_A02_B.s649_Switch = 0.0;
    BaseEngineController_A02_B.s653_MinMax = 0.0;
    BaseEngineController_A02_B.s653_MinMax1 = 0.0;
    BaseEngineController_A02_B.s657_MinMax1 = 0.0;
    BaseEngineController_A02_B.s650_Switch = 0.0;
    BaseEngineController_A02_B.s670_MinMax = 0.0;
    BaseEngineController_A02_B.s670_MinMax1 = 0.0;
    BaseEngineController_A02_B.s674_MinMax1 = 0.0;
    BaseEngineController_A02_B.s667_Merge = 0.0;
    BaseEngineController_A02_B.s684_Merge = 0.0;
    BaseEngineController_A02_B.s360_Switch2 = 0.0;
    BaseEngineController_A02_B.s396_motohawk_data_read1 = 0.0;
    BaseEngineController_A02_B.s652_Merge = 0.0;
    BaseEngineController_A02_B.s354_Switch1 = 0.0;
    BaseEngineController_A02_B.s625_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s624_Merge = 0.0;
    BaseEngineController_A02_B.s358_Sum1 = 0.0;
    BaseEngineController_A02_B.s381_Switch = 0.0;
    BaseEngineController_A02_B.s305_motohawk_delta_time = 0.0;
    BaseEngineController_A02_B.s547_Sum1 = 0.0;
    BaseEngineController_A02_B.s313_Sum = 0.0;
    BaseEngineController_A02_B.s548_Merge = 0.0;
    BaseEngineController_A02_B.s546_Sum1 = 0.0;
    BaseEngineController_A02_B.s580_Merge = 0.0;
    BaseEngineController_A02_B.s312_NominalAirFlowRate2 = 0.0;
    BaseEngineController_A02_B.s312_PressureRatio = 0.0;
    BaseEngineController_A02_B.s392_Gain = 0.0;
    BaseEngineController_A02_B.s528_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s527_Merge = 0.0;
    BaseEngineController_A02_B.s312_Saturation1 = 0.0;
    BaseEngineController_A02_B.s334_TorquetoPower = 0.0;
    BaseEngineController_A02_B.s325_Merge = 0.0;
    BaseEngineController_A02_B.s328_Sum1 = 0.0;
    BaseEngineController_A02_B.s326_Merge = 0.0;
    BaseEngineController_A02_B.s331_Sum1 = 0.0;
    BaseEngineController_A02_B.s342_MinMax1 = 0.0;
    BaseEngineController_A02_B.s375_Sum1 = 0.0;
    BaseEngineController_A02_B.s543_Sum1 = 0.0;
    BaseEngineController_A02_B.s394_Gain = 0.0;
    BaseEngineController_A02_B.s544_Sum1 = 0.0;
    BaseEngineController_A02_B.s556_Merge = 0.0;
    BaseEngineController_A02_B.s564_Merge = 0.0;
    BaseEngineController_A02_B.s120_SparkEnergy = 0.0;
    BaseEngineController_A02_B.s120_SparkAdv = 0.0;
    BaseEngineController_A02_B.s120_EGR = 0.0;
    BaseEngineController_A02_B.s383_Switch = 0.0;
    BaseEngineController_A02_B.s120_Throttle = 0.0;
    BaseEngineController_A02_B.s695_ETC = 0.0;
    BaseEngineController_A02_B.s120_SOI = 0.0;
    BaseEngineController_A02_B.s63_constreftoatm = 0.0;
    BaseEngineController_A02_B.s120_FuelMult = 0.0;
    BaseEngineController_A02_B.s14_Sum2 = 0.0;
    BaseEngineController_A02_B.s14_Sum1 = 0.0;
    BaseEngineController_A02_B.s120_MakeUpEOI = 0.0;
    BaseEngineController_A02_B.s337_Switch1 = 0.0;
    BaseEngineController_A02_B.s379_Sum = 0.0;
    BaseEngineController_A02_B.s358_Sum3 = 0.0;
    BaseEngineController_A02_B.s545_Sum1 = 0.0;
    BaseEngineController_A02_B.s572_Merge = 0.0;
    BaseEngineController_A02_B.s588_Merge = 0.0;
    BaseEngineController_A02_B.s357_Sum3 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage_o2 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage_o3 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage_o4 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o4 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o5 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o11 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o12 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage1_o13 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o2 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o3 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o4 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o5 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o6 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o7 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o8 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o9 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o10 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o11 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o12 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o13 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o14 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o15 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage2_o16 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage3_o2 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage3_o3 = 0.0;
    BaseEngineController_A02_B.s398_ReadCANMessage3_o4 = 0.0;
    BaseEngineController_A02_B.s550_Sum1 = 0.0;
    BaseEngineController_A02_B.s606_Merge = 0.0;
    BaseEngineController_A02_B.s403_UnitDelay = 0.0;
    BaseEngineController_A02_B.s766_Sum = 0.0;
    BaseEngineController_A02_B.s767_Sum = 0.0;
    BaseEngineController_A02_B.s769_CrankCounter = 0.0;
    BaseEngineController_A02_B.s636_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s629_Merge = 0.0;
    BaseEngineController_A02_B.s635_Merge = 0.0;
    BaseEngineController_A02_B.s645_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s630_Merge = 0.0;
    BaseEngineController_A02_B.s644_Merge = 0.0;
    BaseEngineController_A02_B.s299_Gain = 0.0;
    BaseEngineController_A02_B.s371_Product = 0.0;
    BaseEngineController_A02_B.s370_Product = 0.0;
    BaseEngineController_A02_B.s351_Merge = 0.0;
    BaseEngineController_A02_B.s368_Sum2 = 0.0;
    BaseEngineController_A02_B.s364_APP_Out = 0.0;
    BaseEngineController_A02_B.s343_Switch1 = 0.0;
    BaseEngineController_A02_B.s314_Product = 0.0;
    BaseEngineController_A02_B.s310_Timer = 0.0;
    BaseEngineController_A02_B.s270_UnitDelay = 0.0;
    BaseEngineController_A02_B.s271_UnitDelay = 0.0;
    BaseEngineController_A02_B.s147_Sum2 = 0.0;
    BaseEngineController_A02_B.s147_Product2 = 0.0;
    BaseEngineController_A02_B.s148_Product = 0.0;
    BaseEngineController_A02_B.s149_Switch1 = 0.0;
    BaseEngineController_A02_B.s145_Switch = 0.0;
    BaseEngineController_A02_B.s140_Add = 0.0;
    BaseEngineController_A02_B.s131_MultiportSwitch = 0.0;
    BaseEngineController_A02_B.s133_Product = 0.0;
    BaseEngineController_A02_B.s264_Add = 0.0;
    BaseEngineController_A02_B.s259_Product = 0.0;
    BaseEngineController_A02_B.s261_Product = 0.0;
    BaseEngineController_A02_B.s260_Product = 0.0;
    BaseEngineController_A02_B.s139_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_A02_B.s267_MinMax1 = 0.0;
    BaseEngineController_A02_B.s262_Switch = 0.0;
    BaseEngineController_A02_B.s139_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_A02_B.s135_Sum = 0.0;
    BaseEngineController_A02_B.s188_Merge = 0.0;
    BaseEngineController_A02_B.s188_Merge1 = 0.0;
    BaseEngineController_A02_B.s187_DontallowsetpointtoevergoabovetheTargetRPM =
      0.0;
    BaseEngineController_A02_B.s197_Sum2 = 0.0;
    BaseEngineController_A02_B.s197_Product2 = 0.0;
    BaseEngineController_A02_B.s198_Product = 0.0;
    BaseEngineController_A02_B.s199_Switch1 = 0.0;
    BaseEngineController_A02_B.s189_Switch = 0.0;
    BaseEngineController_A02_B.s185_Sum = 0.0;
    BaseEngineController_A02_B.s219_MinMax1 = 0.0;
    BaseEngineController_A02_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_B.s235_Sum2 = 0.0;
    BaseEngineController_A02_B.s235_Product2 = 0.0;
    BaseEngineController_A02_B.s236_Product = 0.0;
    BaseEngineController_A02_B.s237_Switch1 = 0.0;
    BaseEngineController_A02_B.s136_MinGovAirPID = 0.0;
    BaseEngineController_A02_B.s230_Sum1 = 0.0;
    BaseEngineController_A02_B.s230_Product = 0.0;
    BaseEngineController_A02_B.s231_Product = 0.0;
    BaseEngineController_A02_B.s136_IdleSpk = 0.0;
    BaseEngineController_A02_B.s227_Switch = 0.0;
    BaseEngineController_A02_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_B.s242_Switch = 0.0;
    BaseEngineController_A02_B.s249_Sum2 = 0.0;
    BaseEngineController_A02_B.s249_Product2 = 0.0;
    BaseEngineController_A02_B.s251_Switch1 = 0.0;
    BaseEngineController_A02_B.s250_Product = 0.0;
    BaseEngineController_A02_B.s247_Switch3 = 0.0;
    BaseEngineController_A02_B.s247_Switch1 = 0.0;
    BaseEngineController_A02_B.s247_Switch4 = 0.0;
    BaseEngineController_A02_B.s242_Multiplyby10ifnotyetenabled = 0.0;
    BaseEngineController_A02_B.s160_Add = 0.0;
    BaseEngineController_A02_B.s158_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_A02_B.s155_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_A02_B.s155_ApplyMultipliersforO2KnockControlandEnrichment1
      = 0.0;
    BaseEngineController_A02_B.s184_MinMax1 = 0.0;
    BaseEngineController_A02_B.s175_Switch1 = 0.0;
    BaseEngineController_A02_B.s170_Product = 0.0;
    BaseEngineController_A02_B.s176_uX = 0.0;
    BaseEngineController_A02_B.s176_Product2 = 0.0;
    BaseEngineController_A02_B.s173_Cantinjectnegativefuel = 0.0;
    BaseEngineController_A02_B.s173_Product = 0.0;
    BaseEngineController_A02_B.s167_Sum1 = 0.0;
    BaseEngineController_A02_B.s161_Sum = 0.0;
    BaseEngineController_A02_B.s161_Product1 = 0.0;
    BaseEngineController_A02_B.s165_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s132_DesEquivRatio = 0.0;
    BaseEngineController_A02_B.s144_State = 0.0;
    BaseEngineController_A02_B.s144_Setpoint = 0.0;
    BaseEngineController_A02_B.s127_cranking = 0.0;
    BaseEngineController_A02_B.s127_idle = 0.0;
    BaseEngineController_A02_B.s127_APPRamp = 0.0;
    BaseEngineController_A02_B.s127_torqueRamp = 0.0;
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
    BaseEngineController_A02_B.s838_Switch = 0.0;
    BaseEngineController_A02_B.s333_MultiplyandDivideavoidingdivdebyzero1.s168_chargemass
      = 0.0;
    BaseEngineController_A02_B.s162_MultiplyandDivideavoidingdivdebyzero.s168_chargemass
      = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_A02_DWork, 0,
                sizeof(D_Work_BaseEngineController_A02));
  BaseEngineController_A02_DWork.s549_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s599_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s542_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s551_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s615_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s663_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s656_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s680_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s673_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s358_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s618_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s626_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s547_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s313_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s546_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s581_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s521_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s529_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s325_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s328_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s326_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s331_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s324_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s373_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s375_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s543_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s557_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s544_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s565_UnitDelay_DSTATE = 0.0;
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

  BaseEngineController_A02_DWork.s337_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s358_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s545_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s573_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s589_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s550_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s607_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s325_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s325_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s325_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s326_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s326_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s326_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s403_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s660_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s660_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s660_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s660_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s677_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s677_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s677_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s677_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s766_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s767_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s769_CrankCounter_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s629_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s637_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s630_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s646_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s371_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s370_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s351_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s365_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s368_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s351_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s351_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s351_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s343_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s314_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s270_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s271_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s140_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s148_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s149_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s262_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s187_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s198_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s199_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s224_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s226_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s136_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s136_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s205_state_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s136_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s209_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s236_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s237_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s231_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s212_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s251_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s250_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s247_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s247_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s247_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s175_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s167_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s114_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s99_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s13_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s54_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s45_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s41_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s43_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s47_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s828_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s828_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s310_TOld = 0.0;
  BaseEngineController_A02_DWork.s127_count = 0.0;
  BaseEngineController_A02_DWork.s25_TimerOld = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_A02_Foreground_Start();

  /* Start for function-call system: '<S2>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S824>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S832>/Function-Call Generator'
   *  Start for SubSystem: '<S822>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S825>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S833>/Function-Call Generator'
   *  Start for SubSystem: '<S822>/motohawk_store_nvmem'
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

  /* S-Function Block: <S838>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s838_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S822>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S826>:3' */
  BaseEngineController_A02_DWork.s826_is_c8_BaseEngineController_A02 =
    BaseEngineController_A02_IN_PowerDown;

  /* Entry 'PowerDown': '<S826>:1' */
  BaseEngineController_A02_B.s826_MPRDState = FALSE;

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
