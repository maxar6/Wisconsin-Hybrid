/*
 * File: BaseEngineController_A02.h
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1560
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Feb 10 00:15:12 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BaseEngineController_A02_h_
#define RTW_HEADER_BaseEngineController_A02_h_
#ifndef BaseEngineController_A02_COMMON_INCLUDES_
# define BaseEngineController_A02_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#endif                                 /* BaseEngineController_A02_COMMON_INCLUDES_ */

#include "BaseEngineController_A02_types.h"

/* Child system includes */
#include "Foreground.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((void*) 0)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T s550_Sum1;                    /* '<S550>/Sum1' */
  real_T s599_Merge;                   /* '<S599>/Merge' */
  real_T s543_Sum1;                    /* '<S543>/Sum1' */
  real_T s393_RPMInst;                 /* '<S393>/Data Type Conversion1' */
  real_T s397_GensetEnable;            /* '<S397>/Read CAN Message' */
  real_T s397_GensetEnable_g;          /* '<S397>/Read CAN Message' */
  real_T s397_GensetEnable_a;          /* '<S397>/Read CAN Message' */
  real_T s119_generatingTQ;            /* '<S119>/Switch' */
  real_T s552_Sum1;                    /* '<S552>/Sum1' */
  real_T s615_Merge;                   /* '<S615>/Merge' */
  real_T s650_Switch;                  /* '<S650>/Switch' */
  real_T s654_MinMax;                  /* '<S654>/MinMax' */
  real_T s654_MinMax1;                 /* '<S654>/MinMax1' */
  real_T s658_MinMax1;                 /* '<S658>/MinMax1' */
  real_T s651_Switch;                  /* '<S651>/Switch' */
  real_T s671_MinMax;                  /* '<S671>/MinMax' */
  real_T s671_MinMax1;                 /* '<S671>/MinMax1' */
  real_T s675_MinMax1;                 /* '<S675>/MinMax1' */
  real_T s668_Merge;                   /* '<S668>/Merge' */
  real_T s685_Merge;                   /* '<S685>/Merge' */
  real_T s360_Switch2;                 /* '<S360>/Switch2' */
  real_T s396_motohawk_data_read1;     /* '<S396>/motohawk_data_read1' */
  real_T s653_Merge;                   /* '<S653>/Merge' */
  real_T s354_Switch1;                 /* '<S354>/Switch1' */
  real_T s626_motohawk_interpolation_1d;/* '<S626>/motohawk_interpolation_1d' */
  real_T s625_Merge;                   /* '<S625>/Merge' */
  real_T s358_Sum1;                    /* '<S358>/Sum1' */
  real_T s381_Switch;                  /* '<S381>/Switch' */
  real_T s305_motohawk_delta_time;     /* '<S305>/motohawk_delta_time' */
  real_T s548_Sum1;                    /* '<S548>/Sum1' */
  real_T s313_Sum;                     /* '<S313>/Sum' */
  real_T s549_Merge;                   /* '<S549>/Merge' */
  real_T s547_Sum1;                    /* '<S547>/Sum1' */
  real_T s581_Merge;                   /* '<S581>/Merge' */
  real_T s312_NominalAirFlowRate2;     /* '<S312>/Nominal Air Flow Rate2' */
  real_T s312_PressureRatio;           /* '<S312>/Pressure Ratio' */
  real_T s392_Gain;                    /* '<S392>/Gain' */
  real_T s529_motohawk_interpolation_1d;/* '<S529>/motohawk_interpolation_1d' */
  real_T s528_Merge;                   /* '<S528>/Merge' */
  real_T s312_Saturation1;             /* '<S312>/Saturation1' */
  real_T s334_TorquetoPower;           /* '<S334>/Torque to Power' */
  real_T s325_Merge;                   /* '<S325>/Merge' */
  real_T s328_Sum1;                    /* '<S328>/Sum1' */
  real_T s326_Merge;                   /* '<S326>/Merge' */
  real_T s331_Sum1;                    /* '<S331>/Sum1' */
  real_T s342_MinMax1;                 /* '<S342>/MinMax1' */
  real_T s375_Sum1;                    /* '<S375>/Sum1' */
  real_T s544_Sum1;                    /* '<S544>/Sum1' */
  real_T s394_Gain;                    /* '<S394>/Gain' */
  real_T s545_Sum1;                    /* '<S545>/Sum1' */
  real_T s557_Merge;                   /* '<S557>/Merge' */
  real_T s565_Merge;                   /* '<S565>/Merge' */
  real_T s120_SparkEnergy;             /* '<S120>/Merge5' */
  real_T s120_SparkAdv;                /* '<S120>/Merge4' */
  real_T s120_EGR;                     /* '<S120>/Merge3' */
  real_T s383_Switch;                  /* '<S383>/Switch' */
  real_T s120_Throttle;                /* '<S120>/Merge8' */
  real_T s696_ETC;                     /* '<S696>/Saturation' */
  real_T s120_SOI;                     /* '<S120>/Merge1' */
  real_T s120_FPC[8];                  /* '<S120>/Merge2' */
  real_T s71_Sum[8];                   /* '<S71>/Sum' */
  real_T s63_constreftoatm;            /* '<S63>/const ref to atm' */
  real_T s120_FuelMult;                /* '<S120>/Merge6' */
  real_T s14_Sum2;                     /* '<S14>/Sum2' */
  real_T s14_Sum1;                     /* '<S14>/Sum1' */
  real_T s14_MinMax[8];                /* '<S14>/MinMax' */
  real_T s120_MakeUpEOI;               /* '<S120>/Merge10' */
  real_T s337_Switch1;                 /* '<S337>/Switch1' */
  real_T s379_Sum;                     /* '<S379>/Sum' */
  real_T s358_Sum3;                    /* '<S358>/Sum3' */
  real_T s546_Sum1;                    /* '<S546>/Sum1' */
  real_T s573_Merge;                   /* '<S573>/Merge' */
  real_T s589_Merge;                   /* '<S589>/Merge' */
  real_T s357_Sum3;                    /* '<S357>/Sum3' */
  real_T s398_ReadCANMessage_o2;       /* '<S398>/Read CAN Message' */
  real_T s398_ReadCANMessage_o3;       /* '<S398>/Read CAN Message' */
  real_T s398_ReadCANMessage_o4;       /* '<S398>/Read CAN Message' */
  real_T s398_ReadCANMessage1_o2;      /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage1_o3;      /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage1_o4;      /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage1_o5;      /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage1_o6;      /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage1_o7;      /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage1_o8;      /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage1_o9;      /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage1_o10;     /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage1_o11;     /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage1_o12;     /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage1_o13;     /* '<S398>/Read CAN Message1' */
  real_T s398_ReadCANMessage2_o2;      /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o3;      /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o4;      /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o5;      /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o6;      /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o7;      /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o8;      /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o9;      /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o10;     /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o11;     /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o12;     /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o13;     /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o14;     /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o15;     /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage2_o16;     /* '<S398>/Read CAN Message2' */
  real_T s398_ReadCANMessage3_o2;      /* '<S398>/Read CAN Message3' */
  real_T s398_ReadCANMessage3_o3;      /* '<S398>/Read CAN Message3' */
  real_T s398_ReadCANMessage3_o4;      /* '<S398>/Read CAN Message3' */
  real_T s551_Sum1;                    /* '<S551>/Sum1' */
  real_T s607_Merge;                   /* '<S607>/Merge' */
  real_T s404_UnitDelay;               /* '<S404>/Unit Delay' */
  real_T s767_Sum;                     /* '<S767>/Sum' */
  real_T s768_Sum;                     /* '<S768>/Sum' */
  real_T s770_CrankCounter;            /* '<S770>/CrankCounter' */
  real_T s637_motohawk_interpolation_1d;/* '<S637>/motohawk_interpolation_1d' */
  real_T s630_Merge;                   /* '<S630>/Merge' */
  real_T s636_Merge;                   /* '<S636>/Merge' */
  real_T s646_motohawk_interpolation_1d;/* '<S646>/motohawk_interpolation_1d' */
  real_T s631_Merge;                   /* '<S631>/Merge' */
  real_T s645_Merge;                   /* '<S645>/Merge' */
  real_T s299_Gain;                    /* '<S299>/Gain' */
  real_T s371_Product;                 /* '<S371>/Product' */
  real_T s370_Product;                 /* '<S370>/Product' */
  real_T s351_Merge;                   /* '<S351>/Merge' */
  real_T s368_Sum2;                    /* '<S368>/Sum2' */
  real_T s364_APP_Out;                 /* '<S350>/Crank APP Lockout' */
  real_T s343_Switch1;                 /* '<S343>/Switch1' */
  real_T s314_Product;                 /* '<S314>/Product' */
  real_T s310_Timer;                   /* '<S305>/Baro Stall State Delay' */
  real_T s270_UnitDelay;               /* '<S270>/Unit Delay' */
  real_T s271_UnitDelay;               /* '<S271>/Unit Delay' */
  real_T s147_Sum2;                    /* '<S147>/Sum2' */
  real_T s147_Product2;                /* '<S147>/Product2' */
  real_T s148_Product;                 /* '<S148>/Product' */
  real_T s149_Switch1;                 /* '<S149>/Switch1' */
  real_T s145_Switch;                  /* '<S145>/Switch' */
  real_T s140_Add;                     /* '<S140>/Add' */
  real_T s131_MultiportSwitch;         /* '<S131>/Multiport Switch' */
  real_T s133_Product;                 /* '<S133>/Product' */
  real_T s264_Add;                     /* '<S264>/Add' */
  real_T s259_Product;                 /* '<S259>/Product' */
  real_T s261_Product;                 /* '<S261>/Product' */
  real_T s260_Product;                 /* '<S260>/Product' */
  real_T s139_ApplyOffsetstoBaseSparkAdvance1;/* '<S139>/Apply Offsets to Base Spark Advance1' */
  real_T s267_MinMax1;                 /* '<S267>/MinMax1' */
  real_T s262_Switch;                  /* '<S262>/Switch' */
  real_T s139_motohawk_interpolation_2d1;/* '<S139>/motohawk_interpolation_2d1' */
  real_T s135_Sum;                     /* '<S135>/Sum' */
  real_T s188_Merge;                   /* '<S188>/Merge' */
  real_T s188_Merge1;                  /* '<S188>/Merge1' */
  real_T s187_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S187>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s197_Sum2;                    /* '<S197>/Sum2' */
  real_T s197_Product2;                /* '<S197>/Product2' */
  real_T s198_Product;                 /* '<S198>/Product' */
  real_T s199_Switch1;                 /* '<S199>/Switch1' */
  real_T s189_Switch;                  /* '<S189>/Switch' */
  real_T s185_Sum;                     /* '<S185>/Sum' */
  real_T s219_MinMax1;                 /* '<S219>/MinMax1' */
  real_T s209_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S209>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s235_Sum2;                    /* '<S235>/Sum2' */
  real_T s235_Product2;                /* '<S235>/Product2' */
  real_T s236_Product;                 /* '<S236>/Product' */
  real_T s237_Switch1;                 /* '<S237>/Switch1' */
  real_T s136_MinGovAirPID;            /* '<S136>/Product1' */
  real_T s230_Sum1;                    /* '<S230>/Sum1' */
  real_T s230_Product;                 /* '<S230>/Product' */
  real_T s231_Product;                 /* '<S231>/Product' */
  real_T s136_IdleSpk;                 /* '<S136>/Product' */
  real_T s227_Switch;                  /* '<S227>/Switch' */
  real_T s212_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S212>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s242_Switch;                  /* '<S242>/Switch' */
  real_T s249_Sum2;                    /* '<S249>/Sum2' */
  real_T s249_Product2;                /* '<S249>/Product2' */
  real_T s251_Switch1;                 /* '<S251>/Switch1' */
  real_T s250_Product;                 /* '<S250>/Product' */
  real_T s247_Switch3;                 /* '<S247>/Switch3' */
  real_T s247_Switch1;                 /* '<S247>/Switch1' */
  real_T s247_Switch4;                 /* '<S247>/Switch4' */
  real_T s242_Multiplyby10ifnotyetenabled;/* '<S242>/Multiply by 1.0 if not yet enabled' */
  real_T s160_Add;                     /* '<S160>/Add' */
  real_T s158_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S158>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s155_PerCylinderMassFlowRate; /* '<S155>/Per-Cylinder Mass Flow Rate' */
  real_T s155_ApplyMultipliersforO2KnockControlandEnrichment1;/* '<S155>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s184_MinMax1;                 /* '<S184>/MinMax1' */
  real_T s175_Switch1;                 /* '<S175>/Switch1' */
  real_T s170_Product;                 /* '<S170>/Product' */
  real_T s176_uX;                      /* '<S176>/Product' */
  real_T s176_Product2;                /* '<S176>/Product2' */
  real_T s173_Cantinjectnegativefuel;  /* '<S173>/Can't inject negative fuel' */
  real_T s173_Product;                 /* '<S173>/Product' */
  real_T s167_Sum1;                    /* '<S167>/Sum1' */
  real_T s161_Sum;                     /* '<S161>/Sum' */
  real_T s161_Product1;                /* '<S161>/Product1' */
  real_T s165_motohawk_interpolation_1d;/* '<S165>/motohawk_interpolation_1d' */
  real_T s132_DesEquivRatio;           /* '<S132>/Product1' */
  real_T s144_State;                   /* '<S140>/Power Limiter Setpoint Manager' */
  real_T s144_Setpoint;                /* '<S140>/Power Limiter Setpoint Manager' */
  real_T s127_cranking;                /* '<S119>/Remy Control' */
  real_T s127_idle;                    /* '<S119>/Remy Control' */
  real_T s127_APPRamp;                 /* '<S119>/Remy Control' */
  real_T s127_torqueRamp;              /* '<S119>/Remy Control' */
  real_T s127_remyEn;                  /* '<S119>/Remy Control' */
  real_T s127_maxRPM;                  /* '<S119>/Remy Control' */
  real_T s127_motorTQ;                 /* '<S119>/Remy Control' */
  real_T s127_generatingTQ;            /* '<S119>/Remy Control' */
  real_T s114_Sum;                     /* '<S114>/Sum' */
  real_T s16_Sum;                      /* '<S16>/Sum' */
  real_T s99_UnitDelay2;               /* '<S99>/Unit Delay2' */
  real_T s109_Switch1;                 /* '<S109>/Switch1' */
  real_T s62_Switch;                   /* '<S62>/Switch' */
  real_T s29_MultiportSwitch;          /* '<S29>/Multiport Switch' */
  real_T s41_Product;                  /* '<S41>/Product' */
  real_T s40_Switch2;                  /* '<S40>/Switch2' */
  real_T s45_Product;                  /* '<S45>/Product' */
  real_T s37_Sum2;                     /* '<S37>/Sum2' */
  real_T s46_Product;                  /* '<S46>/Product' */
  real_T s37_Product2;                 /* '<S37>/Product2' */
  real_T s47_Switch1;                  /* '<S47>/Switch1' */
  real_T s50_MinMax1;                  /* '<S50>/MinMax1' */
  real_T s13_Switch;                   /* '<S13>/Switch' */
  real_T s51_In1;                      /* '<S51>/In1' */
  real_T s25_TestTime;                 /* '<S13>/ETC Test  Manager' */
  real_T s20_enout;                    /* '<S19>/Chart' */
  real_T s839_Switch;                  /* '<S839>/Switch' */
  int32_T s694_DataTypeConversion;     /* '<S694>/Data Type Conversion' */
  int32_T s782_Merge;                  /* '<S782>/Merge' */
  uint32_T s398_ReadCANMessage_o1;     /* '<S398>/Read CAN Message' */
  uint32_T s398_ReadCANMessage1_o1;    /* '<S398>/Read CAN Message1' */
  uint32_T s398_ReadCANMessage2_o1;    /* '<S398>/Read CAN Message2' */
  uint32_T s398_ReadCANMessage3_o1;    /* '<S398>/Read CAN Message3' */
  uint32_T s542_Sum;                   /* '<S542>/Sum' */
  uint32_T s299_Switch;                /* '<S299>/Switch' */
  int16_T s696_motohawk_pwm1;          /* '<S696>/motohawk_pwm1' */
  uint16_T s394_motohawk_ain1;         /* '<S394>/motohawk_ain1' */
  uint16_T s394_motohawk_ain14;        /* '<S394>/motohawk_ain14' */
  uint16_T s395_motohawk_ain3;         /* '<S395>/motohawk_ain3' */
  uint16_T s394_motohawk_ain_read1;    /* '<S394>/motohawk_ain_read1' */
  uint16_T s394_motohawk_ain4;         /* '<S394>/motohawk_ain4' */
  uint16_T s394_motohawk_ain2;         /* '<S394>/motohawk_ain2' */
  uint16_T s394_motohawk_ain3;         /* '<S394>/motohawk_ain3' */
  uint16_T s693_SparkSequence_o3[8];   /* '<S693>/Spark Sequence' */
  uint16_T s693_SparkSequence_o4[8];   /* '<S693>/Spark Sequence' */
  uint16_T s620_motohawk_ain;          /* '<S620>/motohawk_ain' */
  uint16_T s620_motohawk_ain1;         /* '<S620>/motohawk_ain1' */
  index_T s348_motohawk_prelookup;     /* '<S348>/motohawk_prelookup' */
  index_T s347_motohawk_prelookup1;    /* '<S347>/motohawk_prelookup1' */
  index_T s347_Indexes;                /* '<S347>/motohawk_prelookup5' */
  index_T s345_motohawk_prelookup;     /* '<S345>/motohawk_prelookup' */
  index_T s346_motohawk_prelookup;     /* '<S346>/motohawk_prelookup' */
  index_T s388_motohawk_prelookup1;    /* '<S388>/motohawk_prelookup1' */
  index_T s388_motohawk_prelookup4;    /* '<S388>/motohawk_prelookup4' */
  index_T s309_RPMAccel17Idx;          /* '<S309>/motohawk_prelookup' */
  int8_T s15_Merge1[32];               /* '<S15>/Merge1' */
  int8_T s770_DataTypeConversion;      /* '<S770>/Data Type Conversion' */
  int8_T s186_DataTypeConversion;      /* '<S186>/Data Type Conversion' */
  int8_T s186_DataTypeConversion1;     /* '<S186>/Data Type Conversion1' */
  int8_T s99_MultiportSwitch[8];       /* '<S99>/Multiport Switch' */
  int8_T s109_CutArray[8];             /* '<S109>/CutArray' */
  int8_T s25_DC_Override;              /* '<S13>/ETC Test  Manager' */
  int8_T s25_SetpointMode;             /* '<S13>/ETC Test  Manager' */
  uint8_T s356_UnitDelay;              /* '<S356>/Unit Delay' */
  uint8_T s305_motohawk_data_read1;    /* '<S305>/motohawk_data_read1' */
  uint8_T s697_InjectorSequence_o1[8]; /* '<S697>/Injector Sequence' */
  uint8_T s15_DataTypeConversion5;     /* '<S15>/Data Type Conversion5' */
  uint8_T s350_motohawk_data_read;     /* '<S350>/motohawk_data_read' */
  uint8_T s350_UnitDelay;              /* '<S350>/Unit Delay' */
  uint8_T s393_motohawk_encoder_fault; /* '<S393>/motohawk_encoder_fault' */
  uint8_T s393_motohawk_encoder_state; /* '<S393>/motohawk_encoder_state' */
  uint8_T s772_Switch1;                /* '<S772>/Switch1' */
  uint8_T s377_Switch;                 /* '<S377>/Switch' */
  uint8_T s376_State;                  /* '<S356>/Engine State Machine' */
  uint8_T s221_IdleState;              /* '<S206>/IdleStateMachine' */
  uint8_T s99_UnitDelay1;              /* '<S99>/Unit Delay1' */
  uint8_T s109_Switch;                 /* '<S109>/Switch' */
  boolean_T s356_Stall;                /* '<S356>/Relational Operator1' */
  boolean_T s356_Crank;                /* '<S356>/Relational Operator4' */
  boolean_T s356_Run;                  /* '<S356>/Logical Operator1' */
  boolean_T s702_Compare;              /* '<S702>/Compare' */
  boolean_T s703_Compare;              /* '<S703>/Compare' */
  boolean_T s704_Compare;              /* '<S704>/Compare' */
  boolean_T s325_RelationalOperator4;  /* '<S325>/Relational Operator4' */
  boolean_T s326_RelationalOperator4;  /* '<S326>/Relational Operator4' */
  boolean_T s322_LogicalOperator;      /* '<S322>/Logical Operator' */
  boolean_T s15_LogicalOperator2[8];   /* '<S15>/Logical Operator2' */
  boolean_T s19_Enable;                /* '<S19>/Logical Operator2' */
  boolean_T s781_Merge;                /* '<S781>/Merge' */
  boolean_T s120_FUELP;                /* '<S120>/Merge7' */
  boolean_T s392_EStop;                /* '<S392>/motohawk_data_read' */
  boolean_T s787_LogicalOperator;      /* '<S787>/Logical Operator' */
  boolean_T s801_Merge[8];             /* '<S801>/Merge' */
  boolean_T s120_OILP;                 /* '<S120>/Merge9' */
  boolean_T s815_LogicalOperator;      /* '<S815>/Logical Operator' */
  boolean_T s120_O2Heater;             /* '<S120>/Merge11' */
  boolean_T s819_LogicalOperator;      /* '<S819>/Logical Operator' */
  boolean_T s693_LogicalOperator1[8];  /* '<S693>/Logical Operator1' */
  boolean_T s770_RelationalOperator1;  /* '<S770>/Relational Operator1' */
  boolean_T s351_RelationalOperator3;  /* '<S351>/Relational Operator3' */
  boolean_T s364_APP_Mode;             /* '<S350>/Crank APP Lockout' */
  boolean_T s310_Enable;               /* '<S305>/Baro Stall State Delay' */
  boolean_T s186_MultiportSwitch;      /* '<S186>/Multiport Switch' */
  boolean_T s220_RelationalOperator;   /* '<S220>/Relational Operator' */
  boolean_T s206_RelationalOperator;   /* '<S206>/Relational Operator' */
  boolean_T s206_RelationalOperator3;  /* '<S206>/Relational Operator3' */
  boolean_T s206_RelationalOperator1;  /* '<S206>/Relational Operator1' */
  boolean_T s206_LogicalOperator;      /* '<S206>/Logical Operator' */
  boolean_T s206_RelationalOperator5;  /* '<S206>/Relational Operator5' */
  boolean_T s222_RelOp;                /* '<S222>/RelOp' */
  boolean_T s136_HitCrossing1;         /* '<S136>/Hit  Crossing1' */
  boolean_T s136_LogicalOperator;      /* '<S136>/Logical Operator' */
  boolean_T s207_RelationalOperator1;  /* '<S207>/Relational Operator1' */
  boolean_T s203_LogicalOperator1;     /* '<S203>/Logical Operator1' */
  boolean_T s258_HEATER;               /* '<S138>/Chart' */
  boolean_T s240_LogicalOperator;      /* '<S240>/Logical Operator' */
  boolean_T s240_LogicalOperator3;     /* '<S240>/Logical Operator3' */
  boolean_T s240_RelationalOperator5;  /* '<S240>/Relational Operator5' */
  boolean_T s240_LogicalOperator2;     /* '<S240>/Logical Operator2' */
  boolean_T s157_LogicalOperator2;     /* '<S157>/Logical Operator2' */
  boolean_T s182_LogicalOperator;      /* '<S182>/Logical Operator' */
  boolean_T s17_OnlyEnableSparkwhenEnergyisAboveZero;/* '<S17>/Only Enable Spark when Energy is Above Zero' */
  boolean_T s98_DataTypeConversion1[8];/* '<S98>/Data Type Conversion1' */
  boolean_T s97_DataTypeConversion[8]; /* '<S97>/Data Type Conversion' */
  boolean_T s30_LogicalOperator3;      /* '<S30>/Logical Operator3' */
  boolean_T s13_RelationalOperator5;   /* '<S13>/Relational Operator5' */
  boolean_T s13_RelationalOperator2;   /* '<S13>/Relational Operator2' */
  boolean_T s13_RelationalOperator3;   /* '<S13>/Relational Operator3' */
  boolean_T s26_LogicalOperator;       /* '<S26>/Logical Operator' */
  boolean_T s34_RelationalOperator;    /* '<S34>/Relational Operator' */
  boolean_T s25_TestComplete;          /* '<S13>/ETC Test  Manager' */
  boolean_T s823_RelationalOperator;   /* '<S823>/Relational Operator' */
  boolean_T s823_motohawk_data_read;   /* '<S823>/motohawk_data_read' */
  boolean_T s827_MPRDState;            /* '<S823>/ECUP Latch' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02
    s333_MultiplyandDivideavoidingdivdebyzero1;/* '<S333>/Multiply and Divide, avoiding divde by zero1' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02
    s162_MultiplyandDivideavoidingdivdebyzero;/* '<S162>/Multiply and Divide, avoiding divde by zero' */
} BlockIO_BaseEngineController_A02;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s550_UnitDelay1_DSTATE;       /* '<S550>/Unit Delay1' */
  real_T s600_UnitDelay_DSTATE;        /* '<S600>/Unit Delay' */
  real_T s543_UnitDelay_DSTATE;        /* '<S543>/Unit Delay' */
  real_T s552_UnitDelay1_DSTATE;       /* '<S552>/Unit Delay1' */
  real_T s616_UnitDelay_DSTATE;        /* '<S616>/Unit Delay' */
  real_T s664_UnitDelay_DSTATE;        /* '<S664>/Unit Delay' */
  real_T s657_UnitDelay1_DSTATE;       /* '<S657>/Unit Delay1' */
  real_T s681_UnitDelay_DSTATE;        /* '<S681>/Unit Delay' */
  real_T s674_UnitDelay1_DSTATE;       /* '<S674>/Unit Delay1' */
  real_T s358_UnitDelay_DSTATE;        /* '<S358>/Unit Delay' */
  real_T s619_UnitDelay_DSTATE;        /* '<S619>/Unit Delay' */
  real_T s627_UnitDelay_DSTATE;        /* '<S627>/Unit Delay' */
  real_T s548_UnitDelay1_DSTATE;       /* '<S548>/Unit Delay1' */
  real_T s313_UnitDelay_DSTATE;        /* '<S313>/Unit Delay' */
  real_T s547_UnitDelay1_DSTATE;       /* '<S547>/Unit Delay1' */
  real_T s582_UnitDelay_DSTATE;        /* '<S582>/Unit Delay' */
  real_T s522_UnitDelay_DSTATE;        /* '<S522>/Unit Delay' */
  real_T s530_UnitDelay_DSTATE;        /* '<S530>/Unit Delay' */
  real_T s325_UnitDelay2_DSTATE;       /* '<S325>/Unit Delay2' */
  real_T s328_UnitDelay_DSTATE;        /* '<S328>/Unit Delay' */
  real_T s326_UnitDelay2_DSTATE;       /* '<S326>/Unit Delay2' */
  real_T s331_UnitDelay_DSTATE;        /* '<S331>/Unit Delay' */
  real_T s324_UnitDelay_DSTATE;        /* '<S324>/Unit Delay' */
  real_T s373_UnitDelay_DSTATE;        /* '<S373>/Unit Delay' */
  real_T s375_UnitDelay_DSTATE;        /* '<S375>/Unit Delay' */
  real_T s544_UnitDelay1_DSTATE;       /* '<S544>/Unit Delay1' */
  real_T s558_UnitDelay_DSTATE;        /* '<S558>/Unit Delay' */
  real_T s545_UnitDelay1_DSTATE;       /* '<S545>/Unit Delay1' */
  real_T s566_UnitDelay_DSTATE;        /* '<S566>/Unit Delay' */
  real_T s73_UnitDelay_DSTATE;         /* '<S73>/Unit Delay' */
  real_T s72_UnitDelay_DSTATE;         /* '<S72>/Unit Delay' */
  real_T s70_UnitDelay_DSTATE;         /* '<S70>/Unit Delay' */
  real_T s69_UnitDelay_DSTATE;         /* '<S69>/Unit Delay' */
  real_T s68_UnitDelay_DSTATE;         /* '<S68>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s66_UnitDelay_DSTATE;         /* '<S66>/Unit Delay' */
  real_T s65_UnitDelay_DSTATE;         /* '<S65>/Unit Delay' */
  real_T s71_UnitDelay_DSTATE[8];      /* '<S71>/Unit Delay' */
  real_T s337_UnitDelay_DSTATE;        /* '<S337>/Unit Delay' */
  real_T s358_UnitDelay1_DSTATE;       /* '<S358>/Unit Delay1' */
  real_T s546_UnitDelay1_DSTATE;       /* '<S546>/Unit Delay1' */
  real_T s574_UnitDelay_DSTATE;        /* '<S574>/Unit Delay' */
  real_T s590_UnitDelay_DSTATE;        /* '<S590>/Unit Delay' */
  real_T s551_UnitDelay1_DSTATE;       /* '<S551>/Unit Delay1' */
  real_T s608_UnitDelay_DSTATE;        /* '<S608>/Unit Delay' */
  real_T s325_UnitDelay1_DSTATE;       /* '<S325>/Unit Delay1' */
  real_T s325_UnitDelay3_DSTATE;       /* '<S325>/Unit Delay3' */
  real_T s325_UnitDelay4_DSTATE;       /* '<S325>/Unit Delay4' */
  real_T s326_UnitDelay1_DSTATE;       /* '<S326>/Unit Delay1' */
  real_T s326_UnitDelay3_DSTATE;       /* '<S326>/Unit Delay3' */
  real_T s326_UnitDelay4_DSTATE;       /* '<S326>/Unit Delay4' */
  real_T s404_UnitDelay_DSTATE;        /* '<S404>/Unit Delay' */
  real_T s661_UnitDelay1_DSTATE;       /* '<S661>/Unit Delay1' */
  real_T s661_UnitDelay_DSTATE;        /* '<S661>/Unit Delay' */
  real_T s661_UnitDelay3_DSTATE;       /* '<S661>/Unit Delay3' */
  real_T s661_UnitDelay4_DSTATE;       /* '<S661>/Unit Delay4' */
  real_T s678_UnitDelay1_DSTATE;       /* '<S678>/Unit Delay1' */
  real_T s678_UnitDelay_DSTATE;        /* '<S678>/Unit Delay' */
  real_T s678_UnitDelay3_DSTATE;       /* '<S678>/Unit Delay3' */
  real_T s678_UnitDelay4_DSTATE;       /* '<S678>/Unit Delay4' */
  real_T s767_UnitDelay_DSTATE;        /* '<S767>/Unit Delay' */
  real_T s768_UnitDelay_DSTATE;        /* '<S768>/Unit Delay' */
  real_T s770_CrankCounter_DSTATE;     /* '<S770>/CrankCounter' */
  real_T s630_UnitDelay_DSTATE;        /* '<S630>/Unit Delay' */
  real_T s638_UnitDelay_DSTATE;        /* '<S638>/Unit Delay' */
  real_T s631_UnitDelay_DSTATE;        /* '<S631>/Unit Delay' */
  real_T s647_UnitDelay_DSTATE;        /* '<S647>/Unit Delay' */
  real_T s371_UnitDelay1_DSTATE;       /* '<S371>/Unit Delay1' */
  real_T s370_UnitDelay1_DSTATE;       /* '<S370>/Unit Delay1' */
  real_T s351_UnitDelay2_DSTATE;       /* '<S351>/Unit Delay2' */
  real_T s365_UnitDelay_DSTATE;        /* '<S365>/Unit Delay' */
  real_T s368_UnitDelay_DSTATE;        /* '<S368>/Unit Delay' */
  real_T s351_UnitDelay1_DSTATE;       /* '<S351>/Unit Delay1' */
  real_T s351_UnitDelay3_DSTATE;       /* '<S351>/Unit Delay3' */
  real_T s351_UnitDelay4_DSTATE;       /* '<S351>/Unit Delay4' */
  real_T s343_UnitDelay_DSTATE;        /* '<S343>/Unit Delay' */
  real_T s314_UnitDelay1_DSTATE;       /* '<S314>/Unit Delay1' */
  real_T s270_UnitDelay_DSTATE;        /* '<S270>/Unit Delay' */
  real_T s271_UnitDelay_DSTATE;        /* '<S271>/Unit Delay' */
  real_T s140_UnitDelay_DSTATE;        /* '<S140>/Unit Delay' */
  real_T s148_UnitDelay_DSTATE;        /* '<S148>/Unit Delay' */
  real_T s149_UnitDelay_DSTATE;        /* '<S149>/Unit Delay' */
  real_T s262_UnitDelay_DSTATE;        /* '<S262>/Unit Delay' */
  real_T s187_UnitDelay_DSTATE;        /* '<S187>/Unit Delay' */
  real_T s198_UnitDelay_DSTATE;        /* '<S198>/Unit Delay' */
  real_T s199_UnitDelay_DSTATE;        /* '<S199>/Unit Delay' */
  real_T s224_UnitDelay_DSTATE;        /* '<S224>/Unit Delay' */
  real_T s226_UnitDelay_DSTATE;        /* '<S226>/Unit Delay' */
  real_T s136_UnitDelay3_DSTATE;       /* '<S136>/Unit Delay3' */
  real_T s136_UnitDelay1_DSTATE;       /* '<S136>/Unit Delay1' */
  real_T s205_state_DSTATE;            /* '<S205>/state' */
  real_T s136_UnitDelay2_DSTATE;       /* '<S136>/Unit Delay2' */
  real_T s209_UnitDelay_DSTATE;        /* '<S209>/Unit Delay' */
  real_T s236_UnitDelay_DSTATE;        /* '<S236>/Unit Delay' */
  real_T s237_UnitDelay_DSTATE;        /* '<S237>/Unit Delay' */
  real_T s231_UnitDelay_DSTATE;        /* '<S231>/Unit Delay' */
  real_T s212_UnitDelay_DSTATE;        /* '<S212>/Unit Delay' */
  real_T s251_UnitDelay_DSTATE;        /* '<S251>/Unit Delay' */
  real_T s250_UnitDelay_DSTATE;        /* '<S250>/Unit Delay' */
  real_T s247_UnitDelay1_DSTATE;       /* '<S247>/Unit Delay1' */
  real_T s247_UnitDelay_DSTATE;        /* '<S247>/Unit Delay' */
  real_T s247_UnitDelay2_DSTATE;       /* '<S247>/Unit Delay2' */
  real_T s175_UnitDelay_DSTATE;        /* '<S175>/Unit Delay' */
  real_T s167_UnitDelay_DSTATE;        /* '<S167>/Unit Delay' */
  real_T s114_UnitDelay_DSTATE;        /* '<S114>/Unit Delay' */
  real_T s99_UnitDelay2_DSTATE;        /* '<S99>/Unit Delay2' */
  real_T s13_UnitDelay_DSTATE;         /* '<S13>/Unit Delay' */
  real_T s54_UnitDelay_DSTATE;         /* '<S54>/Unit Delay' */
  real_T s45_UnitDelay_DSTATE;         /* '<S45>/Unit Delay' */
  real_T s41_UnitDelay_DSTATE;         /* '<S41>/Unit Delay' */
  real_T s43_UnitDelay_DSTATE;         /* '<S43>/Unit Delay' */
  real_T s46_UnitDelay_DSTATE;         /* '<S46>/Unit Delay' */
  real_T s47_UnitDelay_DSTATE;         /* '<S47>/Unit Delay' */
  real_T s829_UnitDelay_DSTATE;        /* '<S829>/Unit Delay' */
  real_T s829_UnitDelay1_DSTATE;       /* '<S829>/Unit Delay1' */
  real_T s310_TOld;                    /* '<S305>/Baro Stall State Delay' */
  real_T s127_count;                   /* '<S119>/Remy Control' */
  real_T s25_TimerOld;                 /* '<S13>/ETC Test  Manager' */
  uint32_T s389_UnitDelay_DSTATE;      /* '<S389>/Unit Delay' */
  uint32_T s542_UnitDelay_DSTATE;      /* '<S542>/Unit Delay' */
  uint32_T s595_motohawk_delta_time_DWORK1;/* '<S595>/motohawk_delta_time' */
  uint32_T s536_motohawk_delta_time_DWORK1;/* '<S536>/motohawk_delta_time' */
  uint32_T s129_motohawk_delta_time_DWORK1;/* '<S129>/motohawk_delta_time' */
  uint32_T s611_motohawk_delta_time_DWORK1;/* '<S611>/motohawk_delta_time' */
  uint32_T s656_motohawk_delta_time_DWORK1;/* '<S656>/motohawk_delta_time' */
  uint32_T s673_motohawk_delta_time_DWORK1;/* '<S673>/motohawk_delta_time' */
  uint32_T s621_motohawk_delta_time_DWORK1;/* '<S621>/motohawk_delta_time' */
  uint32_T s381_motohawk_delta_time_DWORK1;/* '<S381>/motohawk_delta_time' */
  uint32_T s305_motohawk_delta_time_DWORK1;/* '<S305>/motohawk_delta_time' */
  uint32_T s577_motohawk_delta_time_DWORK1;/* '<S577>/motohawk_delta_time' */
  uint32_T s524_motohawk_delta_time_DWORK1;/* '<S524>/motohawk_delta_time' */
  uint32_T s324_motohawk_delta_time1_DWORK1;/* '<S324>/motohawk_delta_time1' */
  uint32_T s373_motohawk_delta_time_DWORK1;/* '<S373>/motohawk_delta_time' */
  uint32_T s553_motohawk_delta_time_DWORK1;/* '<S553>/motohawk_delta_time' */
  uint32_T s561_motohawk_delta_time_DWORK1;/* '<S561>/motohawk_delta_time' */
  uint32_T s21_motohawk_delta_time_DWORK1;/* '<S21>/motohawk_delta_time' */
  uint32_T s791_motohawk_delta_time_DWORK1;/* '<S791>/motohawk_delta_time' */
  uint32_T s383_motohawk_delta_time_DWORK1;/* '<S383>/motohawk_delta_time' */
  uint32_T s22_motohawk_delta_time_DWORK1;/* '<S22>/motohawk_delta_time' */
  uint32_T s128_motohawk_delta_time_DWORK1;/* '<S128>/motohawk_delta_time' */
  uint32_T s379_motohawk_delta_time_DWORK1;/* '<S379>/motohawk_delta_time' */
  uint32_T s569_motohawk_delta_time_DWORK1;/* '<S569>/motohawk_delta_time' */
  uint32_T s585_motohawk_delta_time_DWORK1;/* '<S585>/motohawk_delta_time' */
  uint32_T s603_motohawk_delta_time_DWORK1;/* '<S603>/motohawk_delta_time' */
  uint32_T s337_motohawk_delta_time_DWORK1;/* '<S337>/motohawk_delta_time' */
  uint32_T s632_motohawk_delta_time_DWORK1;/* '<S632>/motohawk_delta_time' */
  uint32_T s641_motohawk_delta_time_DWORK1;/* '<S641>/motohawk_delta_time' */
  uint32_T s288_motohawk_delta_time_DWORK1;/* '<S288>/motohawk_delta_time' */
  uint32_T s289_motohawk_delta_time_DWORK1;/* '<S289>/motohawk_delta_time' */
  uint32_T s290_motohawk_delta_time_DWORK1;/* '<S290>/motohawk_delta_time' */
  uint32_T s304_motohawk_delta_time_DWORK1;/* '<S304>/motohawk_delta_time' */
  uint32_T s303_motohawk_delta_time_DWORK1;/* '<S303>/motohawk_delta_time' */
  uint32_T s281_motohawk_delta_time_DWORK1;/* '<S281>/motohawk_delta_time' */
  uint32_T s285_motohawk_delta_time_DWORK1;/* '<S285>/motohawk_delta_time' */
  uint32_T s368_motohawk_delta_time_DWORK1;/* '<S368>/motohawk_delta_time' */
  uint32_T s351_motohawk_delta_time_DWORK1;/* '<S351>/motohawk_delta_time' */
  uint32_T s343_motohawk_delta_time1_DWORK1;/* '<S343>/motohawk_delta_time1' */
  uint32_T s149_motohawk_delta_time_DWORK1;/* '<S149>/motohawk_delta_time' */
  uint32_T s187_motohawk_delta_time_DWORK1;/* '<S187>/motohawk_delta_time' */
  uint32_T s199_motohawk_delta_time_DWORK1;/* '<S199>/motohawk_delta_time' */
  uint32_T s205_motohawk_delta_time_DWORK1;/* '<S205>/motohawk_delta_time' */
  uint32_T s209_motohawk_delta_time_DWORK1;/* '<S209>/motohawk_delta_time' */
  uint32_T s237_motohawk_delta_time_DWORK1;/* '<S237>/motohawk_delta_time' */
  uint32_T s212_motohawk_delta_time_DWORK1;/* '<S212>/motohawk_delta_time' */
  uint32_T s251_motohawk_delta_time_DWORK1;/* '<S251>/motohawk_delta_time' */
  uint32_T s255_motohawk_delta_time_DWORK1;/* '<S255>/motohawk_delta_time' */
  uint32_T s257_motohawk_delta_time_DWORK1;/* '<S257>/motohawk_delta_time' */
  uint32_T s256_motohawk_delta_time_DWORK1;/* '<S256>/motohawk_delta_time' */
  uint32_T s175_motohawk_delta_time_DWORK1;/* '<S175>/motohawk_delta_time' */
  uint32_T s166_motohawk_delta_time_DWORK1;/* '<S166>/motohawk_delta_time' */
  uint32_T s62_motohawk_delta_time_DWORK1;/* '<S62>/motohawk_delta_time' */
  uint32_T s54_motohawk_delta_time_DWORK1;/* '<S54>/motohawk_delta_time' */
  uint32_T s42_motohawk_delta_time_DWORK1;/* '<S42>/motohawk_delta_time' */
  uint32_T s47_motohawk_delta_time_DWORK1;/* '<S47>/motohawk_delta_time' */
  uint32_T s839_motohawk_delta_time_DWORK1;/* '<S839>/motohawk_delta_time' */
  int_T s136_HitCrossing1_MODE;        /* '<S136>/Hit  Crossing1' */
  uint16_T s697_InjectorSequence_DWORK2;/* '<S697>/Injector Sequence' */
  int8_T s353_UnitDelay_DSTATE;        /* '<S353>/Unit Delay' */
  int8_T s352_UnitDelay_DSTATE;        /* '<S352>/Unit Delay' */
  int8_T s311_UnitDelay_DSTATE;        /* '<S311>/Unit Delay' */
  uint8_T s356_UnitDelay_DSTATE;       /* '<S356>/Unit Delay' */
  uint8_T s350_UnitDelay_DSTATE;       /* '<S350>/Unit Delay' */
  uint8_T s377_CrankCounter_DSTATE;    /* '<S377>/CrankCounter' */
  uint8_T s99_UnitDelay1_DSTATE;       /* '<S99>/Unit Delay1' */
  boolean_T s294_UnitDelay_DSTATE;     /* '<S294>/Unit Delay' */
  boolean_T s295_UnitDelay_DSTATE;     /* '<S295>/Unit Delay' */
  boolean_T s296_UnitDelay_DSTATE;     /* '<S296>/Unit Delay' */
  boolean_T s265_InitialConditionisTrue_DSTATE;/* '<S265>/Initial Condition is True' */
  boolean_T s135_UnitDelay_DSTATE;     /* '<S135>/Unit Delay' */
  boolean_T s202_UnitDelay_DSTATE;     /* '<S202>/Unit Delay' */
  boolean_T s254_UnitDelay_DSTATE;     /* '<S254>/Unit Delay' */
  boolean_T s174_InitialConditionisTrue_DSTATE;/* '<S174>/Initial Condition is True' */
  boolean_T s44_UnitDelay_DSTATE;      /* '<S44>/Unit Delay' */
  boolean_T s828_UnitDelay8_DSTATE;    /* '<S828>/Unit Delay8' */
  boolean_T s828_UnitDelay6_DSTATE;    /* '<S828>/Unit Delay6' */
  boolean_T s828_UnitDelay7_DSTATE;    /* '<S828>/Unit Delay7' */
  boolean_T s824_UnitDelay_DSTATE;     /* '<S824>/Unit Delay' */
  boolean_T s830_UnitDelay2_DSTATE;    /* '<S830>/Unit Delay2' */
  boolean_T s823_UnitDelay5_DSTATE;    /* '<S823>/Unit Delay5' */
  boolean_T s830_UnitDelay_DSTATE;     /* '<S830>/Unit Delay' */
  boolean_T s830_UnitDelay1_DSTATE;    /* '<S830>/Unit Delay1' */
  boolean_T s823_UnitDelay3_DSTATE;    /* '<S823>/Unit Delay3' */
  boolean_T s823_UnitDelay4_DSTATE;    /* '<S823>/Unit Delay4' */
  int8_T s163_If_ActiveSubsystem;      /* '<S163>/If' */
  uint8_T s395_motohawk_trigger_DWORK1;/* '<S395>/motohawk_trigger' */
  uint8_T s356_motohawk_trigger_DWORK1;/* '<S356>/motohawk_trigger' */
  uint8_T s549_motohawk_trigger5_DWORK1;/* '<S549>/motohawk_trigger5' */
  uint8_T s6_motohawk_trigger1_DWORK1; /* '<S6>/motohawk_trigger1' */
  uint8_T s6_motohawk_trigger_DWORK1;  /* '<S6>/motohawk_trigger' */
  uint8_T s5_motohawk_trigger_DWORK1;  /* '<S5>/motohawk_trigger' */
  uint8_T s770_motohawk_trigger1_DWORK1;/* '<S770>/motohawk_trigger1' */
  uint8_T s376_is_c2_BaseEngineController_A02;/* '<S356>/Engine State Machine' */
  uint8_T s364_is_c10_BaseEngineController_A02;/* '<S350>/Crank APP Lockout' */
  uint8_T s310_is_c19_BaseEngineController_A02;/* '<S305>/Baro Stall State Delay' */
  uint8_T s121_motohawk_trigger1_DWORK1;/* '<S121>/motohawk_trigger1' */
  uint8_T s221_is_active_c12_BaseEngineController_A02;/* '<S206>/IdleStateMachine' */
  uint8_T s221_is_c12_BaseEngineController_A02;/* '<S206>/IdleStateMachine' */
  uint8_T s258_is_active_c6_BaseEngineController_A02;/* '<S138>/Chart' */
  uint8_T s258_is_c6_BaseEngineController_A02;/* '<S138>/Chart' */
  uint8_T s144_is_active_c13_BaseEngineController_A02;/* '<S140>/Power Limiter Setpoint Manager' */
  uint8_T s144_is_c13_BaseEngineController_A02;/* '<S140>/Power Limiter Setpoint Manager' */
  uint8_T s127_is_active_c5_BaseEngineController_A02;/* '<S119>/Remy Control' */
  uint8_T s127_is_c5_BaseEngineController_A02;/* '<S119>/Remy Control' */
  uint8_T s99_motohawk_trigger_DWORK1; /* '<S99>/motohawk_trigger' */
  uint8_T s25_is_c9_BaseEngineController_A02;/* '<S13>/ETC Test  Manager' */
  uint8_T s20_is_active_c1_BaseEngineController_A02;/* '<S19>/Chart' */
  uint8_T s20_is_c1_BaseEngineController_A02;/* '<S19>/Chart' */
  uint8_T s827_is_c8_BaseEngineController_A02;/* '<S823>/ECUP Latch' */
  boolean_T s697_InjectorSequence_DWORK1[8];/* '<S697>/Injector Sequence' */
  boolean_T s242_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S242>/Multiply by 1.0 if not yet enabled' */
  boolean_T s843_Memory_PreviousInput; /* '<S843>/Memory' */
  boolean_T s7_Stall_MODE;             /* '<S7>/Stall' */
  boolean_T s7_Crank_MODE;             /* '<S7>/Crank' */
  boolean_T s305_CaptureSignalAtStartup_MODE;/* '<S305>/Capture Signal At Startup' */
  boolean_T s308_CaptureECTAtStartup_MODE;/* '<S308>/Capture ECT At Startup' */
  boolean_T s7_Run_MODE;               /* '<S7>/Run' */
  boolean_T s15_PassThrough1_MODE;     /* '<S15>/PassThrough1' */
  boolean_T s15_PassThrough3_MODE;     /* '<S15>/PassThrough3' */
  boolean_T s15_SequenceCutMachine_MODE;/* '<S15>/SequenceCutMachine' */
  boolean_T s15_PassThrough4_MODE;     /* '<S15>/PassThrough4' */
  boolean_T s6_ElectronicThrottleController_MODE;/* '<S6>/Electronic Throttle Controller' */
  boolean_T s15_PassThrough5_MODE;     /* '<S15>/PassThrough5' */
  boolean_T s308_CaptureIATAtStartup_MODE;/* '<S308>/Capture IAT At Startup' */
  boolean_T s389_TriggeredSubsystem_MODE;/* '<S389>/Triggered Subsystem' */
  boolean_T s353_CollectAverage_MODE;  /* '<S353>/Collect Average' */
  boolean_T s352_CollectAverage_MODE;  /* '<S352>/Collect Average' */
  boolean_T s311_CollectAverage_MODE;  /* '<S311>/Collect Average' */
  boolean_T s156_DeltaTPSTransientFueling_MODE;/* '<S156>/Delta TPS Transient Fueling' */
  boolean_T s161_ECTTransientFueling_MODE;/* '<S161>/ECT Transient Fueling' */
  boolean_T s29_PassThrough_MODE;      /* '<S29>/PassThrough' */
} D_Work_BaseEngineController_A02;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S136>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S30>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S13>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S830>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S830>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S830>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S830>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_e;/* '<S828>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j;/* '<S828>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_j;/* '<S828>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c;/* '<S828>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S826>/Clear' */
  ZCSigState Clear_Trig_ZCE_l;         /* '<S825>/Clear' */
} PrevZCSigStates_BaseEngineController_A02;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s697_Gain4;             /* '<S697>/Gain4' */
  const real_T s123_motohawk_replicate2;/* '<S123>/motohawk_replicate2' */
  const real_T s123_motohawk_replicate[8];/* '<S123>/motohawk_replicate' */
  const uint32_T s697_DataTypeConversion5;/* '<S697>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_A02;

/* Constant parameters (auto storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S843>/Logic'
   */
  boolean_T Logic_table[16];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S294>/Combinatorial  Logic'
   *   '<S295>/Combinatorial  Logic'
   *   '<S296>/Combinatorial  Logic'
   *   '<S44>/Combinatorial  Logic'
   *   '<S254>/Combinatorial  Logic'
   */
  boolean_T pooled661[8];
} ConstParam_BaseEngineController_A02;

/* Real-time Model Data Structure */
struct RT_MODEL_BaseEngineController_A02 {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T firstInitCondFlag;
  } Timing;
};

/* Block signals (auto storage) */
extern BlockIO_BaseEngineController_A02 BaseEngineController_A02_B;

/* Block states (auto storage) */
extern D_Work_BaseEngineController_A02 BaseEngineController_A02_DWork;
extern const ConstBlockIO_BaseEngineController_A02
  BaseEngineController_A02_ConstB;     /* constant block i/o */

/* Constant parameters (auto storage) */
extern const ConstParam_BaseEngineController_A02 BaseEngineController_A02_ConstP;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_BaseEngineController_A02
  BaseEngineController_A02_PrevZCSigState;

/* Model entry point functions */
extern void BaseEngineController_A02_initialize(boolean_T firstTime);
extern void BaseEngineController_A02_step(void);
extern void BaseEngineController_A02_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_BaseEngineController_A02 *const
  BaseEngineController_A02_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : BaseEngineController_A02
 * '<S1>'   : BaseEngineController_A02/Foreground
 * '<S2>'   : BaseEngineController_A02/Main Power Relay
 * '<S3>'   : BaseEngineController_A02/Foreground/Control
 * '<S4>'   : BaseEngineController_A02/Foreground/Inputs
 * '<S5>'   : BaseEngineController_A02/Foreground/Outputs
 * '<S6>'   : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization
 * '<S7>'   : BaseEngineController_A02/Foreground/Control/Controller
 * '<S8>'   : BaseEngineController_A02/Foreground/Control/Diagnostics
 * '<S9>'   : BaseEngineController_A02/Foreground/Control/VirtualSensors
 * '<S10>'  : BaseEngineController_A02/Foreground/Control/motohawk_function_collector
 * '<S11>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/CompareTo
 * '<S12>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization
 * '<S13>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller
 * '<S14>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization
 * '<S15>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern
 * '<S16>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Advance to Start Angle
 * '<S17>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization
 * '<S18>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization/EGR Hyst
 * '<S19>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator
 * '<S20>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Chart
 * '<S21>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Time Since Enabled (With Input)1
 * '<S22>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Time Since Enabled (With Input)2
 * '<S23>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Adapt Request
 * '<S24>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault
 * '<S25>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager
 * '<S26>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETCStallShutDown
 * '<S27>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)
 * '<S28>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Reset TasksComplete To True
 * '<S29>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager
 * '<S30>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager
 * '<S31>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Adapt Request/ShutDownAdaptMode
 * '<S32>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault/ShutDownAdaptMode1
 * '<S33>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Cals_and_Probes_Page
 * '<S34>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch
 * '<S35>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/IGain
 * '<S36>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PGain
 * '<S37>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms
 * '<S38>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)
 * '<S39>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative
 * '<S40>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis
 * '<S41>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/Derivitive2
 * '<S42>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)
 * '<S43>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S44>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis/Hysteresis
 * '<S45>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive1
 * '<S46>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive3
 * '<S47>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator
 * '<S48>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Model Info
 * '<S49>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator/Saturation
 * '<S50>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)/Saturation
 * '<S51>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/PassThrough
 * '<S52>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/ShutDownAdaptMode1
 * '<S53>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning
 * '<S54>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter
 * '<S55>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/Time Since Enabled (With Input)1
 * '<S56>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs
 * '<S57>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/NewValue
 * '<S58>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/OldValue
 * '<S59>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter/Saturation
 * '<S60>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Reset TasksComplete To False
 * '<S61>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Stall
 * '<S62>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Time Since Enabled (With Input)1
 * '<S63>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/DeltaPressureIndex
 * '<S64>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets
 * '<S65>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel
 * '<S66>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1
 * '<S67>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2
 * '<S68>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3
 * '<S69>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4
 * '<S70>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5
 * '<S71>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6
 * '<S72>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7
 * '<S73>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8
 * '<S74>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/NewValue
 * '<S75>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/OldValue
 * '<S76>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/NewValue
 * '<S77>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/OldValue
 * '<S78>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/NewValue
 * '<S79>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/OldValue
 * '<S80>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/NewValue
 * '<S81>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/OldValue
 * '<S82>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/NewValue
 * '<S83>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/OldValue
 * '<S84>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/NewValue
 * '<S85>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/OldValue
 * '<S86>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/NewValue
 * '<S87>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/OldValue
 * '<S88>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/NewValue
 * '<S89>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/OldValue
 * '<S90>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/NewValue
 * '<S91>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/OldValue
 * '<S92>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern
 * '<S93>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern
 * '<S94>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough1
 * '<S95>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough2
 * '<S96>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough3
 * '<S97>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough4
 * '<S98>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough5
 * '<S99>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine
 * '<S100>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern
 * '<S101>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle1CutPatter
 * '<S102>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle2CutPatter
 * '<S103>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle3CutPatter
 * '<S104>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle4CutPatter
 * '<S105>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle1CutPatter
 * '<S106>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle2CutPatter
 * '<S107>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle3CutPatter
 * '<S108>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle4CutPatter
 * '<S109>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine/SequencyCutMachine
 * '<S110>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle1CutPatter
 * '<S111>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle2CutPatter
 * '<S112>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle3CutPatter
 * '<S113>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle4CutPatter
 * '<S114>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel
 * '<S115>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/NewValue
 * '<S116>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/OldValue
 * '<S117>' : BaseEngineController_A02/Foreground/Control/Controller/Crank
 * '<S118>' : BaseEngineController_A02/Foreground/Control/Controller/Crank State
 * '<S119>' : BaseEngineController_A02/Foreground/Control/Controller/Hybrid
 * '<S120>' : BaseEngineController_A02/Foreground/Control/Controller/Merge
 * '<S121>' : BaseEngineController_A02/Foreground/Control/Controller/Run
 * '<S122>' : BaseEngineController_A02/Foreground/Control/Controller/Run State
 * '<S123>' : BaseEngineController_A02/Foreground/Control/Controller/Stall
 * '<S124>' : BaseEngineController_A02/Foreground/Control/Controller/Stall State
 * '<S125>' : BaseEngineController_A02/Foreground/Control/Controller/Crank/Cals_and_Probes_Page
 * '<S126>' : BaseEngineController_A02/Foreground/Control/Controller/Crank/CrankFueling
 * '<S127>' : BaseEngineController_A02/Foreground/Control/Controller/Hybrid/Remy Control
 * '<S128>' : BaseEngineController_A02/Foreground/Control/Controller/Hybrid/Time Since Enabled (With Input)1
 * '<S129>' : BaseEngineController_A02/Foreground/Control/Controller/Hybrid/Time Since Enabled (With Input)2
 * '<S130>' : BaseEngineController_A02/Foreground/Control/Controller/Merge/FuelPump
 * '<S131>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager
 * '<S132>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio
 * '<S133>' : BaseEngineController_A02/Foreground/Control/Controller/Run/EGR
 * '<S134>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager
 * '<S135>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor
 * '<S136>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor
 * '<S137>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control
 * '<S138>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Heater
 * '<S139>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager
 * '<S140>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller
 * '<S141>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Saturation
 * '<S142>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/ShutDownTasksComplete Reset
 * '<S143>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Compare To Zero
 * '<S144>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Power Limiter Setpoint Manager
 * '<S145>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Universal PID (Tunable & Scheduled)
 * '<S146>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Universal PID (Tunable & Scheduled)/Saturation
 * '<S147>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S148>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S149>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S150>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S151>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Power Limit Controller/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S152>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs
 * '<S153>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/NewValue
 * '<S154>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/OldValue
 * '<S155>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S156>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S157>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S158>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S159>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Cals_and_Probes_Page
 * '<S160>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S161>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S162>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S163>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Tau-X Transient Fueling
 * '<S164>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S165>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S166>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S167>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S168>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S169>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S170>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Tau-X Transient Fueling/Enabled Tau-X Algorithm
 * '<S171>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Tau-X Transient Fueling/Pass-Through
 * '<S172>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Tau-X Transient Fueling/Enabled Tau-X Algorithm/Cals_and_Probes_Page
 * '<S173>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Tau-X Transient Fueling/Enabled Tau-X Algorithm/Tau-X Fuel Model
 * '<S174>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Tau-X Transient Fueling/Enabled Tau-X Algorithm/Tau-X Fuel Model/Initialize puddle mass on first sample
 * '<S175>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Tau-X Transient Fueling/Enabled Tau-X Algorithm/Tau-X Fuel Model/Integrator
 * '<S176>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Tau-X Transient Fueling/Enabled Tau-X Algorithm/Tau-X Fuel Model/TauX Eq
 * '<S177>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Tau-X Transient Fueling/Enabled Tau-X Algorithm/Tau-X Fuel Model/Integrator/Saturation
 * '<S178>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map
 * '<S179>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Cals_and_Probes_Page
 * '<S180>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S181>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S182>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S183>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S184>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S185>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S186>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S187>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S188>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S189>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S190>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S191>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S192>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S193>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S194>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S195>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Cals_and_Probes_Page
 * '<S196>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S197>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S198>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S199>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S200>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S201>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S202>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S203>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S204>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S205>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S206>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S207>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S208>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S209>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S210>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S211>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S212>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S213>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S214>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S215>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S216>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S217>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S218>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S219>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S220>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S221>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S222>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S223>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S224>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S225>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S226>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S227>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S228>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S229>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S230>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S231>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S232>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S233>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S234>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S235>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S236>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S237>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S238>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S239>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S240>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S241>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S242>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller
 * '<S243>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination/Cals_and_Probes_Page
 * '<S244>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S245>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S246>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller
 * '<S247>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation
 * '<S248>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Saturation
 * '<S249>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID
 * '<S250>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S251>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S252>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S253>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S254>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Hysteresis
 * '<S255>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S256>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S257>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S258>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Heater/Chart
 * '<S259>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Desired Eq Ratio Offset
 * '<S260>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/EGR Spark Offset
 * '<S261>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S262>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S263>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S264>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S265>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S266>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S267>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S268>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S269>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Oil Pump at Startup
 * '<S270>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S271>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Oil Pump at Startup/Time Since Enabled
 * '<S272>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S273>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy
 * '<S274>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S275>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S276>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S277>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals
 * '<S278>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S279>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S280>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S281>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S282>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S283>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S284>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S285>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S286>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Cals_and_Probes_Page
 * '<S287>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S288>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S289>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S290>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S291>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis
 * '<S292>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis1
 * '<S293>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis2
 * '<S294>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis/Hysteresis
 * '<S295>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis1/Hysteresis
 * '<S296>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis2/Hysteresis
 * '<S297>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers
 * '<S298>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers/RunState
 * '<S299>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers/hour meter
 * '<S300>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers/hour meter/motohawk_override_abs
 * '<S301>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers/hour meter/motohawk_override_abs/NewValue
 * '<S302>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers/hour meter/motohawk_override_abs/OldValue
 * '<S303>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S304>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S305>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs
 * '<S306>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S307>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S308>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed
 * '<S309>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S310>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S311>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S312>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced
 * '<S313>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S314>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S315>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/C to K1
 * '<S316>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/Cals_and_Probes_Page
 * '<S317>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs
 * '<S318>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs/NewValue
 * '<S319>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs/OldValue
 * '<S320>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S321>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S322>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S323>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC
 * '<S324>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature
 * '<S325>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S326>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S327>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S328>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S329>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S330>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S331>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S332>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S333>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation
 * '<S334>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work
 * '<S335>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/Multiply and Divide, avoiding divde by zero1
 * '<S336>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/NonZero RPM
 * '<S337>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work
 * '<S338>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Stall
 * '<S339>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work/Saturation
 * '<S340>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/CompareTo
 * '<S341>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT
 * '<S342>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Saturation
 * '<S343>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator
 * '<S344>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator/Saturation
 * '<S345>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S346>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S347>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S348>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S349>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S350>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/APP Sensor Management
 * '<S351>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S352>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S353>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S354>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S355>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S356>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S357>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S358>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S359>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S360>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S361>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S362>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S363>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S364>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/APP Sensor Management/Crank APP Lockout
 * '<S365>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S366>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S367>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S368>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S369>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S370>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S371>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S372>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S373>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S374>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S375>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S376>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S377>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S378>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S379>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S380>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S381>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S382>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S383>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S384>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S385>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S386>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/NECCT Index
 * '<S387>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/Power Index
 * '<S388>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/Torque Indexes
 * '<S389>' : BaseEngineController_A02/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S390>' : BaseEngineController_A02/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S391>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs
 * '<S392>' : BaseEngineController_A02/Foreground/Inputs/Digital
 * '<S393>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed
 * '<S394>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors
 * '<S395>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors
 * '<S396>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors
 * '<S397>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112
 * '<S398>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix
 * '<S399>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/ESTOP at Startup
 * '<S400>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/MATLAB Function
 * '<S401>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs
 * '<S402>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1
 * '<S403>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2
 * '<S404>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/ESTOP at Startup/Time Since Enabled
 * '<S405>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs/NewValue
 * '<S406>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs/OldValue
 * '<S407>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1/NewValue
 * '<S408>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1/OldValue
 * '<S409>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2/NewValue
 * '<S410>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2/OldValue
 * '<S411>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs
 * '<S412>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1
 * '<S413>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10
 * '<S414>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11
 * '<S415>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12
 * '<S416>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13
 * '<S417>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14
 * '<S418>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15
 * '<S419>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16
 * '<S420>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17
 * '<S421>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18
 * '<S422>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19
 * '<S423>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2
 * '<S424>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20
 * '<S425>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21
 * '<S426>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22
 * '<S427>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23
 * '<S428>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24
 * '<S429>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25
 * '<S430>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26
 * '<S431>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27
 * '<S432>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28
 * '<S433>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29
 * '<S434>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3
 * '<S435>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30
 * '<S436>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31
 * '<S437>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32
 * '<S438>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33
 * '<S439>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34
 * '<S440>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35
 * '<S441>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36
 * '<S442>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4
 * '<S443>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5
 * '<S444>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6
 * '<S445>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7
 * '<S446>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8
 * '<S447>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9
 * '<S448>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs/NewValue
 * '<S449>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs/OldValue
 * '<S450>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1/NewValue
 * '<S451>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1/OldValue
 * '<S452>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10/NewValue
 * '<S453>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10/OldValue
 * '<S454>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11/NewValue
 * '<S455>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11/OldValue
 * '<S456>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12/NewValue
 * '<S457>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12/OldValue
 * '<S458>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13/NewValue
 * '<S459>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13/OldValue
 * '<S460>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14/NewValue
 * '<S461>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14/OldValue
 * '<S462>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15/NewValue
 * '<S463>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15/OldValue
 * '<S464>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16/NewValue
 * '<S465>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16/OldValue
 * '<S466>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17/NewValue
 * '<S467>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17/OldValue
 * '<S468>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18/NewValue
 * '<S469>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18/OldValue
 * '<S470>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19/NewValue
 * '<S471>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19/OldValue
 * '<S472>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2/NewValue
 * '<S473>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2/OldValue
 * '<S474>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20/NewValue
 * '<S475>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20/OldValue
 * '<S476>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21/NewValue
 * '<S477>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21/OldValue
 * '<S478>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22/NewValue
 * '<S479>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22/OldValue
 * '<S480>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23/NewValue
 * '<S481>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23/OldValue
 * '<S482>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24/NewValue
 * '<S483>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24/OldValue
 * '<S484>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25/NewValue
 * '<S485>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25/OldValue
 * '<S486>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26/NewValue
 * '<S487>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26/OldValue
 * '<S488>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27/NewValue
 * '<S489>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27/OldValue
 * '<S490>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28/NewValue
 * '<S491>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28/OldValue
 * '<S492>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29/NewValue
 * '<S493>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29/OldValue
 * '<S494>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3/NewValue
 * '<S495>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3/OldValue
 * '<S496>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30/NewValue
 * '<S497>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30/OldValue
 * '<S498>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31/NewValue
 * '<S499>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31/OldValue
 * '<S500>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32/NewValue
 * '<S501>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32/OldValue
 * '<S502>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33/NewValue
 * '<S503>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33/OldValue
 * '<S504>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34/NewValue
 * '<S505>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34/OldValue
 * '<S506>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35/NewValue
 * '<S507>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35/OldValue
 * '<S508>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36/NewValue
 * '<S509>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36/OldValue
 * '<S510>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4/NewValue
 * '<S511>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4/OldValue
 * '<S512>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5/NewValue
 * '<S513>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5/OldValue
 * '<S514>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6/NewValue
 * '<S515>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6/OldValue
 * '<S516>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7/NewValue
 * '<S517>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7/OldValue
 * '<S518>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8/NewValue
 * '<S519>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8/OldValue
 * '<S520>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9/NewValue
 * '<S521>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9/OldValue
 * '<S522>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor
 * '<S523>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1
 * '<S524>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S525>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S526>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S527>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S528>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S529>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S530>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S531>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S532>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S533>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1/NewValue
 * '<S534>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1/OldValue
 * '<S535>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S536>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S537>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S538>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S539>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S540>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S541>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S542>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S543>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S544>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1
 * '<S545>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S546>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres
 * '<S547>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP
 * '<S548>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime
 * '<S549>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S550>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres
 * '<S551>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts
 * '<S552>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts
 * '<S553>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/First Order Low Pass
 * '<S554>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem
 * '<S555>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem1
 * '<S556>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem2
 * '<S557>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override
 * '<S558>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/First Order Low Pass/First Order Low Pass
 * '<S559>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override/NewValue
 * '<S560>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override/OldValue
 * '<S561>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/First Order Low Pass
 * '<S562>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S563>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S564>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S565>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S566>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/First Order Low Pass/First Order Low Pass
 * '<S567>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S568>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S569>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S570>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S571>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S572>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S573>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S574>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S575>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S576>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S577>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S578>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S579>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S580>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S581>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S582>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S583>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S584>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S585>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S586>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S587>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S588>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S589>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S590>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S591>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S592>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S593>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S594>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S595>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S596>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S597>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S598>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S599>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S600>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S601>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S602>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S603>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S604>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S605>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S606>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S607>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S608>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S609>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S610>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S611>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S612>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S613>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S614>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S615>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S616>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S617>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S618>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S619>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat
 * '<S620>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S621>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/First Order Low Pass
 * '<S622>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem
 * '<S623>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem1
 * '<S624>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem2
 * '<S625>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override
 * '<S626>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/motohawk_table_1d1
 * '<S627>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/First Order Low Pass/First Order Low Pass
 * '<S628>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override/NewValue
 * '<S629>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override/OldValue
 * '<S630>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S631>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S632>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S633>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S634>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S635>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S636>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S637>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S638>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S639>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S640>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S641>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S642>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S643>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S644>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S645>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S646>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S647>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S648>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S649>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S650>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S651>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S652>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1
 * '<S653>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13
 * '<S654>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S655>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S656>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S657>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S658>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S659>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S660>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S661>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S662>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S663>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S664>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S665>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S666>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S667>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S668>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S669>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S670>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S671>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S672>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S673>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S674>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S675>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S676>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S677>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S678>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S679>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S680>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S681>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S682>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S683>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S684>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S685>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S686>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S687>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S688>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1/NewValue
 * '<S689>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1/OldValue
 * '<S690>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13/NewValue
 * '<S691>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13/OldValue
 * '<S692>' : BaseEngineController_A02/Foreground/Outputs/CAN Out
 * '<S693>' : BaseEngineController_A02/Foreground/Outputs/Coil Control
 * '<S694>' : BaseEngineController_A02/Foreground/Outputs/EGR Out
 * '<S695>' : BaseEngineController_A02/Foreground/Outputs/FuelPump
 * '<S696>' : BaseEngineController_A02/Foreground/Outputs/HBridge
 * '<S697>' : BaseEngineController_A02/Foreground/Outputs/Injector Control
 * '<S698>' : BaseEngineController_A02/Foreground/Outputs/OilPump
 * '<S699>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater
 * '<S700>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112
 * '<S701>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix
 * '<S702>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant
 * '<S703>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant1
 * '<S704>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant2
 * '<S705>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1
 * '<S706>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2
 * '<S707>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3
 * '<S708>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4
 * '<S709>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5
 * '<S710>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6
 * '<S711>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7
 * '<S712>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1/NewValue
 * '<S713>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1/OldValue
 * '<S714>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2/NewValue
 * '<S715>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2/OldValue
 * '<S716>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3/NewValue
 * '<S717>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3/OldValue
 * '<S718>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4/NewValue
 * '<S719>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4/OldValue
 * '<S720>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5/NewValue
 * '<S721>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5/OldValue
 * '<S722>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6/NewValue
 * '<S723>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6/OldValue
 * '<S724>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7/NewValue
 * '<S725>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7/OldValue
 * '<S726>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs
 * '<S727>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1
 * '<S728>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10
 * '<S729>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11
 * '<S730>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12
 * '<S731>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2
 * '<S732>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3
 * '<S733>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4
 * '<S734>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5
 * '<S735>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6
 * '<S736>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7
 * '<S737>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8
 * '<S738>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9
 * '<S739>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs/NewValue
 * '<S740>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs/OldValue
 * '<S741>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1/NewValue
 * '<S742>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1/OldValue
 * '<S743>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10/NewValue
 * '<S744>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10/OldValue
 * '<S745>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11/NewValue
 * '<S746>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11/OldValue
 * '<S747>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12/NewValue
 * '<S748>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12/OldValue
 * '<S749>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2/NewValue
 * '<S750>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2/OldValue
 * '<S751>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3/NewValue
 * '<S752>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3/OldValue
 * '<S753>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4/NewValue
 * '<S754>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4/OldValue
 * '<S755>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5/NewValue
 * '<S756>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5/OldValue
 * '<S757>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6/NewValue
 * '<S758>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6/OldValue
 * '<S759>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7/NewValue
 * '<S760>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7/OldValue
 * '<S761>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8/NewValue
 * '<S762>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8/OldValue
 * '<S763>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9/NewValue
 * '<S764>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9/OldValue
 * '<S765>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S766>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S767>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S768>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S769>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S770>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S771>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S772>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S773>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S774>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S775>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S776>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S777>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S778>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S779>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S780>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S781>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs
 * '<S782>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1
 * '<S783>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs/NewValue
 * '<S784>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs/OldValue
 * '<S785>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1/NewValue
 * '<S786>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1/OldValue
 * '<S787>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S788>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S789>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S790>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S791>' : BaseEngineController_A02/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S792>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S793>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S794>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S795>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S796>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S797>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S798>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S799>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S800>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S801>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S802>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Cals_and_Probes_Page
 * '<S803>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S804>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S805>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S806>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S807>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S808>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S809>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S810>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S811>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S812>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S813>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S814>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S815>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP
 * '<S816>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units
 * '<S817>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units/NewValue
 * '<S818>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units/OldValue
 * '<S819>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater
 * '<S820>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units
 * '<S821>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units/NewValue
 * '<S822>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units/OldValue
 * '<S823>' : BaseEngineController_A02/Main Power Relay/Main Power Relay
 * '<S824>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S825>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S826>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S827>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S828>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S829>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/On Off Delay
 * '<S830>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S831>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S832>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S833>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S834>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S835>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S836>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S837>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S838>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S839>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S840>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S841>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S842>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S843>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S844>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S845>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S846>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S847>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S848>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S849>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S850>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S851>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S852>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S853>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_A02_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
