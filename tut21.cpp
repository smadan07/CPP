// #include <iostream>
// using namespace std;
// class Employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setData(int a1, int b1, int c1); // Declaration
//     void getData()
//     {
//         cout << "The value of a is : " << a << endl;
//         cout << "The value of b is : " << b << endl;
//         cout << "The value of c is : " << c << endl;
//         cout << "The value of d is : " << d << endl;
//         cout << "The value of e is : " << e << endl;
//     }
// };

// void Employee::setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     Employee Person;
//     Person.d = 34;
//     Person.e = 89;
//     Person.setData(1, 2, 4);
//     Person.getData();
//     return 0;
// }

#include <iostream>
using namespace std;
class animal
{
private:
    int leg, eye, ear;

public:
    int sound, speed;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The total legs are : " << leg << endl;
        cout << "The total eyes are : " << eye << endl;
        cout << "The total ears are : " << ear << endl;
        cout << "The sound is : " << sound << endl;
        cout << "The avearage speed is : " << speed << endl;
    }
};

void animal ::setData(int a1, int b1, int c1)
{
    leg = a1;
    eye = b1;
    ear = c1;
}
int main()
{
    animal dog;
    dog.sound = 34;
    dog.speed = 89;

    dog.setData(4, 2, 2);

    dog.getData();

    return 0;
}