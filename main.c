#include <stdio.h>

#include "cpu.h"
#include "memory.h"

int main(void)
{
    CPU cpu;

    printf("Game Boy Emulator\n");
    printf("=================\n\n");

    memory_init();
    cpu_init(&cpu);

    /* Test program:
       LD B, 42
       HALT
    */

    memory_write(0x0000, 0x06);
    memory_write(0x0001, 42);
    memory_write(0x0002, 0x76);

    printf("Starting CPU...\n");

    while (!cpu.halted)
    {
        cpu_step(&cpu);
    }

    printf("CPU halted.\n");
    printf("Register B = %d\n", cpu.B);
    printf("Program Counter = 0x%04X\n", cpu.PC);

    return 0;
}