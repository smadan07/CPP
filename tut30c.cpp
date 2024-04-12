//  Q) Create a function (Hint: make it a friend function) which takes 2 point objects and computes the distance between those 2 points

/*
  Use these examples to check your code:
  Distance between (1,1) and (1,1) is 0
  Distance between (0,1) and (0,6) is 5
  Distance between (1,0) and (70,0) is 69
*/

#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;
    friend void distance(point o1, point o2);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};
void distance(point o1, point o2)
{
    float dist;
    dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    cout << dist << endl;
}
int main()
{
    point p(1, 0);
    p.display();
    point q(70, 0);
    q.display();
    distance(p, q);

    return 0;
}
