#include "float4.hpp"

constexpr float4 operator+(const float &lhs, const float4 &rhs)
{
    return float4(lhs + rhs.x, lhs + rhs.y, lhs + rhs.z, lhs + rhs.w);
}

constexpr float4 operator*(const float &lhs, const float4 &rhs)
{
    return float4(lhs * rhs.x, lhs * rhs.y, lhs * rhs.z, lhs * rhs.w);
}
