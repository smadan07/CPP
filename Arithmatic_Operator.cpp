#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    float b = 5.2;
    float c = a * b;
    cout << "The sum is : " << c << endl;

    int ans = 5 * 2 / 4; // Associativity : Left ==> Right
    int ans = 5 * (2 / 4); // Higest Precedence of the operator will execute first and then the next

    int a = 5, b = 3;
    float c = a + b;
    float ans = c / 3;

    cout << ans;

    return 0;
}