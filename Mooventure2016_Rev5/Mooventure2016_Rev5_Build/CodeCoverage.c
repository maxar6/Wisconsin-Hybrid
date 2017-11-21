/*
 * CodeCoverage.c
 *
 */

/*---- INCLUDE FILES --------------------------------------------------------------------------------------*/
#include "CommonInclude.h"
#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

/*---- CODE SPACE -----------------------------------------------------------------------------------------*/
#include <Pragma_Section_Start_CC_Code.h>
#include <Pragma_Section_End_data.h>
#include <Pragma_Section_End_bss.h>

uint32_T CodeCoveredBits[10];

/*---------------------------------------------------------------------------------------------------------*/
void MH_CodeCovered(uint32_T idx)
/*---------------------------------------------------------------------------------------------------------*/
{
  uint32_T index = (idx >> 5);
  uint32_T mask = (1 << (idx & 0x1F));
  CodeCoveredBits[index] |= mask;
}

/* Name: CodeCoverParent000 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[0] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000000 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 0  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000001 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 1  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000002 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 2  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000003 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 3  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000004 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 4  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000005 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 5  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000006 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 6  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000007 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 7  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000008 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 8  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000009 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 9  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000010 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 10  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000011 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 11  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000012 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 12  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000013 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 13  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000014 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 14  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000015 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 15  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe/motohawk_override_abs/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000016 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 16  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe/motohawk_override_abs/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000017 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 17  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000018 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 18  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000019 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 19  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000020 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 20  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000021 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 21  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000022 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 22  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000023 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 23  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000024 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 24  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000025 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 25  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000026 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 26  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000027 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 27  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000028 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 28  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000029 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 29  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000030 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 30  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000031 ClassID:BIT ParentVar:CodeCoverParent000 BitNo: 31  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent001 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[1] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000032 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 0  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000033 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 1  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000034 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 2  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000035 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 3  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000036 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 4  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000037 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 5  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000038 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 6  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000039 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 7  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000040 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 8  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000041 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 9  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000042 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 10  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000043 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 11  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000044 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 12  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000045 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 13  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000046 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 14  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000047 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 15  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000048 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 16  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000049 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 17  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000050 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 18  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000051 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 19  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000052 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 20  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000053 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 21  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000054 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 22  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000055 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 23  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000056 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 24  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000057 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 25  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000058 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 26  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000059 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 27  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000060 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 28  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000061 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 29  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000062 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 30  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000063 ClassID:BIT ParentVar:CodeCoverParent001 BitNo: 31  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent002 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[2] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000064 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 0  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000065 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 1  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000066 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 2  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000067 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 3  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000068 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 4  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000069 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 5  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000070 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 6  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000071 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 7  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000072 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 8  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000073 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 9  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000074 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 10  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000075 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 11  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000076 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 12  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000077 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 13  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000078 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 14  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000079 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 15  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000080 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 16  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000081 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 17  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000082 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 18  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000083 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 19  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000084 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 20  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000085 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 21  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000086 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 22  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000087 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 23  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000088 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 24  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000089 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 25  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000090 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 26  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000091 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 27  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000092 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 28  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000093 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 29  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000094 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 30  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000095 ClassID:BIT ParentVar:CodeCoverParent002 BitNo: 31  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent003 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[3] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000096 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 0  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000097 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 1  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000098 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 2  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000099 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 3  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000100 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 4  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000101 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 5  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000102 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 6  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000103 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 7  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000104 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 8  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000105 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 9  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000106 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 10  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000107 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 11  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000108 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 12  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000109 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 13  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000110 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 14  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000111 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 15  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000112 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 16  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000113 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 17  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000114 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 18  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000115 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 19  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000116 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 20  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000117 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 21  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000118 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 22  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000119 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 23  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000120 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 24  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000121 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 25  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000122 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 26  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000123 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 27  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000124 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 28  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000125 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 29  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000126 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 30  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000127 ClassID:BIT ParentVar:CodeCoverParent003 BitNo: 31  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent004 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[4] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000128 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 0  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000129 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 1  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000130 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 2  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000131 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 3  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000132 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 4  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000133 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 5  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000134 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 6  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000135 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 7  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000136 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 8  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000137 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 9  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000138 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 10  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000139 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 11  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000140 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 12  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000141 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 13  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000142 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 14  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000143 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 15  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000144 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 16  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000145 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 17  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000146 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 18  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000147 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 19  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000148 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 20  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000149 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 21  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000150 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 22  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000151 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 23  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000152 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 24  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000153 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 25  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000154 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 26  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000155 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 27  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000156 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 28  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000157 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 29  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000158 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 30  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000159 ClassID:BIT ParentVar:CodeCoverParent004 BitNo: 31  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent005 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[5] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000160 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 0  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000161 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 1  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000162 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 2  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000163 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 3  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000164 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 4  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000165 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 5  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000166 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 6  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000167 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 7  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000168 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 8  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000169 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 9  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000170 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 10  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000171 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 11  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000172 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 12  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000173 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 13  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000174 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 14  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000175 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 15  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000176 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 16  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000177 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 17  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000178 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 18  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000179 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 19  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000180 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 20  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000181 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 21  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000182 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 22  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000183 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 23  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000184 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 24  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000185 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 25  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000186 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 26  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000187 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 27  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000188 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 28  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000189 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 29  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000190 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 30  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000191 ClassID:BIT ParentVar:CodeCoverParent005 BitNo: 31  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent006 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[6] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000192 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 0  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000193 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 1  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000194 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 2  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000195 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 3  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000196 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 4  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000197 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 5  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000198 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 6  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000199 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 7  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000200 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 8  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000201 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 9  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000202 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 10  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000203 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 11  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000204 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 12  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000205 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 13  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000206 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 14  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000207 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 15  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000208 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 16  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000209 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 17  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000210 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 18  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000211 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 19  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000212 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 20  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000213 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 21  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000214 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 22  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000215 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 23  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000216 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 24  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000217 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 25  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000218 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 26  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000219 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 27  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000220 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 28  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000221 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 29  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000222 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 30  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000223 ClassID:BIT ParentVar:CodeCoverParent006 BitNo: 31  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent007 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[7] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000224 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 0  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000225 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 1  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000226 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 2  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000227 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 3  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000228 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 4  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000229 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 5  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000230 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 6  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000231 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 7  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000232 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 8  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000233 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 9  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000234 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 10  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000235 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 11  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000236 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 12  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000237 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 13  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000238 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 14  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000239 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 15  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000240 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 16  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000241 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 17  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000242 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 18  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000243 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 19  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000244 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 20  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000245 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 21  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000246 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 22  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000247 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 23  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000248 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 24  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000249 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 25  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000250 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 26  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000251 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 27  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000252 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 28  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000253 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 29  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000254 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 30  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000255 ClassID:BIT ParentVar:CodeCoverParent007 BitNo: 31  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent008 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[8] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000256 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 0  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000257 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 1  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000258 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 2  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000259 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 3  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000260 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 4  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000261 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 5  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000262 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 6  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000263 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 7  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000264 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 8  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000265 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 9  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000266 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 10  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000267 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 11  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000268 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 12  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000269 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 13  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000270 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 14  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000271 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 15  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000272 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 16  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000273 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 17  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000274 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 18  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000275 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 19  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000276 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 20  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000277 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 21  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000278 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 22  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000279 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 23  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000280 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 24  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000281 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 25  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000282 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 26  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000283 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 27  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000284 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 28  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000285 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 29  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000286 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 30  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000287 ClassID:BIT ParentVar:CodeCoverParent008 BitNo: 31  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
/* Name: CodeCoverParent009 ClassID:BITVAR Access:RO4+RO3+RO2+RO1 Format:8.0 StorageID:RAM UpdateID:BACKGND TypeID:UINT4 Struct:CodeCoveredBits[9] Help:"Run Status of Subsystems" Group:"System | Code Coverage" */

/* Name: CodeCover000288 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 0  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call/Clear" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000289 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 1  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/Display Variable Event Function-Call1/Clear" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000290 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 2  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000291 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 3  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000292 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 4  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/Processor Reboot" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000293 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 5  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000294 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 6  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000295 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 7  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000296 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 8  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/Shutdown power on ECU565-128/Shutdown power on ECU565-128" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000297 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 9  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/NewValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000298 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 10  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_override_abs/OldValue" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000299 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 11  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_restore_nvmem" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */

/* Name: CodeCover000300 ClassID:BIT ParentVar:CodeCoverParent009 BitNo: 12  TrueTxt:"-" FalseTxt:"Mooventure2016_Rev5/Main Power Relay1/Background/motohawk_store_nvmem" Help:"Determines if this subsystem has run" Group:"System | Code Coverage" */
