/*
 * Application.c
 *
 */

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "Application.h"
#include "Mooventure2016_Rev5.h"

/*---- DEFINES --------------------------------------------------------------------------------------------*/
#define DLL_NAME                       "Mooventur_206"
#define SRZ_NAME                       "Mooventure2016_Rev5_206"
#define MODEL_NAME                     "Mooventure2016_Rev5"
#define MODEL_GUID                     "0339744d-1465-4569-a1-b4-32-b1-a7-fa-5f"
#define BUILD_GUID                     "d75dda54-7249-4f71-be-33-4c-53-a5-c0-fd"
#define TOKEN_GUID                     "DD8AD11F95A6FC42BFF9AC780840E4B4"
#define MOTOHAWK_VERSION               "MotoHawk 2011a_sp0.184"
#define MATLAB_VERSION                 "MATLAB 7.12.0"
#define COMPILER_VERSION               "gcc-powerpc-eabispe 4.4.0"

/*---- TYPEDEF --------------------------------------------------------------------------------------------*/

/*---- FUNCTION PROTOTYPES --------------------------------------------------------------------------------*/
void OpenApplication(void);

/*---- CONSTANTS ------------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_Strings_rodata.h>

/* Name: MotoHawkModelName CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkModelName[0] Group:"System | Version" Help:"Simulink model name used for the MotoHawk build" */
const uint1 MotoHawkModelName[80] = MODEL_NAME;

/* Name: CompilerVersion CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:CompilerVersion[0] Group:"System | Version" Help:"Compiler toolchain version used for the MotoHawk build" */
const uint1 CompilerVersion[80] = COMPILER_VERSION;

/* Name: MotoHawkVersionTxt CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:50
   Struct:MotoHawkVersionTxt[0] Group:"System | Version" Help:"MotoHawk version used to build the application." */
const uint1 MotoHawkVersionTxt[50] = MOTOHAWK_VERSION;

/* Name: MatlabVersionTxt CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MatlabVersionTxt[0] Group:"System | Version" Help:"MATLAB version used to build the application." */
const uint1 MatlabVersionTxt[80] = MATLAB_VERSION;

/* Name: MotoHawkModelGUID CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkModelGUID[0] Group:"System | Version" Help:"GUID identifying the MotoHawk model" */
const uint1 MotoHawkModelGUID[80] = MODEL_GUID;

/* Name: MotoHawkBuildGUID CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkBuildGUID[0] Group:"System | Version" Help:"GUID identifying the MotoHawk build session" */
const uint1 MotoHawkBuildGUID[80] = BUILD_GUID;

/* Name: MotoHawkTokenGUID CType:uint1 ClassID:TEXT StorageID:CODE Access:RO4+RO3+RO2+RO1 UpdateID:ONCE TextLen:80
   Struct:MotoHawkTokenGUID[0] Group:"System | Version" Help:"GUID identifying the token inserted during the build.  May be empty if no token was available" */
const uint1 MotoHawkTokenGUID[80] = TOKEN_GUID;

#include <Pragma_Section_End_rodata.h>

/*---- APPLICATION STACKS ---------------------------------------------------------------------------------*/

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_CC_Code.h>

/*---- LOCAL FUNCTIONS ------------------------------------------------------------------------------------*/

/* Supply the calibration for CityID, when requested */
void mh_CAN_1_CityID_Update (uint8_T* CAN_1_CityID)
{
  if (CAN_1_CityID != 0) {
    *CAN_1_CityID = (CityID_CAN_1_DataStore());
  }
}

/* Supply the calibration for CityID, when requested */
void mh_CAN_2_CityID_Update (uint8_T* CAN_2_CityID)
{
  if (CAN_2_CityID != 0) {
    *CAN_2_CityID = (CityID_CAN_2_DataStore());
  }
}

/* Supply the calibration for CityID, when requested */
void mh_CAN_3_CityID_Update (uint8_T* CAN_3_CityID)
{
  if (CAN_3_CityID != 0) {
    *CAN_3_CityID = (CityID_CAN_3_DataStore());
  }
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   :: CloseApplication
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
void CloseApplication(void)
{
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
   :: OpenApplication
   :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
void OpenApplication(void)
{
  /* Initialize Fault Manager */
  {
    uint32_T i;
    for (i=0; i < 93; i++) {
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

  /* Initialize Application Model: Mooventure2016_Rev5 */
  Mooventure2016_Rev5_initialize(1);
  Mooventure2016_Rev5_step();
}

/*---- END OF FILE ----------------------------------------------------------------------------------------*/
