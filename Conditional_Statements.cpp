#include <iostream>
using namespace std;

int main()
{
    // 1) Simple If Statements
    // int a = 20;
    // if (a < 50)
    //     cout << "True" << endl;

    // 2) If else Statements
    // int b = 20;
    // if (b < 30)
    // {
    //     cout << "True";
    // }
    // else
    // {
    //     cout << "False";
    // }

    // 3) If, else If ladder

    // int a, b, c;
    // cin >> a >> b >> c;

    // if (a > b && a > c)
    // {
    //     cout << a;
    // }
    // else if (b > a && b > c)
    // {
    //     cout << b;
    // }
    // else
    // {
    //     cout << c;
    // }

    // 4) Nested if Statements
    // int x, y, z;
    // cin >> x >> y >> z;
    // if (x > y)
    // {
    //     if (x > z)
    //         cout << x;
    //     else
    //         cout << z;
    // }
    // else
    // {
    //     if (y > z)
    //         cout << y;
    //     else
    //         cout << z;
    // }

    // 5) Ternary Operator : It is a short hand if else statement  (condition) ? true : false

    int marks;
    cout << "Enter the Marks : ";
    cin >> marks;
    string result;
    result = (marks > 35) ? "Pass" : "Fail";
    cout << result;
    return 0;
}