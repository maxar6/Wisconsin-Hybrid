/*
 * File: BuckyWagon_01.h
 *
 * Real-Time Workshop code generated for Simulink model BuckyWagon_01.
 *
 * Model version                        : 1.1518
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Jan 21 12:54:58 2018
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Jan 21 12:55:01 2018
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
#include "rt_MAX.h"
#include "rt_MAXd_snf.h"
#include "rt_MIN.h"
#include "rt_MINd_snf.h"
#include "rt_SATURATE.h"
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
  real_T s250_InputVoltage;            /* '<S250>/Read CAN Message2' */
  real_T s250_OutputVoltage;           /* '<S250>/Read CAN Message2' */
  real_T s250_InputCurrentLimitMax;    /* '<S250>/Read CAN Message2' */
  real_T s250_InputCurrent;            /* '<S250>/Read CAN Message2' */
  real_T s250_OutputCurrent;           /* '<S250>/Read CAN Message2' */
  real_T s250_Eaton_HV_Charger_Temperature;/* '<S250>/Read CAN Message2' */
  real_T s250_IgnitionStatus;          /* '<S250>/Read CAN Message2' */
  real_T s250_ChargerState;            /* '<S250>/Read CAN Message2' */
  real_T s250_FaultSeverityIndicator;  /* '<S250>/Read CAN Message2' */
  real_T s250_MessageCounter;          /* '<S250>/Read CAN Message2' */
  real_T s250_MessageChecksum;         /* '<S250>/Read CAN Message2' */
  real_T s252_Saturation;              /* '<S252>/Saturation' */
  real_T s372_Merge;                   /* '<S372>/Merge' */
  real_T s246_DataTypeConversion;      /* '<S246>/Data Type Conversion' */
  real_T s393_Merge;                   /* '<S393>/Merge' */
  real_T s9_InReverse;                 /* '<S9>/Data Type Conversion' */
  real_T s9_FanDutyCycle;              /* '<S9>/Switch1' */
  real_T s254_Saturation;              /* '<S254>/Saturation' */
  real_T s388_Merge;                   /* '<S388>/Merge' */
  real_T s247_NLG5GenLimWrng;          /* '<S247>/Read CAN Message5' */
  real_T s247_NLG5FanActv;             /* '<S247>/Read CAN Message5' */
  real_T s247_EuropeMains;             /* '<S247>/Read CAN Message5' */
  real_T s247_USAMainsL1;              /* '<S247>/Read CAN Message5' */
  real_T s247_USAMainsL2;              /* '<S247>/Read CAN Message5' */
  real_T s247_CntrlPltDet;             /* '<S247>/Read CAN Message5' */
  real_T s247_BypassDet;               /* '<S247>/Read CAN Message5' */
  real_T s247_LimByOutVlt;             /* '<S247>/Read CAN Message5' */
  real_T s247_LimByOutCrnt;            /* '<S247>/Read CAN Message5' */
  real_T s247_LimByMainCrnt;           /* '<S247>/Read CAN Message5' */
  real_T s247_LimByPwrInd;             /* '<S247>/Read CAN Message5' */
  real_T s247_LimByCntrlPlt;           /* '<S247>/Read CAN Message5' */
  real_T s247_LimByNLG5MaxPwr;         /* '<S247>/Read CAN Message5' */
  real_T s247_LimByNLG5MaxMainsCrnt;   /* '<S247>/Read CAN Message5' */
  real_T s247_LimByNLG5MaxOutCrnt;     /* '<S247>/Read CAN Message5' */
  real_T s247_LimByNLG5MaxOutVlt;      /* '<S247>/Read CAN Message5' */
  real_T s247_LimByTempCap;            /* '<S247>/Read CAN Message5' */
  real_T s247_LimByTempPwrStg;         /* '<S247>/Read CAN Message5' */
  real_T s247_LimByTempDiode;          /* '<S247>/Read CAN Message5' */
  real_T s247_LimByTempXfrmr;          /* '<S247>/Read CAN Message5' */
  real_T s247_LimByBattTemp;           /* '<S247>/Read CAN Message5' */
  real_T s247_MainsActCrnt;            /* '<S247>/Read CAN Message6' */
  real_T s247_MainsActVlt;             /* '<S247>/Read CAN Message6' */
  real_T s247_OutptActVlt;             /* '<S247>/Read CAN Message6' */
  real_T s247_OutptActCrnt;            /* '<S247>/Read CAN Message6' */
  real_T s9_CoolantPumpSpeed;          /* '<S9>/Switch' */
  real_T s392_Sum;                     /* '<S392>/Sum' */
  real_T s9_Motor_Torque;              /* '<S9>/Product1' */
  real_T s178_Sum1;                    /* '<S178>/Sum1' */
  real_T s135_Merge;                   /* '<S135>/Merge' */
  real_T s18_Product;                  /* '<S18>/Product' */
  real_T s92_Merge;                    /* '<S92>/Merge' */
  real_T s90_Merge;                    /* '<S90>/Merge' */
  real_T s89_Merge;                    /* '<S89>/Merge' */
  real_T s107_Merge;                   /* '<S107>/Merge' */
  real_T s253_Sum1;                    /* '<S253>/Sum1' */
  real_T s380_Merge;                   /* '<S380>/Merge' */
  real_T s125_Switch1;                 /* '<S125>/Switch1' */
  real_T s247_MainsCrntByCntrlPlt;     /* '<S247>/Read CAN Message1' */
  real_T s247_MainsCrntByPwrInd;       /* '<S247>/Read CAN Message1' */
  real_T s247_AuxBattVlt;              /* '<S247>/Read CAN Message1' */
  real_T s247_AhrsByExtShnt;           /* '<S247>/Read CAN Message1' */
  real_T s247_OutptCrntByBstr;         /* '<S247>/Read CAN Message1' */
  real_T s247_PwrStgTemp;              /* '<S247>/Read CAN Message3' */
  real_T s247_TempExtrn1;              /* '<S247>/Read CAN Message3' */
  real_T s247_TempExtrn2;              /* '<S247>/Read CAN Message3' */
  real_T s247_TempExtrn3;              /* '<S247>/Read CAN Message3' */
  real_T s247_OutptOvrVlt;             /* '<S247>/Read CAN Message4' */
  real_T s247_MainsOvrVlt2;            /* '<S247>/Read CAN Message4' */
  real_T s247_MainsOvrVlt1;            /* '<S247>/Read CAN Message4' */
  real_T s247_PwrStgShrtCkt;           /* '<S247>/Read CAN Message4' */
  real_T s247_PlsbltyOutptVltMeas;     /* '<S247>/Read CAN Message4' */
  real_T s247_PlsbltyMainsVltMeas;     /* '<S247>/Read CAN Message4' */
  real_T s247_OutptFuseDefect;         /* '<S247>/Read CAN Message4' */
  real_T s247_MainsFuseDefect;         /* '<S247>/Read CAN Message4' */
  real_T s247_BattPolarity;            /* '<S247>/Read CAN Message4' */
  real_T s247_TempSensCap;             /* '<S247>/Read CAN Message4' */
  real_T s247_TempSensPwrStg;          /* '<S247>/Read CAN Message4' */
  real_T s247_TempSensDiode;           /* '<S247>/Read CAN Message4' */
  real_T s247_TempSensXfrmr;           /* '<S247>/Read CAN Message4' */
  real_T s247_TempSensExt1;            /* '<S247>/Read CAN Message4' */
  real_T s247_TempSensExt2;            /* '<S247>/Read CAN Message4' */
  real_T s247_TempSensExt3;            /* '<S247>/Read CAN Message4' */
  real_T s247_FlashChksmFail;          /* '<S247>/Read CAN Message4' */
  real_T s247_NVSRAMChksmFail;         /* '<S247>/Read CAN Message4' */
  real_T s247_EEPROMSysChksmFail;      /* '<S247>/Read CAN Message4' */
  real_T s247_EEPROMPOWChksmFail;      /* '<S247>/Read CAN Message4' */
  real_T s247_WatchdogInternal;        /* '<S247>/Read CAN Message4' */
  real_T s247_Initialization;          /* '<S247>/Read CAN Message4' */
  real_T s247_CANTimeout;              /* '<S247>/Read CAN Message4' */
  real_T s247_CANOff;                  /* '<S247>/Read CAN Message4' */
  real_T s247_CAN_Xmit;                /* '<S247>/Read CAN Message4' */
  real_T s247_CAN_Rcv;                 /* '<S247>/Read CAN Message4' */
  real_T s247_ShtdwnThrsBattTemp;      /* '<S247>/Read CAN Message4' */
  real_T s247_ShtdwnThresBattVlt;      /* '<S247>/Read CAN Message4' */
  real_T s247_ShtdwnThresBattAhrs;     /* '<S247>/Read CAN Message4' */
  real_T s247_ShtdwnThresChrgTime;     /* '<S247>/Read CAN Message4' */
  real_T s247_PwrLimByLowMainsVlt;     /* '<S247>/Read CAN Message4' */
  real_T s247_PwrLimByLowBattVlt;      /* '<S247>/Read CAN Message4' */
  real_T s247_PwrLimByIntOvrTemp;      /* '<S247>/Read CAN Message4' */
  real_T s247_CmdValOutRange;          /* '<S247>/Read CAN Message4' */
  real_T s144_Gain1;                   /* '<S144>/Gain1' */
  real_T s144_Gain4;                   /* '<S144>/Gain4' */
  real_T s144_Gain5;                   /* '<S144>/Gain5' */
  real_T s144_Gain6;                   /* '<S144>/Gain6' */
  real_T s144_Gain8;                   /* '<S144>/Gain8' */
  real_T s144_Divide3;                 /* '<S144>/Divide3' */
  real_T s144_Gain;                    /* '<S144>/Gain' */
  real_T s144_Gain3;                   /* '<S144>/Gain3' */
  real_T s144_Divide;                  /* '<S144>/Divide' */
  real_T s144_Saturation;              /* '<S144>/Saturation' */
  real_T s143_Sum1;                    /* '<S143>/Sum1' */
  real_T s143_UnitDelay;               /* '<S143>/Unit Delay' */
  real_T s255_UnitDelay;               /* '<S255>/Unit Delay' */
  real_T s251_Fault_Severity_Indicator;/* '<S251>/Read CAN Message2' */
  real_T s251_Message_Checksum;        /* '<S251>/Read CAN Message2' */
  real_T s251_Message_Counter;         /* '<S251>/Read CAN Message2' */
  real_T s251_Motor_Control_State;     /* '<S251>/Read CAN Message2' */
  real_T s251_Motor_Speed;             /* '<S251>/Read CAN Message2' */
  real_T s251_Motor_Torque;            /* '<S251>/Read CAN Message2' */
  real_T s251_Percent_Torque_Available;/* '<S251>/Read CAN Message2' */
  real_T s362_Merge;                   /* '<S362>/Merge' */
  real_T s363_Merge;                   /* '<S363>/Merge' */
  real_T s251_DC_Bus_Current;          /* '<S251>/Read CAN Message1' */
  real_T s251_DC_Bus_Voltage;          /* '<S251>/Read CAN Message1' */
  real_T s251_Inverter_Temperature;    /* '<S251>/Read CAN Message1' */
  real_T s251_Motor_Temperature;       /* '<S251>/Read CAN Message1' */
  real_T s251_Phase_Current;           /* '<S251>/Read CAN Message1' */
  real_T s251_Phase_phase_voltage;     /* '<S251>/Read CAN Message1' */
  real_T s251_Isolation_Resistance;    /* '<S251>/Read CAN Message3' */
  real_T s251_Maximum_Rated_Power;     /* '<S251>/Read CAN Message3' */
  real_T s251_Maximum_Rated_Speed;     /* '<S251>/Read CAN Message3' */
  real_T s251_Maximum_Rated_Torqe;     /* '<S251>/Read CAN Message3' */
  real_T s249_ReadCANMessage_o2;       /* '<S249>/Read CAN Message' */
  real_T s249_EMP_Pump_Status;         /* '<S249>/Read CAN Message' */
  real_T s249_EMP_Pump_Mode;           /* '<S249>/Read CAN Message' */
  real_T s249_EMP_Pump_Speed;          /* '<S249>/Read CAN Message' */
  real_T s249_EMP_Board_Temp;          /* '<S249>/Read CAN Message' */
  real_T s249_EMP_Pump_Power;          /* '<S249>/Read CAN Message' */
  real_T s249_EMP_Speed_Percent;       /* '<S249>/Read CAN Message' */
  real_T s248_ReadCANMessage_o2;       /* '<S248>/Read CAN Message' */
  real_T s248_EHPAS_Input_Voltage;     /* '<S248>/Read CAN Message' */
  real_T s248_EHPAS_Input_Current_NA;  /* '<S248>/Read CAN Message' */
  real_T s248_EHPAS_Pump_Speed;        /* '<S248>/Read CAN Message' */
  real_T s248_EHPAS_TempMax;           /* '<S248>/Read CAN Message' */
  real_T s248_EHPAS_TempCur;           /* '<S248>/Read CAN Message' */
  real_T s248_EHPAS_Op_State;          /* '<S248>/Read CAN Message' */
  real_T s248_EHPAS_Fault;             /* '<S248>/Read CAN Message' */
  real_T s245_bcm_alarm;               /* '<S245>/Read CAN Message1' */
  real_T s245_bcm_cpwr_cmd;            /* '<S245>/Read CAN Message1' */
  real_T s245_bcm_cpwr_mon;            /* '<S245>/Read CAN Message1' */
  real_T s245_bcm_epo;                 /* '<S245>/Read CAN Message1' */
  real_T s245_bcm_gfd;                 /* '<S245>/Read CAN Message1' */
  real_T s245_bcm_hvil_mon;            /* '<S245>/Read CAN Message1' */
  real_T s245_bcm_ibat;                /* '<S245>/Read CAN Message1' */
  real_T s245_bcm_ready;               /* '<S245>/Read CAN Message1' */
  real_T s245_bcm_soc;                 /* '<S245>/Read CAN Message1' */
  real_T s245_bcm_vbat;                /* '<S245>/Read CAN Message1' */
  real_T s245_bcm_chg_done;            /* '<S245>/Read CAN Message1' */
  real_T s245_bcm_cool_req;            /* '<S245>/Read CAN Message1' */
  real_T s266_Merge;                   /* '<S266>/Merge' */
  real_T s245_bcm_soc_j;               /* '<S245>/Gain1' */
  real_T s265_Merge;                   /* '<S265>/Merge' */
  real_T s245_bcm_cell_tmax;           /* '<S245>/Read CAN Message6' */
  real_T s245_bcm_cell_tmin;           /* '<S245>/Read CAN Message6' */
  real_T s245_bcm_cell_vmax;           /* '<S245>/Read CAN Message6' */
  real_T s245_bcm_cell_vmin;           /* '<S245>/Read CAN Message6' */
  real_T s245_bcm_chga_ena;            /* '<S245>/Read CAN Message6' */
  real_T s245_bcm_chga_mon;            /* '<S245>/Read CAN Message6' */
  real_T s245_bcm_lvbat;               /* '<S245>/Read CAN Message6' */
  real_T s245_bcm_mod_ena;             /* '<S245>/Read CAN Message6' */
  real_T s245_bcm_veh_mon;             /* '<S245>/Read CAN Message6' */
  real_T s245_bcm_cell_overvolt;       /* '<S245>/Read CAN Message5' */
  real_T s245_bcm_chg_buf;             /* '<S245>/Read CAN Message5' */
  real_T s245_bcm_chg_max;             /* '<S245>/Read CAN Message5' */
  real_T s245_bcm_dis_buf;             /* '<S245>/Read CAN Message5' */
  real_T s245_bcm_dis_max;             /* '<S245>/Read CAN Message5' */
  real_T s245_bcm_t_coolant;           /* '<S245>/Read CAN Message5' */
  real_T s264_Merge;                   /* '<S264>/Merge' */
  real_T s134_Abs;                     /* '<S134>/Abs' */
  real_T s192_Merge;                   /* '<S192>/Merge' */
  real_T s191_inReverse;               /* '<S134>/Chart' */
  real_T s155_Sum1;                    /* '<S155>/Sum1' */
  real_T s154_Sum;                     /* '<S154>/Sum' */
  real_T s161_Saturation1;             /* '<S161>/Saturation1' */
  real_T s161_Product;                 /* '<S161>/Product' */
  real_T s161_Product2;                /* '<S161>/Product2' */
  real_T s139_Sum1;                    /* '<S139>/Sum1' */
  real_T s138_currOut;                 /* '<S128>/Charging State Machine' */
  real_T s138_voltOut;                 /* '<S128>/Charging State Machine' */
  real_T s120_UnitDelay;               /* '<S120>/Unit Delay' */
  real_T s82_ctrlState;                /* '<S18>/Chart' */
  real_T s76_Merge;                    /* '<S76>/Merge' */
  real_T s55_Merge;                    /* '<S55>/Merge' */
  real_T s56_Merge;                    /* '<S56>/Merge' */
  real_T s57_Merge;                    /* '<S57>/Merge' */
  real_T s41_Merge;                    /* '<S41>/Merge' */
  real_T s50_MinMax1;                  /* '<S50>/MinMax1' */
  uint32_T s250_AgeCount;              /* '<S250>/Read CAN Message2' */
  uint32_T s247_AgeCount;              /* '<S247>/Read CAN Message5' */
  uint32_T s247_AgeCount_p;            /* '<S247>/Read CAN Message6' */
  uint32_T s247_AgeCount_a;            /* '<S247>/Read CAN Message1' */
  uint32_T s247_AgeCount_m;            /* '<S247>/Read CAN Message3' */
  uint32_T s247_AgeCount_mv;           /* '<S247>/Read CAN Message4' */
  uint32_T s251_AgeCount;              /* '<S251>/Read CAN Message2' */
  uint32_T s251_AgeCount_g;            /* '<S251>/Read CAN Message1' */
  uint32_T s249_AgeCount;              /* '<S249>/Read CAN Message' */
  uint32_T s248_AgeCount;              /* '<S248>/Read CAN Message' */
  uint32_T s245_AgeCount;              /* '<S245>/Read CAN Message1' */
  uint32_T s245_AgeCount_e;            /* '<S245>/Read CAN Message6' */
  uint32_T s245_AgeCount_k;            /* '<S245>/Read CAN Message5' */
  int16_T s10_DataTypeConversion;      /* '<S10>/Data Type Conversion' */
  int16_T s10_DataTypeConversion2;     /* '<S10>/Data Type Conversion2' */
  int16_T s10_DataTypeConversion1;     /* '<S10>/Data Type Conversion1' */
  int16_T s11_TmpSignalConversionAtChartInport20[18];/* '<S11>/Scale Data' */
  uint16_T s12_motohawk_ain;           /* '<S12>/motohawk_ain' */
  uint16_T s12_motohawk_ain1;          /* '<S12>/motohawk_ain1' */
  uint16_T s12_motohawk_ain5;          /* '<S12>/motohawk_ain5' */
  uint16_T s226_minTimer;              /* '<S213>/Chart' */
  uint16_T s226_scrollTimer;           /* '<S213>/Chart' */
  uint16_T s138_timer;                 /* '<S128>/Charging State Machine' */
  uint8_T s91_Merge;                   /* '<S91>/Merge' */
  uint8_T s247_DataTypeConversion;     /* '<S247>/Data Type Conversion' */
  uint8_T s247_DataTypeConversion1;    /* '<S247>/Data Type Conversion1' */
  uint8_T s247_DataTypeConversion2;    /* '<S247>/Data Type Conversion2' */
  uint8_T s247_DataTypeConversion3;    /* '<S247>/Data Type Conversion3' */
  uint8_T s247_DataTypeConversion4;    /* '<S247>/Data Type Conversion4' */
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
  uint8_T s244_upcount;                /* '<S244>/Read CAN Message' */
  uint8_T s229_menucount;              /* '<S229>/Read CAN Message' */
  uint8_T s226_mode;                   /* '<S213>/Chart' */
  uint8_T s226_text[10];               /* '<S213>/Chart' */
  uint8_T s226_scrollIndex;            /* '<S213>/Chart' */
  uint8_T s220_downcount;              /* '<S220>/Read CAN Message' */
  uint8_T s171_PumpState;              /* '<S131>/Chart' */
  uint8_T s138_state;                  /* '<S128>/Charging State Machine' */
  uint8_T s16_OperatingMode_cmd;       /* '<S16>/Switch' */
  uint8_T s58_Merge;                   /* '<S58>/Merge' */
  uint8_T s59_Merge;                   /* '<S59>/Merge' */
  uint8_T s13_Switch;                  /* '<S13>/Switch' */
  uint8_T s21_Compare;                 /* '<S21>/Compare' */
  boolean_T s277_Merge;                /* '<S277>/Merge' */
  boolean_T s258_Merge;                /* '<S258>/Merge' */
  boolean_T s247_DataAvailable;        /* '<S247>/Read CAN Message5' */
  boolean_T s247_NLG5PwrEn;            /* '<S247>/Read CAN Message5' */
  boolean_T s247_NLG5GenErrLtch;       /* '<S247>/Read CAN Message5' */
  boolean_T s247_DataAvailable_c;      /* '<S247>/Read CAN Message6' */
  boolean_T s286_Merge;                /* '<S286>/Merge' */
  boolean_T s93_Merge;                 /* '<S93>/Merge' */
  boolean_T s118_LogicalOperator;      /* '<S118>/Logical Operator' */
  boolean_T s247_DataAvailable_i;      /* '<S247>/Read CAN Message1' */
  boolean_T s244_upasserted;           /* '<S244>/Read CAN Message' */
  boolean_T s229_menuasserted;         /* '<S229>/Read CAN Message' */
  boolean_T s220_downasserted;         /* '<S220>/Read CAN Message' */
  boolean_T s251_RelationalOperator;   /* '<S251>/Relational Operator' */
  boolean_T s245_bcm_mainc_stat;       /* '<S245>/Read CAN Message1' */
  boolean_T s245_bcm_chgc_stat;        /* '<S245>/Read CAN Message1' */
  boolean_T s262_Merge;                /* '<S262>/Merge' */
  boolean_T s263_Merge;                /* '<S263>/Merge' */
  boolean_T s245_bcm_cell_undervolt;   /* '<S245>/Read CAN Message5' */
  boolean_T s133_LogicalOperator;      /* '<S133>/Logical Operator' */
  boolean_T s149_HillHoldOn;           /* '<S147>/Chart' */
  boolean_T s140_Merge;                /* '<S140>/Merge' */
  boolean_T s60_Merge;                 /* '<S60>/Merge' */
  boolean_T s36_LogicalOperator;       /* '<S36>/Logical Operator' */
  boolean_T s37_LogicalOperator;       /* '<S37>/Logical Operator' */
  boolean_T s54_RelationalOperator;    /* '<S54>/Relational Operator' */
  boolean_T s40_light;                 /* '<S35>/Chart' */
  rtB_FaultIterator_BuckyWagon_01 s213_FaultIterator;/* '<S213>/Fault Iterator' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem2;/* '<S11>/Enabled Subsystem2' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem1;/* '<S11>/Enabled Subsystem1' */
  rtB_EnabledSubsystem_BuckyWagon_01 s11_EnabledSubsystem;/* '<S11>/Enabled Subsystem' */
  rtB_Chart_BuckyWagon_01_n s11_sf_Chart;/* '<S11>/Chart' */
  rtB_Chart_BuckyWagon_01 s331_sf_Chart;/* '<S331>/Chart' */
  rtB_Chart_BuckyWagon_01 s285_sf_Chart;/* '<S285>/Chart' */
  rtB_Downsapmle_BuckyWagon_01 s144_sf_Downsapmle1;/* '<S144>/Downsapmle1' */
  rtB_Downsapmle_BuckyWagon_01 s144_sf_Downsapmle;/* '<S144>/Downsapmle' */
} BlockIO_BuckyWagon_01;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s252_UnitDelay1_DSTATE;       /* '<S252>/Unit Delay1' */
  real_T s373_UnitDelay_DSTATE;        /* '<S373>/Unit Delay' */
  real_T s254_UnitDelay1_DSTATE;       /* '<S254>/Unit Delay1' */
  real_T s389_UnitDelay_DSTATE;        /* '<S389>/Unit Delay' */
  real_T s178_UnitDelay_DSTATE;        /* '<S178>/Unit Delay' */
  real_T s253_UnitDelay1_DSTATE;       /* '<S253>/Unit Delay1' */
  real_T s381_UnitDelay_DSTATE;        /* '<S381>/Unit Delay' */
  real_T s125_UnitDelay_DSTATE;        /* '<S125>/Unit Delay' */
  real_T s144_UnitDelay1_DSTATE;       /* '<S144>/Unit Delay1' */
  real_T s129_UnitDelay_DSTATE;        /* '<S129>/Unit Delay' */
  real_T s144_UnitDelay_DSTATE;        /* '<S144>/Unit Delay' */
  real_T s143_UnitDelay_DSTATE;        /* '<S143>/Unit Delay' */
  real_T s255_UnitDelay_DSTATE;        /* '<S255>/Unit Delay' */
  real_T s184_UnitDelay_DSTATE;        /* '<S184>/Unit Delay' */
  real_T s184_UnitDelay1_DSTATE;       /* '<S184>/Unit Delay1' */
  real_T s183_UnitDelay_DSTATE;        /* '<S183>/Unit Delay' */
  real_T s183_UnitDelay1_DSTATE;       /* '<S183>/Unit Delay1' */
  real_T s155_UnitDelay_DSTATE;        /* '<S155>/Unit Delay' */
  real_T s156_UnitDelay_DSTATE;        /* '<S156>/Unit Delay' */
  real_T s163_UnitDelay_DSTATE;        /* '<S163>/Unit Delay' */
  real_T s164_UnitDelay_DSTATE;        /* '<S164>/Unit Delay' */
  real_T s168_UnitDelay_DSTATE;        /* '<S168>/Unit Delay' */
  real_T s139_UnitDelay_DSTATE;        /* '<S139>/Unit Delay' */
  real_T s120_UnitDelay_DSTATE;        /* '<S120>/Unit Delay' */
  real_T s191_timer;                   /* '<S134>/Chart' */
  real_T s171_brakeCounts;             /* '<S131>/Chart' */
  uint32_T s392_motohawk_delta_time_DWORK1;/* '<S392>/motohawk_delta_time' */
  uint32_T s132_motohawk_delta_time_DWORK1;/* '<S132>/motohawk_delta_time' */
  uint32_T s125_motohawk_delta_time_DWORK1;/* '<S125>/motohawk_delta_time' */
  uint32_T s144_motohawk_delta_time2_DWORK1;/* '<S144>/motohawk_delta_time2' */
  uint32_T s144_motohawk_delta_time1_DWORK1;/* '<S144>/motohawk_delta_time1' */
  uint32_T s143_motohawk_delta_time_DWORK1;/* '<S143>/motohawk_delta_time' */
  uint32_T s255_motohawk_delta_time_DWORK1;/* '<S255>/motohawk_delta_time' */
  uint32_T s186_motohawk_delta_time_DWORK1;/* '<S186>/motohawk_delta_time' */
  uint32_T s185_motohawk_delta_time_DWORK1;/* '<S185>/motohawk_delta_time' */
  uint32_T s171_counts;                /* '<S131>/Chart' */
  uint32_T s151_motohawk_delta_time_DWORK1;/* '<S151>/motohawk_delta_time' */
  uint32_T s156_motohawk_delta_time_DWORK1;/* '<S156>/motohawk_delta_time' */
  uint32_T s159_motohawk_delta_time_DWORK1;/* '<S159>/motohawk_delta_time' */
  uint32_T s160_motohawk_delta_time_DWORK1;/* '<S160>/motohawk_delta_time' */
  uint32_T s165_motohawk_delta_time_DWORK1;/* '<S165>/motohawk_delta_time' */
  uint32_T s120_motohawk_delta_time_DWORK1;/* '<S120>/motohawk_delta_time' */
  uint32_T s22_motohawk_delta_time_DWORK1;/* '<S22>/motohawk_delta_time' */
  int16_T s54_UnitDelay_DSTATE;        /* '<S54>/Unit Delay' */
  uint16_T s399_UnitDelay_DSTATE;      /* '<S399>/Unit Delay' */
  uint16_T s399_UnitDelay1_DSTATE;     /* '<S399>/Unit Delay1' */
  uint16_T s117_motohawk_fault_def5_DWORK1;/* '<S117>/motohawk_fault_def5' */
  uint16_T s40_timer;                  /* '<S35>/Chart' */
  uint8_T s213_UnitDelay_DSTATE[27];   /* '<S213>/Unit Delay' */
  boolean_T s126_UnitDelay_DSTATE;     /* '<S126>/Unit Delay' */
  boolean_T s118_UnitDelay_DSTATE;     /* '<S118>/Unit Delay' */
  boolean_T s213_UnitDelay1_DSTATE;    /* '<S213>/Unit Delay1' */
  boolean_T s11_UnitDelay_DSTATE;      /* '<S11>/Unit Delay' */
  boolean_T s187_UnitDelay_DSTATE;     /* '<S187>/Unit Delay' */
  boolean_T s188_UnitDelay_DSTATE;     /* '<S188>/Unit Delay' */
  boolean_T s152_UnitDelay_DSTATE;     /* '<S152>/Unit Delay' */
  boolean_T s400_UnitDelay_DSTATE;     /* '<S400>/Unit Delay' */
  boolean_T s410_UnitDelay_DSTATE;     /* '<S410>/Unit Delay' */
  boolean_T s398_UnitDelay5_DSTATE;    /* '<S398>/Unit Delay5' */
  boolean_T s398_UnitDelay2_DSTATE;    /* '<S398>/Unit Delay2' */
  boolean_T s398_UnitDelay_DSTATE;     /* '<S398>/Unit Delay' */
  boolean_T s398_UnitDelay1_DSTATE;    /* '<S398>/Unit Delay1' */
  boolean_T s398_UnitDelay3_DSTATE;    /* '<S398>/Unit Delay3' */
  boolean_T s398_UnitDelay4_DSTATE;    /* '<S398>/Unit Delay4' */
  uint8_T s2_motohawk_trigger1_DWORK1; /* '<S2>/motohawk_trigger1' */
  uint8_T s2_motohawk_trigger_DWORK1;  /* '<S2>/motohawk_trigger' */
  uint8_T s226_is_active_c3_BuckyWagon_01;/* '<S213>/Chart' */
  uint8_T s226_is_c3_BuckyWagon_01;    /* '<S213>/Chart' */
  uint8_T s226_is_Fault;               /* '<S213>/Chart' */
  uint8_T s191_is_active_c1_BuckyWagon_01;/* '<S134>/Chart' */
  uint8_T s191_is_c1_BuckyWagon_01;    /* '<S134>/Chart' */
  uint8_T s191_is_active_ButtonDebounce;/* '<S134>/Chart' */
  uint8_T s191_is_ButtonDebounce;      /* '<S134>/Chart' */
  uint8_T s191_is_active_ReverseLogic; /* '<S134>/Chart' */
  uint8_T s191_is_ReverseLogic;        /* '<S134>/Chart' */
  uint8_T s171_is_active_c9_BuckyWagon_01;/* '<S131>/Chart' */
  uint8_T s171_is_c9_BuckyWagon_01;    /* '<S131>/Chart' */
  uint8_T s171_is_LowSpeedManeuvering; /* '<S131>/Chart' */
  uint8_T s171_is_NormalDriving;       /* '<S131>/Chart' */
  uint8_T s149_is_active_c5_BuckyWagon_01;/* '<S147>/Chart' */
  uint8_T s149_is_c5_BuckyWagon_01;    /* '<S147>/Chart' */
  uint8_T s138_is_active_c8_BuckyWagon_01;/* '<S128>/Charging State Machine' */
  uint8_T s138_is_c8_BuckyWagon_01;    /* '<S128>/Charging State Machine' */
  uint8_T s82_is_active_c7_BuckyWagon_01;/* '<S18>/Chart' */
  uint8_T s82_is_c7_BuckyWagon_01;     /* '<S18>/Chart' */
  uint8_T s40_is_active_c6_BuckyWagon_01;/* '<S35>/Chart' */
  uint8_T s40_is_c6_BuckyWagon_01;     /* '<S35>/Chart' */
  boolean_T s116_TimeSinceEnabledWithInput1_MODE;/* '<S116>/Time Since Enabled (With Input)1' */
  boolean_T s12_TimeSinceEnabledWithInput1_MODE;/* '<S12>/Time Since Enabled (With Input)1' */
  boolean_T s39_EnabledSubsystem_MODE; /* '<S39>/Enabled Subsystem' */
  rtDW_FaultIterator_BuckyWagon_01 s213_FaultIterator;/* '<S213>/Fault Iterator' */
  rtDW_Chart_BuckyWagon_01_o s11_sf_Chart;/* '<S11>/Chart' */
  rtDW_Chart_BuckyWagon_01 s331_sf_Chart;/* '<S331>/Chart' */
  rtDW_Chart_BuckyWagon_01 s285_sf_Chart;/* '<S285>/Chart' */
  rtDW_Downsapmle_BuckyWagon_01 s144_sf_Downsapmle1;/* '<S144>/Downsapmle1' */
  rtDW_Downsapmle_BuckyWagon_01 s144_sf_Downsapmle;/* '<S144>/Downsapmle' */
} D_Work_BuckyWagon_01;

/* Zero-crossing (trigger) state */
typedef struct {
  rtZCE_Chart_BuckyWagon_01_o s11_sf_Chart;/* '<S11>/Chart' */
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S398>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S398>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S398>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S398>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S402>/Clear' */
  ZCSigState Clear_Trig_ZCE_f;         /* '<S401>/Clear' */
} PrevZCSigStates_BuckyWagon_01;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s215_Saturation3;       /* '<S215>/Saturation3' */
  const int16_T s215_DataTypeConversion3;/* '<S215>/Data Type Conversion3' */
  const boolean_T s125_DataTypeConversion;/* '<S125>/Data Type Conversion' */
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
   * Referenced by: '<S126>/Combinatorial  Logic'
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
extern ConstBlockIO_BuckyWagon_01 BuckyWagon_01_ConstB;/* constant block i/o */

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
extern struct RT_MODEL_BuckyWagon_01 *BuckyWagon_01_M;

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
 * '<S21>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/Compare To Constant
 * '<S22>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/Time Since Enabled (With Input)1
 * '<S23>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5
 * '<S24>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6
 * '<S25>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7
 * '<S26>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8
 * '<S27>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/NewValue
 * '<S28>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/OldValue
 * '<S29>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/NewValue
 * '<S30>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/OldValue
 * '<S31>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/NewValue
 * '<S32>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/OldValue
 * '<S33>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/NewValue
 * '<S34>'  : BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/OldValue
 * '<S35>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator
 * '<S36>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1
 * '<S37>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2
 * '<S38>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2
 * '<S39>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/ReverseInd
 * '<S40>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart
 * '<S41>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3
 * '<S42>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/NewValue
 * '<S43>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/OldValue
 * '<S44>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units
 * '<S45>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/NewValue
 * '<S46>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/OldValue
 * '<S47>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units
 * '<S48>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/NewValue
 * '<S49>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/OldValue
 * '<S50>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/Saturation
 * '<S51>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2
 * '<S52>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/NewValue
 * '<S53>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/OldValue
 * '<S54>'  : BuckyWagon_01/Foreground/Actuators/Analog Out/ReverseInd/Enabled Subsystem
 * '<S55>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs
 * '<S56>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs1
 * '<S57>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs2
 * '<S58>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs3
 * '<S59>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs4
 * '<S60>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs5
 * '<S61>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs/NewValue
 * '<S62>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs/OldValue
 * '<S63>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs1/NewValue
 * '<S64>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs1/OldValue
 * '<S65>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs2/NewValue
 * '<S66>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs2/OldValue
 * '<S67>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs3/NewValue
 * '<S68>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs3/OldValue
 * '<S69>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs4/NewValue
 * '<S70>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs4/OldValue
 * '<S71>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs5/NewValue
 * '<S72>'  : BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs5/OldValue
 * '<S73>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4
 * '<S74>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/NewValue
 * '<S75>'  : BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/OldValue
 * '<S76>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1
 * '<S77>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4
 * '<S78>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/NewValue
 * '<S79>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/OldValue
 * '<S80>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/NewValue
 * '<S81>'  : BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/OldValue
 * '<S82>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/Chart
 * '<S83>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs
 * '<S84>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1
 * '<S85>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/NewValue
 * '<S86>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/OldValue
 * '<S87>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/NewValue
 * '<S88>'  : BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/OldValue
 * '<S89>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1
 * '<S90>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2
 * '<S91>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3
 * '<S92>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4
 * '<S93>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5
 * '<S94>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/NewValue
 * '<S95>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/OldValue
 * '<S96>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/NewValue
 * '<S97>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/OldValue
 * '<S98>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/NewValue
 * '<S99>'  : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/OldValue
 * '<S100>' : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/NewValue
 * '<S101>' : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/OldValue
 * '<S102>' : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/NewValue
 * '<S103>' : BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/OldValue
 * '<S104>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs
 * '<S105>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1
 * '<S106>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2
 * '<S107>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3
 * '<S108>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/NewValue
 * '<S109>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/OldValue
 * '<S110>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/NewValue
 * '<S111>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/OldValue
 * '<S112>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/NewValue
 * '<S113>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/OldValue
 * '<S114>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/NewValue
 * '<S115>' : BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/OldValue
 * '<S116>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery
 * '<S117>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/LowVoltageSystem
 * '<S118>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive
 * '<S119>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management
 * '<S120>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Time Since Enabled (With Input)1
 * '<S121>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management/SOCAlert
 * '<S122>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Battery/Over_Under_SOC_Management/SOCShutdown
 * '<S123>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Compare To Constant
 * '<S124>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Hysterisis
 * '<S125>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Integrator
 * '<S126>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Hysterisis/Hysteresis
 * '<S127>' : BuckyWagon_01/Foreground/Addl_Fault_Detection/Traction Drive/Integrator/Saturation
 * '<S128>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)
 * '<S129>' : BuckyWagon_01/Foreground/Control Strategy/Calculations
 * '<S130>' : BuckyWagon_01/Foreground/Control Strategy/Drive
 * '<S131>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl
 * '<S132>' : BuckyWagon_01/Foreground/Control Strategy/First Order Low Pass (Tunable)
 * '<S133>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller
 * '<S134>' : BuckyWagon_01/Foreground/Control Strategy/Reverse
 * '<S135>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs
 * '<S136>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_table_1d
 * '<S137>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_table_1d1
 * '<S138>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/Charging State Machine
 * '<S139>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/First Order Low Pass
 * '<S140>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/motohawk_override_abs
 * '<S141>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/motohawk_override_abs/NewValue
 * '<S142>' : BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/motohawk_override_abs/OldValue
 * '<S143>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/Odometer
 * '<S144>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1
 * '<S145>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle
 * '<S146>' : BuckyWagon_01/Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle1
 * '<S147>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm
 * '<S148>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving
 * '<S149>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/Chart
 * '<S150>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1
 * '<S151>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/First Order Low Pass (Tunable)
 * '<S152>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Rising Edge
 * '<S153>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Saturation1
 * '<S154>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Simple PI
 * '<S155>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S156>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Simple PI/Integrator
 * '<S157>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Simple PI/Model Info
 * '<S158>' : BuckyWagon_01/Foreground/Control Strategy/Drive/HillHold Algorithm/HillHold PI Controller1/Simple PI/Integrator/Saturation
 * '<S159>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)
 * '<S160>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)1
 * '<S161>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen
 * '<S162>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/motohawk_table_1d
 * '<S163>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S164>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S165>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/First Order Low Pass (Tunable)reg
 * '<S166>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs
 * '<S167>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_table_2d
 * '<S168>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/First Order Low Pass (Tunable)reg/First Order Low Pass
 * '<S169>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/NewValue
 * '<S170>' : BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/OldValue
 * '<S171>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/Chart
 * '<S172>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs
 * '<S173>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1
 * '<S174>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/NewValue
 * '<S175>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/OldValue
 * '<S176>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/NewValue
 * '<S177>' : BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/OldValue
 * '<S178>' : BuckyWagon_01/Foreground/Control Strategy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S179>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Battery has passed power-on-self-test and is ready
 * '<S180>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller
 * '<S181>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Main contactors closed and ready
 * '<S182>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2
 * '<S183>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay falling edge
 * '<S184>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay rising edge
 * '<S185>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Time Since Enabled (With Input)1
 * '<S186>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Time Since Enabled (With Input)3
 * '<S187>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay falling edge/MotoHawk S-R Flip-Flop
 * '<S188>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/Contacter Controller/Delay rising edge/MotoHawk S-R Flip-Flop
 * '<S189>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/NewValue
 * '<S190>' : BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/OldValue
 * '<S191>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/Chart
 * '<S192>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs
 * '<S193>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/NewValue
 * '<S194>' : BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/OldValue
 * '<S195>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/NewValue
 * '<S196>' : BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/OldValue
 * '<S197>' : BuckyWagon_01/Foreground/MiniViewDisplay/Chart
 * '<S198>' : BuckyWagon_01/Foreground/MiniViewDisplay/Clear Screen
 * '<S199>' : BuckyWagon_01/Foreground/MiniViewDisplay/Down Button
 * '<S200>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Bitmap
 * '<S201>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw HLine
 * '<S202>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Rect
 * '<S203>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw String
 * '<S204>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Vline
 * '<S205>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem
 * '<S206>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem1
 * '<S207>' : BuckyWagon_01/Foreground/MiniViewDisplay/Enabled Subsystem2
 * '<S208>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem
 * '<S209>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem1
 * '<S210>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem2
 * '<S211>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem3
 * '<S212>' : BuckyWagon_01/Foreground/MiniViewDisplay/Function-Call Subsystem4
 * '<S213>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName
 * '<S214>' : BuckyWagon_01/Foreground/MiniViewDisplay/Menu Button
 * '<S215>' : BuckyWagon_01/Foreground/MiniViewDisplay/Scale Data
 * '<S216>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient
 * '<S217>' : BuckyWagon_01/Foreground/MiniViewDisplay/Set GUI Mode
 * '<S218>' : BuckyWagon_01/Foreground/MiniViewDisplay/Up Button
 * '<S219>' : BuckyWagon_01/Foreground/MiniViewDisplay/Clear Screen/Clear Screen
 * '<S220>' : BuckyWagon_01/Foreground/MiniViewDisplay/Down Button/Subsystem
 * '<S221>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Bitmap/Subsystem
 * '<S222>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw HLine/Subsystem
 * '<S223>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Rect/Subsystem
 * '<S224>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw String/Subsystem
 * '<S225>' : BuckyWagon_01/Foreground/MiniViewDisplay/Draw Vline/Subsystem
 * '<S226>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/Chart
 * '<S227>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/Fault Iterator
 * '<S228>' : BuckyWagon_01/Foreground/MiniViewDisplay/GetFaultName/getStringLength
 * '<S229>' : BuckyWagon_01/Foreground/MiniViewDisplay/Menu Button/Subsystem
 * '<S230>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem
 * '<S231>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem
 * '<S232>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1
 * '<S233>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 0)
 * '<S234>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 1)
 * '<S235>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 2)
 * '<S236>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem/Compare To Zero
 * '<S237>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem/Enabled Subsystem
 * '<S238>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1/Compare To Zero
 * '<S239>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Function-Call Subsystem1/Enabled Subsystem
 * '<S240>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 0)/Subsystem
 * '<S241>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 1)/Subsystem
 * '<S242>' : BuckyWagon_01/Foreground/MiniViewDisplay/Send String_efficient/Subsystem/Send Substring (page 2)/Subsystem
 * '<S243>' : BuckyWagon_01/Foreground/MiniViewDisplay/Set GUI Mode/Subsystem
 * '<S244>' : BuckyWagon_01/Foreground/MiniViewDisplay/Up Button/Subsystem
 * '<S245>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs
 * '<S246>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1
 * '<S247>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger
 * '<S248>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs
 * '<S249>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs
 * '<S250>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger
 * '<S251>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs
 * '<S252>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization
 * '<S253>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1
 * '<S254>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2
 * '<S255>' : BuckyWagon_01/Foreground/Sensors/Time Since Enabled (With Input)1
 * '<S256>' : BuckyWagon_01/Foreground/Sensors/Time Since Key On
 * '<S257>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed
 * '<S258>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1
 * '<S259>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant4
 * '<S260>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant5
 * '<S261>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/Compare To Constant6
 * '<S262>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs
 * '<S263>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1
 * '<S264>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2
 * '<S265>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4
 * '<S266>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5
 * '<S267>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/NewValue
 * '<S268>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/OldValue
 * '<S269>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/NewValue
 * '<S270>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/OldValue
 * '<S271>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/NewValue
 * '<S272>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/OldValue
 * '<S273>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/NewValue
 * '<S274>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/OldValue
 * '<S275>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/NewValue
 * '<S276>' : BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/OldValue
 * '<S277>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units
 * '<S278>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/NewValue
 * '<S279>' : BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/OldValue
 * '<S280>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/Compare To Constant
 * '<S281>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/Compare To Constant1
 * '<S282>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/Compare To Constant2
 * '<S283>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/Compare To Constant3
 * '<S284>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/Compare To Constant4
 * '<S285>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/PluggedInDetect
 * '<S286>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/motohawk_override_abs
 * '<S287>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/PluggedInDetect/Chart
 * '<S288>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/motohawk_override_abs/NewValue
 * '<S289>' : BuckyWagon_01/Foreground/Sensors/Brusa Charger/motohawk_override_abs/OldValue
 * '<S290>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/Compare To Constant3
 * '<S291>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1
 * '<S292>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10
 * '<S293>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2
 * '<S294>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3
 * '<S295>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7
 * '<S296>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8
 * '<S297>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9
 * '<S298>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/NewValue
 * '<S299>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/OldValue
 * '<S300>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/NewValue
 * '<S301>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/OldValue
 * '<S302>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/NewValue
 * '<S303>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/OldValue
 * '<S304>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/NewValue
 * '<S305>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/OldValue
 * '<S306>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/NewValue
 * '<S307>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/OldValue
 * '<S308>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/NewValue
 * '<S309>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/OldValue
 * '<S310>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/NewValue
 * '<S311>' : BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/OldValue
 * '<S312>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1
 * '<S313>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10
 * '<S314>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2
 * '<S315>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3
 * '<S316>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8
 * '<S317>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9
 * '<S318>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/NewValue
 * '<S319>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/OldValue
 * '<S320>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/NewValue
 * '<S321>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/OldValue
 * '<S322>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/NewValue
 * '<S323>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/OldValue
 * '<S324>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/NewValue
 * '<S325>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/OldValue
 * '<S326>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/NewValue
 * '<S327>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/OldValue
 * '<S328>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/NewValue
 * '<S329>' : BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/OldValue
 * '<S330>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/Compare To Constant
 * '<S331>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/PluggedInDetect
 * '<S332>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1
 * '<S333>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2
 * '<S334>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3
 * '<S335>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4
 * '<S336>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5
 * '<S337>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6
 * '<S338>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7
 * '<S339>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8
 * '<S340>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9
 * '<S341>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart
 * '<S342>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/NewValue
 * '<S343>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/OldValue
 * '<S344>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/NewValue
 * '<S345>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/OldValue
 * '<S346>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/NewValue
 * '<S347>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/OldValue
 * '<S348>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/NewValue
 * '<S349>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/OldValue
 * '<S350>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/NewValue
 * '<S351>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/OldValue
 * '<S352>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/NewValue
 * '<S353>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/OldValue
 * '<S354>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/NewValue
 * '<S355>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/OldValue
 * '<S356>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/NewValue
 * '<S357>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/OldValue
 * '<S358>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/NewValue
 * '<S359>' : BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/OldValue
 * '<S360>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/Compare To Constant7
 * '<S361>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/Compare To Constant8
 * '<S362>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1
 * '<S363>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2
 * '<S364>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/NewValue
 * '<S365>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/OldValue
 * '<S366>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/NewValue
 * '<S367>' : BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/OldValue
 * '<S368>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/First Order Low Pass
 * '<S369>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem
 * '<S370>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem1
 * '<S371>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/If Action Subsystem2
 * '<S372>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override
 * '<S373>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S374>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/NewValue
 * '<S375>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/OldValue
 * '<S376>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/First Order Low Pass
 * '<S377>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem
 * '<S378>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem1
 * '<S379>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/If Action Subsystem2
 * '<S380>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override
 * '<S381>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S382>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/NewValue
 * '<S383>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/OldValue
 * '<S384>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/First Order Low Pass
 * '<S385>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem
 * '<S386>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem1
 * '<S387>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/If Action Subsystem2
 * '<S388>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override
 * '<S389>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/First Order Low Pass/First Order Low Pass
 * '<S390>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/NewValue
 * '<S391>' : BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/OldValue
 * '<S392>' : BuckyWagon_01/Foreground/Sensors/Time Since Key On/Time Since Enabled (With Input)2
 * '<S393>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs
 * '<S394>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/NewValue
 * '<S395>' : BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/OldValue
 * '<S396>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/NewValue
 * '<S397>' : BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/OldValue
 * '<S398>' : BuckyWagon_01/Main Power Relay/Background
 * '<S399>' : BuckyWagon_01/Main Power Relay/Background/Delay
 * '<S400>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Boolean
 * '<S401>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call
 * '<S402>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1
 * '<S403>' : BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off
 * '<S404>' : BuckyWagon_01/Main Power Relay/Background/Processor Reboot
 * '<S405>' : BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off
 * '<S406>' : BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128
 * '<S407>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs
 * '<S408>' : BuckyWagon_01/Main Power Relay/Background/motohawk_restore_nvmem
 * '<S409>' : BuckyWagon_01/Main Power Relay/Background/motohawk_store_nvmem
 * '<S410>' : BuckyWagon_01/Main Power Relay/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S411>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call/Clear
 * '<S412>' : BuckyWagon_01/Main Power Relay/Background/Display Variable Event Function-Call1/Clear
 * '<S413>' : BuckyWagon_01/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S414>' : BuckyWagon_01/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S415>' : BuckyWagon_01/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S416>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/NewValue
 * '<S417>' : BuckyWagon_01/Main Power Relay/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BuckyWagon_01_h_ */

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
