#include <iostream>
using namespace std;

// Access Specifiers
class Student
{
public:
    int rollno; 
    
    // Public Attribute

    // int rollno; // Private Attribute
    // void print()
    // { // Private Function
    //     cout << "RollNo:" << rollno << endl;
    // }
public:
    void print()
    { // Public Function
        cout << "RollNo:" << rollno << endl;
    }
};
int main()
{
    Student s1;
    // s1.print(); // Error Cannot Access private function
    // s1.rollno=10; // Error Cannot Access private class member
    s1.rollno = 10;
    s1.print();
    return 0;
}
