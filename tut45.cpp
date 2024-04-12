#include <iostream>
using namespace std;

/*
In this program, we will see how to use virtual base class in C++ to avoid ambiguity in multiple inheritance.
*/

/*
Student --> Test [Done]
Student --> Sports [Done]
Test --> Result [Done]
Sports --> Result [Done]
*/

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is : " << total << endl;
    }
};

int main()
{
    Result Vatsalya;
    Vatsalya.set_number(18);
    Vatsalya.set_marks(99.9, 98.7);
    Vatsalya.set_score(9);
    Vatsalya.display();
    return 0;
}