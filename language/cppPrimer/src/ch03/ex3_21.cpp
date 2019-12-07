/*
 * @Author: Wang Yi
 * @Github: https://github.com/timeflies1113
 * @Date: 2019-11-19 09:54:54
 * @LastEditors: Wang Yi
 * @LastEditTime: 2019-11-19 10:51:31
 * @FilePath: \cppPrimer\src\ch03\ex3_21.cpp
 * @Description: file content
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;              // size:0,  no values.
    vector<int> v2(10);          // size:10, value:0
    vector<int> v3(10, 42);      // size:10, value:42
    vector<int> v4{10};          // size:1,  value:10
    vector<int> v5{10, 42};      // size:2,  value:10, 42
    vector<string> v6{10};       // size:10, value:""
    vector<string> v7{10, "hi"}; // size:10, value:"hi"

    for (auto iter = v1.begin(); iter != v1.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << "size" << v1.size();
    cout << endl;

    for (auto iter = v2.begin(); iter != v2.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << "size" << v2.size();
    cout << endl;

    for (auto iter = v3.begin(); iter != v3.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << "size" << v3.size();
    cout << endl;

    for (auto iter = v4.begin(); iter != v4.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << "size" << v4.size();
    cout << endl;

    for (auto iter = v5.begin(); iter != v5.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << "size" << v5.size();
    cout << endl;

    for (auto iter = v6.begin(); iter != v6.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << "size" << v6.size();
    cout << endl;

    for (auto iter = v7.begin(); iter != v7.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << "size" << v7.size();
    cout << endl;

    return 0;
}