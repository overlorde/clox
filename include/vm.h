#ifndef clox_vm_h
#define clox_vm_h

#include "chunk.h"

// VM state will point out a chunk from the memory.

typedef struct{
	Chunk* chunk;
	uint8_t* ip;
} VM;

typedef enum{
	INTERPRET_OK,
	INTERPRET_COMPILE_ERROR,
	INTERPRET_RUNTIME_ERROR
} InterpretResult;

void initVM();
void freeVM();
InterpretResult interpret();


#endif

