/*
 * File: BaseEngineController_A02.h
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
  real_T s604_Merge;                   /* '<S604>/Merge' */
  real_T s543_Sum1;                    /* '<S543>/Sum1' */
  real_T s388_ReadCANMessage1_o2;      /* '<S388>/Read CAN Message1' */
  real_T s388_ReadCANMessage1_o3;      /* '<S388>/Read CAN Message1' */
  real_T s388_ReadCANMessage1_o4;      /* '<S388>/Read CAN Message1' */
  real_T s388_ReadCANMessage1_o5;      /* '<S388>/Read CAN Message1' */
  real_T s388_ReadCANMessage1_o6;      /* '<S388>/Read CAN Message1' */
  real_T s388_ReadCANMessage1_o7;      /* '<S388>/Read CAN Message1' */
  real_T s388_ReadCANMessage1_o8;      /* '<S388>/Read CAN Message1' */
  real_T s388_ReadCANMessage1_o9;      /* '<S388>/Read CAN Message1' */
  real_T s388_ReadCANMessage1_o10;     /* '<S388>/Read CAN Message1' */
  real_T s388_ReadCANMessage1_o11;     /* '<S388>/Read CAN Message1' */
  real_T s388_ReadCANMessage1_o12;     /* '<S388>/Read CAN Message1' */
  real_T s388_ReadCANMessage1_o13;     /* '<S388>/Read CAN Message1' */
  real_T s710_MinMax;                  /* '<S710>/MinMax' */
  real_T s383_RPMInst;                 /* '<S383>/Data Type Conversion1' */
  real_T s388_ReadCANMessage_o2;       /* '<S388>/Read CAN Message' */
  real_T s388_ReadCANMessage_o3;       /* '<S388>/Read CAN Message' */
  real_T s388_ReadCANMessage_o4;       /* '<S388>/Read CAN Message' */
  real_T s722_Merge;                   /* '<S722>/Merge' */
  real_T s418_Merge;                   /* '<S418>/Merge' */
  real_T s387_GensetEnable;            /* '<S387>/Read CAN Message' */
  real_T s387_ReadCANMessage_o4;       /* '<S387>/Read CAN Message' */
  real_T s387_ReadCANMessage_o5;       /* '<S387>/Read CAN Message' */
  real_T s387_ReadCANMessage_o6;       /* '<S387>/Read CAN Message' */
  real_T s387_Product;                 /* '<S387>/Product' */
  real_T s552_Sum1;                    /* '<S552>/Sum1' */
  real_T s620_Merge;                   /* '<S620>/Merge' */
  real_T s655_Switch;                  /* '<S655>/Switch' */
  real_T s659_MinMax;                  /* '<S659>/MinMax' */
  real_T s659_MinMax1;                 /* '<S659>/MinMax1' */
  real_T s663_MinMax1;                 /* '<S663>/MinMax1' */
  real_T s656_Switch;                  /* '<S656>/Switch' */
  real_T s676_MinMax;                  /* '<S676>/MinMax' */
  real_T s676_MinMax1;                 /* '<S676>/MinMax1' */
  real_T s680_MinMax1;                 /* '<S680>/MinMax1' */
  real_T s673_Merge;                   /* '<S673>/Merge' */
  real_T s690_Merge;                   /* '<S690>/Merge' */
  real_T s351_Switch2;                 /* '<S351>/Switch2' */
  real_T s386_motohawk_data_read1;     /* '<S386>/motohawk_data_read1' */
  real_T s345_Switch1;                 /* '<S345>/Switch1' */
  real_T s631_motohawk_interpolation_1d;/* '<S631>/motohawk_interpolation_1d' */
  real_T s630_Merge;                   /* '<S630>/Merge' */
  real_T s349_Sum1;                    /* '<S349>/Sum1' */
  real_T s371_Switch;                  /* '<S371>/Switch' */
  real_T s297_motohawk_delta_time;     /* '<S297>/motohawk_delta_time' */
  real_T s548_Sum1;                    /* '<S548>/Sum1' */
  real_T s305_Sum;                     /* '<S305>/Sum' */
  real_T s549_Merge;                   /* '<S549>/Merge' */
  real_T s547_Sum1;                    /* '<S547>/Sum1' */
  real_T s586_Merge;                   /* '<S586>/Merge' */
  real_T s304_NominalAirFlowRate2;     /* '<S304>/Nominal Air Flow Rate2' */
  real_T s304_PressureRatio;           /* '<S304>/Pressure Ratio' */
  real_T s309_Merge;                   /* '<S309>/Merge' */
  real_T s382_Gain;                    /* '<S382>/Gain' */
  real_T s529_motohawk_interpolation_1d;/* '<S529>/motohawk_interpolation_1d' */
  real_T s528_Merge;                   /* '<S528>/Merge' */
  real_T s304_Saturation1;             /* '<S304>/Saturation1' */
  real_T s317_Merge;                   /* '<S317>/Merge' */
  real_T s320_Sum1;                    /* '<S320>/Sum1' */
  real_T s318_Merge;                   /* '<S318>/Merge' */
  real_T s323_Sum1;                    /* '<S323>/Sum1' */
  real_T s326_TorquetoPower;           /* '<S326>/Torque to Power' */
  real_T s334_MinMax1;                 /* '<S334>/MinMax1' */
  real_T s365_Sum1;                    /* '<S365>/Sum1' */
  real_T s384_Gain;                    /* '<S384>/Gain' */
  real_T s545_Sum1;                    /* '<S545>/Sum1' */
  real_T s565_Merge;                   /* '<S565>/Merge' */
  real_T s128_SparkEnergy;             /* '<S128>/Merge5' */
  real_T s128_SparkAdv;                /* '<S128>/Merge4' */
  real_T s544_Sum1;                    /* '<S544>/Sum1' */
  real_T s128_EGR;                     /* '<S128>/Merge3' */
  real_T s557_Merge;                   /* '<S557>/Merge' */
  real_T s373_Switch;                  /* '<S373>/Switch' */
  real_T s128_Throttle;                /* '<S128>/Merge8' */
  real_T s701_ETC;                     /* '<S701>/Saturation' */
  real_T s128_SOI;                     /* '<S128>/Merge1' */
  real_T s128_FPC[8];                  /* '<S128>/Merge2' */
  real_T s79_Sum[8];                   /* '<S79>/Sum' */
  real_T s71_constreftoatm;            /* '<S71>/const ref to atm' */
  real_T s128_FuelMult;                /* '<S128>/Merge6' */
  real_T s22_Sum2;                     /* '<S22>/Sum2' */
  real_T s22_Sum1;                     /* '<S22>/Sum1' */
  real_T s22_MinMax[8];                /* '<S22>/MinMax' */
  real_T s128_MakeUpEOI;               /* '<S128>/Merge10' */
  real_T s329_Switch1;                 /* '<S329>/Switch1' */
  real_T s369_Sum;                     /* '<S369>/Sum' */
  real_T s349_Sum3;                    /* '<S349>/Sum3' */
  real_T s546_Sum1;                    /* '<S546>/Sum1' */
  real_T s578_Merge;                   /* '<S578>/Merge' */
  real_T s594_Merge;                   /* '<S594>/Merge' */
  real_T s348_Sum3;                    /* '<S348>/Sum3' */
  real_T s388_ReadCANMessage2_o2;      /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o3;      /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o4;      /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o5;      /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o6;      /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o7;      /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o8;      /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o9;      /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o10;     /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o11;     /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o12;     /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o13;     /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o14;     /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o15;     /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage2_o16;     /* '<S388>/Read CAN Message2' */
  real_T s388_ReadCANMessage3_o2;      /* '<S388>/Read CAN Message3' */
  real_T s388_ReadCANMessage3_o3;      /* '<S388>/Read CAN Message3' */
  real_T s388_ReadCANMessage3_o4;      /* '<S388>/Read CAN Message3' */
  real_T s551_Sum1;                    /* '<S551>/Sum1' */
  real_T s612_Merge;                   /* '<S612>/Merge' */
  real_T s397_UnitDelay;               /* '<S397>/Unit Delay' */
  real_T s786_Sum;                     /* '<S786>/Sum' */
  real_T s787_Sum;                     /* '<S787>/Sum' */
  real_T s789_CrankCounter;            /* '<S789>/CrankCounter' */
  real_T s719_faults;                  /* '<S709>/MATLAB Function' */
  real_T s642_motohawk_interpolation_1d;/* '<S642>/motohawk_interpolation_1d' */
  real_T s635_Merge;                   /* '<S635>/Merge' */
  real_T s641_Merge;                   /* '<S641>/Merge' */
  real_T s651_motohawk_interpolation_1d;/* '<S651>/motohawk_interpolation_1d' */
  real_T s636_Merge;                   /* '<S636>/Merge' */
  real_T s650_Merge;                   /* '<S650>/Merge' */
  real_T s409_hp;                      /* '<S388>/Power Estimator' */
  real_T s409_kw;                      /* '<S388>/Power Estimator' */
  real_T s266_Defaultifnoflow[8];      /* '<S266>/Default (if no flow)' */
  real_T s277_Sum1[8];                 /* '<S277>/Sum1' */
  real_T s276_chargemass[8];           /* '<S276>/charge mass' */
  real_T s361_Product;                 /* '<S361>/Product' */
  real_T s360_Product;                 /* '<S360>/Product' */
  real_T s342_Merge;                   /* '<S342>/Merge' */
  real_T s358_Sum2;                    /* '<S358>/Sum2' */
  real_T s335_Switch1;                 /* '<S335>/Switch1' */
  real_T s306_Product;                 /* '<S306>/Product' */
  real_T s302_Timer;                   /* '<S297>/Baro Stall State Delay' */
  real_T s263_UnitDelay;               /* '<S263>/Unit Delay' */
  real_T s264_UnitDelay;               /* '<S264>/Unit Delay' */
  real_T s147_Product;                 /* '<S147>/Product' */
  real_T s147_Sum;                     /* '<S147>/Sum' */
  real_T s137_MultiportSwitch;         /* '<S137>/Multiport Switch' */
  real_T s139_Product;                 /* '<S139>/Product' */
  real_T s257_Add;                     /* '<S257>/Add' */
  real_T s254_Product;                 /* '<S254>/Product' */
  real_T s144_ApplyOffsetstoBaseSparkAdvance1;/* '<S144>/Apply Offsets to Base Spark Advance1' */
  real_T s260_MinMax1;                 /* '<S260>/MinMax1' */
  real_T s255_Switch;                  /* '<S255>/Switch' */
  real_T s144_motohawk_interpolation_2d1;/* '<S144>/motohawk_interpolation_2d1' */
  real_T s141_Sum;                     /* '<S141>/Sum' */
  real_T s184_Merge;                   /* '<S184>/Merge' */
  real_T s184_Merge1;                  /* '<S184>/Merge1' */
  real_T s183_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S183>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s193_Sum2;                    /* '<S193>/Sum2' */
  real_T s193_Product2;                /* '<S193>/Product2' */
  real_T s194_Product;                 /* '<S194>/Product' */
  real_T s195_Switch1;                 /* '<S195>/Switch1' */
  real_T s185_Switch;                  /* '<S185>/Switch' */
  real_T s181_Sum;                     /* '<S181>/Sum' */
  real_T s215_MinMax1;                 /* '<S215>/MinMax1' */
  real_T s205_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S205>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s231_Sum2;                    /* '<S231>/Sum2' */
  real_T s231_Product2;                /* '<S231>/Product2' */
  real_T s232_Product;                 /* '<S232>/Product' */
  real_T s233_Switch1;                 /* '<S233>/Switch1' */
  real_T s142_MinGovAirPID;            /* '<S142>/Product1' */
  real_T s226_Sum1;                    /* '<S226>/Sum1' */
  real_T s226_Product;                 /* '<S226>/Product' */
  real_T s227_Product;                 /* '<S227>/Product' */
  real_T s142_IdleSpk;                 /* '<S142>/Product' */
  real_T s223_Switch;                  /* '<S223>/Switch' */
  real_T s208_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S208>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s143_O2FuelMult;              /* '<S143>/Switch' */
  real_T s238_Switch;                  /* '<S238>/Switch' */
  real_T s245_Sum2;                    /* '<S245>/Sum2' */
  real_T s245_Product2;                /* '<S245>/Product2' */
  real_T s247_Switch1;                 /* '<S247>/Switch1' */
  real_T s246_Product;                 /* '<S246>/Product' */
  real_T s243_Switch3;                 /* '<S243>/Switch3' */
  real_T s243_Switch1;                 /* '<S243>/Switch1' */
  real_T s243_Switch4;                 /* '<S243>/Switch4' */
  real_T s165_Add;                     /* '<S165>/Add' */
  real_T s163_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S163>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s160_PerCylinderMassFlowRate; /* '<S160>/Per-Cylinder Mass Flow Rate' */
  real_T s160_ApplyMultipliersforO2KnockControlandEnrichment1;/* '<S160>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s180_MinMax1;                 /* '<S180>/MinMax1' */
  real_T s171_Sum1;                    /* '<S171>/Sum1' */
  real_T s166_Sum;                     /* '<S166>/Sum' */
  real_T s166_Product1;                /* '<S166>/Product1' */
  real_T s169_motohawk_interpolation_1d;/* '<S169>/motohawk_interpolation_1d' */
  real_T s138_DesEquivRatio;           /* '<S138>/Product1' */
  real_T s135_APP;                     /* '<S127>/Remy Control' */
  real_T s135_remyEn;                  /* '<S127>/Remy Control' */
  real_T s135_maxRPM;                  /* '<S127>/Remy Control' */
  real_T s135_motorTQ;                 /* '<S127>/Remy Control' */
  real_T s135_generatingTQ;            /* '<S127>/Remy Control' */
  real_T s122_Sum;                     /* '<S122>/Sum' */
  real_T s24_Sum;                      /* '<S24>/Sum' */
  real_T s107_UnitDelay2;              /* '<S107>/Unit Delay2' */
  real_T s117_Switch1;                 /* '<S117>/Switch1' */
  real_T s70_Switch;                   /* '<S70>/Switch' */
  real_T s37_MultiportSwitch;          /* '<S37>/Multiport Switch' */
  real_T s49_Product;                  /* '<S49>/Product' */
  real_T s48_Switch2;                  /* '<S48>/Switch2' */
  real_T s53_Product;                  /* '<S53>/Product' */
  real_T s45_Sum2;                     /* '<S45>/Sum2' */
  real_T s54_Product;                  /* '<S54>/Product' */
  real_T s45_Product2;                 /* '<S45>/Product2' */
  real_T s55_Switch1;                  /* '<S55>/Switch1' */
  real_T s58_MinMax1;                  /* '<S58>/MinMax1' */
  real_T s21_Switch;                   /* '<S21>/Switch' */
  real_T s59_In1;                      /* '<S59>/In1' */
  real_T s33_TestTime;                 /* '<S21>/ETC Test  Manager' */
  real_T s28_enout;                    /* '<S27>/Chart' */
  real_T s861_Switch;                  /* '<S861>/Switch' */
  int32_T s699_DataTypeConversion;     /* '<S699>/Data Type Conversion' */
  int32_T s801_Merge;                  /* '<S801>/Merge' */
  uint32_T s388_ReadCANMessage1_o1;    /* '<S388>/Read CAN Message1' */
  uint32_T s388_ReadCANMessage_o1;     /* '<S388>/Read CAN Message' */
  uint32_T s387_AgeCount;              /* '<S387>/Read CAN Message' */
  uint32_T s388_ReadCANMessage2_o1;    /* '<S388>/Read CAN Message2' */
  uint32_T s388_ReadCANMessage3_o1;    /* '<S388>/Read CAN Message3' */
  uint32_T s410_Merge;                 /* '<S410>/Merge' */
  uint32_T s419_Merge;                 /* '<S419>/Merge' */
  uint32_T s437_Merge;                 /* '<S437>/Merge' */
  uint32_T s441_Merge;                 /* '<S441>/Merge' */
  uint32_T s542_Sum;                   /* '<S542>/Sum' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s701_motohawk_pwm1;          /* '<S701>/motohawk_pwm1' */
  uint16_T s384_motohawk_ain1;         /* '<S384>/motohawk_ain1' */
  uint16_T s384_motohawk_ain14;        /* '<S384>/motohawk_ain14' */
  uint16_T s385_motohawk_ain3;         /* '<S385>/motohawk_ain3' */
  uint16_T s384_motohawk_ain_read1;    /* '<S384>/motohawk_ain_read1' */
  uint16_T s384_motohawk_ain4;         /* '<S384>/motohawk_ain4' */
  uint16_T s384_motohawk_ain2;         /* '<S384>/motohawk_ain2' */
  uint16_T s384_motohawk_ain3;         /* '<S384>/motohawk_ain3' */
  uint16_T s698_SparkSequence_o3[8];   /* '<S698>/Spark Sequence' */
  uint16_T s698_SparkSequence_o4[8];   /* '<S698>/Spark Sequence' */
  uint16_T s625_motohawk_ain;          /* '<S625>/motohawk_ain' */
  uint16_T s625_motohawk_ain1;         /* '<S625>/motohawk_ain1' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  index_T s340_motohawk_prelookup;     /* '<S340>/motohawk_prelookup' */
  index_T s339_motohawk_prelookup1;    /* '<S339>/motohawk_prelookup1' */
  index_T s339_Indexes;                /* '<S339>/motohawk_prelookup5' */
  index_T s337_motohawk_prelookup;     /* '<S337>/motohawk_prelookup' */
  index_T s338_motohawk_prelookup;     /* '<S338>/motohawk_prelookup' */
  index_T s378_motohawk_prelookup1;    /* '<S378>/motohawk_prelookup1' */
  index_T s378_motohawk_prelookup4;    /* '<S378>/motohawk_prelookup4' */
  index_T s301_RPMAccel17Idx;          /* '<S301>/motohawk_prelookup' */
  int8_T s23_Merge1[32];               /* '<S23>/Merge1' */
  int8_T s789_DataTypeConversion;      /* '<S789>/Data Type Conversion' */
  int8_T s182_DataTypeConversion;      /* '<S182>/Data Type Conversion' */
  int8_T s182_DataTypeConversion1;     /* '<S182>/Data Type Conversion1' */
  int8_T s107_MultiportSwitch[8];      /* '<S107>/Multiport Switch' */
  int8_T s117_CutArray[8];             /* '<S117>/CutArray' */
  int8_T s33_DC_Override;              /* '<S21>/ETC Test  Manager' */
  int8_T s33_SetpointMode;             /* '<S21>/ETC Test  Manager' */
  uint8_T s347_UnitDelay;              /* '<S347>/Unit Delay' */
  uint8_T s297_motohawk_data_read1;    /* '<S297>/motohawk_data_read1' */
  uint8_T s702_InjectorSequence_o1[8]; /* '<S702>/Injector Sequence' */
  uint8_T s23_DataTypeConversion5;     /* '<S23>/Data Type Conversion5' */
  uint8_T s383_motohawk_encoder_fault; /* '<S383>/motohawk_encoder_fault' */
  uint8_T s383_motohawk_encoder_state; /* '<S383>/motohawk_encoder_state' */
  uint8_T s791_Switch1;                /* '<S791>/Switch1' */
  uint8_T s367_Switch;                 /* '<S367>/Switch' */
  uint8_T s366_State;                  /* '<S347>/Engine State Machine' */
  uint8_T s217_IdleState;              /* '<S202>/IdleStateMachine' */
  uint8_T s107_UnitDelay1;             /* '<S107>/Unit Delay1' */
  uint8_T s117_Switch;                 /* '<S117>/Switch' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s347_Stall;                /* '<S347>/Relational Operator1' */
  boolean_T s347_Crank;                /* '<S347>/Relational Operator4' */
  boolean_T s347_Run;                  /* '<S347>/Logical Operator1' */
  boolean_T s707_Compare;              /* '<S707>/Compare' */
  boolean_T s708_Compare;              /* '<S708>/Compare' */
  boolean_T s705_RelationalOperator;   /* '<S705>/Relational Operator' */
  boolean_T s709_motohawk_fault_action1;/* '<S709>/motohawk_fault_action1' */
  boolean_T s709_motohawk_fault_action;/* '<S709>/motohawk_fault_action' */
  boolean_T s387_GensetEnable_g;       /* '<S387>/Read CAN Message' */
  boolean_T s317_RelationalOperator4;  /* '<S317>/Relational Operator4' */
  boolean_T s318_RelationalOperator4;  /* '<S318>/Relational Operator4' */
  boolean_T s314_LogicalOperator;      /* '<S314>/Logical Operator' */
  boolean_T s23_LogicalOperator2[8];   /* '<S23>/Logical Operator2' */
  boolean_T s27_Enable;                /* '<S27>/Logical Operator2' */
  boolean_T s800_Merge;                /* '<S800>/Merge' */
  boolean_T s128_FUELP;                /* '<S128>/Merge7' */
  boolean_T s382_EStop;                /* '<S382>/motohawk_data_read' */
  boolean_T s806_LogicalOperator;      /* '<S806>/Logical Operator' */
  boolean_T s820_Merge[8];             /* '<S820>/Merge' */
  boolean_T s128_OILP;                 /* '<S128>/Merge9' */
  boolean_T s837_LogicalOperator;      /* '<S837>/Logical Operator' */
  boolean_T s128_O2Heater;             /* '<S128>/Merge11' */
  boolean_T s841_LogicalOperator;      /* '<S841>/Logical Operator' */
  boolean_T s698_LogicalOperator1[8];  /* '<S698>/Logical Operator1' */
  boolean_T s789_RelationalOperator1;  /* '<S789>/Relational Operator1' */
  boolean_T s342_RelationalOperator3;  /* '<S342>/Relational Operator3' */
  boolean_T s302_Enable;               /* '<S297>/Baro Stall State Delay' */
  boolean_T s150_RelationalOperator;   /* '<S150>/Relational Operator' */
  boolean_T s150_RelationalOperator1;  /* '<S150>/Relational Operator1' */
  boolean_T s150_RelationalOperator2;  /* '<S150>/Relational Operator2' */
  boolean_T s150_RelationalOperator3;  /* '<S150>/Relational Operator3' */
  boolean_T s150_LogicalOperator;      /* '<S150>/Logical Operator' */
  boolean_T s182_MultiportSwitch;      /* '<S182>/Multiport Switch' */
  boolean_T s216_RelationalOperator;   /* '<S216>/Relational Operator' */
  boolean_T s202_RelationalOperator;   /* '<S202>/Relational Operator' */
  boolean_T s202_RelationalOperator3;  /* '<S202>/Relational Operator3' */
  boolean_T s202_RelationalOperator1;  /* '<S202>/Relational Operator1' */
  boolean_T s202_LogicalOperator;      /* '<S202>/Logical Operator' */
  boolean_T s202_RelationalOperator5;  /* '<S202>/Relational Operator5' */
  boolean_T s218_RelOp;                /* '<S218>/RelOp' */
  boolean_T s142_HitCrossing1;         /* '<S142>/Hit  Crossing1' */
  boolean_T s142_LogicalOperator;      /* '<S142>/Logical Operator' */
  boolean_T s203_RelationalOperator1;  /* '<S203>/Relational Operator1' */
  boolean_T s199_LogicalOperator1;     /* '<S199>/Logical Operator1' */
  boolean_T s236_LogicalOperator;      /* '<S236>/Logical Operator' */
  boolean_T s236_LogicalOperator3;     /* '<S236>/Logical Operator3' */
  boolean_T s236_RelationalOperator5;  /* '<S236>/Relational Operator5' */
  boolean_T s236_LogicalOperator2;     /* '<S236>/Logical Operator2' */
  boolean_T s162_LogicalOperator2;     /* '<S162>/Logical Operator2' */
  boolean_T s178_LogicalOperator;      /* '<S178>/Logical Operator' */
  boolean_T s25_OnlyEnableSparkwhenEnergyisAboveZero;/* '<S25>/Only Enable Spark when Energy is Above Zero' */
  boolean_T s106_DataTypeConversion1[8];/* '<S106>/Data Type Conversion1' */
  boolean_T s105_DataTypeConversion[8];/* '<S105>/Data Type Conversion' */
  boolean_T s38_LogicalOperator3;      /* '<S38>/Logical Operator3' */
  boolean_T s21_RelationalOperator5;   /* '<S21>/Relational Operator5' */
  boolean_T s21_RelationalOperator2;   /* '<S21>/Relational Operator2' */
  boolean_T s21_RelationalOperator3;   /* '<S21>/Relational Operator3' */
  boolean_T s34_LogicalOperator;       /* '<S34>/Logical Operator' */
  boolean_T s42_RelationalOperator;    /* '<S42>/Relational Operator' */
  boolean_T s33_TestComplete;          /* '<S21>/ETC Test  Manager' */
  boolean_T s845_RelationalOperator;   /* '<S845>/Relational Operator' */
  boolean_T s845_motohawk_data_read;   /* '<S845>/motohawk_data_read' */
  boolean_T s849_MPRDState;            /* '<S845>/ECUP Latch' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02
    s325_MultiplyandDivideavoidingdivdebyzero1;/* '<S325>/Multiply and Divide, avoiding divde by zero1' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02
    s167_MultiplyandDivideavoidingdivdebyzero;/* '<S167>/Multiply and Divide, avoiding divde by zero' */
} BlockIO_BaseEngineController_A02;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s550_UnitDelay1_DSTATE;       /* '<S550>/Unit Delay1' */
  real_T s605_UnitDelay_DSTATE;        /* '<S605>/Unit Delay' */
  real_T s543_UnitDelay_DSTATE;        /* '<S543>/Unit Delay' */
  real_T s447_UnitDelay_DSTATE;        /* '<S447>/Unit Delay' */
  real_T s552_UnitDelay1_DSTATE;       /* '<S552>/Unit Delay1' */
  real_T s621_UnitDelay_DSTATE;        /* '<S621>/Unit Delay' */
  real_T s669_UnitDelay_DSTATE;        /* '<S669>/Unit Delay' */
  real_T s662_UnitDelay1_DSTATE;       /* '<S662>/Unit Delay1' */
  real_T s686_UnitDelay_DSTATE;        /* '<S686>/Unit Delay' */
  real_T s679_UnitDelay1_DSTATE;       /* '<S679>/Unit Delay1' */
  real_T s349_UnitDelay_DSTATE;        /* '<S349>/Unit Delay' */
  real_T s624_UnitDelay_DSTATE;        /* '<S624>/Unit Delay' */
  real_T s632_UnitDelay_DSTATE;        /* '<S632>/Unit Delay' */
  real_T s548_UnitDelay1_DSTATE;       /* '<S548>/Unit Delay1' */
  real_T s305_UnitDelay_DSTATE;        /* '<S305>/Unit Delay' */
  real_T s547_UnitDelay1_DSTATE;       /* '<S547>/Unit Delay1' */
  real_T s587_UnitDelay_DSTATE;        /* '<S587>/Unit Delay' */
  real_T s522_UnitDelay_DSTATE;        /* '<S522>/Unit Delay' */
  real_T s530_UnitDelay_DSTATE;        /* '<S530>/Unit Delay' */
  real_T s317_UnitDelay2_DSTATE;       /* '<S317>/Unit Delay2' */
  real_T s320_UnitDelay_DSTATE;        /* '<S320>/Unit Delay' */
  real_T s318_UnitDelay2_DSTATE;       /* '<S318>/Unit Delay2' */
  real_T s323_UnitDelay_DSTATE;        /* '<S323>/Unit Delay' */
  real_T s316_UnitDelay_DSTATE;        /* '<S316>/Unit Delay' */
  real_T s363_UnitDelay_DSTATE;        /* '<S363>/Unit Delay' */
  real_T s365_UnitDelay_DSTATE;        /* '<S365>/Unit Delay' */
  real_T s570_UnitDelay_DSTATE;        /* '<S570>/Unit Delay' */
  real_T s545_UnitDelay1_DSTATE;       /* '<S545>/Unit Delay1' */
  real_T s569_UnitDelay_DSTATE;        /* '<S569>/Unit Delay' */
  real_T s567_UnitDelay_DSTATE;        /* '<S567>/Unit Delay' */
  real_T s567_UnitDelay1_DSTATE;       /* '<S567>/Unit Delay1' */
  real_T s567_UnitDelay2_DSTATE;       /* '<S567>/Unit Delay2' */
  real_T s544_UnitDelay1_DSTATE;       /* '<S544>/Unit Delay1' */
  real_T s558_UnitDelay_DSTATE;        /* '<S558>/Unit Delay' */
  real_T s81_UnitDelay_DSTATE;         /* '<S81>/Unit Delay' */
  real_T s80_UnitDelay_DSTATE;         /* '<S80>/Unit Delay' */
  real_T s78_UnitDelay_DSTATE;         /* '<S78>/Unit Delay' */
  real_T s77_UnitDelay_DSTATE;         /* '<S77>/Unit Delay' */
  real_T s76_UnitDelay_DSTATE;         /* '<S76>/Unit Delay' */
  real_T s75_UnitDelay_DSTATE;         /* '<S75>/Unit Delay' */
  real_T s74_UnitDelay_DSTATE;         /* '<S74>/Unit Delay' */
  real_T s73_UnitDelay_DSTATE;         /* '<S73>/Unit Delay' */
  real_T s79_UnitDelay_DSTATE[8];      /* '<S79>/Unit Delay' */
  real_T s329_UnitDelay_DSTATE;        /* '<S329>/Unit Delay' */
  real_T s349_UnitDelay1_DSTATE;       /* '<S349>/Unit Delay1' */
  real_T s546_UnitDelay1_DSTATE;       /* '<S546>/Unit Delay1' */
  real_T s579_UnitDelay_DSTATE;        /* '<S579>/Unit Delay' */
  real_T s595_UnitDelay_DSTATE;        /* '<S595>/Unit Delay' */
  real_T s551_UnitDelay1_DSTATE;       /* '<S551>/Unit Delay1' */
  real_T s613_UnitDelay_DSTATE;        /* '<S613>/Unit Delay' */
  real_T s317_UnitDelay1_DSTATE;       /* '<S317>/Unit Delay1' */
  real_T s317_UnitDelay3_DSTATE;       /* '<S317>/Unit Delay3' */
  real_T s317_UnitDelay4_DSTATE;       /* '<S317>/Unit Delay4' */
  real_T s318_UnitDelay1_DSTATE;       /* '<S318>/Unit Delay1' */
  real_T s318_UnitDelay3_DSTATE;       /* '<S318>/Unit Delay3' */
  real_T s318_UnitDelay4_DSTATE;       /* '<S318>/Unit Delay4' */
  real_T s397_UnitDelay_DSTATE;        /* '<S397>/Unit Delay' */
  real_T s666_UnitDelay1_DSTATE;       /* '<S666>/Unit Delay1' */
  real_T s666_UnitDelay_DSTATE;        /* '<S666>/Unit Delay' */
  real_T s666_UnitDelay3_DSTATE;       /* '<S666>/Unit Delay3' */
  real_T s666_UnitDelay4_DSTATE;       /* '<S666>/Unit Delay4' */
  real_T s683_UnitDelay1_DSTATE;       /* '<S683>/Unit Delay1' */
  real_T s683_UnitDelay_DSTATE;        /* '<S683>/Unit Delay' */
  real_T s683_UnitDelay3_DSTATE;       /* '<S683>/Unit Delay3' */
  real_T s683_UnitDelay4_DSTATE;       /* '<S683>/Unit Delay4' */
  real_T s786_UnitDelay_DSTATE;        /* '<S786>/Unit Delay' */
  real_T s787_UnitDelay_DSTATE;        /* '<S787>/Unit Delay' */
  real_T s789_CrankCounter_DSTATE;     /* '<S789>/CrankCounter' */
  real_T s635_UnitDelay_DSTATE;        /* '<S635>/Unit Delay' */
  real_T s643_UnitDelay_DSTATE;        /* '<S643>/Unit Delay' */
  real_T s636_UnitDelay_DSTATE;        /* '<S636>/Unit Delay' */
  real_T s652_UnitDelay_DSTATE;        /* '<S652>/Unit Delay' */
  real_T s277_UnitDelay_DSTATE[8];     /* '<S277>/Unit Delay' */
  real_T s361_UnitDelay1_DSTATE;       /* '<S361>/Unit Delay1' */
  real_T s360_UnitDelay1_DSTATE;       /* '<S360>/Unit Delay1' */
  real_T s342_UnitDelay2_DSTATE;       /* '<S342>/Unit Delay2' */
  real_T s355_UnitDelay_DSTATE;        /* '<S355>/Unit Delay' */
  real_T s358_UnitDelay_DSTATE;        /* '<S358>/Unit Delay' */
  real_T s342_UnitDelay1_DSTATE;       /* '<S342>/Unit Delay1' */
  real_T s342_UnitDelay3_DSTATE;       /* '<S342>/Unit Delay3' */
  real_T s342_UnitDelay4_DSTATE;       /* '<S342>/Unit Delay4' */
  real_T s335_UnitDelay_DSTATE;        /* '<S335>/Unit Delay' */
  real_T s306_UnitDelay1_DSTATE;       /* '<S306>/Unit Delay1' */
  real_T s263_UnitDelay_DSTATE;        /* '<S263>/Unit Delay' */
  real_T s264_UnitDelay_DSTATE;        /* '<S264>/Unit Delay' */
  real_T s151_UnitDelay_DSTATE;        /* '<S151>/Unit Delay' */
  real_T s150_UnitDelay_DSTATE;        /* '<S150>/Unit Delay' */
  real_T s150_UnitDelay1_DSTATE;       /* '<S150>/Unit Delay1' */
  real_T s255_UnitDelay_DSTATE;        /* '<S255>/Unit Delay' */
  real_T s183_UnitDelay_DSTATE;        /* '<S183>/Unit Delay' */
  real_T s194_UnitDelay_DSTATE;        /* '<S194>/Unit Delay' */
  real_T s195_UnitDelay_DSTATE;        /* '<S195>/Unit Delay' */
  real_T s220_UnitDelay_DSTATE;        /* '<S220>/Unit Delay' */
  real_T s222_UnitDelay_DSTATE;        /* '<S222>/Unit Delay' */
  real_T s142_UnitDelay3_DSTATE;       /* '<S142>/Unit Delay3' */
  real_T s142_UnitDelay1_DSTATE;       /* '<S142>/Unit Delay1' */
  real_T s201_state_DSTATE;            /* '<S201>/state' */
  real_T s142_UnitDelay2_DSTATE;       /* '<S142>/Unit Delay2' */
  real_T s205_UnitDelay_DSTATE;        /* '<S205>/Unit Delay' */
  real_T s232_UnitDelay_DSTATE;        /* '<S232>/Unit Delay' */
  real_T s233_UnitDelay_DSTATE;        /* '<S233>/Unit Delay' */
  real_T s227_UnitDelay_DSTATE;        /* '<S227>/Unit Delay' */
  real_T s208_UnitDelay_DSTATE;        /* '<S208>/Unit Delay' */
  real_T s247_UnitDelay_DSTATE;        /* '<S247>/Unit Delay' */
  real_T s246_UnitDelay_DSTATE;        /* '<S246>/Unit Delay' */
  real_T s243_UnitDelay1_DSTATE;       /* '<S243>/Unit Delay1' */
  real_T s243_UnitDelay_DSTATE;        /* '<S243>/Unit Delay' */
  real_T s243_UnitDelay2_DSTATE;       /* '<S243>/Unit Delay2' */
  real_T s171_UnitDelay_DSTATE;        /* '<S171>/Unit Delay' */
  real_T s122_UnitDelay_DSTATE;        /* '<S122>/Unit Delay' */
  real_T s107_UnitDelay2_DSTATE;       /* '<S107>/Unit Delay2' */
  real_T s21_UnitDelay_DSTATE;         /* '<S21>/Unit Delay' */
  real_T s62_UnitDelay_DSTATE;         /* '<S62>/Unit Delay' */
  real_T s53_UnitDelay_DSTATE;         /* '<S53>/Unit Delay' */
  real_T s49_UnitDelay_DSTATE;         /* '<S49>/Unit Delay' */
  real_T s51_UnitDelay_DSTATE;         /* '<S51>/Unit Delay' */
  real_T s54_UnitDelay_DSTATE;         /* '<S54>/Unit Delay' */
  real_T s55_UnitDelay_DSTATE;         /* '<S55>/Unit Delay' */
  real_T s851_UnitDelay_DSTATE;        /* '<S851>/Unit Delay' */
  real_T s851_UnitDelay1_DSTATE;       /* '<S851>/Unit Delay1' */
  real_T s302_TOld;                    /* '<S297>/Baro Stall State Delay' */
  real_T s135_count;                   /* '<S127>/Remy Control' */
  real_T s33_TimerOld;                 /* '<S21>/ETC Test  Manager' */
  uint32_T s379_UnitDelay_DSTATE;      /* '<S379>/Unit Delay' */
  uint32_T s542_UnitDelay_DSTATE;      /* '<S542>/Unit Delay' */
  uint32_T s600_motohawk_delta_time_DWORK1;/* '<S600>/motohawk_delta_time' */
  uint32_T s536_motohawk_delta_time_DWORK1;/* '<S536>/motohawk_delta_time' */
  uint32_T s408_motohawk_delta_time_DWORK1;/* '<S408>/motohawk_delta_time' */
  uint32_T s616_motohawk_delta_time_DWORK1;/* '<S616>/motohawk_delta_time' */
  uint32_T s661_motohawk_delta_time_DWORK1;/* '<S661>/motohawk_delta_time' */
  uint32_T s678_motohawk_delta_time_DWORK1;/* '<S678>/motohawk_delta_time' */
  uint32_T s626_motohawk_delta_time_DWORK1;/* '<S626>/motohawk_delta_time' */
  uint32_T s371_motohawk_delta_time_DWORK1;/* '<S371>/motohawk_delta_time' */
  uint32_T s297_motohawk_delta_time_DWORK1;/* '<S297>/motohawk_delta_time' */
  uint32_T s582_motohawk_delta_time_DWORK1;/* '<S582>/motohawk_delta_time' */
  uint32_T s524_motohawk_delta_time_DWORK1;/* '<S524>/motohawk_delta_time' */
  uint32_T s316_motohawk_delta_time1_DWORK1;/* '<S316>/motohawk_delta_time1' */
  uint32_T s363_motohawk_delta_time_DWORK1;/* '<S363>/motohawk_delta_time' */
  uint32_T s570_motohawk_delta_time_DWORK1;/* '<S570>/motohawk_delta_time' */
  uint32_T s566_motohawk_delta_time_DWORK1;/* '<S566>/motohawk_delta_time' */
  uint32_T s29_motohawk_delta_time_DWORK1;/* '<S29>/motohawk_delta_time' */
  uint32_T s553_motohawk_delta_time_DWORK1;/* '<S553>/motohawk_delta_time' */
  uint32_T s810_motohawk_delta_time_DWORK1;/* '<S810>/motohawk_delta_time' */
  uint32_T s373_motohawk_delta_time_DWORK1;/* '<S373>/motohawk_delta_time' */
  uint32_T s30_motohawk_delta_time_DWORK1;/* '<S30>/motohawk_delta_time' */
  uint32_T s369_motohawk_delta_time_DWORK1;/* '<S369>/motohawk_delta_time' */
  uint32_T s574_motohawk_delta_time_DWORK1;/* '<S574>/motohawk_delta_time' */
  uint32_T s590_motohawk_delta_time_DWORK1;/* '<S590>/motohawk_delta_time' */
  uint32_T s608_motohawk_delta_time_DWORK1;/* '<S608>/motohawk_delta_time' */
  uint32_T s329_motohawk_delta_time_DWORK1;/* '<S329>/motohawk_delta_time' */
  uint32_T s637_motohawk_delta_time_DWORK1;/* '<S637>/motohawk_delta_time' */
  uint32_T s646_motohawk_delta_time_DWORK1;/* '<S646>/motohawk_delta_time' */
  uint32_T s282_motohawk_delta_time_DWORK1;/* '<S282>/motohawk_delta_time' */
  uint32_T s283_motohawk_delta_time_DWORK1;/* '<S283>/motohawk_delta_time' */
  uint32_T s284_motohawk_delta_time_DWORK1;/* '<S284>/motohawk_delta_time' */
  uint32_T s296_motohawk_delta_time_DWORK1;/* '<S296>/motohawk_delta_time' */
  uint32_T s295_motohawk_delta_time_DWORK1;/* '<S295>/motohawk_delta_time' */
  uint32_T s275_motohawk_delta_time_DWORK1;/* '<S275>/motohawk_delta_time' */
  uint32_T s279_motohawk_delta_time_DWORK1;/* '<S279>/motohawk_delta_time' */
  uint32_T s358_motohawk_delta_time_DWORK1;/* '<S358>/motohawk_delta_time' */
  uint32_T s342_motohawk_delta_time_DWORK1;/* '<S342>/motohawk_delta_time' */
  uint32_T s335_motohawk_delta_time1_DWORK1;/* '<S335>/motohawk_delta_time1' */
  uint32_T s149_motohawk_delta_time_DWORK1;/* '<S149>/motohawk_delta_time' */
  uint32_T s152_motohawk_delta_time_DWORK1;/* '<S152>/motohawk_delta_time' */
  uint32_T s153_motohawk_delta_time_DWORK1;/* '<S153>/motohawk_delta_time' */
  uint32_T s183_motohawk_delta_time_DWORK1;/* '<S183>/motohawk_delta_time' */
  uint32_T s195_motohawk_delta_time_DWORK1;/* '<S195>/motohawk_delta_time' */
  uint32_T s201_motohawk_delta_time_DWORK1;/* '<S201>/motohawk_delta_time' */
  uint32_T s205_motohawk_delta_time_DWORK1;/* '<S205>/motohawk_delta_time' */
  uint32_T s233_motohawk_delta_time_DWORK1;/* '<S233>/motohawk_delta_time' */
  uint32_T s208_motohawk_delta_time_DWORK1;/* '<S208>/motohawk_delta_time' */
  uint32_T s247_motohawk_delta_time_DWORK1;/* '<S247>/motohawk_delta_time' */
  uint32_T s251_motohawk_delta_time_DWORK1;/* '<S251>/motohawk_delta_time' */
  uint32_T s253_motohawk_delta_time_DWORK1;/* '<S253>/motohawk_delta_time' */
  uint32_T s252_motohawk_delta_time_DWORK1;/* '<S252>/motohawk_delta_time' */
  uint32_T s170_motohawk_delta_time_DWORK1;/* '<S170>/motohawk_delta_time' */
  uint32_T s70_motohawk_delta_time_DWORK1;/* '<S70>/motohawk_delta_time' */
  uint32_T s62_motohawk_delta_time_DWORK1;/* '<S62>/motohawk_delta_time' */
  uint32_T s50_motohawk_delta_time_DWORK1;/* '<S50>/motohawk_delta_time' */
  uint32_T s55_motohawk_delta_time_DWORK1;/* '<S55>/motohawk_delta_time' */
  uint32_T s861_motohawk_delta_time_DWORK1;/* '<S861>/motohawk_delta_time' */
  int_T s142_HitCrossing1_MODE;        /* '<S142>/Hit  Crossing1' */
  uint16_T s702_InjectorSequence_DWORK2;/* '<S702>/Injector Sequence' */
  int8_T s344_UnitDelay_DSTATE;        /* '<S344>/Unit Delay' */
  int8_T s343_UnitDelay_DSTATE;        /* '<S343>/Unit Delay' */
  int8_T s303_UnitDelay_DSTATE;        /* '<S303>/Unit Delay' */
  uint8_T s347_UnitDelay_DSTATE;       /* '<S347>/Unit Delay' */
  uint8_T s367_CrankCounter_DSTATE;    /* '<S367>/CrankCounter' */
  uint8_T s107_UnitDelay1_DSTATE;      /* '<S107>/Unit Delay1' */
  boolean_T s288_UnitDelay_DSTATE;     /* '<S288>/Unit Delay' */
  boolean_T s289_UnitDelay_DSTATE;     /* '<S289>/Unit Delay' */
  boolean_T s290_UnitDelay_DSTATE;     /* '<S290>/Unit Delay' */
  boolean_T s258_InitialConditionisTrue_DSTATE;/* '<S258>/Initial Condition is True' */
  boolean_T s141_UnitDelay_DSTATE;     /* '<S141>/Unit Delay' */
  boolean_T s198_UnitDelay_DSTATE;     /* '<S198>/Unit Delay' */
  boolean_T s250_UnitDelay_DSTATE;     /* '<S250>/Unit Delay' */
  boolean_T s52_UnitDelay_DSTATE;      /* '<S52>/Unit Delay' */
  boolean_T s850_UnitDelay8_DSTATE;    /* '<S850>/Unit Delay8' */
  boolean_T s850_UnitDelay6_DSTATE;    /* '<S850>/Unit Delay6' */
  boolean_T s850_UnitDelay7_DSTATE;    /* '<S850>/Unit Delay7' */
  boolean_T s846_UnitDelay_DSTATE;     /* '<S846>/Unit Delay' */
  boolean_T s852_UnitDelay2_DSTATE;    /* '<S852>/Unit Delay2' */
  boolean_T s845_UnitDelay5_DSTATE;    /* '<S845>/Unit Delay5' */
  boolean_T s852_UnitDelay_DSTATE;     /* '<S852>/Unit Delay' */
  boolean_T s852_UnitDelay1_DSTATE;    /* '<S852>/Unit Delay1' */
  boolean_T s845_UnitDelay3_DSTATE;    /* '<S845>/Unit Delay3' */
  boolean_T s845_UnitDelay4_DSTATE;    /* '<S845>/Unit Delay4' */
  uint8_T s1_motohawk_trigger1_DWORK1; /* '<S1>/motohawk_trigger1' */
  uint8_T s5_motohawk_trigger1_DWORK1; /* '<S5>/motohawk_trigger1' */
  uint8_T s5_motohawk_trigger_DWORK1;  /* '<S5>/motohawk_trigger' */
  uint8_T s5_motohawk_trigger2_DWORK1; /* '<S5>/motohawk_trigger2' */
  uint8_T s5_motohawk_trigger3_DWORK1; /* '<S5>/motohawk_trigger3' */
  uint8_T s5_motohawk_trigger4_DWORK1; /* '<S5>/motohawk_trigger4' */
  uint8_T s5_motohawk_trigger5_DWORK1; /* '<S5>/motohawk_trigger5' */
  uint8_T s5_motohawk_trigger6_DWORK1; /* '<S5>/motohawk_trigger6' */
  uint8_T s5_motohawk_trigger7_DWORK1; /* '<S5>/motohawk_trigger7' */
  uint8_T s4_motohawk_trigger1_DWORK1; /* '<S4>/motohawk_trigger1' */
  uint8_T s385_motohawk_trigger_DWORK1;/* '<S385>/motohawk_trigger' */
  uint8_T s347_motohawk_trigger_DWORK1;/* '<S347>/motohawk_trigger' */
  uint8_T s549_motohawk_trigger5_DWORK1;/* '<S549>/motohawk_trigger5' */
  uint8_T s14_motohawk_trigger1_DWORK1;/* '<S14>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger_DWORK1; /* '<S14>/motohawk_trigger' */
  uint8_T s13_motohawk_trigger_DWORK1; /* '<S13>/motohawk_trigger' */
  uint8_T s789_motohawk_trigger1_DWORK1;/* '<S789>/motohawk_trigger1' */
  uint8_T s366_is_c2_BaseEngineController_A02;/* '<S347>/Engine State Machine' */
  uint8_T s302_is_c19_BaseEngineController_A02;/* '<S297>/Baro Stall State Delay' */
  uint8_T s129_motohawk_trigger1_DWORK1;/* '<S129>/motohawk_trigger1' */
  uint8_T s217_is_active_c12_BaseEngineController_A02;/* '<S202>/IdleStateMachine' */
  uint8_T s217_is_c12_BaseEngineController_A02;/* '<S202>/IdleStateMachine' */
  uint8_T s135_is_active_c5_BaseEngineController_A02;/* '<S127>/Remy Control' */
  uint8_T s135_is_c5_BaseEngineController_A02;/* '<S127>/Remy Control' */
  uint8_T s107_motohawk_trigger_DWORK1;/* '<S107>/motohawk_trigger' */
  uint8_T s33_is_c9_BaseEngineController_A02;/* '<S21>/ETC Test  Manager' */
  uint8_T s28_is_active_c1_BaseEngineController_A02;/* '<S27>/Chart' */
  uint8_T s28_is_c1_BaseEngineController_A02;/* '<S27>/Chart' */
  uint8_T s849_is_c8_BaseEngineController_A02;/* '<S845>/ECUP Latch' */
  boolean_T s702_InjectorSequence_DWORK1[8];/* '<S702>/Injector Sequence' */
  boolean_T s238_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S238>/Multiply by 1.0 if not yet enabled' */
  boolean_T s865_Memory_PreviousInput; /* '<S865>/Memory' */
  boolean_T s15_Stall_MODE;            /* '<S15>/Stall' */
  boolean_T s15_Crank_MODE;            /* '<S15>/Crank' */
  boolean_T s297_CaptureSignalAtStartup_MODE;/* '<S297>/Capture Signal At Startup' */
  boolean_T s300_CaptureECTAtStartup_MODE;/* '<S300>/Capture ECT At Startup' */
  boolean_T s15_Run_MODE;              /* '<S15>/Run' */
  boolean_T s23_PassThrough1_MODE;     /* '<S23>/PassThrough1' */
  boolean_T s23_PassThrough3_MODE;     /* '<S23>/PassThrough3' */
  boolean_T s23_SequenceCutMachine_MODE;/* '<S23>/SequenceCutMachine' */
  boolean_T s23_PassThrough4_MODE;     /* '<S23>/PassThrough4' */
  boolean_T s14_ElectronicThrottleController_MODE;/* '<S14>/Electronic Throttle Controller' */
  boolean_T s23_PassThrough5_MODE;     /* '<S23>/PassThrough5' */
  boolean_T s300_CaptureIATAtStartup_MODE;/* '<S300>/Capture IAT At Startup' */
  boolean_T s344_CollectAverage_MODE;  /* '<S344>/Collect Average' */
  boolean_T s343_CollectAverage_MODE;  /* '<S343>/Collect Average' */
  boolean_T s303_CollectAverage_MODE;  /* '<S303>/Collect Average' */
  boolean_T s161_DeltaTPSTransientFueling_MODE;/* '<S161>/Delta TPS Transient Fueling' */
  boolean_T s166_ECTTransientFueling_MODE;/* '<S166>/ECT Transient Fueling' */
  boolean_T s37_PassThrough_MODE;      /* '<S37>/PassThrough' */
} D_Work_BaseEngineController_A02;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S142>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S38>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S21>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S852>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S852>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S852>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S852>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_e;/* '<S850>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_j;/* '<S850>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_j;/* '<S850>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_c;/* '<S850>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S848>/Clear' */
  ZCSigState Clear_Trig_ZCE_l;         /* '<S847>/Clear' */
} PrevZCSigStates_BaseEngineController_A02;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s702_Gain4;             /* '<S702>/Gain4' */
  const real_T s131_motohawk_replicate2;/* '<S131>/motohawk_replicate2' */
  const real_T s131_motohawk_replicate[8];/* '<S131>/motohawk_replicate' */
  const uint32_T s702_DataTypeConversion5;/* '<S702>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_A02;

/* Constant parameters (auto storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S865>/Logic'
   */
  boolean_T Logic_table[16];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S288>/Combinatorial  Logic'
   *   '<S289>/Combinatorial  Logic'
   *   '<S290>/Combinatorial  Logic'
   *   '<S52>/Combinatorial  Logic'
   *   '<S250>/Combinatorial  Logic'
   */
  boolean_T pooled680[8];
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
 * '<S1>'   : BaseEngineController_A02/CCP CAN Protocol
 * '<S2>'   : BaseEngineController_A02/Foreground
 * '<S3>'   : BaseEngineController_A02/Main Power Relay
 * '<S4>'   : BaseEngineController_A02/CCP CAN Protocol/CCP CAN Protocol External Trig1
 * '<S5>'   : BaseEngineController_A02/CCP CAN Protocol/CCP Triggers
 * '<S6>'   : BaseEngineController_A02/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver
 * '<S7>'   : BaseEngineController_A02/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Daq Processing
 * '<S8>'   : BaseEngineController_A02/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP IDLE Processing
 * '<S9>'   : BaseEngineController_A02/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command
 * '<S10>'  : BaseEngineController_A02/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command/Adjust ID
 * '<S11>'  : BaseEngineController_A02/Foreground/Control
 * '<S12>'  : BaseEngineController_A02/Foreground/Inputs
 * '<S13>'  : BaseEngineController_A02/Foreground/Outputs
 * '<S14>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization
 * '<S15>'  : BaseEngineController_A02/Foreground/Control/Controller
 * '<S16>'  : BaseEngineController_A02/Foreground/Control/Diagnostics
 * '<S17>'  : BaseEngineController_A02/Foreground/Control/VirtualSensors
 * '<S18>'  : BaseEngineController_A02/Foreground/Control/motohawk_function_collector
 * '<S19>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/CompareTo
 * '<S20>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization
 * '<S21>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller
 * '<S22>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization
 * '<S23>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern
 * '<S24>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Advance to Start Angle
 * '<S25>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization
 * '<S26>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization/EGR Hyst
 * '<S27>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator
 * '<S28>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Chart
 * '<S29>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Time Since Enabled (With Input)1
 * '<S30>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/EGR Characterization/Signal Generator/Time Since Enabled (With Input)2
 * '<S31>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Adapt Request
 * '<S32>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault
 * '<S33>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager
 * '<S34>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETCStallShutDown
 * '<S35>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)
 * '<S36>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Reset TasksComplete To True
 * '<S37>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager
 * '<S38>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager
 * '<S39>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Adapt Request/ShutDownAdaptMode
 * '<S40>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault/ShutDownAdaptMode1
 * '<S41>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Cals_and_Probes_Page
 * '<S42>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch
 * '<S43>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/IGain
 * '<S44>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PGain
 * '<S45>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms
 * '<S46>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)
 * '<S47>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative
 * '<S48>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis
 * '<S49>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/Derivitive2
 * '<S50>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)
 * '<S51>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S52>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis/Hysteresis
 * '<S53>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive1
 * '<S54>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive3
 * '<S55>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator
 * '<S56>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Model Info
 * '<S57>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator/Saturation
 * '<S58>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)/Saturation
 * '<S59>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/PassThrough
 * '<S60>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/ShutDownAdaptMode1
 * '<S61>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning
 * '<S62>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter
 * '<S63>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/Time Since Enabled (With Input)1
 * '<S64>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs
 * '<S65>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/NewValue
 * '<S66>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/OldValue
 * '<S67>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter/Saturation
 * '<S68>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Reset TasksComplete To False
 * '<S69>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Stall
 * '<S70>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Time Since Enabled (With Input)1
 * '<S71>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/DeltaPressureIndex
 * '<S72>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets
 * '<S73>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel
 * '<S74>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1
 * '<S75>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2
 * '<S76>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3
 * '<S77>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4
 * '<S78>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5
 * '<S79>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6
 * '<S80>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7
 * '<S81>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8
 * '<S82>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/NewValue
 * '<S83>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/OldValue
 * '<S84>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/NewValue
 * '<S85>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/OldValue
 * '<S86>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/NewValue
 * '<S87>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/OldValue
 * '<S88>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/NewValue
 * '<S89>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/OldValue
 * '<S90>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/NewValue
 * '<S91>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/OldValue
 * '<S92>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/NewValue
 * '<S93>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/OldValue
 * '<S94>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/NewValue
 * '<S95>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/OldValue
 * '<S96>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/NewValue
 * '<S97>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/OldValue
 * '<S98>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/NewValue
 * '<S99>'  : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/OldValue
 * '<S100>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern
 * '<S101>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern
 * '<S102>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough1
 * '<S103>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough2
 * '<S104>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough3
 * '<S105>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough4
 * '<S106>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough5
 * '<S107>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine
 * '<S108>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern
 * '<S109>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle1CutPatter
 * '<S110>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle2CutPatter
 * '<S111>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle3CutPatter
 * '<S112>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle4CutPatter
 * '<S113>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle1CutPatter
 * '<S114>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle2CutPatter
 * '<S115>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle3CutPatter
 * '<S116>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle4CutPatter
 * '<S117>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine/SequencyCutMachine
 * '<S118>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle1CutPatter
 * '<S119>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle2CutPatter
 * '<S120>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle3CutPatter
 * '<S121>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle4CutPatter
 * '<S122>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel
 * '<S123>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/NewValue
 * '<S124>' : BaseEngineController_A02/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/OldValue
 * '<S125>' : BaseEngineController_A02/Foreground/Control/Controller/Crank
 * '<S126>' : BaseEngineController_A02/Foreground/Control/Controller/Crank State
 * '<S127>' : BaseEngineController_A02/Foreground/Control/Controller/Hybrid
 * '<S128>' : BaseEngineController_A02/Foreground/Control/Controller/Merge
 * '<S129>' : BaseEngineController_A02/Foreground/Control/Controller/Run
 * '<S130>' : BaseEngineController_A02/Foreground/Control/Controller/Run State
 * '<S131>' : BaseEngineController_A02/Foreground/Control/Controller/Stall
 * '<S132>' : BaseEngineController_A02/Foreground/Control/Controller/Stall State
 * '<S133>' : BaseEngineController_A02/Foreground/Control/Controller/Crank/Cals_and_Probes_Page
 * '<S134>' : BaseEngineController_A02/Foreground/Control/Controller/Crank/CrankFueling
 * '<S135>' : BaseEngineController_A02/Foreground/Control/Controller/Hybrid/Remy Control
 * '<S136>' : BaseEngineController_A02/Foreground/Control/Controller/Merge/FuelPump
 * '<S137>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager
 * '<S138>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio
 * '<S139>' : BaseEngineController_A02/Foreground/Control/Controller/Run/EGR
 * '<S140>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager
 * '<S141>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor
 * '<S142>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor
 * '<S143>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control
 * '<S144>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager
 * '<S145>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/Saturation
 * '<S146>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/ShutDownTasksComplete Reset
 * '<S147>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt
 * '<S148>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt/Adapt Table
 * '<S149>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt/First Order Low Pass (Tunable)
 * '<S150>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt/Stable Engine
 * '<S151>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S152>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt/Stable Engine/Time Since Enabled (With Input)1
 * '<S153>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt/Stable Engine/Time Since Enabled (With Input)2
 * '<S154>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt/Stable Engine/motohawk_override_abs
 * '<S155>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt/Stable Engine/motohawk_override_abs/NewValue
 * '<S156>' : BaseEngineController_A02/Foreground/Control/Controller/Run/AirFlow Manager/VE Adapt/Stable Engine/motohawk_override_abs/OldValue
 * '<S157>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs
 * '<S158>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/NewValue
 * '<S159>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/OldValue
 * '<S160>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S161>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S162>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S163>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S164>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Cals_and_Probes_Page
 * '<S165>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S166>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S167>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S168>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S169>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S170>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S171>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S172>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S173>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S174>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map
 * '<S175>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Cals_and_Probes_Page
 * '<S176>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S177>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S178>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S179>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S180>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S181>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S182>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S183>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S184>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S185>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S186>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S187>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S188>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S189>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S190>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S191>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Cals_and_Probes_Page
 * '<S192>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S193>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S194>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S195>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S196>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S197>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S198>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S199>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S200>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S201>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S202>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S203>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S204>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S205>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S206>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S207>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S208>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S209>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S210>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S211>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S212>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S213>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S214>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S215>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S216>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S217>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S218>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S219>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S220>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S221>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S222>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S223>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S224>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S225>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S226>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S227>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S228>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S229>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S230>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S231>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S232>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S233>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S234>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S235>' : BaseEngineController_A02/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S236>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S237>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S238>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller
 * '<S239>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination/Cals_and_Probes_Page
 * '<S240>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S241>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S242>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller
 * '<S243>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation
 * '<S244>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Saturation
 * '<S245>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID
 * '<S246>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S247>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S248>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S249>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S250>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Hysteresis
 * '<S251>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S252>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S253>' : BaseEngineController_A02/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S254>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S255>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S256>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S257>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S258>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S259>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S260>' : BaseEngineController_A02/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S261>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S262>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Oil Pump at Startup
 * '<S263>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S264>' : BaseEngineController_A02/Foreground/Control/Controller/Stall/Oil Pump at Startup/Time Since Enabled
 * '<S265>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S266>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy
 * '<S267>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S268>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S269>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Motor Overheat Fault Logic
 * '<S270>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S271>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Phoenix AgeCount Fault
 * '<S272>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S273>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S274>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S275>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S276>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S277>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S278>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S279>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S280>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Cals_and_Probes_Page
 * '<S281>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S282>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S283>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S284>' : BaseEngineController_A02/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S285>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis
 * '<S286>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis1
 * '<S287>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis2
 * '<S288>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis/Hysteresis
 * '<S289>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis1/Hysteresis
 * '<S290>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Overspeed Protection/Hysterisis2/Hysteresis
 * '<S291>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Phoenix AgeCount Fault/Phoenix 1 CAN Faults
 * '<S292>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Phoenix AgeCount Fault/Phoenix 2 CAN Faults
 * '<S293>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Phoenix AgeCount Fault/Phoenix 3 CAN Faults
 * '<S294>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Phoenix AgeCount Fault/Phoenix 4 CAN Faults
 * '<S295>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S296>' : BaseEngineController_A02/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S297>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs
 * '<S298>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S299>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S300>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed
 * '<S301>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S302>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S303>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S304>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced
 * '<S305>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S306>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S307>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/C to K1
 * '<S308>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/Cals_and_Probes_Page
 * '<S309>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs
 * '<S310>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs/NewValue
 * '<S311>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/SpeedDensityMAPReferenced/motohawk_override_abs/OldValue
 * '<S312>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S313>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S314>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S315>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC
 * '<S316>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature
 * '<S317>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S318>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S319>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S320>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S321>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S322>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S323>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S324>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S325>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation
 * '<S326>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work
 * '<S327>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/Multiply and Divide, avoiding divde by zero1
 * '<S328>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/NonZero RPM
 * '<S329>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work
 * '<S330>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Stall
 * '<S331>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work/Saturation
 * '<S332>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/CompareTo
 * '<S333>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT
 * '<S334>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Saturation
 * '<S335>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator
 * '<S336>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator/Saturation
 * '<S337>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S338>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S339>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S340>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S341>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S342>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S343>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S344>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S345>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S346>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S347>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S348>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S349>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S350>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S351>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S352>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S353>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S354>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S355>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S356>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S357>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S358>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S359>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S360>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S361>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S362>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S363>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S364>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S365>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S366>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S367>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S368>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S369>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S370>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S371>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S372>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S373>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S374>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S375>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S376>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/NECCT Index
 * '<S377>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/Power Index
 * '<S378>' : BaseEngineController_A02/Foreground/Control/VirtualSensors/Virtual Indexes/Torque Indexes
 * '<S379>' : BaseEngineController_A02/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S380>' : BaseEngineController_A02/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S381>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs
 * '<S382>' : BaseEngineController_A02/Foreground/Inputs/Digital
 * '<S383>' : BaseEngineController_A02/Foreground/Inputs/EngineSpeed
 * '<S384>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors
 * '<S385>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors
 * '<S386>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors
 * '<S387>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112
 * '<S388>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix
 * '<S389>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/112 CAN Faults
 * '<S390>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/ESTOP at Startup
 * '<S391>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/MATLAB Function
 * '<S392>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs
 * '<S393>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1
 * '<S394>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2
 * '<S395>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs3
 * '<S396>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs4
 * '<S397>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/ESTOP at Startup/Time Since Enabled
 * '<S398>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs/NewValue
 * '<S399>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs/OldValue
 * '<S400>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1/NewValue
 * '<S401>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs1/OldValue
 * '<S402>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2/NewValue
 * '<S403>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs2/OldValue
 * '<S404>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs3/NewValue
 * '<S405>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs3/OldValue
 * '<S406>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs4/NewValue
 * '<S407>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/112/motohawk_override_abs4/OldValue
 * '<S408>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/First Order Low Pass (Tunable)
 * '<S409>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/Power Estimator
 * '<S410>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs
 * '<S411>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs1
 * '<S412>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs10
 * '<S413>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs11
 * '<S414>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs12
 * '<S415>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs13
 * '<S416>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs14
 * '<S417>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs15
 * '<S418>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs16
 * '<S419>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs17
 * '<S420>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs18
 * '<S421>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs19
 * '<S422>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs2
 * '<S423>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs20
 * '<S424>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs21
 * '<S425>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs22
 * '<S426>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs23
 * '<S427>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs24
 * '<S428>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs25
 * '<S429>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs26
 * '<S430>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs27
 * '<S431>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs28
 * '<S432>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs29
 * '<S433>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs3
 * '<S434>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs30
 * '<S435>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs31
 * '<S436>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs32
 * '<S437>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs33
 * '<S438>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs34
 * '<S439>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs35
 * '<S440>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs36
 * '<S441>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs4
 * '<S442>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs5
 * '<S443>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs6
 * '<S444>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs7
 * '<S445>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs8
 * '<S446>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/motohawk_override_abs9
 * '<S447>' : BaseEngineController_A02/Foreground/Inputs/CAN Inputs/Phoenix/First Order Low Pass (Tunable)/First Order Low Pass
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
 * '<S561>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S562>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S563>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S564>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S565>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S566>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S567>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S568>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S569>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S570>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S571>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S572>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S573>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S574>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S575>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S576>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S577>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S578>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S579>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S580>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S581>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S582>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S583>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S584>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S585>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S586>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S587>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S588>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S589>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S590>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S591>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S592>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S593>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S594>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S595>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S596>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S597>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S598>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S599>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S600>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S601>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S602>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S603>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S604>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S605>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S606>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S607>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S608>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S609>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S610>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S611>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S612>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S613>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S614>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S615>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S616>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S617>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S618>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S619>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S620>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S621>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S622>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S623>' : BaseEngineController_A02/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S624>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat
 * '<S625>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S626>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/First Order Low Pass
 * '<S627>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem
 * '<S628>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem1
 * '<S629>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/If Action Subsystem2
 * '<S630>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override
 * '<S631>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/motohawk_table_1d1
 * '<S632>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/First Order Low Pass/First Order Low Pass
 * '<S633>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override/NewValue
 * '<S634>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/O2_PostCat/Override/OldValue
 * '<S635>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S636>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S637>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S638>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S639>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S640>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S641>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S642>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S643>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S644>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S645>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S646>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S647>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S648>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S649>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S650>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S651>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S652>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S653>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S654>' : BaseEngineController_A02/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S655>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S656>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S657>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1
 * '<S658>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13
 * '<S659>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S660>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S661>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S662>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S663>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S664>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S665>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S666>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S667>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S668>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S669>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S670>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S671>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S672>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S673>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S674>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S675>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S676>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S677>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S678>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S679>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S680>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S681>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S682>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S683>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S684>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S685>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S686>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S687>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S688>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S689>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S690>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S691>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S692>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S693>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1/NewValue
 * '<S694>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs1/OldValue
 * '<S695>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13/NewValue
 * '<S696>' : BaseEngineController_A02/Foreground/Inputs/PotentiometerSensors/motohawk_override_abs13/OldValue
 * '<S697>' : BaseEngineController_A02/Foreground/Outputs/CAN Out
 * '<S698>' : BaseEngineController_A02/Foreground/Outputs/Coil Control
 * '<S699>' : BaseEngineController_A02/Foreground/Outputs/EGR Out
 * '<S700>' : BaseEngineController_A02/Foreground/Outputs/FuelPump
 * '<S701>' : BaseEngineController_A02/Foreground/Outputs/HBridge
 * '<S702>' : BaseEngineController_A02/Foreground/Outputs/Injector Control
 * '<S703>' : BaseEngineController_A02/Foreground/Outputs/OilPump
 * '<S704>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater
 * '<S705>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112
 * '<S706>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix
 * '<S707>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant
 * '<S708>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Compare To Constant1
 * '<S709>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/MIL States
 * '<S710>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/Temp Sensor Arbitration
 * '<S711>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1
 * '<S712>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2
 * '<S713>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3
 * '<S714>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4
 * '<S715>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5
 * '<S716>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6
 * '<S717>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7
 * '<S718>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs8
 * '<S719>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/MIL States/MATLAB Function
 * '<S720>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/MIL States/motohawk_override_abs1
 * '<S721>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/MIL States/motohawk_override_abs2
 * '<S722>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/MIL States/motohawk_override_abs3
 * '<S723>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/MIL States/motohawk_override_abs1/NewValue
 * '<S724>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/MIL States/motohawk_override_abs1/OldValue
 * '<S725>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/MIL States/motohawk_override_abs2/NewValue
 * '<S726>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/MIL States/motohawk_override_abs2/OldValue
 * '<S727>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/MIL States/motohawk_override_abs3/NewValue
 * '<S728>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/MIL States/motohawk_override_abs3/OldValue
 * '<S729>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1/NewValue
 * '<S730>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs1/OldValue
 * '<S731>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2/NewValue
 * '<S732>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs2/OldValue
 * '<S733>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3/NewValue
 * '<S734>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs3/OldValue
 * '<S735>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4/NewValue
 * '<S736>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs4/OldValue
 * '<S737>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5/NewValue
 * '<S738>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs5/OldValue
 * '<S739>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6/NewValue
 * '<S740>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs6/OldValue
 * '<S741>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7/NewValue
 * '<S742>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs7/OldValue
 * '<S743>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs8/NewValue
 * '<S744>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/112/motohawk_override_abs8/OldValue
 * '<S745>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs
 * '<S746>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1
 * '<S747>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10
 * '<S748>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11
 * '<S749>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12
 * '<S750>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2
 * '<S751>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3
 * '<S752>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4
 * '<S753>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5
 * '<S754>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6
 * '<S755>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7
 * '<S756>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8
 * '<S757>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9
 * '<S758>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs/NewValue
 * '<S759>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs/OldValue
 * '<S760>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1/NewValue
 * '<S761>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs1/OldValue
 * '<S762>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10/NewValue
 * '<S763>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs10/OldValue
 * '<S764>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11/NewValue
 * '<S765>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs11/OldValue
 * '<S766>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12/NewValue
 * '<S767>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs12/OldValue
 * '<S768>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2/NewValue
 * '<S769>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs2/OldValue
 * '<S770>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3/NewValue
 * '<S771>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs3/OldValue
 * '<S772>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4/NewValue
 * '<S773>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs4/OldValue
 * '<S774>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5/NewValue
 * '<S775>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs5/OldValue
 * '<S776>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6/NewValue
 * '<S777>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs6/OldValue
 * '<S778>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7/NewValue
 * '<S779>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs7/OldValue
 * '<S780>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8/NewValue
 * '<S781>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs8/OldValue
 * '<S782>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9/NewValue
 * '<S783>' : BaseEngineController_A02/Foreground/Outputs/CAN Out/Phoenix/motohawk_override_abs9/OldValue
 * '<S784>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S785>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S786>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S787>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S788>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S789>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S790>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S791>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S792>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S793>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S794>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S795>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S796>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S797>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S798>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S799>' : BaseEngineController_A02/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S800>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs
 * '<S801>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1
 * '<S802>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs/NewValue
 * '<S803>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs/OldValue
 * '<S804>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1/NewValue
 * '<S805>' : BaseEngineController_A02/Foreground/Outputs/EGR Out/motohawk_override_abs1/OldValue
 * '<S806>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S807>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S808>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S809>' : BaseEngineController_A02/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S810>' : BaseEngineController_A02/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S811>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S812>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S813>' : BaseEngineController_A02/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S814>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S815>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S816>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S817>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S818>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S819>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S820>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S821>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S822>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Cals_and_Probes_Page
 * '<S823>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S824>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S825>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S826>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S827>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S828>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S829>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S830>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S831>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S832>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S833>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S834>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S835>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S836>' : BaseEngineController_A02/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S837>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP
 * '<S838>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units
 * '<S839>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units/NewValue
 * '<S840>' : BaseEngineController_A02/Foreground/Outputs/OilPump/Discrete Actuator - OILP/Override in Engineering Units/OldValue
 * '<S841>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater
 * '<S842>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units
 * '<S843>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units/NewValue
 * '<S844>' : BaseEngineController_A02/Foreground/Outputs/Oxygen Heater/Discrete Actuator - Oxygen Heater/Override in Engineering Units/OldValue
 * '<S845>' : BaseEngineController_A02/Main Power Relay/Main Power Relay
 * '<S846>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S847>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S848>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S849>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S850>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S851>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/On Off Delay
 * '<S852>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S853>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S854>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S855>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S856>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S857>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S858>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S859>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S860>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S861>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S862>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S863>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S864>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S865>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S866>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S867>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S868>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S869>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S870>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S871>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S872>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S873>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S874>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S875>' : BaseEngineController_A02/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_A02_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
