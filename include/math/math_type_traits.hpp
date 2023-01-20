class float2;
class float3;
class float4;

template<typename T>
struct is_vector
{
    constexpr static bool value = false;
};

template<>
struct is_vector<float2>
{
    constexpr static bool value = true;
};

template<>
struct is_vector<float3>
{
    constexpr static bool value = true;
};

template<>
struct is_vector<float4>
{
    constexpr static bool value = true;
};
