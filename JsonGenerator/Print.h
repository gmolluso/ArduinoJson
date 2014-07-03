/*
 * Arduino JSON library
 * Benoit Blanchon 2014 - MIT License
 */

#pragma once

#ifndef ARDUINO

typedef unsigned char uint8_t;

class Print
{
public:

    virtual size_t write(uint8_t c) = 0;

    size_t write(const char* s);
};

#else

#include <Print.h>

#endif
