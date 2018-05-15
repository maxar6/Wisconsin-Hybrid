/*
 * File: BaseEngineController_A02.h
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1626
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Apr 22 15:55:33 2018
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
  real_T s527_Sum1;                    /* '<S527>/Sum1' */
  real_T s581_Merge;                   /* '<S581>/Merge' */
  real_T s520_Sum1;                    /* '<S520>/Sum1' */
  real_T s361_RPMInst;                 /* '<S361>/Data Type Conversion1' */
  real_T s365_GensetEnable;            /* '<S365>/Read CAN Message' */
  real_T s365_GensetEnable_g;          /* '<S365>/Read CAN Message' */
  real_T s365_GensetEnable_a;          /* '<S365>/Read CAN Message' */
  real_T s365_ReadCANMessage_o4;       /* '<S365>/Read CAN Message' */
  real_T s365_ReadCANMessage_o5;       /* '<S365>/Read CAN Message' */
  real_T s365_Product;                 /* '<S365>/Product' */
  real_T s529_Sum1;                    /* '<S529>/Sum1' */
  real_T s597_Merge;                   /* '<S597>/Merge' */
  real_T s632_Switch;                  /* '<S632>/Switch' */
  real_T s636_MinMax;                  /* '<S636>/MinMax' */
  real_T s636_MinMax1;                 /* '<S636>/MinMax1' */
  real_T s640_MinMax1;                 /* '<S640>/MinMax1' */
  real_T s633_Switch;                  /* '<S633>/Switch' */
  real_T s653_MinMax;                  /* '<S653>/MinMax' */
  real_T s653_MinMax1;                 /* '<S653>/MinMax1' */
  real_T s657_MinMax1;                 /* '<S657>/MinMax1' */
  real_T s650_Merge;                   /* '<S650>/Merge' */
  real_T s667_Merge;                   /* '<S667>/Merge' */
  real_T s329_Switch2;                 /* '<S329>/Switch2' */
  real_T s364_motohawk_data_read1;     /* '<S364>/motohawk_data_read1' */
  real_T s323_Switch1;                 /* '<S323>/Switch1' */
  real_T s608_motohawk_interpolation_1d;/* '<S608>/motohawk_interpolation_1d' */
  real_T s607_Merge;                   /* '<S607>/Merge' */
  real_T s327_Sum1;                    /* '<S327>/Sum1' */
  real_T s349_Switch;                  /* '<S349>/Switch' */
  real_T s275_motohawk_delta_time;     /* '<S275>/motohawk_delta_time' */
  real_T s525_Sum1;                    /* '<S525>/Sum1' */
  real_T s283_Sum;                     /* '<S283>/Sum' */
  real_T s526_Merge;                   /* '<S526>/Merge' */
  real_T s524_Sum1;                    /* '<S524>/Sum1' */
  real_T s563_Merge;                   /* '<S563>/Merge' */
  real_T s282_NominalAirFlowRate2;     /* '<S282>/Nominal Air Flow Rate2' */
  real_T s282_PressureRatio;           /* '<S282>/Pressure Ratio' */
  real_T s287_Merge;                   /* '<S287>/Merge' */
  real_T s360_Gain;                    /* '<S360>/Gain' */
  real_T s506_motohawk_interpolation_1d;/* '<S506>/motohawk_interpolation_1d' */
  real_T s505_Merge;                   /* '<S505>/Merge' */
  real_T s282_Saturation1;             /* '<S282>/Saturation1' */
  real_T s295_Merge;                   /* '<S295>/Merge' */
  real_T s298_Sum1;                    /* '<S298>/Sum1' */
  real_T s296_Merge;                   /* '<S296>/Merge' */
  real_T s301_Sum1;                    /* '<S301>/Sum1' */
  real_T s304_TorquetoPower;           /* '<S304>/Torque to Power' */
  real_T s312_MinMax1;                 /* '<S312>/MinMax1' */
  real_T s343_Sum1;                    /* '<S343>/Sum1' */
  real_T s362_Gain;                    /* '<S362>/Gain' */
  real_T s522_Sum1;                    /* '<S522>/Sum1' */
  real_T s542_Merge;                   /* '<S542>/Merge' */
  real_T s120_SparkEnergy;             /* '<S120>/Merge5' */
  real_T s120_SparkAdv;                /* '<S120>/Merge4' */
  real_T s521_Sum1;                    /* '<S521>/Sum1' */
  real_T s120_EGR;                     /* '<S120>/Merge3' */
  real_T s534_Merge;                   /* '<S534>/Merge' */
  real_T s351_Switch;                  /* '<S351>/Switch' */
  real_T s120_Throttle;                /* '<S120>/Merge8' */
  real_T s678_ETC;                     /* '<S678>/Saturation' */
  real_T s120_SOI;                     /* '<S120>/Merge1' */
  real_T s120_FPC[8];                  /* '<S120>/Merge2' */
  real_T s71_Sum[8];                   /* '<S71>/Sum' */
  real_T s63_constreftoatm;            /* '<S63>/const ref to atm' */
  real_T s120_FuelMult;                /* '<S120>/Merge6' */
  real_T s14_Sum2;                     /* '<S14>/Sum2' */
  real_T s14_Sum1;                     /* '<S14>/Sum1' */
  real_T s14_MinMax[8];                /* '<S14>/MinMax' */
  real_T s120_MakeUpEOI;               /* '<S120>/Merge10' */
  real_T s307_Switch1;                 /* '<S307>/Switch1' */
  real_T s347_Sum;                     /* '<S347>/Sum' */
  real_T s327_Sum3;                    /* '<S327>/Sum3' */
  real_T s523_Sum1;                    /* '<S523>/Sum1' */
  real_T s555_Merge;                   /* '<S555>/Merge' */
  real_T s571_Merge;                   /* '<S571>/Merge' */
  real_T s326_Sum3;                    /* '<S326>/Sum3' */
  real_T s366_ReadCANMessage_o2;       /* '<S366>/Read CAN Message' */
  real_T s366_ReadCANMessage_o3;       /* '<S366>/Read CAN Message' */
  real_T s366_ReadCANMessage_o4;       /* '<S366>/Read CAN Message' */
  real_T s366_ReadCANMessage1_o2;      /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage1_o3;      /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage1_o4;      /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage1_o5;      /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage1_o6;      /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage1_o7;      /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage1_o8;      /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage1_o9;      /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage1_o10;     /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage1_o11;     /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage1_o12;     /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage1_o13;     /* '<S366>/Read CAN Message1' */
  real_T s366_ReadCANMessage2_o2;      /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o3;      /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o4;      /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o5;      /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o6;      /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o7;      /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o8;      /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o9;      /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o10;     /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o11;     /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o12;     /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o13;     /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o14;     /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o15;     /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage2_o16;     /* '<S366>/Read CAN Message2' */
  real_T s366_ReadCANMessage3_o2;      /* '<S366>/Read CAN Message3' */
  real_T s366_ReadCANMessage3_o3;      /* '<S366>/Read CAN Message3' */
  real_T s366_ReadCANMessage3_o4;      /* '<S366>/Read CAN Message3' */
  real_T s528_Sum1;                    /* '<S528>/Sum1' */
  real_T s589_Merge;                   /* '<S589>/Merge' */
  real_T s374_UnitDelay;               /* '<S374>/Unit Delay' */
  real_T s749_Sum;                     /* '<S749>/Sum' */
  real_T s750_Sum;                     /* '<S750>/Sum' */
  real_T s752_CrankCounter;            /* '<S752>/CrankCounter' */
  real_T s619_motohawk_interpolation_1d;/* '<S619>/motohawk_interpolation_1d' */
  real_T s612_Merge;                   /* '<S612>/Merge' */
  real_T s618_Merge;                   /* '<S618>/Merge' */
  real_T s628_motohawk_interpolation_1d;/* '<S628>/motohawk_interpolation_1d' */
  real_T s613_Merge;                   /* '<S613>/Merge' */
  real_T s627_Merge;                   /* '<S627>/Merge' */
  real_T s386_hp;                      /* '<S366>/Power Estimator' */
  real_T s386_kw;                      /* '<S366>/Power Estimator' */
  real_T s250_Defaultifnoflow[8];      /* '<S250>/Default (if no flow)' */
  real_T s259_Sum1[8];                 /* '<S259>/Sum1' */
  real_T s258_chargemass[8];           /* '<S258>/charge mass' */
  real_T s339_Product;                 /* '<S339>/Product' */
  real_T s338_Product;                 /* '<S338>/Product' */
  real_T s320_Merge;                   /* '<S320>/Merge' */
  real_T s336_Sum2;                    /* '<S336>/Sum2' */
  real_T s313_Switch1;                 /* '<S313>/Switch1' */
  real_T s284_Product;                 /* '<S284>/Product' */
  real_T s280_Timer;                   /* '<S275>/Baro Stall State Delay' */
  real_T s247_UnitDelay;               /* '<S247>/Unit Delay' */
  real_T s248_UnitDelay;               /* '<S248>/Unit Delay' */
  real_T s139_Product;                 /* '<S139>/Product' */
  real_T s139_Sum;                     /* '<S139>/Sum' */
  real_T s129_MultiportSwitch;         /* '<S129>/Multiport Switch' */
  real_T s131_Product;                 /* '<S131>/Product' */
  real_T s241_Add;                     /* '<S241>/Add' */
  real_T s238_Product;                 /* '<S238>/Product' */
  real_T s136_ApplyOffsetstoBaseSparkAdvance1;/* '<S136>/Apply Offsets to Base Spark Advance1' */
  real_T s244_MinMax1;                 /* '<S244>/MinMax1' */
  real_T s239_Switch;                  /* '<S239>/Switch' */
  real_T s136_motohawk_interpolation_2d1;/* '<S136>/motohawk_interpolation_2d1' */
  real_T s133_Sum;                     /* '<S133>/Sum' */
  real_T s168_Merge;                   /* '<S168>/Merge' */
  real_T s168_Merge1;                  /* '<S168>/Merge1' */
  real_T s167_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S167>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s177_Sum2;                    /* '<S177>/Sum2' */
  real_T s177_Product2;                /* '<S177>/Product2' */
  real_T s178_Product;                 /* '<S178>/Product' */
  real_T s179_Switch1;                 /* '<S179>/Switch1' */
  real_T s169_Switch;                  /* '<S169>/Switch' */
  real_T s165_Sum;                     /* '<S165>/Sum' */
  real_T s199_MinMax1;                 /* '<S199>/MinMax1' */
  real_T s189_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S189>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s215_Sum2;                    /* '<S215>/Sum2' */
  real_T s215_Product2;                /* '<S215>/Product2' */
  real_T s216_Product;                 /* '<S216>/Product' */
  real_T s217_Switch1;                 /* '<S217>/Switch1' */
  real_T s134_MinGovAirPID;            /* '<S134>/Product1' */
  real_T s210_Sum1;                    /* '<S210>/Sum1' */
  real_T s210_Product;                 /* '<S210>/Product' */
  real_T s211_Product;                 /* '<S211>/Product' */
  real_T s134_IdleSpk;                 /* '<S134>/Product' */
  real_T s207_Switch;                  /* '<S207>/Switch' */
  real_T s192_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S192>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s222_Switch;                  /* '<S222>/Switch' */
  real_T s229_Sum2;                    /* '<S229>/Sum2' */
  real_T s229_Product2;                /* '<S229>/Product2' */
  real_T s231_Switch1;                 /* '<S231>/Switch1' */
  real_T s230_Product;                 /* '<S230>/Product' */
  real_T s227_Switch3;                 /* '<S227>/Switch3' */
  real_T s227_Switch1;                 /* '<S227>/Switch1' */
  real_T s227_Switch4;                 /* '<S227>/Switch4' */
  real_T s222_Multiplyby10ifnotyetenabled;/* '<S222>/Multiply by 1.0 if not yet enabled' */
  real_T s149_Add;                     /* '<S149>/Add' */
  real_T s147_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S147>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s144_PerCylinderMassFlowRate; /* '<S144>/Per-Cylinder Mass Flow Rate' */
  real_T s144_ApplyMultipliersforO2KnockControlandEnrichment1;/* '<S144>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s164_MinMax1;                 /* '<S164>/MinMax1' */
  real_T s155_Sum1;                    /* '<S155>/Sum1' */
  real_T s150_Sum;                     /* '<S150>/Sum' */
  real_T s150_Product1;                /* '<S150>/Product1' */
  real_T s153_motohawk_interpolation_1d;/* '<S153>/motohawk_interpolation_1d' */
  real_T s130_DesEquivRatio;           /* '<S130>/Product1' */
  real_T s127_APP;                     /* '<S119>/Remy Control' */
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
  real_T s824_Switch;                  /* '<S824>/Switch' */
  int32_T s676_DataTypeConversion;     /* '<S676>/Data Type Conversion' */
  int32_T s764_Merge;                  /* '<S764>/Merge' */
  uint32_T s366_ReadCANMessage_o1;     /* '<S366>/Read CAN Message' */
  uint32_T s366_ReadCANMessage1_o1;    /* '<S366>/Read CAN Message1' */
  uint32_T s366_ReadCANMessage2_o1;    /* '<S366>/Read CAN Message2' */
  uint32_T s366_ReadCANMessage3_o1;    /* '<S366>/Read CAN Message3' */
  uint32_T s519_Sum;                   /* '<S519>/Sum' */
  int16_T s678_motohawk_pwm1;          /* '<S678>/motohawk_pwm1' */
  uint16_T s362_motohawk_ain1;         /* '<S362>/motohawk_ain1' */
  uint16_T s362_motohawk_ain14;        /* '<S362>/motohawk_ain14' */
  uint16_T s363_motohawk_ain3;         /* '<S363>/motohawk_ain3' */
  uint16_T s362_motohawk_ain_read1;    /* '<S362>/motohawk_ain_read1' */
  uint16_T s362_motohawk_ain4;         /* '<S362>/motohawk_ain4' */
  uint16_T s362_motohawk_ain2;         /* '<S362>/motohawk_ain2' */
  uint16_T s362_motohawk_ain3;         /* '<S362>/motohawk_ain3' */
  uint16_T s675_SparkSequence_o3[8];   /* '<S675>/Spark Sequence' */
  uint16_T s675_SparkSequence_o4[8];   /* '<S675>/Spark Sequence' */
  uint16_T s602_motohawk_ain;          /* '<S602>/motohawk_ain' */
  uint16_T s602_motohawk_ain1;         /* '<S602>/motohawk_ain1' */
  index_T s318_motohawk_prelookup;     /* '<S318>/motohawk_prelookup' */
  index_T s317_motohawk_prelookup1;    /* '<S317>/motohawk_prelookup1' */
  index_T s317_Indexes;                /* '<S317>/motohawk_prelookup5' */
  index_T s315_motohawk_prelookup;     /* '<S315>/motohawk_prelookup' */
  index_T s316_motohawk_prelookup;     /* '<S316>/motohawk_prelookup' */
  index_T s356_motohawk_prelookup1;    /* '<S356>/motohawk_prelookup1' */
  index_T s356_motohawk_prelookup4;    /* '<S356>/motohawk_prelookup4' */
  index_T s279_RPMAccel17Idx;          /* '<S279>/motohawk_prelookup' */
  int8_T s15_Merge1[32];               /* '<S15>/Merge1' */
  int8_T s752_DataTypeConversion;      /* '<S752>/Data Type Conversion' */
  int8_T s166_DataTypeConversion;      /* '<S166>/Data Type Conversion' */
  int8_T s166_DataTypeConversion1;     /* '<S166>/Data Type Conversion1' */
  int8_T s99_MultiportSwitch[8];       /* '<S99>/Multiport Switch' */
  int8_T s109_CutArray[8];             /* '<S109>/CutArray' */
  int8_T s25_DC_Override;              /* '<S13>/ETC Test  Manager' */
  int8_T s25_SetpointMode;             /* '<S13>/ETC Test  Manager' */
  uint8_T s325_UnitDelay;              /* '<S325>/Unit Delay' */
  uint8_T s275_motohawk_data_read1;    /* '<S275>/motohawk_data_read1' */
  uint8_T s679_InjectorSequence_o1[8]; /* '<S679>/Injector Sequence' */
  uint8_T s15_DataTypeConversion5;     /* '<S15>/Data Type Conversion5' */
  uint8_T s361_motohawk_encoder_fault; /* '<S361>/motohawk_encoder_fault' */
  uint8_T s361_motohawk_encoder_state; /* '<S361>/motohawk_encoder_state' */
  uint8_T s754_Switch1;                /* '<S754>/Switch1' */
  uint8_T s345_Switch;                 /* '<S345>/Switch' */
  uint8_T s344_State;                  /* '<S325>/Engine State Machine' */
  uint8_T s201_IdleState;              /* '<S186>/IdleStateMachine' */
  uint8_T s99_UnitDelay1;              /* '<S99>/Unit Delay1' */
  uint8_T s109_Switch;                 /* '<S109>/Switch' */
  boolean_T s325_Stall;                /* '<S325>/Relational Operator1' */
  boolean_T s325_Crank;                /* '<S325>/Relational Operator4' */
  boolean_T s325_Run;                  /* '<S325>/Logical Operator1' */
  boolean_T s684_Compare;              /* '<S684>/Compare' */
  boolean_T s685_Compare;              /* '<S685>/Compare' */
  boolean_T s686_Compare;              /* '<S686>/Compare' */
  boolean_T s295_RelationalOperator4;  /* '<S295>/Relational Operator4' */
  boolean_T s296_RelationalOperator4;  /* '<S296>/Relational Operator4' */
  boolean_T s292_LogicalOperator;      /* '<S292>/Logical Operator' */
  boolean_T s15_LogicalOperator2[8];   /* '<S15>/Logical Operator2' */
  boolean_T s19_Enable;                /* '<S19>/Logical Operator2' */
  boolean_T s763_Merge;                /* '<S763>/Merge' */
  boolean_T s120_FUELP;                /* '<S120>/Merge7' */
  boolean_T s360_EStop;                /* '<S360>/motohawk_data_read' */
  boolean_T s769_LogicalOperator;      /* '<S769>/Logical Operator' */
  boolean_T s783_Merge[8];             /* '<S783>/Merge' */
  boolean_T s120_OILP;                 /* '<S120>/Merge9' */
  boolean_T s800_LogicalOperator;      /* '<S800>/Logical Operator' */
  boolean_T s120_O2Heater;             /* '<S120>/Merge11' */
  boolean_T s804_LogicalOperator;      /* '<S804>/Logical Operator' */
  boolean_T s675_LogicalOperator1[8];  /* '<S675>/Logical Operator1' */
  boolean_T s752_RelationalOperator1;  /* '<S752>/Relational Operator1' */
  boolean_T s320_RelationalOperator3;  /* '<S320>/Relational Operator3' */
  boolean_T s280_Enable;               /* '<S275>/Baro Stall State Delay' */
  boolean_T s166_MultiportSwitch;      /* '<S166>/Multiport Switch' */
  boolean_T s200_RelationalOperator;   /* '<S200>/Relational Operator' */
  boolean_T s186_RelationalOperator;   /* '<S186>/Relational Operator' */
  boolean_T s186_RelationalOperator3;  /* '<S186>/Relational Operator3' */
  boolean_T s186_RelationalOperator1;  /* '<S186>/Relational Operator1' */
  boolean_T s186_LogicalOperator;      /* '<S186>/Logical Operator' */
  boolean_T s186_RelationalOperator5;  /* '<S186>/Relational Operator5' */
  boolean_T s202_RelOp;                /* '<S202>/RelOp' */
  boolean_T s134_HitCrossing1;         /* '<S134>/Hit  Crossing1' */
  boolean_T s134_LogicalOperator;      /* '<S134>/Logical Operator' */
  boolean_T s187_RelationalOperator1;  /* '<S187>/Relational Operator1' */
  boolean_T s183_LogicalOperator1;     /* '<S183>/Logical Operator1' */
  boolean_T s220_LogicalOperator;      /* '<S220>/Logical Operator' */
  boolean_T s220_LogicalOperator3;     /* '<S220>/Logical Operator3' */
  boolean_T s220_RelationalOperator5;  /* '<S220>/Relational Operator5' */
  boolean_T s220_LogicalOperator2;     /* '<S220>/Logical Operator2' */
  boolean_T s146_LogicalOperator2;     /* '<S146>/Logical Operator2' */
  boolean_T s162_LogicalOperator;      /* '<S162>/Logical Operator' */
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
  boolean_T s808_RelationalOperator;   /* '<S808>/Relational Operator' */
  boolean_T s808_motohawk_data_read;   /* '<S808>/motohawk_data_read' */
  boolean_T s812_MPRDState;            /* '<S808>/ECUP Latch' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02
    s303_MultiplyandDivideavoidingdivdebyzero1;/* '<S303>/Multiply and Divide, avoiding divde by zero1' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02
    s151_MultiplyandDivideavoidingdivdebyzero;/* '<S151>/Multiply and Divide, avoiding divde by zero' */
} BlockIO_BaseEngineController_A02;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s527_UnitDelay1_DSTATE;       /* '<S527>/Unit Delay1' */
  real_T s582_UnitDelay_DSTATE;        /* '<S582>/Unit Delay' */
  real_T s520_UnitDelay_DSTATE;        /* '<S520>/Unit Delay' */
  real_T s529_UnitDelay1_DSTATE;       /* '<S529>/Unit Delay1' */
  real_T s598_UnitDelay_DSTATE;        /* '<S598>/Unit Delay' */
  real_T s646_UnitDelay_DSTATE;        /* '<S646>/Unit Delay' */
  real_T s639_UnitDelay1_DSTATE;       /* '<S639>/Unit Delay1' */
  real_T s663_UnitDelay_DSTATE;        /* '<S663>/Unit Delay' */
  real_T s656_UnitDelay1_DSTATE;       /* '<S656>/Unit Delay1' */
  real_T s327_UnitDelay_DSTATE;        /* '<S327>/Unit Delay' */
  real_T s601_UnitDelay_DSTATE;        /* '<S601>/Unit Delay' */
  real_T s609_UnitDelay_DSTATE;        /* '<S609>/Unit Delay' */
  real_T s525_UnitDelay1_DSTATE;       /* '<S525>/Unit Delay1' */
  real_T s283_UnitDelay_DSTATE;        /* '<S283>/Unit Delay' */
  real_T s524_UnitDelay1_DSTATE;       /* '<S524>/Unit Delay1' */
  real_T s564_UnitDelay_DSTATE;        /* '<S564>/Unit Delay' */
  real_T s499_UnitDelay_DSTATE;        /* '<S499>/Unit Delay' */
  real_T s507_UnitDelay_DSTATE;        /* '<S507>/Unit Delay' */
  real_T s295_UnitDelay2_DSTATE;       /* '<S295>/Unit Delay2' */
  real_T s298_UnitDelay_DSTATE;        /* '<S298>/Unit Delay' */
  real_T s296_UnitDelay2_DSTATE;       /* '<S296>/Unit Delay2' */
  real_T s301_UnitDelay_DSTATE;        /* '<S301>/Unit Delay' */
  real_T s294_UnitDelay_DSTATE;        /* '<S294>/Unit Delay' */
  real_T s341_UnitDelay_DSTATE;        /* '<S341>/Unit Delay' */
  real_T s343_UnitDelay_DSTATE;        /* '<S343>/Unit Delay' */
  real_T s547_UnitDelay_DSTATE;        /* '<S547>/Unit Delay' */
  real_T s522_UnitDelay1_DSTATE;       /* '<S522>/Unit Delay1' */
  real_T s546_UnitDelay_DSTATE;        /* '<S546>/Unit Delay' */
  real_T s544_UnitDelay_DSTATE;        /* '<S544>/Unit Delay' */
  real_T s544_UnitDelay1_DSTATE;       /* '<S544>/Unit Delay1' */
  real_T s544_UnitDelay2_DSTATE;       /* '<S544>/Unit Delay2' */
  real_T s521_UnitDelay1_DSTATE;       /* '<S521>/Unit Delay1' */
  real_T s535_UnitDelay_DSTATE;        /* '<S535>/Unit Delay' */
  real_T s73_UnitDelay_DSTATE;         /* '<S73>/Unit Delay' */
  real_T s72_UnitDelay_DSTATE;         /* '<S72>/Unit Delay' */
  real_T s70_UnitDelay_DSTATE;         /* '<S70>/Unit Delay' */
  real_T s69_UnitDelay_DSTATE;         /* '<S69>/Unit Delay' */
  real_T s68_UnitDelay_DSTATE;         /* '<S68>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s66_UnitDelay_DSTATE;         /* '<S66>/Unit Delay' */
  real_T s65_UnitDelay_DSTATE;         /* '<S65>/Unit Delay' */
  real_T s71_UnitDelay_DSTATE[8];      /* '<S71>/Unit Delay' */
  real_T s307_UnitDelay_DSTATE;        /* '<S307>/Unit Delay' */
  real_T s327_UnitDelay1_DSTATE;       /* '<S327>/Unit Delay1' */
  real_T s523_UnitDelay1_DSTATE;       /* '<S523>/Unit Delay1' */
  real_T s556_UnitDelay_DSTATE;        /* '<S556>/Unit Delay' */
  real_T s572_UnitDelay_DSTATE;        /* '<S572>/Unit Delay' */
  real_T s424_UnitDelay_DSTATE;        /* '<S424>/Unit Delay' */
  real_T s528_UnitDelay1_DSTATE;       /* '<S528>/Unit Delay1' */
  real_T s590_UnitDelay_DSTATE;        /* '<S590>/Unit Delay' */
  real_T s295_UnitDelay1_DSTATE;       /* '<S295>/Unit Delay1' */
  real_T s295_UnitDelay3_DSTATE;       /* '<S295>/Unit Delay3' */
  real_T s295_UnitDelay4_DSTATE;       /* '<S295>/Unit Delay4' */
  real_T s296_UnitDelay1_DSTATE;       /* '<S296>/Unit Delay1' */
  real_T s296_UnitDelay3_DSTATE;       /* '<S296>/Unit Delay3' */
  real_T s296_UnitDelay4_DSTATE;       /* '<S296>/Unit Delay4' */
  real_T s374_UnitDelay_DSTATE;        /* '<S374>/Unit Delay' */
  real_T s643_UnitDelay1_DSTATE;       /* '<S643>/Unit Delay1' */
  real_T s643_UnitDelay_DSTATE;        /* '<S643>/Unit Delay' */
  real_T s643_UnitDelay3_DSTATE;       /* '<S643>/Unit Delay3' */
  real_T s643_UnitDelay4_DSTATE;       /* '<S643>/Unit Delay4' */
  real_T s660_UnitDelay1_DSTATE;       /* '<S660>/Unit Delay1' */
  real_T s660_UnitDelay_DSTATE;        /* '<S660>/Unit Delay' */
  real_T s660_UnitDelay3_DSTATE;       /* '<S660>/Unit Delay3' */
  real_T s660_UnitDelay4_DSTATE;       /* '<S660>/Unit Delay4' */
  real_T s749_UnitDelay_DSTATE;        /* '<S749>/Unit Delay' */
  real_T s750_UnitDelay_DSTATE;        /* '<S750>/Unit Delay' */
  real_T s752_CrankCounter_DSTATE;     /* '<S752>/CrankCounter' */
  real_T s612_UnitDelay_DSTATE;        /* '<S612>/Unit Delay' */
  real_T s620_UnitDelay_DSTATE;        /* '<S620>/Unit Delay' */
  real_T s613_UnitDelay_DSTATE;        /* '<S613>/Unit Delay' */
  real_T s629_UnitDelay_DSTATE;        /* '<S629>/Unit Delay' */
  real_T s259_UnitDelay_DSTATE[8];     /* '<S259>/Unit Delay' */
  real_T s339_UnitDelay1_DSTATE;       /* '<S339>/Unit Delay1' */
  real_T s338_UnitDelay1_DSTATE;       /* '<S338>/Unit Delay1' */
  real_T s320_UnitDelay2_DSTATE;       /* '<S320>/Unit Delay2' */
  real_T s333_UnitDelay_DSTATE;        /* '<S333>/Unit Delay' */
  real_T s336_UnitDelay_DSTATE;        /* '<S336>/Unit Delay' */
  real_T s320_UnitDelay1_DSTATE;       /* '<S320>/Unit Delay1' */
  real_T s320_UnitDelay3_DSTATE;       /* '<S320>/Unit Delay3' */
  real_T s320_UnitDelay4_DSTATE;       /* '<S320>/Unit Delay4' */
  real_T s313_UnitDelay_DSTATE;        /* '<S313>/Unit Delay' */
  real_T s284_UnitDelay1_DSTATE;       /* '<S284>/Unit Delay1' */
  real_T s247_UnitDelay_DSTATE;        /* '<S247>/Unit Delay' */
  real_T s248_UnitDelay_DSTATE;        /* '<S248>/Unit Delay' */
  real_T s239_UnitDelay_DSTATE;        /* '<S239>/Unit Delay' */
  real_T s167_UnitDelay_DSTATE;        /* '<S167>/Unit Delay' */
  real_T s178_UnitDelay_DSTATE;        /* '<S178>/Unit Delay' */
  real_T s179_UnitDelay_DSTATE;        /* '<S179>/Unit Delay' */
  real_T s204_UnitDelay_DSTATE;        /* '<S204>/Unit Delay' */
  real_T s206_UnitDelay_DSTATE;        /* '<S206>/Unit Delay' */
  real_T s134_UnitDelay3_DSTATE;       /* '<S134>/Unit Delay3' */
  real_T s134_UnitDelay1_DSTATE;       /* '<S134>/Unit Delay1' */
  real_T s185_state_DSTATE;            /* '<S185>/state' */
  real_T s134_UnitDelay2_DSTATE;       /* '<S134>/Unit Delay2' */
  real_T s189_UnitDelay_DSTATE;        /* '<S189>/Unit Delay' */
  real_T s216_UnitDelay_DSTATE;        /* '<S216>/Unit Delay' */
  real_T s217_UnitDelay_DSTATE;        /* '<S217>/Unit Delay' */
  real_T s211_UnitDelay_DSTATE;        /* '<S211>/Unit Delay' */
  real_T s192_UnitDelay_DSTATE;        /* '<S192>/Unit Delay' */
  real_T s231_UnitDelay_DSTATE;        /* '<S231>/Unit Delay' */
  real_T s230_UnitDelay_DSTATE;        /* '<S230>/Unit Delay' */
  real_T s227_UnitDelay1_DSTATE;       /* '<S227>/Unit Delay1' */
  real_T s227_UnitDelay_DSTATE;        /* '<S227>/Unit Delay' */
  real_T s227_UnitDelay2_DSTATE;       /* '<S227>/Unit Delay2' */
  real_T s155_UnitDelay_DSTATE;        /* '<S155>/Unit Delay' */
  real_T s114_UnitDelay_DSTATE;        /* '<S114>/Unit Delay' */
  real_T s99_UnitDelay2_DSTATE;        /* '<S99>/Unit Delay2' */
  real_T s13_UnitDelay_DSTATE;         /* '<S13>/Unit Delay' */
  real_T s54_UnitDelay_DSTATE;         /* '<S54>/Unit Delay' */
  real_T s45_UnitDelay_DSTATE;         /* '<S45>/Unit Delay' */
  real_T s41_UnitDelay_DSTATE;         /* '<S41>/Unit Delay' */
  real_T s43_UnitDelay_DSTATE;         /* '<S43>/Unit Delay' */
  real_T s46_UnitDelay_DSTATE;         /* '<S46>/Unit Delay' */
  real_T s47_UnitDelay_DSTATE;         /* '<S47>/Unit Delay' */
  real_T s814_UnitDelay_DSTATE;        /* '<S814>/Unit Delay' */
  real_T s814_UnitDelay1_DSTATE;       /* '<S814>/Unit Delay1' */
  real_T s280_TOld;                    /* '<S275>/Baro Stall State Delay' */
  real_T s127_count;                   /* '<S119>/Remy Control' */
  real_T s25_TimerOld;                 /* '<S13>/ETC Test  Manager' */
  uint32_T s357_UnitDelay_DSTATE;      /* '<S357>/Unit Delay' */
  uint32_T s519_UnitDelay_DSTATE;      /* '<S519>/Unit Delay' */
  uint32_T s577_motohawk_delta_time_DWORK1;/* '<S577>/motohawk_delta_time' */
  uint32_T s513_motohawk_delta_time_DWORK1;/* '<S513>/motohawk_delta_time' */
  uint32_T s593_motohawk_delta_time_DWORK1;/* '<S593>/motohawk_delta_time' */
  uint32_T s638_motohawk_delta_time_DWORK1;/* '<S638>/motohawk_delta_time' */
  uint32_T s655_motohawk_delta_time_DWORK1;/* '<S655>/motohawk_delta_time' */
  uint32_T s603_motohawk_delta_time_DWORK1;/* '<S603>/motohawk_delta_time' */
  uint32_T s349_motohawk_delta_time_DWORK1;/* '<S349>/motohawk_delta_time' */
  uint32_T s275_motohawk_delta_time_DWORK1;/* '<S275>/motohawk_delta_time' */
  uint32_T s559_motohawk_delta_time_DWORK1;/* '<S559>/motohawk_delta_time' */
  uint32_T s501_motohawk_delta_time_DWORK1;/* '<S501>/motohawk_delta_time' */
  uint32_T s294_motohawk_delta_time1_DWORK1;/* '<S294>/motohawk_delta_time1' */
  uint32_T s341_motohawk_delta_time_DWORK1;/* '<S341>/motohawk_delta_time' */
  uint32_T s547_motohawk_delta_time_DWORK1;/* '<S547>/motohawk_delta_time' */
  uint32_T s543_motohawk_delta_time_DWORK1;/* '<S543>/motohawk_delta_time' */
  uint32_T s21_motohawk_delta_time_DWORK1;/* '<S21>/motohawk_delta_time' */
  uint32_T s530_motohawk_delta_time_DWORK1;/* '<S530>/motohawk_delta_time' */
  uint32_T s773_motohawk_delta_time_DWORK1;/* '<S773>/motohawk_delta_time' */
  uint32_T s351_motohawk_delta_time_DWORK1;/* '<S351>/motohawk_delta_time' */
  uint32_T s22_motohawk_delta_time_DWORK1;/* '<S22>/motohawk_delta_time' */
  uint32_T s347_motohawk_delta_time_DWORK1;/* '<S347>/motohawk_delta_time' */
  uint32_T s551_motohawk_delta_time_DWORK1;/* '<S551>/motohawk_delta_time' */
  uint32_T s567_motohawk_delta_time_DWORK1;/* '<S567>/motohawk_delta_time' */
  uint32_T s385_motohawk_delta_time_DWORK1;/* '<S385>/motohawk_delta_time' */
  uint32_T s585_motohawk_delta_time_DWORK1;/* '<S585>/motohawk_delta_time' */
  uint32_T s307_motohawk_delta_time_DWORK1;/* '<S307>/motohawk_delta_time' */
  uint32_T s614_motohawk_delta_time_DWORK1;/* '<S614>/motohawk_delta_time' */
  uint32_T s623_motohawk_delta_time_DWORK1;/* '<S623>/motohawk_delta_time' */
  uint32_T s264_motohawk_delta_time_DWORK1;/* '<S264>/motohawk_delta_time' */
  uint32_T s265_motohawk_delta_time_DWORK1;/* '<S265>/motohawk_delta_time' */
  uint32_T s266_motohawk_delta_time_DWORK1;/* '<S266>/motohawk_delta_time' */
  uint32_T s274_motohawk_delta_time_DWORK1;/* '<S274>/motohawk_delta_time' */
  uint32_T s273_motohawk_delta_time_DWORK1;/* '<S273>/motohawk_delta_time' */
  uint32_T s257_motohawk_delta_time_DWORK1;/* '<S257>/motohawk_delta_time' */
  uint32_T s261_motohawk_delta_time_DWORK1;/* '<S261>/motohawk_delta_time' */
  uint32_T s336_motohawk_delta_time_DWORK1;/* '<S336>/motohawk_delta_time' */
  uint32_T s320_motohawk_delta_time_DWORK1;/* '<S320>/motohawk_delta_time' */
  uint32_T s313_motohawk_delta_time1_DWORK1;/* '<S313>/motohawk_delta_time1' */
  uint32_T s167_motohawk_delta_time_DWORK1;/* '<S167>/motohawk_delta_time' */
  uint32_T s179_motohawk_delta_time_DWORK1;/* '<S179>/motohawk_delta_time' */
  uint32_T s185_motohawk_delta_time_DWORK1;/* '<S185>/motohawk_delta_time' */
  uint32_T s189_motohawk_delta_time_DWORK1;/* '<S189>/motohawk_delta_time' */
  uint32_T s217_motohawk_delta_time_DWORK1;/* '<S217>/motohawk_delta_time' */
  uint32_T s192_motohawk_delta_time_DWORK1;/* '<S192>/motohawk_delta_time' */
  uint32_T s231_motohawk_delta_time_DWORK1;/* '<S231>/motohawk_delta_time' */
  uint32_T s235_motohawk_delta_time_DWORK1;/* '<S235>/motohawk_delta_time' */
  uint32_T s237_motohawk_delta_time_DWORK1;/* '<S237>/motohawk_delta_time' */
  uint32_T s236_motohawk_delta_time_DWORK1;/* '<S236>/motohawk_delta_time' */
  uint32_T s154_motohawk_delta_time_DWORK1;/* '<S154>/motohawk_delta_time' */
  uint32_T s62_motohawk_delta_time_DWORK1;/* '<S62>/motohawk_delta_time' */
  uint32_T s54_motohawk_delta_time_DWORK1;/* '<S54>/motohawk_delta_time' */
  uint32_T s42_motohawk_delta_time_DWORK1;/* '<S42>/motohawk_delta_time' */
  uint32_T s47_motohawk_delta_time_DWORK1;/* '<S47>/motohawk_delta_time' */
  uint32_T s824_motohawk_delta_time_DWORK1;/* '<S824>/motohawk_delta_time' */
  int_T s134_HitCrossing1_MODE;        /* '<S134>/Hit  Crossing1' */
  uint16_T s679_InjectorSequence_DWORK2;/* '<S679>/Injector Sequence' */
  int8_T s322_UnitDelay_DSTATE;        /* '<S322>/Unit Delay' */
  int8_T s321_UnitDelay_DSTATE;        /* '<S321>/Unit Delay' */
  int8_T s281_UnitDelay_DSTATE;        /* '<S281>/Unit Delay' */
  uint8_T s325_UnitDelay_DSTATE;       /* '<S325>/Unit Delay' */
  uint8_T s345_CrankCounter_DSTATE;    /* '<S345>/CrankCounter' */
  uint8_T s99_UnitDelay1_DSTATE;       /* '<S99>/Unit Delay1' */
  boolean_T s270_UnitDelay_DSTATE;     /* '<S270>/Unit Delay' */
  boolean_T s271_UnitDelay_DSTATE;     /* '<S271>/Unit Delay' */
  boolean_T s272_UnitDelay_DSTATE;     /* '<S272>/Unit Delay' */
  boolean_T s242_InitialConditionisTrue_DSTATE;/* '<S242>/Initial Condition is True' */
  boolean_T s133_UnitDelay_DSTATE;     /* '<S133>/Unit Delay' */
  boolean_T s182_UnitDelay_DSTATE;     /* '<S182>/Unit Delay' */
  boolean_T s234_UnitDelay_DSTATE;     /* '<S234>/Unit Delay' */
  boolean_T s44_UnitDelay_DSTATE;      /* '<S44>/Unit Delay' */
  boolean_T s813_UnitDelay8_DSTATE;    /* '<S813>/Unit Delay8' */
  boolean_T s813_UnitDelay6_DSTATE;    /* '<S813>/Unit Delay6' */
  boolean_T s813_UnitDelay7_DSTATE;    /* '<S813>/Unit Delay7' */
  boolean_T s809_UnitDelay_DSTATE;     /* '<S809>/Unit Delay' */
  boolean_T s815_UnitDelay2_DSTATE;    /* '<S815>/Unit Delay2' */
  boolean_T s808_UnitDelay5_DSTATE;    /* '<S808>/Unit Delay5' */
  boolean_T s815_UnitDelay_DSTATE;     /* '<S815>/Unit Delay' */
  boolean_T s815_UnitDelay1_DSTATE;    /* '<S815>/Unit Delay1' */
  boolean_T s808_UnitDelay3_DSTATE;    /* '<S808>/Unit Delay3' */
  boolean_T s808_UnitDelay4_DSTATE;    /* '<S808>/Unit Delay4' */
  uint8_T s363_motohawk_trigger_DWORK1;/* '<S363>/motohawk_trigger' */
  uint8_T s325_motohawk_trigger_DWORK1;/* '<S325>/motohawk_trigger' */
  uint8_T s526_motohawk_trigger5_DWORK1;/* '<S526>/motohawk_trigger5' */
  uint8_T s6_motohawk_trigger1_DWORK1; /* '<S6>/motohawk_trigger1' */
  uint8_T s6_motohawk_trigger_DWORK1;  /* '<S6>/motohawk_trigger' */
  uint8_T s5_motohawk_trigger_DWORK1;  /* '<S5>/motohawk_trigger' */
  uint8_T s752_motohawk_trigger1_DWORK1;/* '<S752>/motohawk_trigger1' */
  uint8_T s344_is_c2_BaseEngineController_A02;/* '<S325>/Engine State Machine' */
  uint8_T s280_is_c19_BaseEngineController_A02;/* '<S275>/Baro Stall State Delay' */
  uint8_T s121_motohawk_trigger1_DWORK1;/* '<S121>/motohawk_trigger1' */
  uint8_T s201_is_active_c12_BaseEngineController_A02;/* '<S186>/IdleStateMachine' */
  uint8_T s201_is_c12_BaseEngineController_A02;/* '<S186>/IdleStateMachine' */
  uint8_T s127_is_active_c5_BaseEngineController_A02;/* '<S119>/Remy Control' */
  uint8_T s127_is_c5_BaseEngineController_A02;/* '<S119>/Remy Control' */
  uint8_T s99_motohawk_trigger_DWORK1; /* '<S99>/motohawk_trigger' */
  uint8_T s25_is_c9_BaseEngineController_A02;/* '<S13>/ETC Test  Manager' */
  uint8_T s20_is_active_c1_BaseEngineController_A02;/* '<S19>/Chart' */
  uint8_T s20_is_c1_BaseEngineController_A02;/* '<S19>/Chart' */
  uint8_T s812_is_c8_BaseEngineController_A02;/* '<S808>/ECUP Latch' */
  boolean_T s679_InjectorSequence_DWORK1[8];/* '<S679>/Injector Sequence' */
  boolean_T s222_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S222>/Multiply by 1.0 if not yet enabled' */
  boolean_T s828_Memory_PreviousInput; /* '<S828>/Memory' */
  boolean_T s7_Stall_MODE;             /* '<S7>/Stall' */
  boolean_T s7_Crank_MODE;             /* '<S7>/Crank' */
  boolean_T s275_CaptureSignalAtStartup_MODE;/* '<S275>/Capture Signal At Startup' */
  boolean_T s278_CaptureECTAtStartup_MODE;/* '<S278>/Capture ECT At Startup' */
  boolean_T s7_Run_MODE;               /* '<S7>/Run' */
  boolean_T s15_PassThrough1_MODE;     /* '<S15>/PassThrough1' */
  boolean_T s15_PassThrough3_MODE;     /* '<S15>/PassThrough3' */
  boolean_T s15_SequenceCutMachine_MODE;/* '<S15>/SequenceCutMachine' */
  boolean_T s15_PassThrough4_MODE;     /* '<S15>/PassThrough4' */
  boolean_T s6_ElectronicThrottleController_MODE;/* '<S6>/Electronic Throttle Controller' */
  boolean_T s15_PassThrough5_MODE;     /* '<S15>/PassThrough5' */
  boolean_T s278_CaptureIATAtStartup_MODE;/* '<S278>/Capture IAT At Startup' */
  boolean_T s322_CollectAverage_MODE;  /* '<S322>/Collect Average' */
  boolean_T s321_CollectAverage_MODE;  /* '<S321>/Collect Average' */
  boolean_T s281_CollectAverage_MODE;  /* '<S281>/Collect Average' */
  boolean_T s145_DeltaTPSTransientFueling_MODE;/* '<S145>/Delta TPS Transient Fueling' */
  boolean_T s150_ECTTransientFueling_MODE;/* '<S150>/ECT Transient Fueling' */
  boolean_T s29_PassThrough_MODE;      /* '<S29>/PassThrough' */
} D_Work_BaseEngineController_A02;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S134>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S30>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S13>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S815>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S815>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S815>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S815>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_e;/* '<S813>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j;/* '<S813>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_j;/* '<S813>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c;/* '<S813>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S811>/Clear' */
  ZCSigState Clear_Trig_ZCE_l;         /* '<S810>/Clear' */
} PrevZCSigStates_BaseEngineController_A02;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s679_Gain4;             /* '<S679>/Gain4' */
  const real_T s123_motohawk_replicate2;/* '<S123>/motohawk_replicate2' */
  const real_T s123_motohawk_replicate[8];/* '<S123>/motohawk_replicate' */
  const uint32_T s679_DataTypeConversion5;/* '<S679>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_A02;

/* Constant parameters (auto storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S828>/Logic'
   */
  boolean_T Logic_table[16];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S270>/Combinatorial  Logic'
   *   '<S271>/Combinatorial  Logic'
   *   '<S272>/Combinatorial  Logic'
   *   '<S44>/Combinatorial  Logic'
   *   '<S234>/Combinatorial  Logic'
   */
  boolean_T pooled646[8];
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
 * '<S128>' : BaseEngineController_A02/Foreground/Control/Controller/Merge/FuelPump
 * '<S129>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager
 * '<S130>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio
 * '<S131>' : BaseEngineController_A02/Foreground/Control/Controller/Run/EGR
 * '<S132>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager
 * '<S133>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor
 * '<S134>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor
 * '<S135>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control
 * '<S136>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager
 * '<S137>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Saturation
 * '<S138>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/ShutDownTasksComplete Reset
 * '<S139>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt
 * '<S140>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt/Adapt Table
 * '<S141>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs
 * '<S142>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/NewValue
 * '<S143>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/OldValue
 * '<S144>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S145>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S146>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S147>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S148>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Cals_and_Probes_Page
 * '<S149>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S150>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S151>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S152>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S153>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S154>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S155>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S156>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S157>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S158>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map
 * '<S159>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Cals_and_Probes_Page
 * '<S160>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S161>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S162>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S163>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S164>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S165>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S166>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S167>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S168>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S169>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S170>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S171>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S172>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S173>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S174>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S175>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Cals_and_Probes_Page
 * '<S176>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S177>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S178>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S179>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S180>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S181>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S182>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S183>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S184>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S185>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S186>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S187>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S188>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S189>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S190>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S191>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S192>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S193>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S194>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S195>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S196>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S197>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S198>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S199>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S200>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S201>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S202>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S203>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S204>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S205>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S206>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S207>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S208>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S209>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S210>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S211>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S212>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S213>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S214>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S215>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S216>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S217>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S218>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S219>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S220>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S221>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S222>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller
 * '<S223>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination/Cals_and_Probes_Page
 * '<S224>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S225>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S226>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller
 * '<S227>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation
 * '<S228>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Saturation
 * '<S229>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID
 * '<S230>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S231>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S232>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S233>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S234>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Hysteresis
 * '<S235>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S236>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S237>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S238>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S239>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S240>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S241>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S242>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S243>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S244>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S245>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S246>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Oil Pump at Startup
 * '<S247>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S248>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Oil Pump at Startup/Time Since Enabled
 * '<S249>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S250>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy
 * '<S251>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S252>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S253>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S254>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S255>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S256>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S257>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S258>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S259>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S260>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S261>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S262>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Cals_and_Probes_Page
 * '<S263>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S264>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S265>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S266>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S267>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis
 * '<S268>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis1
 * '<S269>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis2
 * '<S270>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis/Hysteresis
 * '<S271>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis1/Hysteresis
 * '<S272>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis2/Hysteresis
 * '<S273>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S274>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S275>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs
 * '<S276>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S277>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S278>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed
 * '<S279>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S280>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S281>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S282>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced
 * '<S283>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S284>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S285>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/C to K1
 * '<S286>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/Cals_and_Probes_Page
 * '<S287>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs
 * '<S288>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs/NewValue
 * '<S289>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs/OldValue
 * '<S290>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S291>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S292>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S293>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC
 * '<S294>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature
 * '<S295>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S296>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S297>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S298>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S299>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S300>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S301>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S302>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S303>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation
 * '<S304>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work
 * '<S305>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/Multiply and Divide, avoiding divde by zero1
 * '<S306>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/NonZero RPM
 * '<S307>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work
 * '<S308>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Stall
 * '<S309>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work/Saturation
 * '<S310>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/CompareTo
 * '<S311>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT
 * '<S312>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Saturation
 * '<S313>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator
 * '<S314>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator/Saturation
 * '<S315>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S316>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S317>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S318>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S319>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S320>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S321>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S322>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S323>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S324>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S325>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S326>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S327>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S328>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S329>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S330>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S331>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S332>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S333>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S334>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S335>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S336>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S337>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S338>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S339>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S340>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S341>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S342>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S343>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S344>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S345>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S346>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S347>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S348>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S349>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S350>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S351>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S352>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S353>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S354>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/NECCT Index
 * '<S355>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/Power Index
 * '<S356>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/Torque Indexes
 * '<S357>' : BaseEngineController_A02/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S358>' : BaseEngineController_A02/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S359>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs
 * '<S360>' : BaseEngineController_A02/Foreground/Inputs/Digital
 * '<S361>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed
 * '<S362>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors
 * '<S363>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors
 * '<S364>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors
 * '<S365>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112
 * '<S366>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix
 * '<S367>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/ESTOP at Startup
 * '<S368>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/MATLAB Function
 * '<S369>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs
 * '<S370>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1
 * '<S371>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2
 * '<S372>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs3
 * '<S373>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs4
 * '<S374>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/ESTOP at Startup/Time Since Enabled
 * '<S375>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs/NewValue
 * '<S376>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs/OldValue
 * '<S377>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1/NewValue
 * '<S378>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1/OldValue
 * '<S379>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2/NewValue
 * '<S380>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2/OldValue
 * '<S381>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs3/NewValue
 * '<S382>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs3/OldValue
 * '<S383>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs4/NewValue
 * '<S384>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs4/OldValue
 * '<S385>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/First Order Low Pass (Tunable)
 * '<S386>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/Power Estimator
 * '<S387>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs
 * '<S388>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1
 * '<S389>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10
 * '<S390>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11
 * '<S391>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12
 * '<S392>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13
 * '<S393>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14
 * '<S394>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15
 * '<S395>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16
 * '<S396>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17
 * '<S397>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18
 * '<S398>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19
 * '<S399>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2
 * '<S400>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20
 * '<S401>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21
 * '<S402>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22
 * '<S403>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23
 * '<S404>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24
 * '<S405>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25
 * '<S406>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26
 * '<S407>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27
 * '<S408>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28
 * '<S409>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29
 * '<S410>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3
 * '<S411>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30
 * '<S412>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31
 * '<S413>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32
 * '<S414>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33
 * '<S415>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34
 * '<S416>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35
 * '<S417>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36
 * '<S418>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4
 * '<S419>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5
 * '<S420>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6
 * '<S421>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7
 * '<S422>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8
 * '<S423>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9
 * '<S424>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S425>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs/NewValue
 * '<S426>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs/OldValue
 * '<S427>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1/NewValue
 * '<S428>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1/OldValue
 * '<S429>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10/NewValue
 * '<S430>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10/OldValue
 * '<S431>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11/NewValue
 * '<S432>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11/OldValue
 * '<S433>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12/NewValue
 * '<S434>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12/OldValue
 * '<S435>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13/NewValue
 * '<S436>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13/OldValue
 * '<S437>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14/NewValue
 * '<S438>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14/OldValue
 * '<S439>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15/NewValue
 * '<S440>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15/OldValue
 * '<S441>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16/NewValue
 * '<S442>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16/OldValue
 * '<S443>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17/NewValue
 * '<S444>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17/OldValue
 * '<S445>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18/NewValue
 * '<S446>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18/OldValue
 * '<S447>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19/NewValue
 * '<S448>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19/OldValue
 * '<S449>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2/NewValue
 * '<S450>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2/OldValue
 * '<S451>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20/NewValue
 * '<S452>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20/OldValue
 * '<S453>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21/NewValue
 * '<S454>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21/OldValue
 * '<S455>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22/NewValue
 * '<S456>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22/OldValue
 * '<S457>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23/NewValue
 * '<S458>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23/OldValue
 * '<S459>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24/NewValue
 * '<S460>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24/OldValue
 * '<S461>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25/NewValue
 * '<S462>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25/OldValue
 * '<S463>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26/NewValue
 * '<S464>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26/OldValue
 * '<S465>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27/NewValue
 * '<S466>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27/OldValue
 * '<S467>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28/NewValue
 * '<S468>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28/OldValue
 * '<S469>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29/NewValue
 * '<S470>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29/OldValue
 * '<S471>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3/NewValue
 * '<S472>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3/OldValue
 * '<S473>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30/NewValue
 * '<S474>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30/OldValue
 * '<S475>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31/NewValue
 * '<S476>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31/OldValue
 * '<S477>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32/NewValue
 * '<S478>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32/OldValue
 * '<S479>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33/NewValue
 * '<S480>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33/OldValue
 * '<S481>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34/NewValue
 * '<S482>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34/OldValue
 * '<S483>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35/NewValue
 * '<S484>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35/OldValue
 * '<S485>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36/NewValue
 * '<S486>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36/OldValue
 * '<S487>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4/NewValue
 * '<S488>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4/OldValue
 * '<S489>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5/NewValue
 * '<S490>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5/OldValue
 * '<S491>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6/NewValue
 * '<S492>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6/OldValue
 * '<S493>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7/NewValue
 * '<S494>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7/OldValue
 * '<S495>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8/NewValue
 * '<S496>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8/OldValue
 * '<S497>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9/NewValue
 * '<S498>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9/OldValue
 * '<S499>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor
 * '<S500>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1
 * '<S501>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S502>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S503>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S504>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S505>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S506>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S507>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S508>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S509>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S510>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1/NewValue
 * '<S511>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1/OldValue
 * '<S512>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S513>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S514>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S515>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S516>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S517>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S518>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S519>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S520>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S521>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1
 * '<S522>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S523>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres
 * '<S524>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP
 * '<S525>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime
 * '<S526>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S527>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres
 * '<S528>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts
 * '<S529>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts
 * '<S530>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/First Order Low Pass
 * '<S531>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem
 * '<S532>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem1
 * '<S533>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem2
 * '<S534>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override
 * '<S535>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/First Order Low Pass/First Order Low Pass
 * '<S536>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override/NewValue
 * '<S537>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override/OldValue
 * '<S538>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S539>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S540>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S541>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S542>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S543>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S544>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S545>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S546>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S547>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S548>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S549>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S550>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S551>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S552>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S553>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S554>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S555>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S556>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S557>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S558>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S559>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S560>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S561>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S562>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S563>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S564>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S565>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S566>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S567>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S568>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S569>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S570>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S571>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S572>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S573>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S574>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S575>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S576>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S577>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S578>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S579>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S580>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S581>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S582>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S583>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S584>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S585>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S586>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S587>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S588>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S589>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S590>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S591>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S592>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S593>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S594>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S595>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S596>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S597>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S598>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S599>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S600>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S601>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat
 * '<S602>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S603>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/First Order Low Pass
 * '<S604>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem
 * '<S605>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem1
 * '<S606>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem2
 * '<S607>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override
 * '<S608>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/motohawk_table_1d1
 * '<S609>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/First Order Low Pass/First Order Low Pass
 * '<S610>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override/NewValue
 * '<S611>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override/OldValue
 * '<S612>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S613>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S614>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S615>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S616>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S617>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S618>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S619>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S620>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S621>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S622>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S623>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S624>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S625>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S626>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S627>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S628>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S629>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S630>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S631>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S632>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S633>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S634>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1
 * '<S635>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13
 * '<S636>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S637>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S638>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S639>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S640>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S641>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S642>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S643>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S644>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S645>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S646>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S647>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S648>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S649>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S650>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S651>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S652>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S653>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S654>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S655>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S656>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S657>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S658>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S659>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S660>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S661>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S662>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S663>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S664>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S665>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S666>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S667>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S668>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S669>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S670>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1/NewValue
 * '<S671>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1/OldValue
 * '<S672>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13/NewValue
 * '<S673>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13/OldValue
 * '<S674>' : BaseEngineController_A02/Foreground/Outputs/CAN Out
 * '<S675>' : BaseEngineController_A02/Foreground/Outputs/Coil Control
 * '<S676>' : BaseEngineController_A02/Foreground/Outputs/EGR Out
 * '<S677>' : BaseEngineController_A02/Foreground/Outputs/FuelPump
 * '<S678>' : BaseEngineController_A02/Foreground/Outputs/HBridge
 * '<S679>' : BaseEngineController_A02/Foreground/Outputs/Injector Control
 * '<S680>' : BaseEngineController_A02/Foreground/Outputs/OilPump
 * '<S681>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater
 * '<S682>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112
 * '<S683>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix
 * '<S684>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant
 * '<S685>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant1
 * '<S686>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant2
 * '<S687>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1
 * '<S688>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2
 * '<S689>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3
 * '<S690>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4
 * '<S691>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5
 * '<S692>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6
 * '<S693>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7
 * '<S694>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1/NewValue
 * '<S695>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1/OldValue
 * '<S696>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2/NewValue
 * '<S697>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2/OldValue
 * '<S698>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3/NewValue
 * '<S699>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3/OldValue
 * '<S700>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4/NewValue
 * '<S701>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4/OldValue
 * '<S702>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5/NewValue
 * '<S703>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5/OldValue
 * '<S704>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6/NewValue
 * '<S705>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6/OldValue
 * '<S706>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7/NewValue
 * '<S707>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7/OldValue
 * '<S708>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs
 * '<S709>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1
 * '<S710>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10
 * '<S711>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11
 * '<S712>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12
 * '<S713>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2
 * '<S714>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3
 * '<S715>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4
 * '<S716>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5
 * '<S717>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6
 * '<S718>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7
 * '<S719>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8
 * '<S720>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9
 * '<S721>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs/NewValue
 * '<S722>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs/OldValue
 * '<S723>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1/NewValue
 * '<S724>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1/OldValue
 * '<S725>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10/NewValue
 * '<S726>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10/OldValue
 * '<S727>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11/NewValue
 * '<S728>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11/OldValue
 * '<S729>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12/NewValue
 * '<S730>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12/OldValue
 * '<S731>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2/NewValue
 * '<S732>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2/OldValue
 * '<S733>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3/NewValue
 * '<S734>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3/OldValue
 * '<S735>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4/NewValue
 * '<S736>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4/OldValue
 * '<S737>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5/NewValue
 * '<S738>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5/OldValue
 * '<S739>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6/NewValue
 * '<S740>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6/OldValue
 * '<S741>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7/NewValue
 * '<S742>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7/OldValue
 * '<S743>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8/NewValue
 * '<S744>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8/OldValue
 * '<S745>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9/NewValue
 * '<S746>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9/OldValue
 * '<S747>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S748>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S749>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S750>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S751>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S752>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S753>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S754>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S755>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S756>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S757>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S758>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S759>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S760>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S761>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S762>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S763>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs
 * '<S764>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1
 * '<S765>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs/NewValue
 * '<S766>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs/OldValue
 * '<S767>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1/NewValue
 * '<S768>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1/OldValue
 * '<S769>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S770>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S771>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S772>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S773>' : BaseEngineController_A02/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S774>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S775>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S776>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S777>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S778>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S779>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S780>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S781>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S782>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S783>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S784>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S785>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Cals_and_Probes_Page
 * '<S786>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S787>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S788>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S789>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S790>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S791>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S792>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S793>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S794>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S795>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S796>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S797>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S798>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S799>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S800>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP
 * '<S801>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units
 * '<S802>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units/NewValue
 * '<S803>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units/OldValue
 * '<S804>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater
 * '<S805>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units
 * '<S806>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units/NewValue
 * '<S807>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units/OldValue
 * '<S808>' : BaseEngineController_A02/Main Power Relay/Main Power Relay
 * '<S809>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S810>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S811>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S812>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S813>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S814>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/On Off Delay
 * '<S815>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S816>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S817>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S818>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S819>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S820>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S821>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S822>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S823>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S824>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S825>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S826>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S827>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S828>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S829>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S830>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S831>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S832>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S833>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S834>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S835>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S836>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S837>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S838>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_A02_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
