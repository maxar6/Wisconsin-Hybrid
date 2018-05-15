/*
 * File: BuckyWagon_01.h
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1520
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Apr 23 14:25:32 2018
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
  real_T s253_InputVoltage;            /* '<S253>/Read CAN Message2' */
  real_T s253_OutputVoltage;           /* '<S253>/Read CAN Message2' */
  real_T s253_InputCurrentLimitMax;    /* '<S253>/Read CAN Message2' */
  real_T s253_InputCurrent;            /* '<S253>/Read CAN Message2' */
  real_T s253_OutputCurrent;           /* '<S253>/Read CAN Message2' */
  real_T s253_Eaton_HV_Charger_Temperature;/* '<S253>/Read CAN Message2' */
  real_T s253_IgnitionStatus;          /* '<S253>/Read CAN Message2' */
  real_T s253_ChargerState;            /* '<S253>/Read CAN Message2' */
  real_T s253_FaultSeverityIndicator;  /* '<S253>/Read CAN Message2' */
  real_T s253_MessageCounter;          /* '<S253>/Read CAN Message2' */
  real_T s253_MessageChecksum;         /* '<S253>/Read CAN Message2' */
  real_T s249_DataTypeConversion;      /* '<S249>/Data Type Conversion' */
  real_T s255_Saturation;              /* '<S255>/Saturation' */
  real_T s375_Merge;                   /* '<S375>/Merge' */
  real_T s396_Merge;                   /* '<S396>/Merge' */
  real_T s257_Saturation;              /* '<S257>/Saturation' */
  real_T s391_Merge;                   /* '<S391>/Merge' */
  real_T s9_Motor_Torque;              /* '<S9>/Product1' */
  real_T s181_Sum1;                    /* '<S181>/Sum1' */
  real_T s138_Merge;                   /* '<S138>/Merge' */
  real_T s9_InReverse;                 /* '<S9>/Data Type Conversion' */
  real_T s9_FanDutyCycle;              /* '<S9>/Switch1' */
  real_T s250_NLG5GenLimWrng;          /* '<S250>/Read CAN Message5' */
  real_T s250_NLG5FanActv;             /* '<S250>/Read CAN Message5' */
  real_T s250_EuropeMains;             /* '<S250>/Read CAN Message5' */
  real_T s250_USAMainsL1;              /* '<S250>/Read CAN Message5' */
  real_T s250_USAMainsL2;              /* '<S250>/Read CAN Message5' */
  real_T s250_CntrlPltDet;             /* '<S250>/Read CAN Message5' */
  real_T s250_BypassDet;               /* '<S250>/Read CAN Message5' */
  real_T s250_LimByOutVlt;             /* '<S250>/Read CAN Message5' */
  real_T s250_LimByOutCrnt;            /* '<S250>/Read CAN Message5' */
  real_T s250_LimByMainCrnt;           /* '<S250>/Read CAN Message5' */
  real_T s250_LimByPwrInd;             /* '<S250>/Read CAN Message5' */
  real_T s250_LimByCntrlPlt;           /* '<S250>/Read CAN Message5' */
  real_T s250_LimByNLG5MaxPwr;         /* '<S250>/Read CAN Message5' */
  real_T s250_LimByNLG5MaxMainsCrnt;   /* '<S250>/Read CAN Message5' */
  real_T s250_LimByNLG5MaxOutCrnt;     /* '<S250>/Read CAN Message5' */
  real_T s250_LimByNLG5MaxOutVlt;      /* '<S250>/Read CAN Message5' */
  real_T s250_LimByTempCap;            /* '<S250>/Read CAN Message5' */
  real_T s250_LimByTempPwrStg;         /* '<S250>/Read CAN Message5' */
  real_T s250_LimByTempDiode;          /* '<S250>/Read CAN Message5' */
  real_T s250_LimByTempXfrmr;          /* '<S250>/Read CAN Message5' */
  real_T s250_LimByBattTemp;           /* '<S250>/Read CAN Message5' */
  real_T s250_MainsActCrnt;            /* '<S250>/Read CAN Message6' */
  real_T s250_MainsActVlt;             /* '<S250>/Read CAN Message6' */
  real_T s250_OutptActVlt;             /* '<S250>/Read CAN Message6' */
  real_T s250_OutptActCrnt;            /* '<S250>/Read CAN Message6' */
  real_T s9_CoolantPumpSpeed;          /* '<S9>/Switch' */
  real_T s395_Sum;                     /* '<S395>/Sum' */
  real_T s18_Product;                  /* '<S18>/Product' */
  real_T s92_Merge;                    /* '<S92>/Merge' */
  real_T s93_Merge;                    /* '<S93>/Merge' */
  real_T s95_Merge;                    /* '<S95>/Merge' */
  real_T s110_Merge;                   /* '<S110>/Merge' */
  real_T s256_Sum1;                    /* '<S256>/Sum1' */
  real_T s383_Merge;                   /* '<S383>/Merge' */
  real_T s128_Switch1;                 /* '<S128>/Switch1' */
  real_T s250_OutptOvrVlt;             /* '<S250>/Read CAN Message4' */
  real_T s250_MainsOvrVlt2;            /* '<S250>/Read CAN Message4' */
  real_T s250_MainsOvrVlt1;            /* '<S250>/Read CAN Message4' */
  real_T s250_PwrStgShrtCkt;           /* '<S250>/Read CAN Message4' */
  real_T s250_PlsbltyOutptVltMeas;     /* '<S250>/Read CAN Message4' */
  real_T s250_PlsbltyMainsVltMeas;     /* '<S250>/Read CAN Message4' */
  real_T s250_OutptFuseDefect;         /* '<S250>/Read CAN Message4' */
  real_T s250_MainsFuseDefect;         /* '<S250>/Read CAN Message4' */
  real_T s250_BattPolarity;            /* '<S250>/Read CAN Message4' */
  real_T s250_TempSensCap;             /* '<S250>/Read CAN Message4' */
  real_T s250_TempSensPwrStg;          /* '<S250>/Read CAN Message4' */
  real_T s250_TempSensDiode;           /* '<S250>/Read CAN Message4' */
  real_T s250_TempSensXfrmr;           /* '<S250>/Read CAN Message4' */
  real_T s250_TempSensExt1;            /* '<S250>/Read CAN Message4' */
  real_T s250_TempSensExt2;            /* '<S250>/Read CAN Message4' */
  real_T s250_TempSensExt3;            /* '<S250>/Read CAN Message4' */
  real_T s250_FlashChksmFail;          /* '<S250>/Read CAN Message4' */
  real_T s250_NVSRAMChksmFail;         /* '<S250>/Read CAN Message4' */
  real_T s250_EEPROMSysChksmFail;      /* '<S250>/Read CAN Message4' */
  real_T s250_EEPROMPOWChksmFail;      /* '<S250>/Read CAN Message4' */
  real_T s250_WatchdogInternal;        /* '<S250>/Read CAN Message4' */
  real_T s250_Initialization;          /* '<S250>/Read CAN Message4' */
  real_T s250_CANTimeout;              /* '<S250>/Read CAN Message4' */
  real_T s250_CANOff;                  /* '<S250>/Read CAN Message4' */
  real_T s250_CAN_Xmit;                /* '<S250>/Read CAN Message4' */
  real_T s250_CAN_Rcv;                 /* '<S250>/Read CAN Message4' */
  real_T s250_ShtdwnThrsBattTemp;      /* '<S250>/Read CAN Message4' */
  real_T s250_ShtdwnThresBattVlt;      /* '<S250>/Read CAN Message4' */
  real_T s250_ShtdwnThresBattAhrs;     /* '<S250>/Read CAN Message4' */
  real_T s250_ShtdwnThresChrgTime;     /* '<S250>/Read CAN Message4' */
  real_T s250_PwrLimByLowMainsVlt;     /* '<S250>/Read CAN Message4' */
  real_T s250_PwrLimByLowBattVlt;      /* '<S250>/Read CAN Message4' */
  real_T s250_PwrLimByIntOvrTemp;      /* '<S250>/Read CAN Message4' */
  real_T s250_CmdValOutRange;          /* '<S250>/Read CAN Message4' */
  real_T s250_PwrStgTemp;              /* '<S250>/Read CAN Message3' */
  real_T s250_TempExtrn1;              /* '<S250>/Read CAN Message3' */
  real_T s250_TempExtrn2;              /* '<S250>/Read CAN Message3' */
  real_T s250_TempExtrn3;              /* '<S250>/Read CAN Message3' */
  real_T s250_MainsCrntByCntrlPlt;     /* '<S250>/Read CAN Message1' */
  real_T s250_MainsCrntByPwrInd;       /* '<S250>/Read CAN Message1' */
  real_T s250_AuxBattVlt;              /* '<S250>/Read CAN Message1' */
  real_T s250_AhrsByExtShnt;           /* '<S250>/Read CAN Message1' */
  real_T s250_OutptCrntByBstr;         /* '<S250>/Read CAN Message1' */
  real_T s147_Gain1;                   /* '<S147>/Gain1' */
  real_T s147_Gain4;                   /* '<S147>/Gain4' */
  real_T s147_Gain5;                   /* '<S147>/Gain5' */
  real_T s147_Gain6;                   /* '<S147>/Gain6' */
  real_T s147_Gain8;                   /* '<S147>/Gain8' */
  real_T s147_Divide3;                 /* '<S147>/Divide3' */
  real_T s147_Gain;                    /* '<S147>/Gain' */
  real_T s147_Gain3;                   /* '<S147>/Gain3' */
  real_T s147_Divide;                  /* '<S147>/Divide' */
  real_T s147_Saturation;              /* '<S147>/Saturation' */
  real_T s146_Sum1;                    /* '<S146>/Sum1' */
  real_T s146_Sum;                     /* '<S146>/Sum' */
  real_T s258_UnitDelay;               /* '<S258>/Unit Delay' */
  real_T s254_Fault_Severity_Indicator;/* '<S254>/Read CAN Message2' */
  real_T s254_Message_Checksum;        /* '<S254>/Read CAN Message2' */
  real_T s254_Message_Counter;         /* '<S254>/Read CAN Message2' */
  real_T s254_Motor_Control_State;     /* '<S254>/Read CAN Message2' */
  real_T s254_Motor_Speed;             /* '<S254>/Read CAN Message2' */
  real_T s254_Motor_Torque;            /* '<S254>/Read CAN Message2' */
  real_T s254_Percent_Torque_Available;/* '<S254>/Read CAN Message2' */
  real_T s365_Merge;                   /* '<S365>/Merge' */
  real_T s366_Merge;                   /* '<S366>/Merge' */
  real_T s254_DC_Bus_Current;          /* '<S254>/Read CAN Message1' */
  real_T s254_DC_Bus_Voltage;          /* '<S254>/Read CAN Message1' */
  real_T s254_Inverter_Temperature;    /* '<S254>/Read CAN Message1' */
  real_T s254_Motor_Temperature;       /* '<S254>/Read CAN Message1' */
  real_T s254_Phase_Current;           /* '<S254>/Read CAN Message1' */
  real_T s254_Phase_phase_voltage;     /* '<S254>/Read CAN Message1' */
  real_T s254_Isolation_Resistance;    /* '<S254>/Read CAN Message3' */
  real_T s254_Maximum_Rated_Power;     /* '<S254>/Read CAN Message3' */
  real_T s254_Maximum_Rated_Speed;     /* '<S254>/Read CAN Message3' */
  real_T s254_Maximum_Rated_Torqe;     /* '<S254>/Read CAN Message3' */
  real_T s252_ReadCANMessage_o2;       /* '<S252>/Read CAN Message' */
  real_T s252_EMP_Pump_Status;         /* '<S252>/Read CAN Message' */
  real_T s252_EMP_Pump_Mode;           /* '<S252>/Read CAN Message' */
  real_T s252_EMP_Pump_Speed;          /* '<S252>/Read CAN Message' */
  real_T s252_EMP_Board_Temp;          /* '<S252>/Read CAN Message' */
  real_T s252_EMP_Pump_Power;          /* '<S252>/Read CAN Message' */
  real_T s252_EMP_Speed_Percent;       /* '<S252>/Read CAN Message' */
  real_T s251_ReadCANMessage_o2;       /* '<S251>/Read CAN Message' */
  real_T s251_EHPAS_Input_Voltage;     /* '<S251>/Read CAN Message' */
  real_T s251_EHPAS_Input_Current_NA;  /* '<S251>/Read CAN Message' */
  real_T s251_EHPAS_Pump_Speed;        /* '<S251>/Read CAN Message' */
  real_T s251_EHPAS_TempMax;           /* '<S251>/Read CAN Message' */
  real_T s251_EHPAS_TempCur;           /* '<S251>/Read CAN Message' */
  real_T s251_EHPAS_Op_State;          /* '<S251>/Read CAN Message' */
  real_T s251_EHPAS_Fault;             /* '<S251>/Read CAN Message' */
  real_T s248_bcm_alarm;               /* '<S248>/Read CAN Message1' */
  real_T s248_bcm_cpwr_cmd;            /* '<S248>/Read CAN Message1' */
  real_T s248_bcm_cpwr_mon;            /* '<S248>/Read CAN Message1' */
  real_T s248_bcm_epo;                 /* '<S248>/Read CAN Message1' */
  real_T s248_bcm_gfd;                 /* '<S248>/Read CAN Message1' */
  real_T s248_bcm_hvil_mon;            /* '<S248>/Read CAN Message1' */
  real_T s248_bcm_ibat;                /* '<S248>/Read CAN Message1' */
  real_T s248_bcm_ready;               /* '<S248>/Read CAN Message1' */
  real_T s248_bcm_soc;                 /* '<S248>/Read CAN Message1' */
  real_T s248_bcm_vbat;                /* '<S248>/Read CAN Message1' */
  real_T s248_bcm_chg_done;            /* '<S248>/Read CAN Message1' */
  real_T s248_bcm_cool_req;            /* '<S248>/Read CAN Message1' */
  real_T s269_Merge;                   /* '<S269>/Merge' */
  real_T s248_bcm_soc_j;               /* '<S248>/Gain1' */
  real_T s268_Merge;                   /* '<S268>/Merge' */
  real_T s248_bcm_cell_tmax;           /* '<S248>/Read CAN Message6' */
  real_T s248_bcm_cell_tmin;           /* '<S248>/Read CAN Message6' */
  real_T s248_bcm_cell_vmax;           /* '<S248>/Read CAN Message6' */
  real_T s248_bcm_cell_vmin;           /* '<S248>/Read CAN Message6' */
  real_T s248_bcm_chga_ena;            /* '<S248>/Read CAN Message6' */
  real_T s248_bcm_chga_mon;            /* '<S248>/Read CAN Message6' */
  real_T s248_bcm_lvbat;               /* '<S248>/Read CAN Message6' */
  real_T s248_bcm_mod_ena;             /* '<S248>/Read CAN Message6' */
  real_T s248_bcm_veh_mon;             /* '<S248>/Read CAN Message6' */
  real_T s248_bcm_cell_overvolt;       /* '<S248>/Read CAN Message5' */
  real_T s248_bcm_chg_buf;             /* '<S248>/Read CAN Message5' */
  real_T s248_bcm_chg_max;             /* '<S248>/Read CAN Message5' */
  real_T s248_bcm_dis_buf;             /* '<S248>/Read CAN Message5' */
  real_T s248_bcm_dis_max;             /* '<S248>/Read CAN Message5' */
  real_T s248_bcm_t_coolant;           /* '<S248>/Read CAN Message5' */
  real_T s267_Merge;                   /* '<S267>/Merge' */
  real_T s137_Abs;                     /* '<S137>/Abs' */
  real_T s195_Merge;                   /* '<S195>/Merge' */
  real_T s194_inReverse;               /* '<S137>/Chart' */
  real_T s158_Sum1;                    /* '<S158>/Sum1' */
  real_T s157_Sum;                     /* '<S157>/Sum' */
  real_T s164_Saturation1;             /* '<S164>/Saturation1' */
  real_T s164_Product;                 /* '<S164>/Product' */
  real_T s164_Product2;                /* '<S164>/Product2' */
  real_T s142_Sum1;                    /* '<S142>/Sum1' */
  real_T s141_currOut;                 /* '<S131>/Charging State Machine' */
  real_T s141_voltOut;                 /* '<S131>/Charging State Machine' */
  real_T s123_UnitDelay;               /* '<S123>/Unit Delay' */
  real_T s85_ctrlState;                /* '<S18>/Chart' */
  real_T s79_Merge;                    /* '<S79>/Merge' */
  real_T s58_Merge;                    /* '<S58>/Merge' */
  real_T s59_Merge;                    /* '<S59>/Merge' */
  real_T s60_Merge;                    /* '<S60>/Merge' */
  real_T s44_Merge;                    /* '<S44>/Merge' */
  real_T s53_MinMax1;                  /* '<S53>/MinMax1' */
  uint32_T s253_AgeCount;              /* '<S253>/Read CAN Message2' */
  uint32_T s250_AgeCount;              /* '<S250>/Read CAN Message5' */
  uint32_T s250_AgeCount_p;            /* '<S250>/Read CAN Message6' */
  uint32_T s250_AgeCount_m;            /* '<S250>/Read CAN Message4' */
  uint32_T s250_AgeCount_mf;           /* '<S250>/Read CAN Message3' */
  uint32_T s250_AgeCount_a;            /* '<S250>/Read CAN Message1' */
  uint32_T s254_AgeCount;              /* '<S254>/Read CAN Message2' */
  uint32_T s254_AgeCount_g;            /* '<S254>/Read CAN Message1' */
  uint32_T s252_AgeCount;              /* '<S252>/Read CAN Message' */
  uint32_T s251_AgeCount;              /* '<S251>/Read CAN Message' */
  uint32_T s248_AgeCount;              /* '<S248>/Read CAN Message1' */
  uint32_T s248_AgeCount_e;            /* '<S248>/Read CAN Message6' */
  uint32_T s248_AgeCount_k;            /* '<S248>/Read CAN Message5' */
  int16_T s10_DataTypeConversion;      /* '<S10>/Data Type Conversion' */
  int16_T s10_DataTypeConversion2;     /* '<S10>/Data Type Conversion2' */
  int16_T s10_DataTypeConversion1;     /* '<S10>/Data Type Conversion1' */
  int16_T s11_TmpSignalConversionAtChartInport20[18];/* '<S11>/Scale Data' */
  uint16_T s12_motohawk_ain;           /* '<S12>/motohawk_ain' */
  uint16_T s12_motohawk_ain1;          /* '<S12>/motohawk_ain1' */
  uint16_T s12_motohawk_ain5;          /* '<S12>/motohawk_ain5' */
  uint16_T s229_minTimer;              /* '<S216>/Chart' */
  uint16_T s229_scrollTimer;           /* '<S216>/Chart' */
  uint16_T s141_timer;                 /* '<S131>/Charging State Machine' */
  uint8_T s94_Merge;                   /* '<S94>/Merge' */
  uint8_T s250_DataTypeConversion;     /* '<S250>/Data Type Conversion' */
  uint8_T s250_DataTypeConversion1;    /* '<S250>/Data Type Conversion1' */
  uint8_T s250_DataTypeConversion2;    /* '<S250>/Data Type Conversion2' */
  uint8_T s250_DataTypeConversion3;    /* '<S250>/Data Type Conversion3' */
  uint8_T s250_DataTypeConversion4;    /* '<S250>/Data Type Conversion4' */
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
  uint8_T s247_upcount;                /* '<S247>/Read CAN Message' */
  uint8_T s232_menucount;              /* '<S232>/Read CAN Message' */
  uint8_T s229_mode;                   /* '<S216>/Chart' */
  uint8_T s229_text[10];               /* '<S216>/Chart' */
  uint8_T s229_scrollIndex;            /* '<S216>/Chart' */
  uint8_T s223_downcount;              /* '<S223>/Read CAN Message' */
  uint8_T s174_PumpState;              /* '<S134>/Chart' */
  uint8_T s141_state;                  /* '<S131>/Charging State Machine' */
  uint8_T s16_OperatingMode_cmd;       /* '<S16>/Switch' */
  uint8_T s61_Merge;                   /* '<S61>/Merge' */
  uint8_T s62_Merge;                   /* '<S62>/Merge' */
  uint8_T s13_Switch;                  /* '<S13>/Switch' */
  boolean_T s261_Merge;                /* '<S261>/Merge' */
  boolean_T s280_Merge;                /* '<S280>/Merge' */
  boolean_T s250_DataAvailable;        /* '<S250>/Read CAN Message5' */
  boolean_T s250_NLG5PwrEn;            /* '<S250>/Read CAN Message5' */
  boolean_T s250_NLG5GenErrLtch;       /* '<S250>/Read CAN Message5' */
  boolean_T s250_DataAvailable_c;      /* '<S250>/Read CAN Message6' */
  boolean_T s289_Merge;                /* '<S289>/Merge' */
  boolean_T s96_Merge;                 /* '<S96>/Merge' */
  boolean_T s121_LogicalOperator;      /* '<S121>/Logical Operator' */
  boolean_T s250_DataAvailable_i;      /* '<S250>/Read CAN Message1' */
  boolean_T s247_upasserted;           /* '<S247>/Read CAN Message' */
  boolean_T s232_menuasserted;         /* '<S232>/Read CAN Message' */
  boolean_T s223_downasserted;         /* '<S223>/Read CAN Message' */
  boolean_T s254_RelationalOperator;   /* '<S254>/Relational Operator' */
  boolean_T s248_bcm_mainc_stat;       /* '<S248>/Read CAN Message1' */
  boolean_T s248_bcm_chgc_stat;        /* '<S248>/Read CAN Message1' */
  boolean_T s265_Merge;                /* '<S265>/Merge' */
  boolean_T s266_Merge;                /* '<S266>/Merge' */
  boolean_T s248_bcm_cell_undervolt;   /* '<S248>/Read CAN Message5' */
  boolean_T s136_LogicalOperator;      /* '<S136>/Logical Operator' */
  boolean_T s152_HillHoldOn;           /* '<S150>/Chart' */
  boolean_T s143_Merge;                /* '<S143>/Merge' */
  boolean_T s63_Merge;                 /* '<S63>/Merge' */
  boolean_T s39_LogicalOperator;       /* '<S39>/Logical Operator' */
  boolean_T s40_LogicalOperator;       /* '<S40>/Logical Operator' */
  boolean_T s57_RelationalOperator;    /* '<S57>/Relational Operator' */
  boolean_T s43_light;                 /* '<S38>/Chart' */
  boolean_T s21_LogicalOperator;       /* '<S21>/Logical Operator' */
  rtB_FaultIterator_BuckyWagon_01 s216_FaultIterator;/* '<S216>/Fault Iterator' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem2;/* '<S11>/Enabled Subsystem2' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem1;/* '<S11>/Enabled Subsystem1' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem;/* '<S11>/Enabled Subsystem' */
  rtB_Chart_BuckyWagon_01_n s11_sf_Chart;/* '<S11>/Chart' */
  rtB_Chart_BuckyWagon_01 s334_sf_Chart;/* '<S334>/Chart' */
  rtB_Chart_BuckyWagon_01 s288_sf_Chart;/* '<S288>/Chart' */
  rtB_Downsapmle_BuckyWagon_01 s147_sf_Downsapmle1;/* '<S147>/Downsapmle1' */
  rtB_Downsapmle_BuckyWagon_01 s147_sf_Downsapmle;/* '<S147>/Downsapmle' */
} BlockIO_BuckyWagon_01;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s255_UnitDelay1_DSTATE;       /* '<S255>/Unit Delay1' */
  real_T s376_UnitDelay_DSTATE;        /* '<S376>/Unit Delay' */
  real_T s257_UnitDelay1_DSTATE;       /* '<S257>/Unit Delay1' */
  real_T s392_UnitDelay_DSTATE;        /* '<S392>/Unit Delay' */
  real_T s181_UnitDelay_DSTATE;        /* '<S181>/Unit Delay' */
  real_T s256_UnitDelay1_DSTATE;       /* '<S256>/Unit Delay1' */
  real_T s384_UnitDelay_DSTATE;        /* '<S384>/Unit Delay' */
  real_T s128_UnitDelay_DSTATE;        /* '<S128>/Unit Delay' */
  real_T s147_UnitDelay1_DSTATE;       /* '<S147>/Unit Delay1' */
  real_T s132_UnitDelay_DSTATE;        /* '<S132>/Unit Delay' */
  real_T s147_UnitDelay_DSTATE;        /* '<S147>/Unit Delay' */
  real_T s146_UnitDelay_DSTATE;        /* '<S146>/Unit Delay' */
  real_T s258_UnitDelay_DSTATE;        /* '<S258>/Unit Delay' */
  real_T s187_UnitDelay_DSTATE;        /* '<S187>/Unit Delay' */
  real_T s187_UnitDelay1_DSTATE;       /* '<S187>/Unit Delay1' */
  real_T s186_UnitDelay_DSTATE;        /* '<S186>/Unit Delay' */
  real_T s186_UnitDelay1_DSTATE;       /* '<S186>/Unit Delay1' */
  real_T s158_UnitDelay_DSTATE;        /* '<S158>/Unit Delay' */
  real_T s159_UnitDelay_DSTATE;        /* '<S159>/Unit Delay' */
  real_T s166_UnitDelay_DSTATE;        /* '<S166>/Unit Delay' */
  real_T s167_UnitDelay_DSTATE;        /* '<S167>/Unit Delay' */
  real_T s171_UnitDelay_DSTATE;        /* '<S171>/Unit Delay' */
  real_T s142_UnitDelay_DSTATE;        /* '<S142>/Unit Delay' */
  real_T s123_UnitDelay_DSTATE;        /* '<S123>/Unit Delay' */
  real_T s194_timer;                   /* '<S137>/Chart' */
  real_T s174_brakeCounts;             /* '<S134>/Chart' */
  int32_T s194_sfEvent;                /* '<S137>/Chart' */
  uint32_T s135_motohawk_delta_time_DWORK1;/* '<S135>/motohawk_delta_time' */
  uint32_T s395_motohawk_delta_time_DWORK1;/* '<S395>/motohawk_delta_time' */
  uint32_T s128_motohawk_delta_time_DWORK1;/* '<S128>/motohawk_delta_time' */
  uint32_T s147_motohawk_delta_time2_DWORK1;/* '<S147>/motohawk_delta_time2' */
  uint32_T s147_motohawk_delta_time1_DWORK1;/* '<S147>/motohawk_delta_time1' */
  uint32_T s146_motohawk_delta_time_DWORK1;/* '<S146>/motohawk_delta_time' */
  uint32_T s258_motohawk_delta_time_DWORK1;/* '<S258>/motohawk_delta_time' */
  uint32_T s189_motohawk_delta_time_DWORK1;/* '<S189>/motohawk_delta_time' */
  uint32_T s188_motohawk_delta_time_DWORK1;/* '<S188>/motohawk_delta_time' */
  uint32_T s174_counts;                /* '<S134>/Chart' */
  uint32_T s154_motohawk_delta_time_DWORK1;/* '<S154>/motohawk_delta_time' */
  uint32_T s159_motohawk_delta_time_DWORK1;/* '<S159>/motohawk_delta_time' */
  uint32_T s162_motohawk_delta_time_DWORK1;/* '<S162>/motohawk_delta_time' */
  uint32_T s163_motohawk_delta_time_DWORK1;/* '<S163>/motohawk_delta_time' */
  uint32_T s168_motohawk_delta_time_DWORK1;/* '<S168>/motohawk_delta_time' */
  uint32_T s123_motohawk_delta_time_DWORK1;/* '<S123>/motohawk_delta_time' */
  uint32_T s29_motohawk_delta_time_DWORK1;/* '<S29>/motohawk_delta_time' */
  uint32_T s28_motohawk_delta_time_DWORK1;/* '<S28>/motohawk_delta_time' */
  int16_T s57_UnitDelay_DSTATE;        /* '<S57>/Unit Delay' */
  uint16_T s402_UnitDelay_DSTATE;      /* '<S402>/Unit Delay' */
  uint16_T s402_UnitDelay1_DSTATE;     /* '<S402>/Unit Delay1' */
  uint16_T s120_motohawk_fault_def5_DWORK1;/* '<S120>/motohawk_fault_def5' */
  uint16_T s43_timer;                  /* '<S38>/Chart' */
  uint8_T s216_UnitDelay_DSTATE[27];   /* '<S216>/Unit Delay' */
  boolean_T s129_UnitDelay_DSTATE;     /* '<S129>/Unit Delay' */
  boolean_T s121_UnitDelay_DSTATE;     /* '<S121>/Unit Delay' */
  boolean_T s216_UnitDelay1_DSTATE;    /* '<S216>/Unit Delay1' */
  boolean_T s11_UnitDelay_DSTATE;      /* '<S11>/Unit Delay' */
  boolean_T s190_UnitDelay_DSTATE;     /* '<S190>/Unit Delay' */
  boolean_T s191_UnitDelay_DSTATE;     /* '<S191>/Unit Delay' */
  boolean_T s155_UnitDelay_DSTATE;     /* '<S155>/Unit Delay' */
  boolean_T s403_UnitDelay_DSTATE;     /* '<S403>/Unit Delay' */
  boolean_T s413_UnitDelay_DSTATE;     /* '<S413>/Unit Delay' */
  boolean_T s401_UnitDelay5_DSTATE;    /* '<S401>/Unit Delay5' */
  boolean_T s401_UnitDelay2_DSTATE;    /* '<S401>/Unit Delay2' */
  boolean_T s401_UnitDelay_DSTATE;     /* '<S401>/Unit Delay' */
  boolean_T s401_UnitDelay1_DSTATE;    /* '<S401>/Unit Delay1' */
  boolean_T s401_UnitDelay3_DSTATE;    /* '<S401>/Unit Delay3' */
  boolean_T s401_UnitDelay4_DSTATE;    /* '<S401>/Unit Delay4' */
  uint8_T s2_motohawk_trigger1_DWORK1; /* '<S2>/motohawk_trigger1' */
  uint8_T s2_motohawk_trigger_DWORK1;  /* '<S2>/motohawk_trigger' */
  uint8_T s229_is_active_c3_BuckyWagon_01;/* '<S216>/Chart' */
  uint8_T s229_is_c3_BuckyWagon_01;    /* '<S216>/Chart' */
  uint8_T s229_is_Fault;               /* '<S216>/Chart' */
  uint8_T s194_is_active_c1_BuckyWagon_01;/* '<S137>/Chart' */
  uint8_T s194_is_c1_BuckyWagon_01;    /* '<S137>/Chart' */
  uint8_T s194_is_active_ButtonDebounce;/* '<S137>/Chart' */
  uint8_T s194_is_ButtonDebounce;      /* '<S137>/Chart' */
  uint8_T s194_is_active_ReverseLogic; /* '<S137>/Chart' */
  uint8_T s194_is_ReverseLogic;        /* '<S137>/Chart' */
  uint8_T s174_is_active_c9_BuckyWagon_01;/* '<S134>/Chart' */
  uint8_T s174_is_c9_BuckyWagon_01;    /* '<S134>/Chart' */
  uint8_T s174_is_LowSpeedManeuvering; /* '<S134>/Chart' */
  uint8_T s174_is_NormalDriving;       /* '<S134>/Chart' */
  uint8_T s152_is_active_c5_BuckyWagon_01;/* '<S150>/Chart' */
  uint8_T s152_is_c5_BuckyWagon_01;    /* '<S150>/Chart' */
  uint8_T s141_is_active_c8_BuckyWagon_01;/* '<S131>/Charging State Machine' */
  uint8_T s141_is_c8_BuckyWagon_01;    /* '<S131>/Charging State Machine' */
  uint8_T s85_is_active_c7_BuckyWagon_01;/* '<S18>/Chart' */
  uint8_T s85_is_c7_BuckyWagon_01;     /* '<S18>/Chart' */
  uint8_T s43_is_active_c6_BuckyWagon_01;/* '<S38>/Chart' */
  uint8_T s43_is_c6_BuckyWagon_01;     /* '<S38>/Chart' */
  boolean_T s119_TimeSinceEnabledWithInput1_MODE;/* '<S119>/Time Since Enabled (With Input)1' */
  boolean_T s12_TimeSinceEnabledWithInput1_MODE;/* '<S12>/Time Since Enabled (With Input)1' */
  boolean_T s42_EnabledSubsystem_MODE; /* '<S42>/Enabled Subsystem' */
  rtDW_FaultIterator_BuckyWagon_01 s216_FaultIterator;/* '<S216>/Fault Iterator' */
  rtDW_Chart_BuckyWagon_01_o s11_sf_Chart;/* '<S11>/Chart' */
  rtDW_Chart_BuckyWagon_01 s334_sf_Chart;/* '<S334>/Chart' */
  rtDW_Chart_BuckyWagon_01 s288_sf_Chart;/* '<S288>/Chart' */
  rtDW_Downsapmle_BuckyWagon_01 s147_sf_Downsapmle1;/* '<S147>/Downsapmle1' */
  rtDW_Downsapmle_BuckyWagon_01 s147_sf_Downsapmle;/* '<S147>/Downsapmle' */
} D_Work_BuckyWagon_01;

/* Zero-crossing (trigger) state */
typedef struct {
  rtZCE_Chart_BuckyWagon_01_o s11_sf_Chart;/* '<S11>/Chart' */
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S401>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S401>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S401>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S401>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S405>/Clear' */
  ZCSigState Clear_Trig_ZCE_f;         /* '<S404>/Clear' */
} PrevZCSigStates_BuckyWagon_01;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s218_Saturation3;       /* '<S218>/Saturation3' */
  const int16_T s218_DataTypeConversion3;/* '<S218>/Data Type Conversion3' */
  const boolean_T s128_DataTypeConversion;/* '<S128>/Data Type Conversion' */
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
   * Referenced by: '<S129>/Combinatorial  Logic'
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
 * '<S15>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger
 * '<S16>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller
 * '<S17>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump
 * '<S18>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller
 * '<S19>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger
 * '<S20>'  : BuckyWagon_01/Foreground/Actuators/Solectria Controller
 * '<S21>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic
 * '<S22>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5
 * '<S23>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6
 * '<S24>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7
 * '<S25>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8
 * '<S26>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Compare To Constant
 * '<S27>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Compare To Constant1
 * '<S28>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Time Since Enabled (With Input)1
 * '<S29>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/GFD Logic/Time Since Enabled (With Input)2
 * '<S30>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/NewValue
 * '<S31>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/OldValue
 * '<S32>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/NewValue
 * '<S33>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/OldValue
 * '<S34>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/NewValue
 * '<S35>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/OldValue
 * '<S36>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/NewValue
 * '<S37>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/OldValue
 * '<S38>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator
 * '<S39>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1
 * '<S40>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2
 * '<S41>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2
 * '<S42>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/ReverseInd
 * '<S43>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart
 * '<S44>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3
 * '<S45>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/NewValue
 * '<S46>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/OldValue
 * '<S47>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units
 * '<S48>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/NewValue
 * '<S49>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/OldValue
 * '<S50>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units
 * '<S51>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/NewValue
 * '<S52>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/OldValue
 * '<S53>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/Saturation
 * '<S54>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2
 * '<S55>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/NewValue
 * '<S56>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/OldValue
 * '<S57>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/ReverseInd/Enabled Subsystem
 * '<S58>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs
 * '<S59>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs1
 * '<S60>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs2
 * '<S61>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs3
 * '<S62>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs4
 * '<S63>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs5
 * '<S64>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs/NewValue
 * '<S65>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs/OldValue
 * '<S66>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs1/NewValue
 * '<S67>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs1/OldValue
 * '<S68>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs2/NewValue
 * '<S69>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs2/OldValue
 * '<S70>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs3/NewValue
 * '<S71>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs3/OldValue
 * '<S72>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs4/NewValue
 * '<S73>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs4/OldValue
 * '<S74>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs5/NewValue
 * '<S75>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs5/OldValue
 * '<S76>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4
 * '<S77>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/NewValue
 * '<S78>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/OldValue
 * '<S79>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1
 * '<S80>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4
 * '<S81>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/NewValue
 * '<S82>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/OldValue
 * '<S83>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/NewValue
 * '<S84>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/OldValue
 * '<S85>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/Chart
 * '<S86>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs
 * '<S87>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1
 * '<S88>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/NewValue
 * '<S89>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/OldValue
 * '<S90>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/NewValue
 * '<S91>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/OldValue
 * '<S92>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1
 * '<S93>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2
 * '<S94>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3
 * '<S95>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4
 * '<S96>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5
 * '<S97>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/NewValue
 * '<S98>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/OldValue
 * '<S99>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/NewValue
 * '<S100>' : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/OldValue
 * '<S101>' : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/NewValue
 * '<S102>' : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/OldValue
 * '<S103>' : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/NewValue
 * '<S104>' : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/OldValue
 * '<S105>' : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/NewValue
 * '<S106>' : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/OldValue
 * '<S107>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs
 * '<S108>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1
 * '<S109>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2
 * '<S110>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3
 * '<S111>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/NewValue
 * '<S112>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/OldValue
 * '<S113>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/NewValue
 * '<S114>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/OldValue
 * '<S115>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/NewValue
 * '<S116>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/OldValue
 * '<S117>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/NewValue
 * '<S118>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/OldValue
 * '<S119>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery
 * '<S120>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/LowVoltageSystem
 * '<S121>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive
 * '<S122>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management
 * '<S123>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Time Since Enabled (With Input)1
 * '<S124>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management/SOCAlert
 * '<S125>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management/SOCShutdown
 * '<S126>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Compare To Constant
 * '<S127>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Hysterisis
 * '<S128>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Integrator
 * '<S129>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Hysterisis/Hysteresis
 * '<S130>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Integrator/Saturation
 * '<S131>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)
 * '<S132>' : BuckyWagon_01/Foreground/Control Strategy/Calculations
 * '<S133>' : BuckyWagon_01/Foreground/Control Strategy/Drive
 * '<S134>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl
 * '<S135>' : BuckyWagon_01/Foreground/Control Strategy/First Order Low Pass (Tunable)
 * '<S136>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller
 * '<S137>' : BuckyWagon_01/Foreground/Control Strategy/Reverse
 * '<S138>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs
 * '<S139>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_table_1d
 * '<S140>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_table_1d1
 * '<S141>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/Charging State Machine
 * '<S142>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/First Order Low Pass
 * '<S143>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/motohawk_override_abs
 * '<S144>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/motohawk_override_abs/NewValue
 * '<S145>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/motohawk_override_abs/OldValue
 * '<S146>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/Odometer
 * '<S147>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1
 * '<S148>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle
 * '<S149>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle1
 * '<S150>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm
 * '<S151>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving
 * '<S152>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/Chart
 * '<S153>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1
 * '<S154>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/First Order Low Pass (Tunable)
 * '<S155>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Rising Edge
 * '<S156>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Saturation1
 * '<S157>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Simple PI
 * '<S158>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S159>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Simple PI/Integrator
 * '<S160>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Simple PI/Model Info
 * '<S161>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Simple PI/Integrator/Saturation
 * '<S162>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)
 * '<S163>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)1
 * '<S164>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen
 * '<S165>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/motohawk_table_1d
 * '<S166>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S167>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S168>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/First Order Low Pass (Tunable)reg
 * '<S169>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs
 * '<S170>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_table_2d
 * '<S171>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/First Order Low Pass (Tunable)reg/First Order Low Pass
 * '<S172>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/NewValue
 * '<S173>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/OldValue
 * '<S174>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/Chart
 * '<S175>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs
 * '<S176>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1
 * '<S177>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/NewValue
 * '<S178>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/OldValue
 * '<S179>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/NewValue
 * '<S180>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/OldValue
 * '<S181>' : BuckyWagon_01/Foreground/Control Strategy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S182>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Battery has passed power-on-self-test and is ready
 * '<S183>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller
 * '<S184>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Main contactors closed and ready
 * '<S185>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2
 * '<S186>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay falling edge
 * '<S187>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay rising edge
 * '<S188>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Time Since Enabled (With Input)1
 * '<S189>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Time Since Enabled (With Input)3
 * '<S190>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay falling edge/MotoHawk S-R Flip-Flop
 * '<S191>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay rising edge/MotoHawk S-R Flip-Flop
 * '<S192>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/NewValue
 * '<S193>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/OldValue
 * '<S194>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/Chart
 * '<S195>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs
 * '<S196>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/NewValue
 * '<S197>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/OldValue
 * '<S198>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/NewValue
 * '<S199>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/OldValue
 * '<S200>' : BuckyWagon_01/Foreground/MiniViewDisplay/Chart
 * '<S201>' : BuckyWagon_01/Foreground/MiniViewDisplay/Clear Screen
 * '<S202>' : BuckyWagon_01/Foreground/MiniViewDisplay/Down Button
 * '<S203>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Bitmap
 * '<S204>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw HLine
 * '<S205>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Rect
 * '<S206>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw String
 * '<S207>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Vline
 * '<S208>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem
 * '<S209>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem1
 * '<S210>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem2
 * '<S211>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem
 * '<S212>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem1
 * '<S213>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem2
 * '<S214>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem3
 * '<S215>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem4
 * '<S216>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName
 * '<S217>' : BuckyWagon_01/Foreground/MiniViewDisplay/Menu Button
 * '<S218>' : BuckyWagon_01/Foreground/MiniViewDisplay/Scale Data
 * '<S219>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient
 * '<S220>' : BuckyWagon_01/Foreground/MiniViewDisplay/Set GUI Mode
 * '<S221>' : BuckyWagon_01/Foreground/MiniViewDisplay/Up Button
 * '<S222>' : BuckyWagon_01/Foreground/MiniViewDisplay/Clear Screen/Clear Screen
 * '<S223>' : BuckyWagon_01/Foreground/MiniViewDisplay/Down Button/Subsystem
 * '<S224>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Bitmap/Subsystem
 * '<S225>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw HLine/Subsystem
 * '<S226>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Rect/Subsystem
 * '<S227>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw String/Subsystem
 * '<S228>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Vline/Subsystem
 * '<S229>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/Chart
 * '<S230>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/Fault Iterator
 * '<S231>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/getStringLength
 * '<S232>' : BuckyWagon_01/Foreground/MiniViewDisplay/Menu Button/Subsystem
 * '<S233>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem
 * '<S234>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem
 * '<S235>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1
 * '<S236>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 0)
 * '<S237>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 1)
 * '<S238>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 2)
 * '<S239>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem/Compare To Zero
 * '<S240>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem/Enabled Subsystem
 * '<S241>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1/Compare To Zero
 * '<S242>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1/Enabled Subsystem
 * '<S243>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 0)/Subsystem
 * '<S244>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 1)/Subsystem
 * '<S245>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 2)/Subsystem
 * '<S246>' : BuckyWagon_01/Foreground/MiniViewDisplay/Set GUI Mode/Subsystem
 * '<S247>' : BuckyWagon_01/Foreground/MiniViewDisplay/Up Button/Subsystem
 * '<S248>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs
 * '<S249>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1
 * '<S250>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger
 * '<S251>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs
 * '<S252>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs
 * '<S253>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger
 * '<S254>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs
 * '<S255>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization
 * '<S256>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1
 * '<S257>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2
 * '<S258>' : BuckyWagon_01/Foreground/Sensors/Time Since Enabled (With Input)1
 * '<S259>' : BuckyWagon_01/Foreground/Sensors/Time Since Key On
 * '<S260>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed
 * '<S261>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1
 * '<S262>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant4
 * '<S263>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant5
 * '<S264>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant6
 * '<S265>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs
 * '<S266>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1
 * '<S267>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2
 * '<S268>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4
 * '<S269>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5
 * '<S270>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/NewValue
 * '<S271>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/OldValue
 * '<S272>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/NewValue
 * '<S273>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/OldValue
 * '<S274>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/NewValue
 * '<S275>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/OldValue
 * '<S276>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/NewValue
 * '<S277>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/OldValue
 * '<S278>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/NewValue
 * '<S279>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/OldValue
 * '<S280>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units
 * '<S281>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/NewValue
 * '<S282>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/OldValue
 * '<S283>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/Compare To Constant
 * '<S284>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/Compare To Constant1
 * '<S285>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/Compare To Constant2
 * '<S286>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/Compare To Constant3
 * '<S287>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/Compare To Constant4
 * '<S288>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/PluggedInDetect
 * '<S289>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/motohawk_override_abs
 * '<S290>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/PluggedInDetect/Chart
 * '<S291>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/motohawk_override_abs/NewValue
 * '<S292>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/motohawk_override_abs/OldValue
 * '<S293>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/Compare To Constant3
 * '<S294>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1
 * '<S295>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10
 * '<S296>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2
 * '<S297>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3
 * '<S298>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7
 * '<S299>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8
 * '<S300>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9
 * '<S301>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/NewValue
 * '<S302>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/OldValue
 * '<S303>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/NewValue
 * '<S304>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/OldValue
 * '<S305>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/NewValue
 * '<S306>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/OldValue
 * '<S307>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/NewValue
 * '<S308>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/OldValue
 * '<S309>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/NewValue
 * '<S310>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/OldValue
 * '<S311>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/NewValue
 * '<S312>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/OldValue
 * '<S313>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/NewValue
 * '<S314>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/OldValue
 * '<S315>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1
 * '<S316>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10
 * '<S317>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2
 * '<S318>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3
 * '<S319>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8
 * '<S320>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9
 * '<S321>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/NewValue
 * '<S322>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/OldValue
 * '<S323>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/NewValue
 * '<S324>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/OldValue
 * '<S325>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/NewValue
 * '<S326>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/OldValue
 * '<S327>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/NewValue
 * '<S328>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/OldValue
 * '<S329>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/NewValue
 * '<S330>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/OldValue
 * '<S331>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/NewValue
 * '<S332>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/OldValue
 * '<S333>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/Compare To Constant
 * '<S334>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/PluggedInDetect
 * '<S335>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1
 * '<S336>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2
 * '<S337>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3
 * '<S338>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4
 * '<S339>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5
 * '<S340>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6
 * '<S341>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7
 * '<S342>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8
 * '<S343>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9
 * '<S344>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart
 * '<S345>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/NewValue
 * '<S346>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/OldValue
 * '<S347>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/NewValue
 * '<S348>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/OldValue
 * '<S349>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/NewValue
 * '<S350>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/OldValue
 * '<S351>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/NewValue
 * '<S352>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/OldValue
 * '<S353>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/NewValue
 * '<S354>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/OldValue
 * '<S355>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/NewValue
 * '<S356>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/OldValue
 * '<S357>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/NewValue
 * '<S358>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/OldValue
 * '<S359>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/NewValue
 * '<S360>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/OldValue
 * '<S361>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/NewValue
 * '<S362>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/OldValue
 * '<S363>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/Compare To Constant7
 * '<S364>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/Compare To Constant8
 * '<S365>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1
 * '<S366>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2
 * '<S367>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/NewValue
 * '<S368>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/OldValue
 * '<S369>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/NewValue
 * '<S370>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/OldValue
 * '<S371>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/First Order Low Pass
 * '<S372>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem
 * '<S373>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem1
 * '<S374>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem2
 * '<S375>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override
 * '<S376>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S377>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/NewValue
 * '<S378>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/OldValue
 * '<S379>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/First Order Low Pass
 * '<S380>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem
 * '<S381>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem1
 * '<S382>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem2
 * '<S383>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override
 * '<S384>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S385>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/NewValue
 * '<S386>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/OldValue
 * '<S387>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/First Order Low Pass
 * '<S388>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem
 * '<S389>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem1
 * '<S390>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem2
 * '<S391>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override
 * '<S392>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/First Order Low Pass/First Order Low Pass
 * '<S393>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/NewValue
 * '<S394>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/OldValue
 * '<S395>' : BuckyWagon_01/Foreground/Sensors/Time Since Key On/Time Since Enabled (With Input)2
 * '<S396>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs
 * '<S397>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/NewValue
 * '<S398>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/OldValue
 * '<S399>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/NewValue
 * '<S400>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/OldValue
 * '<S401>' : BuckyWagon_01/Main Power Relay/Background
 * '<S402>' : BuckyWagon_01/Main Power Relay/Background/Delay
 * '<S403>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Boolean
 * '<S404>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call
 * '<S405>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1
 * '<S406>' : BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off
 * '<S407>' : BuckyWagon_01/Main Power Relay/Background/Processor Reboot
 * '<S408>' : BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off
 * '<S409>' : BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128
 * '<S410>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs
 * '<S411>' : BuckyWagon_01/Main Power Relay/Background/motohawk_restore_nvmem
 * '<S412>' : BuckyWagon_01/Main Power Relay/Background/motohawk_store_nvmem
 * '<S413>' : BuckyWagon_01/Main Power Relay/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S414>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call/Clear
 * '<S415>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1/Clear
 * '<S416>' : BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S417>' : BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S418>' : BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S419>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/NewValue
 * '<S420>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BuckyWagon_01_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
