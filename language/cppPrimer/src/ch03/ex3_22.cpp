/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 10:54:03
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 11:01:20
 * @FilePath: \cppPrimer\src\ch03\ex3_22.cpp
 * @Description: file content
 */
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> vec;
    string word;
    while (getline(cin, word)) vec.push_back(word);

    for (auto iter = vec.begin(); iter != vec.end() && !iter->empty(); iter++) {
        for (auto& c : *iter) {
            c = toupper(c);
        }
        cout << *iter << " " << endl;
    }

    return 0;
}