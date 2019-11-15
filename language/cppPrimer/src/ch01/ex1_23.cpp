// "Write a program that reads several transactions and counts
// how many transactions occur for each ISBN."

#include "..\Sales_item.h"
#include <iostream>

int main()
{
    Sales_item item1;
    if (std::cin >> item1) {
        Sales_item item2;
        int cnt = 1;
        while (std::cin >> item2) {
            if (item1.isbn() == item2.isbn()) {
                cnt++;
            }
            else {
                std::cout << item1.isbn() << "  occurs  " << cnt << "  times." << std::endl;
                item1 = item2;
                cnt = 1;
            }
        }
        std::cout << item1.isbn() << "  occurs  " << cnt << "  times." << std::endl;
    }
    else {
        std::cerr << "there is no data!" << std::endl;
        return -1;
    }
    return 0;
}