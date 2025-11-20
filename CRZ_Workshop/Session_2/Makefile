build:
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -g -O0 -T Linker.ld -Wl,-Map=LedBlink.map -nostartfiles -o LedBlink.elf *.c
	
qemud:
	qemu-system-gnuarmeclipse -cpu cortex-m4 -machine STM32F4-Discovery -nographic -semihosting-config enable=on,target=native -kernel LedBlink.elf -S -s

qemu:
	qemu-system-gnuarmeclipse -cpu cortex-m4 -machine STM32F4-Discovery -nographic -semihosting-config enable=on,target=native -kernel LedBlink.elf

gdb:
	arm-none-eabi-gdb LedBlink.elf

clean:
	rm -rf *.o *.map *.elf *.bin *.hex *.s *.out