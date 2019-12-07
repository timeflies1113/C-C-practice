/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 18:29:53
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 18:33:34
 * @FilePath: \cppPrimer\src\ch03\ex3_35.cpp
 * @Description: file content
 */

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3}, *p = a;
    for (; p != end(a); p++) {
        *p = 0;
    }
    for (auto i : a) cout << i << endl;
    return 0;
}
