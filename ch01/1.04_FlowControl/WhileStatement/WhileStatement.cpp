// Chapter 1.4 While loop
#include <iostream>

int main()
{
    int sum = 0, val = 1;
    // Keep executing the while statement
    // as long as val is less than or equal to 10
    while (val <= 10){
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to 10 inclusive is: " << sum << std::endl;

    std::cout << "/*";
    std::cout << "*/";
    // Illegal: std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;
    std::cout << std::endl;

    return 0;
}
