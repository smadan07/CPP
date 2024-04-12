#include <iostream>
using namespace std;

int main()
{
    // Increment and Decrement Operators
    int a = 10;
    int b = --a; // a=9, b=9
    int c = b++; // c=9, b=10
    int d = c--; // d=9, c=8
    cout << a << " " << ++b << " " << c++ << " " << d;
    // cout << a << " " << b;
    // int b = ++a; // Pre-Increment
    // int b = a++; // Post-Increment
    // cout << a++ << endl;
    // cout << --a << endl;
    return 0;
}