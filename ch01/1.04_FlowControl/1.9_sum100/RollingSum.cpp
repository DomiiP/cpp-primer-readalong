// Sums the numbers from 50 to 100

#include <iostream>;
int main(void)
{
    int val = 50;
    int sum = val;

    // (!!) A classic error on my part. My original condiditon was [while (val <= 100)]
    //      This was in error, as the loop added an extra 101 to the final sum.
    while (val < 100){
        ++val;
        sum += val;
    }
    std::cout << "sum: " << sum << std::endl;
    std::cout << "val: " << val << std::endl;
    return 0;
}