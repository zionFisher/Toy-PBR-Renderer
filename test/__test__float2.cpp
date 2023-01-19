/* compile command
g++ ./test/__test__float2.cpp ./source/math/vector/float2.cpp -o __test__float2.exe -I./include/math/vector
 */

#include "float2.hpp"

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "---begin---" << endl;
    cout << "prefix \"==\" means current line is code " << endl << endl;
    {
        float2 test1;
        float2 test2(1.1f, 2.2f);
        cout << test1.x << ", " << test1.y << " " << test1.u << ", " << test1.v << " " << test1.r << ", " << test1.g << endl;
        cout << test2.x << ", " << test2.y << " " << test2.u << ", " << test2.v << " " << test2.r << ", " << test2.g << endl;
    }
    {
        float2 test3(1.0f, 2.0f);
        float2 test4(1.1f, 2.2f);
        cout << -test3.x << ", " << -test3.y << endl;
        test3 = test4;
        cout << test3.x << ", " << test3.y << endl;
        test3 = 10.0f;
        cout << test3.x << ", " << test3.y << endl;
        cout << test3[0] << ", " << test3[1] << endl;
        cout << (test3 + test4).x << ", " << (test3 + test4).y << endl;
        cout << (test3 - test4).x << ", " << (test3 - test4).y << endl;
        cout << (test3 * test4).x << ", " << (test3 * test4).y << endl;
        cout << (test3 / test4).x << ", " << (test3 / test4).y << endl;
        cout << (test3 + 1.0f).x << ", " << (test3 + 1.0f).y << endl;
        cout << (test3 - 1.0f).x << ", " << (test3 - 1.0f).y << endl;
        cout << (test3 * 2.0f).x << ", " << (test3 * 2.0f).y << endl;
        cout << (test3 / 2.0f).x << ", " << (test3 / 2.0f).y << endl;
        test3 += test4;
        cout << test3.x << ", " << test3.y << endl;
        test3 -= test4;
        cout << test3.x << ", " << test3.y << endl;
        test3 *= test4;
        cout << test3.x << ", " << test3.y << endl;
        test3 /= test4;
        cout << test3.x << ", " << test3.y << endl;

        test3 = 1.0f;
        cout << test3.x << ", " << test3.y << endl;
        test3 += 1.0f;
        cout << test3.x << ", " << test3.y << endl;
        test3 -= 1.0f;
        cout << test3.x << ", " << test3.y << endl;
        test3 *= 2.0f;
        cout << test3.x << ", " << test3.y << endl;
        test3 /= 2.0f;
        cout << test3.x << ", " << test3.y << endl;
    }
    {
        float2 test5(3.0f, 4.0f);
        cout << test5.norm() << " " << test5.norm_square() << " " << endl;
        test5.normalize();
        cout << test5.x << ", " << test5.y << endl;
    }
}
