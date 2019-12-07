// "输出ex3_13中vector对象的容量和具体内容"

#include <iostream>
#include <string>
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

    //范围for语句实现输出vector容量及具体内容
    for (auto i : v1) cout << i << endl;
    cout << "v1 size:" << v1.size() << endl;

    for (auto i : v2) cout << i << endl;
    cout << "v2 size:" << v2.size() << endl;

    for (auto i : v3) cout << i << endl;
    cout << "v3 size:" << v3.size() << endl;

    for (auto i : v4) cout << i << endl;
    cout << "v4 size:" << v4.size() << endl;

    for (auto i : v5) cout << i << endl;
    cout << "v5 size:" << v5.size() << endl;

    for (auto i : v6) cout << i << endl;
    cout << "v6 size:" << v6.size() << endl;

    for (auto i : v7) cout << i << endl;
    cout << "v7 size:" << v7.size() << endl;

    return 0;
}