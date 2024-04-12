#include <iostream>
using namespace std;

int main()
{
    
    // Pointers - Data types which holds the address of other data types

    int a = 18;
    int *b = &a;
    cout << "The address of a is : " << &a << endl;
    cout << "The address of b is : " << b << endl;
    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << *b << endl;
    return 0;

}