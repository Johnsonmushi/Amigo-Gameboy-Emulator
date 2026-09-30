#ifndef MEMORY_H
#define MEMORY_H

#include<stdint.h>

#define MEMORY_SIZE 0*10000

void memory_init(void);
uint8_t memory_read(uint16_t address);
void memory_write(uint16_t address, uint8_t value);

#endif
