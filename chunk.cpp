#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.hpp"

enum OpCode {
    OP_RETURN,
};

struct Chunk {
    int count;
    int capacity;
    uint8_t* code;
};

#endif