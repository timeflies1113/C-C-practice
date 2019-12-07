// "link two string"

#include <iostream>
#include <string>
// using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string word, sum;
    while (cin >> word) {
        sum += word;
    }
    cout << "finally:" << sum << endl; // getline方法会去掉回车符
    return 0;
}