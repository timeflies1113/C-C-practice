// Use a range for to change all the characters in a string to X.
// 将ex3_06.cpp中的auto更换为char，效果相同

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    if (cin >> str) {
        for (char& c : str) c = 'X';
        cout << str << endl;
    }
    return 0;
}