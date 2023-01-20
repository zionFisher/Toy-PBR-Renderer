#include "float2.hpp"

void float2::normalize()
{
    float norm = this->norm();
    if (norm == 0)
        return;

    *this /= norm;
}

float float2::norm() const
{
    return std::sqrt(this->norm_square());
}

float float2::norm_square() const
{
    return this->x * this->x + this->y * this->y;
}

float float2::dot(const float2 &other) const
{
    return this->x * other.x + this->y * other.y;
}
