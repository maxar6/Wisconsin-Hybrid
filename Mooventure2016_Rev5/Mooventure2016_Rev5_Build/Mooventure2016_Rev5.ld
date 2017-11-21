
OUTPUT_ARCH(powerpc:common)
PROVIDE (__stack = 0);
ENTRY(Entry)
EXTERN(Entry)
EXTERN(EriRequestTableList)


MEMORY
{
    FLASH_RCHW           : ORIGIN = 0x00040000, LENGTH = 0x04
    FLASH_ENTRY          : ORIGIN = 0x00040004, LENGTH = 0x04
    FLASH_CRCDEFNPTR     : ORIGIN = 0x00040008, LENGTH = 0x04
    FLASH_BLOCKDEFNPTR   : ORIGIN = 0x00040010, LENGTH = 0xF0
    FLASH                : ORIGIN = 0x00040100, LENGTH = 1703680
    FLASH_CALIBRATION    : ORIGIN = 0x001E0000, LENGTH = 131008
    
    /***********************************************************************************************************************
    512K External SRAM - Some Modules have external SRAM. We place the external ram above the internal to have
    a contiguous region. 
    ************************************************************************************************************************/
    external_RAM         : ORIGIN = 0x3ff80000, LENGTH = 393216
    RAM_CALIBRATION      : ORIGIN = 0x3ffe0000, LENGTH = 131008
    
    /**********************************************************************************************************************
    64K Internal SRAM
    ***********************************************************************************************************************/
    internal_RAM         : ORIGIN = 0x40000000, LENGTH = 64K-16
    RAM_BOOTMAILBOX      : ORIGIN = 0x40000000+64K-16 LENGTH = 16
    
    /***********************************************************************************************************************
    Serial EE
    ************************************************************************************************************************/
    SERIAL_EE            : ORIGIN = 0xFF000000, LENGTH = 32K
}
    

SECTIONS
{   
    .BootMailBox_bss (NOLOAD) :
    {
    	*(.BootMailBox_bss .BootMailBox_bss.*)
    } > RAM_BOOTMAILBOX

    .RCHW_rodata :                                                    
	{
        PROVIDE(__start_of_app = .);
    	KEEP (*(.RCHW_rodata))
    } > FLASH_RCHW

    .Entry_rodata :                                                    
	{
    	KEEP (*(.Entry_rodata))
    } > FLASH_ENTRY

    .CRCDefnPtr_rodata :                                                    
	{
    	KEEP (*(.CRCDefnPtr_rodata))
    } > FLASH_CRCDEFNPTR

	.BlockDefnPtr_rodata :
	{
    	*(.BlockDefnPtr_rodata .BlockDefnPtr_rodata.*)
    } > FLASH_BLOCKDEFNPTR

    .text :
    {
	    *(.text .stub .text.* .gnu.linkonce.t.*)
	    /* .gnu.warning sections are handled specially by elf32.em.  */
	    *(.gnu.warning)
	    *(.glink)

  		*(.CC_Code .CC_Code.*) 

        /* Leave the actual vectors close to the handler */
        . = ALIGN(0x1000);
    	*(.CC_IRQ_vectors)
        /* .CC_except_handler must IMMEDIATELY follow this symbol address.  Although this section
           could be anywhere in memory, place it after this 4k aligned boundary to guarantee that
           the table never crosses a 16 bit boundary and ensures the upper 16 bits (IVPR) are the same
           for all IVOR handlers. */
        __CC_EXCEPT_HANDLER = .;
        PROVIDE (__CC_EXCEPT_HANDLER = .);
  		*(.CC_except_handler)      /* This must IMMEDIATELY follow the __CC_EXCEPT_HANDLER symbol */

  		*(.rodata .rodata.* .gnu.linkonce.r.*)
  		*(.CC_rodata .CC_rodata.*) 
  		*(.Protocols_rodata .Protocols_rodata.*)
  		*(.dma_word_rodata .dma_word_rodata.*)
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

    /* This is used for explicitly copied Serial EEPROM variables, not for emulated Parallel EEPROM */
    .fixed_romcals  ALIGN(4) :
    {
	    *(.fixed_romcals)
    } > FLASH
    .romcals  ALIGN(4) :
    {
	    *(.romcals)
    } > FLASH





    .sdata2 ALIGN(4) :
    {
        PROVIDE (_SDA2_BASE_ = 32768);
        *(.sdata2 .sdata2.* .gnu.linkonce.s2.*)
  		*(.rosdata .rosdata.*)
  		*(.CC_rosdata .CC_rosdata.*)
  		*(.Protocols_rosdata .Protocols_rosdata.*)
    } > FLASH
    PROVIDE(__end_of_app = .);

    /*
    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    // This Section contains the CRC table that is filled post build. Locate this section at the end of
    // the flash region that is to have a CRC performed. The address of the CRC object will be used to
    // resolve where the end of the flash is so that a linker name does not need to be exported
    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    */
    .CRCConstants_rodata ALIGN(4) :
    {
  		*(.CRCConstants_rodata .CRCConstants_rodata.*)
    } > FLASH
    


    /*
    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Calibration Storage - used for emulated Parallel EEPROM
    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    */
    .flashcals :  
    {
         PROVIDE(__start_of_cal = .);
         KEEP (*(.calibration_storage))
    } > FLASH_CALIBRATION

    PROVIDE(__end_of_cal = .);


	__data_start_lma = ADDR (.CRCConstants_rodata) + SIZEOF(.CRCConstants_rodata);
  	.data : AT (__data_start_lma)
  	{
	    PROVIDE (__data_start = .);
    	*(.data .data.* .gnu.linkonce.d.*)
    	*(.CC_data .CC_data.*)
    	*(.Protocols_data .Protocols_data.*)
	    PROVIDE (__data_end = .);
  	} > internal_RAM

  	/* We want the small data sections together, so single-instruction offsets
     can access them all, and initialized data all before uninitialized, so
     we can shorten the on-disk segment size.  */
	__sdata_start_lma = ADDR (.CRCConstants_rodata) + SIZEOF(.CRCConstants_rodata) + SIZEOF(.data);
	.sdata ALIGN(4) : AT (__sdata_start_lma)
	{
		PROVIDE (_SDA_BASE_ = 32768);
	    PROVIDE (__sdata_start = .);
		*(.sdata .sdata.* .gnu.linkonce.s.*)
    	*(.CC_sdata .CC_sdata.*)
    	*(.Protocols_sdata .Protocols_sdata.*)
	    PROVIDE (__sdata_end = .);
	} > internal_RAM

	.sbss ALIGN(4) :
	{
	    PROVIDE (__sbss_start = .);
		*(.sbss .sbss.* .gnu.linkonce.sb.*)
		*(.scommon .scommon.*)
    	*(.CC_sbss .CC_sbss.*)
    	*(.Protocols_sbss .Protocols_sbss.*)
	    PROVIDE (__sbss_end = .);
	} > internal_RAM

	.bss ALIGN(4) :
	{
	    PROVIDE (__bss_start = .);
		*(.bss .bss.* .gnu.linkonce.b.*)
		*(.comm .comm.*)
    	*(.CC_bss .CC_bss.*)
    	*(.Protocols_bss .Protocols_bss.*)
    	*(.dma_word_bss .dma_word_bss.*)
    	*(.dma_halfword_bss .dma_halfword_bss.*)
	} > internal_RAM

    .sbss2 ALIGN(4) : 
    { 
        *(.sbss2 .sbss2.* .gnu.linkonce.sb2.*)
    } > internal_RAM

    /* .[fixed_]ramcals is used for explicitly copied Serial EEPROM variables, not for emulated Parallel EEPROM */
    .fixed_ramcals /* NOCLEAR */ ALIGN(4) (NOLOAD):
    {
        *(.fixed_ramcals)
    } > internal_RAM
    .ramcals /* NOCLEAR */ ALIGN(4) (NOLOAD):
    {
        *(.ramcals)
    } > internal_RAM
    
        

    .CC_Stack_bss  ALIGN(8) (NOLOAD):
    {
    	*(.CC_Stack_bss .CC_Stack_bss.*)
    } > internal_RAM

    PROVIDE (_end = .);

    .heap (NOLOAD) :
    {
        . = ALIGN(16);
        PROVIDE (__heap_start = .);
        . += 4K;
        PROVIDE (__heap_end = .);
    } > internal_RAM
    .external_SRAM_bss (NOLOAD) :
    {
        *(.external_SRAM_bss .external_SRAM_bss.*)
    } > external_RAM
        
    /*
    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Working Copy of Calibration in External RAM
    // Copied from .flashcals by CCC startup code, to emulate Parallel EEPROM
    */
    .cals (NOLOAD):  
    {
        *(.cals)
    } > RAM_CALIBRATION


    .serial_ee_rodata       : { *(.serial_ee_rodata) } > SERIAL_EE
    .serial_ee_bss (NOLOAD) : { *(.serial_ee_bss)    } > SERIAL_EE
    .serial_ee_data         : { *(.serial_ee_data)   } > SERIAL_EE


	/* Empty sections as info at the load address for (.data etc) used for information
	   when MotoConvert parses the map file for aliased/initialised RAM sections */

  	.romdata __data_start_lma (INFO) :
	{
	    PROVIDE (__romdata_start = .);
	}
  	.romsdata __sdata_start_lma (INFO) :
	{
	    PROVIDE (__romsdata_start = .);
	}
  	.rom_CC_data __sdata_start_lma (INFO) :
	{
	    PROVIDE (__rom_CC_data_start = .);
	}
  	.rom_Protocols_sdata __sdata_start_lma (INFO) :
	{
	    PROVIDE (__rom_Protocols_sdata_start = .);
	}
  	.rom_Protocols_data __sdata_start_lma (INFO) :
	{
	    PROVIDE (__rom_Protocols_data_start = .);
	}

  /* Exception frame information (potentially useful to debuggers) */
	.eh_frame_hdr : { *(.eh_frame_hdr) }
	.eh_frame     : { *(.eh_frame)     }

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


    