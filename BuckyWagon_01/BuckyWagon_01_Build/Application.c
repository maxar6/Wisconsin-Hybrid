/*
 * Application.c
 *
 */

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "Application.h"
#include "BuckyWagon_01.h"

/*---- DEFINES --------------------------------------------------------------------------------------------*/
#define DLL_NAME                       "BuckyWago_190"
#define SRZ_NAME                       "BuckyWagon_01_190"
#define MODEL_NAME                     "BuckyWagon_01"
#define MODEL_GUID                     "3c32a120-d49a-4164-87-fe-ac-4b-55-ed-6f"
#define BUILD_GUID                     "11aa7585-78d1-4f6a-92-71-ad-e2-c4-8e-af"
#define TOKEN_GUID                     "DD8AD11F95A6FC42BFF9AC780840E4B4"
#define MOTOHAWK_VERSION               "MotoHawk 2011a_sp0.184"
#define MATLAB_VERSION                 "MATLAB 7.12.0"
#define COMPILER_VERSION               "gcc-powerpc-eabi 4.4.0"

/*---- TYPEDEF --------------------------------------------------------------------------------------------*/

/*---- FUNCTION PROTOTYPES --------------------------------------------------------------------------------*/
void ApplicationCallback(E_ExecutionEvent in_eEvent);
void OpenApplication(E_OpenEventType open_type);

/*---- CONSTANTS ------------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_rosdata_constants.h>

/* Name: SwIdTxt CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:13
   Struct:SwIdTxt[0] Group:"System | Version" Help:"Software Format ID" */
const uint1 SwIdTxt[13] __SECTION_ROSDATA_CONSTANTS__ = DLL_NAME;

/* Name: SwRevisionTxt CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:50
   Struct:SwRevisionTxt[0] Group:"System | Version" Help:"Software Revision ID" */
const uint1 SwRevisionTxt[50] __SECTION_ROSDATA_CONSTANTS__ = SRZ_NAME;

/* Name: table_0_rev CType:uint1 ClassID:VAR StorageID:CODE Access:RO4+RO3+RO2+RO1 TypeID:UINT1 Gain:1 Min:0
   Struct:Table0Rev_cu1 Max:255 Format:3.0 UpdateID:ONCE Struct:Table0Rev_cu1 Group:"System | Version" Help:"VarDec Table0 Revision Number" */
const uint1 Table0Rev_cu1 __SECTION_ROSDATA_CONSTANTS__ = 9;

/* Name: table_1_rev CType:uint1 ClassID:VAR StorageID:CODE Access:RO4+RO3+RO2+RO1 TypeID:UINT1 Gain:1 Min:0
   Struct:Table1Rev_cu1 Max:255 Format:3.0 UpdateID:ONCE Struct:Table1Rev_cu1 Group:"System | Version" Help:"VarDec Table1 Revision Number" */
const uint1 Table1Rev_cu1 __SECTION_ROSDATA_CONSTANTS__ = 1;

/* Name: table_2_rev CType:uint1 ClassID:VAR StorageID:CODE Access:RO4+RO3+RO2+RO1 TypeID:UINT1 Gain:1 Min:0
   Struct:Table2Rev_cu1 Max:255 Format:3.0 UpdateID:ONCE Struct:Table2Rev_cu1 Group:"System | Version" Help:"VarDec Table2 Revision Number" */
const uint1 Table2Rev_cu1 __SECTION_ROSDATA_CONSTANTS__ = 1;

/* Name: table_3_rev CType:uint1 ClassID:VAR StorageID:CODE Access:RO4+RO3+RO2+RO1 TypeID:UINT1 Gain:1 Min:0
   Struct:Table3Rev_cu1 Max:255 Format:3.0 UpdateID:ONCE Struct:Table3Rev_cu1 Group:"System | Version" Help:"VarDec Table3 Revision Number" */
const uint1 Table3Rev_cu1 __SECTION_ROSDATA_CONSTANTS__ = 1;

/* Name: table_4_rev CType:uint1 ClassID:VAR StorageID:CODE Access:RO4+RO3+RO2+RO1 TypeID:UINT1 Gain:1 Min:0
   Struct:Table4Rev_cu1 Max:255 Format:3.0 UpdateID:ONCE Struct:Table4Rev_cu1 Group:"System | Version" Help:"VarDec Table4 Revision Number" */
const uint1 Table4Rev_cu1 __SECTION_ROSDATA_CONSTANTS__ = 1;

/* Name: table_5_rev CType:uint1 ClassID:VAR StorageID:CODE Access:RO4+RO3+RO2+RO1 TypeID:UINT1 Gain:1 Min:0
   Struct:Table5Rev_cu1 Max:255 Format:3.0 UpdateID:ONCE Struct:Table5Rev_cu1 Group:"System | Version" Help:"VarDec Table5 Revision Number" */
const uint1 Table5Rev_cu1 __SECTION_ROSDATA_CONSTANTS__ = 1;

/* Name: table_6_rev CType:uint1 ClassID:VAR StorageID:CODE Access:RO4+RO3+RO2+RO1 TypeID:UINT1 Gain:1 Min:0
   Struct:Table6Rev_cu1 Max:255 Format:3.0 UpdateID:ONCE Struct:Table6Rev_cu1 Group:"System | Version" Help:"VarDec Table6 Revision Number" */
const uint1 Table6Rev_cu1 __SECTION_ROSDATA_CONSTANTS__ = 1;

/* Name: table_7_rev CType:uint1 ClassID:VAR StorageID:CODE Access:RO4+RO3+RO2+RO1 TypeID:UINT1 Gain:1 Min:0
   Struct:Table7Rev_cu1 Max:255 Format:3.0 UpdateID:ONCE Struct:Table7Rev_cu1 Group:"System | Version" Help:"VarDec Table7 Revision Number" */
const uint1 Table7Rev_cu1 __SECTION_ROSDATA_CONSTANTS__ = 1;

/* Name: Unused CType:uint1 ClassID:VAR StorageID:RAM Access:RO4+NA3+NA2+NA1 TypeID:UINT1 Gain:1 Min:0 Max:255
   Struct:Unused_ru1 Format:3.0 UpdateID:ONCE Group:"System | Version" Help:"Unused Table Entry" */
const uint1 Unused_ru1 __SECTION_ROSDATA_CONSTANTS__ = 0;

#include <Pragma_Section_End_rosdata.h>
#include <Pragma_Section_Start_rosdata_constants.h>

/* Name: MotoHawkModelName CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkModelName[0] Group:"System | Version" Help:"Simulink model name used for the MotoHawk build" */
const uint1 MotoHawkModelName[80] __SECTION_ROSDATA_CONSTANTS__ = MODEL_NAME;

/* Name: CompilerVersion CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:CompilerVersion[0] Group:"System | Version" Help:"Compiler toolchain version used for the MotoHawk build" */
const uint1 CompilerVersion[80] __SECTION_ROSDATA_CONSTANTS__ = COMPILER_VERSION;

/* Name: MotoHawkVersionTxt CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:50
   Struct:MotoHawkVersionTxt[0] Group:"System | Version" Help:"MotoHawk version used to build the application." */
const uint1 MotoHawkVersionTxt[50] __SECTION_ROSDATA_CONSTANTS__ =
  MOTOHAWK_VERSION;

/* Name: MatlabVersionTxt CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MatlabVersionTxt[0] Group:"System | Version" Help:"MATLAB version used to build the application." */
const uint1 MatlabVersionTxt[80] __SECTION_ROSDATA_CONSTANTS__ = MATLAB_VERSION;

/* Name: MotoHawkModelGUID CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkModelGUID[0] Group:"System | Version" Help:"GUID identifying the MotoHawk model" */
const uint1 MotoHawkModelGUID[80] __SECTION_ROSDATA_CONSTANTS__ = MODEL_GUID;

/* Name: MotoHawkBuildGUID CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkBuildGUID[0] Group:"System | Version" Help:"GUID identifying the MotoHawk build session" */
const uint1 MotoHawkBuildGUID[80] __SECTION_ROSDATA_CONSTANTS__ = BUILD_GUID;

/* Name: MotoHawkTokenGUID CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkTokenGUID[0] Group:"System | Version" Help:"GUID identifying the token inserted during the build.  May be empty if no token was available" */
const uint1 MotoHawkTokenGUID[80] __SECTION_ROSDATA_CONSTANTS__ = TOKEN_GUID;

#include <Pragma_Section_End_rosdata.h>

/*---- CALIBRATION ----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_cals_rodata.h>

/* Name: CalIdTxt CType:uint1 ClassID:TEXT StorageID:FLASH Access:RW4+RW3+RW2+RW1 UpdateID:REMOTE
   Struct:CalIdTxt[0] TextLen:33 Group:"System | Version" Help:"Calibration ID" VardecSig:69 */
Calconst uint1 CalIdTxt[54] __SECTION_CALS_RODATA__ = SRZ_NAME "_000";

/* Name: PasswordTxt CType:uint1 ClassID:TEXT StorageID:FLASH Access:RW4+RW3+RO2+RO1 UpdateID:REMOTE TextLen:33
   Group:"System | System Config" Help:"Password protection for this calibration"
   Struct:PasswordTxt[0] VardecSig:69 */
Calconst uint1 PasswordTxt[33] __SECTION_CALS_RODATA__ = "";

/* Name: FriendlyName CType:uint1 ClassID:TEXT StorageID:FLASH Access:RW4+RW3+RO2+RO1 UpdateID:REMOTE
   Struct:FriendlyName[0] TextLen:33 Group:"System | System Config" Help:"The device's friendly name." VardecSig:69 */
Calconst uint1 FriendlyName[33] __SECTION_CALS_RODATA__ = "PCM";

#include <Pragma_Section_End_rodata.h>

/*---- RAM VARIABLES --------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_sbss_zerovars.h>

/* Name: LinkStatus CType:uint1 ClassID:VAR StorageID:RAM Access:RO4+RO3+NA2+NA1 TypeID:UINT1 Gain:1 Min:0 Max:255
   Format:3.0 UpdateID:BACKGND Group:"System | Version" Help:"This is the Status of the Comms link."
   Struct:LinkStatus_ru1 VardecSig:6C */
uint1 __SECTION_SBSS_ZEROVARS__ LinkStatus_ru1;

#include <Pragma_Section_End_sbss.h>

/*---- APPLICATION STACKS ---------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_bss_decram.h>

uint1 __SECTION_BSS_DECRAM__ FgndTimeStack[3072];

#include <Pragma_Section_End_bss.h>
#include <Pragma_Section_Start_bss_zerovars.h>

uint1 __SECTION_BSS_ZEROVARS__ BgndStack[2048];

#include <Pragma_Section_End_bss.h>
#include <Pragma_Section_Start_bss_decram.h>

uint1 __SECTION_BSS_DECRAM__ IdleStack[1024];

#include <Pragma_Section_End_bss.h>
#include <Pragma_Section_Start_bss_zerovars.h>

uint1 __SECTION_BSS_ZEROVARS__ InterruptStack[1536];

#include <Pragma_Section_End_bss.h>

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_text_code.h>

/*---- LOCAL FUNCTIONS ------------------------------------------------------------------------------------*/

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   :: PreStartOS
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
void PreStartOS(S_PreStartConfig *config)
{
  /* Configure Stack Sizes */
  config->pIdleStack = (NativeVar_U *) IdleStack;
  config->uIdleStackSize = sizeof(IdleStack);
  config->pFgndTimeStack = (NativeVar_U *) FgndTimeStack;
  config->uFgndTimeStackSize = sizeof(FgndTimeStack);
  config->pBgndStack = (NativeVar_U *) BgndStack;
  config->uBgndStackSize = sizeof(BgndStack);
  config->pInterruptStack = (NativeVar_U *) InterruptStack;
  config->uInterruptStackSize = sizeof(InterruptStack);

  /* No Foreground Angle-Based Stack */
  /* If any angle-based events occur, they will use the FgndTimeStack */
  config->pFgndAngleStack = 0;
  config->uFgndAngleStackSize = 0;

  /* Setup Base OS Event Rates */
  config->uPITCBaseRate = 5000;
  config->uFgndPeriodicBaseRTIMultiple = 1;
  config->uBgndPeriodicBaseRTIMultiple = 10;

  /* Set the starvation time */
  config->u2COPStarvationTimeInMilliSecs = 500;

  /* For now, use other default settings */
}

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   :: ApplicationCallback
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
void ApplicationCallback(E_ExecutionEvent in_eEvent)
{
  {
    extern E_ApplicationInitStatus ApplicationInitStatus;
    extern E_ApplicationStatus ApplicationStatus;
    extern void CheckApplicationStatus(void);
    if (ApplicationInitStatus < APP_INIT_RUN)
      ApplicationStatus = APPLICATION_INIT;
    CheckApplicationStatus();
  }

  switch (in_eEvent)
  {
   case SHUTDOWN_EVENT:
    {
      if (SHUTDOWN_EVENT_RunCnt != 0) {
        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_SHUTDOWN_EVENT_3504p0009(void);
          Trigger_SHUTDOWN_EVENT_3504p0009();
        }

        if (SHUTDOWN_EVENT_RunCnt > 0)
          SHUTDOWN_EVENT_RunCnt--;
      }
    }
    break;

   case STARTUP_EVENT:
    {
      if (STARTUP_EVENT_RunCnt != 0) {
        if (ApplicationStatus == APPLICATION_INIT) {
          extern void Trigger_STARTUP_EVENT_11581p0004(void);
          Trigger_STARTUP_EVENT_11581p0004();
        }

        if (ApplicationStatus == APPLICATION_INIT) {
          extern void Trigger_STARTUP_EVENT_3502p0009(void);
          Trigger_STARTUP_EVENT_3502p0009();
        }

        if (STARTUP_EVENT_RunCnt > 0)
          STARTUP_EVENT_RunCnt--;
      }
    }
    break;

   case BGND_BASEx20_PERIODIC:
    {
      if (BGND_BASEx20_PERIODIC_RunCnt != 0) {
        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_BGND_BASEx20_PERIODIC_3503p0009(void);
          Trigger_BGND_BASEx20_PERIODIC_3503p0009();
        }

        if (BGND_BASEx20_PERIODIC_RunCnt > 0)
          BGND_BASEx20_PERIODIC_RunCnt--;
      }
    }
    break;

   case FGND_RTI_PERIODIC:
    {
      if (FGND_RTI_PERIODIC_RunCnt != 0) {
        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_FGND_RTI_PERIODIC_3501p0009(void);
          Trigger_FGND_RTI_PERIODIC_3501p0009();
        }

        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_FGND_RTI_PERIODIC_3299p0011(void);
          Trigger_FGND_RTI_PERIODIC_3299p0011();
        }

        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_FGND_RTI_PERIODIC_11676p0004(void);
          Trigger_FGND_RTI_PERIODIC_11676p0004();
        }

        if (FGND_RTI_PERIODIC_RunCnt > 0)
          FGND_RTI_PERIODIC_RunCnt--;
      }
    }
    break;

   case FGND_2XRTI_PERIODIC:
    {
      if (FGND_2XRTI_PERIODIC_RunCnt != 0) {
        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_FGND_2XRTI_PERIODIC_11675p0004(void);
          Trigger_FGND_2XRTI_PERIODIC_11675p0004();
        }

        if (FGND_2XRTI_PERIODIC_RunCnt > 0)
          FGND_2XRTI_PERIODIC_RunCnt--;
      }
    }
    break;

   case FGND_10XRTI_PERIODIC:
    {
      if (FGND_10XRTI_PERIODIC_RunCnt != 0) {
        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_FGND_10XRTI_PERIODIC_11677p0004(void);
          Trigger_FGND_10XRTI_PERIODIC_11677p0004();
        }

        if (FGND_10XRTI_PERIODIC_RunCnt > 0)
          FGND_10XRTI_PERIODIC_RunCnt--;
      }
    }
    break;

   case FGND_20XRTI_PERIODIC:
    {
      if (FGND_20XRTI_PERIODIC_RunCnt != 0) {
        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_FGND_20XRTI_PERIODIC_3300p0009(void);
          Trigger_FGND_20XRTI_PERIODIC_3300p0009();
        }

        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_FGND_20XRTI_PERIODIC_11678p0004(void);
          Trigger_FGND_20XRTI_PERIODIC_11678p0004();
        }

        if (FGND_20XRTI_PERIODIC_RunCnt > 0)
          FGND_20XRTI_PERIODIC_RunCnt--;
      }
    }
    break;

   case BGND_BASEx2_PERIODIC:
    {
      if (BGND_BASEx2_PERIODIC_RunCnt != 0) {
        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_BGND_BASEx2_PERIODIC_11680p0004(void);
          Trigger_BGND_BASEx2_PERIODIC_11680p0004();
        }

        if (BGND_BASEx2_PERIODIC_RunCnt > 0)
          BGND_BASEx2_PERIODIC_RunCnt--;
      }
    }
    break;

   case BGND_BASEx10_PERIODIC:
    {
      if (BGND_BASEx10_PERIODIC_RunCnt != 0) {
        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_BGND_BASEx10_PERIODIC_11681p0004(void);
          Trigger_BGND_BASEx10_PERIODIC_11681p0004();
        }

        if (BGND_BASEx10_PERIODIC_RunCnt > 0)
          BGND_BASEx10_PERIODIC_RunCnt--;
      }
    }
    break;

   case ONE_SECOND_EVENT:
    {
      if (ONE_SECOND_EVENT_RunCnt != 0) {
        if (ApplicationStatus == APPLICATION_RUN) {
          extern void MotoHawkModelSecondsInUseTick(void);
          MotoHawkModelSecondsInUseTick();
        }

        if (ApplicationStatus == APPLICATION_RUN) {
          extern void FaultManagerPeriodicTick(void);
          FaultManagerPeriodicTick();
        }

        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_ONE_SECOND_EVENT_11682p0004(void);
          Trigger_ONE_SECOND_EVENT_11682p0004();
        }

        if (ONE_SECOND_EVENT_RunCnt > 0)
          ONE_SECOND_EVENT_RunCnt--;
      }
    }
    break;

   case IDLE_EVENT:
    {
      if (IDLE_EVENT_RunCnt != 0) {
        {
          extern void Trigger_IDLE_EVENT_3547p0009(void);
          Trigger_IDLE_EVENT_3547p0009();
        }

        {
          extern void Trigger_IDLE_EVENT_11606p0004(void);
          Trigger_IDLE_EVENT_11606p0004();
        }

        if (IDLE_EVENT_RunCnt > 0)
          IDLE_EVENT_RunCnt--;
      }
    }
    break;

   case BGND_BASE_PERIODIC:
    {
      if (BGND_BASE_PERIODIC_RunCnt != 0) {
        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_BGND_BASE_PERIODIC_11679p0004(void);
          Trigger_BGND_BASE_PERIODIC_11679p0004();
        }

        if (ApplicationStatus == APPLICATION_RUN) {
          extern void Trigger_BGND_BASE_PERIODIC_3493p0009(void);
          Trigger_BGND_BASE_PERIODIC_3493p0009();
        }

        if (BGND_BASE_PERIODIC_RunCnt > 0)
          BGND_BASE_PERIODIC_RunCnt--;
      }
    }
    break;
  }

  {
    extern E_ApplicationInitStatus ApplicationInitStatus;
    extern E_ApplicationStatus ApplicationStatus;
    if ((ApplicationStatus == APPLICATION_INIT) && (in_eEvent != STARTUP_EVENT))
    {
      StepApplicationStartup();
    }
  }
}

void RandomNumber_Get(uint32_T* out_pNumber)
{
  if (out_pNumber) {
    extern uint2 GetRandomNumber(void);
    *out_pNumber = ((uint32_T) GetRandomNumber());
  }
}

NativeError_S ModuleSupport_Reset(void)
{
  DISABLE();
  while (1) ;
  UNDISABLE();
  return(ERROR_FAIL);
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   :: OpenApplication
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
void OpenApplication(E_OpenEventType open_type)
{
  /*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
     :: Reset timers
     ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
  {
    extern void Timer_FreeRunningCounter_ResetTime(void);
    Timer_FreeRunningCounter_ResetTime();
  }

  /*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
     :: Setup memory
     ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
  {
    NonVolatile_OpenNonVolatile();
  }

  {
    ApplicationStatus = APPLICATION_INIT;
    ApplicationInitStatus = APP_INIT_BEFORE_MODEL;
    prevOSInternalErrorCnt = 0;
    idleCpuSeenNonZero = 0;
  }

  /*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
     :: Initialize Resource Usage, to Pre-Allocate From Heap
     ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
  {
    S_ResourceAllocateFW ResourceAllocateFW;
    NativeError_S sErrorResult;
    ResourceAllocateFW.uValidAttributesMask = USE_ALLOCATE_PWMS |
      USE_ALLOCATE_DISCRETEOUTS | USE_ALLOCATE_FREQINS |
      USE_ALLOCATE_ONESHOTS | USE_ALLOCATE_SWITCHES | USE_ALLOCATE_VARCAMS |
      USE_ALLOCATE_TRANSCOUNT;
    ResourceAllocateFW.uNumPWMsToAllocate = 1;
    ResourceAllocateFW.uNumDiscreteOutsToAllocate = 4;
    ResourceAllocateFW.uNumFreqInsToAllocate = 0;
    ResourceAllocateFW.uNumSwitchesToAllocate = 1;
    ResourceAllocateFW.uNumOneshotsToAllocate = 0;
    ResourceAllocateFW.uNumVarCamsToAllocate = 0;
    ResourceAllocateFW.uNumTransCountToAllocate = 0;
    sErrorResult = AllocateResourcesInFW(&ResourceAllocateFW);

    {
      extern uint8_T resource_allocation;
      if (SUCCESS(sErrorResult))
        resource_allocation = 0;
      else
        resource_allocation = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  /* Initialize Fault Manager */
  {
    uint32_T i;
    for (i=0; i < 33; i++) {
      if ((FaultManager_DataStore_ByIndex(i).mode ==
           FAULT_MODE_STICKYDASHPERSISTENT) ||
          (FaultManager_DataStore_ByIndex(i).mode ==
           FAULT_MODE_ENABLEDDASHPERSISTENT)) {
        /* Keep all status information from shutdown */
      } else if (FaultManager_DataStore_ByIndex(i).mode ==
                 FAULT_MODE_SAVEOCCURRED) {
        /* Reset x/y counters and suspected/active status.
           Set any previously active faults to now be occurred.
           Otherwise, leave occurred as it was */
        VolFaults_DataStore_ByIndex(i).x = 0;
        VolFaults_DataStore_ByIndex(i).y = 0;
        SetFaultSuspected(i, 0);
        if (IsFaultActive(i)) {
          SetFaultOccurred(i, 1);
        }

        SetFaultActive(i, 0);
      } else {
        /* Clear fault state on startup */
        VolFaults_DataStore_ByIndex(i).x = 0;
        VolFaults_DataStore_ByIndex(i).y = 0;
        SetFaultSuspected(i, 0);
        SetFaultActive(i, 0);
        SetFaultOccurred(i, 0);
      }
    }

    RefreshFaultActionReferenceCounts();
  }

  /*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
     :: Setup the event scheduler
     ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
  {
    S_ScheduleCreateResourceAttributes SchedulerCreateAttribObj;
    S_EventCond EventCondObjArr[] = {
      { ONE_SECOND_EVENT, RES_ENABLED },

      { FGND_RTI_PERIODIC, RES_ENABLED },

      { BGND_BASEx20_PERIODIC, RES_ENABLED },

      { FGND_20XRTI_PERIODIC, RES_ENABLED },

      { IDLE_EVENT, RES_ENABLED },

      { FGND_2XRTI_PERIODIC, RES_ENABLED },

      { FGND_10XRTI_PERIODIC, RES_ENABLED },

      { BGND_BASE_PERIODIC, RES_ENABLED },

      { BGND_BASEx2_PERIODIC, RES_ENABLED },

      { BGND_BASEx10_PERIODIC, RES_ENABLED },
    };

    SchedulerCreateAttribObj.pfAppCback = ApplicationCallback;
    SchedulerCreateAttribObj.DynamicObj.uValidAttributesMask =
      USE_SCHD_CONDITION;
    SchedulerCreateAttribObj.DynamicObj.EventCondObj.pEventCondObjArr =
      EventCondObjArr;
    SchedulerCreateAttribObj.DynamicObj.EventCondObj.uNumEventsInArray = 10;
    SchedulerCreateAttribObj.uValidAttributesMask = USE_SCHD_DYNAMIC_ON_CREATE |
      USE_SCHD_TASK_MANAGER;
    CreateResource(RES_SCHEDULER, &SchedulerCreateAttribObj, BEHAVIOUR_SCHEDULER);
  }

  /*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
     :: Setup the protocol security keys
     ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
  {
    extern void OpenApplicationSecurity(void);
    OpenApplicationSecurity();
  }

  /*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
     :: Install the MotoTron Protocol Archive
     ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
  {
    S_RegisterProtocolArchiveInfo ProtocolArchiveConfigObj;

    /* Use resource scheduler 3 for the MotoTron Protocol Archive */
    ProtocolArchiveConfigObj.uValidAttributesMask = USE_PROTOCOL_SECURITY;
    ProtocolArchiveConfigObj.eSchedulerResource = RES_SCHEDULER_3;
    ProtocolArchiveConfigObj.pfDataRequestCback = NULL;
    ProtocolArchiveConfigObj.pfControlRequestCback = NULL;
    ProtocolArchiveConfigObj.pfDiagnosticFunctionManager = NULL;
    RegisterMotoTronProtocolArchive(&ProtocolArchiveConfigObj);
  }

  /* Initialize CAN : CAN_1 */
  {
    S_CANCreateResourceAttributes CANCreateObj;
    NativeError_S sErrorResult;
    S_CANQueueDefn QueueDefnObjArr[3];

    /* Initialize Message Buffers */
    S_TouCANMessageBufferInfo TouCANMessageDefnObjArr[3];
    CANCreateObj.DynamicObj.BufferInfoObj.u1NumBuffersDefined = 3;
    CANCreateObj.DynamicObj.BufferInfoObj.pTouCANBufferObjArr =
      TouCANMessageDefnObjArr;

    {
      /* Transmit Buffer */
      TouCANMessageDefnObjArr[0].BufferDefnObj.uValidAttributesMask =
        USE_CAN_BUFFER_SETTING;
      TouCANMessageDefnObjArr[0].BufferDefnObj.ConfigObj.eFlags =
        CAN_MESSAGE_TRANSMIT;
      TouCANMessageDefnObjArr[0].eBufferID = TOUCAN_BUFF0;
    }

    {
      /* Receive Buffer */
      extern void Trigger_CAN_RX_BusCAN_1_Buf1(E_TouCANNotificationEventMask,
        TouCANBufferHandle, NativePtrSizedInt_U);
      TouCANMessageDefnObjArr[1].BufferDefnObj.NotifyObj.pfNotify =
        Trigger_CAN_RX_BusCAN_1_Buf1;
      TouCANMessageDefnObjArr[1].BufferDefnObj.NotifyObj.uAppDataToSendOnNotify =
        0;
      TouCANMessageDefnObjArr[1].BufferDefnObj.NotifyObj.eEventMaskToNotifyOn =
        CAN_RECEIPT;
      TouCANMessageDefnObjArr[1].BufferDefnObj.ConfigObj.u4MessageIDMask = 0x7ff;
      TouCANMessageDefnObjArr[1].BufferDefnObj.ConfigObj.u4MessageID = 0x42f;
      TouCANMessageDefnObjArr[1].BufferDefnObj.ConfigObj.eFlags =
        CAN_MESSAGE_STANDARD | CAN_MESSAGE_RECEIVE;
      TouCANMessageDefnObjArr[1].BufferDefnObj.uValidAttributesMask =
        USE_CAN_BUFFER_SETTING | USE_CAN_BUFFER_NOTIFY;
      TouCANMessageDefnObjArr[1].eBufferID = TOUCAN_BUFF1;
    }

    {
      /* Receive Buffer */
      extern void Trigger_CAN_RX_BusCAN_1_Buf14(E_TouCANNotificationEventMask,
        TouCANBufferHandle, NativePtrSizedInt_U);
      TouCANMessageDefnObjArr[2].BufferDefnObj.NotifyObj.pfNotify =
        Trigger_CAN_RX_BusCAN_1_Buf14;
      TouCANMessageDefnObjArr[2].BufferDefnObj.NotifyObj.uAppDataToSendOnNotify =
        0;
      TouCANMessageDefnObjArr[2].BufferDefnObj.NotifyObj.eEventMaskToNotifyOn =
        CAN_RECEIPT;
      TouCANMessageDefnObjArr[2].BufferDefnObj.ConfigObj.u4MessageIDMask =
        0x3effe00;
      TouCANMessageDefnObjArr[2].BufferDefnObj.ConfigObj.u4MessageID = 0xef0200;
      TouCANMessageDefnObjArr[2].BufferDefnObj.ConfigObj.eFlags =
        CAN_MESSAGE_EXTENDED | CAN_MESSAGE_RECEIVE;
      TouCANMessageDefnObjArr[2].BufferDefnObj.uValidAttributesMask =
        USE_CAN_BUFFER_SETTING | USE_CAN_BUFFER_NOTIFY;
      TouCANMessageDefnObjArr[2].eBufferID = TOUCAN_BUFF14;
    }

    /* Initialize CAN Message Queues */
    CANCreateObj.SWQueueObj.pQueueDefnObjArr = QueueDefnObjArr;
    CANCreateObj.SWQueueObj.uNumQueueDefns = 3;

    /* Queue 0: Buffer 0 */
    QueueDefnObjArr[0].eBufferId = TOUCAN_BUFF0;
    QueueDefnObjArr[0].b1IsForTransmission = TRUE;
    QueueDefnObjArr[0].u2MinQueueDepth = 16;

    /* Queue 1: Buffer 1 */
    QueueDefnObjArr[1].eBufferId = TOUCAN_BUFF1;
    QueueDefnObjArr[1].b1IsForTransmission = FALSE;
    QueueDefnObjArr[1].u2MinQueueDepth = 16;

    /* Queue 2: Buffer 14 */
    QueueDefnObjArr[2].eBufferId = TOUCAN_BUFF14;
    QueueDefnObjArr[2].b1IsForTransmission = FALSE;
    QueueDefnObjArr[2].u2MinQueueDepth = 16;

    /* Setup Baud Rate */
    CANCreateObj.eBaud = CAN_BAUD_250K;

    /* Instantiate CAN Resource */
    CANCreateObj.DynamicObj.uValidAttributesMask = USE_CAN_BUFFER;
    CANCreateObj.uValidAttributesMask = USE_CAN_DYNAMIC_ON_CREATE |
      USE_CAN_SW_QUEUES | USE_CAN_BAUD_SETTING;
    sErrorResult = CreateResource(RES_CAN1, &CANCreateObj, BEHAVIOUR_TOUCAN);

    {
      extern uint8_T can_create_CAN_1;
      if (SUCCESS(sErrorResult))
        can_create_CAN_1 = 0;
      else
        can_create_CAN_1 = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  /* Register MotoTron CAN Protocol */
  {
    extern NativeBool MotoSecurity32Function(E_AccessLevel, E_Protocols, uint4 *);
    S_RegisterCANProtocolInfo ProtocolCANInfoObj;
    NativeError_S sErrorResult;
    ProtocolCANInfoObj.eProtocol = MOTOTRON_KEY_PROTOCOL;
    ProtocolCANInfoObj.eCANResource = RES_CAN1;
    ProtocolCANInfoObj.eTXBuffer = TOUCAN_BUFF0;
    ProtocolCANInfoObj.eRXBuffer = TOUCAN_BUFF15;
    ProtocolCANInfoObj.pfProtocolSecurityCback = MotoSecurity32Function;
    ProtocolCANInfoObj.pfAuthoritySecurityCback =
      CanKingAuthoritySecurityFunction;
    ProtocolCANInfoObj.u1MyCity = (CityID_CAN_1_DataStore());
    ProtocolCANInfoObj.uValidAttributesMask = USE_PROTOCOL_SECURITY |
      USE_CANKING_SECURITY_AUTHORITY;
    sErrorResult = RegisterCANProtocol(&ProtocolCANInfoObj);

    {
      extern uint8_T protocol_register_CAN_1;
      if (SUCCESS(sErrorResult))
        protocol_register_CAN_1 = 0;
      else
        protocol_register_CAN_1 = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  /* Initialize CAN : CAN_2 */
  {
    S_CANCreateResourceAttributes CANCreateObj;
    NativeError_S sErrorResult;
    S_CANQueueDefn QueueDefnObjArr[3];

    /* Initialize Message Buffers */
    S_TouCANMessageBufferInfo TouCANMessageDefnObjArr[3];
    CANCreateObj.DynamicObj.BufferInfoObj.u1NumBuffersDefined = 3;
    CANCreateObj.DynamicObj.BufferInfoObj.pTouCANBufferObjArr =
      TouCANMessageDefnObjArr;

    {
      /* Transmit Buffer */
      TouCANMessageDefnObjArr[0].BufferDefnObj.uValidAttributesMask =
        USE_CAN_BUFFER_SETTING;
      TouCANMessageDefnObjArr[0].BufferDefnObj.ConfigObj.eFlags =
        CAN_MESSAGE_TRANSMIT;
      TouCANMessageDefnObjArr[0].eBufferID = TOUCAN_BUFF0;
    }

    {
      /* Receive Buffer */
      extern void Trigger_CAN_RX_BusCAN_2_Buf1(E_TouCANNotificationEventMask,
        TouCANBufferHandle, NativePtrSizedInt_U);
      TouCANMessageDefnObjArr[1].BufferDefnObj.NotifyObj.pfNotify =
        Trigger_CAN_RX_BusCAN_2_Buf1;
      TouCANMessageDefnObjArr[1].BufferDefnObj.NotifyObj.uAppDataToSendOnNotify =
        0;
      TouCANMessageDefnObjArr[1].BufferDefnObj.NotifyObj.eEventMaskToNotifyOn =
        CAN_RECEIPT;
      TouCANMessageDefnObjArr[1].BufferDefnObj.ConfigObj.u4MessageIDMask = 0x7cf;
      TouCANMessageDefnObjArr[1].BufferDefnObj.ConfigObj.u4MessageID = 0x400;
      TouCANMessageDefnObjArr[1].BufferDefnObj.ConfigObj.eFlags =
        CAN_MESSAGE_STANDARD | CAN_MESSAGE_RECEIVE;
      TouCANMessageDefnObjArr[1].BufferDefnObj.uValidAttributesMask =
        USE_CAN_BUFFER_SETTING | USE_CAN_BUFFER_NOTIFY;
      TouCANMessageDefnObjArr[1].eBufferID = TOUCAN_BUFF1;
    }

    {
      /* Receive Buffer */
      extern void Trigger_CAN_RX_BusCAN_2_Buf14(E_TouCANNotificationEventMask,
        TouCANBufferHandle, NativePtrSizedInt_U);
      TouCANMessageDefnObjArr[2].BufferDefnObj.NotifyObj.pfNotify =
        Trigger_CAN_RX_BusCAN_2_Buf14;
      TouCANMessageDefnObjArr[2].BufferDefnObj.NotifyObj.uAppDataToSendOnNotify =
        0;
      TouCANMessageDefnObjArr[2].BufferDefnObj.NotifyObj.eEventMaskToNotifyOn =
        CAN_RECEIPT;
      TouCANMessageDefnObjArr[2].BufferDefnObj.ConfigObj.u4MessageIDMask =
        0xffdf98;
      TouCANMessageDefnObjArr[2].BufferDefnObj.ConfigObj.u4MessageID = 0xff4008;
      TouCANMessageDefnObjArr[2].BufferDefnObj.ConfigObj.eFlags =
        CAN_MESSAGE_EXTENDED | CAN_MESSAGE_RECEIVE;
      TouCANMessageDefnObjArr[2].BufferDefnObj.uValidAttributesMask =
        USE_CAN_BUFFER_SETTING | USE_CAN_BUFFER_NOTIFY;
      TouCANMessageDefnObjArr[2].eBufferID = TOUCAN_BUFF14;
    }

    /* Initialize CAN Message Queues */
    CANCreateObj.SWQueueObj.pQueueDefnObjArr = QueueDefnObjArr;
    CANCreateObj.SWQueueObj.uNumQueueDefns = 3;

    /* Queue 0: Buffer 0 */
    QueueDefnObjArr[0].eBufferId = TOUCAN_BUFF0;
    QueueDefnObjArr[0].b1IsForTransmission = TRUE;
    QueueDefnObjArr[0].u2MinQueueDepth = 16;

    /* Queue 1: Buffer 1 */
    QueueDefnObjArr[1].eBufferId = TOUCAN_BUFF1;
    QueueDefnObjArr[1].b1IsForTransmission = FALSE;
    QueueDefnObjArr[1].u2MinQueueDepth = 16;

    /* Queue 2: Buffer 14 */
    QueueDefnObjArr[2].eBufferId = TOUCAN_BUFF14;
    QueueDefnObjArr[2].b1IsForTransmission = FALSE;
    QueueDefnObjArr[2].u2MinQueueDepth = 16;

    /* Setup Baud Rate */
    CANCreateObj.eBaud = CAN_BAUD_500K;

    /* Instantiate CAN Resource */
    CANCreateObj.DynamicObj.uValidAttributesMask = USE_CAN_BUFFER;
    CANCreateObj.uValidAttributesMask = USE_CAN_DYNAMIC_ON_CREATE |
      USE_CAN_SW_QUEUES | USE_CAN_BAUD_SETTING;
    sErrorResult = CreateResource(RES_CAN2, &CANCreateObj, BEHAVIOUR_TOUCAN);

    {
      extern uint8_T can_create_CAN_2;
      if (SUCCESS(sErrorResult))
        can_create_CAN_2 = 0;
      else
        can_create_CAN_2 = (uint8_T) GetErrorCode(sErrorResult);
    }
  }

  {
    ECUP_AnalogInput_Create();
    DOut3445p0009_DiscreteOutput_Create();
    DOut178p0011_DiscreteOutput_Create();
    Fan_Pin_PWMOutput_PWMOutput_Create();
    DOut179p0011_DiscreteOutput_Create();
    DOut180p0011_DiscreteOutput_Create();
    EStop_Switch_Pin_DigitalInput_Create();
    Reverse_Switch_Pin_AnalogInput_Create();
    Accel_Pedal_Pin_AnalogInput_Create();
    Brake_Pedal_Pin_AnalogInput_Create();
    LV_Voltage_Pin_AnalogInput_Create();
  }

  StepApplicationStartup();
}

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
