#include <iostream> //Header File
#include <bits/stdc++.h> // Contains all the standard libraries
using namespace std;
int main()
{
    // Start of the main function
    
    map<int, string> m;
    // Insertion  name[key] = value
    m[101] = "ABC";
    m[51] = "PQR";
    m[200] = "XYZ";
    m[101] = "MNO";
    for (auto it = m.begin(); it != m.end(); it++)
    { // Print from left to right
        cout << it->first << " " << it->second << " ";
    }
    cout << endl;
    cout << "Value at Key 101 is " << m[101] << endl;
    // Minimum Element (Key)
    auto min_ptr = *m.begin();
    cout << "Minimum Key is " << min_ptr.first << " and its value is " << min_ptr.second << endl;
    // Maximum Element (Key)
    auto max_ptr = *m.rbegin();
    cout << "Maximum Key is " << max_ptr.first << " and its value is " << max_ptr.second << endl;
}
