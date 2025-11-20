//Definitions and Declarations
extern void _start (void);
void Reset_Handler(void);

//Body
void __attribute__ ((section(".after_vectors"),naked))
Reset_Handler(void)
  {
    asm volatile
    (
        " ldr     r0,=_start \n"
        " bx      r0"
        :
        :
        :
    );
  }