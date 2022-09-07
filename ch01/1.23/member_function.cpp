/* member_function.cpp
 * Write a program that reads several transactions and counts how many 
 * transactions occur for each ISBN */

#include <iostream>
#include "Sales_item.h"

int main (void)
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2; 
    // Check if item1 and item 2 are the same book
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    } else {
        std::cerr << "Data must share the same ISBN" << std::endl;
        return -1;  // indicate some failure code
    }
}
