// Q) Write a program to demonstrate the use of Constructor with default argument having class named Complex.

#include <iostream>

using namespace std;
class Complex
{
    int a, b;

public:
    // A parameterised constructor with default arguments.
    Complex(int x = 0, int y = 1)
    {
        a = x;
        b = y;
        cout << "An object of class Complex is created and a constructor is invoked." << endl;
    }
    void printData(void)
    {
        cout << "The complex number : " << a << " + " << b << "i" << endl
             << endl;
    }
};

int main()
{
    Complex c1;
    c1.printData();

    Complex c2(12);
    c2.printData();

    Complex c3(31, 87);
    c3.printData();

    return 0;
}