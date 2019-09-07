/*
 * MotoHawk_IO.h
 *
 */

#ifndef MOTOHAWK_IO_H
#define MOTOHAWK_IO_H
#include "CommonInclude.h"

/* S-Function Block: <S367>/motohawk_ain5 Resource: ECUP */
NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S ECUP_AnalogInput_Create(void);

/* S-Function Block: <S367>/motohawk_dout Resource: MPRD */
extern NativeError_S DOut3445p0009_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut3445p0009_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut3445p0009_DiscreteOutput_Create(void);

/* S-Function Block: <S22>/motohawk_dout1 Resource: LSD9 */
extern NativeError_S DOut178p0011_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut178p0011_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut178p0011_DiscreteOutput_Create(void);

/* S-Function Block: <S22>/motohawk_pwm2 Resource: Fan_Pin_PWMOutput */
void Fan_Pin_PWMOutput_PWMOutput_Create(void);
void Fan_Pin_PWMOutput_PWMOutput_Set(uint32_T freq, int16_T duty, boolean_T
  brake, boolean_T enable);
void Fan_Pin_PWMOutput_PWMOutput_Stop(void);

/* S-Function Block: <S22>/motohawk_dout2 Resource: LSD7 */
extern NativeError_S DOut179p0011_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut179p0011_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut179p0011_DiscreteOutput_Create(void);

/* S-Function Block: <S22>/motohawk_dout3 Resource: LSD10 */
extern NativeError_S DOut180p0011_DiscreteOutput_Set(boolean_T in);
extern NativeError_S DOut180p0011_DiscreteOutputPushPull_Set(int8_T in);
extern NativeError_S DOut180p0011_DiscreteOutput_Create(void);

/* S-Function Block: <S20>/motohawk_din Resource: EStop_Switch_Pin */
NativeError_S EStop_Switch_Pin_DigitalInput_Get(boolean_T *out, uint16_T *status);
NativeError_S EStop_Switch_Pin_DigitalInput_Create(void);

/* S-Function Block: <S20>/motohawk_ain2 Resource: Reverse_Switch_Pin */
NativeError_S Reverse_Switch_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S Reverse_Switch_Pin_AnalogInput_Create(void);

/* S-Function Block: <S20>/motohawk_ain Resource: Accel_Pedal_Pin */
NativeError_S Accel_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S Accel_Pedal_Pin_AnalogInput_Create(void);

/* S-Function Block: <S20>/motohawk_ain1 Resource: Brake_Pedal_Pin */
NativeError_S Brake_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S Brake_Pedal_Pin_AnalogInput_Create(void);

/* S-Function Block: <S20>/motohawk_ain5 Resource: LV_Voltage_Pin */
NativeError_S LV_Voltage_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
NativeError_S LV_Voltage_Pin_AnalogInput_Create(void);

#define VDOGAUGE_PID_BROADCAST         (0)
#define VDOGAUGE_PID_TACHOMETER        (1)
#define VDOGAUGE_PID_COOLANT_TEMP      (2)
#define VDOGAUGE_PID_FUEL_TANK_1_LEVEL (3)
#define VDOGAUGE_PID_OIL_TEMP          (4)
#define VDOGAUGE_PID_OIL_TANK_LEVEL    (5)
#define VDOGAUGE_PID_OIL_PRESS         (6)
#define VDOGAUGE_PID_BLOCK_PRESS       (7)
#define VDOGAUGE_PID_FUEL_FLOW         (8)
#define VDOGAUGE_PID_BATT_VOLT         (9)
#define VDOGAUGE_PID_VEHICLE_SPEED     (10)
#define VDOGAUGE_PID_STEERING_ANGLE    (11)
#define VDOGAUGE_PID_TRIM_POSITION     (12)
#define VDOGAUGE_PID_FRESHWATER_LEVEL  (13)
#define VDOGAUGE_PID_WASTE_WATER_LEVEL (14)
#define VDOGAUGE_PID_FUEL_TANK_2_LEVEL (15)
#define VDOGAUGE_PID_FUEL_PRESS        (16)
#define VDOGAUGE_PID_RPM_SYNC          (17)
#define VDOGAUGE_PID_OIL_TEMP_GEAR     (18)
#define VDOGAUGE_PID_EXHAUST_TEMP      (19)
#define VDOGAUGE_PID_FRESHWATER_PRESS  (20)
#define VDOGAUGE_PID_SEAWATER_PRESS    (21)
#define VDOGAUGE_PID_BOOST_PRESS       (22)
#define VDOGAUGE_PID_OIL_PRESS_GEAR    (23)
#define VDOGAUGE_PID_LOAD              (24)
#define VDOGAUGE_PID_FWD_REAR_AXLE_TEMP (25)
#define VDOGAUGE_PID_REAR_REAR_AXLE_TEMP (26)
#define VDOGAUGE_PID_BOOST_INLET_TEMP_A (27)
#define VDOGAUGE_PID_BOOST_INLET_TEMP_B (28)
#define VDOGAUGE_PID_BREAK_PRESS_1     (29)
#define VDOGAUGE_PID_SEAWATER_TEMP     (30)
#define VDOGAUGE_PID_SEA_DEPTH         (31)
#define VDOGAUGE_PID_UNITLESS_SPEED    (32)
#define VDOGAUGE_PID_TRIM_NMEA_2000    (33)
#define VDOGAUGE_PID_LED_ALARM         (100)
#define VDOGAUGE_PID_ENGINE_HOUR_LCD   (101)
#define VDOGAUGE_PID_DRIVE_ANGLE       (102)
#define VDOGAUGE_PID_STAR_TAB_ANGLE    (103)
#define VDOGAUGE_PID_PORT_TAB_ANGLE    (104)
#define VDOGAUGE_PID_GEAR_DISPLAY      (105)
#define VDOGAUGE_PID_CENTER_TAB_ANGLE  (106)
#define VDOGAUGE_OEM_VDO               0x00
#define VDOGAUGE_OEM_MERC              0x10
#define VDOGAUGE_SELECTED_OEM          VDOGAUGE_OEM_MERC
#define VDOGAUGE_COMM_PARAM            0x01
#define VDOGAUGE_COMM_ILL              0x02
#define VDOGAUGE_COMM_STEPPER_ZERO     0x03

/* Name: E_VDOGaugeBrightness ClassID:ENUMDEC EnumDflt:"Illegal" */
typedef enum {
  VDOGAUGE_ILLUM_0_PCENT,              /* EnumTxt:"0%" */
  VDOGAUGE_ILLUM_14_PCENT,             /* EnumTxt:"14%" */
  VDOGAUGE_ILLUM_28_PCENT,             /* EnumTxt:"28%" */
  VDOGAUGE_ILLUM_43_PCENT,             /* EnumTxt:"43%" */
  VDOGAUGE_ILLUM_57_PCENT,             /* EnumTxt:"57%" */
  VDOGAUGE_ILLUM_71_PCENT,             /* EnumTxt:"71%" */
  VDOGAUGE_ILLUM_86_PCENT,             /* EnumTxt:"86%" */
  VDOGAUGE_ILLUM_100_PCENT             /* EnumTxt:"100%" */
} E_VDOGaugeBrightness;

/* Name: E_VDOGaugeMessage ClassID:ENUMDEC EnumDflt:"Illegal" */
typedef enum E_VDOGaugeMessage
{
  VDOGAUGE_TACHOMETER,                 /* EnumTxt:"Tachometer"*/
  VDOGAUGE_COOLANT_TEMP,               /* EnumTxt:"Coolant Temp"*/
  VDOGAUGE_FUEL_TANK_1_LEVEL,          /* EnumTxt:"Fuel1 Level"*/
  VDOGAUGE_OIL_TEMP,                   /* EnumTxt:"Oil Temp"*/
  VDOGAUGE_OIL_TANK_LEVEL,             /* EnumTxt:"Oil Level"*/
  VDOGAUGE_OIL_PRESS,                  /* EnumTxt:"Oil Press"*/
  VDOGAUGE_BLOCK_PRESS,                /* EnumTxt:"Block Press"*/
  VDOGAUGE_FUEL_FLOW,                  /* EnumTxt:"Fuel Flow"*/
  VDOGAUGE_BATT_VOLT,                  /* EnumTxt:"Battery Volt"*/
  VDOGAUGE_VEHICLE_SPEED,              /* EnumTxt:"Vehicle Speed"*/
  VDOGAUGE_STEERING_ANGLE,             /* EnumTxt:"Steering Angle"*/
  VDOGAUGE_TRIM_POSITION,              /* EnumTxt:"Trim Position"*/
  VDOGAUGE_FRESHWATER_LEVEL,           /* EnumTxt:"Fresh Water Level"*/
  VDOGAUGE_WASTE_WATER_LEVEL,          /* EnumTxt:"Waste Water Level"*/
  VDOGAUGE_FUEL_TANK_2_LEVEL,          /* EnumTxt:"Fuel2 Level"*/
  VDOGAUGE_FUEL_PRESS,                 /* EnumTxt:"Fuel Press"*/
  VDOGAUGE_RPM_SYNC,                   /* EnumTxt:"RPM Sync"*/
  VDOGAUGE_OIL_TEMP_GEAR,              /* EnumTxt:"Oil Temp Gear" */
  VDOGAUGE_EXHAUST_TEMP,               /* EnumTxt:"Exhaust Temp" */
  VDOGAUGE_FRESHWATER_PRESS,           /* EnumTxt:"Freshwater Press" */
  VDOGAUGE_SEAWATER_PRESS,             /* EnumTxt:"Seawater Press" */
  VDOGAUGE_BOOST_PRESS,                /* EnumTxt:"Boost Press" */
  VDOGAUGE_OIL_PRESS_GEAR,             /* EnumTxt:"Gear Oil Press" */
  VDOGAUGE_LOAD,                       /* EnumTxt:"Load" */
  VDOGAUGE_FWD_REAR_AXLE_TEMP,         /* EnumTxt:"FWD Rear Axle Temp" */
  VDOGAUGE_REAR_REAR_AXLE_TEMP,        /* EnumTxt:"REAR Rear Axle Temp" */
  VDOGAUGE_BOOST_INLET_TEMP_A,         /* EnumTxt:"Boost Inlet Temp A" */
  VDOGAUGE_BOOST_INLET_TEMP_B,         /* EnumTxt:"Boost Inlet Temp B" */
  VDOGAUGE_BREAK_PRESS_1,              /* EnumTxt:"Break Press 1" */
  VDOGAUGE_SEAWATER_TEMP,              /* EnumTxt:"Seawater Temp" */
  VDOGAUGE_SEA_DEPTH,                  /* EnumTxt:"Depth" */
  VDOGAUGE_UNITLESS_SPEED,             /* EnumTxt:"Unitless Speed" */
  VDOGAUGE_TRIM_NMEA_2000,             /* EnumTxt:"Trim NMEA2000" */
  VDOGAUGE_LED_ALARM,                  /* EnumTxt:"LED Alarm" */
  VDOGAUGE_ENGINE_HOUR_LCD,            /* EnumTxt:"Engine Hour" */
  VDOGAUGE_DRIVE_ANGLE,                /* EnumTxt:"Drive Angle" */
  VDOGAUGE_STAR_TAB_ANGLE,             /* EnumTxt:"Starboard Tab Angle" */
  VDOGAUGE_PORT_TAB_ANGLE,             /* EnumTxt:"Port Tab Angle" */
  VDOGAUGE_GEAR_DISPLAY,               /* EnumTxt:"Gear" */
  VDOGAUGE_CENTER_TAB_ANGLE,           /* EnumTxt:"Center Tab Angle" */
  VDOGAUGE_ILLUMINATION,               /* EnumTxt:"Illumination"*/
  VDOGAUGE_RESET,                      /* EnumTxt:"Reset"*/
  NUM_VDOGAUGE_MESSAGES
} E_VDOGaugeMessage;

typedef enum E_VDOGaugePriority
{
  VDOGAUGE_PRIORITY_NONE = 0,
  VDOGAUGE_PRIORITY_LOW = 1,
  VDOGAUGE_PRIORITY_MED = 2,
  VDOGAUGE_PRIORITY_HIGH = 3,
} E_VDOGaugePriority;

/* Name: E_VDOGauge_LEDAlarm_State ClassID:ENUMDEC EnumDflt:"Illegal" */
typedef enum E_VDOGauge_LEDAlarm_State
{
  VDOGAUGE_LEDALARM_OFF,               /* EnumTxt:"Off" */
  VDOGAUGE_LEDALARM_ON,                /* EnumTxt:"On" */
  VDOGAUGE_LEDALARM_BLINK,             /* EnumTxt:"Blink" */
} E_VDOGauge_LEDAlarm_State;

/* Name: E_VDOGauge_LEDAlarm_Source ClassID:ENUMDEC EnumDflt:"Illegal" */
typedef enum E_VDOGauge_LEDAlarm_Source
{
  VDOGAUGE_LEDALARM_SOURCE_OIL = 0,    /* EnumTxt:"Oil" */
  VDOGAUGE_LEDALARM_SOURCE_ENGINE_CAUTION = 1,/* EnumTxt:"Engine Caution" */
  VDOGAUGE_LEDALARM_SOURCE_ENGINE_WARNING = 2,/* EnumTxt:"Engine Warning" */
  VDOGAUGE_LEDALARM_SOURCE_DATA = 3,   /* EnumTxt:"Data" */
  VDOGAUGE_LEDALARM_SOURCE_FUEL = 4,   /* EnumTxt:"Fuel" */
  VDOGAUGE_LEDALARM_SOURCE_VOLT = 5,   /* EnumTxt:"Voltage" */
  VDOGAUGE_LEDALARM_SOURCE_TEMP = 6,   /* EnumTxt:"Temperature" */
  VDOGAUGE_LEDALARM_SOURCE_PRESS = 7,  /* EnumTxt:"Pressure" */
  NUM_VDOGAUGE_LEDALARM_SOURCES = 8,
} E_VDOGauge_LEDAlarm_Source;

#define VDOGauge_LEDAlarm_Source_State_u8ORSETMask_Get(in_eSource, in_eState) ((in_eState == VDOGAUGE_LEDALARM_BLINK) ? (0x01 << in_eSource) : (0x00 << in_eSource))
#define VDOGauge_LEDAlarm_Source_Enable_u8ORSETMask_Get(in_eSource, in_eState) ((in_eState == VDOGAUGE_LEDALARM_OFF) ? (0x00 << in_eSource) : (0x01 << in_eSource))
#define VDOGauge_LEDAlarm_Source_u16Mask_Get(in_eSource, in_eState) ((VDOGauge_LEDAlarm_Source_State_u8ORSETMask_Get(in_eSource, in_eState) << 8) | (VDOGauge_LEDAlarm_Source_Enable_u8ORSETMask_Get(in_eSource, in_eState)) )
#define VDOGauge_LEDAlarm_Value_Get(OilState, EngineCautionState, EngineWarningState, DataState, FuelState, VoltState, PressState, TempState) ( VDOGauge_LEDAlarm_Source_u16Mask_Get(VDOGAUGE_LEDALARM_SOURCE_OIL, OilState) | VDOGauge_LEDAlarm_Source_u16Mask_Get(VDOGAUGE_LEDALARM_SOURCE_ENGINE_CAUTION, EngineCautionState) | VDOGauge_LEDAlarm_Source_u16Mask_Get(VDOGAUGE_LEDALARM_SOURCE_ENGINE_WARNING, EngineWarningState) | VDOGauge_LEDAlarm_Source_u16Mask_Get(VDOGAUGE_LEDALARM_SOURCE_DATA, DataState) | VDOGauge_LEDAlarm_Source_u16Mask_Get(VDOGAUGE_LEDALARM_SOURCE_FUEL, FuelState) | VDOGauge_LEDAlarm_Source_u16Mask_Get(VDOGAUGE_LEDALARM_SOURCE_VOLT, VoltState) | VDOGauge_LEDAlarm_Source_u16Mask_Get(VDOGAUGE_LEDALARM_SOURCE_PRESS, PressState) | VDOGauge_LEDAlarm_Source_u16Mask_Get(VDOGAUGE_LEDALARM_SOURCE_TEMP, TempState) )

void GaugeChain_EZLinkOutput_Create(void);
extern NativeError_S VDOGaugeService_GaugeChain_GaugeData_Write
  (E_VDOGaugeMessage in_eMessage, int16_T in_s16Data, E_VDOGaugePriority
   in_ePriority);
extern NativeError_S VDOGaugeService_GaugeChain_Illumination_Set
  (E_VDOGaugeBrightness in_eLevel);
extern NativeError_S VDOGaugeService_GaugeChain_Reset(void);

#endif
