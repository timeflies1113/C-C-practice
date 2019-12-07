// Use a range for to change all the characters in a string to X.

// #include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    if (cin >> str) {
        for (auto& c : str) c = 'X';
        cout << str << endl;
    }
    return 0;
}