// Count down from 10 to 0 using the decrement operator
#include <iostream>

int main(void)
{
    std::cout << "Begin countdown:" << std::endl;
    
    int counter = 10;
    while (counter > -1){
        std::cout << counter << std::endl;
        --counter;
    }
    std::cout << "Liftoff!" << std::endl;

    return 0;
}