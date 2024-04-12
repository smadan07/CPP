// Create 2 classes :

// 1. SimpleCalculator -- Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.

// 2. ScientificCalculator -- Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

// Create another class HybridCalculator and inherit it using these 2 classes:

// Q1. What type of Inheritance are you using?
// Ans: Multiple Inheritance
// Q2. Which mode of Inheritance are you using?
// Ans: Public mode
// Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
// Ans: Done
// Q4. How is code reusability implemented?
// Ans: By inheriting the classes

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    double a, b;

public:
    void set_values()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    double add()
    {
        return a + b;
    }
    double subtract()
    {
        return a - b;
    }
    double multiply()
    {
        return a * b;
    }
    double divide()
    {
        return a / b;
    }
};

class ScientificCalculator
{
protected:
    double a, b;

public:
    void set_values()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    double power()
    {
        return pow(a, b);
    }
    double sqrt_a()
    {
        return sqrt(a);
    }
    double log_a()
    {
        return log(a);
    }
    double sin_a()
    {
        return sin(a);
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    HybridCalculator calc;

    cout << "Simple Calculator Operations:\n";

    calc.SimpleCalculator::set_values();

    cout << "Add : " << calc.add() << endl;

    cout << "Subtract : " << calc.subtract() << endl;

    cout << "Multiply : " << calc.multiply() << endl;

    cout << "Divide : " << calc.divide() << endl;

    cout << "\nScientific Calculator Operations:\n";

    calc.ScientificCalculator::set_values();

    cout << "Power : " << calc.power() << endl;

    cout << "Square root : " << calc.sqrt_a() << endl;

    cout << "Log : " << calc.log_a() << endl;

    cout << "Sin : " << calc.sin_a() << endl;

    return 0;
}