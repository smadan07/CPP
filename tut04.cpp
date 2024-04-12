#include <iostream>
using namespace std;
int glo = 6; // Global Variable
void sum()
{
    int a;
    cout << "Global : " << glo << endl;
}
int main()
{
    // int a = 14;
    // int b = 15;

    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'v';
    bool Coding = true;
    int glo = 70; // Local Variable (Local Variable always have higher precedence in the main function)
    glo = 68;
    cout << "Local : " << glo << endl;
    cout << "Coding is Fun : " << Coding << endl;
    sum();
    // cout << "This is tutorial 4 \n The value of a is : " << a << " \nThe value of b is : " << b << endl;
    // cout << "The value of pi is : " << pi << endl;
    // cout << "The value of c is : " << c << endl;
    return 0;
}