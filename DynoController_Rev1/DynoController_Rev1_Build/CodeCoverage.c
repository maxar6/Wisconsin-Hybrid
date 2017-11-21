/*
 * CodeCoverage.c
 *
 */

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "CommonInclude.h"
#include "DynoController_Rev1.h"
#include "DynoController_Rev1_private.h"

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_text_code.h>
#include <Pragma_Section_End_data.h>
#include <Pragma_Section_End_bss.h>

uint32_T CodeCoveredBits[3];

/*---------------------------------------------------------------------------------------------------------*/
void MH_CodeCovered(uint32_T idx)
/*---------------------------------------------------------------------------------------------------------*/
{
  uint32_T index = (idx >> 5);
  uint32_T mask = (1 << (idx & 0x1F));
  CodeCoveredBits[index] |= mask;
}

/* Name: CodeCoverParent000 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[0] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000000 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 0  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000001 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 1  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000002 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 2  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Control/Battery/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000003 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 3  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000004 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 4  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000005 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 5  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000006 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 6  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000007 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 7  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000008 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 8  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000009 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 9  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000010 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 10  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000011 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 11  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000012 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 12  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000013 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 13  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000014 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 14  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/Analog Inputs/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000015 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 15  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000016 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 16  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000017 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 17  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000018 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 18  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000019 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 19  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000020 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 20  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000021 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 21  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000022 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 22  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000023 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 23  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000024 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 24  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/BATTERY/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000025 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 25  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000026 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 26  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000027 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 27  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000028 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 28  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000029 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 29  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000030 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 30  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000031 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 31  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent001 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[1] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000032 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 0  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000033 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 1  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000034 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 2  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000035 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 3  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000036 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 4  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000037 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 5  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000038 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 6  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Inputs/CAN Inputs/DYNO/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000039 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 7  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000040 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 8  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000041 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 9  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000042 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 10  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000043 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 11  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000044 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 12  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000045 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 13  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000046 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 14  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000047 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 15  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000048 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 16  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000049 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 17  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000050 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 18  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000051 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 19  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000052 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 20  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000053 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 21  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000054 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 22  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Analog Outputs/motohawk_override_abs8/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000055 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 23  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000056 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 24  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000057 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 25  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000058 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 26  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/CAN Outputs/BATTERY OUT/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000059 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 27  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000060 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 28  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000061 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 29  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000062 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 30  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000063 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 31  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent002 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[2] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000064 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 0  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/CAN Outputs/DYNO OUT/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000065 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 1  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000066 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 2  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000067 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 3  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000068 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 4  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000069 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 5  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000070 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 6  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000071 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 7  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000072 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 8  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Foreground/Outputs/Guages/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000073 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 9  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000074 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 10  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call/Clear" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000075 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 11  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/Display Variable Event Function-Call1/Clear" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000076 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 12  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000077 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 13  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000078 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 14  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/Processor Reboot" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000079 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 15  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000080 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 16  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000081 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 17  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000082 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 18  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000083 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 19  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000084 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 20  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/motohawk_override_abs/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000085 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 21  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/motohawk_restore_nvmem" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000086 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 22  TrueTxt:"-" FalseTxt:"DynoController_Rev1/Main Power Relay/Background/motohawk_store_nvmem" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
