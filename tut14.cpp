#include <iostream>
using namespace std;
// typedef struct employee // User defined datatype
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// } ep; // Typedef Keyword helps to name the whole struct

// Union ==> Similar to struct but provide better memory management
// union money
// {
//     /* data */
//     int rice;     // 4 bytes
//     char car;     // 1 bytes
//     float pounds; // 4bytes
// };

int main()
{
    enum Meal
    {
        Breakfast,
        lunch,
        dinner
    };
    Meal m1 = lunch;
    cout << m1 << endl;
    // cout << Breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'a';
    // cout << m1.car << endl;

    // ep vatsalya;
    // vatsalya.eId = 1;
    // vatsalya.favChar = 'V';
    // vatsalya.salary = 100000;
    // cout << "The value is : " << vatsalya.eId << endl;
    // cout << "The value is : " << vatsalya.favChar << endl;
    // cout << "The value is : " << vatsalya.salary << endl;

    return 0;
}