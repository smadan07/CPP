#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; // Continue Statement
        }
        cout << i << endl;
    }
    int j = 11;
    while (j <= 20)
    {
        cout << j << endl;
        j++;
        if (j == 15)
        {
            break; // Break Statement
        }
    }
    return 0;
}