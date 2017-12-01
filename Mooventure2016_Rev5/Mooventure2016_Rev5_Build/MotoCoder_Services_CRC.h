
/* MotoCoder_Services_CRC.h */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2017-11-29 16:59:11 */
/* Copyright: 2017 Woodward. */


#ifndef MOTOCODER_SERVICES_CRC_H
#define MOTOCODER_SERVICES_CRC_H



#include <MotoCoder_Types.h>
#include <MotoCoder.h>
#include <MTTypes.h>
#include <Processor_CompilerDefn.h>
	


/* Single function calculates CRC of range */
NativeBool MC_Services_CRC32_Perform_Sync(void* __FAR_POINTER in_pStartAddress, void* __FAR_POINTER in_pEndAddress, uint32_T* const out_p32CRC);
/* Individual accessors allow cumulative CRC */
NativeBool MC_Services_CRC32_Verify(void);
NativeBool MC_Services_CRC32_Init(uint32_T* const out_p32CRC);
NativeBool MC_Services_CRC32_Accumulate(void* __FAR_POINTER in_pStartAddress, uint32_T in_NumBytes, uint32_T* const in_out_p32CRC);
uint32_T MC_Services_CRC32_ReturnValue(uint32_T const* const in_out_pCRCValue);

/* Single function calculates CheckSum of range */
NativeBool MC_Services_AdditiveCRC_Perform_Sync(void* __FAR_POINTER in_pStartAddress, void* __FAR_POINTER in_pEndAddress, uint32_T* const out_p32CheckSum);



#endif

