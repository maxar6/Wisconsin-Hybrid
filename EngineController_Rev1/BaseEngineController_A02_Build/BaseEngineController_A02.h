/*
 * File: BaseEngineController_A02.h
 *
 * Real-Time Workshop code generated for Simulink model BaseEngineController_A02.
 *
 * Model version                        : 1.1510
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Nov 19 15:20:16 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Nov 19 15:20:17 2017
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
#include "rt_zcfcn.h"
#include "Application.h"
#include "rt_ABS.h"
#include "rt_MAXd_snf.h"
#include "rt_MINd_snf.h"
#include "rt_SATURATE.h"
#include "rt_nonfinite.h"
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
  real_T s556_Sum1;                    /* '<S556>/Sum1' */
  real_T s563_Sum1;                    /* '<S563>/Sum1' */
  real_T s612_Merge;                   /* '<S612>/Merge' */
  real_T s407_RPMInst;                 /* '<S407>/Data Type Conversion1' */
  real_T s411_GensetEnable;            /* '<S411>/Read CAN Message' */
  real_T s411_GensetEnable_g;          /* '<S411>/Read CAN Message' */
  real_T s411_GensetEnable_a;          /* '<S411>/Read CAN Message' */
  real_T s119_generatingTQ;            /* '<S119>/Switch' */
  real_T s410_motohawk_data_read1;     /* '<S410>/motohawk_data_read1' */
  real_T s666_Merge;                   /* '<S666>/Merge' */
  real_T s664_Switch;                  /* '<S664>/Switch' */
  real_T s684_MinMax;                  /* '<S684>/MinMax' */
  real_T s684_MinMax1;                 /* '<S684>/MinMax1' */
  real_T s688_MinMax1;                 /* '<S688>/MinMax1' */
  real_T s698_Merge;                   /* '<S698>/Merge' */
  real_T s663_Switch;                  /* '<S663>/Switch' */
  real_T s667_MinMax;                  /* '<S667>/MinMax' */
  real_T s667_MinMax1;                 /* '<S667>/MinMax1' */
  real_T s671_MinMax1;                 /* '<S671>/MinMax1' */
  real_T s681_Merge;                   /* '<S681>/Merge' */
  real_T s374_Switch2;                 /* '<S374>/Switch2' */
  real_T s562_Merge;                   /* '<S562>/Merge' */
  real_T s560_Sum1;                    /* '<S560>/Sum1' */
  real_T s594_Merge;                   /* '<S594>/Merge' */
  real_T s408_Gain;                    /* '<S408>/Gain' */
  real_T s558_Sum1;                    /* '<S558>/Sum1' */
  real_T s578_Merge;                   /* '<S578>/Merge' */
  real_T s557_Sum1;                    /* '<S557>/Sum1' */
  real_T s570_Merge;                   /* '<S570>/Merge' */
  real_T s368_Switch1;                 /* '<S368>/Switch1' */
  real_T s639_motohawk_interpolation_1d;/* '<S639>/motohawk_interpolation_1d' */
  real_T s638_Merge;                   /* '<S638>/Merge' */
  real_T s372_Sum1;                    /* '<S372>/Sum1' */
  real_T s395_Switch;                  /* '<S395>/Switch' */
  real_T s561_Sum1;                    /* '<S561>/Sum1' */
  real_T s319_motohawk_delta_time;     /* '<S319>/motohawk_delta_time' */
  real_T s327_Sum;                     /* '<S327>/Sum' */
  real_T s326_PressureRatio;           /* '<S326>/Pressure Ratio' */
  real_T s326_NominalAirFlowRate2;     /* '<S326>/Nominal Air Flow Rate2' */
  real_T s406_Gain;                    /* '<S406>/Gain' */
  real_T s542_motohawk_interpolation_1d;/* '<S542>/motohawk_interpolation_1d' */
  real_T s541_Merge;                   /* '<S541>/Merge' */
  real_T s326_Saturation1;             /* '<S326>/Saturation1' */
  real_T s348_TorquetoPower;           /* '<S348>/Torque to Power' */
  real_T s339_Merge;                   /* '<S339>/Merge' */
  real_T s342_Sum1;                    /* '<S342>/Sum1' */
  real_T s340_Merge;                   /* '<S340>/Merge' */
  real_T s345_Sum1;                    /* '<S345>/Sum1' */
  real_T s356_MinMax1;                 /* '<S356>/MinMax1' */
  real_T s389_Sum1;                    /* '<S389>/Sum1' */
  real_T s120_SparkEnergy;             /* '<S120>/Merge5' */
  real_T s565_Sum1;                    /* '<S565>/Sum1' */
  real_T s628_Merge;                   /* '<S628>/Merge' */
  real_T s120_SparkAdv;                /* '<S120>/Merge4' */
  real_T s120_EGR;                     /* '<S120>/Merge3' */
  real_T s397_Switch;                  /* '<S397>/Switch' */
  real_T s120_Throttle;                /* '<S120>/Merge8' */
  real_T s709_ETC;                     /* '<S709>/Saturation' */
  real_T s120_SOI;                     /* '<S120>/Merge1' */
  real_T s120_FuelMult;                /* '<S120>/Merge6' */
  real_T s120_FPC[8];                  /* '<S120>/Merge2' */
  real_T s71_Sum[8];                   /* '<S71>/Sum' */
  real_T s63_constreftoatm;            /* '<S63>/const ref to atm' */
  real_T s14_Sum2;                     /* '<S14>/Sum2' */
  real_T s14_Sum1;                     /* '<S14>/Sum1' */
  real_T s14_MinMax[8];                /* '<S14>/MinMax' */
  real_T s120_MakeUpEOI;               /* '<S120>/Merge10' */
  real_T s564_Sum1;                    /* '<S564>/Sum1' */
  real_T s620_Merge;                   /* '<S620>/Merge' */
  real_T s602_Merge;                   /* '<S602>/Merge' */
  real_T s559_Sum1;                    /* '<S559>/Sum1' */
  real_T s586_Merge;                   /* '<S586>/Merge' */
  real_T s412_ReadCANMessage_o2;       /* '<S412>/Read CAN Message' */
  real_T s412_ReadCANMessage_o3;       /* '<S412>/Read CAN Message' */
  real_T s412_ReadCANMessage_o4;       /* '<S412>/Read CAN Message' */
  real_T s412_ReadCANMessage1_o2;      /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage1_o3;      /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage1_o4;      /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage1_o5;      /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage1_o6;      /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage1_o7;      /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage1_o8;      /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage1_o9;      /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage1_o10;     /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage1_o11;     /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage1_o12;     /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage1_o13;     /* '<S412>/Read CAN Message1' */
  real_T s412_ReadCANMessage2_o2;      /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o3;      /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o4;      /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o5;      /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o6;      /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o7;      /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o8;      /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o9;      /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o10;     /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o11;     /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o12;     /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o13;     /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o14;     /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o15;     /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage2_o16;     /* '<S412>/Read CAN Message2' */
  real_T s412_ReadCANMessage3_o2;      /* '<S412>/Read CAN Message3' */
  real_T s412_ReadCANMessage3_o3;      /* '<S412>/Read CAN Message3' */
  real_T s412_ReadCANMessage3_o4;      /* '<S412>/Read CAN Message3' */
  real_T s371_Sum3;                    /* '<S371>/Sum3' */
  real_T s372_Sum3;                    /* '<S372>/Sum3' */
  real_T s393_Sum;                     /* '<S393>/Sum' */
  real_T s351_Switch1;                 /* '<S351>/Switch1' */
  real_T s417_UnitDelay;               /* '<S417>/Unit Delay' */
  real_T s780_Sum;                     /* '<S780>/Sum' */
  real_T s781_Sum;                     /* '<S781>/Sum' */
  real_T s783_CrankCounter;            /* '<S783>/CrankCounter' */
  real_T s650_motohawk_interpolation_1d;/* '<S650>/motohawk_interpolation_1d' */
  real_T s643_Merge;                   /* '<S643>/Merge' */
  real_T s649_Merge;                   /* '<S649>/Merge' */
  real_T s659_motohawk_interpolation_1d;/* '<S659>/motohawk_interpolation_1d' */
  real_T s644_Merge;                   /* '<S644>/Merge' */
  real_T s658_Merge;                   /* '<S658>/Merge' */
  real_T s313_Gain;                    /* '<S313>/Gain' */
  real_T s385_Product;                 /* '<S385>/Product' */
  real_T s384_Product;                 /* '<S384>/Product' */
  real_T s365_Merge;                   /* '<S365>/Merge' */
  real_T s382_Sum2;                    /* '<S382>/Sum2' */
  real_T s378_APP_Out;                 /* '<S364>/Crank APP Lockout' */
  real_T s357_Switch1;                 /* '<S357>/Switch1' */
  real_T s328_Product;                 /* '<S328>/Product' */
  real_T s324_Timer;                   /* '<S319>/Baro Stall State Delay' */
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
  real_T s856_Switch;                  /* '<S856>/Switch' */
  int32_T s707_DataTypeConversion;     /* '<S707>/Data Type Conversion' */
  int32_T s795_Merge;                  /* '<S795>/Merge' */
  uint32_T s412_ReadCANMessage_o1;     /* '<S412>/Read CAN Message' */
  uint32_T s412_ReadCANMessage1_o1;    /* '<S412>/Read CAN Message1' */
  uint32_T s412_ReadCANMessage2_o1;    /* '<S412>/Read CAN Message2' */
  uint32_T s412_ReadCANMessage3_o1;    /* '<S412>/Read CAN Message3' */
  uint32_T s555_Sum;                   /* '<S555>/Sum' */
  uint32_T s313_Switch;                /* '<S313>/Switch' */
  fault_T s273_motohawk_fault_iterator_o2;/* '<S273>/motohawk_fault_iterator' */
  int16_T s709_motohawk_pwm1_o1;       /* '<S709>/motohawk_pwm1' */
  uint16_T s408_motohawk_ain1;         /* '<S408>/motohawk_ain1' */
  uint16_T s408_motohawk_ain4;         /* '<S408>/motohawk_ain4' */
  uint16_T s409_motohawk_ain3;         /* '<S409>/motohawk_ain3' */
  uint16_T s408_motohawk_ain_read1;    /* '<S408>/motohawk_ain_read1' */
  uint16_T s408_motohawk_ain14;        /* '<S408>/motohawk_ain14' */
  uint16_T s408_motohawk_ain3;         /* '<S408>/motohawk_ain3' */
  uint16_T s408_motohawk_ain2;         /* '<S408>/motohawk_ain2' */
  uint16_T s706_SparkSequence_o3[8];   /* '<S706>/Spark Sequence' */
  uint16_T s706_SparkSequence_o4[8];   /* '<S706>/Spark Sequence' */
  uint16_T s633_motohawk_ain;          /* '<S633>/motohawk_ain' */
  uint16_T s633_motohawk_ain1;         /* '<S633>/motohawk_ain1' */
  uint16_T s284_FltOrder[71];          /* '<S274>/Freeze-Frame Trigger' */
  uint16_T s284_FltOrderMax;           /* '<S274>/Freeze-Frame Trigger' */
  index_T s361_motohawk_prelookup1;    /* '<S361>/motohawk_prelookup1' */
  index_T s361_Indexes;                /* '<S361>/motohawk_prelookup5' */
  index_T s359_motohawk_prelookup;     /* '<S359>/motohawk_prelookup' */
  index_T s360_motohawk_prelookup;     /* '<S360>/motohawk_prelookup' */
  index_T s402_motohawk_prelookup1;    /* '<S402>/motohawk_prelookup1' */
  index_T s402_motohawk_prelookup4;    /* '<S402>/motohawk_prelookup4' */
  index_T s323_RPMAccel17Idx;          /* '<S323>/motohawk_prelookup' */
  index_T s362_motohawk_prelookup;     /* '<S362>/motohawk_prelookup' */
  int8_T s15_Merge1[32];               /* '<S15>/Merge1' */
  int8_T s783_DataTypeConversion;      /* '<S783>/Data Type Conversion' */
  int8_T s186_DataTypeConversion;      /* '<S186>/Data Type Conversion' */
  int8_T s186_DataTypeConversion1;     /* '<S186>/Data Type Conversion1' */
  int8_T s99_MultiportSwitch[8];       /* '<S99>/Multiport Switch' */
  int8_T s109_CutArray[8];             /* '<S109>/CutArray' */
  int8_T s25_DC_Override;              /* '<S13>/ETC Test  Manager' */
  int8_T s25_SetpointMode;             /* '<S13>/ETC Test  Manager' */
  uint8_T s370_UnitDelay;              /* '<S370>/Unit Delay' */
  uint8_T s319_motohawk_data_read1;    /* '<S319>/motohawk_data_read1' */
  uint8_T s708_motohawk_dout;          /* '<S708>/motohawk_dout' */
  uint8_T s709_motohawk_pwm1_o2;       /* '<S709>/motohawk_pwm1' */
  uint8_T s710_InjectorSequence_o1[8]; /* '<S710>/Injector Sequence' */
  uint8_T s711_motohawk_dout;          /* '<S711>/motohawk_dout' */
  uint8_T s712_motohawk_dout;          /* '<S712>/motohawk_dout' */
  uint8_T s15_DataTypeConversion5;     /* '<S15>/Data Type Conversion5' */
  uint8_T s364_motohawk_data_read;     /* '<S364>/motohawk_data_read' */
  uint8_T s364_UnitDelay;              /* '<S364>/Unit Delay' */
  uint8_T s407_motohawk_encoder_fault; /* '<S407>/motohawk_encoder_fault' */
  uint8_T s407_motohawk_encoder_state; /* '<S407>/motohawk_encoder_state' */
  uint8_T s785_Switch1;                /* '<S785>/Switch1' */
  uint8_T s284_FFIDs[6];               /* '<S274>/Freeze-Frame Trigger' */
  uint8_T s391_Switch;                 /* '<S391>/Switch' */
  uint8_T s390_State;                  /* '<S370>/Engine State Machine' */
  uint8_T s221_IdleState;              /* '<S206>/IdleStateMachine' */
  uint8_T s99_UnitDelay1;              /* '<S99>/Unit Delay1' */
  uint8_T s109_Switch;                 /* '<S109>/Switch' */
  boolean_T s370_Stall;                /* '<S370>/Relational Operator1' */
  boolean_T s370_Crank;                /* '<S370>/Relational Operator4' */
  boolean_T s370_Run;                  /* '<S370>/Logical Operator1' */
  boolean_T s715_Compare;              /* '<S715>/Compare' */
  boolean_T s716_Compare;              /* '<S716>/Compare' */
  boolean_T s717_Compare;              /* '<S717>/Compare' */
  boolean_T s339_RelationalOperator4;  /* '<S339>/Relational Operator4' */
  boolean_T s340_RelationalOperator4;  /* '<S340>/Relational Operator4' */
  boolean_T s336_LogicalOperator;      /* '<S336>/Logical Operator' */
  boolean_T s15_LogicalOperator2[8];   /* '<S15>/Logical Operator2' */
  boolean_T s19_Enable;                /* '<S19>/Logical Operator2' */
  boolean_T s794_Merge;                /* '<S794>/Merge' */
  boolean_T s120_FUELP;                /* '<S120>/Merge7' */
  boolean_T s406_EStop;                /* '<S406>/motohawk_data_read' */
  boolean_T s801_LogicalOperator;      /* '<S801>/Logical Operator' */
  boolean_T s816_Merge[8];             /* '<S816>/Merge' */
  boolean_T s120_OILP;                 /* '<S120>/Merge9' */
  boolean_T s831_LogicalOperator;      /* '<S831>/Logical Operator' */
  boolean_T s120_O2Heater;             /* '<S120>/Merge11' */
  boolean_T s836_LogicalOperator;      /* '<S836>/Logical Operator' */
  boolean_T s706_LogicalOperator1[8];  /* '<S706>/Logical Operator1' */
  boolean_T s783_RelationalOperator1;  /* '<S783>/Relational Operator1' */
  boolean_T s284_FFTrigg[6];           /* '<S274>/Freeze-Frame Trigger' */
  boolean_T s365_RelationalOperator3;  /* '<S365>/Relational Operator3' */
  boolean_T s378_APP_Mode;             /* '<S364>/Crank APP Lockout' */
  boolean_T s324_Enable;               /* '<S319>/Baro Stall State Delay' */
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
  boolean_T s840_RelationalOperator;   /* '<S840>/Relational Operator' */
  boolean_T s840_motohawk_data_read;   /* '<S840>/motohawk_data_read' */
  boolean_T s844_MPRDState;            /* '<S840>/ECUP Latch' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02
    s347_MultiplyandDivideavoidingdivdebyzero1;/* '<S347>/Multiply and Divide, avoiding divde by zero1' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02
    s162_MultiplyandDivideavoidingdivdebyzero;/* '<S162>/Multiply and Divide, avoiding divde by zero' */
} BlockIO_BaseEngineController_A02;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s556_UnitDelay_DSTATE;        /* '<S556>/Unit Delay' */
  real_T s563_UnitDelay1_DSTATE;       /* '<S563>/Unit Delay1' */
  real_T s613_UnitDelay_DSTATE;        /* '<S613>/Unit Delay' */
  real_T s694_UnitDelay_DSTATE;        /* '<S694>/Unit Delay' */
  real_T s687_UnitDelay1_DSTATE;       /* '<S687>/Unit Delay1' */
  real_T s677_UnitDelay_DSTATE;        /* '<S677>/Unit Delay' */
  real_T s670_UnitDelay1_DSTATE;       /* '<S670>/Unit Delay1' */
  real_T s560_UnitDelay1_DSTATE;       /* '<S560>/Unit Delay1' */
  real_T s595_UnitDelay_DSTATE;        /* '<S595>/Unit Delay' */
  real_T s558_UnitDelay1_DSTATE;       /* '<S558>/Unit Delay1' */
  real_T s579_UnitDelay_DSTATE;        /* '<S579>/Unit Delay' */
  real_T s557_UnitDelay1_DSTATE;       /* '<S557>/Unit Delay1' */
  real_T s571_UnitDelay_DSTATE;        /* '<S571>/Unit Delay' */
  real_T s372_UnitDelay_DSTATE;        /* '<S372>/Unit Delay' */
  real_T s632_UnitDelay_DSTATE;        /* '<S632>/Unit Delay' */
  real_T s640_UnitDelay_DSTATE;        /* '<S640>/Unit Delay' */
  real_T s327_UnitDelay_DSTATE;        /* '<S327>/Unit Delay' */
  real_T s561_UnitDelay1_DSTATE;       /* '<S561>/Unit Delay1' */
  real_T s535_UnitDelay_DSTATE;        /* '<S535>/Unit Delay' */
  real_T s543_UnitDelay_DSTATE;        /* '<S543>/Unit Delay' */
  real_T s339_UnitDelay2_DSTATE;       /* '<S339>/Unit Delay2' */
  real_T s342_UnitDelay_DSTATE;        /* '<S342>/Unit Delay' */
  real_T s340_UnitDelay2_DSTATE;       /* '<S340>/Unit Delay2' */
  real_T s345_UnitDelay_DSTATE;        /* '<S345>/Unit Delay' */
  real_T s338_UnitDelay_DSTATE;        /* '<S338>/Unit Delay' */
  real_T s387_UnitDelay_DSTATE;        /* '<S387>/Unit Delay' */
  real_T s389_UnitDelay_DSTATE;        /* '<S389>/Unit Delay' */
  real_T s565_UnitDelay1_DSTATE;       /* '<S565>/Unit Delay1' */
  real_T s629_UnitDelay_DSTATE;        /* '<S629>/Unit Delay' */
  real_T s71_UnitDelay_DSTATE[8];      /* '<S71>/Unit Delay' */
  real_T s73_UnitDelay_DSTATE;         /* '<S73>/Unit Delay' */
  real_T s72_UnitDelay_DSTATE;         /* '<S72>/Unit Delay' */
  real_T s70_UnitDelay_DSTATE;         /* '<S70>/Unit Delay' */
  real_T s69_UnitDelay_DSTATE;         /* '<S69>/Unit Delay' */
  real_T s68_UnitDelay_DSTATE;         /* '<S68>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s66_UnitDelay_DSTATE;         /* '<S66>/Unit Delay' */
  real_T s65_UnitDelay_DSTATE;         /* '<S65>/Unit Delay' */
  real_T s564_UnitDelay1_DSTATE;       /* '<S564>/Unit Delay1' */
  real_T s621_UnitDelay_DSTATE;        /* '<S621>/Unit Delay' */
  real_T s603_UnitDelay_DSTATE;        /* '<S603>/Unit Delay' */
  real_T s559_UnitDelay1_DSTATE;       /* '<S559>/Unit Delay1' */
  real_T s587_UnitDelay_DSTATE;        /* '<S587>/Unit Delay' */
  real_T s372_UnitDelay1_DSTATE;       /* '<S372>/Unit Delay1' */
  real_T s351_UnitDelay_DSTATE;        /* '<S351>/Unit Delay' */
  real_T s339_UnitDelay1_DSTATE;       /* '<S339>/Unit Delay1' */
  real_T s339_UnitDelay3_DSTATE;       /* '<S339>/Unit Delay3' */
  real_T s339_UnitDelay4_DSTATE;       /* '<S339>/Unit Delay4' */
  real_T s340_UnitDelay1_DSTATE;       /* '<S340>/Unit Delay1' */
  real_T s340_UnitDelay3_DSTATE;       /* '<S340>/Unit Delay3' */
  real_T s340_UnitDelay4_DSTATE;       /* '<S340>/Unit Delay4' */
  real_T s417_UnitDelay_DSTATE;        /* '<S417>/Unit Delay' */
  real_T s674_UnitDelay1_DSTATE;       /* '<S674>/Unit Delay1' */
  real_T s674_UnitDelay_DSTATE;        /* '<S674>/Unit Delay' */
  real_T s674_UnitDelay3_DSTATE;       /* '<S674>/Unit Delay3' */
  real_T s674_UnitDelay4_DSTATE;       /* '<S674>/Unit Delay4' */
  real_T s691_UnitDelay1_DSTATE;       /* '<S691>/Unit Delay1' */
  real_T s691_UnitDelay_DSTATE;        /* '<S691>/Unit Delay' */
  real_T s691_UnitDelay3_DSTATE;       /* '<S691>/Unit Delay3' */
  real_T s691_UnitDelay4_DSTATE;       /* '<S691>/Unit Delay4' */
  real_T s780_UnitDelay_DSTATE;        /* '<S780>/Unit Delay' */
  real_T s781_UnitDelay_DSTATE;        /* '<S781>/Unit Delay' */
  real_T s783_CrankCounter_DSTATE;     /* '<S783>/CrankCounter' */
  real_T s643_UnitDelay_DSTATE;        /* '<S643>/Unit Delay' */
  real_T s651_UnitDelay_DSTATE;        /* '<S651>/Unit Delay' */
  real_T s644_UnitDelay_DSTATE;        /* '<S644>/Unit Delay' */
  real_T s660_UnitDelay_DSTATE;        /* '<S660>/Unit Delay' */
  real_T s274_Initializedat1_DSTATE;   /* '<S274>/Initialized at 1' */
  real_T s385_UnitDelay1_DSTATE;       /* '<S385>/Unit Delay1' */
  real_T s384_UnitDelay1_DSTATE;       /* '<S384>/Unit Delay1' */
  real_T s365_UnitDelay2_DSTATE;       /* '<S365>/Unit Delay2' */
  real_T s379_UnitDelay_DSTATE;        /* '<S379>/Unit Delay' */
  real_T s382_UnitDelay_DSTATE;        /* '<S382>/Unit Delay' */
  real_T s365_UnitDelay1_DSTATE;       /* '<S365>/Unit Delay1' */
  real_T s365_UnitDelay3_DSTATE;       /* '<S365>/Unit Delay3' */
  real_T s365_UnitDelay4_DSTATE;       /* '<S365>/Unit Delay4' */
  real_T s357_UnitDelay_DSTATE;        /* '<S357>/Unit Delay' */
  real_T s328_UnitDelay1_DSTATE;       /* '<S328>/Unit Delay1' */
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
  real_T s846_UnitDelay_DSTATE;        /* '<S846>/Unit Delay' */
  real_T s846_UnitDelay1_DSTATE;       /* '<S846>/Unit Delay1' */
  real_T s324_TOld;                    /* '<S319>/Baro Stall State Delay' */
  real_T s127_count;                   /* '<S119>/Remy Control' */
  real_T s25_TimerOld;                 /* '<S13>/ETC Test  Manager' */
  uint32_T s403_UnitDelay_DSTATE;      /* '<S403>/Unit Delay' */
  uint32_T s555_UnitDelay_DSTATE;      /* '<S555>/Unit Delay' */
  uint32_T s549_motohawk_delta_time_DWORK1;/* '<S549>/motohawk_delta_time' */
  uint32_T s608_motohawk_delta_time_DWORK1;/* '<S608>/motohawk_delta_time' */
  uint32_T s129_motohawk_delta_time_DWORK1;/* '<S129>/motohawk_delta_time' */
  uint32_T s686_motohawk_delta_time_DWORK1;/* '<S686>/motohawk_delta_time' */
  uint32_T s669_motohawk_delta_time_DWORK1;/* '<S669>/motohawk_delta_time' */
  uint32_T s590_motohawk_delta_time_DWORK1;/* '<S590>/motohawk_delta_time' */
  uint32_T s574_motohawk_delta_time_DWORK1;/* '<S574>/motohawk_delta_time' */
  uint32_T s566_motohawk_delta_time_DWORK1;/* '<S566>/motohawk_delta_time' */
  uint32_T s634_motohawk_delta_time_DWORK1;/* '<S634>/motohawk_delta_time' */
  uint32_T s395_motohawk_delta_time_DWORK1;/* '<S395>/motohawk_delta_time' */
  uint32_T s319_motohawk_delta_time_DWORK1;/* '<S319>/motohawk_delta_time' */
  uint32_T s537_motohawk_delta_time_DWORK1;/* '<S537>/motohawk_delta_time' */
  uint32_T s338_motohawk_delta_time1_DWORK1;/* '<S338>/motohawk_delta_time1' */
  uint32_T s387_motohawk_delta_time_DWORK1;/* '<S387>/motohawk_delta_time' */
  uint32_T s624_motohawk_delta_time_DWORK1;/* '<S624>/motohawk_delta_time' */
  uint32_T s21_motohawk_delta_time_DWORK1;/* '<S21>/motohawk_delta_time' */
  uint32_T s806_motohawk_delta_time_DWORK1;/* '<S806>/motohawk_delta_time' */
  uint32_T s397_motohawk_delta_time_DWORK1;/* '<S397>/motohawk_delta_time' */
  uint32_T s22_motohawk_delta_time_DWORK1;/* '<S22>/motohawk_delta_time' */
  uint32_T s128_motohawk_delta_time_DWORK1;/* '<S128>/motohawk_delta_time' */
  uint32_T s616_motohawk_delta_time_DWORK1;/* '<S616>/motohawk_delta_time' */
  uint32_T s598_motohawk_delta_time_DWORK1;/* '<S598>/motohawk_delta_time' */
  uint32_T s582_motohawk_delta_time_DWORK1;/* '<S582>/motohawk_delta_time' */
  uint32_T s393_motohawk_delta_time_DWORK1;/* '<S393>/motohawk_delta_time' */
  uint32_T s351_motohawk_delta_time_DWORK1;/* '<S351>/motohawk_delta_time' */
  uint32_T s645_motohawk_delta_time_DWORK1;/* '<S645>/motohawk_delta_time' */
  uint32_T s654_motohawk_delta_time_DWORK1;/* '<S654>/motohawk_delta_time' */
  uint32_T s299_motohawk_delta_time_DWORK1;/* '<S299>/motohawk_delta_time' */
  uint32_T s302_motohawk_delta_time_DWORK1;/* '<S302>/motohawk_delta_time' */
  uint32_T s303_motohawk_delta_time_DWORK1;/* '<S303>/motohawk_delta_time' */
  uint32_T s304_motohawk_delta_time_DWORK1;/* '<S304>/motohawk_delta_time' */
  uint32_T s318_motohawk_delta_time_DWORK1;/* '<S318>/motohawk_delta_time' */
  uint32_T s317_motohawk_delta_time_DWORK1;/* '<S317>/motohawk_delta_time' */
  uint32_T s293_motohawk_delta_time_DWORK1;/* '<S293>/motohawk_delta_time' */
  uint32_T s297_motohawk_delta_time_DWORK1;/* '<S297>/motohawk_delta_time' */
  uint32_T s273_motohawk_prev_fault_T_DWORK1;/* '<S273>/motohawk_prev_fault_T' */
  uint32_T s382_motohawk_delta_time_DWORK1;/* '<S382>/motohawk_delta_time' */
  uint32_T s365_motohawk_delta_time_DWORK1;/* '<S365>/motohawk_delta_time' */
  uint32_T s357_motohawk_delta_time1_DWORK1;/* '<S357>/motohawk_delta_time1' */
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
  uint32_T s856_motohawk_delta_time_DWORK1;/* '<S856>/motohawk_delta_time' */
  int_T s136_HitCrossing1_MODE;        /* '<S136>/Hit  Crossing1' */
  uint16_T s710_InjectorSequence_DWORK2;/* '<S710>/Injector Sequence' */
  int8_T s367_UnitDelay_DSTATE;        /* '<S367>/Unit Delay' */
  int8_T s366_UnitDelay_DSTATE;        /* '<S366>/Unit Delay' */
  int8_T s325_UnitDelay_DSTATE;        /* '<S325>/Unit Delay' */
  uint8_T s370_UnitDelay_DSTATE;       /* '<S370>/Unit Delay' */
  uint8_T s364_UnitDelay_DSTATE;       /* '<S364>/Unit Delay' */
  uint8_T s785_CrankCounter_DSTATE;    /* '<S785>/CrankCounter' */
  uint8_T s391_CrankCounter_DSTATE;    /* '<S391>/CrankCounter' */
  uint8_T s99_UnitDelay1_DSTATE;       /* '<S99>/Unit Delay1' */
  boolean_T s274_UnitDelay2_DSTATE[71];/* '<S274>/Unit Delay2' */
  boolean_T s308_UnitDelay_DSTATE;     /* '<S308>/Unit Delay' */
  boolean_T s309_UnitDelay_DSTATE;     /* '<S309>/Unit Delay' */
  boolean_T s310_UnitDelay_DSTATE;     /* '<S310>/Unit Delay' */
  boolean_T s265_InitialConditionisTrue_DSTATE;/* '<S265>/Initial Condition is True' */
  boolean_T s135_UnitDelay_DSTATE;     /* '<S135>/Unit Delay' */
  boolean_T s202_UnitDelay_DSTATE;     /* '<S202>/Unit Delay' */
  boolean_T s254_UnitDelay_DSTATE;     /* '<S254>/Unit Delay' */
  boolean_T s174_InitialConditionisTrue_DSTATE;/* '<S174>/Initial Condition is True' */
  boolean_T s44_UnitDelay_DSTATE;      /* '<S44>/Unit Delay' */
  boolean_T s845_UnitDelay8_DSTATE;    /* '<S845>/Unit Delay8' */
  boolean_T s845_UnitDelay6_DSTATE;    /* '<S845>/Unit Delay6' */
  boolean_T s845_UnitDelay7_DSTATE;    /* '<S845>/Unit Delay7' */
  boolean_T s841_UnitDelay_DSTATE;     /* '<S841>/Unit Delay' */
  boolean_T s847_UnitDelay2_DSTATE;    /* '<S847>/Unit Delay2' */
  boolean_T s840_UnitDelay5_DSTATE;    /* '<S840>/Unit Delay5' */
  boolean_T s847_UnitDelay_DSTATE;     /* '<S847>/Unit Delay' */
  boolean_T s847_UnitDelay1_DSTATE;    /* '<S847>/Unit Delay1' */
  boolean_T s840_UnitDelay3_DSTATE;    /* '<S840>/Unit Delay3' */
  boolean_T s840_UnitDelay4_DSTATE;    /* '<S840>/Unit Delay4' */
  int8_T s163_If_ActiveSubsystem;      /* '<S163>/If' */
  uint8_T s409_motohawk_trigger_DWORK1;/* '<S409>/motohawk_trigger' */
  uint8_T s370_motohawk_trigger_DWORK1;/* '<S370>/motohawk_trigger' */
  uint8_T s562_motohawk_trigger5_DWORK1;/* '<S562>/motohawk_trigger5' */
  uint8_T s6_motohawk_trigger1_DWORK1; /* '<S6>/motohawk_trigger1' */
  uint8_T s6_motohawk_trigger_DWORK1;  /* '<S6>/motohawk_trigger' */
  uint8_T s5_motohawk_trigger_DWORK1;  /* '<S5>/motohawk_trigger' */
  uint8_T s783_motohawk_trigger1_DWORK1;/* '<S783>/motohawk_trigger1' */
  uint8_T s284_is_active_c4_BaseEngineController_A02;/* '<S274>/Freeze-Frame Trigger' */
  uint8_T s284_is_c4_BaseEngineController_A02;/* '<S274>/Freeze-Frame Trigger' */
  uint8_T s284_ActvFltCount;           /* '<S274>/Freeze-Frame Trigger' */
  uint8_T s284_OldIndex;               /* '<S274>/Freeze-Frame Trigger' */
  uint8_T s390_is_c2_BaseEngineController_A02;/* '<S370>/Engine State Machine' */
  uint8_T s378_is_c10_BaseEngineController_A02;/* '<S364>/Crank APP Lockout' */
  uint8_T s324_is_c19_BaseEngineController_A02;/* '<S319>/Baro Stall State Delay' */
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
  uint8_T s844_is_c8_BaseEngineController_A02;/* '<S840>/ECUP Latch' */
  boolean_T s710_InjectorSequence_DWORK1[8];/* '<S710>/Injector Sequence' */
  boolean_T s242_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S242>/Multiply by 1.0 if not yet enabled' */
  boolean_T s860_Memory_PreviousInput; /* '<S860>/Memory' */
  boolean_T s7_Stall_MODE;             /* '<S7>/Stall' */
  boolean_T s7_Crank_MODE;             /* '<S7>/Crank' */
  boolean_T s319_CaptureSignalAtStartup_MODE;/* '<S319>/Capture Signal At Startup' */
  boolean_T s322_CaptureECTAtStartup_MODE;/* '<S322>/Capture ECT At Startup' */
  boolean_T s7_Run_MODE;               /* '<S7>/Run' */
  boolean_T s15_PassThrough1_MODE;     /* '<S15>/PassThrough1' */
  boolean_T s15_PassThrough3_MODE;     /* '<S15>/PassThrough3' */
  boolean_T s15_SequenceCutMachine_MODE;/* '<S15>/SequenceCutMachine' */
  boolean_T s15_PassThrough4_MODE;     /* '<S15>/PassThrough4' */
  boolean_T s6_ElectronicThrottleController_MODE;/* '<S6>/Electronic Throttle Controller' */
  boolean_T s15_PassThrough5_MODE;     /* '<S15>/PassThrough5' */
  boolean_T s322_CaptureIATAtStartup_MODE;/* '<S322>/Capture IAT At Startup' */
  boolean_T s403_TriggeredSubsystem_MODE;/* '<S403>/Triggered Subsystem' */
  boolean_T s367_CollectAverage_MODE;  /* '<S367>/Collect Average' */
  boolean_T s366_CollectAverage_MODE;  /* '<S366>/Collect Average' */
  boolean_T s325_CollectAverage_MODE;  /* '<S325>/Collect Average' */
  boolean_T s156_DeltaTPSTransientFueling_MODE;/* '<S156>/Delta TPS Transient Fueling' */
  boolean_T s161_ECTTransientFueling_MODE;/* '<S161>/ECT Transient Fueling' */
  boolean_T s29_PassThrough_MODE;      /* '<S29>/PassThrough' */
} D_Work_BaseEngineController_A02;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState FreezeFrameDataStorage5_Trig_ZCE;/* '<S275>/Freeze Frame Data Storage5' */
  ZCSigState FreezeFrameDataStorage4_Trig_ZCE;/* '<S275>/Freeze Frame Data Storage4' */
  ZCSigState FreezeFrameDataStorage3_Trig_ZCE;/* '<S275>/Freeze Frame Data Storage3' */
  ZCSigState FreezeFrameDataStorage2_Trig_ZCE;/* '<S275>/Freeze Frame Data Storage2' */
  ZCSigState FreezeFrameDataStorage1_Trig_ZCE;/* '<S275>/Freeze Frame Data Storage1' */
  ZCSigState FreezeFrameDataStorage_Trig_ZCE;/* '<S275>/Freeze Frame Data Storage' */
  ZCSigState ClearFFIDsandFltOrder_Trig_ZCE;/* '<S275>/Clear FFIDs and FltOrder' */
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S136>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S30>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S13>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S847>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S847>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S847>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S847>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_e;/* '<S845>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j;/* '<S845>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_j;/* '<S845>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c;/* '<S845>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S843>/Clear' */
  ZCSigState Clear_Trig_ZCE_l;         /* '<S842>/Clear' */
} PrevZCSigStates_BaseEngineController_A02;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s710_Gain4;             /* '<S710>/Gain4' */
  const real_T s123_motohawk_replicate2;/* '<S123>/motohawk_replicate2' */
  const real_T s123_motohawk_replicate[8];/* '<S123>/motohawk_replicate' */
  const uint32_T s710_DataTypeConversion5;/* '<S710>/Data Type Conversion5' */
  const uint8_T s274_Width1;           /* '<S274>/Width1' */
  const uint8_T s274_Width2;           /* '<S274>/Width2' */
} ConstBlockIO_BaseEngineController_A02;

/* Constant parameters (auto storage) */
typedef struct {
  /* Computed Parameter: Constant2_Value_a
   * Referenced by: '<S285>/Constant2'
   */
  uint16_T Constant2_Value_a[71];

  /* Computed Parameter: zerosvector_Value
   * Referenced by: '<S274>/zeros vector'
   */
  int8_T zerosvector_Value[71];

  /* Computed Parameter: Constant1_Value_n
   * Referenced by: '<S285>/Constant1'
   */
  uint8_T Constant1_Value_n[6];

  /* Computed Parameter: Logic_table
   * Referenced by: '<S860>/Logic'
   */
  boolean_T Logic_table[16];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S308>/Combinatorial  Logic'
   *   '<S309>/Combinatorial  Logic'
   *   '<S310>/Combinatorial  Logic'
   *   '<S44>/Combinatorial  Logic'
   *   '<S254>/Combinatorial  Logic'
   */
  boolean_T pooled692[8];

  /* Computed Parameter: zerosvector1_Value
   * Referenced by: '<S274>/zeros vector1'
   */
  boolean_T zerosvector1_Value[6];
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
extern ConstBlockIO_BaseEngineController_A02 BaseEngineController_A02_ConstB;/* constant block i/o */

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
extern struct RT_MODEL_BaseEngineController_A02 *BaseEngineController_A02_M;

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
 * '<S273>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fault Codes and States
 * '<S274>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Freeze Frame Trigger
 * '<S275>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Freeze Frames
 * '<S276>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy
 * '<S277>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S278>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low System Voltage Fault Logic
 * '<S279>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S280>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S281>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals
 * '<S282>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S283>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S284>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Freeze Frame Trigger/Freeze-Frame Trigger
 * '<S285>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Freeze Frames/Clear FFIDs and FltOrder
 * '<S286>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Freeze Frames/Freeze Frame Data Storage
 * '<S287>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Freeze Frames/Freeze Frame Data Storage1
 * '<S288>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Freeze Frames/Freeze Frame Data Storage2
 * '<S289>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Freeze Frames/Freeze Frame Data Storage3
 * '<S290>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Freeze Frames/Freeze Frame Data Storage4
 * '<S291>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Freeze Frames/Freeze Frame Data Storage5
 * '<S292>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S293>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S294>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S295>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S296>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S297>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S298>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low System Voltage Fault Logic/Run State
 * '<S299>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low System Voltage Fault Logic/Time Since Enabled (With Input)2
 * '<S300>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Cals_and_Probes_Page
 * '<S301>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S302>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S303>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S304>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S305>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis
 * '<S306>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis1
 * '<S307>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis2
 * '<S308>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis/Hysteresis
 * '<S309>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis1/Hysteresis
 * '<S310>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis2/Hysteresis
 * '<S311>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers
 * '<S312>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers/RunState
 * '<S313>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers/hour meter
 * '<S314>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers/hour meter/motohawk_override_abs
 * '<S315>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers/hour meter/motohawk_override_abs/NewValue
 * '<S316>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Service Intervals/Run Timers/hour meter/motohawk_override_abs/OldValue
 * '<S317>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S318>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S319>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs
 * '<S320>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S321>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S322>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed
 * '<S323>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S324>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S325>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S326>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced
 * '<S327>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S328>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S329>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/C to K1
 * '<S330>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/Cals_and_Probes_Page
 * '<S331>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs
 * '<S332>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs/NewValue
 * '<S333>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs/OldValue
 * '<S334>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S335>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S336>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S337>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC
 * '<S338>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature
 * '<S339>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S340>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S341>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S342>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S343>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S344>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S345>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S346>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S347>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation
 * '<S348>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work
 * '<S349>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/Multiply and Divide, avoiding divde by zero1
 * '<S350>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/NonZero RPM
 * '<S351>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work
 * '<S352>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Stall
 * '<S353>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work/Saturation
 * '<S354>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/CompareTo
 * '<S355>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT
 * '<S356>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Saturation
 * '<S357>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator
 * '<S358>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator/Saturation
 * '<S359>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S360>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S361>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S362>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S363>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S364>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/APP Sensor Management
 * '<S365>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S366>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S367>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S368>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S369>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S370>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S371>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S372>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S373>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S374>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S375>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S376>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S377>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S378>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/APP Sensor Management/Crank APP Lockout
 * '<S379>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S380>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S381>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S382>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S383>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S384>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S385>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S386>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S387>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S388>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S389>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S390>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S391>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S392>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S393>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S394>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S395>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S396>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S397>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S398>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S399>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S400>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/NECCT Index
 * '<S401>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/Power Index
 * '<S402>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/Torque Indexes
 * '<S403>' : BaseEngineController_A02/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S404>' : BaseEngineController_A02/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S405>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs
 * '<S406>' : BaseEngineController_A02/Foreground/Inputs/Digital
 * '<S407>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed
 * '<S408>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors
 * '<S409>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors
 * '<S410>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors
 * '<S411>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112
 * '<S412>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix
 * '<S413>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/ESTOP at Startup
 * '<S414>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs
 * '<S415>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1
 * '<S416>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2
 * '<S417>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/ESTOP at Startup/Time Since Enabled
 * '<S418>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs/NewValue
 * '<S419>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs/OldValue
 * '<S420>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1/NewValue
 * '<S421>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1/OldValue
 * '<S422>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2/NewValue
 * '<S423>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2/OldValue
 * '<S424>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs
 * '<S425>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1
 * '<S426>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10
 * '<S427>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11
 * '<S428>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12
 * '<S429>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13
 * '<S430>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14
 * '<S431>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15
 * '<S432>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16
 * '<S433>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17
 * '<S434>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18
 * '<S435>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19
 * '<S436>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2
 * '<S437>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20
 * '<S438>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21
 * '<S439>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22
 * '<S440>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23
 * '<S441>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24
 * '<S442>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25
 * '<S443>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26
 * '<S444>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27
 * '<S445>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28
 * '<S446>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29
 * '<S447>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3
 * '<S448>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30
 * '<S449>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31
 * '<S450>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32
 * '<S451>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33
 * '<S452>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34
 * '<S453>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35
 * '<S454>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36
 * '<S455>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4
 * '<S456>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5
 * '<S457>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6
 * '<S458>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7
 * '<S459>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8
 * '<S460>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9
 * '<S461>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs/NewValue
 * '<S462>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs/OldValue
 * '<S463>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1/NewValue
 * '<S464>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1/OldValue
 * '<S465>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10/NewValue
 * '<S466>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10/OldValue
 * '<S467>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11/NewValue
 * '<S468>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11/OldValue
 * '<S469>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12/NewValue
 * '<S470>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12/OldValue
 * '<S471>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13/NewValue
 * '<S472>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13/OldValue
 * '<S473>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14/NewValue
 * '<S474>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14/OldValue
 * '<S475>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15/NewValue
 * '<S476>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15/OldValue
 * '<S477>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16/NewValue
 * '<S478>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16/OldValue
 * '<S479>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17/NewValue
 * '<S480>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17/OldValue
 * '<S481>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18/NewValue
 * '<S482>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18/OldValue
 * '<S483>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19/NewValue
 * '<S484>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19/OldValue
 * '<S485>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2/NewValue
 * '<S486>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2/OldValue
 * '<S487>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20/NewValue
 * '<S488>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20/OldValue
 * '<S489>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21/NewValue
 * '<S490>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21/OldValue
 * '<S491>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22/NewValue
 * '<S492>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22/OldValue
 * '<S493>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23/NewValue
 * '<S494>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23/OldValue
 * '<S495>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24/NewValue
 * '<S496>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24/OldValue
 * '<S497>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25/NewValue
 * '<S498>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25/OldValue
 * '<S499>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26/NewValue
 * '<S500>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26/OldValue
 * '<S501>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27/NewValue
 * '<S502>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27/OldValue
 * '<S503>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28/NewValue
 * '<S504>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28/OldValue
 * '<S505>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29/NewValue
 * '<S506>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29/OldValue
 * '<S507>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3/NewValue
 * '<S508>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3/OldValue
 * '<S509>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30/NewValue
 * '<S510>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30/OldValue
 * '<S511>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31/NewValue
 * '<S512>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31/OldValue
 * '<S513>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32/NewValue
 * '<S514>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32/OldValue
 * '<S515>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33/NewValue
 * '<S516>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33/OldValue
 * '<S517>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34/NewValue
 * '<S518>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34/OldValue
 * '<S519>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35/NewValue
 * '<S520>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35/OldValue
 * '<S521>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36/NewValue
 * '<S522>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36/OldValue
 * '<S523>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4/NewValue
 * '<S524>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4/OldValue
 * '<S525>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5/NewValue
 * '<S526>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5/OldValue
 * '<S527>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6/NewValue
 * '<S528>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6/OldValue
 * '<S529>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7/NewValue
 * '<S530>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7/OldValue
 * '<S531>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8/NewValue
 * '<S532>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8/OldValue
 * '<S533>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9/NewValue
 * '<S534>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9/OldValue
 * '<S535>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor
 * '<S536>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1
 * '<S537>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S538>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S539>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S540>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S541>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S542>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S543>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S544>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S545>' : BaseEngineController_A02/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S546>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1/NewValue
 * '<S547>' : BaseEngineController_A02/Foreground/Inputs/Digital/motohawk_override_abs1/OldValue
 * '<S548>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S549>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S550>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S551>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S552>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S553>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S554>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S555>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S556>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S557>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1
 * '<S558>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S559>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres
 * '<S560>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP
 * '<S561>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime
 * '<S562>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S563>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres
 * '<S564>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts
 * '<S565>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts
 * '<S566>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/First Order Low Pass
 * '<S567>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem
 * '<S568>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem1
 * '<S569>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/If Action Subsystem2
 * '<S570>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override
 * '<S571>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/First Order Low Pass/First Order Low Pass
 * '<S572>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override/NewValue
 * '<S573>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/EGRSensor1/Override/OldValue
 * '<S574>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/First Order Low Pass
 * '<S575>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S576>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S577>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S578>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S579>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/First Order Low Pass/First Order Low Pass
 * '<S580>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S581>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S582>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S583>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S584>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S585>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S586>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S587>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S588>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S589>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S590>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S591>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S592>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S593>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S594>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S595>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S596>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S597>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S598>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S599>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S600>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S601>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S602>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S603>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S604>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S605>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S606>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S607>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S608>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S609>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S610>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S611>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S612>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S613>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S614>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S615>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S616>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S617>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S618>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S619>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S620>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S621>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S622>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S623>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S624>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S625>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S626>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S627>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S628>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S629>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S630>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S631>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S632>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat
 * '<S633>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S634>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/First Order Low Pass
 * '<S635>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem
 * '<S636>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem1
 * '<S637>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem2
 * '<S638>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override
 * '<S639>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/motohawk_table_1d1
 * '<S640>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/First Order Low Pass/First Order Low Pass
 * '<S641>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override/NewValue
 * '<S642>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override/OldValue
 * '<S643>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S644>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S645>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S646>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S647>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S648>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S649>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S650>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S651>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S652>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S653>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S654>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S655>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S656>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S657>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S658>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S659>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S660>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S661>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S662>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S663>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S664>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S665>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1
 * '<S666>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13
 * '<S667>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S668>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S669>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S670>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S671>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S672>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S673>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S674>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S675>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S676>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S677>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S678>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S679>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S680>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S681>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S682>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S683>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S684>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S685>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S686>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S687>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S688>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S689>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S690>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S691>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S692>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S693>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S694>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S695>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S696>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S697>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S698>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S699>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S700>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S701>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1/NewValue
 * '<S702>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1/OldValue
 * '<S703>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13/NewValue
 * '<S704>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13/OldValue
 * '<S705>' : BaseEngineController_A02/Foreground/Outputs/CAN Out
 * '<S706>' : BaseEngineController_A02/Foreground/Outputs/Coil Control
 * '<S707>' : BaseEngineController_A02/Foreground/Outputs/EGR Out
 * '<S708>' : BaseEngineController_A02/Foreground/Outputs/FuelPump
 * '<S709>' : BaseEngineController_A02/Foreground/Outputs/HBridge
 * '<S710>' : BaseEngineController_A02/Foreground/Outputs/Injector Control
 * '<S711>' : BaseEngineController_A02/Foreground/Outputs/OilPump
 * '<S712>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater
 * '<S713>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112
 * '<S714>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix
 * '<S715>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant
 * '<S716>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant1
 * '<S717>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant2
 * '<S718>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1
 * '<S719>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2
 * '<S720>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3
 * '<S721>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4
 * '<S722>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5
 * '<S723>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6
 * '<S724>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7
 * '<S725>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1/NewValue
 * '<S726>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1/OldValue
 * '<S727>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2/NewValue
 * '<S728>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2/OldValue
 * '<S729>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3/NewValue
 * '<S730>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3/OldValue
 * '<S731>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4/NewValue
 * '<S732>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4/OldValue
 * '<S733>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5/NewValue
 * '<S734>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5/OldValue
 * '<S735>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6/NewValue
 * '<S736>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6/OldValue
 * '<S737>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7/NewValue
 * '<S738>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7/OldValue
 * '<S739>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs
 * '<S740>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1
 * '<S741>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10
 * '<S742>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11
 * '<S743>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12
 * '<S744>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2
 * '<S745>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3
 * '<S746>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4
 * '<S747>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5
 * '<S748>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6
 * '<S749>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7
 * '<S750>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8
 * '<S751>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9
 * '<S752>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs/NewValue
 * '<S753>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs/OldValue
 * '<S754>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1/NewValue
 * '<S755>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1/OldValue
 * '<S756>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10/NewValue
 * '<S757>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10/OldValue
 * '<S758>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11/NewValue
 * '<S759>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11/OldValue
 * '<S760>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12/NewValue
 * '<S761>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12/OldValue
 * '<S762>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2/NewValue
 * '<S763>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2/OldValue
 * '<S764>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3/NewValue
 * '<S765>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3/OldValue
 * '<S766>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4/NewValue
 * '<S767>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4/OldValue
 * '<S768>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5/NewValue
 * '<S769>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5/OldValue
 * '<S770>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6/NewValue
 * '<S771>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6/OldValue
 * '<S772>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7/NewValue
 * '<S773>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7/OldValue
 * '<S774>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8/NewValue
 * '<S775>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8/OldValue
 * '<S776>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9/NewValue
 * '<S777>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9/OldValue
 * '<S778>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S779>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S780>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S781>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S782>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S783>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S784>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S785>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S786>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S787>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S788>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S789>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S790>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S791>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S792>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S793>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S794>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs
 * '<S795>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1
 * '<S796>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs/NewValue
 * '<S797>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs/OldValue
 * '<S798>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1/NewValue
 * '<S799>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1/OldValue
 * '<S800>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/CompareTo
 * '<S801>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S802>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S803>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S804>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S805>' : BaseEngineController_A02/Foreground/Outputs/HBridge/CompareTo
 * '<S806>' : BaseEngineController_A02/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S807>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S808>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S809>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S810>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S811>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S812>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S813>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S814>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S815>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S816>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S817>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Cals_and_Probes_Page
 * '<S818>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S819>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S820>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S821>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S822>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S823>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S824>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S825>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S826>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S827>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S828>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S829>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S830>' : BaseEngineController_A02/Foreground/Outputs/OilPump/CompareTo
 * '<S831>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP
 * '<S832>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units
 * '<S833>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units/NewValue
 * '<S834>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units/OldValue
 * '<S835>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/CompareTo
 * '<S836>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater
 * '<S837>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units
 * '<S838>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units/NewValue
 * '<S839>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units/OldValue
 * '<S840>' : BaseEngineController_A02/Main Power Relay/Main Power Relay
 * '<S841>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S842>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S843>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S844>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S845>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S846>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/On Off Delay
 * '<S847>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S848>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S849>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S850>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S851>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S852>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S853>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S854>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S855>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S856>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S857>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S858>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S859>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S860>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S861>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S862>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S863>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S864>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S865>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S866>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S867>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S868>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S869>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S870>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_A02_h_ */

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
