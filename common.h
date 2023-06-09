//! @file common.h

#ifndef COMMON
#define COMMON

//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SFML/Graphics.hpp>
#include <immintrin.h>
#include <cctype>

//-----------------------------------------------------------------------------

#define INFO(i) image_info.i

//-----------------------------------------------------------------------------
// DATA TYPES
#define byte_2 uint16_t
#define byte_4 uint32_t
#define byte_8 uint64_t

//-----------------------------------------------------------------------------

#define N(i)    \
    NUM_OF_##i

#define FH_SIZE 14
#define FH_INFO_SIZE 40

#define RGBA 4

#define SOLID 255

#define DELETED_PAR 0xBADDED

#define NUM_OF_TESTS 1000

//-----------------------------------------------------------------------------

typedef struct Pix_color
{
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
} Pix_color;

//-----------------------------------------------------------------------------

typedef struct Image_info
{
    Pix_color *raster;
    uint32_t   width;
    uint32_t   height;
    uint32_t   size;
} Image_info;

//-----------------------------------------------------------------------------

#endif //COMMON