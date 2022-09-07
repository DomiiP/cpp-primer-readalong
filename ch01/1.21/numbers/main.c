#include <iostream>

int main(void)
{
    std::cout << "stream of numbers: " << std::endl;
    int sum = 0, number = 0;
    while (std::cin >> number)
        sum += number;
    std::cout << "Sum: " << number << std::endl;
    return 0;
}
