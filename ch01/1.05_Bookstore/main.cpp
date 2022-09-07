#include <iostream>
#include "Sales_item.h"

int main (void)
{
    Sales_item book;
    // read ISBN; # copies sold; sales price
    std::cin >> book;
    // Write ISBN, # copies sold, total revenue; and average price
    std::cout << book << std::endl;
    return 0;
}
