// "用cin读入一组字符串并把他们存入一个vector对象"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> vec;
    string line;
    while (getline(cin, line)) {
        vec.push_back(line);
    }

    //范围for语句实现输出vector
    for (auto i : vec) cout << i << endl;

    return 0;
}