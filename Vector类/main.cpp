/* 样例演示 */
#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    Vector vec;
    vec.push_back(1);
    cout << vec[0] << endl;
    vec.push_back(2);
    cout << vec[1] << endl;
    vec.push_back(3);
    cout << vec[2] << endl;

    return 0;
}
