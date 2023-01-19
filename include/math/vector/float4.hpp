#pragma once

#include <cmath>

class float4
{
public:
    union { float x, u, r; };
    union { float y, v, g; };
    union { float z,    b; };
    union { float w,    a; };

public:
    constexpr float4();
    constexpr float4(float x, float y, float z, float w);

public:
    constexpr float4 operator-() const;
    constexpr float4& operator=(const float4 &value);
    constexpr float4& operator=(float value);
    constexpr float& operator[](const int index);
    constexpr float4 operator+(const float4 &other) const;
    constexpr float4 operator-(const float4 &other) const;
    constexpr float4 operator*(const float4 &other) const;
    constexpr float4 operator/(const float4 &other) const;
    constexpr float4 operator+(const float value) const;
    constexpr float4 operator-(const float value) const;
    constexpr float4 operator*(const float value) const;
    constexpr float4 operator/(const float value) const;
    constexpr float4& operator+=(const float4 &other);
    constexpr float4& operator-=(const float4 &other);
    constexpr float4& operator*=(const float4 &other);
    constexpr float4& operator/=(const float4 &other);
    constexpr float4& operator+=(const float value);
    constexpr float4& operator-=(const float value);
    constexpr float4& operator*=(const float value);
    constexpr float4& operator/=(const float value);

public:
    void normalize();
    float norm() const;
    float norm_square() const;
};

constexpr float4::float4() : x(0), y(0), z(0), w(0) {}
constexpr float4::float4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

constexpr float4 float4::operator-() const
{
    return float4(-this->x, -this->y, -this->z, -this->w);
}

constexpr float4 &float4::operator=(const float4 &value)
{
    this->x = value.x;
    this->y = value.y;
    this->z = value.z;
    this->w = value.w;
    return *this;
}

constexpr float4& float4::operator=(float value)
{
    this->x = value;
    this->y = value;
    this->z = value;
    this->w = value;
    return *this;
}

constexpr float &float4::operator[](const int index)
{
    return (index == 0 ? x : (index == 1 ? y : (index == 2 ? z : w)));
}

constexpr float4 float4::operator+(const float4 &other) const
{
    return float4(this->x + other.x, this->y + other.y, this->z + other.z, this->w + other.w);
}

constexpr float4 float4::operator-(const float4 &other) const
{
    return float4(this->x - other.x, this->y - other.y, this->z - other.z, this->w - other.w);
}

constexpr float4 float4::operator*(const float4 &other) const
{
    return float4(this->x * other.x, this->y * other.y, this->z * other.z, this->w * other.w);
}

constexpr float4 float4::operator/(const float4 &other) const
{
    // if (other.x == 0 or other.y == 0 or other.z == 0 or other.w == 0)
    // {
    //     // TODO: exception
    //     return float4(0, 0);
    // }

    return float4(this->x / other.x, this->y / other.y, this->z / other.z, this->w / other.w);
}

constexpr float4 float4::operator+(const float value) const
{
    return float4(this->x + value, this->y + value, this->z + value, this->w + value);
}

constexpr float4 float4::operator-(const float value) const
{
    return float4(this->x - value, this->y - value, this->z - value, this->w - value);
}

constexpr float4 float4::operator*(const float value) const
{
    return float4(this->x * value, this->y * value, this->z * value, this->w * value);
}

constexpr float4 float4::operator/(const float value) const
{
    // if (value == 0)
    // {
    //     // TODO: exception
    //     return float4(0, 0);
    // }

    return float4(this->x / value, this->y / value, this->z / value, this->w / value);
}

constexpr float4 &float4::operator+=(const float4 &other)
{
    this->x += other.x;
    this->y += other.y;
    this->z += other.z;
    this->w += other.w;
    return *this;
}

constexpr float4 &float4::operator-=(const float4 &other)
{
    this->x -= other.x;
    this->y -= other.y;
    this->z -= other.z;
    this->w -= other.w;
    return *this;
}

constexpr float4 &float4::operator*=(const float4 &other)
{
    this->x *= other.x;
    this->y *= other.y;
    this->z *= other.z;
    this->w *= other.w;
    return *this;
}

constexpr float4 &float4::operator/=(const float4 &other)
{
    // if (other.x == 0 or other.y == 0 or other.z == 0 or other.w == 0)
    // {
    //     // TODO: exception
    // }

    this->x /= other.x;
    this->y /= other.y;
    this->z /= other.z;
    this->w /= other.w;
    return *this;
}

constexpr float4 &float4::operator+=(const float value)
{
    this->x += value;
    this->y += value;
    this->z += value;
    this->w += value;
    return *this;
}

constexpr float4 &float4::operator-=(const float value)
{
    this->x -= value;
    this->y -= value;
    this->z -= value;
    this->w -= value;
    return *this;
}

constexpr float4 &float4::operator*=(const float value)
{
    this->x *= value;
    this->y *= value;
    this->z *= value;
    this->w *= value;
    return *this;
}

constexpr float4 &float4::operator/=(const float value)
{
    // if (value == 0)
    // {
    //     // TODO: exception
    // }

    this->x /= value;
    this->y /= value;
    this->z /= value;
    this->w /= value;
    return *this;
}
