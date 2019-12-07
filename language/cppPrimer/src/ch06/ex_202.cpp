/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-21 11:05:40
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-21 11:10:29
 * @FilePath: \cppPrimer\src\ch06\ex_202.cpp
 * @Description: Page202
 */

#include <iostream>
#include <string>
using namespace std;

char& get_val(string& str, string::size_type ix)
{
    return str[ix];
}

int main()
{
    string s("a value");
    cout << s << endl;
    get_val(s, 0) = 'A';
    cout << s << endl;
    return 0;
}