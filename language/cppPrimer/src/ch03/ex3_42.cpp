/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 20:42:21
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 20:43:08
 * @FilePath: \cppPrimer\src\ch03\ex3_42.cpp
 * @Description: Not me write
 * 将含有整数元素的vector对象拷贝给一个整形数组
 */
#include <iostream>
#include <vector>

using std::begin;
using std::cout;
using std::end;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int int_arr[10];

    for (int* i = begin(int_arr); i != end(int_arr); ++i) *i = ivec[i - begin(int_arr)];

    for (auto i : int_arr) cout << i << " ";
    cout << endl;

    return 0;
}
