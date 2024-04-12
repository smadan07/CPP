#include <iostream>
using namespace std;

// Define a class called 'Person'

class Person
{
public:

    // Data members or attributes
    string name;
    int age;

    // Constructor to initialize object's state
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    // Member function or method to display information
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // Create objects of the 'Person' class
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    // Call the 'displayInfo' method for each object
    cout << "Person 1 Information:" << endl;
    person1.displayInfo();

    cout << "\nPerson 2 Information:" << endl;
    person2.displayInfo();

    return 0;
}

// In this program, we've covered the following basic OOP concepts:

// Class: We define a class called Person. A class is a blueprint or template for creating objects.

// Objects: We create two objects (person1 and person2) of the Person class. Objects are instances of a class, and they represent real-world entities.

// Data Members: Inside the Person class, we have data members (name and age) that represent the attributes of a person.

// Constructor: The class has a constructor (Person(string n, int a)) that is used to initialize the object's state when it's created. Constructors have the same name as the class and are used to set initial values for data members.

// Member Function (Method): We have a member function (displayInfo) in the class that displays the information about a person. Member functions are operations or behaviors associated with objects.

// Encapsulation: Data members (name and age) are encapsulated within the class, meaning they are hidden from outside access and can only be accessed through member functions.

// Object Interaction: In the main function, we create objects and call the displayInfo method to interact with the objects and retrieve their information.

// This program demonstrates the basic principles of OOP, including encapsulation, abstraction, and object interaction.
