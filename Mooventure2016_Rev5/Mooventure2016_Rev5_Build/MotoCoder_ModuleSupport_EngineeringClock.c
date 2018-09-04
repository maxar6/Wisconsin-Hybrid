
/* MotoCoder_ModuleSupport_EngineeringClock.c */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2018-09-04 13:38:00 */
/* Copyright: 2018 Woodward. */


#include <Module.h>
#include <Processor.h>


        
/*---- DEFINES --------------------------------------------------------------------------------------------*/    


/* Catch whether we know our system frequency because we should */
#ifndef __SYSTEM_CLOCK_FREQ_IN_HZ
    #error The define __SYSTEM_CLOCK_FREQ_IN_HZ should exist
#endif

#if (__SYSTEM_CLOCK_FREQ_IN_HZ != 80000000)
    #error Module Descriptor CPU SystemFrequency does not match archive frequency
#endif

/*---- TYPEDEF --------------------------------------------------------------------------------------------*/

/*---- FUNCTION PROTOTYPES --------------------------------------------------------------------------------*/

/*---- EXTERNALS ------------------------------------------------------------------------------------------*/

/*---- CONSTANTS ------------------------------------------------------------------------------------------*/

/*---- LOCAL FUNCTIONS ------------------------------------------------------------------------------------*/

#include <Pragma_Section_Start_CC_Code.h>

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: ModuleSupport_EngineeringClock_Open
::
:: Enable or Disable the engineering clock as required by the module and set the frequency of operation when
:: it is enabled.
:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
void ModuleSupport_EngineeringClock_Open(void)
{

    uint32_T uECCR;
	
    /* Engineering Clock Configuration */
    /* 6.3.1.19 External Clock Control Register (SIU_ECCR) of MPC5553_MPC5554 Ref Manual(version 4.0) */
    /* ENGDIV = 80000000 / (4000000 * 2) */ 
    uECCR = 10 << 8;
    uECCR |= ECCR_EBDF_SYS_CLOCK_DIVIDE_BY_2;
    uECCR |= (ECCR_EBTS_ZERO_OUTPUT_HOLD_TIMES << 3);
    g_SIUModule.ECCR.u32Reg = uECCR;

    /* 6.3.1.12.104 Pad Configuration Register 214 (SIU_PCR214) of MPC5553_MPC5554 Ref Manual(version 4.0) */
    /* Enable the ENGCLK pin */
    g_SIUModule.PCR_ObjArr[214].u16Reg = 0x02C0;
	
}

#include <Pragma_Section_End_Code.h>

/*---- END OF FILE ----------------------------------------------------------------------------------------*/



