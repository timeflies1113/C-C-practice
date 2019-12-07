/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 19:31:04
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 19:52:29
 * @FilePath: \cppPrimer\src\ch03\ex3_37.cpp
 * @Description: Not me write.
 * C风格字符串的strlen，strcat，strcpy.ca的后边没有\0，则在打印擦得时候把s也打印出来了
 */
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    // char ca[] = {'C', '+', '+', 'f', 'f', '\0'};
    // cout << strlen(ca) << endl;
    // return 0;

    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char s[] = "world";
    const char* cp = ca;
    while (*cp) {
        cout << *cp; //由于编译器原因？？？并没有打印出s？？？
        ++cp;
    }
    return 0;
}