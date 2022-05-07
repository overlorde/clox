#ifndef clox_vm_h
#define clox_vm_h

#include "chunk.h"

// VM state will point out a chunk from the memory.

typedef struct{
	Chunk* chunk;
} VM;

void initVM();
void freeVM();

#endif

