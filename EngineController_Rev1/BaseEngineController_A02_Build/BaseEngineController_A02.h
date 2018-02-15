/*
 * File: BaseEngineController_A02.h
 *
 * Code generated for Simulink model 'BaseEngineController_A02'.
 *
 * Model version                  : 1.1566
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Thu Feb 15 13:55:33 2018
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
  real_T s512_Sum1;                    /* '<S512>/Sum1' */
  real_T s561_Merge;                   /* '<S561>/Merge' */
  real_T s505_Sum1;                    /* '<S505>/Sum1' */
  real_T s355_RPMInst;                 /* '<S355>/Data Type Conversion1' */
  real_T s359_GensetEnable;            /* '<S359>/Read CAN Message' */
  real_T s359_GensetEnable_g;          /* '<S359>/Read CAN Message' */
  real_T s359_GensetEnable_a;          /* '<S359>/Read CAN Message' */
  real_T s113_generatingTQ;            /* '<S113>/Switch' */
  real_T s514_Sum1;                    /* '<S514>/Sum1' */
  real_T s577_Merge;                   /* '<S577>/Merge' */
  real_T s612_Switch;                  /* '<S612>/Switch' */
  real_T s616_MinMax;                  /* '<S616>/MinMax' */
  real_T s616_MinMax1;                 /* '<S616>/MinMax1' */
  real_T s620_MinMax1;                 /* '<S620>/MinMax1' */
  real_T s613_Switch;                  /* '<S613>/Switch' */
  real_T s633_MinMax;                  /* '<S633>/MinMax' */
  real_T s633_MinMax1;                 /* '<S633>/MinMax1' */
  real_T s637_MinMax1;                 /* '<S637>/MinMax1' */
  real_T s630_Merge;                   /* '<S630>/Merge' */
  real_T s647_Merge;                   /* '<S647>/Merge' */
  real_T s323_Switch2;                 /* '<S323>/Switch2' */
  real_T s358_motohawk_data_read1;     /* '<S358>/motohawk_data_read1' */
  real_T s317_Switch1;                 /* '<S317>/Switch1' */
  real_T s588_motohawk_interpolation_1d;/* '<S588>/motohawk_interpolation_1d' */
  real_T s587_Merge;                   /* '<S587>/Merge' */
  real_T s321_Sum1;                    /* '<S321>/Sum1' */
  real_T s343_Switch;                  /* '<S343>/Switch' */
  real_T s269_motohawk_delta_time;     /* '<S269>/motohawk_delta_time' */
  real_T s510_Sum1;                    /* '<S510>/Sum1' */
  real_T s277_Sum;                     /* '<S277>/Sum' */
  real_T s511_Merge;                   /* '<S511>/Merge' */
  real_T s509_Sum1;                    /* '<S509>/Sum1' */
  real_T s543_Merge;                   /* '<S543>/Merge' */
  real_T s276_NominalAirFlowRate2;     /* '<S276>/Nominal Air Flow Rate2' */
  real_T s276_PressureRatio;           /* '<S276>/Pressure Ratio' */
  real_T s354_Gain;                    /* '<S354>/Gain' */
  real_T s491_motohawk_interpolation_1d;/* '<S491>/motohawk_interpolation_1d' */
  real_T s490_Merge;                   /* '<S490>/Merge' */
  real_T s276_Saturation1;             /* '<S276>/Saturation1' */
  real_T s289_Merge;                   /* '<S289>/Merge' */
  real_T s292_Sum1;                    /* '<S292>/Sum1' */
  real_T s290_Merge;                   /* '<S290>/Merge' */
  real_T s295_Sum1;                    /* '<S295>/Sum1' */
  real_T s298_TorquetoPower;           /* '<S298>/Torque to Power' */
  real_T s306_MinMax1;                 /* '<S306>/MinMax1' */
  real_T s337_Sum1;                    /* '<S337>/Sum1' */
  real_T s356_Gain;                    /* '<S356>/Gain' */
  real_T s507_Sum1;                    /* '<S507>/Sum1' */
  real_T s527_Merge;                   /* '<S527>/Merge' */
  real_T s114_SparkEnergy;             /* '<S114>/Merge5' */
  real_T s114_SparkAdv;                /* '<S114>/Merge4' */
  real_T s345_Switch;                  /* '<S345>/Switch' */
  real_T s114_Throttle;                /* '<S114>/Merge8' */
  real_T s657_ETC;                     /* '<S657>/Saturation' */
  real_T s114_SOI;                     /* '<S114>/Merge1' */
  real_T s114_FPC[8];                  /* '<S114>/Merge2' */
  real_T s65_Sum[8];                   /* '<S65>/Sum' */
  real_T s57_constreftoatm;            /* '<S57>/const ref to atm' */
  real_T s114_FuelMult;                /* '<S114>/Merge6' */
  real_T s13_Sum2;                     /* '<S13>/Sum2' */
  real_T s13_Sum1;                     /* '<S13>/Sum1' */
  real_T s13_MinMax[8];                /* '<S13>/MinMax' */
  real_T s114_MakeUpEOI;               /* '<S114>/Merge10' */
  real_T s301_Switch1;                 /* '<S301>/Switch1' */
  real_T s341_Sum;                     /* '<S341>/Sum' */
  real_T s321_Sum3;                    /* '<S321>/Sum3' */
  real_T s508_Sum1;                    /* '<S508>/Sum1' */
  real_T s535_Merge;                   /* '<S535>/Merge' */
  real_T s551_Merge;                   /* '<S551>/Merge' */
  real_T s320_Sum3;                    /* '<S320>/Sum3' */
  real_T s360_ReadCANMessage_o2;       /* '<S360>/Read CAN Message' */
  real_T s360_ReadCANMessage_o3;       /* '<S360>/Read CAN Message' */
  real_T s360_ReadCANMessage_o4;       /* '<S360>/Read CAN Message' */
  real_T s360_ReadCANMessage1_o2;      /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage1_o3;      /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage1_o4;      /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage1_o5;      /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage1_o6;      /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage1_o7;      /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage1_o8;      /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage1_o9;      /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage1_o10;     /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage1_o11;     /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage1_o12;     /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage1_o13;     /* '<S360>/Read CAN Message1' */
  real_T s360_ReadCANMessage2_o2;      /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o3;      /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o4;      /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o5;      /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o6;      /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o7;      /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o8;      /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o9;      /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o10;     /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o11;     /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o12;     /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o13;     /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o14;     /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o15;     /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage2_o16;     /* '<S360>/Read CAN Message2' */
  real_T s360_ReadCANMessage3_o2;      /* '<S360>/Read CAN Message3' */
  real_T s360_ReadCANMessage3_o3;      /* '<S360>/Read CAN Message3' */
  real_T s360_ReadCANMessage3_o4;      /* '<S360>/Read CAN Message3' */
  real_T s506_Sum1;                    /* '<S506>/Sum1' */
  real_T s513_Sum1;                    /* '<S513>/Sum1' */
  real_T s519_Merge;                   /* '<S519>/Merge' */
  real_T s569_Merge;                   /* '<S569>/Merge' */
  real_T s366_UnitDelay;               /* '<S366>/Unit Delay' */
  real_T s728_Sum;                     /* '<S728>/Sum' */
  real_T s729_Sum;                     /* '<S729>/Sum' */
  real_T s731_CrankCounter;            /* '<S731>/CrankCounter' */
  real_T s599_motohawk_interpolation_1d;/* '<S599>/motohawk_interpolation_1d' */
  real_T s592_Merge;                   /* '<S592>/Merge' */
  real_T s598_Merge;                   /* '<S598>/Merge' */
  real_T s608_motohawk_interpolation_1d;/* '<S608>/motohawk_interpolation_1d' */
  real_T s593_Merge;                   /* '<S593>/Merge' */
  real_T s607_Merge;                   /* '<S607>/Merge' */
  real_T s333_Product;                 /* '<S333>/Product' */
  real_T s332_Product;                 /* '<S332>/Product' */
  real_T s314_Merge;                   /* '<S314>/Merge' */
  real_T s330_Sum2;                    /* '<S330>/Sum2' */
  real_T s307_Switch1;                 /* '<S307>/Switch1' */
  real_T s278_Product;                 /* '<S278>/Product' */
  real_T s274_Timer;                   /* '<S269>/Baro Stall State Delay' */
  real_T s241_UnitDelay;               /* '<S241>/Unit Delay' */
  real_T s242_UnitDelay;               /* '<S242>/Unit Delay' */
  real_T s125_MultiportSwitch;         /* '<S125>/Multiport Switch' */
  real_T s127_Product;                 /* '<S127>/Product' */
  real_T s235_Add;                     /* '<S235>/Add' */
  real_T s232_Product;                 /* '<S232>/Product' */
  real_T s132_ApplyOffsetstoBaseSparkAdvance1;/* '<S132>/Apply Offsets to Base Spark Advance1' */
  real_T s238_MinMax1;                 /* '<S238>/MinMax1' */
  real_T s233_Switch;                  /* '<S233>/Switch' */
  real_T s132_motohawk_interpolation_2d1;/* '<S132>/motohawk_interpolation_2d1' */
  real_T s129_Sum;                     /* '<S129>/Sum' */
  real_T s162_Merge;                   /* '<S162>/Merge' */
  real_T s162_Merge1;                  /* '<S162>/Merge1' */
  real_T s161_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S161>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s171_Sum2;                    /* '<S171>/Sum2' */
  real_T s171_Product2;                /* '<S171>/Product2' */
  real_T s172_Product;                 /* '<S172>/Product' */
  real_T s173_Switch1;                 /* '<S173>/Switch1' */
  real_T s163_Switch;                  /* '<S163>/Switch' */
  real_T s159_Sum;                     /* '<S159>/Sum' */
  real_T s193_MinMax1;                 /* '<S193>/MinMax1' */
  real_T s183_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S183>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s209_Sum2;                    /* '<S209>/Sum2' */
  real_T s209_Product2;                /* '<S209>/Product2' */
  real_T s210_Product;                 /* '<S210>/Product' */
  real_T s211_Switch1;                 /* '<S211>/Switch1' */
  real_T s130_MinGovAirPID;            /* '<S130>/Product1' */
  real_T s204_Sum1;                    /* '<S204>/Sum1' */
  real_T s204_Product;                 /* '<S204>/Product' */
  real_T s205_Product;                 /* '<S205>/Product' */
  real_T s130_IdleSpk;                 /* '<S130>/Product' */
  real_T s201_Switch;                  /* '<S201>/Switch' */
  real_T s186_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S186>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s216_Switch;                  /* '<S216>/Switch' */
  real_T s223_Sum2;                    /* '<S223>/Sum2' */
  real_T s223_Product2;                /* '<S223>/Product2' */
  real_T s225_Switch1;                 /* '<S225>/Switch1' */
  real_T s224_Product;                 /* '<S224>/Product' */
  real_T s221_Switch3;                 /* '<S221>/Switch3' */
  real_T s221_Switch1;                 /* '<S221>/Switch1' */
  real_T s221_Switch4;                 /* '<S221>/Switch4' */
  real_T s216_Multiplyby10ifnotyetenabled;/* '<S216>/Multiply by 1.0 if not yet enabled' */
  real_T s143_Add;                     /* '<S143>/Add' */
  real_T s141_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S141>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s138_PerCylinderMassFlowRate; /* '<S138>/Per-Cylinder Mass Flow Rate' */
  real_T s138_ApplyMultipliersforO2KnockControlandEnrichment1;/* '<S138>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s158_MinMax1;                 /* '<S158>/MinMax1' */
  real_T s149_Sum1;                    /* '<S149>/Sum1' */
  real_T s144_Sum;                     /* '<S144>/Sum' */
  real_T s144_Product1;                /* '<S144>/Product1' */
  real_T s147_motohawk_interpolation_1d;/* '<S147>/motohawk_interpolation_1d' */
  real_T s126_DesEquivRatio;           /* '<S126>/Product1' */
  real_T s121_cranking;                /* '<S113>/Remy Control' */
  real_T s121_idle;                    /* '<S113>/Remy Control' */
  real_T s121_APPRamp;                 /* '<S113>/Remy Control' */
  real_T s121_torqueRamp;              /* '<S113>/Remy Control' */
  real_T s121_remyEn;                  /* '<S113>/Remy Control' */
  real_T s121_maxRPM;                  /* '<S113>/Remy Control' */
  real_T s121_motorTQ;                 /* '<S113>/Remy Control' */
  real_T s121_generatingTQ;            /* '<S113>/Remy Control' */
  real_T s108_Sum;                     /* '<S108>/Sum' */
  real_T s15_Sum;                      /* '<S15>/Sum' */
  real_T s93_UnitDelay2;               /* '<S93>/Unit Delay2' */
  real_T s103_Switch1;                 /* '<S103>/Switch1' */
  real_T s56_Switch;                   /* '<S56>/Switch' */
  real_T s23_MultiportSwitch;          /* '<S23>/Multiport Switch' */
  real_T s35_Product;                  /* '<S35>/Product' */
  real_T s34_Switch2;                  /* '<S34>/Switch2' */
  real_T s39_Product;                  /* '<S39>/Product' */
  real_T s31_Sum2;                     /* '<S31>/Sum2' */
  real_T s40_Product;                  /* '<S40>/Product' */
  real_T s31_Product2;                 /* '<S31>/Product2' */
  real_T s41_Switch1;                  /* '<S41>/Switch1' */
  real_T s44_MinMax1;                  /* '<S44>/MinMax1' */
  real_T s12_Switch;                   /* '<S12>/Switch' */
  real_T s45_In1;                      /* '<S45>/In1' */
  real_T s19_TestTime;                 /* '<S12>/ETC Test  Manager' */
  real_T s794_Switch;                  /* '<S794>/Switch' */
  uint32_T s360_ReadCANMessage_o1;     /* '<S360>/Read CAN Message' */
  uint32_T s360_ReadCANMessage1_o1;    /* '<S360>/Read CAN Message1' */
  uint32_T s360_ReadCANMessage2_o1;    /* '<S360>/Read CAN Message2' */
  uint32_T s360_ReadCANMessage3_o1;    /* '<S360>/Read CAN Message3' */
  uint32_T s504_Sum;                   /* '<S504>/Sum' */
  int16_T s657_motohawk_pwm1;          /* '<S657>/motohawk_pwm1' */
  uint16_T s356_motohawk_ain1;         /* '<S356>/motohawk_ain1' */
  uint16_T s356_motohawk_ain14;        /* '<S356>/motohawk_ain14' */
  uint16_T s357_motohawk_ain3;         /* '<S357>/motohawk_ain3' */
  uint16_T s356_motohawk_ain_read1;    /* '<S356>/motohawk_ain_read1' */
  uint16_T s356_motohawk_ain2;         /* '<S356>/motohawk_ain2' */
  uint16_T s356_motohawk_ain4;         /* '<S356>/motohawk_ain4' */
  uint16_T s356_motohawk_ain3;         /* '<S356>/motohawk_ain3' */
  uint16_T s655_SparkSequence_o3[8];   /* '<S655>/Spark Sequence' */
  uint16_T s655_SparkSequence_o4[8];   /* '<S655>/Spark Sequence' */
  uint16_T s582_motohawk_ain;          /* '<S582>/motohawk_ain' */
  uint16_T s582_motohawk_ain1;         /* '<S582>/motohawk_ain1' */
  index_T s312_motohawk_prelookup;     /* '<S312>/motohawk_prelookup' */
  index_T s311_motohawk_prelookup1;    /* '<S311>/motohawk_prelookup1' */
  index_T s311_Indexes;                /* '<S311>/motohawk_prelookup5' */
  index_T s309_motohawk_prelookup;     /* '<S309>/motohawk_prelookup' */
  index_T s310_motohawk_prelookup;     /* '<S310>/motohawk_prelookup' */
  index_T s350_motohawk_prelookup1;    /* '<S350>/motohawk_prelookup1' */
  index_T s350_motohawk_prelookup4;    /* '<S350>/motohawk_prelookup4' */
  index_T s273_RPMAccel17Idx;          /* '<S273>/motohawk_prelookup' */
  int8_T s14_Merge1[32];               /* '<S14>/Merge1' */
  int8_T s731_DataTypeConversion;      /* '<S731>/Data Type Conversion' */
  int8_T s160_DataTypeConversion;      /* '<S160>/Data Type Conversion' */
  int8_T s160_DataTypeConversion1;     /* '<S160>/Data Type Conversion1' */
  int8_T s93_MultiportSwitch[8];       /* '<S93>/Multiport Switch' */
  int8_T s103_CutArray[8];             /* '<S103>/CutArray' */
  int8_T s19_DC_Override;              /* '<S12>/ETC Test  Manager' */
  int8_T s19_SetpointMode;             /* '<S12>/ETC Test  Manager' */
  uint8_T s319_UnitDelay;              /* '<S319>/Unit Delay' */
  uint8_T s269_motohawk_data_read1;    /* '<S269>/motohawk_data_read1' */
  uint8_T s658_InjectorSequence_o1[8]; /* '<S658>/Injector Sequence' */
  uint8_T s14_DataTypeConversion5;     /* '<S14>/Data Type Conversion5' */
  uint8_T s355_motohawk_encoder_fault; /* '<S355>/motohawk_encoder_fault' */
  uint8_T s355_motohawk_encoder_state; /* '<S355>/motohawk_encoder_state' */
  uint8_T s733_Switch1;                /* '<S733>/Switch1' */
  uint8_T s339_Switch;                 /* '<S339>/Switch' */
  uint8_T s338_State;                  /* '<S319>/Engine State Machine' */
  uint8_T s195_IdleState;              /* '<S180>/IdleStateMachine' */
  uint8_T s93_UnitDelay1;              /* '<S93>/Unit Delay1' */
  uint8_T s103_Switch;                 /* '<S103>/Switch' */
  boolean_T s319_Stall;                /* '<S319>/Relational Operator1' */
  boolean_T s319_Crank;                /* '<S319>/Relational Operator4' */
  boolean_T s319_Run;                  /* '<S319>/Logical Operator1' */
  boolean_T s663_Compare;              /* '<S663>/Compare' */
  boolean_T s664_Compare;              /* '<S664>/Compare' */
  boolean_T s665_Compare;              /* '<S665>/Compare' */
  boolean_T s289_RelationalOperator4;  /* '<S289>/Relational Operator4' */
  boolean_T s290_RelationalOperator4;  /* '<S290>/Relational Operator4' */
  boolean_T s286_LogicalOperator;      /* '<S286>/Logical Operator' */
  boolean_T s14_LogicalOperator2[8];   /* '<S14>/Logical Operator2' */
  boolean_T s114_FUELP;                /* '<S114>/Merge7' */
  boolean_T s354_EStop;                /* '<S354>/motohawk_data_read' */
  boolean_T s742_LogicalOperator;      /* '<S742>/Logical Operator' */
  boolean_T s756_Merge[8];             /* '<S756>/Merge' */
  boolean_T s114_OILP;                 /* '<S114>/Merge9' */
  boolean_T s770_LogicalOperator;      /* '<S770>/Logical Operator' */
  boolean_T s114_O2Heater;             /* '<S114>/Merge11' */
  boolean_T s774_LogicalOperator;      /* '<S774>/Logical Operator' */
  boolean_T s655_LogicalOperator1[8];  /* '<S655>/Logical Operator1' */
  boolean_T s731_RelationalOperator1;  /* '<S731>/Relational Operator1' */
  boolean_T s314_RelationalOperator3;  /* '<S314>/Relational Operator3' */
  boolean_T s274_Enable;               /* '<S269>/Baro Stall State Delay' */
  boolean_T s160_MultiportSwitch;      /* '<S160>/Multiport Switch' */
  boolean_T s194_RelationalOperator;   /* '<S194>/Relational Operator' */
  boolean_T s180_RelationalOperator;   /* '<S180>/Relational Operator' */
  boolean_T s180_RelationalOperator3;  /* '<S180>/Relational Operator3' */
  boolean_T s180_RelationalOperator1;  /* '<S180>/Relational Operator1' */
  boolean_T s180_LogicalOperator;      /* '<S180>/Logical Operator' */
  boolean_T s180_RelationalOperator5;  /* '<S180>/Relational Operator5' */
  boolean_T s196_RelOp;                /* '<S196>/RelOp' */
  boolean_T s130_HitCrossing1;         /* '<S130>/Hit  Crossing1' */
  boolean_T s130_LogicalOperator;      /* '<S130>/Logical Operator' */
  boolean_T s181_RelationalOperator1;  /* '<S181>/Relational Operator1' */
  boolean_T s177_LogicalOperator1;     /* '<S177>/Logical Operator1' */
  boolean_T s214_LogicalOperator;      /* '<S214>/Logical Operator' */
  boolean_T s214_LogicalOperator3;     /* '<S214>/Logical Operator3' */
  boolean_T s214_RelationalOperator5;  /* '<S214>/Relational Operator5' */
  boolean_T s214_LogicalOperator2;     /* '<S214>/Logical Operator2' */
  boolean_T s140_LogicalOperator2;     /* '<S140>/Logical Operator2' */
  boolean_T s156_LogicalOperator;      /* '<S156>/Logical Operator' */
  boolean_T s16_OnlyEnableSparkwhenEnergyisAboveZero;/* '<S16>/Only Enable Spark when Energy is Above Zero' */
  boolean_T s92_DataTypeConversion1[8];/* '<S92>/Data Type Conversion1' */
  boolean_T s91_DataTypeConversion[8]; /* '<S91>/Data Type Conversion' */
  boolean_T s24_LogicalOperator3;      /* '<S24>/Logical Operator3' */
  boolean_T s12_RelationalOperator5;   /* '<S12>/Relational Operator5' */
  boolean_T s12_RelationalOperator2;   /* '<S12>/Relational Operator2' */
  boolean_T s12_RelationalOperator3;   /* '<S12>/Relational Operator3' */
  boolean_T s20_LogicalOperator;       /* '<S20>/Logical Operator' */
  boolean_T s28_RelationalOperator;    /* '<S28>/Relational Operator' */
  boolean_T s19_TestComplete;          /* '<S12>/ETC Test  Manager' */
  boolean_T s778_RelationalOperator;   /* '<S778>/Relational Operator' */
  boolean_T s778_motohawk_data_read;   /* '<S778>/motohawk_data_read' */
  boolean_T s782_MPRDState;            /* '<S778>/ECUP Latch' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02
    s297_MultiplyandDivideavoidingdivdebyzero1;/* '<S297>/Multiply and Divide, avoiding divde by zero1' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02
    s145_MultiplyandDivideavoidingdivdebyzero;/* '<S145>/Multiply and Divide, avoiding divde by zero' */
} BlockIO_BaseEngineController_A02;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s512_UnitDelay1_DSTATE;       /* '<S512>/Unit Delay1' */
  real_T s562_UnitDelay_DSTATE;        /* '<S562>/Unit Delay' */
  real_T s505_UnitDelay_DSTATE;        /* '<S505>/Unit Delay' */
  real_T s514_UnitDelay1_DSTATE;       /* '<S514>/Unit Delay1' */
  real_T s578_UnitDelay_DSTATE;        /* '<S578>/Unit Delay' */
  real_T s626_UnitDelay_DSTATE;        /* '<S626>/Unit Delay' */
  real_T s619_UnitDelay1_DSTATE;       /* '<S619>/Unit Delay1' */
  real_T s643_UnitDelay_DSTATE;        /* '<S643>/Unit Delay' */
  real_T s636_UnitDelay1_DSTATE;       /* '<S636>/Unit Delay1' */
  real_T s321_UnitDelay_DSTATE;        /* '<S321>/Unit Delay' */
  real_T s581_UnitDelay_DSTATE;        /* '<S581>/Unit Delay' */
  real_T s589_UnitDelay_DSTATE;        /* '<S589>/Unit Delay' */
  real_T s510_UnitDelay1_DSTATE;       /* '<S510>/Unit Delay1' */
  real_T s277_UnitDelay_DSTATE;        /* '<S277>/Unit Delay' */
  real_T s509_UnitDelay1_DSTATE;       /* '<S509>/Unit Delay1' */
  real_T s544_UnitDelay_DSTATE;        /* '<S544>/Unit Delay' */
  real_T s484_UnitDelay_DSTATE;        /* '<S484>/Unit Delay' */
  real_T s492_UnitDelay_DSTATE;        /* '<S492>/Unit Delay' */
  real_T s289_UnitDelay2_DSTATE;       /* '<S289>/Unit Delay2' */
  real_T s292_UnitDelay_DSTATE;        /* '<S292>/Unit Delay' */
  real_T s290_UnitDelay2_DSTATE;       /* '<S290>/Unit Delay2' */
  real_T s295_UnitDelay_DSTATE;        /* '<S295>/Unit Delay' */
  real_T s288_UnitDelay_DSTATE;        /* '<S288>/Unit Delay' */
  real_T s335_UnitDelay_DSTATE;        /* '<S335>/Unit Delay' */
  real_T s337_UnitDelay_DSTATE;        /* '<S337>/Unit Delay' */
  real_T s507_UnitDelay1_DSTATE;       /* '<S507>/Unit Delay1' */
  real_T s528_UnitDelay_DSTATE;        /* '<S528>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s66_UnitDelay_DSTATE;         /* '<S66>/Unit Delay' */
  real_T s64_UnitDelay_DSTATE;         /* '<S64>/Unit Delay' */
  real_T s63_UnitDelay_DSTATE;         /* '<S63>/Unit Delay' */
  real_T s62_UnitDelay_DSTATE;         /* '<S62>/Unit Delay' */
  real_T s61_UnitDelay_DSTATE;         /* '<S61>/Unit Delay' */
  real_T s60_UnitDelay_DSTATE;         /* '<S60>/Unit Delay' */
  real_T s59_UnitDelay_DSTATE;         /* '<S59>/Unit Delay' */
  real_T s65_UnitDelay_DSTATE[8];      /* '<S65>/Unit Delay' */
  real_T s301_UnitDelay_DSTATE;        /* '<S301>/Unit Delay' */
  real_T s321_UnitDelay1_DSTATE;       /* '<S321>/Unit Delay1' */
  real_T s508_UnitDelay1_DSTATE;       /* '<S508>/Unit Delay1' */
  real_T s536_UnitDelay_DSTATE;        /* '<S536>/Unit Delay' */
  real_T s552_UnitDelay_DSTATE;        /* '<S552>/Unit Delay' */
  real_T s506_UnitDelay1_DSTATE;       /* '<S506>/Unit Delay1' */
  real_T s520_UnitDelay_DSTATE;        /* '<S520>/Unit Delay' */
  real_T s513_UnitDelay1_DSTATE;       /* '<S513>/Unit Delay1' */
  real_T s570_UnitDelay_DSTATE;        /* '<S570>/Unit Delay' */
  real_T s289_UnitDelay1_DSTATE;       /* '<S289>/Unit Delay1' */
  real_T s289_UnitDelay3_DSTATE;       /* '<S289>/Unit Delay3' */
  real_T s289_UnitDelay4_DSTATE;       /* '<S289>/Unit Delay4' */
  real_T s290_UnitDelay1_DSTATE;       /* '<S290>/Unit Delay1' */
  real_T s290_UnitDelay3_DSTATE;       /* '<S290>/Unit Delay3' */
  real_T s290_UnitDelay4_DSTATE;       /* '<S290>/Unit Delay4' */
  real_T s366_UnitDelay_DSTATE;        /* '<S366>/Unit Delay' */
  real_T s623_UnitDelay1_DSTATE;       /* '<S623>/Unit Delay1' */
  real_T s623_UnitDelay_DSTATE;        /* '<S623>/Unit Delay' */
  real_T s623_UnitDelay3_DSTATE;       /* '<S623>/Unit Delay3' */
  real_T s623_UnitDelay4_DSTATE;       /* '<S623>/Unit Delay4' */
  real_T s640_UnitDelay1_DSTATE;       /* '<S640>/Unit Delay1' */
  real_T s640_UnitDelay_DSTATE;        /* '<S640>/Unit Delay' */
  real_T s640_UnitDelay3_DSTATE;       /* '<S640>/Unit Delay3' */
  real_T s640_UnitDelay4_DSTATE;       /* '<S640>/Unit Delay4' */
  real_T s728_UnitDelay_DSTATE;        /* '<S728>/Unit Delay' */
  real_T s729_UnitDelay_DSTATE;        /* '<S729>/Unit Delay' */
  real_T s731_CrankCounter_DSTATE;     /* '<S731>/CrankCounter' */
  real_T s592_UnitDelay_DSTATE;        /* '<S592>/Unit Delay' */
  real_T s600_UnitDelay_DSTATE;        /* '<S600>/Unit Delay' */
  real_T s593_UnitDelay_DSTATE;        /* '<S593>/Unit Delay' */
  real_T s609_UnitDelay_DSTATE;        /* '<S609>/Unit Delay' */
  real_T s333_UnitDelay1_DSTATE;       /* '<S333>/Unit Delay1' */
  real_T s332_UnitDelay1_DSTATE;       /* '<S332>/Unit Delay1' */
  real_T s314_UnitDelay2_DSTATE;       /* '<S314>/Unit Delay2' */
  real_T s327_UnitDelay_DSTATE;        /* '<S327>/Unit Delay' */
  real_T s330_UnitDelay_DSTATE;        /* '<S330>/Unit Delay' */
  real_T s314_UnitDelay1_DSTATE;       /* '<S314>/Unit Delay1' */
  real_T s314_UnitDelay3_DSTATE;       /* '<S314>/Unit Delay3' */
  real_T s314_UnitDelay4_DSTATE;       /* '<S314>/Unit Delay4' */
  real_T s307_UnitDelay_DSTATE;        /* '<S307>/Unit Delay' */
  real_T s278_UnitDelay1_DSTATE;       /* '<S278>/Unit Delay1' */
  real_T s241_UnitDelay_DSTATE;        /* '<S241>/Unit Delay' */
  real_T s242_UnitDelay_DSTATE;        /* '<S242>/Unit Delay' */
  real_T s233_UnitDelay_DSTATE;        /* '<S233>/Unit Delay' */
  real_T s161_UnitDelay_DSTATE;        /* '<S161>/Unit Delay' */
  real_T s172_UnitDelay_DSTATE;        /* '<S172>/Unit Delay' */
  real_T s173_UnitDelay_DSTATE;        /* '<S173>/Unit Delay' */
  real_T s198_UnitDelay_DSTATE;        /* '<S198>/Unit Delay' */
  real_T s200_UnitDelay_DSTATE;        /* '<S200>/Unit Delay' */
  real_T s130_UnitDelay3_DSTATE;       /* '<S130>/Unit Delay3' */
  real_T s130_UnitDelay1_DSTATE;       /* '<S130>/Unit Delay1' */
  real_T s179_state_DSTATE;            /* '<S179>/state' */
  real_T s130_UnitDelay2_DSTATE;       /* '<S130>/Unit Delay2' */
  real_T s183_UnitDelay_DSTATE;        /* '<S183>/Unit Delay' */
  real_T s210_UnitDelay_DSTATE;        /* '<S210>/Unit Delay' */
  real_T s211_UnitDelay_DSTATE;        /* '<S211>/Unit Delay' */
  real_T s205_UnitDelay_DSTATE;        /* '<S205>/Unit Delay' */
  real_T s186_UnitDelay_DSTATE;        /* '<S186>/Unit Delay' */
  real_T s225_UnitDelay_DSTATE;        /* '<S225>/Unit Delay' */
  real_T s224_UnitDelay_DSTATE;        /* '<S224>/Unit Delay' */
  real_T s221_UnitDelay1_DSTATE;       /* '<S221>/Unit Delay1' */
  real_T s221_UnitDelay_DSTATE;        /* '<S221>/Unit Delay' */
  real_T s221_UnitDelay2_DSTATE;       /* '<S221>/Unit Delay2' */
  real_T s149_UnitDelay_DSTATE;        /* '<S149>/Unit Delay' */
  real_T s108_UnitDelay_DSTATE;        /* '<S108>/Unit Delay' */
  real_T s93_UnitDelay2_DSTATE;        /* '<S93>/Unit Delay2' */
  real_T s12_UnitDelay_DSTATE;         /* '<S12>/Unit Delay' */
  real_T s48_UnitDelay_DSTATE;         /* '<S48>/Unit Delay' */
  real_T s39_UnitDelay_DSTATE;         /* '<S39>/Unit Delay' */
  real_T s35_UnitDelay_DSTATE;         /* '<S35>/Unit Delay' */
  real_T s37_UnitDelay_DSTATE;         /* '<S37>/Unit Delay' */
  real_T s40_UnitDelay_DSTATE;         /* '<S40>/Unit Delay' */
  real_T s41_UnitDelay_DSTATE;         /* '<S41>/Unit Delay' */
  real_T s784_UnitDelay_DSTATE;        /* '<S784>/Unit Delay' */
  real_T s784_UnitDelay1_DSTATE;       /* '<S784>/Unit Delay1' */
  real_T s274_TOld;                    /* '<S269>/Baro Stall State Delay' */
  real_T s121_count;                   /* '<S113>/Remy Control' */
  real_T s19_TimerOld;                 /* '<S12>/ETC Test  Manager' */
  uint32_T s351_UnitDelay_DSTATE;      /* '<S351>/Unit Delay' */
  uint32_T s504_UnitDelay_DSTATE;      /* '<S504>/Unit Delay' */
  uint32_T s557_motohawk_delta_time_DWORK1;/* '<S557>/motohawk_delta_time' */
  uint32_T s498_motohawk_delta_time_DWORK1;/* '<S498>/motohawk_delta_time' */
  uint32_T s123_motohawk_delta_time_DWORK1;/* '<S123>/motohawk_delta_time' */
  uint32_T s573_motohawk_delta_time_DWORK1;/* '<S573>/motohawk_delta_time' */
  uint32_T s618_motohawk_delta_time_DWORK1;/* '<S618>/motohawk_delta_time' */
  uint32_T s635_motohawk_delta_time_DWORK1;/* '<S635>/motohawk_delta_time' */
  uint32_T s583_motohawk_delta_time_DWORK1;/* '<S583>/motohawk_delta_time' */
  uint32_T s343_motohawk_delta_time_DWORK1;/* '<S343>/motohawk_delta_time' */
  uint32_T s269_motohawk_delta_time_DWORK1;/* '<S269>/motohawk_delta_time' */
  uint32_T s539_motohawk_delta_time_DWORK1;/* '<S539>/motohawk_delta_time' */
  uint32_T s486_motohawk_delta_time_DWORK1;/* '<S486>/motohawk_delta_time' */
  uint32_T s288_motohawk_delta_time1_DWORK1;/* '<S288>/motohawk_delta_time1' */
  uint32_T s335_motohawk_delta_time_DWORK1;/* '<S335>/motohawk_delta_time' */
  uint32_T s523_motohawk_delta_time_DWORK1;/* '<S523>/motohawk_delta_time' */
  uint32_T s746_motohawk_delta_time_DWORK1;/* '<S746>/motohawk_delta_time' */
  uint32_T s345_motohawk_delta_time_DWORK1;/* '<S345>/motohawk_delta_time' */
  uint32_T s122_motohawk_delta_time_DWORK1;/* '<S122>/motohawk_delta_time' */
  uint32_T s341_motohawk_delta_time_DWORK1;/* '<S341>/motohawk_delta_time' */
  uint32_T s531_motohawk_delta_time_DWORK1;/* '<S531>/motohawk_delta_time' */
  uint32_T s547_motohawk_delta_time_DWORK1;/* '<S547>/motohawk_delta_time' */
  uint32_T s515_motohawk_delta_time_DWORK1;/* '<S515>/motohawk_delta_time' */
  uint32_T s565_motohawk_delta_time_DWORK1;/* '<S565>/motohawk_delta_time' */
  uint32_T s301_motohawk_delta_time_DWORK1;/* '<S301>/motohawk_delta_time' */
  uint32_T s594_motohawk_delta_time_DWORK1;/* '<S594>/motohawk_delta_time' */
  uint32_T s603_motohawk_delta_time_DWORK1;/* '<S603>/motohawk_delta_time' */
  uint32_T s258_motohawk_delta_time_DWORK1;/* '<S258>/motohawk_delta_time' */
  uint32_T s259_motohawk_delta_time_DWORK1;/* '<S259>/motohawk_delta_time' */
  uint32_T s260_motohawk_delta_time_DWORK1;/* '<S260>/motohawk_delta_time' */
  uint32_T s268_motohawk_delta_time_DWORK1;/* '<S268>/motohawk_delta_time' */
  uint32_T s267_motohawk_delta_time_DWORK1;/* '<S267>/motohawk_delta_time' */
  uint32_T s251_motohawk_delta_time_DWORK1;/* '<S251>/motohawk_delta_time' */
  uint32_T s255_motohawk_delta_time_DWORK1;/* '<S255>/motohawk_delta_time' */
  uint32_T s330_motohawk_delta_time_DWORK1;/* '<S330>/motohawk_delta_time' */
  uint32_T s314_motohawk_delta_time_DWORK1;/* '<S314>/motohawk_delta_time' */
  uint32_T s307_motohawk_delta_time1_DWORK1;/* '<S307>/motohawk_delta_time1' */
  uint32_T s161_motohawk_delta_time_DWORK1;/* '<S161>/motohawk_delta_time' */
  uint32_T s173_motohawk_delta_time_DWORK1;/* '<S173>/motohawk_delta_time' */
  uint32_T s179_motohawk_delta_time_DWORK1;/* '<S179>/motohawk_delta_time' */
  uint32_T s183_motohawk_delta_time_DWORK1;/* '<S183>/motohawk_delta_time' */
  uint32_T s211_motohawk_delta_time_DWORK1;/* '<S211>/motohawk_delta_time' */
  uint32_T s186_motohawk_delta_time_DWORK1;/* '<S186>/motohawk_delta_time' */
  uint32_T s225_motohawk_delta_time_DWORK1;/* '<S225>/motohawk_delta_time' */
  uint32_T s229_motohawk_delta_time_DWORK1;/* '<S229>/motohawk_delta_time' */
  uint32_T s231_motohawk_delta_time_DWORK1;/* '<S231>/motohawk_delta_time' */
  uint32_T s230_motohawk_delta_time_DWORK1;/* '<S230>/motohawk_delta_time' */
  uint32_T s148_motohawk_delta_time_DWORK1;/* '<S148>/motohawk_delta_time' */
  uint32_T s56_motohawk_delta_time_DWORK1;/* '<S56>/motohawk_delta_time' */
  uint32_T s48_motohawk_delta_time_DWORK1;/* '<S48>/motohawk_delta_time' */
  uint32_T s36_motohawk_delta_time_DWORK1;/* '<S36>/motohawk_delta_time' */
  uint32_T s41_motohawk_delta_time_DWORK1;/* '<S41>/motohawk_delta_time' */
  uint32_T s794_motohawk_delta_time_DWORK1;/* '<S794>/motohawk_delta_time' */
  int_T s130_HitCrossing1_MODE;        /* '<S130>/Hit  Crossing1' */
  uint16_T s658_InjectorSequence_DWORK2;/* '<S658>/Injector Sequence' */
  int8_T s316_UnitDelay_DSTATE;        /* '<S316>/Unit Delay' */
  int8_T s315_UnitDelay_DSTATE;        /* '<S315>/Unit Delay' */
  int8_T s275_UnitDelay_DSTATE;        /* '<S275>/Unit Delay' */
  uint8_T s319_UnitDelay_DSTATE;       /* '<S319>/Unit Delay' */
  uint8_T s339_CrankCounter_DSTATE;    /* '<S339>/CrankCounter' */
  uint8_T s93_UnitDelay1_DSTATE;       /* '<S93>/Unit Delay1' */
  boolean_T s264_UnitDelay_DSTATE;     /* '<S264>/Unit Delay' */
  boolean_T s265_UnitDelay_DSTATE;     /* '<S265>/Unit Delay' */
  boolean_T s266_UnitDelay_DSTATE;     /* '<S266>/Unit Delay' */
  boolean_T s236_InitialConditionisTrue_DSTATE;/* '<S236>/Initial Condition is True' */
  boolean_T s129_UnitDelay_DSTATE;     /* '<S129>/Unit Delay' */
  boolean_T s176_UnitDelay_DSTATE;     /* '<S176>/Unit Delay' */
  boolean_T s228_UnitDelay_DSTATE;     /* '<S228>/Unit Delay' */
  boolean_T s38_UnitDelay_DSTATE;      /* '<S38>/Unit Delay' */
  boolean_T s783_UnitDelay8_DSTATE;    /* '<S783>/Unit Delay8' */
  boolean_T s783_UnitDelay6_DSTATE;    /* '<S783>/Unit Delay6' */
  boolean_T s783_UnitDelay7_DSTATE;    /* '<S783>/Unit Delay7' */
  boolean_T s779_UnitDelay_DSTATE;     /* '<S779>/Unit Delay' */
  boolean_T s785_UnitDelay2_DSTATE;    /* '<S785>/Unit Delay2' */
  boolean_T s778_UnitDelay5_DSTATE;    /* '<S778>/Unit Delay5' */
  boolean_T s785_UnitDelay_DSTATE;     /* '<S785>/Unit Delay' */
  boolean_T s785_UnitDelay1_DSTATE;    /* '<S785>/Unit Delay1' */
  boolean_T s778_UnitDelay3_DSTATE;    /* '<S778>/Unit Delay3' */
  boolean_T s778_UnitDelay4_DSTATE;    /* '<S778>/Unit Delay4' */
  uint8_T s357_motohawk_trigger_DWORK1;/* '<S357>/motohawk_trigger' */
  uint8_T s319_motohawk_trigger_DWORK1;/* '<S319>/motohawk_trigger' */
  uint8_T s511_motohawk_trigger5_DWORK1;/* '<S511>/motohawk_trigger5' */
  uint8_T s6_motohawk_trigger1_DWORK1; /* '<S6>/motohawk_trigger1' */
  uint8_T s6_motohawk_trigger_DWORK1;  /* '<S6>/motohawk_trigger' */
  uint8_T s5_motohawk_trigger_DWORK1;  /* '<S5>/motohawk_trigger' */
  uint8_T s731_motohawk_trigger1_DWORK1;/* '<S731>/motohawk_trigger1' */
  uint8_T s338_is_c2_BaseEngineController_A02;/* '<S319>/Engine State Machine' */
  uint8_T s274_is_c19_BaseEngineController_A02;/* '<S269>/Baro Stall State Delay' */
  uint8_T s115_motohawk_trigger1_DWORK1;/* '<S115>/motohawk_trigger1' */
  uint8_T s195_is_active_c12_BaseEngineController_A02;/* '<S180>/IdleStateMachine' */
  uint8_T s195_is_c12_BaseEngineController_A02;/* '<S180>/IdleStateMachine' */
  uint8_T s121_is_active_c5_BaseEngineController_A02;/* '<S113>/Remy Control' */
  uint8_T s121_is_c5_BaseEngineController_A02;/* '<S113>/Remy Control' */
  uint8_T s93_motohawk_trigger_DWORK1; /* '<S93>/motohawk_trigger' */
  uint8_T s19_is_c9_BaseEngineController_A02;/* '<S12>/ETC Test  Manager' */
  uint8_T s782_is_c8_BaseEngineController_A02;/* '<S778>/ECUP Latch' */
  boolean_T s658_InjectorSequence_DWORK1[8];/* '<S658>/Injector Sequence' */
  boolean_T s216_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S216>/Multiply by 1.0 if not yet enabled' */
  boolean_T s798_Memory_PreviousInput; /* '<S798>/Memory' */
  boolean_T s7_Stall_MODE;             /* '<S7>/Stall' */
  boolean_T s7_Crank_MODE;             /* '<S7>/Crank' */
  boolean_T s269_CaptureSignalAtStartup_MODE;/* '<S269>/Capture Signal At Startup' */
  boolean_T s272_CaptureECTAtStartup_MODE;/* '<S272>/Capture ECT At Startup' */
  boolean_T s7_Run_MODE;               /* '<S7>/Run' */
  boolean_T s14_PassThrough1_MODE;     /* '<S14>/PassThrough1' */
  boolean_T s14_PassThrough3_MODE;     /* '<S14>/PassThrough3' */
  boolean_T s14_SequenceCutMachine_MODE;/* '<S14>/SequenceCutMachine' */
  boolean_T s14_PassThrough4_MODE;     /* '<S14>/PassThrough4' */
  boolean_T s6_ElectronicThrottleController_MODE;/* '<S6>/Electronic Throttle Controller' */
  boolean_T s14_PassThrough5_MODE;     /* '<S14>/PassThrough5' */
  boolean_T s272_CaptureIATAtStartup_MODE;/* '<S272>/Capture IAT At Startup' */
  boolean_T s316_CollectAverage_MODE;  /* '<S316>/Collect Average' */
  boolean_T s315_CollectAverage_MODE;  /* '<S315>/Collect Average' */
  boolean_T s275_CollectAverage_MODE;  /* '<S275>/Collect Average' */
  boolean_T s139_DeltaTPSTransientFueling_MODE;/* '<S139>/Delta TPS Transient Fueling' */
  boolean_T s144_ECTTransientFueling_MODE;/* '<S144>/ECT Transient Fueling' */
  boolean_T s23_PassThrough_MODE;      /* '<S23>/PassThrough' */
} D_Work_BaseEngineController_A02;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S130>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S24>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S12>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S785>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S785>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S785>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S785>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_e;/* '<S783>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j;/* '<S783>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_j;/* '<S783>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c;/* '<S783>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S781>/Clear' */
  ZCSigState Clear_Trig_ZCE_l;         /* '<S780>/Clear' */
} PrevZCSigStates_BaseEngineController_A02;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s658_Gain4;             /* '<S658>/Gain4' */
  const real_T s117_motohawk_replicate2;/* '<S117>/motohawk_replicate2' */
  const real_T s117_motohawk_replicate[8];/* '<S117>/motohawk_replicate' */
  const uint32_T s658_DataTypeConversion5;/* '<S658>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_A02;

/* Constant parameters (auto storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S798>/Logic'
   */
  boolean_T Logic_table[16];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S264>/Combinatorial  Logic'
   *   '<S265>/Combinatorial  Logic'
   *   '<S266>/Combinatorial  Logic'
   *   '<S38>/Combinatorial  Logic'
   *   '<S228>/Combinatorial  Logic'
   */
  boolean_T pooled624[8];
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
 * '<S12>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller
 * '<S13>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization
 * '<S14>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern
 * '<S15>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Advance to Start Angle
 * '<S16>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization
 * '<S17>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Adapt Request
 * '<S18>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault
 * '<S19>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager
 * '<S20>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETCStallShutDown
 * '<S21>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)
 * '<S22>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Reset TasksComplete To True
 * '<S23>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager
 * '<S24>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager
 * '<S25>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Adapt Request/ShutDownAdaptMode
 * '<S26>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault/ShutDownAdaptMode1
 * '<S27>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Cals_and_Probes_Page
 * '<S28>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch
 * '<S29>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/IGain
 * '<S30>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PGain
 * '<S31>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms
 * '<S32>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)
 * '<S33>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative
 * '<S34>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis
 * '<S35>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/Derivitive2
 * '<S36>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)
 * '<S37>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S38>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis/Hysteresis
 * '<S39>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive1
 * '<S40>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive3
 * '<S41>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator
 * '<S42>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Model Info
 * '<S43>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator/Saturation
 * '<S44>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)/Saturation
 * '<S45>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/PassThrough
 * '<S46>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/ShutDownAdaptMode1
 * '<S47>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning
 * '<S48>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter
 * '<S49>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/Time Since Enabled (With Input)1
 * '<S50>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs
 * '<S51>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/NewValue
 * '<S52>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/OldValue
 * '<S53>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter/Saturation
 * '<S54>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Reset TasksComplete To False
 * '<S55>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Stall
 * '<S56>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Time Since Enabled (With Input)1
 * '<S57>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/DeltaPressureIndex
 * '<S58>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets
 * '<S59>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel
 * '<S60>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1
 * '<S61>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2
 * '<S62>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3
 * '<S63>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4
 * '<S64>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5
 * '<S65>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6
 * '<S66>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7
 * '<S67>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8
 * '<S68>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/NewValue
 * '<S69>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/OldValue
 * '<S70>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/NewValue
 * '<S71>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/OldValue
 * '<S72>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/NewValue
 * '<S73>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/OldValue
 * '<S74>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/NewValue
 * '<S75>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/OldValue
 * '<S76>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/NewValue
 * '<S77>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/OldValue
 * '<S78>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/NewValue
 * '<S79>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/OldValue
 * '<S80>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/NewValue
 * '<S81>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/OldValue
 * '<S82>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/NewValue
 * '<S83>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/OldValue
 * '<S84>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/NewValue
 * '<S85>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/OldValue
 * '<S86>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern
 * '<S87>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern
 * '<S88>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough1
 * '<S89>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough2
 * '<S90>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough3
 * '<S91>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough4
 * '<S92>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough5
 * '<S93>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine
 * '<S94>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern
 * '<S95>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle1CutPatter
 * '<S96>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle2CutPatter
 * '<S97>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle3CutPatter
 * '<S98>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle4CutPatter
 * '<S99>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle1CutPatter
 * '<S100>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle2CutPatter
 * '<S101>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle3CutPatter
 * '<S102>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle4CutPatter
 * '<S103>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine/SequencyCutMachine
 * '<S104>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle1CutPatter
 * '<S105>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle2CutPatter
 * '<S106>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle3CutPatter
 * '<S107>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle4CutPatter
 * '<S108>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel
 * '<S109>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/NewValue
 * '<S110>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/OldValue
 * '<S111>' : BaseEngineController_A02/Foreground/Control/Controller/Crank
 * '<S112>' : BaseEngineController_A02/Foreground/Control/Controller/Crank State
 * '<S113>' : BaseEngineController_A02/Foreground/Control/Controller/Hybrid
 * '<S114>' : BaseEngineController_A02/Foreground/Control/Controller/Merge
 * '<S115>' : BaseEngineController_A02/Foreground/Control/Controller/Run
 * '<S116>' : BaseEngineController_A02/Foreground/Control/Controller/Run State
 * '<S117>' : BaseEngineController_A02/Foreground/Control/Controller/Stall
 * '<S118>' : BaseEngineController_A02/Foreground/Control/Controller/Stall State
 * '<S119>' : BaseEngineController_A02/Foreground/Control/Controller/Crank/Cals_and_Probes_Page
 * '<S120>' : BaseEngineController_A02/Foreground/Control/Controller/Crank/CrankFueling
 * '<S121>' : BaseEngineController_A02/Foreground/Control/Controller/Hybrid/Remy Control
 * '<S122>' : BaseEngineController_A02/Foreground/Control/Controller/Hybrid/Time Since Enabled (With Input)1
 * '<S123>' : BaseEngineController_A02/Foreground/Control/Controller/Hybrid/Time Since Enabled (With Input)2
 * '<S124>' : BaseEngineController_A02/Foreground/Control/Controller/Merge/FuelPump
 * '<S125>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager
 * '<S126>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio
 * '<S127>' : BaseEngineController_A02/Foreground/Control/Controller/Run/EGR
 * '<S128>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager
 * '<S129>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor
 * '<S130>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor
 * '<S131>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control
 * '<S132>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager
 * '<S133>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Saturation
 * '<S134>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/ShutDownTasksComplete Reset
 * '<S135>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs
 * '<S136>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/NewValue
 * '<S137>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/OldValue
 * '<S138>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S139>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S140>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S141>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S142>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Cals_and_Probes_Page
 * '<S143>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S144>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S145>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S146>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S147>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S148>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S149>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S150>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S151>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S152>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map
 * '<S153>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Cals_and_Probes_Page
 * '<S154>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S155>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S156>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S157>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S158>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S159>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S160>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S161>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S162>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S163>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S164>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S165>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S166>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S167>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S168>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S169>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Cals_and_Probes_Page
 * '<S170>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S171>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S172>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S173>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S174>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S175>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S176>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S177>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S178>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S179>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S180>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S181>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S182>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S183>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S184>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S185>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S186>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S187>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S188>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S189>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S190>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S191>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S192>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S193>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S194>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S195>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S196>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S197>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S198>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S199>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S200>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S201>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S202>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S203>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S204>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S205>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S206>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S207>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S208>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S209>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S210>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S211>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S212>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S213>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S214>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S215>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S216>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller
 * '<S217>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination/Cals_and_Probes_Page
 * '<S218>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S219>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S220>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller
 * '<S221>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation
 * '<S222>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Saturation
 * '<S223>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID
 * '<S224>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S225>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S226>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S227>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S228>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Hysteresis
 * '<S229>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S230>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S231>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S232>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S233>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S234>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S235>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S236>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S237>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S238>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S239>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S240>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Oil Pump at Startup
 * '<S241>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S242>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Oil Pump at Startup/Time Since Enabled
 * '<S243>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S244>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy
 * '<S245>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S246>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S247>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S248>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S249>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S250>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S251>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S252>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S253>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S254>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S255>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S256>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Cals_and_Probes_Page
 * '<S257>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S258>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S259>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S260>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S261>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis
 * '<S262>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis1
 * '<S263>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis2
 * '<S264>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis/Hysteresis
 * '<S265>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis1/Hysteresis
 * '<S266>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis2/Hysteresis
 * '<S267>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S268>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S269>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs
 * '<S270>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S271>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S272>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed
 * '<S273>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S274>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S275>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S276>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced
 * '<S277>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S278>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S279>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/C to K1
 * '<S280>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/Cals_and_Probes_Page
 * '<S281>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs
 * '<S282>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs/NewValue
 * '<S283>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs/OldValue
 * '<S284>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S285>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S286>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S287>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC
 * '<S288>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature
 * '<S289>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S290>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S291>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S292>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S293>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S294>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S295>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S296>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S297>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation
 * '<S298>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work
 * '<S299>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/Multiply and Divide, avoiding divde by zero1
 * '<S300>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/NonZero RPM
 * '<S301>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work
 * '<S302>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Stall
 * '<S303>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work/Saturation
 * '<S304>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/CompareTo
 * '<S305>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT
 * '<S306>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Saturation
 * '<S307>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator
 * '<S308>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator/Saturation
 * '<S309>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S310>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S311>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S312>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S313>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S314>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S315>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S316>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S317>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S318>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S319>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S320>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S321>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S322>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S323>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S324>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S325>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S326>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S327>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S328>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S329>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S330>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S331>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S332>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S333>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S334>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S335>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S336>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S337>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S338>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S339>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S340>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S341>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S342>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S343>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S344>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S345>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S346>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S347>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S348>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/NECCT Index
 * '<S349>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/Power Index
 * '<S350>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/Torque Indexes
 * '<S351>' : BaseEngineController_A02/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S352>' : BaseEngineController_A02/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S353>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs
 * '<S354>' : BaseEngineController_A02/Foreground/Inputs/Digital
 * '<S355>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed
 * '<S356>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors
 * '<S357>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors
 * '<S358>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors
 * '<S359>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112
 * '<S360>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix
 * '<S361>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/ESTOP at Startup
 * '<S362>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/MATLAB Function
 * '<S363>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs
 * '<S364>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1
 * '<S365>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2
 * '<S366>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/ESTOP at Startup/Time Since Enabled
 * '<S367>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs/NewValue
 * '<S368>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs/OldValue
 * '<S369>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1/NewValue
 * '<S370>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1/OldValue
 * '<S371>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2/NewValue
 * '<S372>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2/OldValue
 * '<S373>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs
 * '<S374>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1
 * '<S375>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10
 * '<S376>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11
 * '<S377>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12
 * '<S378>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13
 * '<S379>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14
 * '<S380>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15
 * '<S381>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16
 * '<S382>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17
 * '<S383>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18
 * '<S384>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19
 * '<S385>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2
 * '<S386>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20
 * '<S387>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21
 * '<S388>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22
 * '<S389>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23
 * '<S390>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24
 * '<S391>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25
 * '<S392>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26
 * '<S393>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27
 * '<S394>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28
 * '<S395>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29
 * '<S396>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3
 * '<S397>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30
 * '<S398>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31
 * '<S399>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32
 * '<S400>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33
 * '<S401>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34
 * '<S402>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35
 * '<S403>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36
 * '<S404>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4
 * '<S405>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5
 * '<S406>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6
 * '<S407>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7
 * '<S408>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8
 * '<S409>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9
 * '<S410>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs/NewValue
 * '<S411>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs/OldValue
 * '<S412>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1/NewValue
 * '<S413>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1/OldValue
 * '<S414>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10/NewValue
 * '<S415>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10/OldValue
 * '<S416>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11/NewValue
 * '<S417>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11/OldValue
 * '<S418>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12/NewValue
 * '<S419>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12/OldValue
 * '<S420>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13/NewValue
 * '<S421>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13/OldValue
 * '<S422>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14/NewValue
 * '<S423>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14/OldValue
 * '<S424>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15/NewValue
 * '<S425>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15/OldValue
 * '<S426>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16/NewValue
 * '<S427>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16/OldValue
 * '<S428>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17/NewValue
 * '<S429>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17/OldValue
 * '<S430>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18/NewValue
 * '<S431>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18/OldValue
 * '<S432>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19/NewValue
 * '<S433>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19/OldValue
 * '<S434>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2/NewValue
 * '<S435>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2/OldValue
 * '<S436>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20/NewValue
 * '<S437>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20/OldValue
 * '<S438>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21/NewValue
 * '<S439>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21/OldValue
 * '<S440>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22/NewValue
 * '<S441>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22/OldValue
 * '<S442>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23/NewValue
 * '<S443>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23/OldValue
 * '<S444>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24/NewValue
 * '<S445>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24/OldValue
 * '<S446>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25/NewValue
 * '<S447>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25/OldValue
 * '<S448>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26/NewValue
 * '<S449>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26/OldValue
 * '<S450>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27/NewValue
 * '<S451>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27/OldValue
 * '<S452>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28/NewValue
 * '<S453>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28/OldValue
 * '<S454>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29/NewValue
 * '<S455>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29/OldValue
 * '<S456>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3/NewValue
 * '<S457>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3/OldValue
 * '<S458>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30/NewValue
 * '<S459>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30/OldValue
 * '<S460>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31/NewValue
 * '<S461>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31/OldValue
 * '<S462>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32/NewValue
 * '<S463>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32/OldValue
 * '<S464>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33/NewValue
 * '<S465>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33/OldValue
 * '<S466>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34/NewValue
 * '<S467>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34/OldValue
 * '<S468>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35/NewValue
 * '<S469>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35/OldValue
 * '<S470>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36/NewValue
 * '<S471>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36/OldValue
 * '<S472>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4/NewValue
 * '<S473>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4/OldValue
 * '<S474>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5/NewValue
 * '<S475>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5/OldValue
 * '<S476>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6/NewValue
 * '<S477>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6/OldValue
 * '<S478>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7/NewValue
 * '<S479>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7/OldValue
 * '<S480>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8/NewValue
 * '<S481>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8/OldValue
 * '<S482>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9/NewValue
 * '<S483>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9/OldValue
 * '<S484>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor
 * '<S485>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1
 * '<S486>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S487>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S488>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S489>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S490>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S491>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S492>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S493>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S494>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S495>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1/NewValue
 * '<S496>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1/OldValue
 * '<S497>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S498>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S499>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S500>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S501>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S502>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S503>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S504>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S505>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S506>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1
 * '<S507>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S508>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres
 * '<S509>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP
 * '<S510>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime
 * '<S511>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S512>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres
 * '<S513>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts
 * '<S514>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts
 * '<S515>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/First Order Low Pass
 * '<S516>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem
 * '<S517>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem1
 * '<S518>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem2
 * '<S519>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override
 * '<S520>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/First Order Low Pass/First Order Low Pass
 * '<S521>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override/NewValue
 * '<S522>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override/OldValue
 * '<S523>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/First Order Low Pass
 * '<S524>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S525>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S526>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S527>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S528>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/First Order Low Pass/First Order Low Pass
 * '<S529>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S530>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S531>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S532>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S533>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S534>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S535>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S536>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S537>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S538>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S539>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S540>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S541>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S542>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S543>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S544>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S545>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S546>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S547>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S548>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S549>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S550>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S551>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S552>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S553>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S554>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S555>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S556>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S557>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S558>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S559>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S560>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S561>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S562>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S563>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S564>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S565>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S566>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S567>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S568>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S569>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S570>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S571>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S572>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S573>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S574>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S575>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S576>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S577>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S578>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S579>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S580>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S581>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat
 * '<S582>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S583>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/First Order Low Pass
 * '<S584>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem
 * '<S585>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem1
 * '<S586>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem2
 * '<S587>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override
 * '<S588>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/motohawk_table_1d1
 * '<S589>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/First Order Low Pass/First Order Low Pass
 * '<S590>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override/NewValue
 * '<S591>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override/OldValue
 * '<S592>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S593>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S594>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S595>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S596>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S597>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S598>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S599>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S600>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S601>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S602>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S603>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S604>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S605>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S606>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S607>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S608>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S609>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S610>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S611>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S612>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S613>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S614>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1
 * '<S615>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13
 * '<S616>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S617>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S618>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S619>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S620>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S621>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S622>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S623>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S624>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S625>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S626>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S627>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S628>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S629>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S630>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S631>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S632>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S633>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S634>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S635>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S636>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S637>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S638>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S639>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S640>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S641>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S642>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S643>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S644>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S645>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S646>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S647>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S648>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S649>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S650>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1/NewValue
 * '<S651>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1/OldValue
 * '<S652>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13/NewValue
 * '<S653>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13/OldValue
 * '<S654>' : BaseEngineController_A02/Foreground/Outputs/CAN Out
 * '<S655>' : BaseEngineController_A02/Foreground/Outputs/Coil Control
 * '<S656>' : BaseEngineController_A02/Foreground/Outputs/FuelPump
 * '<S657>' : BaseEngineController_A02/Foreground/Outputs/HBridge
 * '<S658>' : BaseEngineController_A02/Foreground/Outputs/Injector Control
 * '<S659>' : BaseEngineController_A02/Foreground/Outputs/OilPump
 * '<S660>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater
 * '<S661>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112
 * '<S662>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix
 * '<S663>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant
 * '<S664>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant1
 * '<S665>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant2
 * '<S666>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1
 * '<S667>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2
 * '<S668>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3
 * '<S669>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4
 * '<S670>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5
 * '<S671>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6
 * '<S672>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7
 * '<S673>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1/NewValue
 * '<S674>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1/OldValue
 * '<S675>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2/NewValue
 * '<S676>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2/OldValue
 * '<S677>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3/NewValue
 * '<S678>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3/OldValue
 * '<S679>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4/NewValue
 * '<S680>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4/OldValue
 * '<S681>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5/NewValue
 * '<S682>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5/OldValue
 * '<S683>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6/NewValue
 * '<S684>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6/OldValue
 * '<S685>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7/NewValue
 * '<S686>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7/OldValue
 * '<S687>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs
 * '<S688>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1
 * '<S689>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10
 * '<S690>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11
 * '<S691>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12
 * '<S692>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2
 * '<S693>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3
 * '<S694>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4
 * '<S695>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5
 * '<S696>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6
 * '<S697>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7
 * '<S698>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8
 * '<S699>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9
 * '<S700>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs/NewValue
 * '<S701>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs/OldValue
 * '<S702>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1/NewValue
 * '<S703>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1/OldValue
 * '<S704>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10/NewValue
 * '<S705>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10/OldValue
 * '<S706>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11/NewValue
 * '<S707>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11/OldValue
 * '<S708>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12/NewValue
 * '<S709>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12/OldValue
 * '<S710>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2/NewValue
 * '<S711>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2/OldValue
 * '<S712>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3/NewValue
 * '<S713>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3/OldValue
 * '<S714>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4/NewValue
 * '<S715>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4/OldValue
 * '<S716>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5/NewValue
 * '<S717>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5/OldValue
 * '<S718>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6/NewValue
 * '<S719>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6/OldValue
 * '<S720>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7/NewValue
 * '<S721>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7/OldValue
 * '<S722>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8/NewValue
 * '<S723>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8/OldValue
 * '<S724>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9/NewValue
 * '<S725>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9/OldValue
 * '<S726>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S727>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S728>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S729>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S730>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S731>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S732>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S733>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S734>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S735>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S736>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S737>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S738>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S739>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S740>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S741>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S742>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S743>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S744>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S745>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S746>' : BaseEngineController_A02/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S747>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S748>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S749>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S750>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S751>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S752>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S753>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S754>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S755>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S756>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S757>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Cals_and_Probes_Page
 * '<S758>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S759>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S760>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S761>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S762>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S763>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S764>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S765>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S766>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S767>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S768>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S769>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S770>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP
 * '<S771>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units
 * '<S772>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units/NewValue
 * '<S773>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units/OldValue
 * '<S774>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater
 * '<S775>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units
 * '<S776>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units/NewValue
 * '<S777>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units/OldValue
 * '<S778>' : BaseEngineController_A02/Main Power Relay/Main Power Relay
 * '<S779>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S780>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S781>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S782>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S783>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S784>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/On Off Delay
 * '<S785>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S786>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S787>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S788>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S789>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S790>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S791>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S792>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S793>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S794>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S795>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S796>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S797>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S798>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S799>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S800>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S801>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S802>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S803>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S804>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S805>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S806>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S807>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S808>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_A02_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
