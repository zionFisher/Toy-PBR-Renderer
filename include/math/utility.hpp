#pragma once

#include "float2.hpp"
#include "float3.hpp"
#include "float4.hpp"
#include "math_type_traits.hpp"

#include <cmath>
#include <type_traits>

template<typename T>
constexpr typename std::enable_if<is_vector<T>::value, float>::type
dot(const T &lhs, const T &rhs)
{
    return lhs.dot(rhs);
}

constexpr float3
cross(const float3 &lhs, const float3 &rhs)
{
    return lhs.cross(rhs);
}

template<typename T>
constexpr typename std::enable_if<is_vector<T>::value, float>::type
norm(const T &vector)
{
    return vector.norm();
}

template<typename T>
constexpr typename std::enable_if<is_vector<T>::value, float>::type
norm_square(const T &vec)
{
    return vec.norm_square();
}

template<typename T>
constexpr typename std::enable_if<is_vector<T>::value, T>::type
normalize(T &vector)
{
    return vector.normalize();
}
