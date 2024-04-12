#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Syntax of vectors
    vector<int> num;
    num = {1, 2, 3, 4, 5};
    cout << num.size() << endl;
    cout << num[1] << endl;
    num.insert(num.begin() + 1, 200);
    cout << num[1] << endl;

    return 0;
}