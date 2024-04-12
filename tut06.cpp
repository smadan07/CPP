// There are two types of header files :
// 1) System header files : It comes with the compiler
#include <iostream>
// 2) User defined header files : It is written by the programmer
// #include<user.h> => Like this we can create our own Header file but we need to include the Header file in the Current directory Otherwise it will give error

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "\nEnter the value of b : ";
    cin >> b;

    cout << "\nOperators in C++" << endl;
    cout << "\nFollowing are the types of Arithmetic Operators" << endl;
    // Arithmetic Operators
    cout << "\nThe value of a + b is : " << a + b << endl;
    cout << "The value of a - b is : " << a - b << endl;
    cout << "The value of a * b is : " << a * b << endl;
    cout << "The value of a / b is : " << a / b << endl;
    cout << "The value of a % b is : " << a % b << endl;

    cout << "\nFollowing are the types of Increment & Decrement Operators" << endl;
    // Increment & Decrement Operators
    cout << "\nThe value of a++ is : " << a++ << endl;
    cout << "The value of a-- is : " << a-- << endl;
    cout << "The value of ++a is : " << ++a << endl;
    cout << "The value of --a is : " << --a << endl;

    // Assignment Operators => Used to assign values to variables
    //  int a=5,b=7;
    //  char d='f';

    cout << "\nFollowing are the types of Relational Or Comparision Operators" << endl;
    // Relational Or Comparision Operators
    cout << "\nThe value of a==b is : " << (a == b) << endl;
    cout << "The value of a!=b is : " << (a != b) << endl;
    cout << "The value of a>=b is : " << (a >= b) << endl;
    cout << "The value of a<=b is : " << (a <= b) << endl;
    cout << "The value of a >b is : " << (a > b) << endl;
    cout << "The value of a <b is : " << (a < b) << endl;

    cout << "\nFollowing are the types of Logical Operators" << endl;
    // Logical Operators
    cout << "\nThe value of AND (&&) is : " << ((a > b) && (a >= b)) << endl;
    cout << "The value of OR  (||) is : " << ((a >= b) || (a != b)) << endl;
    cout << "The value of NOT (!)  is : " << !(a < b) << endl;

    cout << "\nFollowing are the types of Bitwise Operators" << endl;
    // Bitwise Operators
    cout << "\nThe value of AND (&) is : " << (a & b) << endl;
    cout << "The value of OR | is : " << (a | b) << endl;
    cout << "The value of NOT ~ is : " << ~(a) << endl;
    cout << "The value of Left Shift '<<' is : " << (a << 1) << endl;
    cout << "The value of Right Shift '>>' is : " << (a >> 1) << endl;
    cout << "The value of XOR ^ is : " << (a ^ b) << endl;

    cout << "\nFollowing are the types of Assignment Operators" << endl;
    // Assignment Operators
    cout << "\nThe value of a+=b is : " << (a += b) << endl;
    cout << "The value of a-=b is : " << (a -= b) << endl;
    cout << "The value of a*=b is : " << (a *= b) << endl;
    cout << "The value of a/=b is : " << (a /= b) << endl;
    cout << "The value of a%=b is : " << (a %= b) << endl;
    cout << "The value of a<<=b is : " << (a <<= b) << endl;
    cout << "The value of a>>=b is : " << (a >>= b) << endl;
    cout << "The value of a&=b is : " << (a &= b) << endl;
    cout << "The value of a|=b is : " << (a |= b) << endl;
    cout << "The value of a^=b is : " << (a ^= b) << endl;
    return 0;
}