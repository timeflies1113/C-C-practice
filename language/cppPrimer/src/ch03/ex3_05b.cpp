// "link two string with " ""

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
        // sum += word + ' '; //这样写最终连接的字符串会多出一个空格
        if (sum.empty()) {
            sum += word;
        }
        else {
            sum += ' ' + word;
        }
    }
    cout << "finally:" << sum << endl; // getline方法会去掉回车符
    return 0;
}