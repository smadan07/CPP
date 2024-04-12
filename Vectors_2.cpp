#include <iostream> //Header File
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    // Start of the main function
    vector<int> vec = {2, 6, 4};
    cout << "Size = " << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    vec.push_back(9); // Adds an element at the end
    cout << "Size = " << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    vec.insert(vec.begin() + 1, 10); // Insert 10 at index 1
    cout << "Size = " << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    vec.pop_back(); // Removes the last element
    cout << "Size = " << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    vec.erase(vec.begin() + 2);
    cout << "Size = " << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
