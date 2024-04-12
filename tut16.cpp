#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap a & b
void swap(int a, int b)
{                 // temp=4  a=4   b=5
    int temp = a; // 4      4     5
    a = b;        // 4      4     5
    b = temp;     // 4      5     4
}

// Call by reference using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Call by reference using C++ reference Variables
// int &
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // return a;
}
int main()
{
    int x, y;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of y : ";
    cin >> y;

    cout << "The value of a is : " << x << " And The value of y is : " << y << endl;
    // cout << "The sum is : " << sum(x, y) << endl;
    // swap(x, y); // This will not swap x and y
    // swapPointer(&x, &y); This will swap x and y using pointer reference
    swapReferenceVar(x, y); // This will swap x and y using reference variables
    // swapReferenceVar(x, y) = 766; // This will swap x and y using reference variables
    cout << "The value of x after swap is : " << x << " And The value of y after swap is : " << y << endl;

    return 0;
}