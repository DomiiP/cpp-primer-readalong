// Which, If any, of the following assignments are invalid?
// if they are valid, explain what they do
#include <iostream>

int main (void)
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    std::cout << "int i = " << i << "&r1 = " << &r1 << std::endl;
    r2 = 3.14159;
    std::cout << "r2 = " << r2 << std::endl;
    std::cout << "d = " << d << std::endl;
    i = r2;
    std::cout << "i = " << i << std::endl;
    r2 = r1;
    std::cout << "r2 = " << r2 << std::endl;
    std::cout << "d = " << d << std::endl;
    r1 = d;
    std::cout << "r1 = " << r1 << std::endl;


    return 0;
}
