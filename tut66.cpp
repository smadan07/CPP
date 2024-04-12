#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class Vasu
{
public:
    T1 a;
    T2 b;
    T3 c;
    Vasu(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    Vasu<> h(4, 6.4, 'c');
    h.display();
    cout << endl;
    Vasu<float, char, char> g('c', 'o', 'c');
    g.display();
    return 0;
}