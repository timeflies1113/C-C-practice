// "用cin读入一组证书并把他们存入一个vector对象"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int i;
    while (cin >> i) {
        vec.push_back(i);
    }

    return 0;
}