#include <stdint.h>

//Definitions and Declarations
extern void main(void);
extern unsigned int _etext, _sdata, _edata, _sbss, _ebss;
void _start (void);

//body
void __attribute__ ((section(".after_vectors"),noreturn,weak))
_start (void){


    char *s[1];
    int code ;
    uint32_t *from, *sdata, *edata, *sbss, *ebss;

    from = (uint32_t *)&_etext;
    sdata = (uint32_t *)&_sdata;
    edata = (uint32_t *)&_edata;
    sbss = (uint32_t *)&_sbss;
    ebss = (uint32_t *)&_ebss;  

    for(; sdata < edata; )
    {
        *sdata++ = *from++;
    }
    for(; sbss < ebss; )
    {
        *sbss++ = 0;
    }

    main();

}