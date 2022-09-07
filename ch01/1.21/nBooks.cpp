/* main.cpp
Write a program that reads two Sales_item objects with the same ISBN and produces their sum */

#include <iostream>
#include "Sales_item.h"

int main(void)
{
    std::cout << "Enter identical book sales: " << std::endl;
    Sales_item book, bookSum;
    while (std::cin >> book)
        bookSum += book;
    std::cout << "Total sum is: " << bookSum << std::endl;
    return 0;
}