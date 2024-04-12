#include <iostream>
using namespace std;

int main()
{
    // 1D Array
    int arr[5] = {12, 28, 34, 34, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The size of an array is : " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << arr[i] << endl;
    }
    return 0;
}

// Array is a collection of similar data types stored in contiguous memory locations.