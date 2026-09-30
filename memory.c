#include "memory.h"
static uint8_t memory[MEMORY_SIZE];

void memory_init(void) {
    for (int i=0: i< MEMORY_SIZE; i++){
        memory[i] = 0;
    }
}

uint8_t memory_read (uint16_t address){
    return memory[address];
} 

void memory_write (uint16_t address, uint8_t value){
    memory[address] =value;
}