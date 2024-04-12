#include <iostream>
using namespace std;

int main()
{

    // 1. Selection control structure : if-else ladder

    int age;
    cout << "Tell me your age : ";
    cin >> age;
    // if (age < 1)
    // {
    //     cout << "You are not yet born";
    // }
    // else if (age < 18)
    // {
    //     cout << "You cannot come to the party";
    // }
    // else if (age == 18)
    // {
    //     cout << "You are a kid and you're gonna get a kid pass";
    // }
    // else if (age > 100)
    // {
    //     cout << "Not a valid age ";
    // }
    // else
    // {
    //     cout << "You can come to the party";
    // }

    // 2. Selection control structure : Switch Case statements

    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;
    case 2:
        cout << "You are 2" << endl;
        break;
    default:
        cout << "No special cases" << endl;
        break;
    }
    cout << "\nThe end of switch case";
    return 0;
}