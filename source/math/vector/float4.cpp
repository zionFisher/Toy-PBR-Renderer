#include "float4.hpp"

void float4::normalize()
{
    float norm = this->norm();
    if (norm == 0)
        return;

    *this /= norm;
}

float float4::norm() const
{
    return std::sqrt(this->norm_square());
}

float float4::norm_square() const
{
    return this->x * this->x + this->y * this->y + this->z * this->z + this->w * this->w;
}

float float4::dot(const float4 &other) const
{
    return this->x * other.x + this->y * other.y + this->z * other.z + this->w * other.w;
}
