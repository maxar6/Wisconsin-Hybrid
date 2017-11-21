
/* file:///E:/Box/Box Sync/Wisconsin Hybrid/Mooventure/Mooventure Code/DynoController_Rev1/DynoController_Rev1_Build/TDB/TableDB.c */
/* Generated by MotoCoder */
/* Version: 0.10.7 */
/* At: 2017-11-19 19:40:25 */
/* Copyright: 2017 Woodward. */





#define  NO_TDB_PARSE
	
#define __TABLEDB_C
#define __TABLEDB_TDB
	


/* --- INCLUDE FILES --------------------------------------------------------------------------------------*/
	    
 #include "CommonInclude.h"
 #include "DynoController_Rev1.h"
 #include "TDB_Includes.h"
 
 

/* --- DEFINES -------------------------------------------------------------------------------------------*/
#ifndef __FAR_POINTER
    /* Define __FAR_POINTER as nothing */
    #define __FAR_POINTER
#endif
	    
/* var*/ 
 extern uint1 g_eProjectID;
 extern uint1 Table0Rev_cu1;
 extern uint1 Table1Rev_cu1;
 extern uint1 Table2Rev_cu1;
 extern uint1 g_u1KeyRev;
 extern uint1 g_u1EriRev;
 extern uint1 Table3Rev_cu1;
 extern uint1 Table4Rev_cu1;
 extern uint1 Table5Rev_cu1;
 extern uint1 Table6Rev_cu1;
 extern uint1 Table7Rev_cu1;
 extern uint4 g_u4ProductID;
 extern uint1 g_u1MotProgRev;
 extern S_ModuleConfig g_ConfigCopyObj;
 extern Volatile_BSS_T VolatileWork_BSS;
 extern BlockIO_DynoController_Rev1 DynoController_Rev1_B;
 extern int32_T BGND_BASE_PERIODIC_RunCnt;
 extern uint2 BgndStackMargin;
 extern uint4 g_pBgndStackMinBytesFree;
 extern NonVolatile_T NonVolatileWork;
 extern uint2 g_pu2IdlePerfTimerValue;
 extern uint2 CPUMargin;
 extern uint2 g_pCPUTime_AppISR;
 extern uint2 g_pu2BgndPerfTimerValue;
 extern uint2 g_pCPUTime_CAN;
 extern uint2 g_pu2FgndAnglePerfValue;
 extern uint2 g_pu2FgndTimePerfTimerValue;
 extern uint2 g_pCPUTime_MIOS;
 extern uint2 g_pCPUTime_Serial;
 extern uint2 g_pCPUTime_TimerISR;
 extern uint2 g_pCPUTime_TPU;
 extern int32_T FGND_RTI_PERIODIC_RunCnt;
 extern uint4 g_pu4FgndAngleStackMinBytesFree;
 extern uint2 FgndTimeStackMargin;
 extern uint4 g_pFgndTimeStackMinBytesFree;
 extern uint32_T GaugeChain_EZLinkCallbackCounter;
 extern uint32_T GaugeChain_EZLinkNoPendingTxCounter;
 extern uint2 HeapMargin;
 extern uint2 IdleStackMargin;
 extern uint4 g_pIdleStackMinBytesFree;
 extern uint2 InterruptStackMargin;
 extern uint2 g_u2InterruptStackMaxBytesFree;
 extern uint1 LinkStatus_ru1;
 extern uint8_T MaxQueueDepth;
 extern uint32_T NonVolatile_NonVolatileCRC;
 extern int32_T ONE_SECOND_EVENT_RunCnt;
 extern uint1 OSInternalErrorCnt_ru1;
 extern uint4 g_u4PeakHeapBytesUsed;
 extern uint1 g_pSWISRCurrQueueSize;
 extern uint4 SystemFrequency_cu4;
 extern uint1 g_u1TPUMaskVers;
 extern uint1 Unused_ru1;
 
 /* text*/ 
 extern uint1 SwIdTxt[];
 extern uint1 CalIdTxt[];
 extern uint1 SwRevisionTxt[];
 extern uint1 FriendlyName[];
 extern uint1 CompilerVersion[];
 extern uint1 ControlCoreSDKRelease[];
 extern uint1 MatlabVersionTxt[];
 extern uint1 MotoHawkTokenGUID[];
 extern uint1 MotoHawkModelGUID[];
 extern uint1 MotoHawkModelName[];
 extern uint1 MotoHawkVersionTxt[];
 extern uint1 PasswordTxt[];
 
 /* array*/ 
 extern S_HardwareCompatibilityEntry ApplicationCompatibilityArr[];
 
 /* enum*/ 
 extern const Constant_T ConstantWork;
 extern E_NativeFWError ain_create_ECUP;
 extern E_NativeFWError ain_read_ECUP;
 extern E_ApplicationInitStatus ApplicationInitStatus;
 extern E_ApplicationMonitorEnable ApplicationMonitorEnable;
 extern E_ApplicationInitStatus ApplicationPausePoint;
 extern E_ApplicationStatus ApplicationStatus;
 extern uint32_T ApplicationStopReason;
 extern uint32_T ApplicationStopReasonBlock;
 extern uint2 g_u1BgndAngSchdLateFlags;
 extern uint1 g_u1BgndTimeSchdLateFlags;
 extern E_NativeFWError can_create_CAN_1;
 extern E_NativeFWError can_tx_err_CAN_1_0;
 extern E_NativeFWError din_create_ACC1;
 extern E_NativeFWError din_create_ACC2;
 extern E_NativeFWError din_create_BatteryEnable;
 extern E_NativeFWError din_create_GensetEnable;
 extern E_NativeFWError din_create_GensetLoad;
 extern E_NativeFWError din_create_LoadDumpEnable;
 extern E_NativeFWError din_read_ACC1;
 extern E_NativeFWError din_read_ACC2;
 extern E_NativeFWError din_read_BatteryEnable;
 extern E_NativeFWError din_read_GensetEnable;
 extern E_NativeFWError din_read_GensetLoad;
 extern E_NativeFWError din_read_LoadDumpEnable;
 extern E_NativeFWError dout_create_ACC1_Out;
 extern E_NativeFWError dout_create_ACC2_Out;
 extern E_NativeFWError dout_create_Battery_Enable;
 extern E_NativeFWError dout_create_COIL_Neg;
 extern E_NativeFWError dout_create_COIL_Pos;
 extern E_NativeFWError dout_create_Genset_Enable;
 extern E_NativeFWError dout_create_Genset_Load;
 extern E_NativeFWError dout_create_Load_Dump_Enable;
 extern E_NativeFWError dout_create_MPRD;
 extern uint2 g_u1FgndAngSchdLateFlags;
 extern S_SetDisplayInfo FWModulesSetDisplayInfo;
 extern E_NativeFWError GaugeChain_EZlinkTx;
 extern E_OSInternalErrorType OSErrorDisplay;
 extern E_NativeFWError mh_EZlink;
 extern uint8_T NonVolatileRestoreOnFirstStartup;
 extern uint8_T NonVolatileRestoreOnStartup;
 extern uint8_T NonVolatile_NonVolatileStatus;
 extern E_OSStatus OSStatus;
 extern E_NativeFWError protocol_register_CAN_1;
 extern E_NativeFWError resource_allocation;
 extern uint1 g_eTPUMaskType;
 
 /* bitfield*/ 
 extern uint4 CodeCoveredBits[];
 


#include <Pragma_Section_Start_ERIToolsTable_rodata.h>

const S_EriRequestTable Table0[] __SECTION_ERITOOLSTABLE_RODATA__ =
{
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&Table0Rev_cu1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&Table1Rev_cu1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&Table2Rev_cu1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_u1KeyRev, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_u1EriRev, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&Table3Rev_cu1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&Table4Rev_cu1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&Table5Rev_cu1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&Table6Rev_cu1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&Table7Rev_cu1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&SwIdTxt[0], 0x40+0x10+0x04+0x01, 0, CLASS_TEXT, 13, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&CalIdTxt[0], 0xC0+0x30+0x0C+0x03, 0, CLASS_TEXT, 33, FLASH, 0, 1, 1}, 
 {(void* __FAR_POINTER)&SwRevisionTxt[0], 0x40+0x10+0x04+0x01, 0, CLASS_TEXT, 50, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&FriendlyName[0], 0xC0+0x30+0x04+0x01, 0, CLASS_TEXT, 33, FLASH, 0, 1, 1}, 
 {(void* __FAR_POINTER)&g_u4ProductID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 4}, 
 {(void* __FAR_POINTER)&g_u1MotProgRev, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_ConfigCopyObj.BootVerMaj, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_ConfigCopyObj.BootVerMin, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_ConfigCopyObj.EcuHwMaj, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_ConfigCopyObj.EcuHwMin, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ApplicationCompatibilityArr[0], 0x40+0x10+0x04+0x01, 0, CLASS_ARRAY, 50, CODE, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_ConfigCopyObj.psSerialNumber, 0x40+0x10+0x04+0x01, 1, CLASS_TEXT, 50, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&g_ConfigCopyObj.psModelNumber, 0x40+0x10+0x04+0x01, 1, CLASS_TEXT, 50, CODE, 0, 1, 1}, 
 };

 const S_EriRequestTable Table1[] __SECTION_ERITOOLSTABLE_RODATA__ =
{
 {(void* __FAR_POINTER)&ConstantWork.ACC1, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.ACC1_Light_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.ACC1_Light_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.ACC1_Light_Prb, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.ACC1_Out, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.ACC1_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.ACC1_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s16_motohawk_din4, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.ACC2, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.ACC2_Light_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.ACC2_Light_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.ACC2_Light_Prb, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.ACC2_Out, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.ACC2_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.ACC2_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s16_motohawk_din5, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ain_create_ECUP, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ain_read_ECUP, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ApplicationInitStatus, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ApplicationMonitorEnable, 0xC0+0x30+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ApplicationPausePoint, 0xC0+0x30+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ApplicationStatus, 0xC0+0x30+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ApplicationStopReason, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&ApplicationStopReasonBlock, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&ConstantWork.Auto_Battery_Startup, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 1, 1, 4}, 
 {(void* __FAR_POINTER)&ConstantWork.Automatic_Battery_Bootup, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s9_LogicalOperator2, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Batt_Connect_Cmd_ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Batt_Connect_Cmd_ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s101_ConnectCommand, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Batt_Contactor_Status, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.Batt_Ign_Cal, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 1, 1, 4}, 
 {(void* __FAR_POINTER)&ConstantWork.Batt_Isolation_det_Cal, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Batt_Load_Enable, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s10_Merge, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.Battery_Enable, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Battery_Enable_Light_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Battery_Enable_Light_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s74_RelationalOperator2, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.BatteryCurrent_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.BatteryCurrent_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s36_BatteryCurrent, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&ConstantWork.BatteryEnable, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.BatteryEnable_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.BatteryEnable_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s16_motohawk_din, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.BatteryVoltage_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.BatteryVoltage_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s36_BatteryVoltage, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&BGND_BASE_PERIODIC_RunCnt, 0xC0+0x30+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 1, 4}, 
 {(void* __FAR_POINTER)&g_u1BgndAngSchdLateFlags, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&BgndStackMargin, 0xC0+0x30+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pBgndStackMinBytesFree, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&g_u1BgndTimeSchdLateFlags, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.CAN_1_std_handled_count, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.CAN_1_std_last_unhandled_id, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.CAN_1_std_receive_count, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&can_create_CAN_1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&can_tx_err_CAN_1_0, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&NonVolatileWork.CityID_CAN_1, 0xC0+0x00+0x00+0x00, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&CodeCoveredBits[0], 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&CodeCoveredBits[1], 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&CodeCoveredBits[2], 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&ConstantWork.COIL_Neg, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Coil_Neg_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Coil_Neg_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s74_LogicalOperator1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.COIL_Pos, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Coil_Pos_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Coil_Pos_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s74_LogicalOperator1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&CompilerVersion[0], 0x40+0x10+0x04+0x01, 0, CLASS_TEXT, 80, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&g_ConfigCopyObj.u1ConfigVerMaj, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_ConfigCopyObj.u1ConfigVerMin, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.Contactor_Disable_Delay, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 1, 1, 4}, 
 {(void* __FAR_POINTER)&ControlCoreSDKRelease[0], 0x40+0x10+0x04+0x01, 0, CLASS_TEXT, 50, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.CoolantTemp_Gauges_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.CoolantTemp_Gauges_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s76_Gain2, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 1, 2}, 
 {(void* __FAR_POINTER)&g_pu2IdlePerfTimerValue, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&CPUMargin, 0xC0+0x30+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pCPUTime_AppISR, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pu2BgndPerfTimerValue, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pCPUTime_CAN, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pu2FgndAnglePerfValue, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pu2FgndTimePerfTimerValue, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pCPUTime_MIOS, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pCPUTime_Serial, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pCPUTime_TimerISR, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pCPUTime_TPU, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&din_create_ACC1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&din_create_ACC2, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&din_create_BatteryEnable, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&din_create_GensetEnable, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&din_create_GensetLoad, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&din_create_LoadDumpEnable, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&din_read_ACC1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&din_read_ACC2, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&din_read_BatteryEnable, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&din_read_GensetEnable, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&din_read_GensetLoad, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&din_read_LoadDumpEnable, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&dout_create_ACC1_Out, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&dout_create_ACC2_Out, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&dout_create_Battery_Enable, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&dout_create_COIL_Neg, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&dout_create_COIL_Pos, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&dout_create_Genset_Enable, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&dout_create_Genset_Load, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&dout_create_Load_Dump_Enable, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&dout_create_MPRD, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.ECUP_Threshold, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 0, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Engine_Crank_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Engine_Crank_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s37_ReadCANMessage_o4, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Engine_On_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Engine_On_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s37_ReadCANMessage_o5, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Fault_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Fault_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s37_ReadCANMessage_o7, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&FGND_RTI_PERIODIC_RunCnt, 0xC0+0x30+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 1, 4}, 
 {(void* __FAR_POINTER)&g_pu4FgndAngleStackMinBytesFree, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&g_u1FgndAngSchdLateFlags, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&FgndTimeStackMargin, 0xC0+0x30+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pFgndTimeStackMinBytesFree, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&FWModulesSetDisplayInfo.DisplayVar, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&GaugeChain_EZLinkCallbackCounter, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&GaugeChain_EZLinkNoPendingTxCounter, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&GaugeChain_EZlinkTx, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Gen_Enable_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Gen_Enable_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s102_Gen_Enable, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Gen_Load_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Gen_Load_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s102_Gen_Load, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.Genset_Enable, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Genset_Enable_Light_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Genset_Enable_Light_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s74_LogicalOperator, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.Genset_Load, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Genset_Load_Light_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Genset_Load_Light_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s74_LogicalOperator2, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.GensetEnable, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.GensetEnable_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.GensetEnable_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s16_motohawk_din2, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.GensetLoad, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.GensetLoad_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.GensetLoad_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s16_motohawk_din3, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&HeapMargin, 0xC0+0x30+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 2}, 
 {(void* __FAR_POINTER)&IdleStackMargin, 0xC0+0x30+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_pIdleStackMinBytesFree, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&InterruptStackMargin, 0xC0+0x30+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 2}, 
 {(void* __FAR_POINTER)&g_u2InterruptStackMaxBytesFree, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Isolation_Measure_Enable_ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Isolation_Measure_Enable_ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s101_IsolationMeasurementEnable, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&OSErrorDisplay, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&LinkStatus_ru1, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.Load_Dump_Enable, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Load_Dump_Enable_Light_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Load_Dump_Enable_Light_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s74_LogicalOperator, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.Load_Enable_Delay, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Load_On_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Load_On_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s37_ReadCANMessage_o6, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&ConstantWork.LoadDumpEnable, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.LoadDumpEnable_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.LoadDumpEnable_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s16_motohawk_din1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&MatlabVersionTxt[0], 0x40+0x10+0x04+0x01, 0, CLASS_TEXT, 80, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.MaxCellTemperature_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.MaxCellTemperature_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s36_MaxCellTemperature, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&MaxQueueDepth, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&mh_EZlink, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_ConfigCopyObj.Capability, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, CODE, 0, 0, 1}, 
 {(void* __FAR_POINTER)&MotoHawkTokenGUID[0], 0x40+0x10+0x04+0x01, 0, CLASS_TEXT, 80, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&MotoHawkModelGUID[0], 0x40+0x10+0x04+0x01, 0, CLASS_TEXT, 80, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&MotoHawkModelName[0], 0x40+0x10+0x04+0x01, 0, CLASS_TEXT, 80, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&NonVolatileWork.MotoHawkModelSecondsInUse, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&MotoHawkTokenGUID[0], 0x40+0x10+0x04+0x01, 0, CLASS_TEXT, 80, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&MotoHawkVersionTxt[0], 0x40+0x10+0x04+0x01, 0, CLASS_TEXT, 50, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.MPRD, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.MPRD_KeepAlive, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.MPRD_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.MPRD_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&NonVolatile_NonVolatileCRC, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&NonVolatileWork.NonVolatileFormatID, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&NonVolatileRestoreOnFirstStartup, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&NonVolatileRestoreOnStartup, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 {(void* __FAR_POINTER)&NonVolatile_NonVolatileStatus, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Oil_Pressure_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Oil_Pressure_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s37_ReadCANMessage_o2, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.OilPressure_Gauges_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.OilPressure_Gauges_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s76_Gain1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 1, 2}, 
 {(void* __FAR_POINTER)&ONE_SECOND_EVENT_RunCnt, 0xC0+0x30+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 1, 4}, 
 {(void* __FAR_POINTER)&OSInternalErrorCnt_ru1, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&OSStatus, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.PackState_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.PackState_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s36_PackState, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&g_ConfigCopyObj.psPartNumber, 0x40+0x10+0x04+0x01, 1, CLASS_TEXT, 40, CODE, 0, 1, 1}, 
 {(void* __FAR_POINTER)&PasswordTxt[0], 0xC0+0x30+0x04+0x01, 0, CLASS_TEXT, 33, FLASH, 0, 1, 1}, 
 {(void* __FAR_POINTER)&g_u4PeakHeapBytesUsed, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.ProcessorReboot, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&protocol_register_CAN_1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&resource_allocation, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.RestoreNVFactoryDefaults, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.RPM_Gauges_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.RPM_Gauges_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s54_Merge, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.RPM_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.RPM_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s37_ReadCANMessage_o1, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Shutdown_ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Shutdown_ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s10_Merge, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Shutdown_Req, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.SOC_Gauges_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 1, 2}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.SOC_Gauges_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s76_Gain, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 0, 1, 2}, 
 {(void* __FAR_POINTER)&ConstantWork.SOC_Load_Dump, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 1, 1, 4}, 
 {(void* __FAR_POINTER)&ConstantWork.SOC_Off_Pt, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.StateOfCharge_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.StateOfCharge_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s36_StateOfCharge, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.StoreNV, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_pSWISRCurrQueueSize, 0x40+0x10+0x00+0x00, 1, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&SystemFrequency_cu4, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, CODE, 0, 0, 4}, 
 {(void* __FAR_POINTER)&DynoController_Rev1_B.s37_ReadCANMessage_o3, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Temp_Guage_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Temp_Guage_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Torque_Enable, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_eTPUMaskType, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&g_u1TPUMaskVers, 0x40+0x10+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&Unused_ru1, 0x40+0x00+0x00+0x00, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Vehicle_Enable, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Vehicle_Ready, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&ConstantWork.Vehicle_Speed, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, FLASH, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Vehicle_Speed_Ovr_new, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Vehicle_Speed_Ovr_ovr, 0xC0+0x30+0x0C+0x03, 0, CLASS_VAR, 1, RAM, 0, 0, 1}, 
 {(void* __FAR_POINTER)&VolatileWork_BSS.Vehicle_Speed_Prb, 0x40+0x10+0x04+0x01, 0, CLASS_VAR, 1, RAM, 1, 1, 4}, 
 };

 const S_EriRequestTable Table2[] __SECTION_ERITOOLSTABLE_RODATA__ =
{
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 };

 const S_EriRequestTable Table3[] __SECTION_ERITOOLSTABLE_RODATA__ =
{
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 };

 const S_EriRequestTable Table4[] __SECTION_ERITOOLSTABLE_RODATA__ =
{
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 };

 const S_EriRequestTable Table5[] __SECTION_ERITOOLSTABLE_RODATA__ =
{
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 };

 const S_EriRequestTable Table6[] __SECTION_ERITOOLSTABLE_RODATA__ =
{
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 };

 const S_EriRequestTable Table7[] __SECTION_ERITOOLSTABLE_RODATA__ =
{
 {(void* __FAR_POINTER)&g_eProjectID, 0xC0+0x10+0x04+0x01, 0, CLASS_VAR, 1, FLASH, 0, 0, 1}, 
 };



#include <Pragma_Section_End_rodata.h>

const S_EriReqTblList EriRequestTableList[8] =
{
 	{ Table0, 34 },
 	{ Table1, 249 },
 	{ Table2, 1 },
 	{ Table3, 1 },
 	{ Table4, 1 },
 	{ Table5, 1 },
 	{ Table6, 1 },
 	{ Table7, 1 },
 };


    
/* --- LOCAL FUNCTIONS ------------------------------------------------------------------------------------*/

S_EriReqTblList const* GetERIRequestTablePtr(uint1 table)
{
    return (&EriRequestTableList[table]);
}


