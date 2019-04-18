/*
 * File: BuckyWagon_01.h
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1570
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Wed Apr 17 19:04:03 2019
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
  real_T s217_InputVoltage;            /* '<S217>/Read CAN Message2' */
  real_T s217_OutputVoltage;           /* '<S217>/Read CAN Message2' */
  real_T s217_InputCurrentLimitMax;    /* '<S217>/Read CAN Message2' */
  real_T s217_InputCurrent;            /* '<S217>/Read CAN Message2' */
  real_T s217_OutputCurrent;           /* '<S217>/Read CAN Message2' */
  real_T s217_Eaton_HV_Charger_Temperature;/* '<S217>/Read CAN Message2' */
  real_T s217_IgnitionStatus;          /* '<S217>/Read CAN Message2' */
  real_T s217_ChargerState;            /* '<S217>/Read CAN Message2' */
  real_T s217_FaultSeverityIndicator;  /* '<S217>/Read CAN Message2' */
  real_T s217_MessageCounter;          /* '<S217>/Read CAN Message2' */
  real_T s217_MessageChecksum;         /* '<S217>/Read CAN Message2' */
  real_T s364_Merge;                   /* '<S364>/Merge' */
  real_T s224_Abs;                     /* '<S224>/Abs' */
  real_T s213_DataTypeConversion;      /* '<S213>/Data Type Conversion' */
  real_T s218_Saturation;              /* '<S218>/Saturation' */
  real_T s339_Merge;                   /* '<S339>/Merge' */
  real_T s220_Saturation;              /* '<S220>/Saturation' */
  real_T s355_Merge;                   /* '<S355>/Merge' */
  real_T s9_Motor_Torque;              /* '<S9>/Product1' */
  real_T s145_Sum1;                    /* '<S145>/Sum1' */
  real_T s116_Merge;                   /* '<S116>/Merge' */
  real_T s9_InReverse;                 /* '<S9>/Data Type Conversion' */
  real_T s110_Switch1;                 /* '<S110>/Switch1' */
  real_T s110_Switch;                  /* '<S110>/Switch' */
  real_T s69_Merge;                    /* '<S69>/Merge' */
  real_T s70_Merge;                    /* '<S70>/Merge' */
  real_T s72_Merge;                    /* '<S72>/Merge' */
  real_T s84_Switch;                   /* '<S84>/Switch' */
  real_T s86_Merge;                    /* '<S86>/Merge' */
  real_T s219_Sum1;                    /* '<S219>/Sum1' */
  real_T s347_Merge;                   /* '<S347>/Merge' */
  real_T s106_Switch1;                 /* '<S106>/Switch1' */
  real_T s359_Sum;                     /* '<S359>/Sum' */
  real_T s118_Gain1;                   /* '<S118>/Gain1' */
  real_T s118_Gain4;                   /* '<S118>/Gain4' */
  real_T s118_Gain5;                   /* '<S118>/Gain5' */
  real_T s118_Gain6;                   /* '<S118>/Gain6' */
  real_T s118_Gain8;                   /* '<S118>/Gain8' */
  real_T s118_Divide3;                 /* '<S118>/Divide3' */
  real_T s118_Gain;                    /* '<S118>/Gain' */
  real_T s118_Gain3;                   /* '<S118>/Gain3' */
  real_T s118_Divide;                  /* '<S118>/Divide' */
  real_T s118_Saturation;              /* '<S118>/Saturation' */
  real_T s117_Sum1;                    /* '<S117>/Sum1' */
  real_T s117_Sum;                     /* '<S117>/Sum' */
  real_T s223_Accurate_Torque;         /* '<S223>/Read CAN Message3' */
  real_T s223_Accurate_Voltage;        /* '<S223>/Read CAN Message3' */
  real_T s223_Accurate_Current;        /* '<S223>/Read CAN Message3' */
  real_T s223_Accurate_Speed;          /* '<S223>/Read CAN Message3' */
  real_T s223_Inverter_Temperature;    /* '<S223>/Read CAN Message6' */
  real_T s223_Rotor_Temp;              /* '<S223>/Read CAN Message6' */
  real_T s223_Stator_Temp;             /* '<S223>/Read CAN Message6' */
  real_T s223_Leg_Current;             /* '<S223>/Read CAN Message5' */
  real_T s223_High_Bound;              /* '<S223>/Read CAN Message5' */
  real_T s223_Low_Bound;               /* '<S223>/Read CAN Message5' */
  real_T s223_Stall_Safety_Percentage; /* '<S223>/Read CAN Message5' */
  real_T s223_Angular_Distance;        /* '<S223>/Read CAN Message5' */
  real_T s223_Torque_Desired;          /* '<S223>/Read CAN Message5' */
  real_T s223_Command_Watchdog_Status; /* '<S223>/Read CAN Message1' */
  real_T s223_Status_A;                /* '<S223>/Read CAN Message1' */
  real_T s223_Software_Release_Sub_Version;/* '<S223>/Read CAN Message1' */
  real_T s223_Software_Release_Minor_Version;/* '<S223>/Read CAN Message1' */
  real_T s223_Software_Release_Major_Version;/* '<S223>/Read CAN Message1' */
  real_T s223_Status_C;                /* '<S223>/Read CAN Message1' */
  real_T s223_Watchdog_Error;          /* '<S223>/Read CAN Message1' */
  real_T s223_Derate;                  /* '<S223>/Read CAN Message2' */
  real_T s223_Shutdown;                /* '<S223>/Read CAN Message2' */
  real_T s223_Not_Enabled;             /* '<S223>/Read CAN Message4' */
  real_T s223_Not_Enabled_Histroy;     /* '<S223>/Read CAN Message4' */
  real_T s223_Over_Leg_Current;        /* '<S223>/Read CAN Message4' */
  real_T s223_Over_Leg_Current_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Over_Bus_Current;        /* '<S223>/Read CAN Message4' */
  real_T s223_Over_Bus_Current_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Over_Phase_Advance;      /* '<S223>/Read CAN Message4' */
  real_T s223_Over_Phase_Advance_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Under_Voltage_Warning;   /* '<S223>/Read CAN Message4' */
  real_T s223_Under_Voltage_Warning_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Rotor_Over_Temperature;  /* '<S223>/Read CAN Message4' */
  real_T s223_Rotor_Over_Temperature_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Stator_Over_Temperature; /* '<S223>/Read CAN Message4' */
  real_T s223_Stator_Over_Temperature_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Inverter_Over_Temperature;/* '<S223>/Read CAN Message4' */
  real_T s223_Inverter_Over_Temperature_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Over_Speed_Warning;      /* '<S223>/Read CAN Message4' */
  real_T s223_Over_Speed_Warning_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Over_Voltage_Warning;    /* '<S223>/Read CAN Message4' */
  real_T s223_Over_Voltage_Warning_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Over_Speed_Alarm;        /* '<S223>/Read CAN Message4' */
  real_T s223_Over_Speed_Alarm_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Over_Voltage_Alarm;      /* '<S223>/Read CAN Message4' */
  real_T s223_Over_Voltage_Alarm_History;/* '<S223>/Read CAN Message4' */
  real_T s223_ADC_Calibration_Problem; /* '<S223>/Read CAN Message4' */
  real_T s223_ADC_Calibration_Problem_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Limp_Home_Mode;          /* '<S223>/Read CAN Message4' */
  real_T s223_Limp_Home_Mode_History;  /* '<S223>/Read CAN Message4' */
  real_T s223_Inverter_Fault_Occured;  /* '<S223>/Read CAN Message4' */
  real_T s223_Iverter_Fault_Occured_History;/* '<S223>/Read CAN Message4' */
  real_T s223_Inverter_Fault;          /* '<S223>/Read CAN Message4' */
  real_T s223_Inverter_Fault_History;  /* '<S223>/Read CAN Message4' */
  real_T s223_Forced_Voltage_Control;  /* '<S223>/Read CAN Message4' */
  real_T s223_CAN_Limits_In_Effect;    /* '<S223>/Read CAN Message4' */
  real_T s223_System_Disabled_In_Motion;/* '<S223>/Read CAN Message4' */
  real_T s223_ABC_Phase_Order;         /* '<S223>/Read CAN Message4' */
  real_T s223_Regen_Switch_Open;       /* '<S223>/Read CAN Message4' */
  real_T s223_Current_Transducer_Fault_IbusIleg;/* '<S223>/Read CAN Message4' */
  real_T s223_Acceleration_Limited;    /* '<S223>/Read CAN Message4' */
  real_T s223_Using_Raw_Speed;         /* '<S223>/Read CAN Message4' */
  real_T s223_Turbo_Mode;              /* '<S223>/Read CAN Message4' */
  real_T s223_Forced_Open_Loop;        /* '<S223>/Read CAN Message4' */
  real_T s223_Motor_Stalled;           /* '<S223>/Read CAN Message4' */
  real_T s223_Phase_Current_Sensor_Error;/* '<S223>/Read CAN Message4' */
  real_T s223_Bad_Position_Signal;     /* '<S223>/Read CAN Message4' */
  real_T s223_Bad_Switch;              /* '<S223>/Read CAN Message4' */
  real_T s223_Invalid_Power_Supply;    /* '<S223>/Read CAN Message4' */
  real_T s223_Power_Switches_Off;      /* '<S223>/Read CAN Message4' */
  real_T s221_UnitDelay;               /* '<S221>/Unit Delay' */
  real_T s216_ReadCANMessage_o2;       /* '<S216>/Read CAN Message' */
  real_T s216_EMP_Pump_Status;         /* '<S216>/Read CAN Message' */
  real_T s216_EMP_Pump_Mode;           /* '<S216>/Read CAN Message' */
  real_T s216_EMP_Pump_Speed;          /* '<S216>/Read CAN Message' */
  real_T s216_EMP_Board_Temp;          /* '<S216>/Read CAN Message' */
  real_T s216_EMP_Pump_Power;          /* '<S216>/Read CAN Message' */
  real_T s216_EMP_Speed_Percent;       /* '<S216>/Read CAN Message' */
  real_T s215_ReadCANMessage_o2;       /* '<S215>/Read CAN Message' */
  real_T s215_EMP_Pump_Status;         /* '<S215>/Read CAN Message' */
  real_T s215_EMP_Pump_Mode;           /* '<S215>/Read CAN Message' */
  real_T s215_EMP_Pump_Speed;          /* '<S215>/Read CAN Message' */
  real_T s215_EMP_Board_Temp;          /* '<S215>/Read CAN Message' */
  real_T s215_EMP_Pump_Power;          /* '<S215>/Read CAN Message' */
  real_T s215_EMP_Speed_Percent;       /* '<S215>/Read CAN Message' */
  real_T s214_ReadCANMessage_o2;       /* '<S214>/Read CAN Message' */
  real_T s214_EHPAS_Input_Voltage;     /* '<S214>/Read CAN Message' */
  real_T s214_EHPAS_Input_Current_NA;  /* '<S214>/Read CAN Message' */
  real_T s214_EHPAS_Pump_Speed;        /* '<S214>/Read CAN Message' */
  real_T s214_EHPAS_TempMax;           /* '<S214>/Read CAN Message' */
  real_T s214_EHPAS_TempCur;           /* '<S214>/Read CAN Message' */
  real_T s214_EHPAS_Op_State;          /* '<S214>/Read CAN Message' */
  real_T s214_EHPAS_Fault;             /* '<S214>/Read CAN Message' */
  real_T s212_bcm_alarm;               /* '<S212>/Read CAN Message1' */
  real_T s212_bcm_cpwr_cmd;            /* '<S212>/Read CAN Message1' */
  real_T s212_bcm_cpwr_mon;            /* '<S212>/Read CAN Message1' */
  real_T s212_bcm_epo;                 /* '<S212>/Read CAN Message1' */
  real_T s212_bcm_gfd;                 /* '<S212>/Read CAN Message1' */
  real_T s212_bcm_hvil_mon;            /* '<S212>/Read CAN Message1' */
  real_T s212_bcm_ibat;                /* '<S212>/Read CAN Message1' */
  real_T s212_bcm_ready;               /* '<S212>/Read CAN Message1' */
  real_T s212_bcm_soc;                 /* '<S212>/Read CAN Message1' */
  real_T s212_bcm_vbat;                /* '<S212>/Read CAN Message1' */
  real_T s212_bcm_chg_done;            /* '<S212>/Read CAN Message1' */
  real_T s212_bcm_cool_req;            /* '<S212>/Read CAN Message1' */
  real_T s233_Merge;                   /* '<S233>/Merge' */
  real_T s212_bcm_soc_j;               /* '<S212>/Gain1' */
  real_T s232_Merge;                   /* '<S232>/Merge' */
  real_T s212_bcm_cell_tmax;           /* '<S212>/Read CAN Message6' */
  real_T s212_bcm_cell_tmin;           /* '<S212>/Read CAN Message6' */
  real_T s212_bcm_cell_vmax;           /* '<S212>/Read CAN Message6' */
  real_T s212_bcm_cell_vmin;           /* '<S212>/Read CAN Message6' */
  real_T s212_bcm_chga_ena;            /* '<S212>/Read CAN Message6' */
  real_T s212_bcm_chga_mon;            /* '<S212>/Read CAN Message6' */
  real_T s212_bcm_lvbat;               /* '<S212>/Read CAN Message6' */
  real_T s212_bcm_mod_ena;             /* '<S212>/Read CAN Message6' */
  real_T s212_bcm_veh_mon;             /* '<S212>/Read CAN Message6' */
  real_T s212_bcm_cell_overvolt;       /* '<S212>/Read CAN Message5' */
  real_T s212_bcm_chg_buf;             /* '<S212>/Read CAN Message5' */
  real_T s212_bcm_chg_max;             /* '<S212>/Read CAN Message5' */
  real_T s212_bcm_dis_buf;             /* '<S212>/Read CAN Message5' */
  real_T s212_bcm_dis_max;             /* '<S212>/Read CAN Message5' */
  real_T s212_bcm_t_coolant;           /* '<S212>/Read CAN Message5' */
  real_T s231_Merge;                   /* '<S231>/Merge' */
  real_T s115_Abs;                     /* '<S115>/Abs' */
  real_T s159_Merge;                   /* '<S159>/Merge' */
  real_T s158_inReverse;               /* '<S115>/Chart' */
  real_T s131_motohawk_interpolation_2d1;/* '<S131>/motohawk_interpolation_2d1' */
  real_T s131_motohawk_interpolation_2d;/* '<S131>/motohawk_interpolation_2d' */
  real_T s131_Switch;                  /* '<S131>/Switch' */
  real_T s133_motohawk_interpolation_2d;/* '<S133>/motohawk_interpolation_2d' */
  real_T s133_motohawk_interpolation_2d1;/* '<S133>/motohawk_interpolation_2d1' */
  real_T s133_MinMax;                  /* '<S133>/MinMax' */
  real_T s133_Switch;                  /* '<S133>/Switch' */
  real_T s134_motohawk_interpolation_2d1;/* '<S134>/motohawk_interpolation_2d1' */
  real_T s134_motohawk_interpolation_2d;/* '<S134>/motohawk_interpolation_2d' */
  real_T s134_Switch;                  /* '<S134>/Switch' */
  real_T s132_Switch1;                 /* '<S132>/Switch1' */
  real_T s140_MinMax1;                 /* '<S140>/MinMax1' */
  real_T s136_out;                     /* '<S132>/Inverter Overheat Logic' */
  real_T s124_Saturation1;             /* '<S124>/Saturation1' */
  real_T s124_Product;                 /* '<S124>/Product' */
  real_T s124_Product2;                /* '<S124>/Product2' */
  real_T s101_UnitDelay;               /* '<S101>/Unit Delay' */
  real_T s66_Merge;                    /* '<S66>/Merge' */
  real_T s60_Merge;                    /* '<S60>/Merge' */
  real_T s43_Merge;                    /* '<S43>/Merge' */
  real_T s52_MinMax1;                  /* '<S52>/MinMax1' */
  uint32_T s217_AgeCount;              /* '<S217>/Read CAN Message2' */
  uint32_T s223_AgeCount;              /* '<S223>/Read CAN Message3' */
  uint32_T s223_AgeCount_l;            /* '<S223>/Read CAN Message6' */
  uint32_T s223_AgeCount_j;            /* '<S223>/Read CAN Message5' */
  uint32_T s216_AgeCount;              /* '<S216>/Read CAN Message' */
  uint32_T s215_AgeCount;              /* '<S215>/Read CAN Message' */
  uint32_T s214_AgeCount;              /* '<S214>/Read CAN Message' */
  uint32_T s212_AgeCount;              /* '<S212>/Read CAN Message1' */
  uint32_T s212_AgeCount_e;            /* '<S212>/Read CAN Message6' */
  uint32_T s212_AgeCount_k;            /* '<S212>/Read CAN Message5' */
  int16_T s10_DataTypeConversion;      /* '<S10>/Data Type Conversion' */
  int16_T s10_DataTypeConversion2;     /* '<S10>/Data Type Conversion2' */
  int16_T s10_DataTypeConversion1;     /* '<S10>/Data Type Conversion1' */
  int16_T s11_TmpSignalConversionAtChartInport20[18];/* '<S11>/Scale Data' */
  uint16_T s12_motohawk_ain;           /* '<S12>/motohawk_ain' */
  uint16_T s12_motohawk_ain1;          /* '<S12>/motohawk_ain1' */
  uint16_T s12_motohawk_ain5;          /* '<S12>/motohawk_ain5' */
  uint16_T s193_minTimer;              /* '<S180>/Chart' */
  uint16_T s193_scrollTimer;           /* '<S180>/Chart' */
  uint8_T s71_Merge;                   /* '<S71>/Merge' */
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
  uint8_T s211_upcount;                /* '<S211>/Read CAN Message' */
  uint8_T s196_menucount;              /* '<S196>/Read CAN Message' */
  uint8_T s193_mode;                   /* '<S180>/Chart' */
  uint8_T s193_text[10];               /* '<S180>/Chart' */
  uint8_T s193_scrollIndex;            /* '<S180>/Chart' */
  uint8_T s187_downcount;              /* '<S187>/Read CAN Message' */
  uint8_T s141_PumpState;              /* '<S112>/Chart' */
  uint8_T s15_OperatingMode_cmd;       /* '<S15>/Switch' */
  uint8_T s13_Switch;                  /* '<S13>/Switch' */
  boolean_T s225_Merge;                /* '<S225>/Merge' */
  boolean_T s244_Merge;                /* '<S244>/Merge' */
  boolean_T s73_Merge;                 /* '<S73>/Merge' */
  boolean_T s85_Merge;                 /* '<S85>/Merge' */
  boolean_T s87_Merge;                 /* '<S87>/Merge' */
  boolean_T s99_LogicalOperator;       /* '<S99>/Logical Operator' */
  boolean_T s211_upasserted;           /* '<S211>/Read CAN Message' */
  boolean_T s196_menuasserted;         /* '<S196>/Read CAN Message' */
  boolean_T s187_downasserted;         /* '<S187>/Read CAN Message' */
  boolean_T s223_RelationalOperator;   /* '<S223>/Relational Operator' */
  boolean_T s316_pluggedIn;            /* '<S306>/Chart' */
  boolean_T s212_bcm_mainc_stat;       /* '<S212>/Read CAN Message1' */
  boolean_T s212_bcm_chgc_stat;        /* '<S212>/Read CAN Message1' */
  boolean_T s229_Merge;                /* '<S229>/Merge' */
  boolean_T s230_Merge;                /* '<S230>/Merge' */
  boolean_T s212_bcm_cell_undervolt;   /* '<S212>/Read CAN Message5' */
  boolean_T s114_LogicalOperator;      /* '<S114>/Logical Operator' */
  boolean_T s38_LogicalOperator;       /* '<S38>/Logical Operator' */
  boolean_T s39_LogicalOperator;       /* '<S39>/Logical Operator' */
  boolean_T s56_RelationalOperator;    /* '<S56>/Relational Operator' */
  boolean_T s42_light;                 /* '<S37>/Chart' */
  boolean_T s20_LogicalOperator;       /* '<S20>/Logical Operator' */
  rtB_FaultIterator_BuckyWagon_01 s180_FaultIterator;/* '<S180>/Fault Iterator' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem2;/* '<S11>/Enabled Subsystem2' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem1;/* '<S11>/Enabled Subsystem1' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem;/* '<S11>/Enabled Subsystem' */
  rtB_Chart_BuckyWagon_01 s11_sf_Chart;/* '<S11>/Chart' */
  rtB_Downsapmle_BuckyWagon_01 s118_sf_Downsapmle1;/* '<S118>/Downsapmle1' */
  rtB_Downsapmle_BuckyWagon_01 s118_sf_Downsapmle;/* '<S118>/Downsapmle' */
} BlockIO_BuckyWagon_01;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s218_UnitDelay1_DSTATE;       /* '<S218>/Unit Delay1' */
  real_T s340_UnitDelay_DSTATE;        /* '<S340>/Unit Delay' */
  real_T s220_UnitDelay1_DSTATE;       /* '<S220>/Unit Delay1' */
  real_T s356_UnitDelay_DSTATE;        /* '<S356>/Unit Delay' */
  real_T s145_UnitDelay_DSTATE;        /* '<S145>/Unit Delay' */
  real_T s219_UnitDelay1_DSTATE;       /* '<S219>/Unit Delay1' */
  real_T s348_UnitDelay_DSTATE;        /* '<S348>/Unit Delay' */
  real_T s106_UnitDelay_DSTATE;        /* '<S106>/Unit Delay' */
  real_T s118_UnitDelay1_DSTATE;       /* '<S118>/Unit Delay1' */
  real_T s109_UnitDelay_DSTATE;        /* '<S109>/Unit Delay' */
  real_T s118_UnitDelay_DSTATE;        /* '<S118>/Unit Delay' */
  real_T s117_UnitDelay_DSTATE;        /* '<S117>/Unit Delay' */
  real_T s363_UnitDelay_DSTATE;        /* '<S363>/Unit Delay' */
  real_T s221_UnitDelay_DSTATE;        /* '<S221>/Unit Delay' */
  real_T s151_UnitDelay_DSTATE;        /* '<S151>/Unit Delay' */
  real_T s151_UnitDelay1_DSTATE;       /* '<S151>/Unit Delay1' */
  real_T s150_UnitDelay_DSTATE;        /* '<S150>/Unit Delay' */
  real_T s150_UnitDelay1_DSTATE;       /* '<S150>/Unit Delay1' */
  real_T s126_UnitDelay_DSTATE;        /* '<S126>/Unit Delay' */
  real_T s101_UnitDelay_DSTATE;        /* '<S101>/Unit Delay' */
  real_T s158_timer;                   /* '<S115>/Chart' */
  real_T s141_brakeCounts;             /* '<S112>/Chart' */
  int32_T s158_sfEvent;                /* '<S115>/Chart' */
  uint32_T s113_motohawk_delta_time_DWORK1;/* '<S113>/motohawk_delta_time' */
  uint32_T s106_motohawk_delta_time_DWORK1;/* '<S106>/motohawk_delta_time' */
  uint32_T s359_motohawk_delta_time_DWORK1;/* '<S359>/motohawk_delta_time' */
  uint32_T s118_motohawk_delta_time2_DWORK1;/* '<S118>/motohawk_delta_time2' */
  uint32_T s118_motohawk_delta_time1_DWORK1;/* '<S118>/motohawk_delta_time1' */
  uint32_T s117_motohawk_delta_time_DWORK1;/* '<S117>/motohawk_delta_time' */
  uint32_T s363_motohawk_delta_time_DWORK1;/* '<S363>/motohawk_delta_time' */
  uint32_T s221_motohawk_delta_time_DWORK1;/* '<S221>/motohawk_delta_time' */
  uint32_T s153_motohawk_delta_time_DWORK1;/* '<S153>/motohawk_delta_time' */
  uint32_T s152_motohawk_delta_time_DWORK1;/* '<S152>/motohawk_delta_time' */
  uint32_T s141_counts;                /* '<S112>/Chart' */
  uint32_T s123_motohawk_delta_time_DWORK1;/* '<S123>/motohawk_delta_time' */
  uint32_T s101_motohawk_delta_time_DWORK1;/* '<S101>/motohawk_delta_time' */
  uint32_T s28_motohawk_delta_time_DWORK1;/* '<S28>/motohawk_delta_time' */
  uint32_T s27_motohawk_delta_time_DWORK1;/* '<S27>/motohawk_delta_time' */
  int16_T s56_UnitDelay_DSTATE;        /* '<S56>/Unit Delay' */
  uint16_T s370_UnitDelay_DSTATE;      /* '<S370>/Unit Delay' */
  uint16_T s370_UnitDelay1_DSTATE;     /* '<S370>/Unit Delay1' */
  int16_T s316_timer;                  /* '<S306>/Chart' */
  uint16_T s98_motohawk_fault_def5_DWORK1;/* '<S98>/motohawk_fault_def5' */
  uint16_T s42_timer;                  /* '<S37>/Chart' */
  uint8_T s88_Output_DSTATE;           /* '<S88>/Output' */
  uint8_T s180_UnitDelay_DSTATE[27];   /* '<S180>/Unit Delay' */
  boolean_T s107_UnitDelay_DSTATE;     /* '<S107>/Unit Delay' */
  boolean_T s99_UnitDelay_DSTATE;      /* '<S99>/Unit Delay' */
  boolean_T s180_UnitDelay1_DSTATE;    /* '<S180>/Unit Delay1' */
  boolean_T s11_UnitDelay_DSTATE;      /* '<S11>/Unit Delay' */
  boolean_T s154_UnitDelay_DSTATE;     /* '<S154>/Unit Delay' */
  boolean_T s155_UnitDelay_DSTATE;     /* '<S155>/Unit Delay' */
  boolean_T s371_UnitDelay_DSTATE;     /* '<S371>/Unit Delay' */
  boolean_T s381_UnitDelay_DSTATE;     /* '<S381>/Unit Delay' */
  boolean_T s369_UnitDelay5_DSTATE;    /* '<S369>/Unit Delay5' */
  boolean_T s369_UnitDelay2_DSTATE;    /* '<S369>/Unit Delay2' */
  boolean_T s369_UnitDelay_DSTATE;     /* '<S369>/Unit Delay' */
  boolean_T s369_UnitDelay1_DSTATE;    /* '<S369>/Unit Delay1' */
  boolean_T s369_UnitDelay3_DSTATE;    /* '<S369>/Unit Delay3' */
  boolean_T s369_UnitDelay4_DSTATE;    /* '<S369>/Unit Delay4' */
  uint8_T s2_motohawk_trigger1_DWORK1; /* '<S2>/motohawk_trigger1' */
  uint8_T s2_motohawk_trigger_DWORK1;  /* '<S2>/motohawk_trigger' */
  uint8_T s193_is_active_c3_BuckyWagon_01;/* '<S180>/Chart' */
  uint8_T s193_is_c3_BuckyWagon_01;    /* '<S180>/Chart' */
  uint8_T s193_is_Fault;               /* '<S180>/Chart' */
  uint8_T s316_is_active_c32_BuckyWagon_01;/* '<S306>/Chart' */
  uint8_T s316_is_c32_BuckyWagon_01;   /* '<S306>/Chart' */
  uint8_T s158_is_active_c1_BuckyWagon_01;/* '<S115>/Chart' */
  uint8_T s158_is_c1_BuckyWagon_01;    /* '<S115>/Chart' */
  uint8_T s158_is_active_ButtonDebounce;/* '<S115>/Chart' */
  uint8_T s158_is_ButtonDebounce;      /* '<S115>/Chart' */
  uint8_T s158_is_active_ReverseLogic; /* '<S115>/Chart' */
  uint8_T s158_is_ReverseLogic;        /* '<S115>/Chart' */
  uint8_T s141_is_active_c9_BuckyWagon_01;/* '<S112>/Chart' */
  uint8_T s141_is_c9_BuckyWagon_01;    /* '<S112>/Chart' */
  uint8_T s141_is_LowSpeedManeuvering; /* '<S112>/Chart' */
  uint8_T s141_is_NormalDriving;       /* '<S112>/Chart' */
  uint8_T s136_is_active_c5_BuckyWagon_01;/* '<S132>/Inverter Overheat Logic' */
  uint8_T s136_is_c5_BuckyWagon_01;    /* '<S132>/Inverter Overheat Logic' */
  uint8_T s42_is_active_c6_BuckyWagon_01;/* '<S37>/Chart' */
  uint8_T s42_is_c6_BuckyWagon_01;     /* '<S37>/Chart' */
  boolean_T s97_TimeSinceEnabledWithInput1_MODE;/* '<S97>/Time Since Enabled (With Input)1' */
  boolean_T s12_TimeSinceEnabledWithInput1_MODE;/* '<S12>/Time Since Enabled (With Input)1' */
  boolean_T s41_EnabledSubsystem_MODE; /* '<S41>/Enabled Subsystem' */
  rtDW_FaultIterator_BuckyWagon_01 s180_FaultIterator;/* '<S180>/Fault Iterator' */
  rtDW_Chart_BuckyWagon_01 s11_sf_Chart;/* '<S11>/Chart' */
  rtDW_Downsapmle_BuckyWagon_01 s118_sf_Downsapmle1;/* '<S118>/Downsapmle1' */
  rtDW_Downsapmle_BuckyWagon_01 s118_sf_Downsapmle;/* '<S118>/Downsapmle' */
} D_Work_BuckyWagon_01;

/* Zero-crossing (trigger) state */
typedef struct {
  rtZCE_Chart_BuckyWagon_01 s11_sf_Chart;/* '<S11>/Chart' */
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S369>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S369>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S369>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S369>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S373>/Clear' */
  ZCSigState Clear_Trig_ZCE_f;         /* '<S372>/Clear' */
} PrevZCSigStates_BuckyWagon_01;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s182_Saturation3;       /* '<S182>/Saturation3' */
  const int16_T s182_DataTypeConversion3;/* '<S182>/Data Type Conversion3' */
  const boolean_T s106_DataTypeConversion;/* '<S106>/Data Type Conversion' */
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
   * Referenced by: '<S107>/Combinatorial  Logic'
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
 * '<S17>'  : BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan
 * '<S18>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger
 * '<S19>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor
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
 * '<S66>'  : BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan/motohawk_override_abs1
 * '<S67>'  : BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan/motohawk_override_abs1/NewValue
 * '<S68>'  : BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan/motohawk_override_abs1/OldValue
 * '<S69>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1
 * '<S70>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2
 * '<S71>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3
 * '<S72>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4
 * '<S73>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5
 * '<S74>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/NewValue
 * '<S75>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/OldValue
 * '<S76>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/NewValue
 * '<S77>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/OldValue
 * '<S78>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/NewValue
 * '<S79>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/OldValue
 * '<S80>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/NewValue
 * '<S81>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/OldValue
 * '<S82>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/NewValue
 * '<S83>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/OldValue
 * '<S84>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/Counter
 * '<S85>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs1
 * '<S86>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs2
 * '<S87>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs5
 * '<S88>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/Counter/Counter Limited
 * '<S89>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/Counter/Counter Limited/Increment Real World
 * '<S90>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/Counter/Counter Limited/Wrap To Zero
 * '<S91>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs1/NewValue
 * '<S92>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs1/OldValue
 * '<S93>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs2/NewValue
 * '<S94>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs2/OldValue
 * '<S95>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs5/NewValue
 * '<S96>'  : BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs5/OldValue
 * '<S97>'  : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery
 * '<S98>'  : BuckyWagon_01/Foreground/Addl_Fault_Detection/LowVoltageSystem
 * '<S99>'  : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive
 * '<S100>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management
 * '<S101>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Time Since Enabled (With Input)1
 * '<S102>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management/SOCAlert
 * '<S103>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management/SOCShutdown
 * '<S104>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Compare To Constant
 * '<S105>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Hysterisis
 * '<S106>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Integrator
 * '<S107>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Hysterisis/Hysteresis
 * '<S108>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Integrator/Saturation
 * '<S109>' : BuckyWagon_01/Foreground/Control Strategy/Calculations
 * '<S110>' : BuckyWagon_01/Foreground/Control Strategy/Cooling
 * '<S111>' : BuckyWagon_01/Foreground/Control Strategy/Drive
 * '<S112>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl
 * '<S113>' : BuckyWagon_01/Foreground/Control Strategy/First Order Low Pass (Tunable)
 * '<S114>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller
 * '<S115>' : BuckyWagon_01/Foreground/Control Strategy/Reverse
 * '<S116>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs
 * '<S117>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/Odometer
 * '<S118>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1
 * '<S119>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle
 * '<S120>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle1
 * '<S121>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving
 * '<S122>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management
 * '<S123>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)
 * '<S124>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen
 * '<S125>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/motohawk_table_1d
 * '<S126>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S127>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs
 * '<S128>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_table_2d
 * '<S129>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/NewValue
 * '<S130>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/OldValue
 * '<S131>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/DriverDemandBase
 * '<S132>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Overheat Clip
 * '<S133>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Regen
 * '<S134>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/SOC Clip
 * '<S135>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Torque Total Clip
 * '<S136>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Inverter Overheat Logic
 * '<S137>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Overheat Clip1
 * '<S138>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Overheat Clip1/Saturation
 * '<S139>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/SOC Clip/Saturation
 * '<S140>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Torque Management/Torque Total Clip/Saturation
 * '<S141>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/Chart
 * '<S142>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1
 * '<S143>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/NewValue
 * '<S144>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/OldValue
 * '<S145>' : BuckyWagon_01/Foreground/Control Strategy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S146>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Battery has passed power-on-self-test and is ready
 * '<S147>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller
 * '<S148>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Main contactors closed and ready
 * '<S149>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2
 * '<S150>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay falling edge
 * '<S151>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay rising edge
 * '<S152>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Time Since Enabled (With Input)1
 * '<S153>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Time Since Enabled (With Input)3
 * '<S154>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay falling edge/MotoHawk S-R Flip-Flop
 * '<S155>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay rising edge/MotoHawk S-R Flip-Flop
 * '<S156>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/NewValue
 * '<S157>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/OldValue
 * '<S158>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/Chart
 * '<S159>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs
 * '<S160>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/NewValue
 * '<S161>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/OldValue
 * '<S162>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/NewValue
 * '<S163>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/OldValue
 * '<S164>' : BuckyWagon_01/Foreground/MiniViewDisplay/Chart
 * '<S165>' : BuckyWagon_01/Foreground/MiniViewDisplay/Clear Screen
 * '<S166>' : BuckyWagon_01/Foreground/MiniViewDisplay/Down Button
 * '<S167>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Bitmap
 * '<S168>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw HLine
 * '<S169>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Rect
 * '<S170>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw String
 * '<S171>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Vline
 * '<S172>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem
 * '<S173>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem1
 * '<S174>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem2
 * '<S175>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem
 * '<S176>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem1
 * '<S177>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem2
 * '<S178>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem3
 * '<S179>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem4
 * '<S180>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName
 * '<S181>' : BuckyWagon_01/Foreground/MiniViewDisplay/Menu Button
 * '<S182>' : BuckyWagon_01/Foreground/MiniViewDisplay/Scale Data
 * '<S183>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient
 * '<S184>' : BuckyWagon_01/Foreground/MiniViewDisplay/Set GUI Mode
 * '<S185>' : BuckyWagon_01/Foreground/MiniViewDisplay/Up Button
 * '<S186>' : BuckyWagon_01/Foreground/MiniViewDisplay/Clear Screen/Clear Screen
 * '<S187>' : BuckyWagon_01/Foreground/MiniViewDisplay/Down Button/Subsystem
 * '<S188>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Bitmap/Subsystem
 * '<S189>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw HLine/Subsystem
 * '<S190>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Rect/Subsystem
 * '<S191>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw String/Subsystem
 * '<S192>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Vline/Subsystem
 * '<S193>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/Chart
 * '<S194>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/Fault Iterator
 * '<S195>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/getStringLength
 * '<S196>' : BuckyWagon_01/Foreground/MiniViewDisplay/Menu Button/Subsystem
 * '<S197>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem
 * '<S198>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem
 * '<S199>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1
 * '<S200>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 0)
 * '<S201>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 1)
 * '<S202>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 2)
 * '<S203>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem/Compare To Zero
 * '<S204>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem/Enabled Subsystem
 * '<S205>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1/Compare To Zero
 * '<S206>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1/Enabled Subsystem
 * '<S207>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 0)/Subsystem
 * '<S208>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 1)/Subsystem
 * '<S209>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 2)/Subsystem
 * '<S210>' : BuckyWagon_01/Foreground/MiniViewDisplay/Set GUI Mode/Subsystem
 * '<S211>' : BuckyWagon_01/Foreground/MiniViewDisplay/Up Button/Subsystem
 * '<S212>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs
 * '<S213>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1
 * '<S214>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs
 * '<S215>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs
 * '<S216>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs
 * '<S217>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger
 * '<S218>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization
 * '<S219>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1
 * '<S220>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2
 * '<S221>' : BuckyWagon_01/Foreground/Sensors/Time Since Enabled (With Input)1
 * '<S222>' : BuckyWagon_01/Foreground/Sensors/Time Since Key On
 * '<S223>' : BuckyWagon_01/Foreground/Sensors/UQM Motor Inouts
 * '<S224>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed
 * '<S225>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1
 * '<S226>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant4
 * '<S227>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant5
 * '<S228>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant6
 * '<S229>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs
 * '<S230>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1
 * '<S231>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2
 * '<S232>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4
 * '<S233>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5
 * '<S234>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/NewValue
 * '<S235>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/OldValue
 * '<S236>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/NewValue
 * '<S237>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/OldValue
 * '<S238>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/NewValue
 * '<S239>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/OldValue
 * '<S240>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/NewValue
 * '<S241>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/OldValue
 * '<S242>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/NewValue
 * '<S243>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/OldValue
 * '<S244>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units
 * '<S245>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/NewValue
 * '<S246>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/OldValue
 * '<S247>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/Compare To Constant3
 * '<S248>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1
 * '<S249>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10
 * '<S250>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2
 * '<S251>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3
 * '<S252>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7
 * '<S253>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8
 * '<S254>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9
 * '<S255>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/NewValue
 * '<S256>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/OldValue
 * '<S257>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/NewValue
 * '<S258>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/OldValue
 * '<S259>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/NewValue
 * '<S260>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/OldValue
 * '<S261>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/NewValue
 * '<S262>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/OldValue
 * '<S263>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/NewValue
 * '<S264>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/OldValue
 * '<S265>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/NewValue
 * '<S266>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/OldValue
 * '<S267>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/NewValue
 * '<S268>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/OldValue
 * '<S269>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1
 * '<S270>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10
 * '<S271>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2
 * '<S272>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3
 * '<S273>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8
 * '<S274>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9
 * '<S275>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/NewValue
 * '<S276>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/OldValue
 * '<S277>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/NewValue
 * '<S278>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/OldValue
 * '<S279>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/NewValue
 * '<S280>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/OldValue
 * '<S281>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/NewValue
 * '<S282>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/OldValue
 * '<S283>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/NewValue
 * '<S284>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/OldValue
 * '<S285>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/NewValue
 * '<S286>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/OldValue
 * '<S287>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs1
 * '<S288>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs10
 * '<S289>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs2
 * '<S290>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs3
 * '<S291>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs8
 * '<S292>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs9
 * '<S293>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs1/NewValue
 * '<S294>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs1/OldValue
 * '<S295>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs10/NewValue
 * '<S296>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs10/OldValue
 * '<S297>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs2/NewValue
 * '<S298>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs2/OldValue
 * '<S299>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs3/NewValue
 * '<S300>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs3/OldValue
 * '<S301>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs8/NewValue
 * '<S302>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs8/OldValue
 * '<S303>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs9/NewValue
 * '<S304>' : BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs9/OldValue
 * '<S305>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/Compare To Constant
 * '<S306>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/PluggedInDetect
 * '<S307>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1
 * '<S308>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2
 * '<S309>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3
 * '<S310>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4
 * '<S311>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5
 * '<S312>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6
 * '<S313>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7
 * '<S314>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8
 * '<S315>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9
 * '<S316>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart
 * '<S317>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/NewValue
 * '<S318>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/OldValue
 * '<S319>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/NewValue
 * '<S320>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/OldValue
 * '<S321>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/NewValue
 * '<S322>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/OldValue
 * '<S323>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/NewValue
 * '<S324>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/OldValue
 * '<S325>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/NewValue
 * '<S326>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/OldValue
 * '<S327>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/NewValue
 * '<S328>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/OldValue
 * '<S329>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/NewValue
 * '<S330>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/OldValue
 * '<S331>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/NewValue
 * '<S332>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/OldValue
 * '<S333>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/NewValue
 * '<S334>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/OldValue
 * '<S335>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/First Order Low Pass
 * '<S336>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem
 * '<S337>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem1
 * '<S338>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem2
 * '<S339>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override
 * '<S340>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S341>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/NewValue
 * '<S342>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/OldValue
 * '<S343>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/First Order Low Pass
 * '<S344>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem
 * '<S345>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem1
 * '<S346>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem2
 * '<S347>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override
 * '<S348>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S349>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/NewValue
 * '<S350>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/OldValue
 * '<S351>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/First Order Low Pass
 * '<S352>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem
 * '<S353>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem1
 * '<S354>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem2
 * '<S355>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override
 * '<S356>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/First Order Low Pass/First Order Low Pass
 * '<S357>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/NewValue
 * '<S358>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/OldValue
 * '<S359>' : BuckyWagon_01/Foreground/Sensors/Time Since Key On/Time Since Enabled (With Input)2
 * '<S360>' : BuckyWagon_01/Foreground/Sensors/UQM Motor Inouts/Compare To Constant1
 * '<S361>' : BuckyWagon_01/Foreground/Sensors/UQM Motor Inouts/Compare To Constant2
 * '<S362>' : BuckyWagon_01/Foreground/Sensors/UQM Motor Inouts/Compare To Constant8
 * '<S363>' : BuckyWagon_01/Foreground/Sensors/UQM Motor Inouts/Time Since Enabled
 * '<S364>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs
 * '<S365>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/NewValue
 * '<S366>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/OldValue
 * '<S367>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/NewValue
 * '<S368>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/OldValue
 * '<S369>' : BuckyWagon_01/Main Power Relay/Background
 * '<S370>' : BuckyWagon_01/Main Power Relay/Background/Delay
 * '<S371>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Boolean
 * '<S372>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call
 * '<S373>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1
 * '<S374>' : BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off
 * '<S375>' : BuckyWagon_01/Main Power Relay/Background/Processor Reboot
 * '<S376>' : BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off
 * '<S377>' : BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128
 * '<S378>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs
 * '<S379>' : BuckyWagon_01/Main Power Relay/Background/motohawk_restore_nvmem
 * '<S380>' : BuckyWagon_01/Main Power Relay/Background/motohawk_store_nvmem
 * '<S381>' : BuckyWagon_01/Main Power Relay/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S382>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call/Clear
 * '<S383>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1/Clear
 * '<S384>' : BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S385>' : BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S386>' : BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S387>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/NewValue
 * '<S388>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BuckyWagon_01_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
