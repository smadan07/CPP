#include <iostream>
#include <iomanip> //Manipulator
using namespace std;

int main()
{
    
    // int a = 38;
    // char c = 'a';
    // cout << "The value of a was : " << a << endl;
    // cout << "The value of c was : " << c << endl;
    // a = 40;
    // c = '3';
    // cout << "The value of a is : " << a << endl;
    // cout << "The value of c is : " << c << endl;
    // Constants in C++
    // const int a = 39;
    // cout << "The value of a was : " << a << endl;
    // a = 40;
    // cout << "The value of a is : " << a << endl;

    // Manipulators in C++

    // int a = 8, b = 38, c = 3348;
    // cout << "The value of a without setw is : " << a << endl;
    // cout << "The value of b without setw is : " << b << endl;
    // cout << "The value of c without setw is : " << c << endl;
    // cout << "The value of a with setw is : " << setw(4) << a << endl;
    // cout << "The value of b with setw is : " << setw(4) << b << endl;
    // cout << "The value of c with setw is : " << setw(4) << c << endl;

    int a = 3, b = 4;
    // int c = a * 5 + b;// Operator Precedence
    int c = ((((a * 5) + b) - 45) + 87); // Associativity from left to right
    cout << c;
    return 0;
}
