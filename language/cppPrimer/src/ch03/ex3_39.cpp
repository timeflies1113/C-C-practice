/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 19:46:48
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 19:52:16
 * @FilePath: \cppPrimer\src\ch03\ex3_39.cpp
 * @Description: Not me write.
 * 注意比较两个c风格字符串时，比较的是他们对应的指针
 */
#include <cstring>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    // use string.
    string s1("Mooophy");
    string s2("Pezy");

    if (s1 == s2)
        cout << "same string." << endl;
    else if (s1 > s2)
        cout << "Mooophy > Pezy" << endl;
    else
        cout << "Mooophy < Pezy" << endl;

    cout << "=========" << endl;
    // use C-Style character strings.
    const char* cs1 = "Wangyue";
    const char* cs2 = "Pezy";

    auto result = strcmp(cs1, cs2);
    if (result == 0)
        cout << "same string." << endl;
    else if (result < 0)
        cout << "Wangyue < Pezy" << endl;
    else
        cout << "Wangyue > Pezy" << endl;

    return 0;
}
