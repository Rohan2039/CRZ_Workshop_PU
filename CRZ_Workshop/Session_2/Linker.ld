MEMORY
{
    RAM (rwx) : ORIGIN = 0x20000000, LENGTH = 128K
    FLASH (xr): ORIGIN = 0x08000000, LENGTH = 1024K
}

_estack = ORIGIN(RAM) + LENGTH (RAM);

SECTIONS
{
    .CODE :
    {
        KEEP(*(.isr_vector))
        *(.text)
        *(.rodata)
        *(.after_vectors .after_vectors.*)
        . = ALIGN(4);
        _etext = .;
    }>FLASH
    
}