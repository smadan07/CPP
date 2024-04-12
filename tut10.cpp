#include <iostream>
using namespace std;

// Loops in C++
// 1)For loop
// 2)While loop
// 3)Do-While loop

int main()
{
    
    // cout<<1; //Normal way of repeating numbers in a loop
    // cout<<2; //Not an optimal way of writing code :(
    // cout<<3;
    // cout<<4;

    // For loop //Optimal way of writing code

    // Syntax => for(initialization; condition; updation){ //Code }

    // for (int i = 1; i <= 4; i++)
    // {
    //     cout << i << endl;
    // }

    // While loop

    // Syntax => while(condition){ //Code }
    // Printing 1 To 40 using while loop

    // int i = 1;
    // while (i <= 40)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // Do-While loop

    // Syntax => do{ //Code }while(condition);
    // Printing 1 To 40 using do while loop
    // int i = 1;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 40);

    // Multiplication table using Do-While loop

    int n;
    cout << "Enter the value : ";
    cin >> n;
    int i = 1;
    cout << "\nThe Table of " << n << endl;
    do
    {
        cout << n << "x" << i << "=" << i * n << endl;
        i++;
    } while (i <= 10);

    return 0;
}
