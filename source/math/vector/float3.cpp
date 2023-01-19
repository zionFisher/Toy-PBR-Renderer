#include "float3.hpp"

void float3::normalize()
{
    float norm = this->norm();
    if (norm == 0)
        return;

    *this /= norm;
}

float float3::norm() const
{
    return std::sqrt(this->norm_square());
}

float float3::norm_square() const
{
    return this->x * this->x + this->y * this->y + this->z * this->z;
}
