// "input items . And use ADD(require same ISBN)"

#include "..\Sales_item.h"
#include <iostream>

int main()
{
    Sales_item item, sum;
    if (std::cin >> sum) {
        while (std::cin >> item) {
            if (item.isbn() == sum.isbn()) sum += item;
        }
        std::cout << sum << std::endl;
    }

    return 0;
}