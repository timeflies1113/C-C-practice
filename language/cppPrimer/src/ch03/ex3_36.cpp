/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 18:34:51
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 19:22:38
 * @FilePath: \cppPrimer\src\ch03\ex3_36.cpp
 * @Description: 改题目在cppPrimer项目中使用了子函数的方式，写法略有不同
 */

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 2}, b[] = {1, 2, 3, 2, 1}, *p = a;

    if (end(a) - begin(a) == end(b) - begin(b)) {
        for (int index = 0; p != end(a) && *p == b[index]; p++, index++)
            ;
        if (p != end(a)) {
            cout << "Not equal!";
        }
        else {
            cout << "equal!";
        }
    }
    else {
        cout << "Not equal!";
    }
    return 0;
}