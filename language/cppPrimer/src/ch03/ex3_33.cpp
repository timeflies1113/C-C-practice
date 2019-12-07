/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 16:16:04
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 16:57:27
 * @FilePath: \cppPrimer\src\ch03\ex3_33.cpp
 * @Description: 未初始化scores[10]数组，将导致undefined错误
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned scores[10] = {}; //{}表示初始化为10个0
    unsigned score;
    while (cin >> score) {
        if (score <= 100) ++scores[score / 10];
    }
    cout << endl;
    for (auto& i : scores) cout << i << " ";
    return 0;
}