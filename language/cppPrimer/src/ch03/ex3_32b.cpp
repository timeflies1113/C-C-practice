/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 16:03:58
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 16:14:02
 * @FilePath: \cppPrimer\src\ch03\ex3_33.cpp
 * @Description: file content
 */
#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(10);
    for (auto iter = a.begin(); iter != a.end(); iter++) {
        *iter = iter - a.begin();
    }

    // copy a to b
    vector<int> b(a);
    // cout
    for (auto i : b) {
        cout << i << " ";
    }
    return 0;
}