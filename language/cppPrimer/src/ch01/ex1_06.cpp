#include <iostream>

int main()
{
    std::cout << "Enter two numbers for sum:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    //   ex1_06.cpp: In function 'int main()':
    //   ex1_06.cpp:8:5: error: expected primary-expression before '<<' token
    //   << " and " << v2;
    return 0;
}
