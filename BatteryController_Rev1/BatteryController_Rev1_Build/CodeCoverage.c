/*
 * CodeCoverage.c
 *
 */

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "CommonInclude.h"
#include "BatteryController_Rev1.h"
#include "BatteryController_Rev1_private.h"

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_text_code.h>
#include <Pragma_Section_End_data.h>
#include <Pragma_Section_End_bss.h>

uint32_T CodeCoveredBits[5];

/*---------------------------------------------------------------------------------------------------------*/
void MH_CodeCovered(uint32_T idx)
/*---------------------------------------------------------------------------------------------------------*/
{
  uint32_T index = (idx >> 5);
  uint32_T mask = (1 << (idx & 0x1F));
  CodeCoveredBits[index] |= mask;
}

/* Name: CodeCoverParent000 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[0] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000000 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 0  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000001 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 1  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000002 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 2  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command/Adjust ID" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000003 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 3  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Daq Processing" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000004 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 4  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP IDLE Processing" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000005 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 5  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000006 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 6  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000007 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 7  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Control/AMP Clamp/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000008 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 8  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000009 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 9  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000010 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 10  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000011 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 11  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Control/Battery States/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000012 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 12  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Control/SOC/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000013 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 13  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Control/SOC/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000014 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 14  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000015 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 15  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000016 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 16  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000017 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 17  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000018 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 18  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000019 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 19  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000020 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 20  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000021 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 21  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000022 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 22  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000023 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 23  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000024 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 24  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs8/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000025 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 25  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs8/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000026 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 26  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000027 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 27  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/2G BMS/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000028 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 28  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000029 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 29  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000030 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 30  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000031 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 31  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/AMP Clamp/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent001 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[1] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000032 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 0  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/Save NV on disconnect" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000033 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 1  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/Save NV on disconnect/Save NV Vars one tick before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000034 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 2  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs10/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000035 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 3  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs10/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000036 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 4  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs11/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000037 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 5  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs11/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000038 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 6  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs8/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000039 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 7  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs8/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000040 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 8  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000041 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 9  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Inputs/Contactors/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000042 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 10  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000043 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 11  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000044 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 12  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs10/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000045 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 13  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs10/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000046 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 14  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs11/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000047 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 15  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs11/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000048 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 16  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs12/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000049 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 17  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs12/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000050 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 18  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs13/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000051 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 19  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs13/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000052 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 20  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs14/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000053 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 21  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs14/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000054 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 22  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs15/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000055 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 23  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs15/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000056 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 24  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs16/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000057 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 25  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs16/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000058 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 26  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs17/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000059 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 27  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs17/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000060 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 28  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs18/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000061 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 29  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs18/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000062 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 30  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs19/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000063 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 31  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs19/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent002 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[2] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000064 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 0  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000065 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 1  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000066 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 2  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs20/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000067 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 3  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs20/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000068 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 4  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs21/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000069 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 5  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs21/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000070 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 6  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs22/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000071 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 7  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs22/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000072 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 8  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs23/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000073 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 9  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs23/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000074 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 10  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs24/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000075 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 11  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs24/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000076 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 12  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs25/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000077 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 13  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs25/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000078 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 14  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs26/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000079 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 15  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs26/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000080 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 16  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs27/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000081 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 17  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs27/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000082 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 18  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs28/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000083 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 19  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs28/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000084 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 20  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs29/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000085 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 21  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs29/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000086 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 22  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000087 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 23  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000088 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 24  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs30/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000089 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 25  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs30/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000090 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 26  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs31/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000091 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 27  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs31/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000092 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 28  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs32/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000093 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 29  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs32/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000094 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 30  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs33/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000095 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 31  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs33/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent003 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[3] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000096 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 0  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs34/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000097 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 1  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs34/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000098 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 2  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000099 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 3  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000100 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 4  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000101 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 5  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000102 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 6  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000103 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 7  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000104 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 8  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000105 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 9  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000106 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 10  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs8/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000107 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 11  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs8/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000108 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 12  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000109 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 13  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Battery/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000110 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 14  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000111 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 15  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000112 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 16  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000113 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 17  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000114 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 18  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000115 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 19  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000116 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 20  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000117 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 21  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000118 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 22  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000119 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 23  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000120 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 24  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000121 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 25  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000122 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 26  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000123 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 27  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Foreground/Battery/Outputs/Contactors/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000124 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 28  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000125 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 29  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call/Clear" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000126 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 30  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1/Clear" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000127 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 31  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent004 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[4] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000128 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 0  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000129 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 1  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/Processor Reboot" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000130 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 2  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000131 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 3  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000132 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 4  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000133 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 5  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000134 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 6  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/motohawk_override_abs/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000135 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 7  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/motohawk_override_abs/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000136 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 8  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/motohawk_restore_nvmem" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000137 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 9  TrueTxt:"-" FalseTxt:"BatteryController_Rev1/Main Power Relay/Background/motohawk_store_nvmem" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
