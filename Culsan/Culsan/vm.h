//
//  vm.h
//  Culsan
//
//  Created by Trafton Haynes on 5/16/23.
//

#ifndef vm_h
#define vm_h

#include "chunk.h"
#include "table.h"
#include "value.h"

#define STACK_MAX 256

typedef struct{
    Chunk* chunk;
    uint8_t* ip;
    Value stack[STACK_MAX];
    Value* stackTop;
    Table strings;
    Obj* objects;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR,
} InterpretResult;

extern VM vm;

void initVM(void);
void freeVM(void);

InterpretResult interpret(const char* source);

void push(Value value);
Value pop(void);

#endif /* vm_h */
