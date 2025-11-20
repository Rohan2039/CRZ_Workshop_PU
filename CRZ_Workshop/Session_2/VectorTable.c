//Definitions and Declarations
extern unsigned int _estack;
extern void Reset_Handler(void);


//Body
typedef void
(* const pHandler)(void);

__attribute__ ((section(".isr_vector"), used))
pHandler __isr_vectors[] = {
    (pHandler) &_estack,   // 0: Initial Stack Pointer
    Reset_Handler         // 1: Reset
};
