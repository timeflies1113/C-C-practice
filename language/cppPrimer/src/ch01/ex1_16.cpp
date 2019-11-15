// "input ints constantly, and print their sum"

#include <iostream>

int main()
{
    std::cout << "Please input nums:(Type a str. as the end of the input)" << std::endl;
    int sum = 0, value = 0;
    while (std::cin >> value) { //当输入的不是整数或是文件结束符是为假
        sum += value;
    }
    std::cout << "sum is :" << sum << std::endl;
}