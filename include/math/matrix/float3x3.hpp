#pragma once

#include "float3.hpp"

class float3x3
{
public:
    float3 rows[3];

public:
    constexpr float3x3();
    constexpr float3x3(float3 row1, float3 row2, float3 row3);
    constexpr float3x3(float3 rows[3]);

public:
    constexpr float3 &operator[](int index);
};
