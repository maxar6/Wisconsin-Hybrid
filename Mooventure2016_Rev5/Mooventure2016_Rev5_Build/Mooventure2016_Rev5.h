/*
 * File: Mooventure2016_Rev5.h
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2161
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Fri Sep 07 17:16:08 2018
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Mooventure2016_Rev5_h_
#define RTW_HEADER_Mooventure2016_Rev5_h_
#ifndef Mooventure2016_Rev5_COMMON_INCLUDES_
# define Mooventure2016_Rev5_COMMON_INCLUDES_
#include <math.h>
#include <stddef.h>
#include <string.h>
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "Application.h"
#endif                                 /* Mooventure2016_Rev5_COMMON_INCLUDES_ */

#include "Mooventure2016_Rev5_types.h"

/* Child system includes */
#include "Mooventure2016_Rev5_Foreground.h"

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
  real_T s194_IPT_CurrentUsed;         /* '<S194>/Read CAN Message3' */
  real_T s194_IPT_CurrentRequest;      /* '<S194>/Read CAN Message3' */
  real_T s194_IPT_MotorSpeed;          /* '<S194>/Read CAN Message3' */
  real_T s194_IPT_WheelTorqueDelivered;/* '<S194>/Read CAN Message3' */
  real_T s194_IPT_CurrentLimit;        /* '<S194>/Read CAN Message3' */
  real_T s194_IPT_Antishudder;         /* '<S194>/Read CAN Message3' */
  real_T s444_Merge;                   /* '<S444>/Merge' */
  real_T s138_Product;                 /* '<S138>/Product' */
  real_T s136_Sum2;                    /* '<S136>/Sum2' */
  real_T s140_Product;                 /* '<S140>/Product' */
  real_T s136_Product2;                /* '<S136>/Product2' */
  real_T s141_Switch1;                 /* '<S141>/Switch1' */
  real_T s143_MinMax1;                 /* '<S143>/MinMax1' */
  real_T s163_Switch1;                 /* '<S163>/Switch1' */
  real_T s161_Sum1;                    /* '<S161>/Sum1' */
  real_T s191_Shift_Position;          /* '<S191>/Read CAN Message1' */
  real_T s191_Brake_Position;          /* '<S191>/Read CAN Message3' */
  real_T s191_Brake_Position_l;        /* '<S191>/motohawk_interpolation_1d' */
  real_T s232_DataTypeConversion;      /* '<S232>/Data Type Conversion' */
  real_T s187_JCS_PackIdentifier;      /* '<S187>/Read CAN Message' */
  real_T s187_PackState;               /* '<S187>/Read CAN Message' */
  real_T s187_PrechargeState;          /* '<S187>/Read CAN Message' */
  real_T s187_HVIL_Status;             /* '<S187>/Read CAN Message' */
  real_T s187_IsolationStatus;         /* '<S187>/Read CAN Message' */
  real_T s187_WakeSignal;              /* '<S187>/Read CAN Message' */
  real_T s187_SleepInhibited;          /* '<S187>/Read CAN Message' */
  real_T s187_MILState;                /* '<S187>/Read CAN Message' */
  real_T s187_StateOfCharge;           /* '<S187>/Read CAN Message' */
  real_T s187_PS_RollingCounter;       /* '<S187>/Read CAN Message' */
  real_T s116_Torque_Direction;        /* '<S116>/Merge' */
  real_T s18_motor_Torque;             /* '<S18>/Merge1' */
  real_T s116_IPT_Torque_Request;      /* '<S116>/Product' */
  real_T s116_Saturation;              /* '<S116>/Saturation' */
  real_T s185_TCS_ENG_EVNT_IN_PROGRESS;/* '<S185>/Read CAN Message2' */
  real_T s176_Product;                 /* '<S176>/Product' */
  real_T s185_Front_left_whl_speed;    /* '<S185>/Read CAN Message1' */
  real_T s185_Front_right_whl_speed;   /* '<S185>/Read CAN Message1' */
  real_T s185_Rear_left_whl_speed;     /* '<S185>/Read CAN Message1' */
  real_T s185_Rear_right_whl_speed;    /* '<S185>/Read CAN Message1' */
  real_T s178_Abs2;                    /* '<S178>/Abs2' */
  real_T s177_Product;                 /* '<S177>/Product' */
  real_T s119_MultiportSwitch;         /* '<S119>/Multiport Switch' */
  real_T s526_Pct_whl_trq_desired;     /* '<S526>/Product' */
  real_T s445_Merge;                   /* '<S445>/Merge' */
  real_T s526_Commanded_mot_torq;      /* '<S526>/Product1' */
  real_T s187_BatteryVoltage;          /* '<S187>/Read CAN Message3' */
  real_T s187_BatteryCurrent;          /* '<S187>/Read CAN Message3' */
  real_T s187_BusVoltage;              /* '<S187>/Read CAN Message3' */
  real_T s187_PVC_RollingCounter;      /* '<S187>/Read CAN Message3' */
  real_T s188_HEV_CC_Defrost_Mode;     /* '<S188>/Read CAN Message3' */
  real_T s188_AC_Engaged_CMD;          /* '<S188>/Read CAN Message3' */
  real_T s276_Merge;                   /* '<S276>/Merge' */
  real_T s277_Merge;                   /* '<S277>/Merge' */
  real_T s239_Sum1;                    /* '<S239>/Sum1' */
  real_T s187_MaxCellVoltage;          /* '<S187>/Read CAN Message4' */
  real_T s187_MinCellVoltage;          /* '<S187>/Read CAN Message4' */
  real_T s187_MaxCellTemperature;      /* '<S187>/Read CAN Message4' */
  real_T s187_MinCellTemperature;      /* '<S187>/Read CAN Message4' */
  real_T s187_CoolantTemperature;      /* '<S187>/Read CAN Message4' */
  real_T s187_DPI_RollingCounter;      /* '<S187>/Read CAN Message4' */
  real_T s229_temp_reading;            /* '<S229>/motohawk_interpolation_1d' */
  real_T s238_Sum1;                    /* '<S238>/Sum1' */
  real_T s15_DataTypeConversion;       /* '<S15>/Data Type Conversion' */
  real_T s15_DataTypeConversion2;      /* '<S15>/Data Type Conversion2' */
  real_T s15_DataTypeConversion3;      /* '<S15>/Data Type Conversion3' */
  real_T s191_DRIVER_1;                /* '<S191>/Read CAN Message6' */
  real_T s191_DRIVER_10;               /* '<S191>/Read CAN Message6' */
  real_T s191_PASSENGER_1;             /* '<S191>/Read CAN Message6' */
  real_T s191_PASSENGER_10;            /* '<S191>/Read CAN Message6' */
  real_T s192_InputVoltage;            /* '<S192>/Read CAN Message2' */
  real_T s192_OutputVoltage;           /* '<S192>/Read CAN Message2' */
  real_T s192_InputCurrentLimitMax;    /* '<S192>/Read CAN Message2' */
  real_T s192_InputCurrent;            /* '<S192>/Read CAN Message2' */
  real_T s192_OutputCurrent;           /* '<S192>/Read CAN Message2' */
  real_T s192_Eaton_HV_Charger_Temperature;/* '<S192>/Read CAN Message2' */
  real_T s192_ChargerState;            /* '<S192>/Read CAN Message2' */
  real_T s192_MessageCounter;          /* '<S192>/Read CAN Message2' */
  real_T s192_MessageChecksum;         /* '<S192>/Read CAN Message2' */
  real_T s193_ReadCANMessage_o1;       /* '<S193>/Read CAN Message' */
  real_T s193_ReadCANMessage_o2;       /* '<S193>/Read CAN Message' */
  real_T s193_ReadCANMessage_o3;       /* '<S193>/Read CAN Message' */
  real_T s193_ReadCANMessage_o4;       /* '<S193>/Read CAN Message' */
  real_T s193_ReadCANMessage_o5;       /* '<S193>/Read CAN Message' */
  real_T s193_ReadCANMessage_o6;       /* '<S193>/Read CAN Message' */
  real_T s193_ReadCANMessage_o7;       /* '<S193>/Read CAN Message' */
  real_T s193_ReadCANMessage_o8;       /* '<S193>/Read CAN Message' */
  real_T s194_IPT_InverterTemperature; /* '<S194>/Read CAN Message1' */
  real_T s194_IPT_MotorTemperature;    /* '<S194>/Read CAN Message1' */
  real_T s194_IPT_MaxTorqueAvailGen;   /* '<S194>/Read CAN Message1' */
  real_T s194_IPT_MaxTorqueAvailMotor; /* '<S194>/Read CAN Message1' */
  real_T s194_IPT_HVDCVoltage;         /* '<S194>/Read CAN Message1' */
  real_T s194_IPT_ErrorCategory;       /* '<S194>/Read CAN Message1' */
  real_T s194_IPT_IPTReady;            /* '<S194>/Read CAN Message1' */
  real_T s194_IPT_IPTAwake;            /* '<S194>/Read CAN Message1' */
  real_T s194_IPT_MaxWasteAvailable;   /* '<S194>/Read CAN Message1' */
  real_T s330_Merge;                   /* '<S330>/Merge' */
  real_T s364_Merge;                   /* '<S364>/Merge' */
  real_T s396_Merge;                   /* '<S396>/Merge' */
  real_T s401_Merge;                   /* '<S401>/Merge' */
  real_T s449_Merge;                   /* '<S449>/Merge' */
  real_T s32_Merge;                    /* '<S32>/Merge' */
  real_T s33_Merge;                    /* '<S33>/Merge' */
  real_T s531_Engine_Speed;            /* '<S531>/Abs1' */
  real_T s531_Current;                 /* '<S531>/Sum' */
  real_T s531_Vehi_Speed;              /* '<S531>/Abs2' */
  real_T s531_ODO_Count;               /* '<S531>/motohawk_data_read5' */
  real_T s187_TripAmpHoursIn;          /* '<S187>/Read CAN Message5' */
  real_T s187_TripAmpHoursOut;         /* '<S187>/Read CAN Message5' */
  real_T s187_StateOfChargeMax;        /* '<S187>/Read CAN Message5' */
  real_T s187_StateOfChargeMin;        /* '<S187>/Read CAN Message5' */
  real_T s187_TAH_RollingCounter;      /* '<S187>/Read CAN Message5' */
  real_T s62_Merge;                    /* '<S62>/Merge' */
  real_T s260_Merge;                   /* '<S260>/Merge' */
  real_T s533_Vehicle_Speed;           /* '<S533>/Product' */
  real_T s65_Merge;                    /* '<S65>/Merge' */
  real_T s64_Merge;                    /* '<S64>/Merge' */
  real_T s534_VSC_WheelTorqueRequest;  /* '<S534>/Product' */
  real_T s18_motor_Enable;             /* '<S18>/Merge2' */
  real_T s187_MaximumDischargePower_Continuous;/* '<S187>/Read CAN Message2' */
  real_T s187_MaximumRegenPower_Continuous;/* '<S187>/Read CAN Message2' */
  real_T s187_PPLCont_RollingCounter;  /* '<S187>/Read CAN Message2' */
  real_T s187_MaximumDischargePower_10s;/* '<S187>/Read CAN Message1' */
  real_T s187_MaximumRegenPower_10s;   /* '<S187>/Read CAN Message1' */
  real_T s187_IsolationLevel;          /* '<S187>/Read CAN Message1' */
  real_T s187_ActiveDTC;               /* '<S187>/Read CAN Message1' */
  real_T s187_PPL10s_RollingCounter;   /* '<S187>/Read CAN Message1' */
  real_T s258_Merge;                   /* '<S258>/Merge' */
  real_T s830_Switch;                  /* '<S830>/Switch' */
  real_T s829_Switch;                  /* '<S829>/Switch' */
  real_T s843_Merge;                   /* '<S843>/Merge' */
  real_T s844_Merge;                   /* '<S844>/Merge' */
  real_T s422_Merge;                   /* '<S422>/Merge' */
  real_T s195_STR_WHL_ANGLE_CNTR_FND;  /* '<S195>/Read CAN Message' */
  real_T s195_STR_WHL_ANGLE;           /* '<S195>/Read CAN Message' */
  real_T s195_RELATIVE_STR_WHL_ANGLE;  /* '<S195>/Read CAN Message' */
  real_T s194_IPT_DCErrorCategory;     /* '<S194>/Read CAN Message2' */
  real_T s194_IPT_DCLVOn;              /* '<S194>/Read CAN Message2' */
  real_T s194_IPT_DCLVGeneralError;    /* '<S194>/Read CAN Message2' */
  real_T s194_IPT_DCLVMaxPower;        /* '<S194>/Read CAN Message2' */
  real_T s194_IPT_DCLVBusCurrent;      /* '<S194>/Read CAN Message2' */
  real_T s194_IPT_DCLVBusVoltage;      /* '<S194>/Read CAN Message2' */
  real_T s194_IPT_DCHVBusCurrent;      /* '<S194>/Read CAN Message2' */
  real_T s185_LF_Wheel_Rolling_Count;  /* '<S185>/Read CAN Message' */
  real_T s185_RT_Wheel_Rolling_Count;  /* '<S185>/Read CAN Message' */
  real_T s185_Wheel_Rolling_Timestamp; /* '<S185>/Read CAN Message' */
  real_T s187_LifeTimeAmpHoursOut;     /* '<S187>/Read CAN Message6' */
  real_T s187_LTAHI_RollingCounter;    /* '<S187>/Read CAN Message6' */
  real_T s191_Button_Pressed;          /* '<S191>/Read CAN Message4' */
  real_T s194_Heading;                 /* '<S194>/Read CAN Message4' */
  real_T s194_Speed;                   /* '<S194>/Read CAN Message4' */
  real_T s194_Altitude;                /* '<S194>/Read CAN Message4' */
  real_T s194_GPSQuality;              /* '<S194>/Read CAN Message4' */
  real_T s194_DateTime;                /* '<S194>/Read CAN Message4' */
  real_T s257_Merge;                   /* '<S257>/Merge' */
  real_T s655_CEL;                     /* '<S531>/Embedded MATLAB Function' */
  real_T s651_engTemp;                 /* '<S531>/Chart' */
  real_T s651_transTemp;               /* '<S531>/Chart' */
  real_T s577_fan1;                    /* '<S529>/Fan Adapter' */
  real_T s577_fan2;                    /* '<S529>/Fan Adapter' */
  real_T s577_fan3;                    /* '<S529>/Fan Adapter' */
  real_T s535_dirOut;                  /* '<S526>/Shift Position Conditioner' */
  real_T s318_posOut;                  /* '<S191>/Transmission Translator' */
  real_T s318_ecoModeOut;              /* '<S191>/Transmission Translator' */
  real_T s317_passengerTemp;           /* '<S191>/Embedded MATLAB Function2' */
  real_T s316_driverTemp;              /* '<S191>/Embedded MATLAB Function1' */
  real_T s287_Out;                     /* '<S190>/Chart' */
  real_T s114_state;                   /* '<S18>/Embedded MATLAB Function' */
  real_T s58_Genset_Enable;            /* '<S16>/Chart' */
  real_T s58_Genset_Load;              /* '<S16>/Chart' */
  real_T s58_Genset_RPM;               /* '<S16>/Chart' */
  real_T s58_Genset_Throttle;          /* '<S16>/Chart' */
  real_T s28_RadPump;                  /* '<S15>/Chart' */
  real_T s28_CorePump;                 /* '<S15>/Chart' */
  real_T s28_fan;                      /* '<S15>/Chart' */
  real_T s28_RadBlendOut;              /* '<S15>/Chart' */
  real_T s28_CoreBlendOut;             /* '<S15>/Chart' */
  real_T s28_Heat1;                    /* '<S15>/Chart' */
  real_T s28_Heat2;                    /* '<S15>/Chart' */
  real_T s28_Heat3;                    /* '<S15>/Chart' */
  real_T s28_Heat4;                    /* '<S15>/Chart' */
  real_T s28_u1;                       /* '<S15>/Chart' */
  real_T s28_u2;                       /* '<S15>/Chart' */
  real_T s28_u3;                       /* '<S15>/Chart' */
  real_T s28_u4;                       /* '<S15>/Chart' */
  real_T s28_u5;                       /* '<S15>/Chart' */
  real_T s28_u6;                       /* '<S15>/Chart' */
  real_T s28_u7;                       /* '<S15>/Chart' */
  real_T s28_u1_a;                     /* '<S15>/Chart' */
  real_T s28_u2_e;                     /* '<S15>/Chart' */
  real_T s28_u3_f;                     /* '<S15>/Chart' */
  real_T s28_u4_d;                     /* '<S15>/Chart' */
  real_T s28_u5_h;                     /* '<S15>/Chart' */
  real_T s28_u6_k;                     /* '<S15>/Chart' */
  real_T s28_u7_a;                     /* '<S15>/Chart' */
  real_T s39_Switch;                   /* '<S39>/Switch' */
  real_T s38_Switch;                   /* '<S38>/Switch' */
  int32_T s229_motohawk_ain1_o1;       /* '<S229>/motohawk_ain1' */
  uint32_T s194_AgeCount;              /* '<S194>/Read CAN Message3' */
  uint32_T s191_AgeCount;              /* '<S191>/Read CAN Message1' */
  uint32_T s191_AgeCount_j;            /* '<S191>/Read CAN Message3' */
  uint32_T s187_AgeCount;              /* '<S187>/Read CAN Message' */
  uint32_T s185_AgeCount;              /* '<S185>/Read CAN Message2' */
  uint32_T s185_AgeCount_n;            /* '<S185>/Read CAN Message1' */
  uint32_T s192_AgeCount;              /* '<S192>/Read CAN Message2' */
  uint32_T s194_AgeCount_m;            /* '<S194>/Read CAN Message1' */
  uint32_T s195_AgeCount;              /* '<S195>/Read CAN Message' */
  uint32_T s194_AgeCount_j;            /* '<S194>/Read CAN Message2' */
  uint32_T s185_AgeCount_b;            /* '<S185>/Read CAN Message' */
  uint32_T s194_AgeCount_o;            /* '<S194>/Read CAN Message4' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  uint16_T s230_motohawk_ain4_o1;      /* '<S230>/motohawk_ain4' */
  uint16_T s246_Merge;                 /* '<S246>/Merge' */
  uint16_T s232_motohawk_ain4_o1;      /* '<S232>/motohawk_ain4' */
  uint16_T s178_Product;               /* '<S178>/Product' */
  uint16_T s229_motohawk_ain2_o1;      /* '<S229>/motohawk_ain2' */
  uint16_T s229_motohawk_ain4_o1;      /* '<S229>/motohawk_ain4' */
  uint16_T s231_motohawk_ain4_o1;      /* '<S231>/motohawk_ain4' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  int8_T s527_ConnectCommand;          /* '<S527>/Data Type Conversion' */
  uint8_T s82_CANFaultStatus_o2;       /* '<S82>/CAN Fault Status' */
  uint8_T s82_CANFaultStatus_o3;       /* '<S82>/CAN Fault Status' */
  uint8_T s82_CANFaultStatus1_o2;      /* '<S82>/CAN Fault Status1' */
  uint8_T s82_CANFaultStatus1_o3;      /* '<S82>/CAN Fault Status1' */
  uint8_T s82_CANFaultStatus2_o2;      /* '<S82>/CAN Fault Status2' */
  uint8_T s82_CANFaultStatus2_o3;      /* '<S82>/CAN Fault Status2' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s282_LogicalOperator;      /* '<S282>/Logical Operator' */
  boolean_T s286_LogicalOperator;      /* '<S286>/Logical Operator' */
  boolean_T s187_CellBalanceingActive; /* '<S187>/Read CAN Message' */
  boolean_T s14_LogicalOperator;       /* '<S14>/Logical Operator' */
  boolean_T s21_LogicalOperator2;      /* '<S21>/Logical Operator2' */
  boolean_T s527_IsolationMeasurementEnable;/* '<S527>/Logical Operator' */
  boolean_T s192_IgnitionStatus;       /* '<S192>/Read CAN Message2' */
  boolean_T s192_FaultSeverityIndicator;/* '<S192>/Read CAN Message2' */
  boolean_T s194_IPT_MotorReady;       /* '<S194>/Read CAN Message1' */
  boolean_T s529_DataTypeConversion5;  /* '<S529>/Data Type Conversion5' */
  boolean_T s529_LogicalOperator8;     /* '<S529>/Logical Operator8' */
  boolean_T s15_Cooling_Pump_Radiator; /* '<S15>/Data Type Conversion8' */
  boolean_T s15_Cooling_Pump_Heater_Core;/* '<S15>/Data Type Conversion1' */
  boolean_T s529_DataTypeConversion4;  /* '<S529>/Data Type Conversion4' */
  boolean_T s529_DataTypeConversion1;  /* '<S529>/Data Type Conversion1' */
  boolean_T s529_DataTypeConversion2;  /* '<S529>/Data Type Conversion2' */
  boolean_T s529_LogicalOperator5;     /* '<S529>/Logical Operator5' */
  boolean_T s529_LogicalOperator6;     /* '<S529>/Logical Operator6' */
  boolean_T s529_LogicalOperator7;     /* '<S529>/Logical Operator7' */
  boolean_T s19_LogicalOperator5;      /* '<S19>/Logical Operator5' */
  boolean_T s19_motohawk_fault_action; /* '<S19>/motohawk_fault_action' */
  boolean_T s531_Regen_Brakes_Disabled;/* '<S531>/motohawk_fault_action2' */
  boolean_T s531_HV_Elec_Sys_Warm;     /* '<S531>/motohawk_fault_action1' */
  boolean_T s531_Repair_Wrench;        /* '<S531>/Logical Operator' */
  boolean_T s531_Battery_Light;        /* '<S531>/motohawk_fault_action4' */
  boolean_T s532_ChargeSystemFault;    /* '<S532>/motohawk_fault_action' */
  boolean_T s532_ChargeComplete;       /* '<S532>/Logical Operator2' */
  boolean_T s532_ChargeEnable;         /* '<S532>/Logical Operator1' */
  boolean_T s533_Gen_Enable;           /* '<S533>/Logical Operator' */
  boolean_T s534_VSC_IPTEnable;        /* '<S534>/motohawk_data_read3' */
  boolean_T s534_VSC_MotorEnable;      /* '<S534>/Logical Operator2' */
  boolean_T s534_VSC_DCDCEnable;       /* '<S534>/Logical Operator1' */
  boolean_T s82_CANFaultStatus_o1;     /* '<S82>/CAN Fault Status' */
  boolean_T s82_CANFaultStatus1_o1;    /* '<S82>/CAN Fault Status1' */
  boolean_T s82_CANFaultStatus2_o1;    /* '<S82>/CAN Fault Status2' */
  boolean_T s283_LogicalOperator;      /* '<S283>/Logical Operator' */
  boolean_T s284_LogicalOperator;      /* '<S284>/Logical Operator' */
  boolean_T s285_LogicalOperator;      /* '<S285>/Logical Operator' */
  boolean_T s658_VehicleReadyOutput;   /* '<S531>/PowerSteering' */
  boolean_T s631_Coil3State;           /* '<S530>/Coil2State1' */
  boolean_T s630_Coil2State;           /* '<S530>/Coil2State' */
  boolean_T s629_Coil1State;           /* '<S530>/Coil1State' */
  boolean_T s184_Vehicle_Enable;       /* '<S19>/Chart' */
  boolean_T s184_Vehicle_Ready;        /* '<S19>/Chart' */
  boolean_T s184_Torque_Enable;        /* '<S19>/Chart' */
  boolean_T s184_Keyed_Relay;          /* '<S19>/Chart' */
  boolean_T s128_System;               /* '<S112>/SystemState' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 s529_sf_RadiatorMotionControl;/* '<S529>/Radiator Motion Control' */
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5
    s529_sf_HeaterCoreMotionControl;   /* '<S529>/Heater Core Motion Control' */
  rtB_ABSChart_Mooventure2016_Rev5 s177_sf_CALCChart;/* '<S177>/CALC Chart' */
  rtB_ABSChart_Mooventure2016_Rev5 s176_sf_ABSChart;/* '<S176>/ABS Chart' */
  rtB_Chart_Mooventure2016_Rev5 s117_sf_Chart;/* '<S117>/Chart' */
  rtB_Chart_Mooventure2016_Rev5 s113_sf_Chart;/* '<S113>/Chart' */
  rtB_Chart_Mooventure2016_Rev5 s111_sf_Chart;/* '<S111>/Chart' */
} BlockIO_Mooventure2016_Rev5;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s138_UnitDelay_DSTATE;        /* '<S138>/Unit Delay' */
  real_T s139_UnitDelay_DSTATE;        /* '<S139>/Unit Delay' */
  real_T s140_UnitDelay_DSTATE;        /* '<S140>/Unit Delay' */
  real_T s141_UnitDelay_DSTATE;        /* '<S141>/Unit Delay' */
  real_T s163_UnitDelay_DSTATE;        /* '<S163>/Unit Delay' */
  real_T s161_UnitDelay_DSTATE;        /* '<S161>/Unit Delay' */
  real_T s263_UnitDelay_DSTATE;        /* '<S263>/Unit Delay' */
  real_T s169_UnitDelay_DSTATE;        /* '<S169>/Unit Delay' */
  real_T s265_UnitDelay_DSTATE;        /* '<S265>/Unit Delay' */
  real_T s239_UnitDelay_DSTATE;        /* '<S239>/Unit Delay' */
  real_T s238_UnitDelay_DSTATE;        /* '<S238>/Unit Delay' */
  real_T s85_UnitDelay1_DSTATE;        /* '<S85>/Unit Delay1' */
  real_T s85_UnitDelay_DSTATE;         /* '<S85>/Unit Delay' */
  real_T s88_UnitDelay_DSTATE;         /* '<S88>/Unit Delay' */
  real_T s98_UnitDelay_DSTATE;         /* '<S98>/Unit Delay' */
  real_T s101_UnitDelay_DSTATE;        /* '<S101>/Unit Delay' */
  real_T s105_UnitDelay_DSTATE;        /* '<S105>/Unit Delay' */
  real_T s97_UnitDelay_DSTATE;         /* '<S97>/Unit Delay' */
  real_T s651_count;                   /* '<S531>/Chart' */
  real_T s184_count;                   /* '<S19>/Chart' */
  real_T s28_count;                    /* '<S15>/Chart' */
  uint32_T s299_motohawk_delta_time_DWORK1;/* '<S299>/motohawk_delta_time' */
  uint32_T s303_motohawk_delta_time_DWORK1;/* '<S303>/motohawk_delta_time' */
  uint32_T s158_motohawk_delta_time_DWORK1;/* '<S158>/motohawk_delta_time' */
  uint32_T s154_motohawk_delta_time_DWORK1;/* '<S154>/motohawk_delta_time' */
  uint32_T s181_motohawk_delta_time_DWORK1;/* '<S181>/motohawk_delta_time' */
  uint32_T s24_motohawk_delta_time_DWORK1;/* '<S24>/motohawk_delta_time' */
  uint32_T s23_motohawk_delta_time_DWORK1;/* '<S23>/motohawk_delta_time' */
  uint32_T s234_motohawk_delta_time_DWORK1;/* '<S234>/motohawk_delta_time' */
  uint32_T s233_motohawk_delta_time_DWORK1;/* '<S233>/motohawk_delta_time' */
  uint32_T s598_motohawk_delta_time_DWORK1;/* '<S598>/motohawk_delta_time' */
  uint32_T s595_motohawk_delta_time_DWORK1;/* '<S595>/motohawk_delta_time' */
  uint32_T s596_motohawk_delta_time_DWORK1;/* '<S596>/motohawk_delta_time' */
  uint32_T s597_motohawk_delta_time_DWORK1;/* '<S597>/motohawk_delta_time' */
  uint32_T s656_motohawk_delta_time_DWORK1;/* '<S656>/motohawk_delta_time' */
  uint32_T s67_motohawk_delta_time_DWORK1;/* '<S67>/motohawk_delta_time' */
  uint32_T s68_motohawk_delta_time_DWORK1;/* '<S68>/motohawk_delta_time' */
  uint32_T s69_motohawk_delta_time_DWORK1;/* '<S69>/motohawk_delta_time' */
  uint32_T s70_motohawk_delta_time_DWORK1;/* '<S70>/motohawk_delta_time' */
  uint32_T s71_motohawk_delta_time_DWORK1;/* '<S71>/motohawk_delta_time' */
  uint32_T s66_motohawk_delta_time_DWORK1;/* '<S66>/motohawk_delta_time' */
  uint32_T s831_motohawk_delta_time_DWORK1;/* '<S831>/motohawk_delta_time' */
  uint32_T s850_motohawk_delta_time_DWORK1;/* '<S850>/motohawk_delta_time' */
  uint32_T s849_motohawk_delta_time_DWORK1;/* '<S849>/motohawk_delta_time' */
  uint32_T s89_motohawk_delta_time_DWORK1;/* '<S89>/motohawk_delta_time' */
  uint32_T s90_motohawk_delta_time_DWORK1;/* '<S90>/motohawk_delta_time' */
  uint32_T s300_motohawk_delta_time_DWORK1;/* '<S300>/motohawk_delta_time' */
  uint32_T s301_motohawk_delta_time_DWORK1;/* '<S301>/motohawk_delta_time' */
  uint32_T s302_motohawk_delta_time_DWORK1;/* '<S302>/motohawk_delta_time' */
  uint32_T s25_motohawk_delta_time_DWORK1;/* '<S25>/motohawk_delta_time' */
  uint32_T s141_motohawk_delta_time_DWORK1;/* '<S141>/motohawk_delta_time' */
  uint32_T s163_motohawk_delta_time_DWORK1;/* '<S163>/motohawk_delta_time' */
  uint16_T s886_UnitDelay_DSTATE;      /* '<S886>/Unit Delay' */
  uint16_T s886_UnitDelay1_DSTATE;     /* '<S886>/Unit Delay1' */
  uint16_T s101_motohawk_fault_def2_DWORK1;/* '<S101>/motohawk_fault_def2' */
  uint8_T s133_DelayInput1_DSTATE;     /* '<S133>/Delay Input1' */
  boolean_T s107_DelayInput1_DSTATE;   /* '<S107>/Delay Input1' */
  boolean_T s108_DelayInput1_DSTATE;   /* '<S108>/Delay Input1' */
  boolean_T s109_DelayInput1_DSTATE;   /* '<S109>/Delay Input1' */
  boolean_T s110_DelayInput1_DSTATE;   /* '<S110>/Delay Input1' */
  boolean_T s106_DelayInput1_DSTATE;   /* '<S106>/Delay Input1' */
  boolean_T s129_DelayInput1_DSTATE;   /* '<S129>/Delay Input1' */
  boolean_T s130_DelayInput1_DSTATE;   /* '<S130>/Delay Input1' */
  boolean_T s144_DelayInput1_DSTATE;   /* '<S144>/Delay Input1' */
  boolean_T s887_UnitDelay_DSTATE;     /* '<S887>/Unit Delay' */
  boolean_T s897_UnitDelay_DSTATE;     /* '<S897>/Unit Delay' */
  boolean_T s885_UnitDelay5_DSTATE;    /* '<S885>/Unit Delay5' */
  boolean_T s885_UnitDelay2_DSTATE;    /* '<S885>/Unit Delay2' */
  boolean_T s885_UnitDelay_DSTATE;     /* '<S885>/Unit Delay' */
  boolean_T s885_UnitDelay1_DSTATE;    /* '<S885>/Unit Delay1' */
  boolean_T s885_UnitDelay3_DSTATE;    /* '<S885>/Unit Delay3' */
  boolean_T s885_UnitDelay4_DSTATE;    /* '<S885>/Unit Delay4' */
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
  uint8_T s658_is_active_c28_Mooventure2016_Rev5;/* '<S531>/PowerSteering' */
  uint8_T s658_is_c28_Mooventure2016_Rev5;/* '<S531>/PowerSteering' */
  uint8_T s651_is_active_c22_Mooventure2016_Rev5;/* '<S531>/Chart' */
  uint8_T s651_is_c22_Mooventure2016_Rev5;/* '<S531>/Chart' */
  uint8_T s631_is_active_c10_Mooventure2016_Rev5;/* '<S530>/Coil2State1' */
  uint8_T s631_is_c10_Mooventure2016_Rev5;/* '<S530>/Coil2State1' */
  uint8_T s630_is_active_c9_Mooventure2016_Rev5;/* '<S530>/Coil2State' */
  uint8_T s630_is_c9_Mooventure2016_Rev5;/* '<S530>/Coil2State' */
  uint8_T s629_is_active_c8_Mooventure2016_Rev5;/* '<S530>/Coil1State' */
  uint8_T s629_is_c8_Mooventure2016_Rev5;/* '<S530>/Coil1State' */
  uint8_T s287_is_active_c29_Mooventure2016_Rev5;/* '<S190>/Chart' */
  uint8_T s287_is_c29_Mooventure2016_Rev5;/* '<S190>/Chart' */
  uint8_T s184_is_active_c1_Mooventure2016_Rev5;/* '<S19>/Chart' */
  uint8_T s184_is_c1_Mooventure2016_Rev5;/* '<S19>/Chart' */
  uint8_T s128_is_active_c30_Mooventure2016_Rev5;/* '<S112>/SystemState' */
  uint8_T s128_is_c30_Mooventure2016_Rev5;/* '<S112>/SystemState' */
  uint8_T s58_is_active_c33_Mooventure2016_Rev5;/* '<S16>/Chart' */
  uint8_T s58_is_c33_Mooventure2016_Rev5;/* '<S16>/Chart' */
  uint8_T s58_is_Running;              /* '<S16>/Chart' */
  uint8_T s28_is_active_c4_Mooventure2016_Rev5;/* '<S15>/Chart' */
  uint8_T s28_is_c4_Mooventure2016_Rev5;/* '<S15>/Chart' */
  uint8_T s28_is_active_Fan;           /* '<S15>/Chart' */
  uint8_T s28_is_Fan;                  /* '<S15>/Chart' */
  uint8_T s28_is_active_Heater;        /* '<S15>/Chart' */
  uint8_T s28_is_Heater;               /* '<S15>/Chart' */
  uint8_T s28_is_active_RadPump;       /* '<S15>/Chart' */
  uint8_T s28_is_RadPump;              /* '<S15>/Chart' */
  uint8_T s28_is_active_CorePump;      /* '<S15>/Chart' */
  uint8_T s28_is_CorePump;             /* '<S15>/Chart' */
  uint8_T s28_is_active_RadBlend;      /* '<S15>/Chart' */
  uint8_T s28_is_RadBlend;             /* '<S15>/Chart' */
  uint8_T s28_is_active_CoreBlend;     /* '<S15>/Chart' */
  uint8_T s28_is_CoreBlend;            /* '<S15>/Chart' */
  uint8_T s28_is_System_Cold;          /* '<S15>/Chart' */
  uint8_T s28_is_Use_Wants_Heat;       /* '<S15>/Chart' */
  boolean_T s116_Drive_MODE;           /* '<S116>/Drive' */
  boolean_T s116_Reverse_MODE;         /* '<S116>/Reverse' */
  rtDW_ABSChart_Mooventure2016_Rev5 s177_sf_CALCChart;/* '<S177>/CALC Chart' */
  rtDW_ABSChart_Mooventure2016_Rev5 s176_sf_ABSChart;/* '<S176>/ABS Chart' */
  rtDW_Chart_Mooventure2016_Rev5 s117_sf_Chart;/* '<S117>/Chart' */
  rtDW_Chart_Mooventure2016_Rev5 s113_sf_Chart;/* '<S113>/Chart' */
  rtDW_Chart_Mooventure2016_Rev5 s111_sf_Chart;/* '<S111>/Chart' */
} D_Work_Mooventure2016_Rev5;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S88>/Triggered Subsystem' */
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S885>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S885>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S885>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S885>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S889>/Clear' */
  ZCSigState Clear_Trig_ZCE_i;         /* '<S888>/Clear' */
} PrevZCSigStates_Mooventure2016_Rev5;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s527_OdometerValue;     /* '<S527>/To km' */
  const boolean_T s163_DataTypeConversion;/* '<S163>/Data Type Conversion' */
  const boolean_T s656_DataTypeConversion;/* '<S656>/Data Type Conversion' */
} ConstBlockIO_Mooventure2016_Rev5;

/* Real-time Model Data Structure */
struct RT_MODEL_Mooventure2016_Rev5 {
  const char_T *errorStatus;
};

/* Block signals (auto storage) */
extern BlockIO_Mooventure2016_Rev5 Mooventure2016_Rev5_B;

/* Block states (auto storage) */
extern D_Work_Mooventure2016_Rev5 Mooventure2016_Rev5_DWork;
extern const ConstBlockIO_Mooventure2016_Rev5 Mooventure2016_Rev5_ConstB;/* constant block i/o */

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_Mooventure2016_Rev5 Mooventure2016_Rev5_PrevZCSigState;

/* Model entry point functions */
extern void Mooventure2016_Rev5_initialize(boolean_T firstTime);
extern void Mooventure2016_Rev5_step(void);
extern void Mooventure2016_Rev5_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_Mooventure2016_Rev5 *const Mooventure2016_Rev5_M;

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
 * '<Root>' : Mooventure2016_Rev5
 * '<S1>'   : Mooventure2016_Rev5/CCP CAN Protocol
 * '<S2>'   : Mooventure2016_Rev5/Foreground
 * '<S3>'   : Mooventure2016_Rev5/Main Power Relay1
 * '<S4>'   : Mooventure2016_Rev5/CCP CAN Protocol/CCP CAN Protocol External Trig1
 * '<S5>'   : Mooventure2016_Rev5/CCP CAN Protocol/CCP Triggers
 * '<S6>'   : Mooventure2016_Rev5/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver
 * '<S7>'   : Mooventure2016_Rev5/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Daq Processing
 * '<S8>'   : Mooventure2016_Rev5/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP IDLE Processing
 * '<S9>'   : Mooventure2016_Rev5/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command
 * '<S10>'  : Mooventure2016_Rev5/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command/Adjust ID
 * '<S11>'  : Mooventure2016_Rev5/Foreground/Control
 * '<S12>'  : Mooventure2016_Rev5/Foreground/Inputs
 * '<S13>'  : Mooventure2016_Rev5/Foreground/Outputs
 * '<S14>'  : Mooventure2016_Rev5/Foreground/Control/Battery
 * '<S15>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control
 * '<S16>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control
 * '<S17>'  : Mooventure2016_Rev5/Foreground/Control/Faults
 * '<S18>'  : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code
 * '<S19>'  : Mooventure2016_Rev5/Foreground/Control/Vehicle Run//Stop Determination
 * '<S20>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Compare To Constant
 * '<S21>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Safe Shutdown Sequence
 * '<S22>'  : Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4
 * '<S23>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Safe Shutdown Sequence/Time Since Enabled (With Input)1
 * '<S24>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Safe Shutdown Sequence/Time Since Enabled (With Input)2
 * '<S25>'  : Mooventure2016_Rev5/Foreground/Control/Battery/Safe Shutdown Sequence/Time Since Enabled (With Input)3
 * '<S26>'  : Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/NewValue
 * '<S27>'  : Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/OldValue
 * '<S28>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/Chart
 * '<S29>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1
 * '<S30>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11
 * '<S31>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs2
 * '<S32>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs3
 * '<S33>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs4
 * '<S34>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs5
 * '<S35>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs6
 * '<S36>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs7
 * '<S37>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs8
 * '<S38>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/Chart/Master.calc_max
 * '<S39>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/Chart/Master.calc_min
 * '<S40>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/NewValue
 * '<S41>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/OldValue
 * '<S42>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/NewValue
 * '<S43>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/OldValue
 * '<S44>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs2/NewValue
 * '<S45>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs2/OldValue
 * '<S46>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs3/NewValue
 * '<S47>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs3/OldValue
 * '<S48>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs4/NewValue
 * '<S49>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs4/OldValue
 * '<S50>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs5/NewValue
 * '<S51>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs5/OldValue
 * '<S52>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs6/NewValue
 * '<S53>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs6/OldValue
 * '<S54>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs7/NewValue
 * '<S55>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs7/OldValue
 * '<S56>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs8/NewValue
 * '<S57>'  : Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs8/OldValue
 * '<S58>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Chart
 * '<S59>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Engine States
 * '<S60>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/SOC States
 * '<S61>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Vehicle Speed States
 * '<S62>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs1
 * '<S63>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs2
 * '<S64>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs3
 * '<S65>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs4
 * '<S66>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Engine States/Time Since Enabled (With Input)1
 * '<S67>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/SOC States/Time Since Enabled (With Input)1
 * '<S68>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/SOC States/Time Since Enabled (With Input)2
 * '<S69>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/SOC States/Time Since Enabled (With Input)3
 * '<S70>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Vehicle Speed States/Time Since Enabled (With Input)1
 * '<S71>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/Vehicle Speed States/Time Since Enabled (With Input)2
 * '<S72>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs1/NewValue
 * '<S73>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs1/OldValue
 * '<S74>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs2/NewValue
 * '<S75>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs2/OldValue
 * '<S76>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs3/NewValue
 * '<S77>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs3/OldValue
 * '<S78>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs4/NewValue
 * '<S79>'  : Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs4/OldValue
 * '<S80>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories
 * '<S81>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery
 * '<S82>'  : Mooventure2016_Rev5/Foreground/Control/Faults/CAN
 * '<S83>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Freeze Frame
 * '<S84>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train
 * '<S85>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Blend Valves
 * '<S86>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Charger
 * '<S87>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/DC-DC Converter
 * '<S88>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Heater System
 * '<S89>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Blend Valves/Time Since Enabled (With Input)1
 * '<S90>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/Blend Valves/Time Since Enabled (With Input)2
 * '<S91>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Accesories/HV-Heater System/Triggered Subsystem
 * '<S92>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery/2G BMS & Comms
 * '<S93>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery/Precharge
 * '<S94>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Battery/Temperature
 * '<S95>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Freeze Frame/Data Write
 * '<S96>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Freeze Frame/Data Write/Data Iterator
 * '<S97>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/12V Battery
 * '<S98>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Brake Pedal
 * '<S99>'  : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control
 * '<S100>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Electric Motor
 * '<S101>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Gas Pedal
 * '<S102>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Gear Selector
 * '<S103>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Ignition Key
 * '<S104>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Traction Control
 * '<S105>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Vehicle Speed Sensor
 * '<S106>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change
 * '<S107>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change1
 * '<S108>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change2
 * '<S109>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change3
 * '<S110>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Cruise Control/Detect Change4
 * '<S111>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode
 * '<S112>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control
 * '<S113>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode
 * '<S114>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Embedded MATLAB Function
 * '<S115>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1
 * '<S116>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT
 * '<S117>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode
 * '<S118>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Safety
 * '<S119>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control
 * '<S120>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs
 * '<S121>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart
 * '<S122>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/SOC_RampOut
 * '<S123>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Brake Disable
 * '<S124>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing
 * '<S125>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control
 * '<S126>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume
 * '<S127>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/System Start
 * '<S128>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/SystemState
 * '<S129>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Detect Increase
 * '<S130>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Detect Increase1
 * '<S131>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Speed Decrease
 * '<S132>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Speed Increase
 * '<S133>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/Detect Rise Positive
 * '<S134>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)
 * '<S135>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/Detect Rise Positive/Positive
 * '<S136>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms
 * '<S137>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/Saturation (Tunable)
 * '<S138>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive1
 * '<S139>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive2
 * '<S140>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive3
 * '<S141>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator
 * '<S142>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator/Saturation
 * '<S143>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/Saturation (Tunable)/Saturation
 * '<S144>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume/Detect Increase
 * '<S145>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume/Enabled Subsystem1
 * '<S146>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode/Chart
 * '<S147>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function
 * '<S148>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function/Embedded MATLAB Function
 * '<S149>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant
 * '<S150>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant1
 * '<S151>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant2
 * '<S152>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest
 * '<S153>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive
 * '<S154>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/First Order Low Pass (Tunable)
 * '<S155>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Neutral
 * '<S156>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse
 * '<S157>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs
 * '<S158>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/First Order Low Pass (Tunable)
 * '<S159>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator
 * '<S160>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/motohawk_table_1d
 * '<S161>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S162>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/CurrentModifier
 * '<S163>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/Integrator
 * '<S164>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/CurrentModifier/Compare To Zero
 * '<S165>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/Integrator/Saturation
 * '<S166>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4
 * '<S167>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/NewValue
 * '<S168>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/OldValue
 * '<S169>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S170>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4
 * '<S171>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/NewValue
 * '<S172>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/OldValue
 * '<S173>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/NewValue
 * '<S174>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/OldValue
 * '<S175>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode/Chart
 * '<S176>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/ABS Ramp Control
 * '<S177>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/CALC Ramp Control
 * '<S178>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/Traction Control Event Needed
 * '<S179>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/ABS Ramp Control/ABS Chart
 * '<S180>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/CALC Ramp Control/CALC Chart
 * '<S181>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/Traction Control Event Needed/Time Since Enabled (With Input)1
 * '<S182>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/NewValue
 * '<S183>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/OldValue
 * '<S184>' : Mooventure2016_Rev5/Foreground/Control/Vehicle Run//Stop Determination/Chart
 * '<S185>' : Mooventure2016_Rev5/Foreground/Inputs/ABS
 * '<S186>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs
 * '<S187>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs
 * '<S188>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In
 * '<S189>' : Mooventure2016_Rev5/Foreground/Inputs/Charger Param
 * '<S190>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control
 * '<S191>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs
 * '<S192>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger
 * '<S193>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs
 * '<S194>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs
 * '<S195>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel
 * '<S196>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1
 * '<S197>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10
 * '<S198>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11
 * '<S199>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2
 * '<S200>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3
 * '<S201>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4
 * '<S202>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5
 * '<S203>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6
 * '<S204>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7
 * '<S205>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8
 * '<S206>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9
 * '<S207>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/NewValue
 * '<S208>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/OldValue
 * '<S209>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/NewValue
 * '<S210>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/OldValue
 * '<S211>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/NewValue
 * '<S212>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/OldValue
 * '<S213>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/NewValue
 * '<S214>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/OldValue
 * '<S215>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/NewValue
 * '<S216>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/OldValue
 * '<S217>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/NewValue
 * '<S218>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/OldValue
 * '<S219>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/NewValue
 * '<S220>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/OldValue
 * '<S221>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/NewValue
 * '<S222>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/OldValue
 * '<S223>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/NewValue
 * '<S224>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/OldValue
 * '<S225>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/NewValue
 * '<S226>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/OldValue
 * '<S227>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/NewValue
 * '<S228>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/OldValue
 * '<S229>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant
 * '<S230>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In
 * '<S231>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter
 * '<S232>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position
 * '<S233>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Heater Core Low Pass
 * '<S234>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Radiator Low Pass
 * '<S235>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1
 * '<S236>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12
 * '<S237>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2
 * '<S238>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Heater Core Low Pass/First Order Low Pass
 * '<S239>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Radiator Low Pass/First Order Low Pass
 * '<S240>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/NewValue
 * '<S241>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/OldValue
 * '<S242>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/NewValue
 * '<S243>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/OldValue
 * '<S244>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/NewValue
 * '<S245>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/OldValue
 * '<S246>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In/motohawk_override_abs12
 * '<S247>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In/motohawk_override_abs12/NewValue
 * '<S248>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In/motohawk_override_abs12/OldValue
 * '<S249>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12
 * '<S250>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/NewValue
 * '<S251>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/OldValue
 * '<S252>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position/motohawk_override_abs12
 * '<S253>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position/motohawk_override_abs12/NewValue
 * '<S254>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position/motohawk_override_abs12/OldValue
 * '<S255>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter
 * '<S256>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter
 * '<S257>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs
 * '<S258>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2
 * '<S259>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3
 * '<S260>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4
 * '<S261>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5
 * '<S262>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter/First Order Low Pass (Tunable)
 * '<S263>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S264>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter/First Order Low Pass (Tunable)
 * '<S265>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S266>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/NewValue
 * '<S267>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/OldValue
 * '<S268>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/NewValue
 * '<S269>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/OldValue
 * '<S270>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/NewValue
 * '<S271>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/OldValue
 * '<S272>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/NewValue
 * '<S273>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/OldValue
 * '<S274>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/NewValue
 * '<S275>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/OldValue
 * '<S276>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1
 * '<S277>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2
 * '<S278>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/NewValue
 * '<S279>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/OldValue
 * '<S280>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/NewValue
 * '<S281>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/OldValue
 * '<S282>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 1
 * '<S283>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 2
 * '<S284>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 3
 * '<S285>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 4
 * '<S286>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 5
 * '<S287>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Chart
 * '<S288>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant
 * '<S289>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant1
 * '<S290>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant2
 * '<S291>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant3
 * '<S292>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant4
 * '<S293>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs1
 * '<S294>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs12
 * '<S295>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs2
 * '<S296>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs3
 * '<S297>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs4
 * '<S298>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs5
 * '<S299>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 1/Time Since Enabled (With Input)4
 * '<S300>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 2/Time Since Enabled (With Input)4
 * '<S301>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 3/Time Since Enabled (With Input)4
 * '<S302>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 4/Time Since Enabled (With Input)4
 * '<S303>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 5/Time Since Enabled (With Input)4
 * '<S304>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs1/NewValue
 * '<S305>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs1/OldValue
 * '<S306>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs12/NewValue
 * '<S307>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs12/OldValue
 * '<S308>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs2/NewValue
 * '<S309>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs2/OldValue
 * '<S310>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs3/NewValue
 * '<S311>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs3/OldValue
 * '<S312>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs4/NewValue
 * '<S313>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs4/OldValue
 * '<S314>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs5/NewValue
 * '<S315>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs5/OldValue
 * '<S316>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Embedded MATLAB Function1
 * '<S317>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Embedded MATLAB Function2
 * '<S318>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Transmission Translator
 * '<S319>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs1
 * '<S320>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs10
 * '<S321>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs11
 * '<S322>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs12
 * '<S323>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs13
 * '<S324>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs14
 * '<S325>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs2
 * '<S326>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs3
 * '<S327>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs5
 * '<S328>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs6
 * '<S329>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs7
 * '<S330>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs8
 * '<S331>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs9
 * '<S332>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs1/NewValue
 * '<S333>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs1/OldValue
 * '<S334>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs10/NewValue
 * '<S335>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs10/OldValue
 * '<S336>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs11/NewValue
 * '<S337>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs11/OldValue
 * '<S338>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs12/NewValue
 * '<S339>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs12/OldValue
 * '<S340>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs13/NewValue
 * '<S341>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs13/OldValue
 * '<S342>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs14/NewValue
 * '<S343>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs14/OldValue
 * '<S344>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs2/NewValue
 * '<S345>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs2/OldValue
 * '<S346>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs3/NewValue
 * '<S347>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs3/OldValue
 * '<S348>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs5/NewValue
 * '<S349>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs5/OldValue
 * '<S350>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs6/NewValue
 * '<S351>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs6/OldValue
 * '<S352>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs7/NewValue
 * '<S353>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs7/OldValue
 * '<S354>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs8/NewValue
 * '<S355>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs8/OldValue
 * '<S356>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs9/NewValue
 * '<S357>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs9/OldValue
 * '<S358>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1
 * '<S359>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs10
 * '<S360>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs11
 * '<S361>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs12
 * '<S362>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2
 * '<S363>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3
 * '<S364>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4
 * '<S365>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5
 * '<S366>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6
 * '<S367>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7
 * '<S368>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8
 * '<S369>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9
 * '<S370>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/NewValue
 * '<S371>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/OldValue
 * '<S372>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs10/NewValue
 * '<S373>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs10/OldValue
 * '<S374>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs11/NewValue
 * '<S375>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs11/OldValue
 * '<S376>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs12/NewValue
 * '<S377>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs12/OldValue
 * '<S378>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/NewValue
 * '<S379>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/OldValue
 * '<S380>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/NewValue
 * '<S381>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/OldValue
 * '<S382>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/NewValue
 * '<S383>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/OldValue
 * '<S384>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/NewValue
 * '<S385>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/OldValue
 * '<S386>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/NewValue
 * '<S387>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/OldValue
 * '<S388>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/NewValue
 * '<S389>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/OldValue
 * '<S390>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/NewValue
 * '<S391>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/OldValue
 * '<S392>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/NewValue
 * '<S393>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/OldValue
 * '<S394>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1
 * '<S395>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2
 * '<S396>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3
 * '<S397>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4
 * '<S398>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5
 * '<S399>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6
 * '<S400>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7
 * '<S401>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs8
 * '<S402>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/NewValue
 * '<S403>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/OldValue
 * '<S404>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/NewValue
 * '<S405>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/OldValue
 * '<S406>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/NewValue
 * '<S407>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/OldValue
 * '<S408>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/NewValue
 * '<S409>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/OldValue
 * '<S410>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/NewValue
 * '<S411>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/OldValue
 * '<S412>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/NewValue
 * '<S413>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/OldValue
 * '<S414>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/NewValue
 * '<S415>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/OldValue
 * '<S416>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs8/NewValue
 * '<S417>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs8/OldValue
 * '<S418>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs1
 * '<S419>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs10
 * '<S420>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs11
 * '<S421>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs12
 * '<S422>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs13
 * '<S423>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs14
 * '<S424>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs15
 * '<S425>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs16
 * '<S426>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs17
 * '<S427>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs18
 * '<S428>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs19
 * '<S429>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs2
 * '<S430>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs20
 * '<S431>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs21
 * '<S432>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs22
 * '<S433>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs23
 * '<S434>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs24
 * '<S435>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs25
 * '<S436>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs26
 * '<S437>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs27
 * '<S438>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs28
 * '<S439>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs29
 * '<S440>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs3
 * '<S441>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs30
 * '<S442>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs31
 * '<S443>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs32
 * '<S444>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs4
 * '<S445>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs5
 * '<S446>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs6
 * '<S447>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7
 * '<S448>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs8
 * '<S449>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs9
 * '<S450>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs1/NewValue
 * '<S451>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs1/OldValue
 * '<S452>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs10/NewValue
 * '<S453>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs10/OldValue
 * '<S454>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs11/NewValue
 * '<S455>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs11/OldValue
 * '<S456>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs12/NewValue
 * '<S457>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs12/OldValue
 * '<S458>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs13/NewValue
 * '<S459>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs13/OldValue
 * '<S460>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs14/NewValue
 * '<S461>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs14/OldValue
 * '<S462>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs15/NewValue
 * '<S463>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs15/OldValue
 * '<S464>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs16/NewValue
 * '<S465>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs16/OldValue
 * '<S466>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs17/NewValue
 * '<S467>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs17/OldValue
 * '<S468>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs18/NewValue
 * '<S469>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs18/OldValue
 * '<S470>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs19/NewValue
 * '<S471>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs19/OldValue
 * '<S472>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs2/NewValue
 * '<S473>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs2/OldValue
 * '<S474>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs20/NewValue
 * '<S475>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs20/OldValue
 * '<S476>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs21/NewValue
 * '<S477>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs21/OldValue
 * '<S478>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs22/NewValue
 * '<S479>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs22/OldValue
 * '<S480>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs23/NewValue
 * '<S481>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs23/OldValue
 * '<S482>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs24/NewValue
 * '<S483>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs24/OldValue
 * '<S484>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs25/NewValue
 * '<S485>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs25/OldValue
 * '<S486>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs26/NewValue
 * '<S487>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs26/OldValue
 * '<S488>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs27/NewValue
 * '<S489>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs27/OldValue
 * '<S490>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs28/NewValue
 * '<S491>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs28/OldValue
 * '<S492>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs29/NewValue
 * '<S493>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs29/OldValue
 * '<S494>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs3/NewValue
 * '<S495>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs3/OldValue
 * '<S496>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs30/NewValue
 * '<S497>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs30/OldValue
 * '<S498>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs31/NewValue
 * '<S499>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs31/OldValue
 * '<S500>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs32/NewValue
 * '<S501>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs32/OldValue
 * '<S502>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs4/NewValue
 * '<S503>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs4/OldValue
 * '<S504>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs5/NewValue
 * '<S505>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs5/OldValue
 * '<S506>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs6/NewValue
 * '<S507>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs6/OldValue
 * '<S508>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/NewValue
 * '<S509>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/OldValue
 * '<S510>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs8/NewValue
 * '<S511>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs8/OldValue
 * '<S512>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs9/NewValue
 * '<S513>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs9/OldValue
 * '<S514>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1
 * '<S515>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2
 * '<S516>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3
 * '<S517>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7
 * '<S518>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/NewValue
 * '<S519>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/OldValue
 * '<S520>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/NewValue
 * '<S521>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/OldValue
 * '<S522>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/NewValue
 * '<S523>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/OldValue
 * '<S524>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/NewValue
 * '<S525>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/OldValue
 * '<S526>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs
 * '<S527>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs
 * '<S528>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out
 * '<S529>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs
 * '<S530>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox
 * '<S531>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs
 * '<S532>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger
 * '<S533>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs
 * '<S534>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs
 * '<S535>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/Shift Position Conditioner
 * '<S536>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs
 * '<S537>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1
 * '<S538>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2
 * '<S539>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3
 * '<S540>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4
 * '<S541>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5
 * '<S542>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6
 * '<S543>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7
 * '<S544>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/NewValue
 * '<S545>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/OldValue
 * '<S546>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/NewValue
 * '<S547>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/OldValue
 * '<S548>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/NewValue
 * '<S549>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/OldValue
 * '<S550>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/NewValue
 * '<S551>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/OldValue
 * '<S552>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/NewValue
 * '<S553>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/OldValue
 * '<S554>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/NewValue
 * '<S555>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/OldValue
 * '<S556>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/NewValue
 * '<S557>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/OldValue
 * '<S558>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/NewValue
 * '<S559>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/OldValue
 * '<S560>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs
 * '<S561>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1
 * '<S562>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/NewValue
 * '<S563>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/OldValue
 * '<S564>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/NewValue
 * '<S565>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/OldValue
 * '<S566>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs1
 * '<S567>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs2
 * '<S568>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs1/NewValue
 * '<S569>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs1/OldValue
 * '<S570>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs2/NewValue
 * '<S571>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs2/OldValue
 * '<S572>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Compare To Constant
 * '<S573>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 1
 * '<S574>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 2
 * '<S575>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 3
 * '<S576>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 4
 * '<S577>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Fan Adapter
 * '<S578>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Heater Core Motion Control
 * '<S579>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Radiator Motion Control
 * '<S580>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1
 * '<S581>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10
 * '<S582>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11
 * '<S583>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12
 * '<S584>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13
 * '<S585>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14
 * '<S586>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15
 * '<S587>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2
 * '<S588>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3
 * '<S589>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4
 * '<S590>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5
 * '<S591>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6
 * '<S592>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7
 * '<S593>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8
 * '<S594>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9
 * '<S595>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 1/Time Since Enabled (With Input)4
 * '<S596>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 2/Time Since Enabled (With Input)4
 * '<S597>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 3/Time Since Enabled (With Input)4
 * '<S598>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 4/Time Since Enabled (With Input)4
 * '<S599>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/NewValue
 * '<S600>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/OldValue
 * '<S601>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/NewValue
 * '<S602>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/OldValue
 * '<S603>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/NewValue
 * '<S604>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/OldValue
 * '<S605>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/NewValue
 * '<S606>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/OldValue
 * '<S607>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/NewValue
 * '<S608>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/OldValue
 * '<S609>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/NewValue
 * '<S610>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/OldValue
 * '<S611>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/NewValue
 * '<S612>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/OldValue
 * '<S613>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/NewValue
 * '<S614>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/OldValue
 * '<S615>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/NewValue
 * '<S616>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/OldValue
 * '<S617>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/NewValue
 * '<S618>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/OldValue
 * '<S619>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/NewValue
 * '<S620>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/OldValue
 * '<S621>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/NewValue
 * '<S622>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/OldValue
 * '<S623>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/NewValue
 * '<S624>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/OldValue
 * '<S625>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/NewValue
 * '<S626>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/OldValue
 * '<S627>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/NewValue
 * '<S628>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/OldValue
 * '<S629>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil1State
 * '<S630>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil2State
 * '<S631>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil2State1
 * '<S632>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Compare To Constant
 * '<S633>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10
 * '<S634>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11
 * '<S635>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6
 * '<S636>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7
 * '<S637>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8
 * '<S638>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9
 * '<S639>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/NewValue
 * '<S640>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/OldValue
 * '<S641>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/NewValue
 * '<S642>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/OldValue
 * '<S643>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/NewValue
 * '<S644>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/OldValue
 * '<S645>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/NewValue
 * '<S646>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/OldValue
 * '<S647>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/NewValue
 * '<S648>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/OldValue
 * '<S649>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/NewValue
 * '<S650>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/OldValue
 * '<S651>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Chart
 * '<S652>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Compare To Constant
 * '<S653>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Compare To Constant1
 * '<S654>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Compare To Constant2
 * '<S655>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Embedded MATLAB Function
 * '<S656>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Integrator
 * '<S657>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/ODO Calc
 * '<S658>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/PowerSteering
 * '<S659>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing
 * '<S660>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1
 * '<S661>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10
 * '<S662>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11
 * '<S663>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12
 * '<S664>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13
 * '<S665>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14
 * '<S666>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15
 * '<S667>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2
 * '<S668>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3
 * '<S669>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4
 * '<S670>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5
 * '<S671>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6
 * '<S672>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7
 * '<S673>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8
 * '<S674>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9
 * '<S675>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Integrator/Saturation
 * '<S676>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/ODO Calc/ODO_CALC
 * '<S677>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs1
 * '<S678>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs2
 * '<S679>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20
 * '<S680>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21
 * '<S681>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22
 * '<S682>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23
 * '<S683>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24
 * '<S684>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25
 * '<S685>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26
 * '<S686>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27
 * '<S687>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28
 * '<S688>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29
 * '<S689>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs3
 * '<S690>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30
 * '<S691>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31
 * '<S692>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32
 * '<S693>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33
 * '<S694>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34
 * '<S695>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35
 * '<S696>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36
 * '<S697>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37
 * '<S698>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38
 * '<S699>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39
 * '<S700>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs4
 * '<S701>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40
 * '<S702>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41
 * '<S703>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42
 * '<S704>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43
 * '<S705>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44
 * '<S706>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45
 * '<S707>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs1/NewValue
 * '<S708>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs1/OldValue
 * '<S709>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs2/NewValue
 * '<S710>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs2/OldValue
 * '<S711>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/NewValue
 * '<S712>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/OldValue
 * '<S713>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/NewValue
 * '<S714>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/OldValue
 * '<S715>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/NewValue
 * '<S716>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/OldValue
 * '<S717>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/NewValue
 * '<S718>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/OldValue
 * '<S719>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/NewValue
 * '<S720>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/OldValue
 * '<S721>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/NewValue
 * '<S722>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/OldValue
 * '<S723>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/NewValue
 * '<S724>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/OldValue
 * '<S725>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/NewValue
 * '<S726>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/OldValue
 * '<S727>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/NewValue
 * '<S728>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/OldValue
 * '<S729>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/NewValue
 * '<S730>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/OldValue
 * '<S731>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs3/NewValue
 * '<S732>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs3/OldValue
 * '<S733>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/NewValue
 * '<S734>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/OldValue
 * '<S735>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/NewValue
 * '<S736>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/OldValue
 * '<S737>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/NewValue
 * '<S738>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/OldValue
 * '<S739>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/NewValue
 * '<S740>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/OldValue
 * '<S741>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/NewValue
 * '<S742>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/OldValue
 * '<S743>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/NewValue
 * '<S744>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/OldValue
 * '<S745>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/NewValue
 * '<S746>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/OldValue
 * '<S747>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/NewValue
 * '<S748>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/OldValue
 * '<S749>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/NewValue
 * '<S750>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/OldValue
 * '<S751>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/NewValue
 * '<S752>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/OldValue
 * '<S753>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs4/NewValue
 * '<S754>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs4/OldValue
 * '<S755>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/NewValue
 * '<S756>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/OldValue
 * '<S757>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/NewValue
 * '<S758>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/OldValue
 * '<S759>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/NewValue
 * '<S760>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/OldValue
 * '<S761>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/NewValue
 * '<S762>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/OldValue
 * '<S763>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/NewValue
 * '<S764>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/OldValue
 * '<S765>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/NewValue
 * '<S766>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/OldValue
 * '<S767>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/NewValue
 * '<S768>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/OldValue
 * '<S769>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/NewValue
 * '<S770>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/OldValue
 * '<S771>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/NewValue
 * '<S772>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/OldValue
 * '<S773>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/NewValue
 * '<S774>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/OldValue
 * '<S775>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/NewValue
 * '<S776>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/OldValue
 * '<S777>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/NewValue
 * '<S778>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/OldValue
 * '<S779>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/NewValue
 * '<S780>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/OldValue
 * '<S781>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/NewValue
 * '<S782>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/OldValue
 * '<S783>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/NewValue
 * '<S784>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/OldValue
 * '<S785>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/NewValue
 * '<S786>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/OldValue
 * '<S787>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/NewValue
 * '<S788>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/OldValue
 * '<S789>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/NewValue
 * '<S790>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/OldValue
 * '<S791>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/NewValue
 * '<S792>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/OldValue
 * '<S793>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/NewValue
 * '<S794>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/OldValue
 * '<S795>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/NewValue
 * '<S796>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/OldValue
 * '<S797>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/ChargerState=1_Standby
 * '<S798>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1
 * '<S799>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2
 * '<S800>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3
 * '<S801>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4
 * '<S802>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5
 * '<S803>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/NewValue
 * '<S804>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/OldValue
 * '<S805>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/NewValue
 * '<S806>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/OldValue
 * '<S807>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/NewValue
 * '<S808>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/OldValue
 * '<S809>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/NewValue
 * '<S810>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/OldValue
 * '<S811>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/NewValue
 * '<S812>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/OldValue
 * '<S813>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1
 * '<S814>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2
 * '<S815>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3
 * '<S816>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4
 * '<S817>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5
 * '<S818>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/NewValue
 * '<S819>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/OldValue
 * '<S820>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/NewValue
 * '<S821>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/OldValue
 * '<S822>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/NewValue
 * '<S823>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/OldValue
 * '<S824>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/NewValue
 * '<S825>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/OldValue
 * '<S826>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/NewValue
 * '<S827>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/OldValue
 * '<S828>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Compare To Constant
 * '<S829>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Max InputCurrent
 * '<S830>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Max OutputCurrent
 * '<S831>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Time Since Enabled (With Input)1
 * '<S832>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs
 * '<S833>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1
 * '<S834>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10
 * '<S835>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11
 * '<S836>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12
 * '<S837>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13
 * '<S838>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14
 * '<S839>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15
 * '<S840>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16
 * '<S841>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17
 * '<S842>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2
 * '<S843>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3
 * '<S844>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4
 * '<S845>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5
 * '<S846>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6
 * '<S847>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7
 * '<S848>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8
 * '<S849>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Max InputCurrent/Time Since Enabled (With Input)1
 * '<S850>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Max OutputCurrent/Time Since Enabled (With Input)1
 * '<S851>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/NewValue
 * '<S852>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/OldValue
 * '<S853>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/NewValue
 * '<S854>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/OldValue
 * '<S855>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/NewValue
 * '<S856>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/OldValue
 * '<S857>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/NewValue
 * '<S858>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/OldValue
 * '<S859>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/NewValue
 * '<S860>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/OldValue
 * '<S861>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/NewValue
 * '<S862>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/OldValue
 * '<S863>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/NewValue
 * '<S864>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/OldValue
 * '<S865>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/NewValue
 * '<S866>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/OldValue
 * '<S867>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/NewValue
 * '<S868>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/OldValue
 * '<S869>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/NewValue
 * '<S870>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/OldValue
 * '<S871>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/NewValue
 * '<S872>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/OldValue
 * '<S873>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/NewValue
 * '<S874>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/OldValue
 * '<S875>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/NewValue
 * '<S876>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/OldValue
 * '<S877>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/NewValue
 * '<S878>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/OldValue
 * '<S879>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/NewValue
 * '<S880>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/OldValue
 * '<S881>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/NewValue
 * '<S882>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/OldValue
 * '<S883>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/NewValue
 * '<S884>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/OldValue
 * '<S885>' : Mooventure2016_Rev5/Main Power Relay1/Background
 * '<S886>' : Mooventure2016_Rev5/Main Power Relay1/Background/Delay
 * '<S887>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Boolean
 * '<S888>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call
 * '<S889>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1
 * '<S890>' : Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off
 * '<S891>' : Mooventure2016_Rev5/Main Power Relay1/Background/Processor Reboot
 * '<S892>' : Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off
 * '<S893>' : Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128
 * '<S894>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs
 * '<S895>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_restore_nvmem
 * '<S896>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_store_nvmem
 * '<S897>' : Mooventure2016_Rev5/Main Power Relay1/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S898>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call/Clear
 * '<S899>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1/Clear
 * '<S900>' : Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S901>' : Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S902>' : Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S903>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/NewValue
 * '<S904>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_Mooventure2016_Rev5_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
