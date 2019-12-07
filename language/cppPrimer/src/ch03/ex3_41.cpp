/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 20:35:12
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 20:39:23
 * @FilePath: \cppPrimer\src\ch03\ex3_41.cpp
 * @Description: 使用数组初始化vector
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num[] = {1, 2, 3, 4, 5};
    vector<int> vec(begin(num), end(num));
    vector<int> vec2(num + 1, num + 5);
    for (auto i : vec) cout << i << " ";
    for (auto i : vec2) cout << i << " ";
    return 0;
}