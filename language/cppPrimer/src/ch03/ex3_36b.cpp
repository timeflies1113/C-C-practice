/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 19:22:58
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 19:28:06
 * @FilePath: \cppPrimer\src\ch03\ex3_36b.cpp
 * @Description: vector可以直接使用==查看是否相等
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1(10, 5), vec2(10, 6);
    cout << "vec1: ";
    for (auto i : vec1) cout << i << " ";
    cout << "vec2: ";
    for (auto i : vec1) cout << i << " ";
    cout << endl;

    if (vec1 == vec2) {
        cout << "equal!";
    }
    else {
        cout << "Not equal!";
    }
    return 0;
}