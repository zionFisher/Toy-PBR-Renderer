#include "float3.hpp"

float3 float3::normalize()
{
    float norm = this->norm();
    if (norm == 0)
        return;

    *this /= norm;
    return *this;
}

float float3::norm() const
{
    return std::sqrt(this->norm_square());
}

float float3::norm_square() const
{
    return this->x * this->x + this->y * this->y + this->z * this->z;
}

float float3::dot(const float3 &other) const
{
    return this->x * other.x + this->y * other.y + this->z * other.z;
}

float3 float3::cross(const float3 &other) const
{
    return float3(this->y * other.z - this->z * other.y, this->z * other.x - this->x * other.z, this->x * other.y - this->y * other.x);
}
