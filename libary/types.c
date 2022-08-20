#ifndef TYPES_H
#define TYPES_H

typedef unsigned int u32;

typedef signed int i32;

typedef unsigned char u8;

typedef signed char i8;

typedef unsigned char fn;

const u8 pcp9 = 9;
const fn fnerror = -1;

enum bu {
    false = (u8) 0u,
    true = (u8) 1u
};

typedef enum bu b;

#endif
