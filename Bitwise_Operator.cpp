#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // cout << (a & b); //Bitwise AND
    // cout << (a | b); // Bitwise OR
    // '<<' Left Shift, '>>' Right Shift

    cout << INT_MAX << endl;
    int a = 2147483647;
    int b = a << 1;
    int c = a << 2;
    int d = a << 3;
    cout << a << "\n" // N<<K => N*2^k
         << b << "\n"
         << c << "\n"
         << d << endl;

    return 0;
}