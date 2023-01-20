/* compile command
g++ ./test/__test__float3.cpp ./source/math/vector/float3.cpp -o __test__float3.exe -I./include/math/vector
 */

#include "float3.hpp"

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "---begin---" << endl;
    {
        float3 test1;
        float3 test2(1.1f, 2.2f, 3.3f);
        cout << test1.x << ", " << test1.y << ", " << test1.z << " " << test1.u << ", " << test1.v << " " << test1.r << ", " << test1.g << ", " << test1.b << endl;
        cout << test2.x << ", " << test2.y << ", " << test2.z << " " << test2.u << ", " << test2.v << " " << test2.r << ", " << test2.g << ", " << test2.b << endl;
    }
    {
        float3 test3(1.0f, 2.0f, 3.0f);
        float3 test4(1.1f, 2.2f, 3.3f);
        cout << -test3.x << ", " << -test3.y << ", " << -test3.z << endl;
        test3 = test4;
        cout << test3.x << ", " << test3.y << ", " << test3.z << endl;
        test3 = 10.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z << endl;
        cout << test3[0] << ", " << test3[1] << ", " << test3[2] << endl;
        cout << (test3 + test4).x << ", " << (test3 + test4).y << ", " << (test3 + test4).z << endl;
        cout << (test3 - test4).x << ", " << (test3 - test4).y << ", " << (test3 - test4).z << endl;
        cout << (test3 + 1.0f).x << ", " << (test3 + 1.0f).y << ", " << (1.0f + test3).z << endl;
        cout << (test3 - 1.0f).x << ", " << (test3 - 1.0f).y << ", " << (test3 - 1.0f).z << endl;
        cout << (test3 * 2.0f).x << ", " << (test3 * 2.0f).y << ", " << (2.0f * test3).z << endl;
        cout << (test3 / 2.0f).x << ", " << (test3 / 2.0f).y << ", " << (test3 / 2.0f).z << endl;
        test3 += test4;
        cout << test3.x << ", " << test3.y << ", " << test3.z << endl;
        test3 -= test4;
        cout << test3.x << ", " << test3.y << ", " << test3.z  << endl;

        test3 = 1.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z  << endl;
        test3 += 1.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z  << endl;
        test3 -= 1.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z  << endl;
        test3 *= 2.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z  << endl;
        test3 /= 2.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z  << endl;
    }
    {
        float3 test5(3.0f, 4.0f, 1.0f);
        cout << test5.norm() << " " << test5.norm_square() << " " << endl;
        test5.normalize();
        cout << test5.x << ", " << test5.y << ", " << test5.z << endl;
    }
    {
        float3 test6(1.0f, 2.0f, 3.0f);
        float3 test7(2.0f, 2.0f, 2.0f);
        cout << test6.dot(test7) << endl;
        cout << test6.cross(test7).x << ", " << test6.cross(test7).y << ", " << test6.cross(test7).z << ", " << endl;
    }
}
