#include "../include/common.h"
#include "../include/chunk.h"
#include "../include/debug.h"
#include "../include/vm.h"


int main(int argc, const char* argv[]){

	initVM();


	Chunk chunk;
	initChunk(&chunk);

	int constant1 = addConstant(&chunk, 1.2);
	int constant2 = addConstant(&chunk, 2.4);

	writeChunk(&chunk, OP_CONSTANT, 123);
	writeChunk(&chunk, constant1, 123);


	writeChunk(&chunk, OP_CONSTANT, 124);
	writeChunk(&chunk, constant2, 124);
	writeChunk(&chunk, OP_NEGATE, 123);


	writeChunk(&chunk, OP_RETURN, 125);
	disassembleChunk(&chunk, "test chunk");

	interpret(&chunk);
	freeVM();
	freeChunk(&chunk);

	return 0;
}

