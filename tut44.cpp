// !--virtual base class in c++--!

/*
A virtual base class is a concept in object-oriented programming, often used in languages like C++ to prevent ambiguity and the "diamond problem" in multiple inheritance. When a class is marked as a virtual base class, it ensures that only one instance of that class is shared among all the derived classes that inherit from it, even if there are multiple paths to reach the base class through inheritance. This helps in avoiding issues like duplicate data members and ambiguous function calls in complex class hierarchies. In C++, you mark a base class as virtual by using the `virtual` keyword in the inheritance declaration.
*/