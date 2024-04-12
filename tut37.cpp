#include <iostream>
using namespace std;

// Base class -> Employee
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class -> Programmer
// syntax:
// class {{derived_class_name}} : {{visibility-mode}} {{base_class_name}}
// {
// class members/methods/etc...
// }

// Note:
// 1. Default visibility mode is private
// 2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
// 3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
// 4. Private members are never inherited
// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{

public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee Dog(1), Cat(2);
    cout << Dog.salary << endl;
    cout << Cat.salary << endl;
    Programmer SkillF(10);
    cout << SkillF.languageCode << endl;
    cout << SkillF.id << endl;
    SkillF.getData();
    return 0;
}