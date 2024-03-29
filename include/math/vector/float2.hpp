#pragma once

#include <cmath>

class float2
{
public:
    union { float x, u, r; };
    union { float y, v, g; };

public:
    constexpr float2();
    constexpr float2(float x, float y);

public:
    constexpr float2        operator- () const;
    constexpr float2&       operator= (const float2 &value);
    constexpr float2&       operator= (const float &value);
    constexpr float&        operator[](const int index);
    constexpr const float & operator[](const int index) const;
    constexpr float2        operator+ (const float2 &other) const;
    constexpr float2        operator- (const float2 &other) const;
    constexpr float2        operator+ (const float value) const;
    constexpr float2        operator- (const float value) const;
    constexpr float2        operator* (const float value) const;
    constexpr float2        operator/ (const float value) const;
    constexpr float2 &      operator+=(const float2 &other);
    constexpr float2 &      operator-=(const float2 &other);
    constexpr float2 &      operator+=(const float value);
    constexpr float2 &      operator-=(const float value);
    constexpr float2 &      operator*=(const float value);
    constexpr float2 &      operator/=(const float value);

public:
    constexpr float2 normalize  ();
    constexpr float  norm       () const;
    constexpr float  norm_square() const;
    constexpr float  dot        (const float2& other) const;
};

constexpr float2::float2() : x(0), y(0) {}
constexpr float2::float2(float x, float y) : x(x), y(y) {}

constexpr float2 float2::operator-() const
{
    return float2(-this->x, -this->y);
}

constexpr float2 &float2::operator=(const float2 &value)
{
    this->x = value.x;
    this->y = value.y;
    return *this;
}

constexpr float2& float2::operator=(const float &value)
{
    this->x = value;
    this->y = value;
    return *this;
}

constexpr float &float2::operator[](const int index)
{
    return (index == 0 ? x : y);
}

constexpr const float &float2::operator[](const int index) const
{
    return (index == 0 ? x : y);
}

constexpr float2 float2::operator+(const float2 &other) const
{
    return float2(this->x + other.x, this->y + other.y);
}

constexpr float2 float2::operator-(const float2 &other) const
{
    return float2(this->x - other.x, this->y - other.y);
}

constexpr float2 float2::operator+(const float value) const
{
    return float2(this->x + value, this->y + value);
}

constexpr float2 float2::operator-(const float value) const
{
    return float2(this->x - value, this->y - value);
}

constexpr float2 float2::operator*(const float value) const
{
    return float2(this->x * value, this->y * value);
}

constexpr float2 float2::operator/(const float value) const
{
    // if (value == 0)
    // {
    //     // TODO: exception
    //     return float2(0, 0);
    // }

    return float2(this->x / value, this->y / value);
}

constexpr float2 &float2::operator+=(const float2 &other)
{
    this->x += other.x;
    this->y += other.y;
    return *this;
}

constexpr float2 &float2::operator-=(const float2 &other)
{
    this->x -= other.x;
    this->y -= other.y;
    return *this;
}

constexpr float2 &float2::operator+=(const float value)
{
    this->x += value;
    this->y += value;
    return *this;
}

constexpr float2 &float2::operator-=(const float value)
{
    this->x -= value;
    this->y -= value;
    return *this;
}

constexpr float2 &float2::operator*=(const float value)
{
    this->x *= value;
    this->y *= value;
    return *this;
}

constexpr float2 &float2::operator/=(const float value)
{
    // if (value == 0)
    // {
    //     // TODO: exception
    // }

    this->x /= value;
    this->y /= value;
    return *this;
}

constexpr float2 float2::normalize()
{
    float norm = this->norm();
    if (norm == 0)
        return;

    *this /= norm;
    return *this;
}

constexpr float float2::norm() const
{
    return std::sqrt(this->norm_square());
}

constexpr float float2::norm_square() const
{
    return this->x * this->x + this->y * this->y;
}

constexpr float float2::dot(const float2 &other) const
{
    return this->x * other.x + this->y * other.y;
}
