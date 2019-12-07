// "定义含有10个元素的vector，所有对象都是42.列举三种方法"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec1(10，42);
    vector<int> ivec2{42，42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> ivec3;
    for (int index = 0; index != 10; index++) {
        ivec3.push_back(42);
    }

    return 0;
}