#include "cpu.h"
#include "memory.h"

void cpu_init(CPU *cpu)
{
    cpu->A = 0;
    cpu->B = 0;
    cpu->C = 0;
    cpu->D = 0;
    cpu->E = 0;
    cpu->F = 0;
    cpu->H = 0;
    cpu->L = 0;

    cpu->PC = 0x0000;
    cpu->SP = 0xFFFE;

    cpu->halted = 0;
}

void cpu_step(CPU *cpu)
{
    if (cpu->halted)
        return;

    uint8_t opcode = memory_read(cpu->PC);

    cpu->PC++;

    switch (opcode)
    {
        case 0x00:
            /* NOP */
            break;

        case 0x06:
            /* LD B,d8 */
            cpu->B = memory_read(cpu->PC);
            cpu->PC++;
            break;

        case 0x76:
            /* HALT */
            cpu->halted = 1;
            break;

        default:
            /* Unknown instruction for now */
            break;
    }
}