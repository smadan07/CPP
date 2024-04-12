#include <iostream>
using namespace std;

int main()
{
    // int marks[] = {23, 45, 56, 89};
    // int num[4] = {1, 3, 4, 5};
    // num[0] = 2;
    // cout << num[0];
    string toy[] = {"Plane", "Car", "Teddy", "Doll"};
    int a[] = {1, 2, 34, 34, 35, 35, 35, 45, 45, 4, 54, 5, 45, 4, 5, 45, 45, 4, 5, 45, 45, 4, 54, 5, 4, 5};
    cout << sizeof(a) / sizeof(a[0]) << endl; // Size of an arry
    for (int i = 0; i <= 4; i++)
    {
        cout << toy[i] << endl;
    }
    return 0;
}