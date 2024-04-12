#include <iostream>
using namespace std;

int main() //***What is pointer? ==> Pointer is a Datatype Which Holds The address of the other datatypes***//

{
    int a = 3;
    int *b = &a;
    // Or
    // int *b;
    // b = &a;

    // & --> (Address of) the operator
    cout << "The Address of a is : " << b << endl;
    cout << "The Address of a is : " << &a << endl;

    // * --> (Value at) Dereference operator
    cout << "The Value at address b is : " << *b << endl;

    // Pointer to Pointer --> Chain of pointers
    int **c = &b;
    cout << "The address of b is : " << &b << endl;
    cout << "The address of b is : " << b << endl;
    cout << "The value at address value_at(value_at(c)) is : " << **c << endl;

    return 0;
}