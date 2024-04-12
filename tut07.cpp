#include <iostream>
using namespace std;

int c = 45;  // Global Variable

int main()
{
    // int a, b, c;
    // cout << "Enter the value of a : ";
    // cin >> a;
    // cout << "Enter the value of b : ";
    // cin >> b;
    // c = a + b;
    // cout << "The sum of a & b is : " << c << endl;
    // cout << "The global c is : " << ::c; // Scope Resolution Operator ==> '::'

    // ******************Float,double and long double Literals********************

    float d = 34.4f;       // 34.4f ==> Floating value
    long double e = 35.5l; // 35.5l ==> Long double

    // By default 35.5 is consider as double and to specify that 35.5 is a float we write it like this 35.5f

    cout << "The size of 34.4 is : " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is : " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is : " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is : " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is : " << sizeof(34.4L) << endl;
    cout << "The value of d is : " << d << endl // Chaining
         << "The value of e is : " << e << endl;

    // **************Reference Variables********************
    float x = 455;
    float &y = x;
    cout << x << endl;
    cout << y << endl;

    //    *************Typecasting**************
    int a = 45;
    float b = 45.46;
    cout << "The value of a is : " << (float)a << endl; // Or we can typecast float(a)
    cout << "The value of b is : " << (int)b << endl;   // Or we can typecast int(b)
    int c = int(b);

    cout << "The Expression is : " << a + b << endl;
    cout << "The Expression is : " << a + int(b) << endl;
    cout << "The Expression is : " << a + (int)b << endl;
    return 0;
}
