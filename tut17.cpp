#include <iostream>
using namespace std;

// inline int product(int a, int b) // This is a inline function
// {
//     return a * b;
// }

// Not recommended to use inline function with loops and static variables

int product(int a, int b) // This is a inline function
{
    static int c = 0; // This executes only once
    c = c + 1;        // Next time this function is run, the value of c will be retained
    return a * b + c;
}

int moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

// int strlen(const char *p) // Const is used to make sure that the value of p is not changed
// {
// }

int main()
{
    int a, b;
    cout << "Enter the value of a & b : ";
    cin >> a >> b;
    cout << "The product of a and b is " << product(a, b) << endl;
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year" << endl;
    cout << "For VIP : If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.1) << " Rs after 1 year" << endl;
    return 0;
}
