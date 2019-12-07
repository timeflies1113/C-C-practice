/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 10:15:56
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 10:35:12
 * @FilePath: \cppPrimer\src\ch03\ex3_24.cpp
 * @Description: file content
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    int num;
    while (cin >> num) nums.push_back(num);
    // 输出连续两个数字的和
    auto iter = nums.begin(), end = nums.end();
    for (; iter != (end - 1); iter++) cout << (*iter) + (*(iter + 1)) << " ";
    cout << endl;

    // 输出第一个元素和最后一个元素的和
    for (auto iter = nums.begin(), iter2 = nums.end(); iter <= iter2; iter++, iter2--) {
        cout << *iter + *(iter2 - 1) << " ";
    }
    return 0;
}