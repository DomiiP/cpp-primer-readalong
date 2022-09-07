/* main.cpp
 * Exercise 1.20: Using Sales_item.h, write a program that reads a set of book
 * sales transactions, writing each transaction to the standard output      */

#include <iostream>
#include "Sales_item.h"

int main (void)
{
    // Recall: Sales_item takes in ISBN, # copies sold, $ price
    Sales_item book;
    while (std::cin >> book)
        // Writes ISBN, # copies sold, revenue, price to std::out
        std::cout << book << std::endl;
    return 0;
}
