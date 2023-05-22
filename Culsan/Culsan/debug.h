//
//  debug.h
//  Culsan
//
//  Created by Trafton Haynes on 5/15/23.
//

#ifndef debug_h
#define debug_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk,  int offset);

#endif /* debug_h */
