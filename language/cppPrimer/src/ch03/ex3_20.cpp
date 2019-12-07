/*
 * @Author: Wang Yi
 * @Date: 2019-11-18 16:53:48
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-18 20:07:00
 * @Description: "读入一组整数存入vector，输出相邻数字的和/输出第一+最后一个数字的和，以此类推"
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i;
    vector<int> ivec;
    while (cin >> i) ivec.push_back(i);

    int result;
    for (decltype(ivec.size()) index = 0; index != ivec.size() - 1; index++) {
        result = ivec[index] + ivec[index + 1];
        cout << result << ' ';
    }
    cout << endl;

    for (decltype(ivec.size()) index = 0; index != ivec.size() / 2; index++) {
        result = ivec[index] + ivec[ivec.size() - index - 1];
        cout << result << ' ';
    }

    return 0;
}