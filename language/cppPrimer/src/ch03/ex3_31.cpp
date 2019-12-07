/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 15:54:42
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 16:00:06
 * @FilePath: \cppPrimer\src\ch03\ex3_31.cpp
 * @Description: file content
 */

#include <cstddef>
#include <iostream>

int main()
{
    int a[10];
    for (size_t index = 0; index < 10; index++) {
        a[index] = index;
    }
    for (auto i : a) std::cout << i << " ";
    return 0;
}