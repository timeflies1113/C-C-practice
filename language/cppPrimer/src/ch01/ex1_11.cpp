// "print the numbers between any 2 int."

#include <iostream>

int main()
{
    std::cout << "Please input 2 nums :" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    int count = v2 - v1;
    if (count < 0) {
        int tmp;
        tmp = v1;
        v1 = v2;
        v2 = tmp;
        count = -count;
    }

    while (count >= 0) {
        std::cout << "at present the num is :" << count + v1 << std::endl;
        count--;
    }
    std::cout << std::endl;

    return 0;
}