#ifndef APPLICATION_MONITOR_H
#define APPLICATION_MONITOR_H
#include "typedefn.h"

/* Name: E_ApplicationMonitorEnable ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  APP_MONITOR_DISABLED = 0,            /* EnumTxt:"Disabled" */
  APP_MONITOR_ENABLED = 1,             /* EnumTxt:"Enabled" */
} E_ApplicationMonitorEnable;

/* Name: E_ApplicationStatus ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  APPLICATION_INIT = 0,                /* EnumTxt:"Initializing" */
  APPLICATION_RUN = 1,                 /* EnumTxt:"Run" */
  APPLICATION_PAUSE = 2,               /* EnumTxt:"Pause" */
  APPLICATION_STOP = 3,                /* EnumTxt:"Stop" */
} E_ApplicationStatus;

extern E_ApplicationStatus ApplicationStatus;

/* Name: E_ApplicationStopReason ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  APP_STOP_OK = 0,                     /* EnumTxt:"Running normally" */
  APP_USER_DEFINED = 1,                /* EnumTxt:"Requested by user" */
  APP_USER_2 = 2,                      /* EnumTxt:"Foreground stack margin violation" */
  APP_USER_3 = 3,                      /* EnumTxt:"Background stack margin violation" */
  APP_USER_4 = 4,                      /* EnumTxt:"Idle stack margin violation" */
  APP_USER_5 = 5,                      /* EnumTxt:"Interrupt stack margin violation" */
  APP_USER_6 = 6,                      /* EnumTxt:"Heap margin violation" */
  APP_USER_7 = 7,                      /* EnumTxt:"Idle CPU margin violation" */
  APP_USER_8 = 8,                      /* EnumTxt:"OS error detected" */
} E_ApplicationStopReason;

extern uint32_T ApplicationStopReason;

/* Name: E_ApplicationStopReasonBlock ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  APP_STOP_OK_BLK = 0,                 /* EnumTxt:"-" */
  APP_USER_DEFINED_BLK = 1,            /* EnumTxt:"-" */
  APP_USER_2_BLK = 2,                  /* EnumTxt:"Application Monitor" */
  APP_USER_3_BLK = 3,                  /* EnumTxt:"Application Monitor" */
  APP_USER_4_BLK = 4,                  /* EnumTxt:"Application Monitor" */
  APP_USER_5_BLK = 5,                  /* EnumTxt:"Application Monitor" */
  APP_USER_6_BLK = 6,                  /* EnumTxt:"Application Monitor" */
  APP_USER_7_BLK = 7,                  /* EnumTxt:"Application Monitor" */
  APP_USER_8_BLK = 8,                  /* EnumTxt:"Application Monitor" */
} E_ApplicationStopReasonBlock;

extern uint32_T ApplicationStopReasonBlock;

/* Name: E_ApplicationInitStatus ClassID:ENUMDEC EnumDflt:"Unknown" */
typedef enum {
  APP_INIT_BEFORE_MODEL = 0,           /* EnumTxt:"Before Model Initialize" */
  APP_INIT_BEFORE_STARTUP = 1,         /* EnumTxt:"After Model Init - Before STARTUP Event" */
  APP_INIT_AFTER_STARTUP = 2,          /* EnumTxt:"After STARTUP Event - Before Run" */
  APP_INIT_RUN = 3,                    /* EnumTxt:"Run" */
} E_ApplicationInitStatus;

extern int32_T SHUTDOWN_EVENT_RunCnt;
extern int32_T STARTUP_EVENT_RunCnt;
extern int32_T BGND_BASEx20_PERIODIC_RunCnt;
extern int32_T FGND_RTI_PERIODIC_RunCnt;
extern int32_T FGND_2XRTI_PERIODIC_RunCnt;
extern int32_T FGND_10XRTI_PERIODIC_RunCnt;
extern int32_T FGND_20XRTI_PERIODIC_RunCnt;
extern int32_T BGND_BASEx2_PERIODIC_RunCnt;
extern int32_T BGND_BASEx10_PERIODIC_RunCnt;
extern int32_T ONE_SECOND_EVENT_RunCnt;
extern int32_T IDLE_EVENT_RunCnt;
extern int32_T BGND_BASE_PERIODIC_RunCnt;
extern void StepApplicationStartup(void);
extern E_ApplicationInitStatus ApplicationInitStatus;
extern E_ApplicationStatus ApplicationStatus;
extern uint1 prevOSInternalErrorCnt;
extern uint1 idleCpuSeenNonZero;

#endif
