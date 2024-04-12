#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Employee id: ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is Employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // throws an error
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0
int main()
{
    Employee Vatsalya, Cat, Dog;
    // Vatsalya.id=1;
    // Vatsalya.count=1; //This will throw an error as id and count are private

    Vatsalya.setData();
    Vatsalya.getData();
    Employee::getCount();

    Cat.setData();
    Cat.getData();
    Employee::getCount();

    Dog.setData();
    Dog.getData();
    Employee::getCount();
    return 0;
}