// "count how many times does the ints of input appears."

#include <iostream>

int main()
{
    std::cout << "Please input nums:" << std::endl;
    int value, repeat;

    // 如果不加if语句，当一个数字都不输入时，结果会打印"0出现1次"，这是不正确的
    if (std::cin >> value) {
        int cnt = 1;
        while (std::cin >> repeat) { // record the present value
            if (value == repeat) {   // compare the next value with the present value
                cnt++;
                value = repeat; //这一句可以不要，因为当数字相等时，这个式子总是成立的
            }
            else {
                std::cout << value << "  appears  " << cnt << "  times" << std::endl;
                value = repeat;
                cnt = 1; //重置计数器
            }
        }
        std::cout << value << "  appears  " << cnt << "  times" << std::endl;
    }
    else { //没有数字输入时提出警告
        std::cout << "there is nothing!!!" << std::endl;
    }
    return 0;
}