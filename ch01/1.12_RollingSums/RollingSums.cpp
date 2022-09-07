// RollingSumss.cpp

#include <iostream>

int main (void)
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i){
        sum += 1;
        std::cout << "Sum val: " << sum << std::endl;
    }
    std::cout << "Sum val: " << sum << std::endl;

    return 0;
}