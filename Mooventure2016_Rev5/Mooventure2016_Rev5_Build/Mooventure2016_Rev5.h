/*
 * File: Mooventure2016_Rev5.h
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2150
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Sep 04 13:37:31 2018
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
  real_T s196_IPT_CurrentUsed;         /* '<S196>/Read CAN Message3' */
  real_T s196_IPT_CurrentRequest;      /* '<S196>/Read CAN Message3' */
  real_T s196_IPT_MotorSpeed;          /* '<S196>/Read CAN Message3' */
  real_T s196_IPT_WheelTorqueDelivered;/* '<S196>/Read CAN Message3' */
  real_T s196_IPT_CurrentLimit;        /* '<S196>/Read CAN Message3' */
  real_T s196_IPT_Antishudder;         /* '<S196>/Read CAN Message3' */
  real_T s447_Merge;                   /* '<S447>/Merge' */
  real_T s140_Product;                 /* '<S140>/Product' */
  real_T s138_Sum2;                    /* '<S138>/Sum2' */
  real_T s142_Product;                 /* '<S142>/Product' */
  real_T s138_Product2;                /* '<S138>/Product2' */
  real_T s143_Switch1;                 /* '<S143>/Switch1' */
  real_T s145_MinMax1;                 /* '<S145>/MinMax1' */
  real_T s165_Switch1;                 /* '<S165>/Switch1' */
  real_T s163_Sum1;                    /* '<S163>/Sum1' */
  real_T s193_Shift_Position;          /* '<S193>/Read CAN Message1' */
  real_T s193_Brake_Position;          /* '<S193>/Read CAN Message3' */
  real_T s193_Brake_Position_l;        /* '<S193>/motohawk_interpolation_1d' */
  real_T s234_DataTypeConversion;      /* '<S234>/Data Type Conversion' */
  real_T s189_JCS_PackIdentifier;      /* '<S189>/Read CAN Message' */
  real_T s189_PackState;               /* '<S189>/Read CAN Message' */
  real_T s189_PrechargeState;          /* '<S189>/Read CAN Message' */
  real_T s189_HVIL_Status;             /* '<S189>/Read CAN Message' */
  real_T s189_IsolationStatus;         /* '<S189>/Read CAN Message' */
  real_T s189_WakeSignal;              /* '<S189>/Read CAN Message' */
  real_T s189_SleepInhibited;          /* '<S189>/Read CAN Message' */
  real_T s189_MILState;                /* '<S189>/Read CAN Message' */
  real_T s189_StateOfCharge;           /* '<S189>/Read CAN Message' */
  real_T s189_PS_RollingCounter;       /* '<S189>/Read CAN Message' */
  real_T s118_Torque_Direction;        /* '<S118>/Merge' */
  real_T s18_motor_Torque;             /* '<S18>/Merge1' */
  real_T s118_IPT_Torque_Request;      /* '<S118>/Product' */
  real_T s118_Saturation;              /* '<S118>/Saturation' */
  real_T s187_TCS_ENG_EVNT_IN_PROGRESS;/* '<S187>/Read CAN Message2' */
  real_T s178_Product;                 /* '<S178>/Product' */
  real_T s187_Front_left_whl_speed;    /* '<S187>/Read CAN Message1' */
  real_T s187_Front_right_whl_speed;   /* '<S187>/Read CAN Message1' */
  real_T s187_Rear_left_whl_speed;     /* '<S187>/Read CAN Message1' */
  real_T s187_Rear_right_whl_speed;    /* '<S187>/Read CAN Message1' */
  real_T s180_Abs2;                    /* '<S180>/Abs2' */
  real_T s179_Product;                 /* '<S179>/Product' */
  real_T s121_MultiportSwitch;         /* '<S121>/Multiport Switch' */
  real_T s529_Pct_whl_trq_desired;     /* '<S529>/Product' */
  real_T s448_Merge;                   /* '<S448>/Merge' */
  real_T s529_Commanded_mot_torq;      /* '<S529>/Product1' */
  real_T s189_BatteryVoltage;          /* '<S189>/Read CAN Message3' */
  real_T s189_BatteryCurrent;          /* '<S189>/Read CAN Message3' */
  real_T s189_BusVoltage;              /* '<S189>/Read CAN Message3' */
  real_T s189_PVC_RollingCounter;      /* '<S189>/Read CAN Message3' */
  real_T s190_HEV_CC_Defrost_Mode;     /* '<S190>/Read CAN Message3' */
  real_T s190_AC_Engaged_CMD;          /* '<S190>/Read CAN Message3' */
  real_T s279_Merge;                   /* '<S279>/Merge' */
  real_T s280_Merge;                   /* '<S280>/Merge' */
  real_T s242_Sum1;                    /* '<S242>/Sum1' */
  real_T s189_MaxCellVoltage;          /* '<S189>/Read CAN Message4' */
  real_T s189_MinCellVoltage;          /* '<S189>/Read CAN Message4' */
  real_T s189_MaxCellTemperature;      /* '<S189>/Read CAN Message4' */
  real_T s189_MinCellTemperature;      /* '<S189>/Read CAN Message4' */
  real_T s189_CoolantTemperature;      /* '<S189>/Read CAN Message4' */
  real_T s189_DPI_RollingCounter;      /* '<S189>/Read CAN Message4' */
  real_T s241_Sum1;                    /* '<S241>/Sum1' */
  real_T s15_DataTypeConversion;       /* '<S15>/Data Type Conversion' */
  real_T s15_DataTypeConversion2;      /* '<S15>/Data Type Conversion2' */
  real_T s15_DataTypeConversion3;      /* '<S15>/Data Type Conversion3' */
  real_T s193_DRIVER_1;                /* '<S193>/Read CAN Message6' */
  real_T s193_DRIVER_10;               /* '<S193>/Read CAN Message6' */
  real_T s193_PASSENGER_1;             /* '<S193>/Read CAN Message6' */
  real_T s193_PASSENGER_10;            /* '<S193>/Read CAN Message6' */
  real_T s194_InputVoltage;            /* '<S194>/Read CAN Message2' */
  real_T s194_OutputVoltage;           /* '<S194>/Read CAN Message2' */
  real_T s194_InputCurrentLimitMax;    /* '<S194>/Read CAN Message2' */
  real_T s194_InputCurrent;            /* '<S194>/Read CAN Message2' */
  real_T s194_OutputCurrent;           /* '<S194>/Read CAN Message2' */
  real_T s194_Eaton_HV_Charger_Temperature;/* '<S194>/Read CAN Message2' */
  real_T s194_ChargerState;            /* '<S194>/Read CAN Message2' */
  real_T s194_MessageCounter;          /* '<S194>/Read CAN Message2' */
  real_T s194_MessageChecksum;         /* '<S194>/Read CAN Message2' */
  real_T s195_ReadCANMessage_o1;       /* '<S195>/Read CAN Message' */
  real_T s195_ReadCANMessage_o2;       /* '<S195>/Read CAN Message' */
  real_T s195_ReadCANMessage_o3;       /* '<S195>/Read CAN Message' */
  real_T s195_ReadCANMessage_o4;       /* '<S195>/Read CAN Message' */
  real_T s195_ReadCANMessage_o5;       /* '<S195>/Read CAN Message' */
  real_T s195_ReadCANMessage_o6;       /* '<S195>/Read CAN Message' */
  real_T s195_ReadCANMessage_o7;       /* '<S195>/Read CAN Message' */
  real_T s195_ReadCANMessage_o8;       /* '<S195>/Read CAN Message' */
  real_T s196_IPT_InverterTemperature; /* '<S196>/Read CAN Message1' */
  real_T s196_IPT_MotorTemperature;    /* '<S196>/Read CAN Message1' */
  real_T s196_IPT_MaxTorqueAvailGen;   /* '<S196>/Read CAN Message1' */
  real_T s196_IPT_MaxTorqueAvailMotor; /* '<S196>/Read CAN Message1' */
  real_T s196_IPT_HVDCVoltage;         /* '<S196>/Read CAN Message1' */
  real_T s196_IPT_ErrorCategory;       /* '<S196>/Read CAN Message1' */
  real_T s196_IPT_IPTReady;            /* '<S196>/Read CAN Message1' */
  real_T s196_IPT_IPTAwake;            /* '<S196>/Read CAN Message1' */
  real_T s196_IPT_MaxWasteAvailable;   /* '<S196>/Read CAN Message1' */
  real_T s333_Merge;                   /* '<S333>/Merge' */
  real_T s367_Merge;                   /* '<S367>/Merge' */
  real_T s399_Merge;                   /* '<S399>/Merge' */
  real_T s404_Merge;                   /* '<S404>/Merge' */
  real_T s452_Merge;                   /* '<S452>/Merge' */
  real_T s32_Merge;                    /* '<S32>/Merge' */
  real_T s33_Merge;                    /* '<S33>/Merge' */
  real_T s534_Engine_Speed;            /* '<S534>/Abs1' */
  real_T s534_Current;                 /* '<S534>/Sum' */
  real_T s534_Vehi_Speed;              /* '<S534>/Abs2' */
  real_T s534_ODO_Count;               /* '<S534>/motohawk_data_read5' */
  real_T s189_TripAmpHoursIn;          /* '<S189>/Read CAN Message5' */
  real_T s189_TripAmpHoursOut;         /* '<S189>/Read CAN Message5' */
  real_T s189_StateOfChargeMax;        /* '<S189>/Read CAN Message5' */
  real_T s189_StateOfChargeMin;        /* '<S189>/Read CAN Message5' */
  real_T s189_TAH_RollingCounter;      /* '<S189>/Read CAN Message5' */
  real_T s62_Merge;                    /* '<S62>/Merge' */
  real_T s263_Merge;                   /* '<S263>/Merge' */
  real_T s536_Vehicle_Speed;           /* '<S536>/Product' */
  real_T s65_Merge;                    /* '<S65>/Merge' */
  real_T s64_Merge;                    /* '<S64>/Merge' */
  real_T s537_VSC_WheelTorqueRequest;  /* '<S537>/Product' */
  real_T s18_motor_Enable;             /* '<S18>/Merge2' */
  real_T s189_MaximumDischargePower_Continuous;/* '<S189>/Read CAN Message2' */
  real_T s189_MaximumRegenPower_Continuous;/* '<S189>/Read CAN Message2' */
  real_T s189_PPLCont_RollingCounter;  /* '<S189>/Read CAN Message2' */
  real_T s189_MaximumDischargePower_10s;/* '<S189>/Read CAN Message1' */
  real_T s189_MaximumRegenPower_10s;   /* '<S189>/Read CAN Message1' */
  real_T s189_IsolationLevel;          /* '<S189>/Read CAN Message1' */
  real_T s189_ActiveDTC;               /* '<S189>/Read CAN Message1' */
  real_T s189_PPL10s_RollingCounter;   /* '<S189>/Read CAN Message1' */
  real_T s261_Merge;                   /* '<S261>/Merge' */
  real_T s822_Switch;                  /* '<S822>/Switch' */
  real_T s821_Switch;                  /* '<S821>/Switch' */
  real_T s835_Merge;                   /* '<S835>/Merge' */
  real_T s836_Merge;                   /* '<S836>/Merge' */
  real_T s425_Merge;                   /* '<S425>/Merge' */
  real_T s197_STR_WHL_ANGLE_CNTR_FND;  /* '<S197>/Read CAN Message' */
  real_T s197_STR_WHL_ANGLE;           /* '<S197>/Read CAN Message' */
  real_T s197_RELATIVE_STR_WHL_ANGLE;  /* '<S197>/Read CAN Message' */
  real_T s196_IPT_DCErrorCategory;     /* '<S196>/Read CAN Message2' */
  real_T s196_IPT_DCLVOn;              /* '<S196>/Read CAN Message2' */
  real_T s196_IPT_DCLVGeneralError;    /* '<S196>/Read CAN Message2' */
  real_T s196_IPT_DCLVMaxPower;        /* '<S196>/Read CAN Message2' */
  real_T s196_IPT_DCLVBusCurrent;      /* '<S196>/Read CAN Message2' */
  real_T s196_IPT_DCLVBusVoltage;      /* '<S196>/Read CAN Message2' */
  real_T s196_IPT_DCHVBusCurrent;      /* '<S196>/Read CAN Message2' */
  real_T s187_LF_Wheel_Rolling_Count;  /* '<S187>/Read CAN Message' */
  real_T s187_RT_Wheel_Rolling_Count;  /* '<S187>/Read CAN Message' */
  real_T s187_Wheel_Rolling_Timestamp; /* '<S187>/Read CAN Message' */
  real_T s189_LifeTimeAmpHoursOut;     /* '<S189>/Read CAN Message6' */
  real_T s189_LTAHI_RollingCounter;    /* '<S189>/Read CAN Message6' */
  real_T s193_Button_Pressed;          /* '<S193>/Read CAN Message4' */
  real_T s196_Heading;                 /* '<S196>/Read CAN Message4' */
  real_T s196_Speed;                   /* '<S196>/Read CAN Message4' */
  real_T s196_Altitude;                /* '<S196>/Read CAN Message4' */
  real_T s196_GPSQuality;              /* '<S196>/Read CAN Message4' */
  real_T s196_DateTime;                /* '<S196>/Read CAN Message4' */
  real_T s260_Merge;                   /* '<S260>/Merge' */
  real_T s659_CEL;                     /* '<S534>/Embedded MATLAB Function' */
  real_T s655_engTemp;                 /* '<S534>/Chart' */
  real_T s655_transTemp;               /* '<S534>/Chart' */
  real_T s581_fan1;                    /* '<S532>/Fan Adapter' */
  real_T s581_fan2;                    /* '<S532>/Fan Adapter' */
  real_T s581_fan3;                    /* '<S532>/Fan Adapter' */
  real_T s539_dirOut;                  /* '<S529>/Shift Position Conditioner' */
  real_T s321_posOut;                  /* '<S193>/Transmission Translator' */
  real_T s321_ecoModeOut;              /* '<S193>/Transmission Translator' */
  real_T s320_passengerTemp;           /* '<S193>/Embedded MATLAB Function2' */
  real_T s319_driverTemp;              /* '<S193>/Embedded MATLAB Function1' */
  real_T s290_Out;                     /* '<S192>/Chart' */
  real_T s235_temp_reading;            /* '<S231>/Embedded MATLAB Function' */
  real_T s116_state;                   /* '<S18>/Embedded MATLAB Function' */
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
  int32_T s231_motohawk_ain1_o1;       /* '<S231>/motohawk_ain1' */
  uint32_T s196_AgeCount;              /* '<S196>/Read CAN Message3' */
  uint32_T s193_AgeCount;              /* '<S193>/Read CAN Message1' */
  uint32_T s193_AgeCount_j;            /* '<S193>/Read CAN Message3' */
  uint32_T s189_AgeCount;              /* '<S189>/Read CAN Message' */
  uint32_T s187_AgeCount;              /* '<S187>/Read CAN Message2' */
  uint32_T s187_AgeCount_n;            /* '<S187>/Read CAN Message1' */
  uint32_T s194_AgeCount;              /* '<S194>/Read CAN Message2' */
  uint32_T s196_AgeCount_m;            /* '<S196>/Read CAN Message1' */
  uint32_T s197_AgeCount;              /* '<S197>/Read CAN Message' */
  uint32_T s196_AgeCount_j;            /* '<S196>/Read CAN Message2' */
  uint32_T s187_AgeCount_b;            /* '<S187>/Read CAN Message' */
  uint32_T s196_AgeCount_o;            /* '<S196>/Read CAN Message4' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  uint16_T s232_motohawk_ain4_o1;      /* '<S232>/motohawk_ain4' */
  uint16_T s249_Merge;                 /* '<S249>/Merge' */
  uint16_T s234_motohawk_ain4_o1;      /* '<S234>/motohawk_ain4' */
  uint16_T s180_Product;               /* '<S180>/Product' */
  uint16_T s231_motohawk_ain2_o1;      /* '<S231>/motohawk_ain2' */
  uint16_T s231_motohawk_ain4_o1;      /* '<S231>/motohawk_ain4' */
  uint16_T s233_motohawk_ain4_o1;      /* '<S233>/motohawk_ain4' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  int8_T s530_ConnectCommand;          /* '<S530>/Data Type Conversion' */
  uint8_T s82_CANFaultStatus_o2;       /* '<S82>/CAN Fault Status' */
  uint8_T s82_CANFaultStatus_o3;       /* '<S82>/CAN Fault Status' */
  uint8_T s82_CANFaultStatus1_o2;      /* '<S82>/CAN Fault Status1' */
  uint8_T s82_CANFaultStatus1_o3;      /* '<S82>/CAN Fault Status1' */
  uint8_T s82_CANFaultStatus2_o2;      /* '<S82>/CAN Fault Status2' */
  uint8_T s82_CANFaultStatus2_o3;      /* '<S82>/CAN Fault Status2' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s285_LogicalOperator;      /* '<S285>/Logical Operator' */
  boolean_T s289_LogicalOperator;      /* '<S289>/Logical Operator' */
  boolean_T s189_CellBalanceingActive; /* '<S189>/Read CAN Message' */
  boolean_T s14_LogicalOperator;       /* '<S14>/Logical Operator' */
  boolean_T s21_LogicalOperator2;      /* '<S21>/Logical Operator2' */
  boolean_T s530_IsolationMeasurementEnable;/* '<S530>/Logical Operator' */
  boolean_T s194_IgnitionStatus;       /* '<S194>/Read CAN Message2' */
  boolean_T s194_FaultSeverityIndicator;/* '<S194>/Read CAN Message2' */
  boolean_T s196_IPT_MotorReady;       /* '<S196>/Read CAN Message1' */
  boolean_T s532_DataTypeConversion5;  /* '<S532>/Data Type Conversion5' */
  boolean_T s532_LogicalOperator8;     /* '<S532>/Logical Operator8' */
  boolean_T s15_Cooling_Pump_Radiator; /* '<S15>/Data Type Conversion8' */
  boolean_T s15_Cooling_Pump_Heater_Core;/* '<S15>/Data Type Conversion1' */
  boolean_T s532_DataTypeConversion4;  /* '<S532>/Data Type Conversion4' */
  boolean_T s532_DataTypeConversion1;  /* '<S532>/Data Type Conversion1' */
  boolean_T s532_DataTypeConversion2;  /* '<S532>/Data Type Conversion2' */
  boolean_T s532_LogicalOperator5;     /* '<S532>/Logical Operator5' */
  boolean_T s532_LogicalOperator6;     /* '<S532>/Logical Operator6' */
  boolean_T s532_LogicalOperator7;     /* '<S532>/Logical Operator7' */
  boolean_T s534_Regen_Brakes_Disabled;/* '<S534>/motohawk_fault_action2' */
  boolean_T s534_HV_Elec_Sys_Warm;     /* '<S534>/motohawk_fault_action1' */
  boolean_T s534_Repair_Wrench;        /* '<S534>/Logical Operator' */
  boolean_T s534_Battery_Light;        /* '<S534>/motohawk_fault_action4' */
  boolean_T s535_ChargeSystemFault;    /* '<S535>/motohawk_fault_action' */
  boolean_T s535_ChargeComplete;       /* '<S535>/Logical Operator2' */
  boolean_T s535_ChargeEnable;         /* '<S535>/Logical Operator1' */
  boolean_T s536_Gen_Enable;           /* '<S536>/Logical Operator' */
  boolean_T s537_VSC_IPTEnable;        /* '<S537>/motohawk_data_read3' */
  boolean_T s537_VSC_MotorEnable;      /* '<S537>/Logical Operator2' */
  boolean_T s537_VSC_DCDCEnable;       /* '<S537>/Logical Operator1' */
  boolean_T s82_CANFaultStatus_o1;     /* '<S82>/CAN Fault Status' */
  boolean_T s82_CANFaultStatus1_o1;    /* '<S82>/CAN Fault Status1' */
  boolean_T s82_CANFaultStatus2_o1;    /* '<S82>/CAN Fault Status2' */
  boolean_T s286_LogicalOperator;      /* '<S286>/Logical Operator' */
  boolean_T s287_LogicalOperator;      /* '<S287>/Logical Operator' */
  boolean_T s288_LogicalOperator;      /* '<S288>/Logical Operator' */
  boolean_T s662_VehicleReadyOutput;   /* '<S534>/PowerSteering' */
  boolean_T s635_Coil3State;           /* '<S533>/Coil2State1' */
  boolean_T s634_Coil2State;           /* '<S533>/Coil2State' */
  boolean_T s633_Coil1State;           /* '<S533>/Coil1State' */
  boolean_T s186_Vehicle_Enable;       /* '<S19>/Chart' */
  boolean_T s186_Vehicle_Ready;        /* '<S19>/Chart' */
  boolean_T s186_Torque_Enable;        /* '<S19>/Chart' */
  boolean_T s186_Keyed_Relay;          /* '<S19>/Chart' */
  boolean_T s130_System;               /* '<S114>/SystemState' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 s532_sf_RadiatorMotionControl;/* '<S532>/Radiator Motion Control' */
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5
    s532_sf_HeaterCoreMotionControl;   /* '<S532>/Heater Core Motion Control' */
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5
    s529_sf_DataCorrectionMotorABS;    /* '<S529>/Data Correction Motor ABS' */
  rtB_ABSChart_Mooventure2016_Rev5 s179_sf_CALCChart;/* '<S179>/CALC Chart' */
  rtB_ABSChart_Mooventure2016_Rev5 s178_sf_ABSChart;/* '<S178>/ABS Chart' */
  rtB_Chart_Mooventure2016_Rev5 s119_sf_Chart;/* '<S119>/Chart' */
  rtB_Chart_Mooventure2016_Rev5 s115_sf_Chart;/* '<S115>/Chart' */
  rtB_Chart_Mooventure2016_Rev5 s113_sf_Chart;/* '<S113>/Chart' */
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5 s105_sf_DataCorrection;/* '<S105>/Data Correction' */
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5
    s100_sf_DataCorrectionMotorFault;  /* '<S100>/Data Correction Motor Fault' */
} BlockIO_Mooventure2016_Rev5;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s140_UnitDelay_DSTATE;        /* '<S140>/Unit Delay' */
  real_T s141_UnitDelay_DSTATE;        /* '<S141>/Unit Delay' */
  real_T s142_UnitDelay_DSTATE;        /* '<S142>/Unit Delay' */
  real_T s143_UnitDelay_DSTATE;        /* '<S143>/Unit Delay' */
  real_T s165_UnitDelay_DSTATE;        /* '<S165>/Unit Delay' */
  real_T s163_UnitDelay_DSTATE;        /* '<S163>/Unit Delay' */
  real_T s266_UnitDelay_DSTATE;        /* '<S266>/Unit Delay' */
  real_T s171_UnitDelay_DSTATE;        /* '<S171>/Unit Delay' */
  real_T s268_UnitDelay_DSTATE;        /* '<S268>/Unit Delay' */
  real_T s242_UnitDelay_DSTATE;        /* '<S242>/Unit Delay' */
  real_T s241_UnitDelay_DSTATE;        /* '<S241>/Unit Delay' */
  real_T s85_UnitDelay1_DSTATE;        /* '<S85>/Unit Delay1' */
  real_T s85_UnitDelay_DSTATE;         /* '<S85>/Unit Delay' */
  real_T s88_UnitDelay_DSTATE;         /* '<S88>/Unit Delay' */
  real_T s98_UnitDelay_DSTATE;         /* '<S98>/Unit Delay' */
  real_T s101_UnitDelay_DSTATE;        /* '<S101>/Unit Delay' */
  real_T s105_UnitDelay_DSTATE;        /* '<S105>/Unit Delay' */
  real_T s97_UnitDelay_DSTATE;         /* '<S97>/Unit Delay' */
  real_T s655_count;                   /* '<S534>/Chart' */
  real_T s186_count;                   /* '<S19>/Chart' */
  real_T s28_count;                    /* '<S15>/Chart' */
  uint32_T s302_motohawk_delta_time_DWORK1;/* '<S302>/motohawk_delta_time' */
  uint32_T s306_motohawk_delta_time_DWORK1;/* '<S306>/motohawk_delta_time' */
  uint32_T s160_motohawk_delta_time_DWORK1;/* '<S160>/motohawk_delta_time' */
  uint32_T s156_motohawk_delta_time_DWORK1;/* '<S156>/motohawk_delta_time' */
  uint32_T s183_motohawk_delta_time_DWORK1;/* '<S183>/motohawk_delta_time' */
  uint32_T s24_motohawk_delta_time_DWORK1;/* '<S24>/motohawk_delta_time' */
  uint32_T s23_motohawk_delta_time_DWORK1;/* '<S23>/motohawk_delta_time' */
  uint32_T s237_motohawk_delta_time_DWORK1;/* '<S237>/motohawk_delta_time' */
  uint32_T s236_motohawk_delta_time_DWORK1;/* '<S236>/motohawk_delta_time' */
  uint32_T s602_motohawk_delta_time_DWORK1;/* '<S602>/motohawk_delta_time' */
  uint32_T s599_motohawk_delta_time_DWORK1;/* '<S599>/motohawk_delta_time' */
  uint32_T s600_motohawk_delta_time_DWORK1;/* '<S600>/motohawk_delta_time' */
  uint32_T s601_motohawk_delta_time_DWORK1;/* '<S601>/motohawk_delta_time' */
  uint32_T s660_motohawk_delta_time_DWORK1;/* '<S660>/motohawk_delta_time' */
  uint32_T s67_motohawk_delta_time_DWORK1;/* '<S67>/motohawk_delta_time' */
  uint32_T s68_motohawk_delta_time_DWORK1;/* '<S68>/motohawk_delta_time' */
  uint32_T s69_motohawk_delta_time_DWORK1;/* '<S69>/motohawk_delta_time' */
  uint32_T s70_motohawk_delta_time_DWORK1;/* '<S70>/motohawk_delta_time' */
  uint32_T s71_motohawk_delta_time_DWORK1;/* '<S71>/motohawk_delta_time' */
  uint32_T s66_motohawk_delta_time_DWORK1;/* '<S66>/motohawk_delta_time' */
  uint32_T s823_motohawk_delta_time_DWORK1;/* '<S823>/motohawk_delta_time' */
  uint32_T s842_motohawk_delta_time_DWORK1;/* '<S842>/motohawk_delta_time' */
  uint32_T s841_motohawk_delta_time_DWORK1;/* '<S841>/motohawk_delta_time' */
  uint32_T s89_motohawk_delta_time_DWORK1;/* '<S89>/motohawk_delta_time' */
  uint32_T s90_motohawk_delta_time_DWORK1;/* '<S90>/motohawk_delta_time' */
  uint32_T s303_motohawk_delta_time_DWORK1;/* '<S303>/motohawk_delta_time' */
  uint32_T s304_motohawk_delta_time_DWORK1;/* '<S304>/motohawk_delta_time' */
  uint32_T s305_motohawk_delta_time_DWORK1;/* '<S305>/motohawk_delta_time' */
  uint32_T s25_motohawk_delta_time_DWORK1;/* '<S25>/motohawk_delta_time' */
  uint32_T s143_motohawk_delta_time_DWORK1;/* '<S143>/motohawk_delta_time' */
  uint32_T s165_motohawk_delta_time_DWORK1;/* '<S165>/motohawk_delta_time' */
  uint16_T s878_UnitDelay_DSTATE;      /* '<S878>/Unit Delay' */
  uint16_T s878_UnitDelay1_DSTATE;     /* '<S878>/Unit Delay1' */
  uint16_T s101_motohawk_fault_def2_DWORK1;/* '<S101>/motohawk_fault_def2' */
  uint8_T s135_DelayInput1_DSTATE;     /* '<S135>/Delay Input1' */
  boolean_T s107_DelayInput1_DSTATE;   /* '<S107>/Delay Input1' */
  boolean_T s108_DelayInput1_DSTATE;   /* '<S108>/Delay Input1' */
  boolean_T s109_DelayInput1_DSTATE;   /* '<S109>/Delay Input1' */
  boolean_T s110_DelayInput1_DSTATE;   /* '<S110>/Delay Input1' */
  boolean_T s106_DelayInput1_DSTATE;   /* '<S106>/Delay Input1' */
  boolean_T s131_DelayInput1_DSTATE;   /* '<S131>/Delay Input1' */
  boolean_T s132_DelayInput1_DSTATE;   /* '<S132>/Delay Input1' */
  boolean_T s146_DelayInput1_DSTATE;   /* '<S146>/Delay Input1' */
  boolean_T s879_UnitDelay_DSTATE;     /* '<S879>/Unit Delay' */
  boolean_T s889_UnitDelay_DSTATE;     /* '<S889>/Unit Delay' */
  boolean_T s877_UnitDelay5_DSTATE;    /* '<S877>/Unit Delay5' */
  boolean_T s877_UnitDelay2_DSTATE;    /* '<S877>/Unit Delay2' */
  boolean_T s877_UnitDelay_DSTATE;     /* '<S877>/Unit Delay' */
  boolean_T s877_UnitDelay1_DSTATE;    /* '<S877>/Unit Delay1' */
  boolean_T s877_UnitDelay3_DSTATE;    /* '<S877>/Unit Delay3' */
  boolean_T s877_UnitDelay4_DSTATE;    /* '<S877>/Unit Delay4' */
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
  uint8_T s662_is_active_c28_Mooventure2016_Rev5;/* '<S534>/PowerSteering' */
  uint8_T s662_is_c28_Mooventure2016_Rev5;/* '<S534>/PowerSteering' */
  uint8_T s655_is_active_c22_Mooventure2016_Rev5;/* '<S534>/Chart' */
  uint8_T s655_is_c22_Mooventure2016_Rev5;/* '<S534>/Chart' */
  uint8_T s635_is_active_c10_Mooventure2016_Rev5;/* '<S533>/Coil2State1' */
  uint8_T s635_is_c10_Mooventure2016_Rev5;/* '<S533>/Coil2State1' */
  uint8_T s634_is_active_c9_Mooventure2016_Rev5;/* '<S533>/Coil2State' */
  uint8_T s634_is_c9_Mooventure2016_Rev5;/* '<S533>/Coil2State' */
  uint8_T s633_is_active_c8_Mooventure2016_Rev5;/* '<S533>/Coil1State' */
  uint8_T s633_is_c8_Mooventure2016_Rev5;/* '<S533>/Coil1State' */
  uint8_T s290_is_active_c29_Mooventure2016_Rev5;/* '<S192>/Chart' */
  uint8_T s290_is_c29_Mooventure2016_Rev5;/* '<S192>/Chart' */
  uint8_T s186_is_active_c1_Mooventure2016_Rev5;/* '<S19>/Chart' */
  uint8_T s186_is_c1_Mooventure2016_Rev5;/* '<S19>/Chart' */
  uint8_T s130_is_active_c30_Mooventure2016_Rev5;/* '<S114>/SystemState' */
  uint8_T s130_is_c30_Mooventure2016_Rev5;/* '<S114>/SystemState' */
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
  boolean_T s118_Drive_MODE;           /* '<S118>/Drive' */
  boolean_T s118_Reverse_MODE;         /* '<S118>/Reverse' */
  rtDW_ABSChart_Mooventure2016_Rev5 s179_sf_CALCChart;/* '<S179>/CALC Chart' */
  rtDW_ABSChart_Mooventure2016_Rev5 s178_sf_ABSChart;/* '<S178>/ABS Chart' */
  rtDW_Chart_Mooventure2016_Rev5 s119_sf_Chart;/* '<S119>/Chart' */
  rtDW_Chart_Mooventure2016_Rev5 s115_sf_Chart;/* '<S115>/Chart' */
  rtDW_Chart_Mooventure2016_Rev5 s113_sf_Chart;/* '<S113>/Chart' */
} D_Work_Mooventure2016_Rev5;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S88>/Triggered Subsystem' */
  ZCSigState ShutdownpoweronECU565128_Trig_ZCE;/* '<S877>/Shutdown power on ECU565-128' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S877>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S877>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S877>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S881>/Clear' */
  ZCSigState Clear_Trig_ZCE_i;         /* '<S880>/Clear' */
} PrevZCSigStates_Mooventure2016_Rev5;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s530_OdometerValue;     /* '<S530>/To km' */
  const boolean_T s165_DataTypeConversion;/* '<S165>/Data Type Conversion' */
  const boolean_T s660_DataTypeConversion;/* '<S660>/Data Type Conversion' */
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
 * '<S111>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Electric Motor/Data Correction Motor Fault
 * '<S112>' : Mooventure2016_Rev5/Foreground/Control/Faults/Power Train/Vehicle Speed Sensor/Data Correction
 * '<S113>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode
 * '<S114>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control
 * '<S115>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode
 * '<S116>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Embedded MATLAB Function
 * '<S117>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1
 * '<S118>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT
 * '<S119>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode
 * '<S120>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Safety
 * '<S121>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control
 * '<S122>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs
 * '<S123>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart
 * '<S124>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/CrawlHomeMode/SOC_RampOut
 * '<S125>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Brake Disable
 * '<S126>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing
 * '<S127>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control
 * '<S128>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume
 * '<S129>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/System Start
 * '<S130>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/SystemState
 * '<S131>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Detect Increase
 * '<S132>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Detect Increase1
 * '<S133>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Speed Decrease
 * '<S134>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Changing/Speed Increase
 * '<S135>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/Detect Rise Positive
 * '<S136>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)
 * '<S137>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/Detect Rise Positive/Positive
 * '<S138>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms
 * '<S139>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/Saturation (Tunable)
 * '<S140>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive1
 * '<S141>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive2
 * '<S142>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive3
 * '<S143>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator
 * '<S144>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator/Saturation
 * '<S145>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Control/PID With Damper Terms (Tunable)/Saturation (Tunable)/Saturation
 * '<S146>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume/Detect Increase
 * '<S147>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Cruise Control/Speed Resume/Enabled Subsystem1
 * '<S148>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/EcoMode/Chart
 * '<S149>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function
 * '<S150>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function/Embedded MATLAB Function
 * '<S151>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant
 * '<S152>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant1
 * '<S153>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Compare To Constant2
 * '<S154>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest
 * '<S155>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive
 * '<S156>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/First Order Low Pass (Tunable)
 * '<S157>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Neutral
 * '<S158>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse
 * '<S159>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs
 * '<S160>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/First Order Low Pass (Tunable)
 * '<S161>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator
 * '<S162>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/motohawk_table_1d
 * '<S163>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S164>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/CurrentModifier
 * '<S165>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/Integrator
 * '<S166>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/CurrentModifier/Compare To Zero
 * '<S167>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/CurrentLimiting_TurboRequest/OvercurrentIntegralGenerator/Integrator/Saturation
 * '<S168>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4
 * '<S169>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/NewValue
 * '<S170>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/OldValue
 * '<S171>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S172>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4
 * '<S173>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/NewValue
 * '<S174>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/OldValue
 * '<S175>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/NewValue
 * '<S176>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/OldValue
 * '<S177>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/SUVMode/Chart
 * '<S178>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/ABS Ramp Control
 * '<S179>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/CALC Ramp Control
 * '<S180>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/Traction Control Event Needed
 * '<S181>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/ABS Ramp Control/ABS Chart
 * '<S182>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/CALC Ramp Control/CALC Chart
 * '<S183>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/Traction Control/Traction Control Event Needed/Time Since Enabled (With Input)1
 * '<S184>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/NewValue
 * '<S185>' : Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/OldValue
 * '<S186>' : Mooventure2016_Rev5/Foreground/Control/Vehicle Run//Stop Determination/Chart
 * '<S187>' : Mooventure2016_Rev5/Foreground/Inputs/ABS
 * '<S188>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs
 * '<S189>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs
 * '<S190>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In
 * '<S191>' : Mooventure2016_Rev5/Foreground/Inputs/Charger Param
 * '<S192>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control
 * '<S193>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs
 * '<S194>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger
 * '<S195>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs
 * '<S196>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs
 * '<S197>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel
 * '<S198>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1
 * '<S199>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10
 * '<S200>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11
 * '<S201>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2
 * '<S202>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3
 * '<S203>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4
 * '<S204>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5
 * '<S205>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6
 * '<S206>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7
 * '<S207>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8
 * '<S208>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9
 * '<S209>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/NewValue
 * '<S210>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/OldValue
 * '<S211>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/NewValue
 * '<S212>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/OldValue
 * '<S213>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/NewValue
 * '<S214>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/OldValue
 * '<S215>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/NewValue
 * '<S216>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/OldValue
 * '<S217>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/NewValue
 * '<S218>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/OldValue
 * '<S219>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/NewValue
 * '<S220>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/OldValue
 * '<S221>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/NewValue
 * '<S222>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/OldValue
 * '<S223>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/NewValue
 * '<S224>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/OldValue
 * '<S225>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/NewValue
 * '<S226>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/OldValue
 * '<S227>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/NewValue
 * '<S228>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/OldValue
 * '<S229>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/NewValue
 * '<S230>' : Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/OldValue
 * '<S231>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant
 * '<S232>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In
 * '<S233>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter
 * '<S234>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position
 * '<S235>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Embedded MATLAB Function
 * '<S236>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Heater Core Low Pass
 * '<S237>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Radiator Low Pass
 * '<S238>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1
 * '<S239>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12
 * '<S240>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2
 * '<S241>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Heater Core Low Pass/First Order Low Pass
 * '<S242>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/Radiator Low Pass/First Order Low Pass
 * '<S243>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/NewValue
 * '<S244>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/OldValue
 * '<S245>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/NewValue
 * '<S246>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/OldValue
 * '<S247>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/NewValue
 * '<S248>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/OldValue
 * '<S249>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In/motohawk_override_abs12
 * '<S250>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In/motohawk_override_abs12/NewValue
 * '<S251>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In/motohawk_override_abs12/OldValue
 * '<S252>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12
 * '<S253>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/NewValue
 * '<S254>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/OldValue
 * '<S255>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position/motohawk_override_abs12
 * '<S256>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position/motohawk_override_abs12/NewValue
 * '<S257>' : Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position/motohawk_override_abs12/OldValue
 * '<S258>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter
 * '<S259>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter
 * '<S260>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs
 * '<S261>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2
 * '<S262>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3
 * '<S263>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4
 * '<S264>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5
 * '<S265>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter/First Order Low Pass (Tunable)
 * '<S266>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/SOC Filter/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S267>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter/First Order Low Pass (Tunable)
 * '<S268>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/Voltage Filter/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S269>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/NewValue
 * '<S270>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/OldValue
 * '<S271>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/NewValue
 * '<S272>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/OldValue
 * '<S273>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/NewValue
 * '<S274>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/OldValue
 * '<S275>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/NewValue
 * '<S276>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/OldValue
 * '<S277>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/NewValue
 * '<S278>' : Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/OldValue
 * '<S279>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1
 * '<S280>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2
 * '<S281>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/NewValue
 * '<S282>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/OldValue
 * '<S283>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/NewValue
 * '<S284>' : Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/OldValue
 * '<S285>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 1
 * '<S286>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 2
 * '<S287>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 3
 * '<S288>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 4
 * '<S289>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 5
 * '<S290>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Chart
 * '<S291>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant
 * '<S292>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant1
 * '<S293>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant2
 * '<S294>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant3
 * '<S295>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Compare To Constant4
 * '<S296>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs1
 * '<S297>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs12
 * '<S298>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs2
 * '<S299>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs3
 * '<S300>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs4
 * '<S301>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs5
 * '<S302>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 1/Time Since Enabled (With Input)4
 * '<S303>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 2/Time Since Enabled (With Input)4
 * '<S304>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 3/Time Since Enabled (With Input)4
 * '<S305>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 4/Time Since Enabled (With Input)4
 * '<S306>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/Button Delay 5/Time Since Enabled (With Input)4
 * '<S307>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs1/NewValue
 * '<S308>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs1/OldValue
 * '<S309>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs12/NewValue
 * '<S310>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs12/OldValue
 * '<S311>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs2/NewValue
 * '<S312>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs2/OldValue
 * '<S313>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs3/NewValue
 * '<S314>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs3/OldValue
 * '<S315>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs4/NewValue
 * '<S316>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs4/OldValue
 * '<S317>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs5/NewValue
 * '<S318>' : Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs5/OldValue
 * '<S319>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Embedded MATLAB Function1
 * '<S320>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Embedded MATLAB Function2
 * '<S321>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/Transmission Translator
 * '<S322>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs1
 * '<S323>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs10
 * '<S324>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs11
 * '<S325>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs12
 * '<S326>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs13
 * '<S327>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs14
 * '<S328>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs2
 * '<S329>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs3
 * '<S330>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs5
 * '<S331>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs6
 * '<S332>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs7
 * '<S333>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs8
 * '<S334>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs9
 * '<S335>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs1/NewValue
 * '<S336>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs1/OldValue
 * '<S337>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs10/NewValue
 * '<S338>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs10/OldValue
 * '<S339>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs11/NewValue
 * '<S340>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs11/OldValue
 * '<S341>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs12/NewValue
 * '<S342>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs12/OldValue
 * '<S343>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs13/NewValue
 * '<S344>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs13/OldValue
 * '<S345>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs14/NewValue
 * '<S346>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs14/OldValue
 * '<S347>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs2/NewValue
 * '<S348>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs2/OldValue
 * '<S349>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs3/NewValue
 * '<S350>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs3/OldValue
 * '<S351>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs5/NewValue
 * '<S352>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs5/OldValue
 * '<S353>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs6/NewValue
 * '<S354>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs6/OldValue
 * '<S355>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs7/NewValue
 * '<S356>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs7/OldValue
 * '<S357>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs8/NewValue
 * '<S358>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs8/OldValue
 * '<S359>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs9/NewValue
 * '<S360>' : Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs9/OldValue
 * '<S361>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1
 * '<S362>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs10
 * '<S363>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs11
 * '<S364>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs12
 * '<S365>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2
 * '<S366>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3
 * '<S367>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4
 * '<S368>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5
 * '<S369>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6
 * '<S370>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7
 * '<S371>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8
 * '<S372>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9
 * '<S373>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/NewValue
 * '<S374>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/OldValue
 * '<S375>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs10/NewValue
 * '<S376>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs10/OldValue
 * '<S377>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs11/NewValue
 * '<S378>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs11/OldValue
 * '<S379>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs12/NewValue
 * '<S380>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs12/OldValue
 * '<S381>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/NewValue
 * '<S382>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/OldValue
 * '<S383>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/NewValue
 * '<S384>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/OldValue
 * '<S385>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/NewValue
 * '<S386>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/OldValue
 * '<S387>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/NewValue
 * '<S388>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/OldValue
 * '<S389>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/NewValue
 * '<S390>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/OldValue
 * '<S391>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/NewValue
 * '<S392>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/OldValue
 * '<S393>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/NewValue
 * '<S394>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/OldValue
 * '<S395>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/NewValue
 * '<S396>' : Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/OldValue
 * '<S397>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1
 * '<S398>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2
 * '<S399>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3
 * '<S400>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4
 * '<S401>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5
 * '<S402>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6
 * '<S403>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7
 * '<S404>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs8
 * '<S405>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/NewValue
 * '<S406>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/OldValue
 * '<S407>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/NewValue
 * '<S408>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/OldValue
 * '<S409>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/NewValue
 * '<S410>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/OldValue
 * '<S411>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/NewValue
 * '<S412>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/OldValue
 * '<S413>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/NewValue
 * '<S414>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/OldValue
 * '<S415>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/NewValue
 * '<S416>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/OldValue
 * '<S417>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/NewValue
 * '<S418>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/OldValue
 * '<S419>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs8/NewValue
 * '<S420>' : Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs8/OldValue
 * '<S421>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs1
 * '<S422>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs10
 * '<S423>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs11
 * '<S424>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs12
 * '<S425>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs13
 * '<S426>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs14
 * '<S427>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs15
 * '<S428>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs16
 * '<S429>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs17
 * '<S430>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs18
 * '<S431>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs19
 * '<S432>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs2
 * '<S433>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs20
 * '<S434>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs21
 * '<S435>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs22
 * '<S436>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs23
 * '<S437>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs24
 * '<S438>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs25
 * '<S439>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs26
 * '<S440>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs27
 * '<S441>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs28
 * '<S442>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs29
 * '<S443>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs3
 * '<S444>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs30
 * '<S445>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs31
 * '<S446>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs32
 * '<S447>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs4
 * '<S448>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs5
 * '<S449>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs6
 * '<S450>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7
 * '<S451>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs8
 * '<S452>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs9
 * '<S453>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs1/NewValue
 * '<S454>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs1/OldValue
 * '<S455>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs10/NewValue
 * '<S456>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs10/OldValue
 * '<S457>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs11/NewValue
 * '<S458>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs11/OldValue
 * '<S459>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs12/NewValue
 * '<S460>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs12/OldValue
 * '<S461>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs13/NewValue
 * '<S462>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs13/OldValue
 * '<S463>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs14/NewValue
 * '<S464>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs14/OldValue
 * '<S465>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs15/NewValue
 * '<S466>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs15/OldValue
 * '<S467>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs16/NewValue
 * '<S468>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs16/OldValue
 * '<S469>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs17/NewValue
 * '<S470>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs17/OldValue
 * '<S471>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs18/NewValue
 * '<S472>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs18/OldValue
 * '<S473>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs19/NewValue
 * '<S474>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs19/OldValue
 * '<S475>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs2/NewValue
 * '<S476>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs2/OldValue
 * '<S477>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs20/NewValue
 * '<S478>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs20/OldValue
 * '<S479>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs21/NewValue
 * '<S480>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs21/OldValue
 * '<S481>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs22/NewValue
 * '<S482>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs22/OldValue
 * '<S483>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs23/NewValue
 * '<S484>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs23/OldValue
 * '<S485>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs24/NewValue
 * '<S486>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs24/OldValue
 * '<S487>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs25/NewValue
 * '<S488>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs25/OldValue
 * '<S489>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs26/NewValue
 * '<S490>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs26/OldValue
 * '<S491>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs27/NewValue
 * '<S492>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs27/OldValue
 * '<S493>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs28/NewValue
 * '<S494>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs28/OldValue
 * '<S495>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs29/NewValue
 * '<S496>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs29/OldValue
 * '<S497>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs3/NewValue
 * '<S498>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs3/OldValue
 * '<S499>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs30/NewValue
 * '<S500>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs30/OldValue
 * '<S501>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs31/NewValue
 * '<S502>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs31/OldValue
 * '<S503>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs32/NewValue
 * '<S504>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs32/OldValue
 * '<S505>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs4/NewValue
 * '<S506>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs4/OldValue
 * '<S507>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs5/NewValue
 * '<S508>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs5/OldValue
 * '<S509>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs6/NewValue
 * '<S510>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs6/OldValue
 * '<S511>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/NewValue
 * '<S512>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/OldValue
 * '<S513>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs8/NewValue
 * '<S514>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs8/OldValue
 * '<S515>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs9/NewValue
 * '<S516>' : Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs9/OldValue
 * '<S517>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1
 * '<S518>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2
 * '<S519>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3
 * '<S520>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7
 * '<S521>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/NewValue
 * '<S522>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/OldValue
 * '<S523>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/NewValue
 * '<S524>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/OldValue
 * '<S525>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/NewValue
 * '<S526>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/OldValue
 * '<S527>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/NewValue
 * '<S528>' : Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/OldValue
 * '<S529>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs
 * '<S530>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs
 * '<S531>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out
 * '<S532>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs
 * '<S533>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox
 * '<S534>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs
 * '<S535>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger
 * '<S536>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs
 * '<S537>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs
 * '<S538>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/Data Correction Motor ABS
 * '<S539>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/Shift Position Conditioner
 * '<S540>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs
 * '<S541>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1
 * '<S542>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2
 * '<S543>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3
 * '<S544>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4
 * '<S545>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5
 * '<S546>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6
 * '<S547>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7
 * '<S548>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/NewValue
 * '<S549>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/OldValue
 * '<S550>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/NewValue
 * '<S551>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/OldValue
 * '<S552>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/NewValue
 * '<S553>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/OldValue
 * '<S554>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/NewValue
 * '<S555>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/OldValue
 * '<S556>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/NewValue
 * '<S557>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/OldValue
 * '<S558>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/NewValue
 * '<S559>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/OldValue
 * '<S560>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/NewValue
 * '<S561>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/OldValue
 * '<S562>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/NewValue
 * '<S563>' : Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/OldValue
 * '<S564>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs
 * '<S565>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1
 * '<S566>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/NewValue
 * '<S567>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/OldValue
 * '<S568>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/NewValue
 * '<S569>' : Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/OldValue
 * '<S570>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs1
 * '<S571>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs2
 * '<S572>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs1/NewValue
 * '<S573>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs1/OldValue
 * '<S574>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs2/NewValue
 * '<S575>' : Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs2/OldValue
 * '<S576>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Compare To Constant
 * '<S577>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 1
 * '<S578>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 2
 * '<S579>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 3
 * '<S580>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 4
 * '<S581>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Fan Adapter
 * '<S582>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Heater Core Motion Control
 * '<S583>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Radiator Motion Control
 * '<S584>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1
 * '<S585>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10
 * '<S586>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11
 * '<S587>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12
 * '<S588>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13
 * '<S589>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14
 * '<S590>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15
 * '<S591>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2
 * '<S592>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3
 * '<S593>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4
 * '<S594>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5
 * '<S595>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6
 * '<S596>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7
 * '<S597>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8
 * '<S598>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9
 * '<S599>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 1/Time Since Enabled (With Input)4
 * '<S600>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 2/Time Since Enabled (With Input)4
 * '<S601>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 3/Time Since Enabled (With Input)4
 * '<S602>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/Delay 4/Time Since Enabled (With Input)4
 * '<S603>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/NewValue
 * '<S604>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/OldValue
 * '<S605>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/NewValue
 * '<S606>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/OldValue
 * '<S607>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/NewValue
 * '<S608>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/OldValue
 * '<S609>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/NewValue
 * '<S610>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/OldValue
 * '<S611>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/NewValue
 * '<S612>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/OldValue
 * '<S613>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/NewValue
 * '<S614>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/OldValue
 * '<S615>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/NewValue
 * '<S616>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/OldValue
 * '<S617>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/NewValue
 * '<S618>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/OldValue
 * '<S619>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/NewValue
 * '<S620>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/OldValue
 * '<S621>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/NewValue
 * '<S622>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/OldValue
 * '<S623>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/NewValue
 * '<S624>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/OldValue
 * '<S625>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/NewValue
 * '<S626>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/OldValue
 * '<S627>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/NewValue
 * '<S628>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/OldValue
 * '<S629>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/NewValue
 * '<S630>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/OldValue
 * '<S631>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/NewValue
 * '<S632>' : Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/OldValue
 * '<S633>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil1State
 * '<S634>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil2State
 * '<S635>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Coil2State1
 * '<S636>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/Compare To Constant
 * '<S637>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10
 * '<S638>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11
 * '<S639>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6
 * '<S640>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7
 * '<S641>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8
 * '<S642>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9
 * '<S643>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/NewValue
 * '<S644>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/OldValue
 * '<S645>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/NewValue
 * '<S646>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/OldValue
 * '<S647>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/NewValue
 * '<S648>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/OldValue
 * '<S649>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/NewValue
 * '<S650>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/OldValue
 * '<S651>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/NewValue
 * '<S652>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/OldValue
 * '<S653>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/NewValue
 * '<S654>' : Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/OldValue
 * '<S655>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Chart
 * '<S656>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Compare To Constant
 * '<S657>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Compare To Constant1
 * '<S658>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Compare To Constant2
 * '<S659>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Embedded MATLAB Function
 * '<S660>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Integrator
 * '<S661>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/ODO Calc
 * '<S662>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/PowerSteering
 * '<S663>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing
 * '<S664>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1
 * '<S665>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10
 * '<S666>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11
 * '<S667>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12
 * '<S668>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13
 * '<S669>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14
 * '<S670>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15
 * '<S671>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2
 * '<S672>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3
 * '<S673>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4
 * '<S674>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5
 * '<S675>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6
 * '<S676>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7
 * '<S677>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8
 * '<S678>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9
 * '<S679>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/Integrator/Saturation
 * '<S680>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/ODO Calc/ODO_CALC
 * '<S681>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20
 * '<S682>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21
 * '<S683>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22
 * '<S684>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23
 * '<S685>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24
 * '<S686>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25
 * '<S687>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26
 * '<S688>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27
 * '<S689>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28
 * '<S690>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29
 * '<S691>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30
 * '<S692>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31
 * '<S693>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32
 * '<S694>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33
 * '<S695>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34
 * '<S696>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35
 * '<S697>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36
 * '<S698>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37
 * '<S699>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38
 * '<S700>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39
 * '<S701>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40
 * '<S702>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41
 * '<S703>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42
 * '<S704>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43
 * '<S705>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44
 * '<S706>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45
 * '<S707>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/NewValue
 * '<S708>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/OldValue
 * '<S709>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/NewValue
 * '<S710>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/OldValue
 * '<S711>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/NewValue
 * '<S712>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/OldValue
 * '<S713>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/NewValue
 * '<S714>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/OldValue
 * '<S715>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/NewValue
 * '<S716>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/OldValue
 * '<S717>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/NewValue
 * '<S718>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/OldValue
 * '<S719>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/NewValue
 * '<S720>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/OldValue
 * '<S721>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/NewValue
 * '<S722>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/OldValue
 * '<S723>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/NewValue
 * '<S724>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/OldValue
 * '<S725>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/NewValue
 * '<S726>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/OldValue
 * '<S727>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/NewValue
 * '<S728>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/OldValue
 * '<S729>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/NewValue
 * '<S730>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/OldValue
 * '<S731>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/NewValue
 * '<S732>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/OldValue
 * '<S733>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/NewValue
 * '<S734>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/OldValue
 * '<S735>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/NewValue
 * '<S736>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/OldValue
 * '<S737>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/NewValue
 * '<S738>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/OldValue
 * '<S739>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/NewValue
 * '<S740>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/OldValue
 * '<S741>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/NewValue
 * '<S742>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/OldValue
 * '<S743>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/NewValue
 * '<S744>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/OldValue
 * '<S745>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/NewValue
 * '<S746>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/OldValue
 * '<S747>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/NewValue
 * '<S748>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/OldValue
 * '<S749>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/NewValue
 * '<S750>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/OldValue
 * '<S751>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/NewValue
 * '<S752>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/OldValue
 * '<S753>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/NewValue
 * '<S754>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/OldValue
 * '<S755>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/NewValue
 * '<S756>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/OldValue
 * '<S757>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/NewValue
 * '<S758>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/OldValue
 * '<S759>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/NewValue
 * '<S760>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/OldValue
 * '<S761>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/NewValue
 * '<S762>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/OldValue
 * '<S763>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/NewValue
 * '<S764>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/OldValue
 * '<S765>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/NewValue
 * '<S766>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/OldValue
 * '<S767>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/NewValue
 * '<S768>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/OldValue
 * '<S769>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/NewValue
 * '<S770>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/OldValue
 * '<S771>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/NewValue
 * '<S772>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/OldValue
 * '<S773>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/NewValue
 * '<S774>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/OldValue
 * '<S775>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/NewValue
 * '<S776>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/OldValue
 * '<S777>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/NewValue
 * '<S778>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/OldValue
 * '<S779>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/NewValue
 * '<S780>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/OldValue
 * '<S781>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/NewValue
 * '<S782>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/OldValue
 * '<S783>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/NewValue
 * '<S784>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/OldValue
 * '<S785>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/NewValue
 * '<S786>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/OldValue
 * '<S787>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/NewValue
 * '<S788>' : Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/OldValue
 * '<S789>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/ChargerState=1_Standby
 * '<S790>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1
 * '<S791>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2
 * '<S792>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3
 * '<S793>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4
 * '<S794>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5
 * '<S795>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/NewValue
 * '<S796>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/OldValue
 * '<S797>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/NewValue
 * '<S798>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/OldValue
 * '<S799>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/NewValue
 * '<S800>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/OldValue
 * '<S801>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/NewValue
 * '<S802>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/OldValue
 * '<S803>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/NewValue
 * '<S804>' : Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/OldValue
 * '<S805>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1
 * '<S806>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2
 * '<S807>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3
 * '<S808>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4
 * '<S809>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5
 * '<S810>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/NewValue
 * '<S811>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/OldValue
 * '<S812>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/NewValue
 * '<S813>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/OldValue
 * '<S814>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/NewValue
 * '<S815>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/OldValue
 * '<S816>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/NewValue
 * '<S817>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/OldValue
 * '<S818>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/NewValue
 * '<S819>' : Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/OldValue
 * '<S820>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Compare To Constant
 * '<S821>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Max InputCurrent
 * '<S822>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Max OutputCurrent
 * '<S823>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Time Since Enabled (With Input)1
 * '<S824>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs
 * '<S825>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1
 * '<S826>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10
 * '<S827>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11
 * '<S828>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12
 * '<S829>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13
 * '<S830>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14
 * '<S831>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15
 * '<S832>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16
 * '<S833>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17
 * '<S834>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2
 * '<S835>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3
 * '<S836>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4
 * '<S837>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5
 * '<S838>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6
 * '<S839>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7
 * '<S840>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8
 * '<S841>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Max InputCurrent/Time Since Enabled (With Input)1
 * '<S842>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/Max OutputCurrent/Time Since Enabled (With Input)1
 * '<S843>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/NewValue
 * '<S844>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/OldValue
 * '<S845>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/NewValue
 * '<S846>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/OldValue
 * '<S847>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/NewValue
 * '<S848>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/OldValue
 * '<S849>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/NewValue
 * '<S850>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/OldValue
 * '<S851>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/NewValue
 * '<S852>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/OldValue
 * '<S853>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/NewValue
 * '<S854>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/OldValue
 * '<S855>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/NewValue
 * '<S856>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/OldValue
 * '<S857>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/NewValue
 * '<S858>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/OldValue
 * '<S859>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/NewValue
 * '<S860>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/OldValue
 * '<S861>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/NewValue
 * '<S862>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/OldValue
 * '<S863>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/NewValue
 * '<S864>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/OldValue
 * '<S865>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/NewValue
 * '<S866>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/OldValue
 * '<S867>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/NewValue
 * '<S868>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/OldValue
 * '<S869>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/NewValue
 * '<S870>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/OldValue
 * '<S871>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/NewValue
 * '<S872>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/OldValue
 * '<S873>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/NewValue
 * '<S874>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/OldValue
 * '<S875>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/NewValue
 * '<S876>' : Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/OldValue
 * '<S877>' : Mooventure2016_Rev5/Main Power Relay1/Background
 * '<S878>' : Mooventure2016_Rev5/Main Power Relay1/Background/Delay
 * '<S879>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Boolean
 * '<S880>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call
 * '<S881>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1
 * '<S882>' : Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off
 * '<S883>' : Mooventure2016_Rev5/Main Power Relay1/Background/Processor Reboot
 * '<S884>' : Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off
 * '<S885>' : Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128
 * '<S886>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs
 * '<S887>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_restore_nvmem
 * '<S888>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_store_nvmem
 * '<S889>' : Mooventure2016_Rev5/Main Power Relay1/Background/Delay/MotoHawk S-R Flip-Flop
 * '<S890>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call/Clear
 * '<S891>' : Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1/Clear
 * '<S892>' : Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S893>' : Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S894>' : Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128
 * '<S895>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/NewValue
 * '<S896>' : Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_Mooventure2016_Rev5_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
