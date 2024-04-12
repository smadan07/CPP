#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // char str[100] = "Hello";
    // string s; // Declaration of string
    // cin >> s; // Stops on seeing a space
    // getline(cin, s); // It dosen't stop after seeing a space it will continue
    // cout << s << endl;
    // cout << s.length(); // Number of characters present in the string
    // string s1 = "ABC";
    // s1.push_back('D'); // Insert character at the end of the string
    // cout << s1 << endl;
    // s1.pop_back(); // Removes the last character
    // cout << s1 << endl;
    // s1 = s1 + "DEFGH"; // Add a string to another string
    // cout << s1 << endl;
    // s1.append("IJK"); // Append and + are same (Concatenation)
    // cout << s1 << endl;
    // s1.insert(2, "XYZ"); // Adds a string at an y location
    // cout << s1 << endl;
    // s1.insert(1, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"); // We can insert as many characters we want
    // cout << s1 << endl;
    // s1.erase(30); // Delete all character from index 30 (0 - 29 remaining)
    // cout << s1 << endl;
    // cout << s1.length() << endl;
    // s1.erase(1, 15); // Delete 15 character Starting from index 1
    // cout << s1 << endl;
    // s1.clear(); // Delete all the characters from the string
    // cout << s1.length() << endl;

    // To compare numbers
    string s1 = "Hello";
    string s2 = "World";
    int a = s1.compare(s2);
    cout << a << endl;
    string s3 = "Hello";
    int b = s1.compare(s3); // If Strings are equal it shows the O/P ==> 0
    cout << b << endl;
    return 0;
}