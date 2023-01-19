#pragma once

#include <cmath>

class float3
{
public:
    union { float x, u, r; };
    union { float y, v, g; };
    union { float z,    b; };

public:
    constexpr float3();
    constexpr float3(float x, float y, float z);

public:
    constexpr float3 operator-() const;
    constexpr float3& operator=(const float3 &value);
    constexpr float3& operator=(float value);
    constexpr float& operator[](const int index);
    constexpr float3 operator+(const float3 &other) const;
    constexpr float3 operator-(const float3 &other) const;
    constexpr float3 operator*(const float3 &other) const;
    constexpr float3 operator/(const float3 &other) const;
    constexpr float3 operator+(const float value) const;
    constexpr float3 operator-(const float value) const;
    constexpr float3 operator*(const float value) const;
    constexpr float3 operator/(const float value) const;
    constexpr float3& operator+=(const float3 &other);
    constexpr float3& operator-=(const float3 &other);
    constexpr float3& operator*=(const float3 &other);
    constexpr float3& operator/=(const float3 &other);
    constexpr float3& operator+=(const float value);
    constexpr float3& operator-=(const float value);
    constexpr float3& operator*=(const float value);
    constexpr float3& operator/=(const float value);

public:
    void normalize();
    float norm() const;
    float norm_square() const;
};

constexpr float3::float3() : x(0), y(0), z(0) {}
constexpr float3::float3(float x, float y, float z) : x(x), y(y), z(z) {}

constexpr float3 float3::operator-() const
{
    return float3(-this->x, -this->y, -this->z);
}

constexpr float3 &float3::operator=(const float3 &value)
{
    this->x = value.x;
    this->y = value.y;
    this->z = value.z;
    return *this;
}

constexpr float3& float3::operator=(float value)
{
    this->x = value;
    this->y = value;
    this->z = value;
    return *this;
}

constexpr float &float3::operator[](const int index)
{
    return (index == 0 ? x : (index == 1 ? y : z));
}

constexpr float3 float3::operator+(const float3 &other) const
{
    return float3(this->x + other.x, this->y + other.y, this->z + other.z);
}

constexpr float3 float3::operator-(const float3 &other) const
{
    return float3(this->x - other.x, this->y - other.y, this->z - other.z);
}

constexpr float3 float3::operator*(const float3 &other) const
{
    return float3(this->x * other.x, this->y * other.y, this->z * other.z);
}

constexpr float3 float3::operator/(const float3 &other) const
{
    // if (other.x == 0 or other.y == 0 or other.z == 0)
    // {
    //     // TODO: exception
    //     return float3(0, 0);
    // }

    return float3(this->x / other.x, this->y / other.y, this->z / other.z);
}

constexpr float3 float3::operator+(const float value) const
{
    return float3(this->x + value, this->y + value, this->z + value);
}

constexpr float3 float3::operator-(const float value) const
{
    return float3(this->x - value, this->y - value, this->z - value);
}

constexpr float3 float3::operator*(const float value) const
{
    return float3(this->x * value, this->y * value, this->z * value);
}

constexpr float3 float3::operator/(const float value) const
{
    // if (value == 0)
    // {
    //     // TODO: exception
    //     return float3(0, 0);
    // }

    return float3(this->x / value, this->y / value, this->z / value);
}

constexpr float3 &float3::operator+=(const float3 &other)
{
    this->x += other.x;
    this->y += other.y;
    this->z += other.z;
    return *this;
}

constexpr float3 &float3::operator-=(const float3 &other)
{
    this->x -= other.x;
    this->y -= other.y;
    this->z -= other.z;
    return *this;
}

constexpr float3 &float3::operator*=(const float3 &other)
{
    this->x *= other.x;
    this->y *= other.y;
    this->z *= other.z;
    return *this;
}

constexpr float3 &float3::operator/=(const float3 &other)
{
    // if (other.x == 0 or other.y == 0 or other.z == 0)
    // {
    //     // TODO: exception
    // }

    this->x /= other.x;
    this->y /= other.y;
    this->z /= other.z;
    return *this;
}

constexpr float3 &float3::operator+=(const float value)
{
    this->x += value;
    this->y += value;
    this->z += value;
    return *this;
}

constexpr float3 &float3::operator-=(const float value)
{
    this->x -= value;
    this->y -= value;
    this->z -= value;
    return *this;
}

constexpr float3 &float3::operator*=(const float value)
{
    this->x *= value;
    this->y *= value;
    this->z *= value;
    return *this;
}

constexpr float3 &float3::operator/=(const float value)
{
    // if (value == 0)
    // {
    //     // TODO: exception
    // }

    this->x /= value;
    this->y /= value;
    this->z /= value;
    return *this;
}
