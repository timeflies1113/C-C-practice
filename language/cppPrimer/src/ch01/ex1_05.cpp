#include <iostream>

int main()
{
    std::cout << "Enter two numbers for product:" << std::endl;
    int v1, v2;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "the product of v1 and v2 is:";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;
}