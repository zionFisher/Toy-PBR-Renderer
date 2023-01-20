#include "float3.hpp"

constexpr float3 operator+(const float &lhs, const float3 &rhs)
{
    return float3(lhs + rhs.x, lhs + rhs.y, lhs + rhs.z);
}

constexpr float3 operator*(const float &lhs, const float3 &rhs)
{
    return float3(lhs * rhs.x, lhs * rhs.y, lhs * rhs.z);
}
