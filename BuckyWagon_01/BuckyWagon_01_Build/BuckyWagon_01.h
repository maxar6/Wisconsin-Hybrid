/*
 * File: BuckyWagon_01.h
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1586
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Apr 29 19:20:54 2019
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
  real_T s215_InputVoltage;            /* '<S215>/Read CAN Message2' */
  real_T s215_OutputVoltage;           /* '<S215>/Read CAN Message2' */
  real_T s215_InputCurrentLimitMax;    /* '<S215>/Read CAN Message2' */
  real_T s215_InputCurrent;            /* '<S215>/Read CAN Message2' */
  real_T s215_OutputCurrent;           /* '<S215>/Read CAN Message2' */
  real_T s215_Eaton_HV_Charger_Temperature;/* '<S215>/Read CAN Message2' */
  real_T s215_IgnitionStatus;          /* '<S215>/Read CAN Message2' */
  real_T s215_ChargerState;            /* '<S215>/Read CAN Message2' */
  real_T s215_FaultSeverityIndicator;  /* '<S215>/Read CAN Message2' */
  real_T s215_MessageCounter;          /* '<S215>/Read CAN Message2' */
  real_T s215_MessageChecksum;         /* '<S215>/Read CAN Message2' */
  real_T s362_Merge;                   /* '<S362>/Merge' */
  real_T s222_Abs;                     /* '<S222>/Abs' */
  real_T s211_DataTypeConversion;      /* '<S211>/Data Type Conversion' */
  real_T s216_Saturation;              /* '<S216>/Saturation' */
  real_T s337_Merge;                   /* '<S337>/Merge' */
  real_T s218_Saturation;              /* '<S218>/Saturation' */
  real_T s353_Merge;                   /* '<S353>/Merge' */
  real_T s17_Motor_Torque;             /* '<S17>/Product1' */
  real_T s143_Sum1;                    /* '<S143>/Sum1' */
  real_T s125_Merge;                   /* '<S125>/Merge' */
  real_T s17_InReverse;                /* '<S17>/Data Type Conversion' */
  real_T s119_Switch1;                 /* '<S119>/Switch1' */
  real_T s119_Switch;                  /* '<S119>/Switch' */
  real_T s78_Merge;                    /* '<S78>/Merge' */
  real_T s79_Merge;                    /* '<S79>/Merge' */
  real_T s93_Switch;                   /* '<S93>/Switch' */
  real_T s95_Merge;                    /* '<S95>/Merge' */
  real_T s217_Sum1;                    /* '<S217>/Sum1' */
  real_T s345_Merge;                   /* '<S345>/Merge' */
  real_T s115_Switch1;                 /* '<S115>/Switch1' */
  real_T s357_Sum;                     /* '<S357>/Sum' */
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
  real_T s221_Accurate_Torque;         /* '<S221>/Read CAN Message3' */
  real_T s221_Accurate_Voltage;        /* '<S221>/Read CAN Message3' */
  real_T s221_Accurate_Current;        /* '<S221>/Read CAN Message3' */
  real_T s221_Accurate_Speed;          /* '<S221>/Read CAN Message3' */
  real_T s221_Inverter_Temperature;    /* '<S221>/Read CAN Message6' */
  real_T s221_Rotor_Temp;              /* '<S221>/Read CAN Message6' */
  real_T s221_Stator_Temp;             /* '<S221>/Read CAN Message6' */
  real_T s221_Leg_Current;             /* '<S221>/Read CAN Message5' */
  real_T s221_High_Bound;              /* '<S221>/Read CAN Message5' */
  real_T s221_Low_Bound;               /* '<S221>/Read CAN Message5' */
  real_T s221_Stall_Safety_Percentage; /* '<S221>/Read CAN Message5' */
  real_T s221_Angular_Distance;        /* '<S221>/Read CAN Message5' */
  real_T s221_Torque_Desired;          /* '<S221>/Read CAN Message5' */
  real_T s221_Command_Watchdog_Status; /* '<S221>/Read CAN Message1' */
  real_T s221_Status_A;                /* '<S221>/Read CAN Message1' */
  real_T s221_Software_Release_Sub_Version;/* '<S221>/Read CAN Message1' */
  real_T s221_Software_Release_Minor_Version;/* '<S221>/Read CAN Message1' */
  real_T s221_Software_Release_Major_Version;/* '<S221>/Read CAN Message1' */
  real_T s221_Status_C;                /* '<S221>/Read CAN Message1' */
  real_T s221_Watchdog_Error;          /* '<S221>/Read CAN Message1' */
  real_T s221_Derate;                  /* '<S221>/Read CAN Message2' */
  real_T s221_Shutdown;                /* '<S221>/Read CAN Message2' */
  real_T s221_Not_Enabled;             /* '<S221>/Read CAN Message4' */
  real_T s221_Not_Enabled_Histroy;     /* '<S221>/Read CAN Message4' */
  real_T s221_Over_Leg_Current;        /* '<S221>/Read CAN Message4' */
  real_T s221_Over_Leg_Current_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Over_Bus_Current;        /* '<S221>/Read CAN Message4' */
  real_T s221_Over_Bus_Current_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Over_Phase_Advance;      /* '<S221>/Read CAN Message4' */
  real_T s221_Over_Phase_Advance_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Under_Voltage_Warning;   /* '<S221>/Read CAN Message4' */
  real_T s221_Under_Voltage_Warning_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Rotor_Over_Temperature;  /* '<S221>/Read CAN Message4' */
  real_T s221_Rotor_Over_Temperature_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Stator_Over_Temperature; /* '<S221>/Read CAN Message4' */
  real_T s221_Stator_Over_Temperature_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Inverter_Over_Temperature;/* '<S221>/Read CAN Message4' */
  real_T s221_Inverter_Over_Temperature_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Over_Speed_Warning;      /* '<S221>/Read CAN Message4' */
  real_T s221_Over_Speed_Warning_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Over_Voltage_Warning;    /* '<S221>/Read CAN Message4' */
  real_T s221_Over_Voltage_Warning_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Over_Speed_Alarm;        /* '<S221>/Read CAN Message4' */
  real_T s221_Over_Speed_Alarm_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Over_Voltage_Alarm;      /* '<S221>/Read CAN Message4' */
  real_T s221_Over_Voltage_Alarm_History;/* '<S221>/Read CAN Message4' */
  real_T s221_ADC_Calibration_Problem; /* '<S221>/Read CAN Message4' */
  real_T s221_ADC_Calibration_Problem_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Limp_Home_Mode;          /* '<S221>/Read CAN Message4' */
  real_T s221_Limp_Home_Mode_History;  /* '<S221>/Read CAN Message4' */
  real_T s221_Inverter_Fault_Occured;  /* '<S221>/Read CAN Message4' */
  real_T s221_Iverter_Fault_Occured_History;/* '<S221>/Read CAN Message4' */
  real_T s221_Inverter_Fault;          /* '<S221>/Read CAN Message4' */
  real_T s221_Inverter_Fault_History;  /* '<S221>/Read CAN Message4' */
  real_T s221_Forced_Voltage_Control;  /* '<S221>/Read CAN Message4' */
  real_T s221_CAN_Limits_In_Effect;    /* '<S221>/Read CAN Message4' */
  real_T s221_System_Disabled_In_Motion;/* '<S221>/Read CAN Message4' */
  real_T s221_ABC_Phase_Order;         /* '<S221>/Read CAN Message4' */
  real_T s221_Regen_Switch_Open;       /* '<S221>/Read CAN Message4' */
  real_T s221_Current_Transducer_Fault_IbusIleg;/* '<S221>/Read CAN Message4' */
  real_T s221_Acceleration_Limited;    /* '<S221>/Read CAN Message4' */
  real_T s221_Using_Raw_Speed;         /* '<S221>/Read CAN Message4' */
  real_T s221_Turbo_Mode;              /* '<S221>/Read CAN Message4' */
  real_T s221_Forced_Open_Loop;        /* '<S221>/Read CAN Message4' */
  real_T s221_Motor_Stalled;           /* '<S221>/Read CAN Message4' */
  real_T s221_Phase_Current_Sensor_Error;/* '<S221>/Read CAN Message4' */
  real_T s221_Bad_Position_Signal;     /* '<S221>/Read CAN Message4' */
  real_T s221_Bad_Switch;              /* '<S221>/Read CAN Message4' */
  real_T s221_Invalid_Power_Supply;    /* '<S221>/Read CAN Message4' */
  real_T s221_Power_Switches_Off;      /* '<S221>/Read CAN Message4' */
  real_T s219_UnitDelay;               /* '<S219>/Unit Delay' */
  real_T s214_ReadCANMessage_o2;       /* '<S214>/Read CAN Message' */
  real_T s214_EMP_Pump_Status;         /* '<S214>/Read CAN Message' */
  real_T s214_EMP_Pump_Mode;           /* '<S214>/Read CAN Message' */
  real_T s214_EMP_Pump_Speed;          /* '<S214>/Read CAN Message' */
  real_T s214_EMP_Board_Temp;          /* '<S214>/Read CAN Message' */
  real_T s214_EMP_Pump_Power;          /* '<S214>/Read CAN Message' */
  real_T s214_EMP_Speed_Percent;       /* '<S214>/Read CAN Message' */
  real_T s213_ReadCANMessage_o2;       /* '<S213>/Read CAN Message' */
  real_T s213_EMP_Pump_Status;         /* '<S213>/Read CAN Message' */
  real_T s213_EMP_Pump_Mode;           /* '<S213>/Read CAN Message' */
  real_T s213_EMP_Pump_Speed;          /* '<S213>/Read CAN Message' */
  real_T s213_EMP_Board_Temp;          /* '<S213>/Read CAN Message' */
  real_T s213_EMP_Pump_Power;          /* '<S213>/Read CAN Message' */
  real_T s213_EMP_Speed_Percent;       /* '<S213>/Read CAN Message' */
  real_T s212_ReadCANMessage_o2;       /* '<S212>/Read CAN Message' */
  real_T s212_EHPAS_Input_Voltage;     /* '<S212>/Read CAN Message' */
  real_T s212_EHPAS_Input_Current_NA;  /* '<S212>/Read CAN Message' */
  real_T s212_EHPAS_Pump_Speed;        /* '<S212>/Read CAN Message' */
  real_T s212_EHPAS_TempMax;           /* '<S212>/Read CAN Message' */
  real_T s212_EHPAS_TempCur;           /* '<S212>/Read CAN Message' */
  real_T s212_EHPAS_Op_State;          /* '<S212>/Read CAN Message' */
  real_T s212_EHPAS_Fault;             /* '<S212>/Read CAN Message' */
  real_T s210_bcm_alarm;               /* '<S210>/Read CAN Message1' */
  real_T s210_bcm_cpwr_cmd;            /* '<S210>/Read CAN Message1' */
  real_T s210_bcm_cpwr_mon;            /* '<S210>/Read CAN Message1' */
  real_T s210_bcm_epo;                 /* '<S210>/Read CAN Message1' */
  real_T s210_bcm_gfd;                 /* '<S210>/Read CAN Message1' */
  real_T s210_bcm_hvil_mon;            /* '<S210>/Read CAN Message1' */
  real_T s210_bcm_ibat;                /* '<S210>/Read CAN Message1' */
  real_T s210_bcm_ready;               /* '<S210>/Read CAN Message1' */
  real_T s210_bcm_soc;                 /* '<S210>/Read CAN Message1' */
  real_T s210_bcm_vbat;                /* '<S210>/Read CAN Message1' */
  real_T s210_bcm_chg_done;            /* '<S210>/Read CAN Message1' */
  real_T s210_bcm_cool_req;            /* '<S210>/Read CAN Message1' */
  real_T s231_Merge;                   /* '<S231>/Merge' */
  real_T s210_bcm_soc_j;               /* '<S210>/Gain1' */
  real_T s230_Merge;                   /* '<S230>/Merge' */
  real_T s210_bcm_cell_tmax;           /* '<S210>/Read CAN Message6' */
  real_T s210_bcm_cell_tmin;           /* '<S210>/Read CAN Message6' */
  real_T s210_bcm_cell_vmax;           /* '<S210>/Read CAN Message6' */
  real_T s210_bcm_cell_vmin;           /* '<S210>/Read CAN Message6' */
  real_T s210_bcm_chga_ena;            /* '<S210>/Read CAN Message6' */
  real_T s210_bcm_chga_mon;            /* '<S210>/Read CAN Message6' */
  real_T s210_bcm_lvbat;               /* '<S210>/Read CAN Message6' */
  real_T s210_bcm_mod_ena;             /* '<S210>/Read CAN Message6' */
  real_T s210_bcm_veh_mon;             /* '<S210>/Read CAN Message6' */
  real_T s210_bcm_cell_overvolt;       /* '<S210>/Read CAN Message5' */
  real_T s210_bcm_chg_buf;             /* '<S210>/Read CAN Message5' */
  real_T s210_bcm_chg_max;             /* '<S210>/Read CAN Message5' */
  real_T s210_bcm_dis_buf;             /* '<S210>/Read CAN Message5' */
  real_T s210_bcm_dis_max;             /* '<S210>/Read CAN Message5' */
  real_T s210_bcm_t_coolant;           /* '<S210>/Read CAN Message5' */
  real_T s229_Merge;                   /* '<S229>/Merge' */
  real_T s124_Abs;                     /* '<S124>/Abs' */
  real_T s157_Merge;                   /* '<S157>/Merge' */
  real_T s156_inReverse;               /* '<S124>/Chart' */
  real_T s132_Saturation1;             /* '<S132>/Saturation1' */
  real_T s132_Product;                 /* '<S132>/Product' */
  real_T s132_Product2;                /* '<S132>/Product2' */
  real_T s110_UnitDelay;               /* '<S110>/Unit Delay' */
  real_T s75_Merge;                    /* '<S75>/Merge' */
  real_T s69_Merge;                    /* '<S69>/Merge' */
  real_T s51_Merge;                    /* '<S51>/Merge' */
  real_T s60_MinMax1;                  /* '<S60>/MinMax1' */
  uint32_T s215_AgeCount;              /* '<S215>/Read CAN Message2' */
  uint32_T s221_AgeCount;              /* '<S221>/Read CAN Message3' */
  uint32_T s221_AgeCount_l;            /* '<S221>/Read CAN Message6' */
  uint32_T s221_AgeCount_j;            /* '<S221>/Read CAN Message5' */
  uint32_T s214_AgeCount;              /* '<S214>/Read CAN Message' */
  uint32_T s213_AgeCount;              /* '<S213>/Read CAN Message' */
  uint32_T s212_AgeCount;              /* '<S212>/Read CAN Message' */
  uint32_T s210_AgeCount;              /* '<S210>/Read CAN Message1' */
  uint32_T s210_AgeCount_e;            /* '<S210>/Read CAN Message6' */
  uint32_T s210_AgeCount_k;            /* '<S210>/Read CAN Message5' */
  uint32_T s13_ReadCANRaw_o2;          /* '<S13>/Read CAN Raw' */
  uint32_T s13_ReadCANRaw_o4;          /* '<S13>/Read CAN Raw' */
  uint32_T s14_motohawk_calibration;   /* '<S14>/motohawk_calibration' */
  int16_T s18_DataTypeConversion;      /* '<S18>/Data Type Conversion' */
  int16_T s18_DataTypeConversion2;     /* '<S18>/Data Type Conversion2' */
  int16_T s18_DataTypeConversion1;     /* '<S18>/Data Type Conversion1' */
  int16_T s19_TmpSignalConversionAtChartInport20[18];/* '<S19>/Scale Data' */
  uint16_T s20_motohawk_ain;           /* '<S20>/motohawk_ain' */
  uint16_T s20_motohawk_ain1;          /* '<S20>/motohawk_ain1' */
  uint16_T s20_motohawk_ain5;          /* '<S20>/motohawk_ain5' */
  uint16_T s191_minTimer;              /* '<S178>/Chart' */
  uint16_T s191_scrollTimer;           /* '<S178>/Chart' */
  uint16_T s14_motohawk_calibration3;  /* '<S14>/motohawk_calibration3' */
  uint8_T s80_Merge;                   /* '<S80>/Merge' */
  uint8_T s18_DataTypeConversion7;     /* '<S18>/Data Type Conversion7' */
  uint8_T s18_Data;                    /* '<S18>/Data Type Conversion4' */
  uint8_T s18_Product;                 /* '<S18>/Product' */
  uint8_T s18_Volt;                    /* '<S18>/Data Type Conversion3' */
  uint8_T s18_MinMax;                  /* '<S18>/MinMax' */
  uint8_T s18_DataTypeConversion10;    /* '<S18>/Data Type Conversion10' */
  uint8_T s19_motohawk_data_read1;     /* '<S19>/motohawk_data_read1' */
  uint8_T s19_motohawk_data_read3;     /* '<S19>/motohawk_data_read3' */
  uint8_T s19_motohawk_data_read2[2];  /* '<S19>/motohawk_data_read2' */
  uint8_T s19_motohawk_data_read[4];   /* '<S19>/motohawk_data_read' */
  uint8_T s19_motohawk_data_read4;     /* '<S19>/motohawk_data_read4' */
  uint8_T s209_upcount;                /* '<S209>/Read CAN Message' */
  uint8_T s194_menucount;              /* '<S194>/Read CAN Message' */
  uint8_T s191_mode;                   /* '<S178>/Chart' */
  uint8_T s191_text[10];               /* '<S178>/Chart' */
  uint8_T s191_scrollIndex;            /* '<S178>/Chart' */
  uint8_T s185_downcount;              /* '<S185>/Read CAN Message' */
  uint8_T s139_PumpState;              /* '<S121>/Chart' */
  uint8_T s23_OperatingMode_cmd;       /* '<S23>/Switch' */
  uint8_T s21_Switch;                  /* '<S21>/Switch' */
  uint8_T s13_ReadCANRaw_o5;           /* '<S13>/Read CAN Raw' */
  uint8_T s13_ReadCANRaw_o6[8];        /* '<S13>/Read CAN Raw' */
  boolean_T s223_Merge;                /* '<S223>/Merge' */
  boolean_T s242_Merge;                /* '<S242>/Merge' */
  boolean_T s81_Merge;                 /* '<S81>/Merge' */
  boolean_T s82_Merge;                 /* '<S82>/Merge' */
  boolean_T s94_Merge;                 /* '<S94>/Merge' */
  boolean_T s96_Merge;                 /* '<S96>/Merge' */
  boolean_T s108_LogicalOperator;      /* '<S108>/Logical Operator' */
  boolean_T s209_upasserted;           /* '<S209>/Read CAN Message' */
  boolean_T s194_menuasserted;         /* '<S194>/Read CAN Message' */
  boolean_T s185_downasserted;         /* '<S185>/Read CAN Message' */
  boolean_T s221_RelationalOperator;   /* '<S221>/Relational Operator' */
  boolean_T s314_pluggedIn;            /* '<S304>/Chart' */
  boolean_T s210_bcm_mainc_stat;       /* '<S210>/Read CAN Message1' */
  boolean_T s210_bcm_chgc_stat;        /* '<S210>/Read CAN Message1' */
  boolean_T s227_Merge;                /* '<S227>/Merge' */
  boolean_T s228_Merge;                /* '<S228>/Merge' */
  boolean_T s210_bcm_cell_undervolt;   /* '<S210>/Read CAN Message5' */
  boolean_T s123_LogicalOperator;      /* '<S123>/Logical Operator' */
  boolean_T s46_LogicalOperator;       /* '<S46>/Logical Operator' */
  boolean_T s47_LogicalOperator;       /* '<S47>/Logical Operator' */
  boolean_T s64_RelationalOperator;    /* '<S64>/Relational Operator' */
  boolean_T s50_light;                 /* '<S45>/Chart' */
  boolean_T s28_LogicalOperator;       /* '<S28>/Logical Operator' */
  boolean_T s13_ReadCANRaw_o1;         /* '<S13>/Read CAN Raw' */
  boolean_T s13_ReadCANRaw_o3;         /* '<S13>/Read CAN Raw' */
  rtB_FaultIterator_BuckyWagon_01 s178_FaultIterator;/* '<S178>/Fault Iterator' */
  rtB_EnabledSubsystem_BuckyWagon_01 s19_EnabledSubsystem2;/* '<S19>/Enabled Subsystem2' */
  rtB_EnabledSubsystem_BuckyWagon_01 s19_EnabledSubsystem1;/* '<S19>/Enabled Subsystem1' */
  rtB_EnabledSubsystem_BuckyWagon_01 s19_EnabledSubsystem;/* '<S19>/Enabled Subsystem' */
  rtB_Chart_BuckyWagon_01 s19_sf_Chart;/* '<S19>/Chart' */
  rtB_Downsapmle_BuckyWagon_01 s127_sf_Downsapmle1;/* '<S127>/Downsapmle1' */
  rtB_Downsapmle_BuckyWagon_01 s127_sf_Downsapmle;/* '<S127>/Downsapmle' */
} BlockIO_BuckyWagon_01;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s216_UnitDelay1_DSTATE;       /* '<S216>/Unit Delay1' */
  real_T s338_UnitDelay_DSTATE;        /* '<S338>/Unit Delay' */
  real_T s218_UnitDelay1_DSTATE;       /* '<S218>/Unit Delay1' */
  real_T s354_UnitDelay_DSTATE;        /* '<S354>/Unit Delay' */
  real_T s143_UnitDelay_DSTATE;        /* '<S143>/Unit Delay' */
  real_T s217_UnitDelay1_DSTATE;       /* '<S217>/Unit Delay1' */
  real_T s346_UnitDelay_DSTATE;        /* '<S346>/Unit Delay' */
  real_T s115_UnitDelay_DSTATE;        /* '<S115>/Unit Delay' */
  real_T s127_UnitDelay1_DSTATE;       /* '<S127>/Unit Delay1' */
  real_T s118_UnitDelay_DSTATE;        /* '<S118>/Unit Delay' */
  real_T s127_UnitDelay_DSTATE;        /* '<S127>/Unit Delay' */
  real_T s126_UnitDelay_DSTATE;        /* '<S126>/Unit Delay' */
  real_T s361_UnitDelay_DSTATE;        /* '<S361>/Unit Delay' */
  real_T s219_UnitDelay_DSTATE;        /* '<S219>/Unit Delay' */
  real_T s149_UnitDelay_DSTATE;        /* '<S149>/Unit Delay' */
  real_T s149_UnitDelay1_DSTATE;       /* '<S149>/Unit Delay1' */
  real_T s148_UnitDelay_DSTATE;        /* '<S148>/Unit Delay' */
  real_T s148_UnitDelay1_DSTATE;       /* '<S148>/Unit Delay1' */
  real_T s134_UnitDelay_DSTATE;        /* '<S134>/Unit Delay' */
  real_T s110_UnitDelay_DSTATE;        /* '<S110>/Unit Delay' */
  real_T s156_timer;                   /* '<S124>/Chart' */
  real_T s139_brakeCounts;             /* '<S121>/Chart' */
  int32_T s156_sfEvent;                /* '<S124>/Chart' */
  uint32_T s122_motohawk_delta_time_DWORK1;/* '<S122>/motohawk_delta_time' */
  uint32_T s115_motohawk_delta_time_DWORK1;/* '<S115>/motohawk_delta_time' */
  uint32_T s357_motohawk_delta_time_DWORK1;/* '<S357>/motohawk_delta_time' */
  uint32_T s127_motohawk_delta_time2_DWORK1;/* '<S127>/motohawk_delta_time2' */
  uint32_T s127_motohawk_delta_time1_DWORK1;/* '<S127>/motohawk_delta_time1' */
  uint32_T s126_motohawk_delta_time_DWORK1;/* '<S126>/motohawk_delta_time' */
  uint32_T s361_motohawk_delta_time_DWORK1;/* '<S361>/motohawk_delta_time' */
  uint32_T s219_motohawk_delta_time_DWORK1;/* '<S219>/motohawk_delta_time' */
  uint32_T s151_motohawk_delta_time_DWORK1;/* '<S151>/motohawk_delta_time' */
  uint32_T s150_motohawk_delta_time_DWORK1;/* '<S150>/motohawk_delta_time' */
  uint32_T s139_counts;                /* '<S121>/Chart' */
  uint32_T s131_motohawk_delta_time_DWORK1;/* '<S131>/motohawk_delta_time' */
  uint32_T s110_motohawk_delta_time_DWORK1;/* '<S110>/motohawk_delta_time' */
  uint32_T s36_motohawk_delta_time_DWORK1;/* '<S36>/motohawk_delta_time' */
  uint32_T s35_motohawk_delta_time_DWORK1;/* '<S35>/motohawk_delta_time' */
  int16_T s64_UnitDelay_DSTATE;        /* '<S64>/Unit Delay' */
  uint16_T s368_UnitDelay_DSTATE;      /* '<S368>/Unit Delay' */
  uint16_T s368_UnitDelay1_DSTATE;     /* '<S368>/Unit Delay1' */
  int16_T s314_timer;                  /* '<S304>/Chart' */
  uint16_T s107_motohawk_fault_def5_DWORK1;/* '<S107>/motohawk_fault_def5' */
  uint16_T s50_timer;                  /* '<S45>/Chart' */
  uint8_T s97_Output_DSTATE;           /* '<S97>/Output' */
  uint8_T s178_UnitDelay_DSTATE[27];   /* '<S178>/Unit Delay' */
  boolean_T s116_UnitDelay_DSTATE;     /* '<S116>/Unit Delay' */
  boolean_T s108_UnitDelay_DSTATE;     /* '<S108>/Unit Delay' */
  boolean_T s178_UnitDelay1_DSTATE;    /* '<S178>/Unit Delay1' */
  boolean_T s19_UnitDelay_DSTATE;      /* '<S19>/Unit Delay' */
  boolean_T s152_UnitDelay_DSTATE;     /* '<S152>/Unit Delay' */
  boolean_T s153_UnitDelay_DSTATE;     /* '<S153>/Unit Delay' */
  boolean_T s369_UnitDelay_DSTATE;     /* '<S369>/Unit Delay' */
  boolean_T s379_UnitDelay_DSTATE;     /* '<S379>/Unit Delay' */
  boolean_T s367_UnitDelay5_DSTATE;    /* '<S367>/Unit Delay5' */
  boolean_T s367_UnitDelay2_DSTATE;    /* '<S367>/Unit Delay2' */
  boolean_T s367_UnitDelay_DSTATE;     /* '<S367>/Unit Delay' */
  boolean_T s367_UnitDelay1_DSTATE;    /* '<S367>/Unit Delay1' */
  boolean_T s367_UnitDelay3_DSTATE;    /* '<S367>/Unit Delay3' */
  boolean_T s367_UnitDelay4_DSTATE;    /* '<S367>/Unit Delay4' */
  uint8_T s2_motohawk_trigger1_DWORK1; /* '<S2>/motohawk_trigger1' */
  uint8_T s9_motohawk_trigger1_DWORK1; /* '<S9>/motohawk_trigger1' */
  uint8_T s9_motohawk_trigger_DWORK1;  /* '<S9>/motohawk_trigger' */
  uint8_T s9_motohawk_trigger2_DWORK1; /* '<S9>/motohawk_trigger2' */
  uint8_T s9_motohawk_trigger3_DWORK1; /* '<S9>/motohawk_trigger3' */
  uint8_T s9_motohawk_trigger4_DWORK1; /* '<S9>/motohawk_trigger4' */
  uint8_T s9_motohawk_trigger5_DWORK1; /* '<S9>/motohawk_trigger5' */
  uint8_T s9_motohawk_trigger6_DWORK1; /* '<S9>/motohawk_trigger6' */
  uint8_T s9_motohawk_trigger7_DWORK1; /* '<S9>/motohawk_trigger7' */
  uint8_T s8_motohawk_trigger1_DWORK1; /* '<S8>/motohawk_trigger1' */
  uint8_T s3_motohawk_trigger1_DWORK1; /* '<S3>/motohawk_trigger1' */
  uint8_T s3_motohawk_trigger_DWORK1;  /* '<S3>/motohawk_trigger' */
  uint8_T s191_is_active_c3_BuckyWagon_01;/* '<S178>/Chart' */
  uint8_T s191_is_c3_BuckyWagon_01;    /* '<S178>/Chart' */
  uint8_T s191_is_Fault;               /* '<S178>/Chart' */
  uint8_T s314_is_active_c32_BuckyWagon_01;/* '<S304>/Chart' */
  uint8_T s314_is_c32_BuckyWagon_01;   /* '<S304>/Chart' */
  uint8_T s156_is_active_c1_BuckyWagon_01;/* '<S124>/Chart' */
  uint8_T s156_is_c1_BuckyWagon_01;    /* '<S124>/Chart' */
  uint8_T s156_is_active_ButtonDebounce;/* '<S124>/Chart' */
  uint8_T s156_is_ButtonDebounce;      /* '<S124>/Chart' */
  uint8_T s156_is_active_ReverseLogic; /* '<S124>/Chart' */
  uint8_T s156_is_ReverseLogic;        /* '<S124>/Chart' */
  uint8_T s139_is_active_c9_BuckyWagon_01;/* '<S121>/Chart' */
  uint8_T s139_is_c9_BuckyWagon_01;    /* '<S121>/Chart' */
  uint8_T s139_is_LowSpeedManeuvering; /* '<S121>/Chart' */
  uint8_T s139_is_NormalDriving;       /* '<S121>/Chart' */
  uint8_T s50_is_active_c6_BuckyWagon_01;/* '<S45>/Chart' */
  uint8_T s50_is_c6_BuckyWagon_01;     /* '<S45>/Chart' */
  boolean_T s106_TimeSinceEnabledWithInput1_MODE;/* '<S106>/Time Since Enabled (With Input)1' */
  boolean_T s20_TimeSinceEnabledWithInput1_MODE;/* '<S20>/Time Since Enabled (With Input)1' */
  boolean_T s49_EnabledSubsystem_MODE; /* '<S49>/Enabled Subsystem' */
  rtDW_FaultIterator_BuckyWagon_01 s178_FaultIterator;/* '<S178>/Fault Iterator' */
  rtDW_Chart_BuckyWagon_01 s19_sf_Chart;/* '<S19>/Chart' */
  rtDW_Downsapmle_BuckyWagon_01 s127_sf_Downsapmle1;/* '<S127>/Downsapmle1' */
  rtDW_Downsapmle_BuckyWagon_01 s127_sf_Downsapmle;/* '<S127>/Downsapmle' */
} D_Work_BuckyWagon_01;

/* Zero-crossing (trigger) state */
typedef struct {
  rtZCE_Chart_BuckyWagon_01 s19_sf_Chart;/* '<S19>/Chart' */
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S367>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S367>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S367>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S367>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S371>/Clear' */
  ZCSigState Clear_Trig_ZCE_f;         /* '<S370>/Clear' */
} PrevZCSigStates_BuckyWagon_01;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s180_Saturation3;       /* '<S180>/Saturation3' */
  const int16_T s180_DataTypeConversion3;/* '<S180>/Data Type Conversion3' */
  const boolean_T s115_DataTypeConversion;/* '<S115>/Data Type Conversion' */
} ConstBlockIO_BuckyWagon_01;

/* Constant parameters (auto storage) */
typedef struct {
  /* Expression: int32(miniviewSetup('barMax'))
   * Referenced by: '<S19>/Constant6'
   */
  int32_T Constant6_Value[18];

  /* Computed Parameter: Constant7_Value
   * Referenced by: '<S19>/Constant7'
   */
  int16_T Constant7_Value[18];

  /* Expression: uint8([' Exit ' 0 0 0 0 0 0 0 ' Single ' 0 0 0 0 0 ' Dual Upper ' 0 ' Dual Lower ' 0 ' Quad UL ' 0 0 0 0 ' Quad UR ' 0 0 0 0 ' Quad DL ' 0 0 0 0 ' Quad DR ' 0 0 0 0])
   * Referenced by: '<S19>/Constant8'
   */
  uint8_T Constant8_Value[104];

  /* Expression: uint8(miniviewSetup('names'))
   * Referenced by: '<S19>/Constant4'
   */
  uint8_T Constant4_Value_o[180];

  /* Expression: uint8(miniviewSetup('namesline1'))
   * Referenced by: '<S19>/Constant2'
   */
  uint8_T Constant2_Value_f[126];

  /* Expression: uint8(miniviewSetup('namesline2'))
   * Referenced by: '<S19>/Constant3'
   */
  uint8_T Constant3_Value[126];

  /* Expression: uint8(miniviewSetup('barGraphMode'))
   * Referenced by: '<S19>/Constant5'
   */
  uint8_T Constant5_Value[18];

  /* Computed Parameter: CombinatorialLogic_table
   * Referenced by: '<S116>/Combinatorial  Logic'
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
 * '<S2>'   : BuckyWagon_01/CCP CAN Protocol
 * '<S3>'   : BuckyWagon_01/Foreground
 * '<S4>'   : BuckyWagon_01/Main Power Relay
 * '<S5>'   : BuckyWagon_01/onTimeCount
 * '<S6>'   : BuckyWagon_01/shutdown
 * '<S7>'   : BuckyWagon_01/startup
 * '<S8>'   : BuckyWagon_01/CCP CAN Protocol/CCP CAN Protocol External Trig1
 * '<S9>'   : BuckyWagon_01/CCP CAN Protocol/CCP Triggers
 * '<S10>'  : BuckyWagon_01/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver
 * '<S11>'  : BuckyWagon_01/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Daq Processing
 * '<S12>'  : BuckyWagon_01/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP IDLE Processing
 * '<S13>'  : BuckyWagon_01/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command
 * '<S14>'  : BuckyWagon_01/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command/Adjust ID
 * '<S15>'  : BuckyWagon_01/Foreground/Actuators
 * '<S16>'  : BuckyWagon_01/Foreground/Addl_Fault_Detection
 * '<S17>'  : BuckyWagon_01/Foreground/Control Strategy
 * '<S18>'  : BuckyWagon_01/Foreground/Gauges
 * '<S19>'  : BuckyWagon_01/Foreground/MiniViewDisplay
 * '<S20>'  : BuckyWagon_01/Foreground/Sensors
 * '<S21>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller
 * '<S22>'  : BuckyWagon_01/Foreground/Actuators/Analog Out
 * '<S23>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller
 * '<S24>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump
 * '<S25>'  : BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan
 * '<S26>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger
 * '<S27>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor
 * '<S28>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic
 * '<S29>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5
 * '<S30>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6
 * '<S31>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7
 * '<S32>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8
 * '<S33>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Compare To Constant
 * '<S34>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Compare To Constant1
 * '<S35>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Time Since Enabled (With Input)1
 * '<S36>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Time Since Enabled (With Input)2
 * '<S37>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/NewValue
 * '<S38>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/OldValue
 * '<S39>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/NewValue
 * '<S40>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/OldValue
 * '<S41>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/NewValue
 * '<S42>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/OldValue
 * '<S43>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/NewValue
 * '<S44>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/OldValue
 * '<S45>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator
 * '<S46>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1
 * '<S47>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2
 * '<S48>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2
 * '<S49>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/ReverseInd
 * '<S50>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart
 * '<S51>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3
 * '<S52>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/NewValue
 * '<S53>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/OldValue
 * '<S54>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units
 * '<S55>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/NewValue
 * '<S56>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/OldValue
 * '<S57>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units
 * '<S58>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/NewValue
 * '<S59>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/OldValue
 * '<S60>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/Saturation
 * '<S61>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2
 * '<S62>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/NewValue
 * '<S63>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/OldValue
 * '<S64>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/ReverseInd/Enabled Subsystem
 * '<S65>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/Compare To Constant
 * '<S66>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4
 * '<S67>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/NewValue
 * '<S68>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/OldValue
 * '<S69>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1
 * '<S70>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4
 * '<S71>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/NewValue
 * '<S72>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/OldValue
 * '<S73>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/NewValue
 * '<S74>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/OldValue
 * '<S75>'  : BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan/motohawk_override_abs1
 * '<S76>'  : BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan/motohawk_override_abs1/NewValue
 * '<S77>'  : BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan/motohawk_override_abs1/OldValue
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
 * '<S93>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/Counter
 * '<S94>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs1
 * '<S95>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs2
 * '<S96>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs5
 * '<S97>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/Counter/Counter Limited
 * '<S98>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/Counter/Counter Limited/Increment Real World
 * '<S99>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/Counter/Counter Limited/Wrap To Zero
 * '<S100>' : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs1/NewValue
 * '<S101>' : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs1/OldValue
 * '<S102>' : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs2/NewValue
 * '<S103>' : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs2/OldValue
 * '<S104>' : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs5/NewValue
 * '<S105>' : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs5/OldValue
 * '<S106>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery
 * '<S107>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/LowVoltageSystem
 * '<S108>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive
 * '<S109>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management
 * '<S110>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Time Since Enabled (With Input)1
 * '<S111>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management/SOCAlert
 * '<S112>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management/SOCShutdown
 * '<S113>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Compare To Constant
 * '<S114>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Hysterisis
 * '<S115>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Integrator
 * '<S116>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Hysterisis/Hysteresis
 * '<S117>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Integrator/Saturation
 * '<S118>' : BuckyWagon_01/Foreground/Control Strategy/Calculations
 * '<S119>' : BuckyWagon_01/Foreground/Control Strategy/Cooling
 * '<S120>' : BuckyWagon_01/Foreground/Control Strategy/Drive
 * '<S121>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl
 * '<S122>' : BuckyWagon_01/Foreground/Control Strategy/First Order Low Pass (Tunable)
 * '<S123>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller
 * '<S124>' : BuckyWagon_01/Foreground/Control Strategy/Reverse
 * '<S125>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs
 * '<S126>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/Odometer
 * '<S127>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1
 * '<S128>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle
 * '<S129>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle1
 * '<S130>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving
 * '<S131>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)
 * '<S132>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen
 * '<S133>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/motohawk_table_1d
 * '<S134>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S135>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs
 * '<S136>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_table_2d
 * '<S137>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/NewValue
 * '<S138>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/OldValue
 * '<S139>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/Chart
 * '<S140>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1
 * '<S141>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/NewValue
 * '<S142>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/OldValue
 * '<S143>' : BuckyWagon_01/Foreground/Control Strategy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S144>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Battery has passed power-on-self-test and is ready
 * '<S145>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller
 * '<S146>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Main contactors closed and ready
 * '<S147>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2
 * '<S148>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay falling edge
 * '<S149>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay rising edge
 * '<S150>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Time Since Enabled (With Input)1
 * '<S151>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Time Since Enabled (With Input)3
 * '<S152>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay falling edge/MotoHawk S-R Flip-Flop
 * '<S153>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay rising edge/MotoHawk S-R Flip-Flop
 * '<S154>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/NewValue
 * '<S155>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/OldValue
 * '<S156>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/Chart
 * '<S157>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs
 * '<S158>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/NewValue
 * '<S159>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/OldValue
 * '<S160>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/NewValue
 * '<S161>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/OldValue
 * '<S162>' : BuckyWagon_01/Foreground/MiniViewDisplay/Chart
 * '<S163>' : BuckyWagon_01/Foreground/MiniViewDisplay/Clear Screen
 * '<S164>' : BuckyWagon_01/Foreground/MiniViewDisplay/Down Button
 * '<S165>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Bitmap
 * '<S166>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw HLine
 * '<S167>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Rect
 * '<S168>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw String
 * '<S169>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Vline
 * '<S170>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem
 * '<S171>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem1
 * '<S172>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem2
 * '<S173>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem
 * '<S174>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem1
 * '<S175>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem2
 * '<S176>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem3
 * '<S177>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem4
 * '<S178>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName
 * '<S179>' : BuckyWagon_01/Foreground/MiniViewDisplay/Menu Button
 * '<S180>' : BuckyWagon_01/Foreground/MiniViewDisplay/Scale Data
 * '<S181>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient
 * '<S182>' : BuckyWagon_01/Foreground/MiniViewDisplay/Set GUI Mode
 * '<S183>' : BuckyWagon_01/Foreground/MiniViewDisplay/Up Button
 * '<S184>' : BuckyWagon_01/Foreground/MiniViewDisplay/Clear Screen/Clear Screen
 * '<S185>' : BuckyWagon_01/Foreground/MiniViewDisplay/Down Button/Subsystem
 * '<S186>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Bitmap/Subsystem
 * '<S187>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw HLine/Subsystem
 * '<S188>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Rect/Subsystem
 * '<S189>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw String/Subsystem
 * '<S190>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Vline/Subsystem
 * '<S191>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/Chart
 * '<S192>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/Fault Iterator
 * '<S193>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/getStringLength
 * '<S194>' : BuckyWagon_01/Foreground/MiniViewDisplay/Menu Button/Subsystem
 * '<S195>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem
 * '<S196>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem
 * '<S197>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1
 * '<S198>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 0)
 * '<S199>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 1)
 * '<S200>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 2)
 * '<S201>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem/Compare To Zero
 * '<S202>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem/Enabled Subsystem
 * '<S203>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1/Compare To Zero
 * '<S204>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1/Enabled Subsystem
 * '<S205>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 0)/Subsystem
 * '<S206>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 1)/Subsystem
 * '<S207>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 2)/Subsystem
 * '<S208>' : BuckyWagon_01/Foreground/MiniViewDisplay/Set GUI Mode/Subsystem
 * '<S209>' : BuckyWagon_01/Foreground/MiniViewDisplay/Up Button/Subsystem
 * '<S210>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs
 * '<S211>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1
 * '<S212>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs
 * '<S213>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs
 * '<S214>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs
 * '<S215>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger
 * '<S216>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization
 * '<S217>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1
 * '<S218>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2
 * '<S219>' : BuckyWagon_01/Foreground/Sensors/Time Since Enabled (With Input)1
 * '<S220>' : BuckyWagon_01/Foreground/Sensors/Time Since Key On
 * '<S221>' : BuckyWagon_01/Foreground/Sensors/UQM Motor Inouts
 * '<S222>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed
 * '<S223>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1
 * '<S224>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant4
 * '<S225>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant5
 * '<S226>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant6
 * '<S227>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs
 * '<S228>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1
 * '<S229>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2
 * '<S230>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4
 * '<S231>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5
 * '<S232>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/NewValue
 * '<S233>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/OldValue
 * '<S234>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/NewValue
 * '<S235>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/OldValue
 * '<S236>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/NewValue
 * '<S237>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/OldValue
 * '<S238>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/NewValue
 * '<S239>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/OldValue
 * '<S240>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/NewValue
 * '<S241>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/OldValue
 * '<S242>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units
 * '<S243>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/NewValue
 * '<S244>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/OldValue
 * '<S245>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/Compare To Constant3
 * '<S246>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1
 * '<S247>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10
 * '<S248>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2
 * '<S249>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3
 * '<S250>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7
 * '<S251>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8
 * '<S252>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9
 * '<S253>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/NewValue
 * '<S254>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/OldValue
 * '<S255>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/NewValue
 * '<S256>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/OldValue
 * '<S257>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/NewValue
 * '<S258>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/OldValue
 * '<S259>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/NewValue
 * '<S260>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/OldValue
 * '<S261>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/NewValue
 * '<S262>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/OldValue
 * '<S263>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/NewValue
 * '<S264>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/OldValue
 * '<S265>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/NewValue
 * '<S266>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/OldValue
 * '<S267>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1
 * '<S268>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10
 * '<S269>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2
 * '<S270>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3
 * '<S271>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8
 * '<S272>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9
 * '<S273>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/NewValue
 * '<S274>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/OldValue
 * '<S275>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/NewValue
 * '<S276>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/OldValue
 * '<S277>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/NewValue
 * '<S278>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/OldValue
 * '<S279>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/NewValue
 * '<S280>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/OldValue
 * '<S281>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/NewValue
 * '<S282>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/OldValue
 * '<S283>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/NewValue
 * '<S284>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/OldValue
 * '<S285>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs1
 * '<S286>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs10
 * '<S287>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs2
 * '<S288>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs3
 * '<S289>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs8
 * '<S290>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs9
 * '<S291>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs1/NewValue
 * '<S292>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs1/OldValue
 * '<S293>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs10/NewValue
 * '<S294>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs10/OldValue
 * '<S295>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs2/NewValue
 * '<S296>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs2/OldValue
 * '<S297>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs3/NewValue
 * '<S298>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs3/OldValue
 * '<S299>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs8/NewValue
 * '<S300>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs8/OldValue
 * '<S301>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs9/NewValue
 * '<S302>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs9/OldValue
 * '<S303>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/Compare To Constant
 * '<S304>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/PluggedInDetect
 * '<S305>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1
 * '<S306>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2
 * '<S307>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3
 * '<S308>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4
 * '<S309>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5
 * '<S310>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6
 * '<S311>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7
 * '<S312>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8
 * '<S313>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9
 * '<S314>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart
 * '<S315>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/NewValue
 * '<S316>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/OldValue
 * '<S317>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/NewValue
 * '<S318>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/OldValue
 * '<S319>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/NewValue
 * '<S320>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/OldValue
 * '<S321>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/NewValue
 * '<S322>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/OldValue
 * '<S323>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/NewValue
 * '<S324>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/OldValue
 * '<S325>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/NewValue
 * '<S326>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/OldValue
 * '<S327>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/NewValue
 * '<S328>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/OldValue
 * '<S329>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/NewValue
 * '<S330>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/OldValue
 * '<S331>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/NewValue
 * '<S332>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/OldValue
 * '<S333>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/First Order Low Pass
 * '<S334>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem
 * '<S335>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem1
 * '<S336>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem2
 * '<S337>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override
 * '<S338>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S339>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/NewValue
 * '<S340>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/OldValue
 * '<S341>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/First Order Low Pass
 * '<S342>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem
 * '<S343>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem1
 * '<S344>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem2
 * '<S345>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override
 * '<S346>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S347>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/NewValue
 * '<S348>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/OldValue
 * '<S349>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/First Order Low Pass
 * '<S350>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem
 * '<S351>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem1
 * '<S352>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem2
 * '<S353>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override
 * '<S354>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/First Order Low Pass/First Order Low Pass
 * '<S355>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/NewValue
 * '<S356>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/OldValue
 * '<S357>' : BuckyWagon_01/Foreground/Sensors/Time Since Key On/Time Since Enabled (With Input)2
 * '<S358>' : BuckyWagon_01/Foreground/Sensors/UQM Motor Inouts/Compare To Constant1
 * '<S359>' : BuckyWagon_01/Foreground/Sensors/UQM Motor Inouts/Compare To Constant2
 * '<S360>' : BuckyWagon_01/Foreground/Sensors/UQM Motor Inouts/Compare To Constant8
 * '<S361>' : BuckyWagon_01/Foreground/Sensors/UQM Motor Inouts/Time Since Enabled
 * '<S362>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs
 * '<S363>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/NewValue
 * '<S364>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/OldValue
 * '<S365>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/NewValue
 * '<S366>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/OldValue
 * '<S367>' : BuckyWagon_01/Main Power Relay/Background
 * '<S368>' : BuckyWagon_01/Main Power Relay/Background/Delay
 * '<S369>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Boolean
 * '<S370>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call
 * '<S371>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1
 * '<S372>' : BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off
 * '<S373>' : BuckyWagon_01/Main Power Relay/Background/Processor Reboot
 * '<S374>' : BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off
 * '<S375>' : BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128
 * '<S376>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs
 * '<S377>' : BuckyWagon_01/Main Power Relay/Background/motohawk_restore_nvmem
 * '<S378>' : BuckyWagon_01/Main Power Relay/Background/motohawk_store_nvmem
 * '<S379>' : BuckyWagon_01/Main Power Relay/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S380>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call/Clear
 * '<S381>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1/Clear
 * '<S382>' : BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S383>' : BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S384>' : BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S385>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/NewValue
 * '<S386>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BuckyWagon_01_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
