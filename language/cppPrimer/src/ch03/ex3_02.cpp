// "getline"

#include <iostream>
#include <string>
// using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;
    while (getline(cin, line)) {
        cout << line << endl; // getline方法会去掉回车符
    }
    return 0;
}