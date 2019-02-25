/*
 * File: BaseEngineController_A02.c
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1524
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Jan 01 03:08:50 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

/* Named constants for Stateflow: '<S840>/ECUP Latch' */
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

    BaseEngineController_A02_B.s563_Sum1 = 0.0;
    BaseEngineController_A02_B.s612_Merge = 0.0;
    BaseEngineController_A02_B.s556_Sum1 = 0.0;
    BaseEngineController_A02_B.s407_RPMInst = 0.0;
    BaseEngineController_A02_B.s411_GensetEnable = 0.0;
    BaseEngineController_A02_B.s411_GensetEnable_g = 0.0;
    BaseEngineController_A02_B.s411_GensetEnable_a = 0.0;
    BaseEngineController_A02_B.s119_generatingTQ = 0.0;
    BaseEngineController_A02_B.s565_Sum1 = 0.0;
    BaseEngineController_A02_B.s628_Merge = 0.0;
    BaseEngineController_A02_B.s663_Switch = 0.0;
    BaseEngineController_A02_B.s667_MinMax = 0.0;
    BaseEngineController_A02_B.s667_MinMax1 = 0.0;
    BaseEngineController_A02_B.s671_MinMax1 = 0.0;
    BaseEngineController_A02_B.s664_Switch = 0.0;
    BaseEngineController_A02_B.s684_MinMax = 0.0;
    BaseEngineController_A02_B.s684_MinMax1 = 0.0;
    BaseEngineController_A02_B.s688_MinMax1 = 0.0;
    BaseEngineController_A02_B.s681_Merge = 0.0;
    BaseEngineController_A02_B.s698_Merge = 0.0;
    BaseEngineController_A02_B.s374_Switch2 = 0.0;
    BaseEngineController_A02_B.s410_motohawk_data_read1 = 0.0;
    BaseEngineController_A02_B.s666_Merge = 0.0;
    BaseEngineController_A02_B.s368_Switch1 = 0.0;
    BaseEngineController_A02_B.s639_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s638_Merge = 0.0;
    BaseEngineController_A02_B.s372_Sum1 = 0.0;
    BaseEngineController_A02_B.s395_Switch = 0.0;
    BaseEngineController_A02_B.s319_motohawk_delta_time = 0.0;
    BaseEngineController_A02_B.s561_Sum1 = 0.0;
    BaseEngineController_A02_B.s327_Sum = 0.0;
    BaseEngineController_A02_B.s562_Merge = 0.0;
    BaseEngineController_A02_B.s560_Sum1 = 0.0;
    BaseEngineController_A02_B.s594_Merge = 0.0;
    BaseEngineController_A02_B.s326_NominalAirFlowRate2 = 0.0;
    BaseEngineController_A02_B.s326_PressureRatio = 0.0;
    BaseEngineController_A02_B.s406_Gain = 0.0;
    BaseEngineController_A02_B.s542_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s541_Merge = 0.0;
    BaseEngineController_A02_B.s326_Saturation1 = 0.0;
    BaseEngineController_A02_B.s348_TorquetoPower = 0.0;
    BaseEngineController_A02_B.s339_Merge = 0.0;
    BaseEngineController_A02_B.s342_Sum1 = 0.0;
    BaseEngineController_A02_B.s340_Merge = 0.0;
    BaseEngineController_A02_B.s345_Sum1 = 0.0;
    BaseEngineController_A02_B.s356_MinMax1 = 0.0;
    BaseEngineController_A02_B.s389_Sum1 = 0.0;
    BaseEngineController_A02_B.s557_Sum1 = 0.0;
    BaseEngineController_A02_B.s408_Gain = 0.0;
    BaseEngineController_A02_B.s558_Sum1 = 0.0;
    BaseEngineController_A02_B.s570_Merge = 0.0;
    BaseEngineController_A02_B.s578_Merge = 0.0;
    BaseEngineController_A02_B.s120_SparkEnergy = 0.0;
    BaseEngineController_A02_B.s120_SparkAdv = 0.0;
    BaseEngineController_A02_B.s120_EGR = 0.0;
    BaseEngineController_A02_B.s397_Switch = 0.0;
    BaseEngineController_A02_B.s120_Throttle = 0.0;
    BaseEngineController_A02_B.s709_ETC = 0.0;
    BaseEngineController_A02_B.s120_SOI = 0.0;
    BaseEngineController_A02_B.s63_constreftoatm = 0.0;
    BaseEngineController_A02_B.s120_FuelMult = 0.0;
    BaseEngineController_A02_B.s14_Sum2 = 0.0;
    BaseEngineController_A02_B.s14_Sum1 = 0.0;
    BaseEngineController_A02_B.s120_MakeUpEOI = 0.0;
    BaseEngineController_A02_B.s351_Switch1 = 0.0;
    BaseEngineController_A02_B.s393_Sum = 0.0;
    BaseEngineController_A02_B.s372_Sum3 = 0.0;
    BaseEngineController_A02_B.s559_Sum1 = 0.0;
    BaseEngineController_A02_B.s586_Merge = 0.0;
    BaseEngineController_A02_B.s602_Merge = 0.0;
    BaseEngineController_A02_B.s371_Sum3 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage_o2 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage_o3 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage_o4 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o4 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o5 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o11 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o12 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage1_o13 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o2 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o3 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o4 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o5 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o6 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o7 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o8 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o9 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o10 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o11 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o12 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o13 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o14 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o15 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage2_o16 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage3_o2 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage3_o3 = 0.0;
    BaseEngineController_A02_B.s412_ReadCANMessage3_o4 = 0.0;
    BaseEngineController_A02_B.s564_Sum1 = 0.0;
    BaseEngineController_A02_B.s620_Merge = 0.0;
    BaseEngineController_A02_B.s417_UnitDelay = 0.0;
    BaseEngineController_A02_B.s780_Sum = 0.0;
    BaseEngineController_A02_B.s781_Sum = 0.0;
    BaseEngineController_A02_B.s783_CrankCounter = 0.0;
    BaseEngineController_A02_B.s650_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s643_Merge = 0.0;
    BaseEngineController_A02_B.s649_Merge = 0.0;
    BaseEngineController_A02_B.s659_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_B.s644_Merge = 0.0;
    BaseEngineController_A02_B.s658_Merge = 0.0;
    BaseEngineController_A02_B.s313_Gain = 0.0;
    BaseEngineController_A02_B.s385_Product = 0.0;
    BaseEngineController_A02_B.s384_Product = 0.0;
    BaseEngineController_A02_B.s365_Merge = 0.0;
    BaseEngineController_A02_B.s382_Sum2 = 0.0;
    BaseEngineController_A02_B.s378_APP_Out = 0.0;
    BaseEngineController_A02_B.s357_Switch1 = 0.0;
    BaseEngineController_A02_B.s328_Product = 0.0;
    BaseEngineController_A02_B.s324_Timer = 0.0;
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
    BaseEngineController_A02_B.s856_Switch = 0.0;
    BaseEngineController_A02_B.s347_MultiplyandDivideavoidingdivdebyzero1.s168_chargemass
      = 0.0;
    BaseEngineController_A02_B.s162_MultiplyandDivideavoidingdivdebyzero.s168_chargemass
      = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_A02_DWork, 0,
                sizeof(D_Work_BaseEngineController_A02));
  BaseEngineController_A02_DWork.s563_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s613_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s556_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s565_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s629_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s677_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s670_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s694_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s687_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s372_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s632_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s640_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s561_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s327_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s560_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s595_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s535_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s543_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s339_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s342_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s340_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s345_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s338_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s387_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s389_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s557_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s571_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s558_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s579_UnitDelay_DSTATE = 0.0;
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

  BaseEngineController_A02_DWork.s351_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s372_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s559_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s587_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s603_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s564_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s621_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s339_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s339_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s339_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s340_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s340_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s340_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s417_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s674_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s674_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s674_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s674_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s691_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s691_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s691_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s691_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s780_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s781_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s783_CrankCounter_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s643_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s651_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s644_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s660_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s274_Initializedat1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s385_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s384_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s365_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s379_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s382_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s365_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s365_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s365_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s357_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s328_UnitDelay1_DSTATE = 0.0;
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
  BaseEngineController_A02_DWork.s846_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s846_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_DWork.s324_TOld = 0.0;
  BaseEngineController_A02_DWork.s127_count = 0.0;
  BaseEngineController_A02_DWork.s25_TimerOld = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_A02_Foreground_Start();

  /* Start for function-call system: '<S2>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S842>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S850>/Function-Call Generator'
   *  Start for SubSystem: '<S840>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S843>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S851>/Function-Call Generator'
   *  Start for SubSystem: '<S840>/motohawk_store_nvmem'
   */
  BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage5_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage4_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage3_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage2_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage1_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.FreezeFrameDataStorage_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_A02_PrevZCSigState.ClearFFIDsandFltOrder_Trig_ZCE =
    POS_ZCSIG;
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

  /* S-Function Block: <S856>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_DWork.s856_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S840>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S844>:3' */
  BaseEngineController_A02_DWork.s844_is_c8_BaseEngineController_A02 =
    BaseEngineController_A02_IN_PowerDown;

  /* Entry 'PowerDown': '<S844>:1' */
  BaseEngineController_A02_B.s844_MPRDState = FALSE;

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
