#include <iostream>

int main (void)
{
    int month = 9, day = 7;
    int leading_month = 09, leading_day = 07;

    std::cout << "No leading zeroes: " << month << "/" << day << std::endl;
    std::cout << "No leading zeroes: " << leading_month << "/" << leading_day << std::endl;

    return 0;
}
