
/* MotoCoder_Types.h */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2018-09-07 11:02:11 */
/* Copyright: 2018 Woodward. */


#ifndef MOTOCODER_TYPES_H
#define MOTOCODER_TYPES_H



	


/* reference_T used as a pointer to DataStorage */
#ifndef defined_reference_T
#define defined_reference_T
typedef void * reference_T;
#endif

/* struct_reference_T used as a pointer to Structure DataStorage */
#ifndef defined_struct_reference_T
#define defined_struct_reference_T
typedef void * struct_reference_T;
#endif

#ifndef defined_char_T
#define defined_char_T
typedef char                   char_T;
#endif

#ifndef defined_boolean_T
#define defined_boolean_T
typedef unsigned char          boolean_T;
#endif

#ifndef defined_int8_T
#define defined_int8_T
typedef signed char            int8_T;
#endif

#ifndef defined_uint8_T
#define defined_uint8_T
typedef unsigned char          uint8_T;
#endif

#ifndef defined_int16_T
#define defined_int16_T
typedef short                  int16_T;
#endif

#ifndef defined_uint16_T
#define defined_uint16_T
typedef unsigned short         uint16_T;
#endif

#ifndef defined_int32_T
#define defined_int32_T
typedef int                    int32_T;
#endif

#ifndef defined_uint32_T
#define defined_uint32_T
typedef unsigned int           uint32_T;
#endif

#ifndef defined_int64_T
#define defined_int64_T
typedef long long              int64_T;
#endif

#ifndef defined_uint64_T
#define defined_uint64_T
typedef unsigned long long     uint64_T;
#endif

#ifndef defined_real32_T
#define defined_real32_T
typedef float                  real32_T;
#endif

#ifndef defined_real64_T
#define defined_real64_T
typedef double                 real64_T;
#endif

#define Interrupt_Disable() DISABLE()
#define Interrupt_Enable() UNDISABLE()
    /* S_CCPDAQ structure */
typedef struct {
    uint32_T   TxID;
    uint16_T   Prescaler;
    uint8_T   DAQStatus;
    uint8_T   LastODTNumber;
    uint8_T   EventChannelNumber;
} S_CCPDAQ_T;

/* S_CCPODTItem structure */
typedef struct {
    reference_T   pData;
    uint8_T   DataSize;
} S_CCPODTItem_T;

/* S_CCPODT structure */
typedef struct {
    uint8_T   ODTSize;
    S_CCPODTItem_T   ODTList[7];
} S_CCPODT_T;

/* S_ConstFault structure */
typedef struct {
    uint16_T   mode;
    uint16_T   id;
    uint16_T   test;
    uint16_T   xlim;
    uint16_T   ylim;
    uint16_T   action1;
    uint16_T   action1_condition;
    uint16_T   action2;
    uint16_T   action2_condition;
    uint16_T   action3;
    uint16_T   action3_condition;
    uint16_T   action4;
    uint16_T   action4_condition;
} S_ConstFault_T;

/* S_Fault structure */
typedef struct {
    uint16_T   x;
    uint16_T   y;
} S_Fault_T;

/* S_FaultAction structure */
typedef struct {
    uint8_T   reference_count;
} S_FaultAction_T;

/* S_FaultManager structure */
typedef struct {
    uint8_T   suspected[10];
    uint8_T   active[10];
    uint8_T   occurred[10];
    uint8_T   last_suspected_fault;
    uint8_T   last_unsuspected_fault;
    uint8_T   last_active_fault;
    uint8_T   last_inactive_fault;
    uint8_T   last_occurred_fault;
} S_FaultManager_T;

/* S_DispFaultManager structure */
typedef struct {
    uint8_T   current_suspected_vardec;
    uint8_T   current_active_vardec;
    uint8_T   current_occurred_vardec;
} S_DispFaultManager_T;

/* S_ConstFaultManager structure */
typedef struct {
    uint8_T   num_faults;
    uint16_T   num_actions;
} S_ConstFaultManager_T;

/* FaultActions Enumeration */
typedef enum {
    FAULTACTIONS_CEL=0,
    FAULTACTIONS_CUTTHROTTLE=1,
    FAULTACTIONS_DELAYEDENGINESHUTDOWN=2,
    FAULTACTIONS_DISABLEO2CTRL=3,
    FAULTACTIONS_ENGINESHUTDOWN=4,
    FAULTACTIONS_HARDREVLIMIT=5,
    FAULTACTIONS_MEDIUMREVLIMIT=6,
    FAULTACTIONS_SOFTREVLIMIT=7,
    FAULTACTIONS_WRENCH_LIGHT=8,
    FAULTACTIONS_OPENPARENNONECLOSEPAREN=9,
} E_FaultActions;

/* FaultDisp Enumeration */
typedef enum {
    FAULTDISP_CURRENTSUSPECTED=0,
    FAULTDISP_CURRENTACTIVE=1,
    FAULTDISP_CURRENTOCCURRED=2,
} E_FaultDisp;

/* Fault_Cols Enumeration */
typedef enum {
    FAULT_COLS_MODE=0,
    FAULT_COLS_ID=1,
    FAULT_COLS_ACTION3CONDITION=10,
    FAULT_COLS_ACTION4=11,
    FAULT_COLS_ACTION4CONDITION=12,
    FAULT_COLS_TEST=2,
    FAULT_COLS_FAULTYSAMPLESOPENPARENXCLOSEPAREN=3,
    FAULT_COLS_TOTALSAMPLESOPENPARENYCLOSEPAREN=4,
    FAULT_COLS_ACTION1=5,
    FAULT_COLS_ACTION1CONDITION=6,
    FAULT_COLS_ACTION2=7,
    FAULT_COLS_ACTION2CONDITION=8,
    FAULT_COLS_ACTION3=9,
} E_Fault_Cols;

/* Fault_Command Enumeration */
typedef enum {
    FAULT_COMMAND_DASH=0,
    FAULT_COMMAND_CLEARALLFAULTS=1,
} E_Fault_Command;

/* Fault_Cond Enumeration */
typedef enum {
    FAULT_COND_OPENPARENNONECLOSEPAREN=0,
    FAULT_COND_SUSPECTED=1,
    FAULT_COND_ACTIVE=2,
    FAULT_COND_SUSPECTEDORACTIVE=3,
    FAULT_COND_OCCURRED=4,
    FAULT_COND_SUSPECTEDOROCCURRED=5,
    FAULT_COND_ACTIVEOROCCURRED=6,
    FAULT_COND_SUSPECTEDORACTIVEOROCCURRED=7,
} E_Fault_Cond;

/* Fault_Mode Enumeration */
typedef enum {
    FAULT_MODE_DISABLED=0,
    FAULT_MODE_ENABLED=1,
    FAULT_MODE_STICKY=2,
    FAULT_MODE_ENABLEDDASHPERSISTENT=3,
    FAULT_MODE_STICKYDASHPERSISTENT=4,
    FAULT_MODE_SAVEOCCURRED=5,
} E_Fault_Mode;

/* Fault_Test Enumeration */
typedef enum {
    FAULT_TEST_DASH=0,
    FAULT_TEST_TEST=1,
} E_Fault_Test;

/* Faults Enumeration */
typedef enum {
    FAULTS_CAN_TIMEOUT_112=0,
    FAULTS_CAN_TIMEOUT_PHOENIX_1=1,
    FAULTS_DRIVE_WARM=10,
    FAULTS_ECTOVERTEMPFAULT=11,
    FAULTS_ECTRANGEHIGH=12,
    FAULTS_ECTRANGELOW=13,
    FAULTS_ECTSEVEREOVERTEMPFAULT=14,
    FAULTS_EGRSENSERANGEHIGH=15,
    FAULTS_EGRSENSERANGELOW=16,
    FAULTS_EST1_OPEN=17,
    FAULTS_EST1_SHORT=18,
    FAULTS_EST2_OPEN=19,
    FAULTS_CAN_TIMEOUT_PHOENIX_2=2,
    FAULTS_EST2_SHORT=20,
    FAULTS_ETCSPRINGTEST=21,
    FAULTS_ETC_OPEN_FAULT=22,
    FAULTS_ETC_STICKING=23,
    FAULTS_FUELADAPTRANGEHI=24,
    FAULTS_FUELADAPTRANGELOW=25,
    FAULTS_FUELPRESHIGH_FAULT=26,
    FAULTS_FUELPRESLOW_FAULT=27,
    FAULTS_FUELPRESRANGEHIGH=28,
    FAULTS_FUELPRESRANGELOW=29,
    FAULTS_CAN_TIMEOUT_PHOENIX_3=3,
    FAULTS_FUELSENSRANGEHIGH=30,
    FAULTS_FUELSENSRANGELOW=31,
    FAULTS_HARDOVERSPEED=32,
    FAULTS_IATRANGEHIGH=33,
    FAULTS_IATRANGELOW=34,
    FAULTS_INJ1OPEN=35,
    FAULTS_INJ2OPEN=36,
    FAULTS_MAFRANGEHIGH=37,
    FAULTS_MAFRANGELOW=38,
    FAULTS_MAPRANGEHIGH=39,
    FAULTS_CAN_TIMEOUT_PHOENIX_4=4,
    FAULTS_MAPRANGELOW=40,
    FAULTS_MAPTIMERANGEHIGH=41,
    FAULTS_MAPTIMERANGELOW=42,
    FAULTS_MAP_IR_HI=43,
    FAULTS_MAP_IR_LO=44,
    FAULTS_MAP_STICKING=45,
    FAULTS_MEDIUMOVERSPEED=46,
    FAULTS_MOTOR_HOT=47,
    FAULTS_MOTOR_WARM=48,
    FAULTS_NOOIL_FAULT=49,
    FAULTS_CAMEDGESFAULT=5,
    FAULTS_O2FAILEDLEAN=50,
    FAULTS_O2FAILEDRICH=51,
    FAULTS_O2NOTACTIVE=52,
    FAULTS_O2_POSTCATRANGEHIGH=53,
    FAULTS_O2_POSTCATRANGELOW=54,
    FAULTS_OILPRESRANGEHIGH=55,
    FAULTS_OILPRESRANGELOW=56,
    FAULTS_SENSVOLTRANGEHIGH=57,
    FAULTS_SENSVOLTRANGELOW=58,
    FAULTS_SOFTOVERSPEED=59,
    FAULTS_CAMSYNCFAULT=6,
    FAULTS_SYSVOLTRANGEHIGH=60,
    FAULTS_SYSVOLTRANGELOW=61,
    FAULTS_TPS1ADAPTHIMAX=62,
    FAULTS_TPS1ADAPTHIMIN=63,
    FAULTS_TPS1ADAPTLOMAX=64,
    FAULTS_TPS1ADAPTLOMIN=65,
    FAULTS_TPS1RANGEHIGH=66,
    FAULTS_TPS1RANGELOW=67,
    FAULTS_TPS2ADAPTHIMAX=68,
    FAULTS_TPS2ADAPTHIMIN=69,
    FAULTS_CRANKEDGESFAULT=7,
    FAULTS_TPS2ADAPTLOMAX=70,
    FAULTS_TPS2ADAPTLOMIN=71,
    FAULTS_TPS2RANGEHIGH=72,
    FAULTS_TPS2RANGELOW=73,
    FAULTS_TPS_SENSORS_CONFLICT=74,
    FAULTS_OPENPARENNONECLOSEPAREN=75,
    FAULTS_CRANKSYNCFAULT=8,
    FAULTS_DRIVE_HOT=9,
} E_Faults;

/* VarDecEnum_1 Enumeration */
typedef enum {
    VARDECENUM_1_PASSDASHTHROUGH=0,
    VARDECENUM_1_OVERRIDE=1,
} E_VarDecEnum_1;

/* VarDecEnum_14 Enumeration */
typedef enum {
    VARDECENUM_14_GOVENABLED=0,
    VARDECENUM_14_GOVDISABLED=1,
} E_VarDecEnum_14;

/* VarDecEnum_18 Enumeration */
typedef enum {
    VARDECENUM_18_ETC=0,
    VARDECENUM_18_IAC=1,
} E_VarDecEnum_18;

/* VarDecEnum_2 Enumeration */
typedef enum {
    VARDECENUM_2_RUN=0,
    VARDECENUM_2_REBOOT=1,
} E_VarDecEnum_2;

/* VarDecEnum_21 Enumeration */
typedef enum {
    VARDECENUM_21_MODELFROMMAP=0,
    VARDECENUM_21_USEMAFSENSOR=1,
} E_VarDecEnum_21;

/* VarDecEnum_22 Enumeration */
typedef enum {
    VARDECENUM_22_RATELIMITER=0,
    VARDECENUM_22_LOWPASS=1,
    VARDECENUM_22_MOVINGAVERAGE=2,
} E_VarDecEnum_22;

/* VarDecEnum_23 Enumeration */
typedef enum {
    VARDECENUM_23_ENABLE=0,
    VARDECENUM_23_CUT=1,
} E_VarDecEnum_23;

/* VarDecEnum_24 Enumeration */
typedef enum {
    VARDECENUM_24_CUTSPARK=0,
    VARDECENUM_24_CUTFUEL=1,
    VARDECENUM_24_CUTSPARKANDFUEL=2,
} E_VarDecEnum_24;

/* VarDecEnum_25 Enumeration */
typedef enum {
    VARDECENUM_25_PULSEWIDTH=0,
    VARDECENUM_25_DUTYCYCLE=1,
    VARDECENUM_25_BOTH=2,
} E_VarDecEnum_25;

/* VarDecEnum_28 Enumeration */
typedef enum {
    VARDECENUM_28_DASH=0,
    VARDECENUM_28_STALL=1,
    VARDECENUM_28_CRANK=2,
    VARDECENUM_28_RUN=3,
} E_VarDecEnum_28;

/* VarDecEnum_3 Enumeration */
typedef enum {
    VARDECENUM_3_OFF=0,
    VARDECENUM_3_ON=1,
} E_VarDecEnum_3;

/* VarDecEnum_32 Enumeration */
typedef enum {
    VARDECENUM_32_RISINGEDGE=0,
    VARDECENUM_32_FALLINGEDGE=1,
} E_VarDecEnum_32;

/* VarDecEnum_33 Enumeration */
typedef enum {
    VARDECENUM_33_WEAKPULLUP=0,
    VARDECENUM_33_STRONGPULLUP=1,
} E_VarDecEnum_33;

/* VarDecEnum_34 Enumeration */
typedef enum {
    VARDECENUM_34_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_34_EST1=36,
    VARDECENUM_34_EST2=37,
    VARDECENUM_34_EST3=38,
    VARDECENUM_34_EST4=39,
    VARDECENUM_34_EST5=40,
    VARDECENUM_34_EST6=41,
    VARDECENUM_34_EST7=42,
    VARDECENUM_34_EST8=43,
} E_VarDecEnum_34;

/* VarDecEnum_35 Enumeration */
typedef enum {
    VARDECENUM_35_STANDARDOPENPARENCOILPERCYLINDERCLOSEPAREN=0,
    VARDECENUM_35_BANKEDOPENPARENFIREONBOTHPHASESUNTILCAMSYNCCLOSEPAREN=1,
    VARDECENUM_35_BATCHOPENPARENWASTEDSPARKCLOSEPAREN=2,
    VARDECENUM_35_MUXEDOPENPARENDISTRIBUTEDCLOSEPAREN=3,
} E_VarDecEnum_35;

/* VarDecEnum_36 Enumeration */
typedef enum {
    VARDECENUM_36_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_36_FINJ1=12,
    VARDECENUM_36_AINJ4=21,
    VARDECENUM_36_AINJ5=22,
    VARDECENUM_36_AINJ6=23,
    VARDECENUM_36_FINJ2=13,
    VARDECENUM_36_FINJ3=14,
    VARDECENUM_36_FINJ4=15,
    VARDECENUM_36_FINJ5=16,
    VARDECENUM_36_FINJ6=17,
    VARDECENUM_36_AINJ1=18,
    VARDECENUM_36_AINJ2=19,
    VARDECENUM_36_AINJ3=20,
} E_VarDecEnum_36;

/* VarDecEnum_37 Enumeration */
typedef enum {
    VARDECENUM_37_STANDARDOPENPARENINJECTORPERCYLINDERCLOSEPAREN=0,
    VARDECENUM_37_BATCHOPENPARENFIREHALFFUELONHALFOFTHEINJECTORSEVERYREVCLOSEPAREN=1,
    VARDECENUM_37_WASTEDOPENPARENFIREHALFFUELONALLINJECTORSEVERYREVCLOSEPAREN=2,
} E_VarDecEnum_37;

/* VarDecEnum_38 Enumeration */
typedef enum {
    VARDECENUM_38_STANDARD=0,
    VARDECENUM_38_TRANSIENT=1,
} E_VarDecEnum_38;

/* VarDecEnum_4 Enumeration */
typedef enum {
    VARDECENUM_4_DISABLED=0,
    VARDECENUM_4_ENABLED=1,
} E_VarDecEnum_4;

/* VarDecEnum_40 Enumeration */
typedef enum {
    VARDECENUM_40_CEL=0,
    VARDECENUM_40_CUTTHROTTLE=1,
    VARDECENUM_40_DELAYEDENGINESHUTDOWN=2,
    VARDECENUM_40_DISABLEO2CTRL=3,
    VARDECENUM_40_ENGINESHUTDOWN=4,
    VARDECENUM_40_HARDREVLIMIT=5,
    VARDECENUM_40_MEDIUMREVLIMIT=6,
    VARDECENUM_40_SOFTREVLIMIT=7,
    VARDECENUM_40_WRENCH_LIGHT=8,
} E_VarDecEnum_40;

/* VarDecEnum_41 Enumeration */
typedef enum {
    VARDECENUM_41_DASH=0,
} E_VarDecEnum_41;

/* VarDecEnum_42 Enumeration */
typedef enum {
    VARDECENUM_42_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_42_ECUP=53,
    VARDECENUM_42_AN7M=62,
    VARDECENUM_42_AN8M=63,
    VARDECENUM_42_AN9M=64,
    VARDECENUM_42_AN10M=65,
    VARDECENUM_42_AN11M=66,
    VARDECENUM_42_AN12M=67,
    VARDECENUM_42_AN13M=68,
    VARDECENUM_42_AN14M=69,
    VARDECENUM_42_AN15M=70,
    VARDECENUM_42_AN16M=71,
    VARDECENUM_42_DRVP=54,
    VARDECENUM_42_AN17M=72,
    VARDECENUM_42_AN18M=73,
    VARDECENUM_42_AN19M=74,
    VARDECENUM_42_O2A=90,
    VARDECENUM_42_O2B=91,
    VARDECENUM_42_XDRP_B=92,
    VARDECENUM_42_XDRP=55,
    VARDECENUM_42_AN1M=56,
    VARDECENUM_42_AN2M=57,
    VARDECENUM_42_AN3M=58,
    VARDECENUM_42_AN4M=59,
    VARDECENUM_42_AN5M=60,
    VARDECENUM_42_AN6M=61,
} E_VarDecEnum_42;

/* VarDecEnum_43 Enumeration */
typedef enum {
    VARDECENUM_43_5V=0,
    VARDECENUM_43_2POINT7V=1,
} E_VarDecEnum_43;

/* VarDecEnum_44 Enumeration */
typedef enum {
    VARDECENUM_44_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_44_DG1M=93,
    VARDECENUM_44_DG2M=94,
    VARDECENUM_44_DG4M=96,
    VARDECENUM_44_CNK=100,
} E_VarDecEnum_44;

/* VarDecEnum_45 Enumeration */
typedef enum {
    VARDECENUM_45_NOALIASPROTECT=0,
    VARDECENUM_45_USEALIASPROTECT=1,
} E_VarDecEnum_45;

/* VarDecEnum_46 Enumeration */
typedef enum {
    VARDECENUM_46_DIGITALINPUT=0,
    VARDECENUM_46_VRINPUT=1,
} E_VarDecEnum_46;

/* VarDecEnum_47 Enumeration */
typedef enum {
    VARDECENUM_47_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_47_FUELP=0,
    VARDECENUM_47_FINJ3=14,
    VARDECENUM_47_FINJ4=15,
    VARDECENUM_47_FINJ5=16,
    VARDECENUM_47_FINJ6=17,
    VARDECENUM_47_AINJ1=18,
    VARDECENUM_47_AINJ2=19,
    VARDECENUM_47_AINJ3=20,
    VARDECENUM_47_AINJ4=21,
    VARDECENUM_47_AINJ5=22,
    VARDECENUM_47_AINJ6=23,
    VARDECENUM_47_HSOL1=2,
    VARDECENUM_47_TACH=24,
    VARDECENUM_47_EST1=36,
    VARDECENUM_47_EST2=37,
    VARDECENUM_47_EST3=38,
    VARDECENUM_47_EST4=39,
    VARDECENUM_47_EST5=40,
    VARDECENUM_47_EST6=41,
    VARDECENUM_47_EST7=42,
    VARDECENUM_47_EST8=43,
    VARDECENUM_47_MPRD=52,
    VARDECENUM_47_HSOL2=3,
    VARDECENUM_47_HSOL3=4,
    VARDECENUM_47_HSOL4=5,
    VARDECENUM_47_START=6,
    VARDECENUM_47_OILP=11,
    VARDECENUM_47_FINJ1=12,
    VARDECENUM_47_FINJ2=13,
} E_VarDecEnum_47;

/* VarDecEnum_48 Enumeration */
typedef enum {
    VARDECENUM_48_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_48_FUELP=0,
    VARDECENUM_48_FINJ2=13,
    VARDECENUM_48_FINJ3=14,
    VARDECENUM_48_FINJ4=15,
    VARDECENUM_48_FINJ5=16,
    VARDECENUM_48_FINJ6=17,
    VARDECENUM_48_AINJ1=18,
    VARDECENUM_48_AINJ2=19,
    VARDECENUM_48_AINJ3=20,
    VARDECENUM_48_AINJ4=21,
    VARDECENUM_48_AINJ5=22,
    VARDECENUM_48_ETC=1,
    VARDECENUM_48_AINJ6=23,
    VARDECENUM_48_TACH=24,
    VARDECENUM_48_EST1=36,
    VARDECENUM_48_EST2=37,
    VARDECENUM_48_EST3=38,
    VARDECENUM_48_EST4=39,
    VARDECENUM_48_EST5=40,
    VARDECENUM_48_EST6=41,
    VARDECENUM_48_EST7=42,
    VARDECENUM_48_EST8=43,
    VARDECENUM_48_HSOL1=2,
    VARDECENUM_48_HSOL2=3,
    VARDECENUM_48_HSOL3=4,
    VARDECENUM_48_HSOL4=5,
    VARDECENUM_48_START=6,
    VARDECENUM_48_OILP=11,
    VARDECENUM_48_FINJ1=12,
} E_VarDecEnum_48;

/* VarDecEnum_49 Enumeration */
typedef enum {
    VARDECENUM_49_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_49_HSOL1=2,
    VARDECENUM_49_EST3=38,
    VARDECENUM_49_EST4=39,
    VARDECENUM_49_EST5=40,
    VARDECENUM_49_EST6=41,
    VARDECENUM_49_EST7=42,
    VARDECENUM_49_EST8=43,
    VARDECENUM_49_HSOL2=3,
    VARDECENUM_49_HSOL3=4,
    VARDECENUM_49_HSOL4=5,
    VARDECENUM_49_START=6,
    VARDECENUM_49_OILP=11,
    VARDECENUM_49_ESC=35,
    VARDECENUM_49_EST1=36,
    VARDECENUM_49_EST2=37,
} E_VarDecEnum_49;

/* VarDecEnum_5 Enumeration */
typedef enum {
    VARDECENUM_5_RUN=0,
    VARDECENUM_5_RESTORETODEFAULTS=1,
} E_VarDecEnum_5;

/* VarDecEnum_6 Enumeration */
typedef enum {
    VARDECENUM_6_RUN=0,
    VARDECENUM_6_STORETOEEPROM=1,
} E_VarDecEnum_6;

/* VarDecEnum_7 Enumeration */
typedef enum {
    VARDECENUM_7_FALSE=0,
    VARDECENUM_7_TRUE=1,
} E_VarDecEnum_7;

/* VarDecEnum_8 Enumeration */
typedef enum {
    VARDECENUM_8_UNLOCKED=0,
    VARDECENUM_8_LOCKED=1,
} E_VarDecEnum_8;

/* VarDecEnum_9 Enumeration */
typedef enum {
    VARDECENUM_9_APP1=0,
    VARDECENUM_9_NORMAL=1,
} E_VarDecEnum_9;



#endif

