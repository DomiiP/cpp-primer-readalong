
#include <iostream>

int main (void)
{
    unsigned u = 10, u2 = 42;           // Predictions
    std::cout << u2 - u << std::endl;   // 32u
    std::cout << u - u2 << std::endl;   // (-32)u; big 32-bit number

    int i = 10, i2= 42;
    std::cout << i2 - i << std::endl;   // 32
    std::cout << i - i2 << std::endl;   // -32
    
    std::cout << i - u << std::endl;    // 0 I believe the lhs type is printed
    std::cout << u - i << std::endl;    // (max 32-bit)

    std::cout << "Oh boy, look at this"
        << "block of text"
        << std::cout;

    return 0;
/* Results: 
 * 32 
 * 4294967264 
 * 32 
 * -32 
 *  0 
 *  0   I was wrong here because I forgot about zero. zero is neither +/- */
}
