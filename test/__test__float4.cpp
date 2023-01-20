/* compile command
g++ ./test/__test__float4.cpp ./source/math/vector/float4.cpp -o __test__float4.exe -I./include/math/vector
 */

#include "float4.hpp"

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "---begin---" << endl;
    {
        float4 test1;
        float4 test2(1.1f, 2.2f, 3.3f, 4.4f);
        cout << test1.x << ", " << test1.y << ", " << test1.z << ", " << test1.w << " " << test1.u << ", " << test1.v << " " << test1.r << ", " << test1.g << ", " << test1.b << ", " << test1.a << endl;
        cout << test2.x << ", " << test2.y << ", " << test2.z << ", " << test2.w << " " << test2.u << ", " << test2.v << " " << test2.r << ", " << test2.g << ", " << test2.b << ", " << test2.a << endl;
    }
    {
        float4 test3(1.0f, 2.0f, 3.0f, 4.0f);
        float4 test4(1.1f, 2.2f, 3.3f, 4.4f);
        cout << -test3.x << ", " << -test3.y << ", " << -test3.z << ", " << -test3.w << endl;
        test3 = test4;
        cout << test3.x << ", " << test3.y << ", " << test3.z << ", " << test3.w << endl;
        test3 = 10.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z << ", " << test3.w << endl;
        cout << test3[0] << ", " << test3[1] << ", " << test3[2] << ", " << test3[3] << endl;
        cout << (test3 + test4).x << ", " << (test3 + test4).y << ", " << (test3 + test4).z << ", " << (test3 + test4).w << endl;
        cout << (test3 - test4).x << ", " << (test3 - test4).y << ", " << (test3 - test4).z << ", " << (test3 - test4).w << endl;
        cout << (test3 + 1.0f).x << ", " << (test3 + 1.0f).y << ", " << (test3 + 1.0f).z << ", " << (1.0f + test3).w << endl;
        cout << (test3 - 1.0f).x << ", " << (test3 - 1.0f).y << ", " << (test3 - 1.0f).z << ", " << (test3 - 1.0f).w << endl;
        cout << (test3 * 2.0f).x << ", " << (test3 * 2.0f).y << ", " << (test3 * 2.0f).z << ", " << (2.0f * test3).w << endl;
        cout << (test3 / 2.0f).x << ", " << (test3 / 2.0f).y << ", " << (test3 / 2.0f).z << ", " << (test3 / 2.0f).w << endl;
        test3 += test4;
        cout << test3.x << ", " << test3.y << ", " << test3.z << ", " << test3.w << endl;
        test3 -= test4;
        cout << test3.x << ", " << test3.y << ", " << test3.z << ", " << test3.w << endl;

        test3 = 1.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z << ", " << test3.w  << endl;
        test3 += 1.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z << ", " << test3.w  << endl;
        test3 -= 1.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z << ", " << test3.w  << endl;
        test3 *= 2.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z << ", " << test3.w  << endl;
        test3 /= 2.0f;
        cout << test3.x << ", " << test3.y << ", " << test3.z << ", " << test3.w  << endl;
    }
    {
        float4 test5(3.0f, 4.0f, 1.0f, 1.0f);
        cout << test5.norm() << " " << test5.norm_square() << " " << endl;
        test5.normalize();
        cout << test5.x << ", " << test5.y << ", " << test5.z << ", " << test5.w << endl;
    }
    {
        float4 test6(1.0f, 2.0f, 3.0f, 4.0f);
        float4 test7(2.0f, 2.0f, 2.0f, 2.0f);
        cout << test6.dot(test7) << endl;
    }
}
