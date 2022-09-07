/* main.cpp -- pg.24: The Bookstore Program
 * Write a program that reads several transactions and counts how many 
 * transactions occur for each ISBN */

#include <iostream>
#include "Sales_item.h"

int main (void)
{
    Sales_item total; // Variable ot hold data for the next transaction
    if (std::cin >> total ) {
        Sales_item trans;   // Variable ot hold the running sum
        // Read and process remaining transacitons
        while (std::cin >> trans) {
            // if we're still processing the same book
            if (total.isbn() == trans.isbn()) {
                total += trans; // Update the running sum
            } else {
                // Print results from previous book
                std::cout << total << std::endl;
                total = trans; // Total now refers to the next book
            }
        }
    } else {
        // no input! warn the user
        std::cerr << "No input file." << std::endl;
        return -1;
    }
    return 0;
}
