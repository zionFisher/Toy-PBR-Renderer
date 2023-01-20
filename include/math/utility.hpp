#pragma once

#include "float2.hpp"
#include "float3.hpp"
#include "float4.hpp"

float dot(const float2 &lhs, const float2 &rhs)
{
    return lhs.x * rhs.x + lhs.y * rhs.y;
}

float dot(const float3 &lhs, const float3 &rhs)
{
    return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
}

float dot(const float4 &lhs, const float4 &rhs)
{
    return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z + lhs.w * rhs.w;
}

float3 cross(const float3 &lhs, const float3 &rhs)
{
    return float3(lhs.y * rhs.z - lhs.z * rhs.y, lhs.z * rhs.x - lhs.x * rhs.z, lhs.x * rhs.y - lhs.y * rhs.x);
}
