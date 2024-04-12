#include <iostream>
using namespace std;
// Function Prototype
// type function-name (arguments);
// int sum(int a, int b); -----> Acceptable
// int sum(int a, b); ------> Not Acceptable
// int sum(int , int ); ------>  Acceptable
int sum(int a, int b);
void g(void);
int main()
{
    int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "The sum is : " << sum(num1, num2) << endl;
    g();
    return 0;
}
int sum(int a, int b)
{
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello, Good Morning";
}