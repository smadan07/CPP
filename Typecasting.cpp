#include <iostream>
using namespace std;

int main()
{

    // Type-casting : Changing the Datatype of the variable

    int a = 5;    // Changing the Datatype
    double b = a; // Widening type-casting conversion 4 byte => 8 byte
    cout << "The value is : " << b << endl;

    char ch = 'A';
    int i = ch;

    cout << "The value is : " << i << endl; // O/P => Ascii code

    double c = 5.55;                        // 8 Bytes
    int d = c;                              // 4 Bytes
    cout << "The value is : " << d << endl; // Narrowing type-casting 8 byte => 4 byte

    // Conversion to string : to_string ( )

    int e = 50;
    string s = to_string(e);

    cout << "The value is : " << s << endl;

    double j = 100.1;
    string m = to_string(j);

    cout << "The value is : " << m << endl;

    char le = 'B';
    string s1 = to_string(le);
    cout << "The value is : " << s1 << endl;

    // String to integer :

    string sa = "123", sb = "2a", sc = "24.5", sd = "Hello", se = "1b1";
    int x = stoi(se);
    cout << "The value is : " << x << endl;

    // String to float :

    string s4 = "22.33";
    float k = stof(s4);
    cout << "The value is : " << k << endl;
    return 0;
}