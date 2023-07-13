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
#include "object.h"

#define FRAMES_MAX 64
#define STACK_MAX (FRAMES_MAX * UINT8_COUNT)

// Represents a single ongoing function call
typedef struct {
    ObjFunction* function;
    uint8_t* ip; //ip of calling CF. This returns here.
    Value* slots;
} CallFrame;

typedef struct{
    CallFrame frames[FRAMES_MAX];
    int frameCount;
    
    Value stack[STACK_MAX];
    Value* stackTop;
    Table globals;
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
