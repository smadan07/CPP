#include <iostream>
#include <limits.h> // Header File which stores the limits or range of all the Datatypes

using namespace std;

int main()
{
    // Built in Data types :

    int a;    // Integer 2 or 4 bytes Stores whole numbers, without decimals
    float b;  // Stores 4 bytes of fractional numbers,  containing  one  or  more  decimals
    char c;   //  Stores a single character/letter/number, or ASCII values of 1 byte
    double d; // Stores 8 bytes fractional  numbers,  containing  one  or  more  decimals
    bool e;   // Stores true or false values of 1 bytes
    long f;   // Stores Large Numbers of 8 bytes

    // Derived data type :

    string g; // Collection of Characters

    // Size of any data type

    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(string) << endl;

    cout << INT_MIN << endl; // It shows the minimum value that we can store in int datatype
    cout << INT_MAX << endl; // It shows the maximum value that we can store in int datatype
    return 0;
}
