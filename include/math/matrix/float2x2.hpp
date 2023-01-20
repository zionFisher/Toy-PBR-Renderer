#pragma once

#include "float2.hpp"

class float2x2
{
public:
    float2 rows[3];

public:
    constexpr float2x2();
    constexpr float2x2(float2 row1, float2 row2);
    constexpr float2x2(float2 rows[2]);

public:
    constexpr float2 &operator[](int index);
};
