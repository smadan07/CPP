#include <iostream>  //Header File
using namespace std; //**********INHERITANCE***********//
class A // Parent Class
{
private: // Only in Class A
    int x;

public: // Anywhere
    int y;

protected: // In class A and child classes of A
    int z;
};
class B : public A // Child Class
{
    void fun()
    {
        //  x=10; //Error
        y = 20;
        z = 30;
    }
};
int main()
{ 
    // Start of the main function
    A obj;
    // obj.x=1;  //Error Private Member Cannot Accessed Outside the class A
    obj.y = 2; // NO ERROR
    // obj.z=3; //Error Protected Only Accessed in class A and child classes of A
    cout << obj.y;
}