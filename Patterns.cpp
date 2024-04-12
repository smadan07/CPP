#include <iostream>
using namespace std;

int main()
{

    // Solid rectangular star pattern :

    // int n = 3;
    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = 0; j <= n + 1; ++j)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Hollow rectangular star pattern :
    
    // int n = 4, m = 6;

    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = 1; j <= m; ++j)
    //     {
    //         if (i == 1 || i == n || j == 1 || j == m)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Half Pyramid Star Pattern :

    // int n = 5;
    // for (int i = n; i >= 1; --i)
    // {
    //     for (int j = 1; j <= i; ++j)
    //         if (j == 1 || j == i || i == n)
    //         {
    //             cout << j;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     cout << endl;
    // }

    // Full Pyramid

    // int i, j, k, n;
    // cout << "Enter the no rows : ";
    // cin >> n;

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (k = 1; k <= 2 * i - 1; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Right Triangle

    // int i, j, k, n;
    // cout << "Enter the no rows : ";
    // cin >> n;
    // for (i = 0; i <= n; ++i)
    // {
    //     for (j = 0; j <= i; ++j)
    //     {
    //         cout << " ";
    //     }
    //     for (k = n; k >= i; --k)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Diamond Shaped star pattern 

    int i, j, k, n;
    cout << "Enter the no rows : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i * 2 - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = (n - i) * 2 - 1; k >= 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
