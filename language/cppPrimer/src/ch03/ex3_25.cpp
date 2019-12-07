/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 09:56:08
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 10:24:49
 * @FilePath: \cppPrimer\src\ch03\ex3_25.cpp
 * @Description: file content
 */

#include <iostream>
#include <vector>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::vector;
    vector<unsigned> scores(11, 0);
    unsigned grade;

    //使用下标实现
    // while (cin >> grade) {
    //     if (grade <= 100) ++scores[grade / 10];
    // }

    //使用迭代器实现
    auto cbg = scores.begin(); // 不能使用cbegin(),返回常量，后边的++(*(cbg + grade / 10))无法运行
    while (cin >> grade) {
        if (grade <= 100) ++(*(cbg + grade / 10));
    }
    cout << endl;
    for (auto c : scores) cout << c << " ";
    return 0;
}
