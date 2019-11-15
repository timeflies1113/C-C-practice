// "Using the `Sales_item.h` header from the Web site, compile and execute the bookstore program
// presented in this section."

#include "..\Sales_item.h"
#include <iostream>

int main()
{
    Sales_item item1;
    if (std::cin >> item1) {
        Sales_item item2;
        while (std::cin >> item2) {
            if (item1.isbn() == item2.isbn()) {
                item1 += item2;
            }
            else {
                std::cout << item1 << std::endl;
                item1 = item2;
            }
        }
        std::cout << item1 << std::endl;
    }
    else {
        std::cerr << "there is no data!" << std::endl;
        return -1;
    }
    return 0;
}