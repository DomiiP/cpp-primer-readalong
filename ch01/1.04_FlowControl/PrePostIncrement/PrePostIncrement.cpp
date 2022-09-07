// A demo for prefix and postfix incrementation

#include<iostream>
using std::cout;

int main() {
   int x = 3, y, z;
   y = x++; // y is assigned to x, x is incremented to 4
   z = ++x; // x is incremented to 5, z is assigned to x
   cout << x << ", " << y << ", " << z;
   return 0;
}