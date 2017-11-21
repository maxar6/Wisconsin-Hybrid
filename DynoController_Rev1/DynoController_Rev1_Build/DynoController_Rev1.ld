				/*
####################################################################################################
#
#   Module      :   MPC555 Linker Directive option file
#   Copyright   :   (C)2002-2009 Woodward
#   Platform(s) :   MPC555 / gcc-powerpc-eabi
#   Limitations :   NONE
#
#---------------------------------------------------------------------------------------------------
#                  
#   This is the global Linker Directive file to be used with MPC555 based applications.
####################################################################################################
*/
OUTPUT_ARCH(powerpc:common)
PROVIDE (__stack = 0);
ENTRY(Entry)
EXTERN(Entry)
EXTERN(ExceptionBranchTable)
EXTERN(g_pCRCBlockPtr)



MEMORY
{
    MODULECONFIG_SPACE    : ORIGIN = 0x00007000 ,     LENGTH = 0x00000FFF

    EXCEPTION_BRANCHTABLE : ORIGIN = 0x00008000 ,     LENGTH = 0x00000100
    APPLICATION_CRC       : ORIGIN = 0x00008100 ,     LENGTH = 0x00000008
    FLASH                 : ORIGIN = 0x00008108 ,     LENGTH = 0x00057EF8
    INTERNAL_RAM          : ORIGIN = 0x003F9800 ,     LENGTH = (26K - 0x10 - 0x40)
    BOOT_MAILBOX_SPACE    : ORIGIN = 0x003FFFB0 ,     LENGTH = 0x10
    SOFTVECTORS_SPACE     : ORIGIN = 0x003FFFC0 ,     LENGTH = 0x40
    
    TPU_A_SPACE           : ORIGIN = 0x00304100 ,     LENGTH = 256
    TPU_B_SPACE           : ORIGIN = 0x00304500 ,     LENGTH = 256

    EXTENDED_RAM          : ORIGIN = 0x02000000 ,     LENGTH = 1024k
    EEPROM_SPACE          : ORIGIN = 0x00070000 ,     LENGTH = 8192
    PROSAK_SPACE          : ORIGIN = 0x00072000 ,     LENGTH = 0x00000204
    RUNTIME_STARTUP_STACK : ORIGIN = 0x00302000 ,     LENGTH = 2048
/*
#########################################################################################################
   CAL SPACE is generated according to the Memory Layout pulldown option in the Target Definition Block
-----------------------------------------------------------------------------------------------------------
   For a DEV configuration calibrations are placed at 0x00400000  ( default ) 
   For a PROD configuration calibrations are placed at 0x00060000 
###########################################################################################################
*/
    CAL_SPACE             : ORIGIN = 0x00400000 ,     LENGTH = 64K
}

SECTIONS
{   
    .moduleconfig :
    {
    	*(.moduleconfig)
    } > MODULECONFIG_SPACE

    .exceptionbranchtable :                                                    
	{
        PROVIDE (__ghsbegin_startofexcepttable = .);
    	*(.exceptionbranchtable)
        PROVIDE (__ghsbegin_endofexcepttable = .);
    } > EXCEPTION_BRANCHTABLE   

    .applicationcrc :                                                    
	{
    	*(.applicationcrc)
    } > APPLICATION_CRC
       
    .text :
    {
        PROVIDE (__ghsbegin_startofflash = .);

	    *(.text .stub .text.* .gnu.linkonce.t.*)
	    /* .gnu.warning sections are handled specially by elf32.em.  */
	    *(.gnu.warning)
	    *(.glink)

  		*(.code .code.*)
  		*(.oscode .oscode.*)
  		*(.fwcode .fwcode.*)

  		*(.rodata .rodata.* .gnu.linkonce.r.*)
  		*(.constants .constants.*)
  		*(.osconstants .osconstants.*)
  		*(.fwconstants .fwconstants.*)

	} > FLASH

	.init :
	{
		KEEP (*(.init))
	} > FLASH

	.fini :
	{
		KEEP (*(.fini))
	} > FLASH

	.ctors :
	{
		/* gcc uses crtbegin.o to find the start of
		   the constructors, so we make sure it is
		   first.  Because this is a wildcard, it
		   doesn't matter if the user does not
		   actually link against crtbegin.o; the
		   linker won't look for a file to match a
		   wildcard.  The wildcard also means that it
		   doesn't matter which directory crtbegin.o
		   is in.  */
		KEEP (*crtbegin.o(.ctors))
		KEEP (*crtbegin?.o(.ctors))
		/* We don't want to include the .ctor section from
		   the crtend.o file until after the sorted ctors.
		   The .ctor section from the crtend file contains the
		   end of ctors marker and it must be last */
		KEEP (*(EXCLUDE_FILE (*crtend.o *crtend?.o ) .ctors))
		KEEP (*(SORT(.ctors.*)))
		KEEP (*(.ctors))
	}	> FLASH

	.dtors :
	{
		KEEP (*crtbegin.o(.dtors))
		KEEP (*crtbegin?.o(.dtors))
		KEEP (*(EXCLUDE_FILE (*crtend.o *crtend?.o ) .dtors))
		KEEP (*(SORT(.dtors.*)))
		KEEP (*(.dtors))
	}	 > FLASH

	.jcr :
	{ 
		KEEP (*(.jcr))
	} > FLASH
	
	.data.rel.ro : 
	{ 
		*(.data.rel.ro.local* .gnu.linkonce.d.rel.ro.local.*)
		*(.data.rel.ro* .gnu.linkonce.d.rel.ro.*)
	} > FLASH
	
	.fixup : 
	{ 
		*(.fixup)
	} > FLASH
	
	.got1 :
	{
		*(.got1)
	} > FLASH
	
	.got2 :
	{
		*(.got2)
	} > FLASH
	
	.dynamic :
	{
		*(.dynamic)
	} > FLASH
	
	.got : SPECIAL
	{
		*(.got)
	} > FLASH

    .sdata2 ALIGN(4) :
    {
        PROVIDE (_SDA2_BASE_ = 32768);
        PROVIDE (__SDATA2_START__ = .);
        *(.sdata2 .sdata2.* .gnu.linkonce.s2.*)
    } > FLASH

    .sbss2 ALIGN(4) : 
    { 
        *(.sbss2 .sbss2.* .gnu.linkonce.sb2.*)
        PROVIDE (__SBSS2_END__ = .);
    } > FLASH

    PROVIDE (__ghsbegin_endofflash = .);

    /* romcals go outside of the CRC'd area */
    .fixed_romcals ALIGN(4) :
    {
  		*(.fixed_romcals .fixed_romcals.*)
    } > FLASH
    .romcals ALIGN(4) :
    {
  		*(.romcals .romcals.*)
    } > FLASH


    /*
    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    // This Section contains the CRC table that is filled post build. Locate this section at the end of
    // the flash region that is to have a CRC performed. The address of the CRC object will be used to
    // resolve where the end of the flash is so that a linker name does not need to be exported since this
    // is GHS tool set dependent
    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    */
    .crcconstants ALIGN(4) :
    {
  		*(.crcconstants .crcconstants.*)
    } > FLASH

  	/* We want the small data sections together, so single-instruction offsets
     can access them all, and initialized data all before uninitialized, so
     we can shorten the on-disk segment size.  */
	__sdata_start_lma = ALIGN((ADDR (.crcconstants) + SIZEOF(.crcconstants)), 4);
	.sdata : AT (__sdata_start_lma)
	{
	    PROVIDE (__ghsbegin_startofRAM = .);
		PROVIDE (_SDA_BASE_ = 32768);
        PROVIDE (__sdata_start = .);
        PROVIDE (__SDATA_START__ = .);
		*(.sdata .sdata.* .gnu.linkonce.s.*)
	    PROVIDE (__sdata_end = .);
	} > INTERNAL_RAM
    ASSERT((ADDR(.sdata) == ALIGN(ADDR(.sdata), 4)), "Section .sdata must be 4 byte aligned.")

	.sbss ALIGN(4) (NOLOAD) :
	{
	    PROVIDE (__sbss_start = .);
		*(.sbss .sbss.* .gnu.linkonce.sb.*)
		*(.scommon .scommon.*)
	    PROVIDE (__sbss_end = .);
        PROVIDE (__SBSS_END__ = .);
	} > INTERNAL_RAM

	__data_start_lma = ALIGN((__sdata_start_lma + SIZEOF(.sdata)), 4);
  	.data ALIGN(4) : AT (__data_start_lma)
  	{
	    PROVIDE (__data_start = .);
    	*(.data .data.* .gnu.linkonce.d.*)
	    PROVIDE (__data_end = .);
  	} > INTERNAL_RAM

	.bss ALIGN(4) (NOLOAD) :
	{
	    PROVIDE (__bss_start = .);
		*(.bss .bss.* .gnu.linkonce.b.*)
		*(.comm .comm.*)
		*(.zerovars .zerovars.*)
		*(.oszerovars .oszerovars.*)
		*(.fwzerovars .fwzerovars.*)
	} > INTERNAL_RAM

	.fixed_ramcals ALIGN(4) (NOLOAD) :
	{
		*(.fixed_ramcals .fixed_ramcals.*)
    } > INTERNAL_RAM
	.ramcals ALIGN(4) (NOLOAD) :
	{
		*(.ramcals .ramcals.*)
    } > INTERNAL_RAM


	.osnonzerovars ALIGN(4) (NOLOAD) :
	{
		*(.osnonzerovars .osnonzerovars.*)
    } > INTERNAL_RAM

	/* This area used for stacks */
	.bss_zerovars ALIGN(8) (NOLOAD) :
	{
		*(.bss_zerovars .bss_zerovars.*)
	} > INTERNAL_RAM

    .heap ALIGN(16) (NOLOAD) :
    {
        PROVIDE (__heap_start = .);
        PROVIDE (__ghsbegin_heap = .);
        . += 4096;
        PROVIDE (__ghsend_heap = .);
        PROVIDE (__heap_end = .);
    } > INTERNAL_RAM
    PROVIDE (_end = .);
    PROVIDE (__ghsbegin_endofRAM = .);

    /* Empty section for this target.  Here simply to define the symbols for crt0 */
    .bssextended (NOLOAD) :
    {
	    PROVIDE (__ghsbegin_startofExtendedRAM = .);
	    PROVIDE (__bssextended_start = .);
	    PROVIDE (__bssextended_end = .);
    } > EXTENDED_RAM
    ASSERT((ADDR(.bssextended) == ALIGN(ADDR(.bssextended), 4)), "Section .bssextended must be 4 byte aligned.")

    __dataextended_start_lma = ALIGN((__data_start_lma + SIZEOF(.data)), 4);
  	.dataextended ALIGN(4) : AT (__dataextended_start_lma)
  	{
	    PROVIDE (__dataextended_start = .);
	    PROVIDE (__dataextended_end = .);
	    PROVIDE (__ghsbegin_endofExtendedRAM = .);
  	} > EXTENDED_RAM 
	ASSERT(( __dataextended_start_lma + SIZEOF(.dataextended) <= 0x00060000), "Initialization of RAM variables do not fit in FLASH.")

    .cals :
    {
        PROVIDE (__ghsbegin_startofcals = .);
  		*(.cals .cals.*)
  		*(.oscals .oscals.*)
  		*(.fwcals .fwcals.*)
        PROVIDE (__ghsbegin_endofcals = .);
        PROVIDE (__ghsend_endofcals = .);
    } > CAL_SPACE
    ASSERT((ADDR(.cals) == ALIGN(ADDR(.cals), 4)), "Section .cals must be 4 byte aligned.")

	.stack :
	{
        PROVIDE (__ghsbegin_startofruntimestack = .);
        . += 2048;
        PROVIDE (__ghsbegin_endofruntimestack = .);
	} > RUNTIME_STARTUP_STACK
    ASSERT((ADDR(.stack) == ALIGN(ADDR(.stack), 8)), "Section .stack must be 8 byte aligned.")

    .tpuapararam :
    {
        PROVIDE (__ghsbegin_tpuapararam = .);
  		*(.tpuapararam)
    } > TPU_A_SPACE
    .tpubpararam :
    {
  		*(.tpubpararam)
    } > TPU_B_SPACE

    .ee_spi_start :
    {
        PROVIDE (__ghsbegin_ee_spi_start = .);
  		*(.ee_spi_start)
    } > EEPROM_SPACE
    ASSERT((SIZEOF(.ee_spi_start) == 0), "Section .ee_spi_start should be zero length")

    .ee_abs_addr_start :
    {
        PROVIDE (__ghsbegin_ee_abs_addr_start = .);
  		*(.ee_abs_addr_start)
    } > EEPROM_SPACE
    ASSERT((SIZEOF(.ee_abs_addr_start) == 0), "Section .ee_abs_addr_start should be zero length")

    .ee_testcode_status :
    {
        PROVIDE (__ghsbegin_ee_testcode_status = .);
        ee_testcode_status_start = .;
  		*(.ee_testcode_status)
        . += 4 - ((. - ee_testcode_status_start));
        PROVIDE (__ghsend_ee_testcode_status = .);
    } > EEPROM_SPACE
    ASSERT((SIZEOF(.ee_testcode_status) == 4), "Section .ee_testcode_status should be exactly 4 bytes long")

    .ee_mot_mfgr_data :
    {
        PROVIDE (__ghsbegin_ee_mot_mfgr_data = .);
        ee_mot_mfgr_data = .;
  		*(.ee_mot_mfgr_data)
        . += 8 - ((. - ee_mot_mfgr_data));
        PROVIDE (__ghsend_ee_mot_mfgr_data = .);
    } > EEPROM_SPACE
    ASSERT((SIZEOF(.ee_mot_mfgr_data) == 8), "Section .ee_mot_mfgr_data should be exactly 8 bytes long")

    .ee_app_status :
    {
        PROVIDE (__ghsbegin_ee_app_status = .);
        ee_app_status = .;
  		*(.ee_app_status)
        . += 4 - ((. - ee_app_status));
        PROVIDE (__ghsend_ee_app_status = .);
    } > EEPROM_SPACE
    ASSERT((SIZEOF(.ee_app_status) == 4), "Section .ee_app_status should be exactly 4 bytes long")

    .ee_crypto :
    {
        PROVIDE (__ghsbegin_ee_crypto = .);
        ee_crypto = .;
  		*(.ee_crypto)
        . += 128 - ((. - ee_crypto));
        PROVIDE (__ghsend_ee_crypto = .);
    } > EEPROM_SPACE
    ASSERT((SIZEOF(.ee_crypto) == 128), "Section .ee_crypto should be exactly 128 bytes long")

    .ee_unused :
    {
        . += 20;
    } > EEPROM_SPACE

    .ee_standard_start :
    {
        PROVIDE (__ghsbegin_ee_standard_start = .);
  		*(.ee_standard_start)
    } > EEPROM_SPACE
    ASSERT((SIZEOF(.ee_standard_start) == 0), "Section .ee_standard_start should be zero length")


    .ee_CAN :
    {
  		*(.ee_bss_CAN .ee_bss_CAN.*)
  		*(.ee_data_CAN .ee_data_CAN.*)
    } > EEPROM_SPACE
    .ee_engcode :
    {
  		*(.ee_bss_engcode .ee_bss_engcode.*)
  		*(.ee_data_engcode .ee_data_engcode.*)
    } > EEPROM_SPACE
    .ee_diag :
    {
  		*(.ee_bss_diag .ee_bss_diag.*)
  		*(.ee_data_diag .ee_data_diag.*)
    } > EEPROM_SPACE

    .ee_standard_end :
    {
        PROVIDE (__ghsbegin_ee_standard_end = .);
  		*(.ee_standard_end)
    } > EEPROM_SPACE
    ASSERT((SIZEOF(.ee_standard_end) == 0), "Section .ee_standard_end should be zero length")

    .ee_spi_end :
    {
        PROVIDE (__ghsbegin_ee_spi_end = .);
  		*(.ee_spi_end)
    } > EEPROM_SPACE
    ASSERT((SIZEOF(.ee_spi_end) == 0), "Section .ee_spi_end should be zero length")

  	.romdata __data_start_lma (INFO) :
	{
	    PROVIDE (__romdata_start = .);
	}
  	.romsdata __sdata_start_lma (INFO) :
	{
	    PROVIDE (__romsdata_start = .);
	}

	.eh_frame_hdr :
	{ 
		*(.eh_frame_hdr)
	}

	.eh_frame :
	{ 
		*(.eh_frame)
	}

  /* DWARF debug sections.
     Symbols in the DWARF debugging sections are relative to the beginning
     of the section so we begin them at 0.  */
  /* DWARF 1 */
  .debug          0 : { *(.debug) }
  .line           0 : { *(.line) }
  /* GNU DWARF 1 extensions */
  .debug_srcinfo  0 : { *(.debug_srcinfo) }
  .debug_sfnames  0 : { *(.debug_sfnames) }
  /* DWARF 1.1 and DWARF 2 */
  .debug_aranges  0 : { *(.debug_aranges) }
  .debug_pubnames 0 : { *(.debug_pubnames) }
  /* DWARF 2 */
  .debug_info     0 : { *(.debug_info .gnu.linkonce.wi.*) }
  .debug_abbrev   0 : { *(.debug_abbrev) }
  .debug_line     0 : { *(.debug_line) }
  .debug_frame    0 : { *(.debug_frame) }
  .debug_str      0 : { *(.debug_str) }
  .debug_loc      0 : { *(.debug_loc) }
  .debug_macinfo  0 : { *(.debug_macinfo) }
  /* SGI/MIPS DWARF 2 extensions */
  .debug_weaknames 0 : { *(.debug_weaknames) }
  .debug_funcnames 0 : { *(.debug_funcnames) }
  .debug_typenames 0 : { *(.debug_typenames) }
  .debug_varnames  0 : { *(.debug_varnames) }
  /* DWARF 3 */
  .debug_pubtypes 0 : { *(.debug_pubtypes) }
  .debug_ranges   0 : { *(.debug_ranges) }
  .gnu.attributes 0 : { KEEP (*(.gnu.attributes)) }
  /DISCARD/ : { *(.note.GNU-stack) *(.gnu_debuglink) }
}

