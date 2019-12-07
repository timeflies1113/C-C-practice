/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 11:02:31
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 11:06:56
 * @FilePath: \cppPrimer\src\ch03\ex3_23.cpp
 * @Description: file content
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 45};

    for (auto iter = vec.begin(); iter != vec.end(); iter++) {
        *iter = (*iter) * 2; //可以简写为 *iter *= 2;
        cout << *iter << endl;
    }

    return 0;
}
