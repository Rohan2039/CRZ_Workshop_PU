#include <stdint.h>

//Definitions and Declarations
extern void main(void);
extern unsigned int _etext, _sdata, _edata, _sbss, _ebss;
void _start (void);

//body
void __attribute__ ((section(".after_vectors"),noreturn,weak))
_start (void){
    main();
}