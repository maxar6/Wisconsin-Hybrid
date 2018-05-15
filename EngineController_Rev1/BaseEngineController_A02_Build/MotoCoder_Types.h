
/* MotoCoder_Types.h */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2018-04-22 15:56:02 */
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
    uint8_T   suspected[9];
    uint8_T   active[9];
    uint8_T   occurred[9];
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
    FAULTACTIONS_CUTTHROTTLE=0,
    FAULTACTIONS_DELAYEDENGINESHUTDOWN=1,
    FAULTACTIONS_DISABLEO2CTRL=2,
    FAULTACTIONS_ENGINESHUTDOWN=3,
    FAULTACTIONS_HARDREVLIMIT=4,
    FAULTACTIONS_MEDIUMREVLIMIT=5,
    FAULTACTIONS_SOFTREVLIMIT=6,
    FAULTACTIONS_OPENPARENNONECLOSEPAREN=7,
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
    FAULTS_CAMEDGESFAULT=0,
    FAULTS_CAMSYNCFAULT=1,
    FAULTS_EST1_OPEN=10,
    FAULTS_EST1_SHORT=11,
    FAULTS_EST2_OPEN=12,
    FAULTS_EST2_SHORT=13,
    FAULTS_ETCSPRINGTEST=14,
    FAULTS_ETC_OPEN_FAULT=15,
    FAULTS_ETC_STICKING=16,
    FAULTS_FUELADAPTRANGEHI=17,
    FAULTS_FUELADAPTRANGELOW=18,
    FAULTS_FUELPRESHIGH_FAULT=19,
    FAULTS_CRANKEDGESFAULT=2,
    FAULTS_FUELPRESLOW_FAULT=20,
    FAULTS_FUELPRESRANGEHIGH=21,
    FAULTS_FUELPRESRANGELOW=22,
    FAULTS_FUELSENSRANGEHIGH=23,
    FAULTS_FUELSENSRANGELOW=24,
    FAULTS_HARDOVERSPEED=25,
    FAULTS_IATRANGEHIGH=26,
    FAULTS_IATRANGELOW=27,
    FAULTS_INJ1OPEN=28,
    FAULTS_INJ2OPEN=29,
    FAULTS_CRANKSYNCFAULT=3,
    FAULTS_MAFRANGEHIGH=30,
    FAULTS_MAFRANGELOW=31,
    FAULTS_MAPRANGEHIGH=32,
    FAULTS_MAPRANGELOW=33,
    FAULTS_MAPTIMERANGEHIGH=34,
    FAULTS_MAPTIMERANGELOW=35,
    FAULTS_MAP_IR_HI=36,
    FAULTS_MAP_IR_LO=37,
    FAULTS_MAP_STICKING=38,
    FAULTS_MEDIUMOVERSPEED=39,
    FAULTS_ECTOVERTEMPFAULT=4,
    FAULTS_NOOIL_FAULT=40,
    FAULTS_O2FAILEDLEAN=41,
    FAULTS_O2FAILEDRICH=42,
    FAULTS_O2NOTACTIVE=43,
    FAULTS_O2_POSTCATRANGEHIGH=44,
    FAULTS_O2_POSTCATRANGELOW=45,
    FAULTS_OILPRESRANGEHIGH=46,
    FAULTS_OILPRESRANGELOW=47,
    FAULTS_SENSVOLTRANGEHIGH=48,
    FAULTS_SENSVOLTRANGELOW=49,
    FAULTS_ECTRANGEHIGH=5,
    FAULTS_SOFTOVERSPEED=50,
    FAULTS_SYSVOLTRANGEHIGH=51,
    FAULTS_SYSVOLTRANGELOW=52,
    FAULTS_TPS1ADAPTHIMAX=53,
    FAULTS_TPS1ADAPTHIMIN=54,
    FAULTS_TPS1ADAPTLOMAX=55,
    FAULTS_TPS1ADAPTLOMIN=56,
    FAULTS_TPS1RANGEHIGH=57,
    FAULTS_TPS1RANGELOW=58,
    FAULTS_TPS2ADAPTHIMAX=59,
    FAULTS_ECTRANGELOW=6,
    FAULTS_TPS2ADAPTHIMIN=60,
    FAULTS_TPS2ADAPTLOMAX=61,
    FAULTS_TPS2ADAPTLOMIN=62,
    FAULTS_TPS2RANGEHIGH=63,
    FAULTS_TPS2RANGELOW=64,
    FAULTS_TPS_SENSORS_CONFLICT=65,
    FAULTS_OPENPARENNONECLOSEPAREN=66,
    FAULTS_ECTSEVEREOVERTEMPFAULT=7,
    FAULTS_EGRSENSERANGEHIGH=8,
    FAULTS_EGRSENSERANGELOW=9,
} E_Faults;

/* VarDecEnum_0 Enumeration */
typedef enum {
    VARDECENUM_0_PASSDASHTHROUGH=0,
    VARDECENUM_0_OVERRIDE=1,
} E_VarDecEnum_0;

/* VarDecEnum_1 Enumeration */
typedef enum {
    VARDECENUM_1_RUN=0,
    VARDECENUM_1_REBOOT=1,
} E_VarDecEnum_1;

/* VarDecEnum_13 Enumeration */
typedef enum {
    VARDECENUM_13_GOVENABLED=0,
    VARDECENUM_13_GOVDISABLED=1,
} E_VarDecEnum_13;

/* VarDecEnum_17 Enumeration */
typedef enum {
    VARDECENUM_17_ETC=0,
    VARDECENUM_17_IAC=1,
} E_VarDecEnum_17;

/* VarDecEnum_2 Enumeration */
typedef enum {
    VARDECENUM_2_OFF=0,
    VARDECENUM_2_ON=1,
} E_VarDecEnum_2;

/* VarDecEnum_20 Enumeration */
typedef enum {
    VARDECENUM_20_MODELFROMMAP=0,
    VARDECENUM_20_USEMAFSENSOR=1,
} E_VarDecEnum_20;

/* VarDecEnum_21 Enumeration */
typedef enum {
    VARDECENUM_21_RATELIMITER=0,
    VARDECENUM_21_LOWPASS=1,
    VARDECENUM_21_MOVINGAVERAGE=2,
} E_VarDecEnum_21;

/* VarDecEnum_22 Enumeration */
typedef enum {
    VARDECENUM_22_ENABLE=0,
    VARDECENUM_22_CUT=1,
} E_VarDecEnum_22;

/* VarDecEnum_23 Enumeration */
typedef enum {
    VARDECENUM_23_CUTSPARK=0,
    VARDECENUM_23_CUTFUEL=1,
    VARDECENUM_23_CUTSPARKANDFUEL=2,
} E_VarDecEnum_23;

/* VarDecEnum_24 Enumeration */
typedef enum {
    VARDECENUM_24_PULSEWIDTH=0,
    VARDECENUM_24_DUTYCYCLE=1,
    VARDECENUM_24_BOTH=2,
} E_VarDecEnum_24;

/* VarDecEnum_27 Enumeration */
typedef enum {
    VARDECENUM_27_DASH=0,
    VARDECENUM_27_STALL=1,
    VARDECENUM_27_CRANK=2,
    VARDECENUM_27_RUN=3,
} E_VarDecEnum_27;

/* VarDecEnum_3 Enumeration */
typedef enum {
    VARDECENUM_3_DISABLED=0,
    VARDECENUM_3_ENABLED=1,
} E_VarDecEnum_3;

/* VarDecEnum_31 Enumeration */
typedef enum {
    VARDECENUM_31_RISINGEDGE=0,
    VARDECENUM_31_FALLINGEDGE=1,
} E_VarDecEnum_31;

/* VarDecEnum_32 Enumeration */
typedef enum {
    VARDECENUM_32_WEAKPULLUP=0,
    VARDECENUM_32_STRONGPULLUP=1,
} E_VarDecEnum_32;

/* VarDecEnum_33 Enumeration */
typedef enum {
    VARDECENUM_33_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_33_EST1=36,
    VARDECENUM_33_EST2=37,
    VARDECENUM_33_EST3=38,
    VARDECENUM_33_EST4=39,
    VARDECENUM_33_EST5=40,
    VARDECENUM_33_EST6=41,
    VARDECENUM_33_EST7=42,
    VARDECENUM_33_EST8=43,
} E_VarDecEnum_33;

/* VarDecEnum_34 Enumeration */
typedef enum {
    VARDECENUM_34_STANDARDOPENPARENCOILPERCYLINDERCLOSEPAREN=0,
    VARDECENUM_34_BANKEDOPENPARENFIREONBOTHPHASESUNTILCAMSYNCCLOSEPAREN=1,
    VARDECENUM_34_BATCHOPENPARENWASTEDSPARKCLOSEPAREN=2,
    VARDECENUM_34_MUXEDOPENPARENDISTRIBUTEDCLOSEPAREN=3,
} E_VarDecEnum_34;

/* VarDecEnum_35 Enumeration */
typedef enum {
    VARDECENUM_35_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_35_FINJ1=12,
    VARDECENUM_35_AINJ4=21,
    VARDECENUM_35_AINJ5=22,
    VARDECENUM_35_AINJ6=23,
    VARDECENUM_35_FINJ2=13,
    VARDECENUM_35_FINJ3=14,
    VARDECENUM_35_FINJ4=15,
    VARDECENUM_35_FINJ5=16,
    VARDECENUM_35_FINJ6=17,
    VARDECENUM_35_AINJ1=18,
    VARDECENUM_35_AINJ2=19,
    VARDECENUM_35_AINJ3=20,
} E_VarDecEnum_35;

/* VarDecEnum_36 Enumeration */
typedef enum {
    VARDECENUM_36_STANDARDOPENPARENINJECTORPERCYLINDERCLOSEPAREN=0,
    VARDECENUM_36_BATCHOPENPARENFIREHALFFUELONHALFOFTHEINJECTORSEVERYREVCLOSEPAREN=1,
    VARDECENUM_36_WASTEDOPENPARENFIREHALFFUELONALLINJECTORSEVERYREVCLOSEPAREN=2,
} E_VarDecEnum_36;

/* VarDecEnum_37 Enumeration */
typedef enum {
    VARDECENUM_37_STANDARD=0,
    VARDECENUM_37_TRANSIENT=1,
} E_VarDecEnum_37;

/* VarDecEnum_39 Enumeration */
typedef enum {
    VARDECENUM_39_CUTTHROTTLE=0,
    VARDECENUM_39_DELAYEDENGINESHUTDOWN=1,
    VARDECENUM_39_DISABLEO2CTRL=2,
    VARDECENUM_39_ENGINESHUTDOWN=3,
    VARDECENUM_39_HARDREVLIMIT=4,
    VARDECENUM_39_MEDIUMREVLIMIT=5,
    VARDECENUM_39_SOFTREVLIMIT=6,
} E_VarDecEnum_39;

/* VarDecEnum_4 Enumeration */
typedef enum {
    VARDECENUM_4_RUN=0,
    VARDECENUM_4_RESTORETODEFAULTS=1,
} E_VarDecEnum_4;

/* VarDecEnum_40 Enumeration */
typedef enum {
    VARDECENUM_40_DASH=0,
} E_VarDecEnum_40;

/* VarDecEnum_41 Enumeration */
typedef enum {
    VARDECENUM_41_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_41_ECUP=53,
    VARDECENUM_41_AN7M=62,
    VARDECENUM_41_AN8M=63,
    VARDECENUM_41_AN9M=64,
    VARDECENUM_41_AN10M=65,
    VARDECENUM_41_AN11M=66,
    VARDECENUM_41_AN12M=67,
    VARDECENUM_41_AN13M=68,
    VARDECENUM_41_AN14M=69,
    VARDECENUM_41_AN15M=70,
    VARDECENUM_41_AN16M=71,
    VARDECENUM_41_DRVP=54,
    VARDECENUM_41_AN17M=72,
    VARDECENUM_41_AN18M=73,
    VARDECENUM_41_AN19M=74,
    VARDECENUM_41_O2A=90,
    VARDECENUM_41_O2B=91,
    VARDECENUM_41_XDRP_B=92,
    VARDECENUM_41_XDRP=55,
    VARDECENUM_41_AN1M=56,
    VARDECENUM_41_AN2M=57,
    VARDECENUM_41_AN3M=58,
    VARDECENUM_41_AN4M=59,
    VARDECENUM_41_AN5M=60,
    VARDECENUM_41_AN6M=61,
} E_VarDecEnum_41;

/* VarDecEnum_42 Enumeration */
typedef enum {
    VARDECENUM_42_5V=0,
    VARDECENUM_42_2POINT7V=1,
} E_VarDecEnum_42;

/* VarDecEnum_43 Enumeration */
typedef enum {
    VARDECENUM_43_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_43_DG1M=93,
    VARDECENUM_43_DG2M=94,
    VARDECENUM_43_DG4M=96,
    VARDECENUM_43_CNK=100,
} E_VarDecEnum_43;

/* VarDecEnum_44 Enumeration */
typedef enum {
    VARDECENUM_44_NOALIASPROTECT=0,
    VARDECENUM_44_USEALIASPROTECT=1,
} E_VarDecEnum_44;

/* VarDecEnum_45 Enumeration */
typedef enum {
    VARDECENUM_45_DIGITALINPUT=0,
    VARDECENUM_45_VRINPUT=1,
} E_VarDecEnum_45;

/* VarDecEnum_46 Enumeration */
typedef enum {
    VARDECENUM_46_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_46_FUELP=0,
    VARDECENUM_46_FINJ3=14,
    VARDECENUM_46_FINJ4=15,
    VARDECENUM_46_FINJ5=16,
    VARDECENUM_46_FINJ6=17,
    VARDECENUM_46_AINJ1=18,
    VARDECENUM_46_AINJ2=19,
    VARDECENUM_46_AINJ3=20,
    VARDECENUM_46_AINJ4=21,
    VARDECENUM_46_AINJ5=22,
    VARDECENUM_46_AINJ6=23,
    VARDECENUM_46_HSOL1=2,
    VARDECENUM_46_TACH=24,
    VARDECENUM_46_EST1=36,
    VARDECENUM_46_EST2=37,
    VARDECENUM_46_EST3=38,
    VARDECENUM_46_EST4=39,
    VARDECENUM_46_EST5=40,
    VARDECENUM_46_EST6=41,
    VARDECENUM_46_EST7=42,
    VARDECENUM_46_EST8=43,
    VARDECENUM_46_MPRD=52,
    VARDECENUM_46_HSOL2=3,
    VARDECENUM_46_HSOL3=4,
    VARDECENUM_46_HSOL4=5,
    VARDECENUM_46_START=6,
    VARDECENUM_46_OILP=11,
    VARDECENUM_46_FINJ1=12,
    VARDECENUM_46_FINJ2=13,
} E_VarDecEnum_46;

/* VarDecEnum_47 Enumeration */
typedef enum {
    VARDECENUM_47_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_47_FUELP=0,
    VARDECENUM_47_FINJ2=13,
    VARDECENUM_47_FINJ3=14,
    VARDECENUM_47_FINJ4=15,
    VARDECENUM_47_FINJ5=16,
    VARDECENUM_47_FINJ6=17,
    VARDECENUM_47_AINJ1=18,
    VARDECENUM_47_AINJ2=19,
    VARDECENUM_47_AINJ3=20,
    VARDECENUM_47_AINJ4=21,
    VARDECENUM_47_AINJ5=22,
    VARDECENUM_47_ETC=1,
    VARDECENUM_47_AINJ6=23,
    VARDECENUM_47_TACH=24,
    VARDECENUM_47_EST1=36,
    VARDECENUM_47_EST2=37,
    VARDECENUM_47_EST3=38,
    VARDECENUM_47_EST4=39,
    VARDECENUM_47_EST5=40,
    VARDECENUM_47_EST6=41,
    VARDECENUM_47_EST7=42,
    VARDECENUM_47_EST8=43,
    VARDECENUM_47_HSOL1=2,
    VARDECENUM_47_HSOL2=3,
    VARDECENUM_47_HSOL3=4,
    VARDECENUM_47_HSOL4=5,
    VARDECENUM_47_START=6,
    VARDECENUM_47_OILP=11,
    VARDECENUM_47_FINJ1=12,
} E_VarDecEnum_47;

/* VarDecEnum_48 Enumeration */
typedef enum {
    VARDECENUM_48_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_48_HSOL1=2,
    VARDECENUM_48_EST3=38,
    VARDECENUM_48_EST4=39,
    VARDECENUM_48_EST5=40,
    VARDECENUM_48_EST6=41,
    VARDECENUM_48_EST7=42,
    VARDECENUM_48_EST8=43,
    VARDECENUM_48_HSOL2=3,
    VARDECENUM_48_HSOL3=4,
    VARDECENUM_48_HSOL4=5,
    VARDECENUM_48_START=6,
    VARDECENUM_48_OILP=11,
    VARDECENUM_48_ESC=35,
    VARDECENUM_48_EST1=36,
    VARDECENUM_48_EST2=37,
} E_VarDecEnum_48;

/* VarDecEnum_5 Enumeration */
typedef enum {
    VARDECENUM_5_RUN=0,
    VARDECENUM_5_STORETOEEPROM=1,
} E_VarDecEnum_5;

/* VarDecEnum_6 Enumeration */
typedef enum {
    VARDECENUM_6_FALSE=0,
    VARDECENUM_6_TRUE=1,
} E_VarDecEnum_6;

/* VarDecEnum_7 Enumeration */
typedef enum {
    VARDECENUM_7_UNLOCKED=0,
    VARDECENUM_7_LOCKED=1,
} E_VarDecEnum_7;

/* VarDecEnum_8 Enumeration */
typedef enum {
    VARDECENUM_8_APP1=0,
    VARDECENUM_8_NORMAL=1,
} E_VarDecEnum_8;



#endif

