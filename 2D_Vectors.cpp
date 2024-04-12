#include <iostream>
#include <vector> 

using namespace std;

int main()
{
    // 2D Vector
    // Syntax of 2D Vector
    vector<vector<int>> vec = {{1, 2}, {4, 7}, {0, 8, 9}, {6, 1, 4, 3}};
    for (int i = 0; i < vec.size(); i++)
    { // vec.size() is the number of rows
        for (int j = 0; j < vec[i].size(); j++)
        { // vec[i].size() is the number of columns
            int vec[i];
            cout << vec[i], vec[j];
            cout << " ";
        }
        cout << endl;
    }
    int arr[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
