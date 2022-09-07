/* This example is used to demonstrate the EOF command. It also touches on
 * the complexities of std::cin. cin will errror out at an EOF, thus 
 * terminating the while loop                                               */
#include <iostream>
int main (void)
{
    int sum = 0, value = 0;
    // Read until EOF (^Z on windows; ^D on Linux)
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}