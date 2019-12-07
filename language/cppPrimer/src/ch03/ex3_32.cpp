/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 16:01:44
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 16:03:13
 * @FilePath: \cppPrimer\src\ch03\ex3_32.cpp
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

    int b[10];
    for (size_t index = 0; index < 10; index++) {
        b[index] = a[index];
    }

    for (auto i : b) std::cout << i << " ";
    return 0;
}