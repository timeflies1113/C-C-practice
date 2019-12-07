// "修改错误"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec(1);
    ivec[0] = 42;
    cout << ivec[0];
    return 0;
}