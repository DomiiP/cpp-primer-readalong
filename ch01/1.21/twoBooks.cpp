/* main.cpp
Write a program that reads two Sales_item objects with the same ISBN and produces their sum */

#include <iostream>
#include "Sales_item.h"

int main(void)
{
    std::cout << "Enter two identical book sales: " << std::endl;
    Sales_item book1, book2;
    std::cin >> book1 >> book2;
    std::cout << "Total sum is: " << book1 + book2 << std::endl;
    
    return 0;
}