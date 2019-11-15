// "print 10 to 0"

#include <iostream>

int main()
{
    int count = 10;
    while (count >= 0) {
        std::cout << "at present the num is :" << count << std::endl;
        count--;
    }

    return 0;
}