// "comapre two string"

#include <iostream>
#include <string>
// using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line1, line2;
    while (cin >> line1 >> line2) {
        if (line1 == line2)
            cout << "they are equal!" << endl; // getline方法会去掉回车符
        else
            cout << "the big one is:" << ((line1 > line2) ? line1 : line2) << endl;
    }
    return 0;
}