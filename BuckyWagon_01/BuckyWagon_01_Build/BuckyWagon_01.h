/*
 * File: BuckyWagon_01.h
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1530
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Jul 29 18:42:46 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BuckyWagon_01_h_
#define RTW_HEADER_BuckyWagon_01_h_
#ifndef BuckyWagon_01_COMMON_INCLUDES_
# define BuckyWagon_01_COMMON_INCLUDES_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#endif                                 /* BuckyWagon_01_COMMON_INCLUDES_ */

#include "BuckyWagon_01_types.h"

/* Child system includes */
#include "BuckyWagon_01_Foreground.h"

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
  real_T s228_InputVoltage;            /* '<S228>/Read CAN Message2' */
  real_T s228_OutputVoltage;           /* '<S228>/Read CAN Message2' */
  real_T s228_InputCurrentLimitMax;    /* '<S228>/Read CAN Message2' */
  real_T s228_InputCurrent;            /* '<S228>/Read CAN Message2' */
  real_T s228_OutputCurrent;           /* '<S228>/Read CAN Message2' */
  real_T s228_Eaton_HV_Charger_Temperature;/* '<S228>/Read CAN Message2' */
  real_T s228_IgnitionStatus;          /* '<S228>/Read CAN Message2' */
  real_T s228_ChargerState;            /* '<S228>/Read CAN Message2' */
  real_T s228_FaultSeverityIndicator;  /* '<S228>/Read CAN Message2' */
  real_T s228_MessageCounter;          /* '<S228>/Read CAN Message2' */
  real_T s228_MessageChecksum;         /* '<S228>/Read CAN Message2' */
  real_T s361_Merge;                   /* '<S361>/Merge' */
  real_T s235_Abs;                     /* '<S235>/Abs' */
  real_T s225_DataTypeConversion;      /* '<S225>/Data Type Conversion' */
  real_T s230_Saturation;              /* '<S230>/Saturation' */
  real_T s340_Merge;                   /* '<S340>/Merge' */
  real_T s232_Saturation;              /* '<S232>/Saturation' */
  real_T s356_Merge;                   /* '<S356>/Merge' */
  real_T s9_Motor_Torque;              /* '<S9>/Product1' */
  real_T s157_Sum1;                    /* '<S157>/Sum1' */
  real_T s123_Merge;                   /* '<S123>/Merge' */
  real_T s9_InReverse;                 /* '<S9>/Data Type Conversion' */
  real_T s9_FanDutyCycle;              /* '<S9>/Switch1' */
  real_T s9_CoolantPumpSpeed;          /* '<S9>/Switch' */
  real_T s360_Sum;                     /* '<S360>/Sum' */
  real_T s17_Product;                  /* '<S17>/Product' */
  real_T s78_Merge;                    /* '<S78>/Merge' */
  real_T s79_Merge;                    /* '<S79>/Merge' */
  real_T s81_Merge;                    /* '<S81>/Merge' */
  real_T s96_Merge;                    /* '<S96>/Merge' */
  real_T s231_Sum1;                    /* '<S231>/Sum1' */
  real_T s348_Merge;                   /* '<S348>/Merge' */
  real_T s114_Switch1;                 /* '<S114>/Switch1' */
  real_T s127_Gain1;                   /* '<S127>/Gain1' */
  real_T s127_Gain4;                   /* '<S127>/Gain4' */
  real_T s127_Gain5;                   /* '<S127>/Gain5' */
  real_T s127_Gain6;                   /* '<S127>/Gain6' */
  real_T s127_Gain8;                   /* '<S127>/Gain8' */
  real_T s127_Divide3;                 /* '<S127>/Divide3' */
  real_T s127_Gain;                    /* '<S127>/Gain' */
  real_T s127_Gain3;                   /* '<S127>/Gain3' */
  real_T s127_Divide;                  /* '<S127>/Divide' */
  real_T s127_Saturation;              /* '<S127>/Saturation' */
  real_T s126_Sum1;                    /* '<S126>/Sum1' */
  real_T s126_Sum;                     /* '<S126>/Sum' */
  real_T s233_UnitDelay;               /* '<S233>/Unit Delay' */
  real_T s229_Fault_Severity_Indicator;/* '<S229>/Read CAN Message2' */
  real_T s229_Message_Checksum;        /* '<S229>/Read CAN Message2' */
  real_T s229_Message_Counter;         /* '<S229>/Read CAN Message2' */
  real_T s229_Motor_Control_State;     /* '<S229>/Read CAN Message2' */
  real_T s229_Motor_Speed;             /* '<S229>/Read CAN Message2' */
  real_T s229_Motor_Torque;            /* '<S229>/Read CAN Message2' */
  real_T s229_Percent_Torque_Available;/* '<S229>/Read CAN Message2' */
  real_T s330_Merge;                   /* '<S330>/Merge' */
  real_T s331_Merge;                   /* '<S331>/Merge' */
  real_T s229_DC_Bus_Current;          /* '<S229>/Read CAN Message1' */
  real_T s229_DC_Bus_Voltage;          /* '<S229>/Read CAN Message1' */
  real_T s229_Inverter_Temperature;    /* '<S229>/Read CAN Message1' */
  real_T s229_Motor_Temperature;       /* '<S229>/Read CAN Message1' */
  real_T s229_Phase_Current;           /* '<S229>/Read CAN Message1' */
  real_T s229_Phase_phase_voltage;     /* '<S229>/Read CAN Message1' */
  real_T s229_Isolation_Resistance;    /* '<S229>/Read CAN Message3' */
  real_T s229_Maximum_Rated_Power;     /* '<S229>/Read CAN Message3' */
  real_T s229_Maximum_Rated_Speed;     /* '<S229>/Read CAN Message3' */
  real_T s229_Maximum_Rated_Torqe;     /* '<S229>/Read CAN Message3' */
  real_T s227_ReadCANMessage_o2;       /* '<S227>/Read CAN Message' */
  real_T s227_EMP_Pump_Status;         /* '<S227>/Read CAN Message' */
  real_T s227_EMP_Pump_Mode;           /* '<S227>/Read CAN Message' */
  real_T s227_EMP_Pump_Speed;          /* '<S227>/Read CAN Message' */
  real_T s227_EMP_Board_Temp;          /* '<S227>/Read CAN Message' */
  real_T s227_EMP_Pump_Power;          /* '<S227>/Read CAN Message' */
  real_T s227_EMP_Speed_Percent;       /* '<S227>/Read CAN Message' */
  real_T s226_ReadCANMessage_o2;       /* '<S226>/Read CAN Message' */
  real_T s226_EHPAS_Input_Voltage;     /* '<S226>/Read CAN Message' */
  real_T s226_EHPAS_Input_Current_NA;  /* '<S226>/Read CAN Message' */
  real_T s226_EHPAS_Pump_Speed;        /* '<S226>/Read CAN Message' */
  real_T s226_EHPAS_TempMax;           /* '<S226>/Read CAN Message' */
  real_T s226_EHPAS_TempCur;           /* '<S226>/Read CAN Message' */
  real_T s226_EHPAS_Op_State;          /* '<S226>/Read CAN Message' */
  real_T s226_EHPAS_Fault;             /* '<S226>/Read CAN Message' */
  real_T s224_bcm_alarm;               /* '<S224>/Read CAN Message1' */
  real_T s224_bcm_cpwr_cmd;            /* '<S224>/Read CAN Message1' */
  real_T s224_bcm_cpwr_mon;            /* '<S224>/Read CAN Message1' */
  real_T s224_bcm_epo;                 /* '<S224>/Read CAN Message1' */
  real_T s224_bcm_gfd;                 /* '<S224>/Read CAN Message1' */
  real_T s224_bcm_hvil_mon;            /* '<S224>/Read CAN Message1' */
  real_T s224_bcm_ibat;                /* '<S224>/Read CAN Message1' */
  real_T s224_bcm_ready;               /* '<S224>/Read CAN Message1' */
  real_T s224_bcm_soc;                 /* '<S224>/Read CAN Message1' */
  real_T s224_bcm_vbat;                /* '<S224>/Read CAN Message1' */
  real_T s224_bcm_chg_done;            /* '<S224>/Read CAN Message1' */
  real_T s224_bcm_cool_req;            /* '<S224>/Read CAN Message1' */
  real_T s244_Merge;                   /* '<S244>/Merge' */
  real_T s224_bcm_soc_j;               /* '<S224>/Gain1' */
  real_T s243_Merge;                   /* '<S243>/Merge' */
  real_T s224_bcm_cell_tmax;           /* '<S224>/Read CAN Message6' */
  real_T s224_bcm_cell_tmin;           /* '<S224>/Read CAN Message6' */
  real_T s224_bcm_cell_vmax;           /* '<S224>/Read CAN Message6' */
  real_T s224_bcm_cell_vmin;           /* '<S224>/Read CAN Message6' */
  real_T s224_bcm_chga_ena;            /* '<S224>/Read CAN Message6' */
  real_T s224_bcm_chga_mon;            /* '<S224>/Read CAN Message6' */
  real_T s224_bcm_lvbat;               /* '<S224>/Read CAN Message6' */
  real_T s224_bcm_mod_ena;             /* '<S224>/Read CAN Message6' */
  real_T s224_bcm_veh_mon;             /* '<S224>/Read CAN Message6' */
  real_T s224_bcm_cell_overvolt;       /* '<S224>/Read CAN Message5' */
  real_T s224_bcm_chg_buf;             /* '<S224>/Read CAN Message5' */
  real_T s224_bcm_chg_max;             /* '<S224>/Read CAN Message5' */
  real_T s224_bcm_dis_buf;             /* '<S224>/Read CAN Message5' */
  real_T s224_bcm_dis_max;             /* '<S224>/Read CAN Message5' */
  real_T s224_bcm_t_coolant;           /* '<S224>/Read CAN Message5' */
  real_T s242_Merge;                   /* '<S242>/Merge' */
  real_T s122_Abs;                     /* '<S122>/Abs' */
  real_T s171_Merge;                   /* '<S171>/Merge' */
  real_T s170_inReverse;               /* '<S122>/Chart' */
  real_T s140_motohawk_interpolation_2d1;/* '<S140>/motohawk_interpolation_2d1' */
  real_T s140_motohawk_interpolation_2d;/* '<S140>/motohawk_interpolation_2d' */
  real_T s140_Switch;                  /* '<S140>/Switch' */
  real_T s142_motohawk_interpolation_2d;/* '<S142>/motohawk_interpolation_2d' */
  real_T s142_motohawk_interpolation_2d1;/* '<S142>/motohawk_interpolation_2d1' */
  real_T s142_MinMax;                  /* '<S142>/MinMax' */
  real_T s142_Switch;                  /* '<S142>/Switch' */
  real_T s143_motohawk_interpolation_2d1;/* '<S143>/motohawk_interpolation_2d1' */
  real_T s143_motohawk_interpolation_2d;/* '<S143>/motohawk_interpolation_2d' */
  real_T s143_Switch;                  /* '<S143>/Switch' */
  real_T s141_Switch1;                 /* '<S141>/Switch1' */
  real_T s149_MinMax1;                 /* '<S149>/MinMax1' */
  real_T s145_out;                     /* '<S141>/Inverter Overheat Logic' */
  real_T s133_Saturation1;             /* '<S133>/Saturation1' */
  real_T s133_Product;                 /* '<S133>/Product' */
  real_T s133_Product2;                /* '<S133>/Product2' */
  real_T s109_UnitDelay;               /* '<S109>/Unit Delay' */
  real_T s71_UnitDelay2;               /* '<S71>/Unit Delay2' */
  real_T s66_ctrlState;                /* '<S17>/Chart' */
  real_T s60_Merge;                    /* '<S60>/Merge' */
  real_T s43_Merge;                    /* '<S43>/Merge' */
  real_T s52_MinMax1;                  /* '<S52>/MinMax1' */
  uint32_T s228_AgeCount;              /* '<S228>/Read CAN Message2' */
  uint32_T s229_AgeCount;              /* '<S229>/Read CAN Message2' */
  uint32_T s229_AgeCount_g;            /* '<S229>/Read CAN Message1' */
  uint32_T s227_AgeCount;              /* '<S227>/Read CAN Message' */
  uint32_T s226_AgeCount;              /* '<S226>/Read CAN Message' */
  uint32_T s224_AgeCount;              /* '<S224>/Read CAN Message1' */
  uint32_T s224_AgeCount_e;            /* '<S224>/Read CAN Message6' */
  uint32_T s224_AgeCount_k;            /* '<S224>/Read CAN Message5' */
  int16_T s10_DataTypeConversion;      /* '<S10>/Data Type Conversion' */
  int16_T s10_DataTypeConversion2;     /* '<S10>/Data Type Conversion2' */
  int16_T s10_DataTypeConversion1;     /* '<S10>/Data Type Conversion1' */
  int16_T s11_TmpSignalConversionAtChartInport20[18];/* '<S11>/Scale Data' */
  uint16_T s12_motohawk_ain;           /* '<S12>/motohawk_ain' */
  uint16_T s12_motohawk_ain1;          /* '<S12>/motohawk_ain1' */
  uint16_T s12_motohawk_ain5;          /* '<S12>/motohawk_ain5' */
  uint16_T s205_minTimer;              /* '<S192>/Chart' */
  uint16_T s205_scrollTimer;           /* '<S192>/Chart' */
  uint8_T s80_Merge;                   /* '<S80>/Merge' */
  uint8_T s10_DataTypeConversion7;     /* '<S10>/Data Type Conversion7' */
  uint8_T s10_Data;                    /* '<S10>/Data Type Conversion4' */
  uint8_T s10_Product;                 /* '<S10>/Product' */
  uint8_T s10_Volt;                    /* '<S10>/Data Type Conversion3' */
  uint8_T s10_MinMax;                  /* '<S10>/MinMax' */
  uint8_T s10_DataTypeConversion10;    /* '<S10>/Data Type Conversion10' */
  uint8_T s11_motohawk_data_read1;     /* '<S11>/motohawk_data_read1' */
  uint8_T s11_motohawk_data_read3;     /* '<S11>/motohawk_data_read3' */
  uint8_T s11_motohawk_data_read2[2];  /* '<S11>/motohawk_data_read2' */
  uint8_T s11_motohawk_data_read[4];   /* '<S11>/motohawk_data_read' */
  uint8_T s11_motohawk_data_read4;     /* '<S11>/motohawk_data_read4' */
  uint8_T s223_upcount;                /* '<S223>/Read CAN Message' */
  uint8_T s208_menucount;              /* '<S208>/Read CAN Message' */
  uint8_T s205_mode;                   /* '<S192>/Chart' */
  uint8_T s205_text[10];               /* '<S192>/Chart' */
  uint8_T s205_scrollIndex;            /* '<S192>/Chart' */
  uint8_T s199_downcount;              /* '<S199>/Read CAN Message' */
  uint8_T s150_PumpState;              /* '<S119>/Chart' */
  uint8_T s15_OperatingMode_cmd;       /* '<S15>/Switch' */
  uint8_T s13_Switch;                  /* '<S13>/Switch' */
  boolean_T s236_Merge;                /* '<S236>/Merge' */
  boolean_T s255_Merge;                /* '<S255>/Merge' */
  boolean_T s82_Merge;                 /* '<S82>/Merge' */
  boolean_T s107_LogicalOperator;      /* '<S107>/Logical Operator' */
  boolean_T s223_upasserted;           /* '<S223>/Read CAN Message' */
  boolean_T s208_menuasserted;         /* '<S208>/Read CAN Message' */
  boolean_T s199_downasserted;         /* '<S199>/Read CAN Message' */
  boolean_T s229_RelationalOperator;   /* '<S229>/Relational Operator' */
  boolean_T s309_pluggedIn;            /* '<S299>/Chart' */
  boolean_T s224_bcm_mainc_stat;       /* '<S224>/Read CAN Message1' */
  boolean_T s224_bcm_chgc_stat;        /* '<S224>/Read CAN Message1' */
  boolean_T s240_Merge;                /* '<S240>/Merge' */
  boolean_T s241_Merge;                /* '<S241>/Merge' */
  boolean_T s224_bcm_cell_undervolt;   /* '<S224>/Read CAN Message5' */
  boolean_T s121_LogicalOperator;      /* '<S121>/Logical Operator' */
  boolean_T s38_LogicalOperator;       /* '<S38>/Logical Operator' */
  boolean_T s39_LogicalOperator;       /* '<S39>/Logical Operator' */
  boolean_T s56_RelationalOperator;    /* '<S56>/Relational Operator' */
  boolean_T s42_light;                 /* '<S37>/Chart' */
  boolean_T s20_LogicalOperator;       /* '<S20>/Logical Operator' */
  rtB_FaultIterator_BuckyWagon_01 s192_FaultIterator;/* '<S192>/Fault Iterator' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem2;/* '<S11>/Enabled Subsystem2' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem1;/* '<S11>/Enabled Subsystem1' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem;/* '<S11>/Enabled Subsystem' */
  rtB_Chart_BuckyWagon_01 s11_sf_Chart;/* '<S11>/Chart' */
  rtB_Downsapmle_BuckyWagon_01 s127_sf_Downsapmle1;/* '<S127>/Downsapmle1' */
  rtB_Downsapmle_BuckyWagon_01 s127_sf_Downsapmle;/* '<S127>/Downsapmle' */
} BlockIO_BuckyWagon_01;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s230_UnitDelay1_DSTATE;       /* '<S230>/Unit Delay1' */
  real_T s341_UnitDelay_DSTATE;        /* '<S341>/Unit Delay' */
  real_T s232_UnitDelay1_DSTATE;       /* '<S232>/Unit Delay1' */
  real_T s357_UnitDelay_DSTATE;        /* '<S357>/Unit Delay' */
  real_T s157_UnitDelay_DSTATE;        /* '<S157>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s231_UnitDelay1_DSTATE;       /* '<S231>/Unit Delay1' */
  real_T s349_UnitDelay_DSTATE;        /* '<S349>/Unit Delay' */
  real_T s114_UnitDelay_DSTATE;        /* '<S114>/Unit Delay' */
  real_T s127_UnitDelay1_DSTATE;       /* '<S127>/Unit Delay1' */
  real_T s117_UnitDelay_DSTATE;        /* '<S117>/Unit Delay' */
  real_T s127_UnitDelay_DSTATE;        /* '<S127>/Unit Delay' */
  real_T s126_UnitDelay_DSTATE;        /* '<S126>/Unit Delay' */
  real_T s233_UnitDelay_DSTATE;        /* '<S233>/Unit Delay' */
  real_T s163_UnitDelay_DSTATE;        /* '<S163>/Unit Delay' */
  real_T s163_UnitDelay1_DSTATE;       /* '<S163>/Unit Delay1' */
  real_T s162_UnitDelay_DSTATE;        /* '<S162>/Unit Delay' */
  real_T s162_UnitDelay1_DSTATE;       /* '<S162>/Unit Delay1' */
  real_T s135_UnitDelay_DSTATE;        /* '<S135>/Unit Delay' */
  real_T s109_UnitDelay_DSTATE;        /* '<S109>/Unit Delay' */
  real_T s71_UnitDelay2_DSTATE;        /* '<S71>/Unit Delay2' */
  real_T s170_timer;                   /* '<S122>/Chart' */
  real_T s150_brakeCounts;             /* '<S119>/Chart' */
  int32_T s170_sfEvent;                /* '<S122>/Chart' */
  uint32_T s120_motohawk_delta_time_DWORK1;/* '<S120>/motohawk_delta_time' */
  uint32_T s360_motohawk_delta_time_DWORK1;/* '<S360>/motohawk_delta_time' */
  uint32_T s114_motohawk_delta_time_DWORK1;/* '<S114>/motohawk_delta_time' */
  uint32_T s127_motohawk_delta_time2_DWORK1;/* '<S127>/motohawk_delta_time2' */
  uint32_T s127_motohawk_delta_time1_DWORK1;/* '<S127>/motohawk_delta_time1' */
  uint32_T s126_motohawk_delta_time_DWORK1;/* '<S126>/motohawk_delta_time' */
  uint32_T s233_motohawk_delta_time_DWORK1;/* '<S233>/motohawk_delta_time' */
  uint32_T s165_motohawk_delta_time_DWORK1;/* '<S165>/motohawk_delta_time' */
  uint32_T s164_motohawk_delta_time_DWORK1;/* '<S164>/motohawk_delta_time' */
  uint32_T s150_counts;                /* '<S119>/Chart' */
  uint32_T s132_motohawk_delta_time_DWORK1;/* '<S132>/motohawk_delta_time' */
  uint32_T s109_motohawk_delta_time_DWORK1;/* '<S109>/motohawk_delta_time' */
  uint32_T s28_motohawk_delta_time_DWORK1;/* '<S28>/motohawk_delta_time' */
  uint32_T s27_motohawk_delta_time_DWORK1;/* '<S27>/motohawk_delta_time' */
  int16_T s56_UnitDelay_DSTATE;        /* '<S56>/Unit Delay' */
  uint16_T s367_UnitDelay_DSTATE;      /* '<S367>/Unit Delay' */
  uint16_T s367_UnitDelay1_DSTATE;     /* '<S367>/Unit Delay1' */
  int16_T s309_timer;                  /* '<S299>/Chart' */
  uint16_T s106_motohawk_fault_def5_DWORK1;/* '<S106>/motohawk_fault_def5' */
  uint16_T s42_timer;                  /* '<S37>/Chart' */
  uint8_T s192_UnitDelay_DSTATE[27];   /* '<S192>/Unit Delay' */
  boolean_T s115_UnitDelay_DSTATE;     /* '<S115>/Unit Delay' */
  boolean_T s107_UnitDelay_DSTATE;     /* '<S107>/Unit Delay' */
  boolean_T s192_UnitDelay1_DSTATE;    /* '<S192>/Unit Delay1' */
  boolean_T s11_UnitDelay_DSTATE;      /* '<S11>/Unit Delay' */
  boolean_T s166_UnitDelay_DSTATE;     /* '<S166>/Unit Delay' */
  boolean_T s167_UnitDelay_DSTATE;     /* '<S167>/Unit Delay' */
  boolean_T s368_UnitDelay_DSTATE;     /* '<S368>/Unit Delay' */
  boolean_T s378_UnitDelay_DSTATE;     /* '<S378>/Unit Delay' */
  boolean_T s366_UnitDelay5_DSTATE;    /* '<S366>/Unit Delay5' */
  boolean_T s366_UnitDelay2_DSTATE;    /* '<S366>/Unit Delay2' */
  boolean_T s366_UnitDelay_DSTATE;     /* '<S366>/Unit Delay' */
  boolean_T s366_UnitDelay1_DSTATE;    /* '<S366>/Unit Delay1' */
  boolean_T s366_UnitDelay3_DSTATE;    /* '<S366>/Unit Delay3' */
  boolean_T s366_UnitDelay4_DSTATE;    /* '<S366>/Unit Delay4' */
  uint8_T s2_motohawk_trigger1_DWORK1; /* '<S2>/motohawk_trigger1' */
  uint8_T s2_motohawk_trigger_DWORK1;  /* '<S2>/motohawk_trigger' */
  uint8_T s205_is_active_c3_BuckyWagon_01;/* '<S192>/Chart' */
  uint8_T s205_is_c3_BuckyWagon_01;    /* '<S192>/Chart' */
  uint8_T s205_is_Fault;               /* '<S192>/Chart' */
  uint8_T s309_is_active_c32_BuckyWagon_01;/* '<S299>/Chart' */
  uint8_T s309_is_c32_BuckyWagon_01;   /* '<S299>/Chart' */
  uint8_T s170_is_active_c1_BuckyWagon_01;/* '<S122>/Chart' */
  uint8_T s170_is_c1_BuckyWagon_01;    /* '<S122>/Chart' */
  uint8_T s170_is_active_ButtonDebounce;/* '<S122>/Chart' */
  uint8_T s170_is_ButtonDebounce;      /* '<S122>/Chart' */
  uint8_T s170_is_active_ReverseLogic; /* '<S122>/Chart' */
  uint8_T s170_is_ReverseLogic;        /* '<S122>/Chart' */
  uint8_T s150_is_active_c9_BuckyWagon_01;/* '<S119>/Chart' */
  uint8_T s150_is_c9_BuckyWagon_01;    /* '<S119>/Chart' */
  uint8_T s150_is_LowSpeedManeuvering; /* '<S119>/Chart' */
  uint8_T s150_is_NormalDriving;       /* '<S119>/Chart' */
  uint8_T s145_is_active_c5_BuckyWagon_01;/* '<S141>/Inverter Overheat Logic' */
  uint8_T s145_is_c5_BuckyWagon_01;    /* '<S141>/Inverter Overheat Logic' */
  uint8_T s66_is_active_c7_BuckyWagon_01;/* '<S17>/Chart' */
  uint8_T s66_is_c7_BuckyWagon_01;     /* '<S17>/Chart' */
  uint8_T s42_is_active_c6_BuckyWagon_01;/* '<S37>/Chart' */
  uint8_T s42_is_c6_BuckyWagon_01;     /* '<S37>/Chart' */
  boolean_T s105_TimeSinceEnabledWithInput1_MODE;/* '<S105>/Time Since Enabled (With Input)1' */
  boolean_T s12_TimeSinceEnabledWithInput1_MODE;/* '<S12>/Time Since Enabled (With Input)1' */
  boolean_T s41_EnabledSubsystem_MODE; /* '<S41>/Enabled Subsystem' */
  rtDW_FaultIterator_BuckyWagon_01 s192_FaultIterator;/* '<S192>/Fault Iterator' */
  rtDW_Chart_BuckyWagon_01 s11_sf_Chart;/* '<S11>/Chart' */
  rtDW_Downsapmle_BuckyWagon_01 s127_sf_Downsapmle1;/* '<S127>/Downsapmle1' */
  rtDW_Downsapmle_BuckyWagon_01 s127_sf_Downsapmle;/* '<S127>/Downsapmle' */
} D_Work_BuckyWagon_01;

/* Zero-crossing (trigger) state */
typedef struct {
  rtZCE_Chart_BuckyWagon_01 s11_sf_Chart;/* '<S11>/Chart' */
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S366>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S366>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S366>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S366>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S370>/Clear' */
  ZCSigState Clear_Trig_ZCE_f;         /* '<S369>/Clear' */
} PrevZCSigStates_BuckyWagon_01;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s194_Saturation3;       /* '<S194>/Saturation3' */
  const int16_T s194_DataTypeConversion3;/* '<S194>/Data Type Conversion3' */
  const boolean_T s114_DataTypeConversion;/* '<S114>/Data Type Conversion' */
} ConstBlockIO_BuckyWagon_01;

/* Constant parameters (auto storage) */
typedef struct {
  /* Expression: int32(miniviewSetup('barMax'))
   * Referenced by: '<S11>/Constant6'
   */
  int32_T Constant6_Value[18];

  /* Computed Parameter: Constant7_Value
   * Referenced by: '<S11>/Constant7'
   */
  int16_T Constant7_Value[18];

  /* Expression: uint8([' Exit ' 0 0 0 0 0 0 0 ' Single ' 0 0 0 0 0 ' Dual Upper ' 0 ' Dual Lower ' 0 ' Quad UL ' 0 0 0 0 ' Quad UR ' 0 0 0 0 ' Quad DL ' 0 0 0 0 ' Quad DR ' 0 0 0 0])
   * Referenced by: '<S11>/Constant8'
   */
  uint8_T Constant8_Value[104];

  /* Expression: uint8(miniviewSetup('names'))
   * Referenced by: '<S11>/Constant4'
   */
  uint8_T Constant4_Value_o[180];

  /* Expression: uint8(miniviewSetup('namesline1'))
   * Referenced by: '<S11>/Constant2'
   */
  uint8_T Constant2_Value_f[126];

  /* Expression: uint8(miniviewSetup('namesline2'))
   * Referenced by: '<S11>/Constant3'
   */
  uint8_T Constant3_Value[126];

  /* Expression: uint8(miniviewSetup('barGraphMode'))
   * Referenced by: '<S11>/Constant5'
   */
  uint8_T Constant5_Value[18];

  /* Computed Parameter: CombinatorialLogic_table
   * Referenced by: '<S115>/Combinatorial  Logic'
   */
  boolean_T CombinatorialLogic_table[8];
} ConstParam_BuckyWagon_01;

/* Real-time Model Data Structure */
struct RT_MODEL_BuckyWagon_01 {
  const char_T *errorStatus;
};

/* Block signals (auto storage) */
extern BlockIO_BuckyWagon_01 BuckyWagon_01_B;

/* Block states (auto storage) */
extern D_Work_BuckyWagon_01 BuckyWagon_01_DWork;
extern const ConstBlockIO_BuckyWagon_01 BuckyWagon_01_ConstB;/* constant block i/o */

/* Constant parameters (auto storage) */
extern const ConstParam_BuckyWagon_01 BuckyWagon_01_ConstP;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_BuckyWagon_01 BuckyWagon_01_PrevZCSigState;

/* Model entry point functions */
extern void BuckyWagon_01_initialize(boolean_T firstTime);
extern void BuckyWagon_01_step(void);
extern void BuckyWagon_01_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_BuckyWagon_01 *const BuckyWagon_01_M;

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
 * '<Root>' : BuckyWagon_01
 * '<S1>'   : BuckyWagon_01/Build Toolchain (GCC)
 * '<S2>'   : BuckyWagon_01/Foreground
 * '<S3>'   : BuckyWagon_01/Main Power Relay
 * '<S4>'   : BuckyWagon_01/onTimeCount
 * '<S5>'   : BuckyWagon_01/shutdown
 * '<S6>'   : BuckyWagon_01/startup
 * '<S7>'   : BuckyWagon_01/Foreground/Actuators
 * '<S8>'   : BuckyWagon_01/Foreground/Addl_Fault_Detection
 * '<S9>'   : BuckyWagon_01/Foreground/Control Strategy
 * '<S10>'  : BuckyWagon_01/Foreground/Gauges
 * '<S11>'  : BuckyWagon_01/Foreground/MiniViewDisplay
 * '<S12>'  : BuckyWagon_01/Foreground/Sensors
 * '<S13>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller
 * '<S14>'  : BuckyWagon_01/Foreground/Actuators/Analog Out
 * '<S15>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller
 * '<S16>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump
 * '<S17>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller
 * '<S18>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger
 * '<S19>'  : BuckyWagon_01/Foreground/Actuators/Solectria Controller
 * '<S20>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic
 * '<S21>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5
 * '<S22>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6
 * '<S23>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7
 * '<S24>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8
 * '<S25>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Compare To Constant
 * '<S26>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Compare To Constant1
 * '<S27>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Time Since Enabled (With Input)1
 * '<S28>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Time Since Enabled (With Input)2
 * '<S29>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/NewValue
 * '<S30>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/OldValue
 * '<S31>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/NewValue
 * '<S32>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/OldValue
 * '<S33>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/NewValue
 * '<S34>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/OldValue
 * '<S35>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/NewValue
 * '<S36>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/OldValue
 * '<S37>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator
 * '<S38>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1
 * '<S39>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2
 * '<S40>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2
 * '<S41>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/ReverseInd
 * '<S42>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart
 * '<S43>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3
 * '<S44>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/NewValue
 * '<S45>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/OldValue
 * '<S46>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units
 * '<S47>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/NewValue
 * '<S48>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/OldValue
 * '<S49>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units
 * '<S50>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/NewValue
 * '<S51>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/OldValue
 * '<S52>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/Saturation
 * '<S53>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2
 * '<S54>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/NewValue
 * '<S55>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/OldValue
 * '<S56>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/ReverseInd/Enabled Subsystem
 * '<S57>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4
 * '<S58>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/NewValue
 * '<S59>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/OldValue
 * '<S60>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1
 * '<S61>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4
 * '<S62>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/NewValue
 * '<S63>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/OldValue
 * '<S64>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/NewValue
 * '<S65>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/OldValue
 * '<S66>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/Chart
 * '<S67>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/Message Counter
 * '<S68>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs
 * '<S69>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1
 * '<S70>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs2
 * '<S71>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/Message Counter/Counter
 * '<S72>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/NewValue
 * '<S73>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/OldValue
 * '<S74>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/NewValue
 * '<S75>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/OldValue
 * '<S76>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs2/NewValue
 * '<S77>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs2/OldValue
 * '<S78>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1
 * '<S79>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2
 * '<S80>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3
 * '<S81>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4
 * '<S82>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5
 * '<S83>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/NewValue
 * '<S84>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/OldValue
 * '<S85>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/NewValue
 * '<S86>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/OldValue
 * '<S87>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/NewValue
 * '<S88>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/OldValue
 * '<S89>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/NewValue
 * '<S90>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/OldValue
 * '<S91>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/NewValue
 * '<S92>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/OldValue
 * '<S93>'  : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs
 * '<S94>'  : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1
 * '<S95>'  : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2
 * '<S96>'  : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3
 * '<S97>'  : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/NewValue
 * '<S98>'  : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/OldValue
 * '<S99>'  : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/NewValue
 * '<S100>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/OldValue
 * '<S101>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/NewValue
 * '<S102>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/OldValue
 * '<S103>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/NewValue
 * '<S104>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/OldValue
 * '<S105>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery
 * '<S106>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/LowVoltageSystem
 * '<S107>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive
 * '<S108>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management
 * '<S109>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Time Since Enabled (With Input)1
 * '<S110>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management/SOCAlert
 * '<S111>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management/SOCShutdown
 * '<S112>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Compare To Constant
 * '<S113>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Hysterisis
 * '<S114>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Integrator
 * '<S115>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Hysterisis/Hysteresis
 * '<S116>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Integrator/Saturation
 * '<S117>' : BuckyWagon_01/Foreground/Control Strategy/Calculations
 * '<S118>' : BuckyWagon_01/Foreground/Control Strategy/Drive
 * '<S119>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl
 * '<S120>' : BuckyWagon_01/Foreground/Control Strategy/First Order Low Pass (Tunable)
 * '<S121>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller
 * '<S122>' : BuckyWagon_01/Foreground/Control Strategy/Reverse
 * '<S123>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs
 * '<S124>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_table_1d
 * '<S125>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_table_1d1
 * '<S126>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/Odometer
 * '<S127>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1
 * '<S128>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle
 * '<S129>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle1
 * '<S130>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving
 * '<S131>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management
 * '<S132>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)
 * '<S133>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen
 * '<S134>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/motohawk_table_1d
 * '<S135>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S136>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs
 * '<S137>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_table_2d
 * '<S138>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/NewValue
 * '<S139>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/OldValue
 * '<S140>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/DriverDemandBase
 * '<S141>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Overheat Clip
 * '<S142>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Regen
 * '<S143>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/SOC Clip
 * '<S144>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Torque Total Clip
 * '<S145>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Inverter Overheat Logic
 * '<S146>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Overheat Clip1
 * '<S147>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Overheat Clip1/Saturation
 * '<S148>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/SOC Clip/Saturation
 * '<S149>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Torque Total Clip/Saturation
 * '<S150>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/Chart
 * '<S151>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs
 * '<S152>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1
 * '<S153>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/NewValue
 * '<S154>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/OldValue
 * '<S155>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/NewValue
 * '<S156>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/OldValue
 * '<S157>' : BuckyWagon_01/Foreground/Control Strategy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S158>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Battery has passed power-on-self-test and is ready
 * '<S159>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller
 * '<S160>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Main contactors closed and ready
 * '<S161>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2
 * '<S162>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay falling edge
 * '<S163>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay rising edge
 * '<S164>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Time Since Enabled (With Input)1
 * '<S165>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Time Since Enabled (With Input)3
 * '<S166>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay falling edge/MotoHawk S-R Flip-Flop
 * '<S167>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay rising edge/MotoHawk S-R Flip-Flop
 * '<S168>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/NewValue
 * '<S169>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/OldValue
 * '<S170>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/Chart
 * '<S171>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs
 * '<S172>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/NewValue
 * '<S173>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/OldValue
 * '<S174>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/NewValue
 * '<S175>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/OldValue
 * '<S176>' : BuckyWagon_01/Foreground/MiniViewDisplay/Chart
 * '<S177>' : BuckyWagon_01/Foreground/MiniViewDisplay/Clear Screen
 * '<S178>' : BuckyWagon_01/Foreground/MiniViewDisplay/Down Button
 * '<S179>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Bitmap
 * '<S180>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw HLine
 * '<S181>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Rect
 * '<S182>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw String
 * '<S183>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Vline
 * '<S184>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem
 * '<S185>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem1
 * '<S186>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem2
 * '<S187>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem
 * '<S188>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem1
 * '<S189>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem2
 * '<S190>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem3
 * '<S191>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem4
 * '<S192>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName
 * '<S193>' : BuckyWagon_01/Foreground/MiniViewDisplay/Menu Button
 * '<S194>' : BuckyWagon_01/Foreground/MiniViewDisplay/Scale Data
 * '<S195>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient
 * '<S196>' : BuckyWagon_01/Foreground/MiniViewDisplay/Set GUI Mode
 * '<S197>' : BuckyWagon_01/Foreground/MiniViewDisplay/Up Button
 * '<S198>' : BuckyWagon_01/Foreground/MiniViewDisplay/Clear Screen/Clear Screen
 * '<S199>' : BuckyWagon_01/Foreground/MiniViewDisplay/Down Button/Subsystem
 * '<S200>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Bitmap/Subsystem
 * '<S201>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw HLine/Subsystem
 * '<S202>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Rect/Subsystem
 * '<S203>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw String/Subsystem
 * '<S204>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Vline/Subsystem
 * '<S205>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/Chart
 * '<S206>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/Fault Iterator
 * '<S207>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/getStringLength
 * '<S208>' : BuckyWagon_01/Foreground/MiniViewDisplay/Menu Button/Subsystem
 * '<S209>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem
 * '<S210>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem
 * '<S211>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1
 * '<S212>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 0)
 * '<S213>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 1)
 * '<S214>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 2)
 * '<S215>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem/Compare To Zero
 * '<S216>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem/Enabled Subsystem
 * '<S217>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1/Compare To Zero
 * '<S218>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1/Enabled Subsystem
 * '<S219>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 0)/Subsystem
 * '<S220>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 1)/Subsystem
 * '<S221>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 2)/Subsystem
 * '<S222>' : BuckyWagon_01/Foreground/MiniViewDisplay/Set GUI Mode/Subsystem
 * '<S223>' : BuckyWagon_01/Foreground/MiniViewDisplay/Up Button/Subsystem
 * '<S224>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs
 * '<S225>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1
 * '<S226>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs
 * '<S227>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs
 * '<S228>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger
 * '<S229>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs
 * '<S230>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization
 * '<S231>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1
 * '<S232>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2
 * '<S233>' : BuckyWagon_01/Foreground/Sensors/Time Since Enabled (With Input)1
 * '<S234>' : BuckyWagon_01/Foreground/Sensors/Time Since Key On
 * '<S235>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed
 * '<S236>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1
 * '<S237>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant4
 * '<S238>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant5
 * '<S239>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant6
 * '<S240>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs
 * '<S241>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1
 * '<S242>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2
 * '<S243>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4
 * '<S244>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5
 * '<S245>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/NewValue
 * '<S246>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/OldValue
 * '<S247>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/NewValue
 * '<S248>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/OldValue
 * '<S249>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/NewValue
 * '<S250>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/OldValue
 * '<S251>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/NewValue
 * '<S252>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/OldValue
 * '<S253>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/NewValue
 * '<S254>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/OldValue
 * '<S255>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units
 * '<S256>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/NewValue
 * '<S257>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/OldValue
 * '<S258>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/Compare To Constant3
 * '<S259>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1
 * '<S260>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10
 * '<S261>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2
 * '<S262>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3
 * '<S263>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7
 * '<S264>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8
 * '<S265>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9
 * '<S266>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/NewValue
 * '<S267>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/OldValue
 * '<S268>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/NewValue
 * '<S269>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/OldValue
 * '<S270>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/NewValue
 * '<S271>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/OldValue
 * '<S272>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/NewValue
 * '<S273>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/OldValue
 * '<S274>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/NewValue
 * '<S275>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/OldValue
 * '<S276>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/NewValue
 * '<S277>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/OldValue
 * '<S278>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/NewValue
 * '<S279>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/OldValue
 * '<S280>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1
 * '<S281>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10
 * '<S282>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2
 * '<S283>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3
 * '<S284>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8
 * '<S285>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9
 * '<S286>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/NewValue
 * '<S287>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/OldValue
 * '<S288>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/NewValue
 * '<S289>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/OldValue
 * '<S290>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/NewValue
 * '<S291>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/OldValue
 * '<S292>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/NewValue
 * '<S293>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/OldValue
 * '<S294>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/NewValue
 * '<S295>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/OldValue
 * '<S296>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/NewValue
 * '<S297>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/OldValue
 * '<S298>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/Compare To Constant
 * '<S299>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/PluggedInDetect
 * '<S300>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1
 * '<S301>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2
 * '<S302>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3
 * '<S303>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4
 * '<S304>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5
 * '<S305>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6
 * '<S306>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7
 * '<S307>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8
 * '<S308>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9
 * '<S309>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart
 * '<S310>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/NewValue
 * '<S311>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/OldValue
 * '<S312>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/NewValue
 * '<S313>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/OldValue
 * '<S314>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/NewValue
 * '<S315>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/OldValue
 * '<S316>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/NewValue
 * '<S317>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/OldValue
 * '<S318>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/NewValue
 * '<S319>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/OldValue
 * '<S320>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/NewValue
 * '<S321>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/OldValue
 * '<S322>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/NewValue
 * '<S323>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/OldValue
 * '<S324>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/NewValue
 * '<S325>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/OldValue
 * '<S326>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/NewValue
 * '<S327>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/OldValue
 * '<S328>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/Compare To Constant7
 * '<S329>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/Compare To Constant8
 * '<S330>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1
 * '<S331>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2
 * '<S332>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/NewValue
 * '<S333>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/OldValue
 * '<S334>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/NewValue
 * '<S335>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/OldValue
 * '<S336>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/First Order Low Pass
 * '<S337>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem
 * '<S338>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem1
 * '<S339>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem2
 * '<S340>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override
 * '<S341>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S342>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/NewValue
 * '<S343>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/OldValue
 * '<S344>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/First Order Low Pass
 * '<S345>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem
 * '<S346>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem1
 * '<S347>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem2
 * '<S348>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override
 * '<S349>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S350>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/NewValue
 * '<S351>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/OldValue
 * '<S352>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/First Order Low Pass
 * '<S353>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem
 * '<S354>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem1
 * '<S355>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem2
 * '<S356>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override
 * '<S357>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/First Order Low Pass/First Order Low Pass
 * '<S358>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/NewValue
 * '<S359>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/OldValue
 * '<S360>' : BuckyWagon_01/Foreground/Sensors/Time Since Key On/Time Since Enabled (With Input)2
 * '<S361>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs
 * '<S362>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/NewValue
 * '<S363>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/OldValue
 * '<S364>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/NewValue
 * '<S365>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/OldValue
 * '<S366>' : BuckyWagon_01/Main Power Relay/Background
 * '<S367>' : BuckyWagon_01/Main Power Relay/Background/Delay
 * '<S368>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Boolean
 * '<S369>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call
 * '<S370>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1
 * '<S371>' : BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off
 * '<S372>' : BuckyWagon_01/Main Power Relay/Background/Processor Reboot
 * '<S373>' : BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off
 * '<S374>' : BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128
 * '<S375>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs
 * '<S376>' : BuckyWagon_01/Main Power Relay/Background/motohawk_restore_nvmem
 * '<S377>' : BuckyWagon_01/Main Power Relay/Background/motohawk_store_nvmem
 * '<S378>' : BuckyWagon_01/Main Power Relay/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S379>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call/Clear
 * '<S380>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1/Clear
 * '<S381>' : BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S382>' : BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S383>' : BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S384>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/NewValue
 * '<S385>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BuckyWagon_01_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
