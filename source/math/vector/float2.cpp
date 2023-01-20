#include "float2.hpp"

constexpr float2 operator+(const float &lhs, const float2 &rhs)
{
    return float2(lhs + rhs.x, lhs + rhs.y);
}

constexpr float2 operator*(const float &lhs, const float2 &rhs)
{
    return float2(lhs * rhs.x, lhs * rhs.y);
}
