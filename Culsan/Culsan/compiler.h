//
//  compiler.h
//  Culsan
//
//  Created by Trafton Haynes on 5/18/23.
//

#ifndef compiler_h
#define compiler_h

#include "object.h"
#include "vm.h"

bool compile(const char* source, Chunk* chunk);

#endif /* compiler_h */
