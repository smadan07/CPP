#include <iostream> //Header File
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Start of the main function

    vector<int> vec;
    // Insertion (at end)
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(7);
    for (auto it = vec.begin(); it != vec.end(); it++)
    { // Print from left to right
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    { // Print from right to left
        cout << *it << " ";
    }
    cout << endl;
    // Insertion (at middle)
    vec.insert(vec.begin() + 1, 20);
    for (auto it = vec.begin(); it != vec.end(); it++)
    { // Print from left to right
        cout << *it << " ";
    }
    cout << endl;
    // Overwriting
    vec[2] = 5; // OR vec.at(2)=5;
    for (auto it = vec.begin(); it != vec.end(); it++)
    { // Print from left to right
        cout << *it << " ";
    }
    cout << endl;
    // Deletion (at end)
    vec.pop_back();
    for (auto it = vec.begin(); it != vec.end(); it++)
    { // Print from left to right
        cout << *it << " ";
    }
    cout << endl;
    // Deletion (in middle)
    vec.erase(vec.begin() + 1);
    for (auto it = vec.begin(); it != vec.end(); it++)
    { // Print from left to right
        cout << *it << " ";
    }
    cout << endl;
    vec.push_back(20);
    vec.push_back(2);
    vec.push_back(35);
    vec.push_back(18);
    vec.push_back(2);
    vec.push_back(2);
    for (auto it = vec.begin(); it != vec.end(); it++)
    { // Print from left to right
        cout << *it << " ";
    }
    cout << endl;
    // Sort (in ascending order)
    sort(vec.begin(), vec.end());
    for (auto it = vec.begin(); it != vec.end(); it++)
    { // Print from left to right
        cout << *it << " ";
    }
    cout << endl;
    // Reverse
    reverse(vec.begin(), vec.end());
    for (auto it = vec.begin(); it != vec.end(); it++)
    { // Print from left to right
        cout << *it << " ";
    }
    cout << endl;
    // Searching
    int element = 100;
    auto it2 = find(vec.begin(), vec.end(), element);
    if (it2 != vec.end())
    {
        cout << element << " is found at " << distance(vec.begin(), it2) << endl;
    }
    else
    {
        cout << element << " is not found" << endl;
    }
    element = 10;
    auto it3 = find(vec.begin(), vec.end(), element);
    if (it3 != vec.end())
    {
        cout << element << " is found at " << distance(vec.begin(), it3) << endl;
    }
    else
    {
        cout << element << " is not found" << endl;
    }
    // Counting
    element = 2;
    int n = count(vec.begin(), vec.end(), element);
    cout << element << " occurs " << n << " times." << endl;
    // Minimum Element
    int min_value = *min_element(vec.begin(), vec.end());
    cout << "Minimum Value is " << min_value << endl;
    // Maximum Element
    int max_value = *max_element(vec.begin(), vec.end());
    cout << "Maximum Value is " << max_value << endl;
}