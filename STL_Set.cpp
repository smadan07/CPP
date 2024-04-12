#include <iostream> //Header File
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Start of the main function
    set<int> s;
    // Insertion
    s.insert(10);
    s.insert(7);
    s.insert(5);
    s.insert(7);
    s.insert(20);
    for (auto it = s.begin(); it != s.end(); it++)
    { // Print from left to right
        cout << *it << " ";
    }
    cout << endl;
    // Deletion
    s.erase(7);
    for (auto it = s.begin(); it != s.end(); it++)
    { // Print from left to right
        cout << *it << " ";
    }
    cout << endl;
    // Searching
    int element = 100;
    auto it2 = s.find(element);
    if (it2 != s.end())
    {
        cout << element << " is found" << endl;
    }
    else
    {
        cout << element << " is not found" << endl;
    }
    element = 10;
    auto it3 = s.find(element);
    if (it3 != s.end())
    {
        cout << element << " is found" << endl;
    }
    else
    {
        cout << element << " is not found" << endl;
    }
    // Counting (Either 0 or 1)
    element = 20;
    int n = s.count(element);
    cout << element << " occurs " << n << " times." << endl;
    // Minimum Element
    int min_value = *s.begin();
    cout << "Minimum Value is " << min_value << endl;
    // Maximum Element
    int max_value = *s.rbegin();
    cout << "Maximum Value is " << max_value << endl;
}