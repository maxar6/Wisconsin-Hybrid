/*---- Application Monitor --------------------------------------------------------------------------------*/

#include "CommonInclude.h"
#include "BaseEngineController_A02.h"

/*---- CALIBRATION ----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_cals_rodata.h>

/* Name: ApplicationMonitorEnable ClassID:ENUMVAR StorageID:FLASH Access:RW4+RW3+RO2+RO1 TypeID:UINT1 CType:E_ApplicationMonitorEnable
   Struct:ApplicationMonitorEnable EnumDec:E_ApplicationMonitorEnable Gain:1 Min:0 Max:1 Format:3.0 UpdateID:REMOTE
   Group:"System | Debug | Application Monitor Config" Help:"Enables runtime checking of stack, heap, CPU, and OS errors.  Stops the application on error." */
Calconst E_ApplicationMonitorEnable ApplicationMonitorEnable
  __SECTION_CALS_RODATA__ = APP_MONITOR_DISABLED;

/* Name: ApplicationPausePoint ClassID:ENUMVAR StorageID:FLASH Access:RW4+RW3+RO2+RO1 TypeID:UINT1 CType:E_ApplicationInitStatus
   Struct:ApplicationPausePoint EnumDec:E_ApplicationInitStatus Gain:1 Min:0 Max:3 Format:3.0 UpdateID:REMOTE
   Group:"System | Debug | Application Monitor Config" Help:"Selects the startup pause point, for debugging.  Can be moved forward to step through the initialization" */
Calconst E_ApplicationInitStatus ApplicationPausePoint __SECTION_CALS_RODATA__ =
  APP_INIT_RUN;

/* Name: FgndTimeStackMargin CType:uint2 ClassID:VAR StorageID:FLASH Access:RW4+RW3+RO2+RO1 TypeID:UINT2 Gain:1
   Min:0 Max:3072.0 Format:5.0 UpdateID:REMOTE Struct:FgndTimeStackMargin
   Group:"System | Debug | Application Monitor Config" Help:"When the available stack space drops below this threshold, the application performs a safety stop" */
Calconst uint2 FgndTimeStackMargin __SECTION_CALS_RODATA__ = 512;

/* Name: BgndStackMargin CType:uint2 ClassID:VAR StorageID:FLASH Access:RW4+RW3+RO2+RO1 TypeID:UINT2 Gain:1
   Min:0 Max:2048.0 Format:5.0 UpdateID:REMOTE Struct:BgndStackMargin
   Group:"System | Debug | Application Monitor Config" Help:"When the available stack space drops below this threshold, the application performs a safety stop" */
Calconst uint2 BgndStackMargin __SECTION_CALS_RODATA__ = 256;

/* Name: IdleStackMargin CType:uint2 ClassID:VAR StorageID:FLASH Access:RW4+RW3+RO2+RO1 TypeID:UINT2 Gain:1
   Min:0 Max:1024.0 Format:5.0 UpdateID:REMOTE Struct:IdleStackMargin
   Group:"System | Debug | Application Monitor Config" Help:"When the available stack space drops below this threshold, the application performs a safety stop" */
Calconst uint2 IdleStackMargin __SECTION_CALS_RODATA__ = 256;

/* Name: InterruptStackMargin CType:uint2 ClassID:VAR StorageID:FLASH Access:RW4+RW3+RO2+RO1 TypeID:UINT2 Gain:1
   Min:0 Max:1536.0 Format:5.0 UpdateID:REMOTE Struct:InterruptStackMargin
   Group:"System | Debug | Application Monitor Config" Help:"When the available stack space drops below this threshold, the application performs a safety stop" */
Calconst uint2 InterruptStackMargin __SECTION_CALS_RODATA__ = 128;

/* Name: HeapMargin CType:uint2 ClassID:VAR StorageID:FLASH Access:RW4+RW3+RO2+RO1 TypeID:UINT2 Gain:1
   Min:0 Max:4096.0 Format:5.0 UpdateID:REMOTE Struct:HeapMargin
   Group:"System | Debug | Application Monitor Config" Help:"When the available heap drops below this threshold, the application performs a safety stop" */
Calconst uint2 HeapMargin __SECTION_CALS_RODATA__ = 256;

/* Name: CPUMargin CType:uint2 ClassID:VAR StorageID:FLASH Access:RW4+RW3+RO2+RO1 TypeID:UINT2 Gain:0.0015259 Offset:0.0
   Min:0 Max:100 Format:3.0 UpdateID:REMOTE Struct:CPUMargin
   Group:"System | Debug | Application Monitor Config" Help:"When the available CPU idle time drops below this threshold, the application performs a safety stop" */
Calconst uint2 CPUMargin __SECTION_CALS_RODATA__ = 6553.5;

#include <Pragma_Section_End_rodata.h>

/*---- RAM VARIABLES --------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_sbss_zerovars.h>

/* Name: ApplicationInitStatus ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+NA2+NA1 TypeID:UINT1 CType:E_ApplicationInitStatus
   Struct:ApplicationInitStatus Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:3 Max:5 Format:1.0 UpdateID:BACKGND
   Group:"System | Debug | Application Monitor"  Help:"Shows how far the module initialization has progressed" EnumDec:E_ApplicationInitStatus */

/* Name: ApplicationStatus ClassID:ENUMVAR StorageID:RAM Access:RW4+RW3+RO2+RO1 TypeID:UINT1 CType:E_ApplicationStatus
   Struct:ApplicationStatus Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:1 Max:3 Format:1.0 UpdateID:BACKGND
   Group:"System | Debug | Application Monitor"  Help:"View and set the application runtime status" EnumDec:E_ApplicationStatus */

/* Name: ApplicationStopReason ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:uint32_T
   Struct:ApplicationStopReason Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0 Max:5 Format:1.0 UpdateID:BACKGND
   Group:"System | Debug | Application Monitor"  Help:"Indicates the reason for an application stop"  EnumDec:E_ApplicationStopReason */

/* Name: ApplicationStopReasonBlock ClassID:ENUMVAR StorageID:RAM Access:RO4+RO3+RO2+RO1 TypeID:UINT4 CType:uint32_T
   Struct:ApplicationStopReasonBlock Mask:FFFFFFFF Gain:1.0 Offset:0.0 Exp:1.0 Min:0 Max:5 Format:1.0 UpdateID:BACKGND
   Group:"System | Debug | Application Monitor"  Help:"Indicates the block that caused the application stop"  EnumDec:E_ApplicationStopReasonBlock */
E_ApplicationInitStatus ApplicationInitStatus = APP_INIT_BEFORE_MODEL;
E_ApplicationStatus ApplicationStatus = APPLICATION_INIT;
uint32_T ApplicationStopReason = 0;
uint32_T ApplicationStopReasonBlock = 0;

/* Name: ONE_SECOND_EVENT_RunCnt ClassID:VAR StorageID:RAM Access:RW4+RW3+NA2+NA1 TypeID:SINT4 CType:int32_T Struct:ONE_SECOND_EVENT_RunCnt Gain:1 Min:-1 Max:2147483646
   Format:5.0 UpdateID:BACKGND Group:"System | Debug | Event Pause Counters" Help:"The number of times to execute ONE_SECOND_EVENT before pausing.  -1 means run forever" */
int32_T ONE_SECOND_EVENT_RunCnt = -1;

/* Name: FGND_TDC_EVENT_RunCnt ClassID:VAR StorageID:RAM Access:RW4+RW3+NA2+NA1 TypeID:SINT4 CType:int32_T Struct:FGND_TDC_EVENT_RunCnt Gain:1 Min:-1 Max:2147483646
   Format:5.0 UpdateID:BACKGND Group:"System | Debug | Event Pause Counters" Help:"The number of times to execute FGND_TDC_EVENT before pausing.  -1 means run forever" */
int32_T FGND_TDC_EVENT_RunCnt = -1;

/* Name: STARTUP_EVENT_RunCnt ClassID:VAR StorageID:RAM Access:RW4+RW3+NA2+NA1 TypeID:SINT4 CType:int32_T Struct:STARTUP_EVENT_RunCnt Gain:1 Min:-1 Max:2147483646
   Format:5.0 UpdateID:BACKGND Group:"System | Debug | Event Pause Counters" Help:"The number of times to execute STARTUP_EVENT before pausing.  -1 means run forever" */
int32_T STARTUP_EVENT_RunCnt = -1;

/* Name: FGND_MID_TDC_EVENT_RunCnt ClassID:VAR StorageID:RAM Access:RW4+RW3+NA2+NA1 TypeID:SINT4 CType:int32_T Struct:FGND_MID_TDC_EVENT_RunCnt Gain:1 Min:-1 Max:2147483646
   Format:5.0 UpdateID:BACKGND Group:"System | Debug | Event Pause Counters" Help:"The number of times to execute FGND_MID_TDC_EVENT before pausing.  -1 means run forever" */
int32_T FGND_MID_TDC_EVENT_RunCnt = -1;

/* Name: FGND_TDC1_EVENT_RunCnt ClassID:VAR StorageID:RAM Access:RW4+RW3+NA2+NA1 TypeID:SINT4 CType:int32_T Struct:FGND_TDC1_EVENT_RunCnt Gain:1 Min:-1 Max:2147483646
   Format:5.0 UpdateID:BACKGND Group:"System | Debug | Event Pause Counters" Help:"The number of times to execute FGND_TDC1_EVENT before pausing.  -1 means run forever" */
int32_T FGND_TDC1_EVENT_RunCnt = -1;

/* Name: FGND_5XRTI_PERIODIC_RunCnt ClassID:VAR StorageID:RAM Access:RW4+RW3+NA2+NA1 TypeID:SINT4 CType:int32_T Struct:FGND_5XRTI_PERIODIC_RunCnt Gain:1 Min:-1 Max:2147483646
   Format:5.0 UpdateID:BACKGND Group:"System | Debug | Event Pause Counters" Help:"The number of times to execute FGND_5XRTI_PERIODIC before pausing.  -1 means run forever" */
int32_T FGND_5XRTI_PERIODIC_RunCnt = -1;

/* Name: FGND_RTI_PERIODIC_RunCnt ClassID:VAR StorageID:RAM Access:RW4+RW3+NA2+NA1 TypeID:SINT4 CType:int32_T Struct:FGND_RTI_PERIODIC_RunCnt Gain:1 Min:-1 Max:2147483646
   Format:5.0 UpdateID:BACKGND Group:"System | Debug | Event Pause Counters" Help:"The number of times to execute FGND_RTI_PERIODIC before pausing.  -1 means run forever" */
int32_T FGND_RTI_PERIODIC_RunCnt = -1;

/* Name: BGND_BASE_PERIODIC_RunCnt ClassID:VAR StorageID:RAM Access:RW4+RW3+NA2+NA1 TypeID:SINT4 CType:int32_T Struct:BGND_BASE_PERIODIC_RunCnt Gain:1 Min:-1 Max:2147483646
   Format:5.0 UpdateID:BACKGND Group:"System | Debug | Event Pause Counters" Help:"The number of times to execute BGND_BASE_PERIODIC before pausing.  -1 means run forever" */
int32_T BGND_BASE_PERIODIC_RunCnt = -1;
uint1 prevOSInternalErrorCnt = 0;
uint1 idleCpuSeenNonZero = 0;
E_ApplicationStatus prevApplicationStatus = APPLICATION_INIT;
uint32_T AppAssertBase_ = 2;

#include <Pragma_Section_End_sbss.h>

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   :: StepApplicationStartup
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
boolean_T inStepApplicationStartup = 0;
void StepApplicationStartup(void)
{
  /* Handle re-entrancy */
  boolean_T inStepApplicationStartup_Now;
  DISABLE();
  inStepApplicationStartup_Now = inStepApplicationStartup;
  inStepApplicationStartup = 1;
  UNDISABLE();
  if (inStepApplicationStartup_Now)
    return;
  if ((ApplicationInitStatus == APP_INIT_BEFORE_MODEL) && (ApplicationPausePoint
       > APP_INIT_BEFORE_MODEL)) {
    /* Initialize Application Model: BaseEngineController_A02 */
    BaseEngineController_A02_initialize(1);
    BaseEngineController_A02_step();
    ApplicationInitStatus = APP_INIT_BEFORE_STARTUP;
  }

  if ((ApplicationInitStatus == APP_INIT_BEFORE_STARTUP) &&
      (ApplicationPausePoint > APP_INIT_BEFORE_STARTUP)) {
    /* Trigger the STARTUP_EVENT trigger after MODEL_initialize, but before any other events. */
    SendEvent(STARTUP_EVENT);
    ApplicationInitStatus = APP_INIT_AFTER_STARTUP;
  }

  if ((ApplicationInitStatus == APP_INIT_AFTER_STARTUP) &&
      (ApplicationPausePoint > APP_INIT_AFTER_STARTUP)) {
    ApplicationInitStatus = APP_INIT_RUN;
    ApplicationStatus = APPLICATION_RUN;
  }

  /* Handle re-entrancy */
  inStepApplicationStartup = 0;
}

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   :: CheckApplicationStatus
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
boolean_T inCheckApplicationStatus = 0;
void CheckApplicationStatus(void)
{
  extern uint4 *g_pFgndTimeStackMinBytesFree;
  extern uint4 *g_pBgndStackMinBytesFree;
  extern uint4 *g_pIdleStackMinBytesFree;
  extern uint2 g_u2InterruptStackMaxBytesFree;
  extern uint4 g_u4PeakHeapBytesUsed;
  extern uint2 *g_pu2IdlePerfTimerValue;
  extern uint1 OSInternalErrorCnt_ru1;
  boolean_T stopApplication = 0;
  boolean_T pauseApplication = 0;

  /* Handle re-entrancy */
  boolean_T inCheckApplicationStatus_Now;
  DISABLE();
  inCheckApplicationStatus_Now = inCheckApplicationStatus;
  inCheckApplicationStatus = 1;
  UNDISABLE();
  if (inCheckApplicationStatus_Now)
    return;
  if (*g_pu2IdlePerfTimerValue != 0)
    idleCpuSeenNonZero = 1;
  if (ApplicationStatus != APPLICATION_STOP) {
    if (ApplicationMonitorEnable == APP_MONITOR_ENABLED) {
      /* Check stack, heap, CPU time, OS errors, and stop the application on critical errors */
      if (*g_pFgndTimeStackMinBytesFree < FgndTimeStackMargin) {
        stopApplication = 1;
        ApplicationStopReason = (AppAssertBase_ + 0);
        ApplicationStopReasonBlock = (AppAssertBase_ + 0);
      } else if (*g_pBgndStackMinBytesFree < BgndStackMargin) {
        stopApplication = 1;
        ApplicationStopReason = (AppAssertBase_ + 1);
        ApplicationStopReasonBlock = (AppAssertBase_ + 1);
      } else if (*g_pIdleStackMinBytesFree < IdleStackMargin) {
        stopApplication = 1;
        ApplicationStopReason = (AppAssertBase_ + 2);
        ApplicationStopReasonBlock = (AppAssertBase_ + 2);
      } else if (g_u2InterruptStackMaxBytesFree < InterruptStackMargin) {
        stopApplication = 1;
        ApplicationStopReason = (AppAssertBase_ + 3);
        ApplicationStopReasonBlock = (AppAssertBase_ + 3);
      } else if (OSInternalErrorCnt_ru1 != prevOSInternalErrorCnt) {
        stopApplication = 1;
        ApplicationStopReason = (AppAssertBase_ + 6);
        ApplicationStopReasonBlock = (AppAssertBase_ + 6);
      } else if (g_u4PeakHeapBytesUsed > (4096 - HeapMargin)) {
        stopApplication = 1;
        ApplicationStopReason = (AppAssertBase_ + 4);
        ApplicationStopReasonBlock = (AppAssertBase_ + 4);
      } else if ((*g_pu2IdlePerfTimerValue < CPUMargin) && idleCpuSeenNonZero) {
        stopApplication = 1;
        ApplicationStopReason = (AppAssertBase_ + 5);
        ApplicationStopReasonBlock = (AppAssertBase_ + 5);
      } else if ((ApplicationStopReason != 0) && (ApplicationStatus ==
                  APPLICATION_RUN) && (prevApplicationStatus == APPLICATION_RUN))
      {
        /* Check if ApplicationStopReason was set by a line in the Application Code */
        stopApplication = 1;
      }
    }
  } else if (prevApplicationStatus != APPLICATION_STOP) {
    /* Check if the user has moved the ApplicationStatus to stop from MotoTune */
    stopApplication = 1;
    ApplicationStopReason = 1;
    ApplicationStopReasonBlock = 1;
  }

  /* If the application should be stopped, execute stop code for each block, in priority order */
  if (stopApplication) {
    ApplicationStatus = APPLICATION_STOP;

    /* S-Function Block: <S355>/motohawk_encoder_pseudo */
    {
      /* Turn off Pseudo-Encoder on Stop */
      S_EncoderResourceAttributes EncoderAttribsObj;
      EncoderAttribsObj.uValidAttributesMask = USE_ENC_CONDITION;
      EncoderAttribsObj.eResourceCond = ENCODER_ENABLE_EXTERNAL;
      SetResourceAttributes(RES_ENCODER, &EncoderAttribsObj, BEHAVIOUR_ENCODER);
    }

    /* Turn off fuel injectors */
    {
      int index;
      for (index=0; index < 8; index++) {
        if ((INJ_SequenceType_DataStore()) == 0) {
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, SEQ_DISABLED);
          if ((INJ_Behavior_DataStore()) == 1) {
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, SEQ_DISABLED);
          }

          (&BaseEngineController_A02_DWork.s658_InjectorSequence_DWORK1[0])
            [index] = SEQ_DISABLED;
        } else if ((INJ_SequenceType_DataStore()) == 1) {
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, SEQ_DISABLED);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, SEQ_DISABLED);
          (&BaseEngineController_A02_DWork.s658_InjectorSequence_DWORK1[0])
            [index] = SEQ_DISABLED;
        } else if ((INJ_SequenceType_DataStore()) == 2) {
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, SEQ_DISABLED);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, SEQ_DISABLED);
          (&BaseEngineController_A02_DWork.s658_InjectorSequence_DWORK1[0])
            [index] = SEQ_DISABLED;
        }
      }
    }

    /* Turn off spark coils */
    {
      int i;
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        if ((EST_SequenceType_DataStore()) == 0) {
          SetSeqOutCond((E_ModuleResource) ((EST_InitialPin_DataStore()) + i), 0,
                        SEQ_DISABLED);
        } else if ((EST_SequenceType_DataStore()) == 1) {
          SetSeqOutCond((E_ModuleResource) ((EST_InitialPin_DataStore()) + i), 0,
                        SEQ_DISABLED);
        } else if ((EST_SequenceType_DataStore()) == 2) {
          if (i < (EncoderNumCylinders_DataStore()) / 2) {
            SetSeqOutCond((E_ModuleResource) ((EST_InitialPin_DataStore()) + i),
                          0, SEQ_DISABLED);
            SetSeqOutCond((E_ModuleResource) ((EST_InitialPin_DataStore()) + i),
                          1, SEQ_DISABLED);
          }
        } else if ((EST_SequenceType_DataStore()) == 3) {
          SetSeqOutCond((E_ModuleResource) (EST_InitialPin_DataStore()), i,
                        SEQ_DISABLED);
        }
      }
    }

    {
      /* Turn off PWM output */
      extern void ETCPin_PWMOutput_PWMOutput_Stop(void);
      ETCPin_PWMOutput_PWMOutput_Stop();
    }
  } else {
    boolean_T zeroSeen = 0;
    boolean_T countingSeen = 0;

    /* Check the debug execution counters for each event
       and pause the application when all enabled counters have reached zero */
    if (ONE_SECOND_EVENT_RunCnt == 0)
      zeroSeen = 1;
    if (ONE_SECOND_EVENT_RunCnt > 0)
      countingSeen = 1;
    if (FGND_TDC_EVENT_RunCnt == 0)
      zeroSeen = 1;
    if (FGND_TDC_EVENT_RunCnt > 0)
      countingSeen = 1;
    if (STARTUP_EVENT_RunCnt == 0)
      zeroSeen = 1;
    if (STARTUP_EVENT_RunCnt > 0)
      countingSeen = 1;
    if (FGND_MID_TDC_EVENT_RunCnt == 0)
      zeroSeen = 1;
    if (FGND_MID_TDC_EVENT_RunCnt > 0)
      countingSeen = 1;
    if (FGND_TDC1_EVENT_RunCnt == 0)
      zeroSeen = 1;
    if (FGND_TDC1_EVENT_RunCnt > 0)
      countingSeen = 1;
    if (FGND_5XRTI_PERIODIC_RunCnt == 0)
      zeroSeen = 1;
    if (FGND_5XRTI_PERIODIC_RunCnt > 0)
      countingSeen = 1;
    if (FGND_RTI_PERIODIC_RunCnt == 0)
      zeroSeen = 1;
    if (FGND_RTI_PERIODIC_RunCnt > 0)
      countingSeen = 1;
    if (BGND_BASE_PERIODIC_RunCnt == 0)
      zeroSeen = 1;
    if (BGND_BASE_PERIODIC_RunCnt > 0)
      countingSeen = 1;
    pauseApplication = (zeroSeen && !countingSeen);
    if (pauseApplication && (ApplicationStatus == APPLICATION_RUN)) {
      ApplicationStatus = APPLICATION_PAUSE;
    }
  }

  if (ApplicationStatus != APPLICATION_STOP) {
    ApplicationStopReason = 0;
    ApplicationStopReasonBlock = 0;
  }

  prevApplicationStatus = ApplicationStatus;
  prevOSInternalErrorCnt = OSInternalErrorCnt_ru1;

  /* Handle re-entrancy */
  inCheckApplicationStatus = 0;
}
