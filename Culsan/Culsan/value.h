//
//  value.h
//  Culsan
//
//  Created by Trafton Haynes on 5/15/23.
//

#ifndef value_h
#define value_h

#include "common.h"

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);

void printValue(Value value);

#endif /* value_h */
