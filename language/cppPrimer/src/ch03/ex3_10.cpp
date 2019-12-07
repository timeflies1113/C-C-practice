// 读一个包含标点符号的字符串，去掉标点符号输出字符串

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;

    // 使用传统for语句实现
    if (getline(cin, line)) {
        for (decltype(line.size()) index = 0; index != line.size(); index++) {
            if (!ispunct(line[index]))
                cout << line[index]; //不能使用赋空字符实现，因为str[index]不能赋值空字符
        }
        cout << endl;
    }

    // c++11标准中使用新for语句实现
    for (auto& c : line) {
        if (!ispunct(c)) cout << c;
    }

    return 0;
}