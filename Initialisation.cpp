#include <iostream>
using namespace std;

int main()
{
    // int a; => int a=14; assigning the value
    // a=14;
    
    int a = 12, b = 23;
    double c = 33.33;
    char d = 'A';       // Single Quotes
    string s = "Hello"; // Double Quotes

    cout << a << endl;   // O/P => 12
    cout << "a" << endl; // O/P => a

    // int f;
    // cout << "The value of f is :" << f;  If the value is uninitialised we get garbage value
    a = 15; // Change of value After Declaration
    cout << "The value of a is : " << a << endl;

    // Constants: Fixed value that cannot be modified in the program

    const int val = 39;

    // val = 50; If we try to change the value it throws the error!

    cout << "The value of const int is : " << val << endl;

    return 0;
}
