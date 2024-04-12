#include <iostream>
using namespace std;

int main()
{
    // Logical Operators

    int a = 5, b = 8;
    cout << (a <= b) && (5 != 8); // AND Operator
    cout << endl;
    cout << (a < b) || (a == b); // OR Operator
    cout << endl;
    cout << !(a == b); // Not Operator
    
    return 0;
}