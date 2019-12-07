// Use a range for to change all the characters in a string to X.使用传统的for语句和while语句实现

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    if (getline(cin, str)) {
        // for语句实现
        for (decltype(str.size()) index = 0; index != str.size(); index++) str[index] = 'X';
        cout << str << endl;

        // while实现
        decltype(str.size()) index = 0; //必须重新定义，因为上一个变量定义在for语句内部，是局部变量
        while (index != str.size()) {
            str[index] = 'X';
            index++;
        }
        cout << str << endl;
    }

    return 0;
}